# Surmised device operation

What can be inferred about the hardware from the PC binary alone, without
ever connecting to the device. **Nothing here is verified.** Read this as
a structured set of hypotheses.

## What the PC binary is — and isn't

The whole COM-port surface of the binary fits in three functions:

| function     | what it does               | bytes on the wire |
|-------------:|----------------------------|-------------------|
| `FUN_00419b56` | open/close `\\.\COM<N>`  | none (control)    |
| `FUN_0041930f` | `write_reg(addr, val)`   | 10 + 8            |
| `FUN_0041972b` | `read_reg(addr)`         |  8 + 8            |

There are **no other commands**. No version query, no keep-alive, no boot
probe, no firmware-update, no batched bulk transfer. The PC tool sees
the device as a **5-cell register file**, full stop. Anything the
firmware does internally (boot self-test, calibration, line-locked PLL,
LFSR state machines) is invisible from this binary.

This matters for "can we pull firmware over the existing link":
**probably not**. An 8-bit address space caps the visible state at 256
bytes; firmware doesn't fit. Pulling firmware will require either an
undocumented command on the same UART (which would be a vendor secret —
fishable but speculative) or physical access to the chip.

## The five registers, restated

| addr | called as            | observed values | role (surmised)             |
|-----:|----------------------|-----------------|-----------------------------|
|  0   | commit pulse         | `1` then `0`    | latches regs 1-4 into the   |
|      |                      |                 | running config              |
|  1   | mode flag            | `0` / `1`       | scramble vs descramble      |
|  2   | standard flag        | `0` / `1`       | NTSC (525/60) vs PAL (625/50) |
|  3   | "seed_high"          | `0..30`         | sub-band / line-group index |
|  4   | "seed_low"           | `0..255`        | per-band seed / phase       |

Mapping of regs 1 and 2 to "mode" and "standard" is **inferred from UI
binding** (`Opt_Scrambling`/`Opt_Descrambling` and `Opt_ntsc`/`Opt_Pal`
radio groups), not from anything the device says back.

## Why reg 0 is almost certainly a "commit/strobe"

Three cues line up:

1. The PC writes regs 1-4 first with a 40 ms inter-frame wait, then
   writes reg 0 with a **1000 ms** wait, then writes reg 0 again to
   release. That timing pattern is classic for a setting that takes
   real wall-clock effort to apply — e.g. resyncing a line-locked PLL
   or reseeding an LFSR at the next field boundary (NTSC field period
   ≈ 16.7 ms, PAL ≈ 20 ms; 1000 ms easily covers a full
   re-lock/calibration cycle plus margin).
2. The original code **ignores the second reg-0 write's return code**
   (the pulse-release). That asymmetric treatment fits "send strobe
   high, wait for stabilisation, drop strobe low — and don't fail the
   whole op if the release ack is lost."
3. The first reg-0 write uses value `1`. Releases use `0`. A single bit
   driven high then low is the canonical strobe shape.

There are alternative explanations (reg 0 could be a "go" command, a
"reset", or an "apply page swap"), but the strobe interpretation is the
simplest that explains all three cues.

## The seed split is suspicious

The PC tool does not split seed as `(seed >> 8, seed & 0xFF)`. It does:

```c
seed_high = round_half_to_even(seed / 256.0);
seed_low  = seed & 0xFF;
```

For odd quotients `seed_high` is *one above the floor*. Concretely, with
the GUI's advertised range `0..7679`:

- `seed >> 8` (floor)  spans `0..29`  (30 values)
- `round(seed / 256)` spans `0..30`  (**31** values)

`7680 = 256 × 30`, and the rounding makes `seed_high` reach 30 when the
input is near the top. Combined with `seed_low` having 256 distinct
values, this is **not** a 13-bit linear seed. The two registers behave
as **two separate parameters**.

A plausible reading: the hardware has 30 (or 31) **scrambling sub-bands**
or **line-group buckets**, indexed by reg 3, each with its own seed
selected by reg 4. The PC's GUI presents this 2D parameter space to the
user as a single integer for ergonomics, then de-projects on the way
out. Whether the device actually uses a fixed lookup table indexed by
reg 3, or whether it instantiates 30 LFSRs in parallel, can't be told
from the PC code.

The number `7680` itself is unremarkable in CVBS terms (it isn't a line
count, sample count, or burst frequency). It's almost certainly a
device-internal table dimension. Without the device we cannot tell more.

## Connect-time behaviour

`FUN_00419b56` (open) does **only** Win32 COM setup:

- 19200 / 8 / N / 1, 256-byte rx/tx buffers
- ReadIntervalTimeout 2 ms, ReadTotalTimeoutMultiplier 1, ReadTotalTimeoutConstant 1
- WriteTotalTimeoutMultiplier 1, WriteTotalTimeoutConstant 10

It does **not** send any handshake, ping, or identification command.
That means:

- The device must be passive — it sits silent on the line until the PC
  initiates a `{00…` or `{ff…` exchange.
- There is no PC-side check that "the thing on the other end is the
  expected device". A different device on the same port would silently
  receive register writes, possibly with damaging results.

## Why the device is probably an FPGA or a small soft-config ASIC

Indirect evidence from the PC side:

- The 5-register surface is too small for an MCU running real firmware —
  there'd be at least a "version" register or a "status" register if
  the chip ran code. So this is likely a **fixed-function** part.
- The window class string in the PE is `bt656 mwindows`. **BT.656** is
  the ITU-R parallel digital interface for 525/60 and 625/50 component
  video. Vendors who put "BT.656" in their tool name are usually selling
  video format converters, scramblers, or capture front-ends.
- CVBS scrambling with a parameterisable LFSR seed and a NTSC/PAL toggle
  fits the profile of a small Verilog/VHDL block synthesised onto either
  a low-end FPGA (Lattice MachXO, Anlogic AG10K, Gowin GW1N, Altera MAX
  series) or a configurable ASIC.

If this is an FPGA, the configuration bitstream lives in a serial flash
on the same board. That flash is the realistic target for "pull the
firmware" — but it is reached by SPI or via JTAG, not via this UART.

## What to look for if/when the device arrives

Cheap, non-destructive things to try first, in order:

1. **Tap the UART with a logic analyser while the official PC tool runs.**
   Confirm 19200/8/N/1 and that `{00…/{ff…` are the only commands. (5
   minutes of capture with `sigrok-cli` is enough.)
2. **Probe undocumented command bytes.** The PC tool only sends `{00`
   and `{ff` as the second/third byte. Try `{01..{fe`. Many devices have
   vendor commands left in for factory test — e.g. version, dump-flash,
   enter-bootloader.
3. **Watch the line at power-up.** If the device prints anything before
   the PC initiates, that's a banner — almost always a bootloader or a
   debug print.
4. **Try common bootloader entry sequences** at common baud rates
   (9600, 19200, 38400, 57600, 115200): STM32 (`0x7F`), NXP Kinetis
   (`0x5A`), ESP (`0xC0`), Microchip (`0x55 0x55`), Renesas (`0x00`).
5. **Open the case.** Photograph the PCB. Chip markings are the single
   biggest unblock: they tell us flash type, MCU/FPGA family, and
   whether SWD/JTAG/SPI are exposed.

Step 5 is the high-value step. Steps 1-4 are worth doing because they're
cheap, but the firmware is far more likely to come out of the SPI flash
than out of this UART.

## What the PC binary will not tell you, no matter how hard you read it

- The device's chip vendor and family.
- Whether the firmware is upgradable in the field at all.
- Whether reg 0 is a strobe, a reset, or a mode change.
- Whether seeds 0..7679 hit every state of the scrambler or just a
  curated subset.
- The actual scrambling transform (line shuffle, cut-and-rotate,
  pseudo-random analogue mask, sub-band rotation, …). The PC binary
  contains *no* CVBS-domain math whatsoever — every byte of signal
  manipulation happens in the device.

These are the questions the device itself has to answer.
