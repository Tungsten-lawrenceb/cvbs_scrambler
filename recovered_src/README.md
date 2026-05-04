# cvbs_scramble_assistant — recovered source

Reconstructed from `cvbs_scramble_assistant(2).exe` (1.0.0.167, MinGW-w64
GCC 9.3.0, x86_64-posix-sjlj). The binary itself is **not** packed; the
executable is a small Win32 GUI configuration tool that talks to a
hardware CVBS-scrambling/descrambling device over a serial port.

## What this program actually does

The PC binary is **not** a video scrambler. It is a register-write tool:
the actual scrambling is done by the device on the other end of the COM
port. The PC just lets the user pick four parameters and pushes them into
the device's register file.

| reg | meaning             | values |
|----:|---------------------|--------|
|  0  | commit / trigger    | `1` then `0` (1000 ms wait on the `1`) |
|  1  | mode                | `0` = scramble, `1` = descramble |
|  2  | video standard      | `0` = NTSC, `1` = PAL |
|  3  | seed high byte      | `(seed >> 8) & 0xFF` |
|  4  | seed low byte       | `seed & 0xFF` |

The seed range advertised in the GUI is **0..7679**.

## Wire protocol (hand-derived from the decomp)

Both directions are ASCII, fixed-length, with curly-brace delimiters.
Defaults: 19200 / 8 / N / 1, no flow control, 256-byte buffers, custom
1 ms read-interval timeout.

```
PC -> dev   "{00<addr_hex2><val_hex2><chk_hex2>}"   10 B   (write)
            "{ff<addr_hex2><(addr-1)_hex2>}"         8 B   (read)
                              ^^^^^^^^^^^ subtraction, not bitwise ~

dev -> PC   "{<addr_hex2><val_hex2><chk_hex2>}"      8 B   (echo)
            chk = (addr + val) & 0xFF
```

A short delay (`Sleep(40)`) is inserted between WriteFile and ReadFile.
Register-0 commit uses `Sleep(1000)`.

## Source layout

```
recovered_src/
├── main.cpp        WinMain + class registration + message loop
├── handlers.cpp    on_open_close / on_write / on_read button handlers
├── serial.h/.cpp   Serial::open/close + write_reg/read_reg protocol
├── scramble.h/.cpp apply_scramble / read_scramble (4-register sequence)
├── window.h        Class name, control IDs, status strings, LED colours
├── resources.rc    Manifest + icon + VS_VERSION_INFO
├── app.manifest    Verbatim copy of the original embedded manifest
├── app.ico         Verbatim copy of the original embedded icon
└── CMakeLists.txt  MinGW build recipe
```

## Build

```sh
sudo pacman -S mingw-w64-gcc cmake
cmake -B build -DCMAKE_TOOLCHAIN_FILE=<mingw>.cmake
cmake --build build
```

(or invoke `x86_64-w64-mingw32-g++` directly per the comment in `main.cpp`).

## What is NOT reconstructed

The original is **505 functions / 343 user-decompilable**. This recovery
covers the user-facing protocol & flow only. The framework layer is not
ported:

- The custom widget framework. Every control is a plain Win32 class
  (`BUTTON`, `EDIT`, `STATIC`, `COMBOBOX`, `MSCTLS_PROGRESS32`) sub-classed
  via `SetWindowSubclass`. Look-up is by **string name** (e.g. `cmd_write`,
  `Lb_random`) rather than numeric resource ID, kept in a hash map inside
  the framework. The dispatching `WndProc` is `FUN_00422662` — ~980 LOC,
  not reproduced.
- The GDI+ rendering for buttons, the LED indicator, frame backgrounds,
  and the `Lp_info` status panel.
- The C++ runtime: `std::string`, allocators, `_amsg_exit`,
  `_pei386_runtime_relocator`, etc. — all in the `0x42xxxx` address range
  in the dump.

If you need any of those, the raw decompilation for every function is in
`recovered/decomp/`, indexed by `recovered/decomp_index.tsv`.

## Cross-references for the curious

| address    | name in dump                | reconstructed as          |
|-----------:|-----------------------------|---------------------------|
| `0x004014c0` | `entry`                   | CRT entry (untouched)     |
| `0x00401adb` | program init              | `wWinMain` first half     |
| `0x0041b0c0` | user-main shim            | `wWinMain` body           |
| `0x00419b56` | toggle COM                | `on_open_close_clicked`   |
| `0x0041930f` | write-register protocol   | `Serial::write_reg`       |
| `0x0041972b` | read-register protocol    | `Serial::read_reg`        |
| `0x00419ab0` | hex-char → nibble         | `hex2nib` (anonymous ns)  |
| `0x0042c7f0` | byte → 2-digit hex string | `byte_hex` (anonymous ns) |
| `0x0041a31e` | "Write" button            | `on_write_clicked`        |
| `0x0041a6ac` | "Read" button             | `on_read_clicked`         |
| `0x00422662` | window proc               | `WndProc` (stub)          |

## Verification ideas

If you have the device, two small experiments confirm the recovery:

1. Open the COM port via the recovered `Serial::open()` and send the raw
   ten bytes `"{00010102}"`. Expected reply: `"{010102}"` (eight bytes) —
   this sets register 1 to value 1 (descramble mode); checksum
   `(addr + val) & 0xFF = (1 + 1) & 0xFF = 0x02`.

2. The original's "Write Successfull!" banner (note the typo) fires when
   the **first five** writes — regs 1, 2, 3, 4, 0=1 — all return 0. The
   final reg0=0 release pulse is fired but its return code is *ignored*.
   `apply_scramble()` mirrors this exactly.

## Caveats — claims that are directly proven vs inferred

Codex's first review correctly flagged that the original Caveats column
gave wishy-washy "inferred from UI" sources. This table now cites the
specific function and offset in `recovered/decomp/` that grounds each
claim, so a reviewer can re-verify without re-reading the binary.

| Claim                                | Verdict | Source                                                                |
|--------------------------------------|---------|-----------------------------------------------------------------------|
| Write packet is 10 bytes             | proved  | `0041930f_FUN_0041930f.c:72` `WriteFile(...,10,...)`                  |
| Read packet is 8 bytes               | proved  | `0041972b_FUN_0041972b.c:64` `WriteFile(...,8,...)`                   |
| Echo is 8 bytes                      | proved  | `0041930f:78`, `0041972b:70`                                          |
| `chk = (addr + val) & 0xFF`          | proved  | `0041930f:51` `local_8d = param_1 + param_2`                          |
| Read frame uses `(addr - 1)`, not `~addr` | proved | `0041972b:48` `local_8d = param_1 - 1`                              |
| `{` and `}` literal delimiters       | proved  | Raw bytes at `.data:0x437e30/38/40` = `7b 30 30`, `7d`, `7b 66 66`    |
| 19200 / 8 / N / 1                    | proved  | `00419b56_FUN_00419b56.c:187-191` `dcb.BaudRate = 0x4B00; dcb.ByteSize = 8; …` |
| `Sleep(40)` between write/read       | proved  | `0041a31e_FUN_0041a31e.c:59-66` calls `write_reg(*, *, 0x28)`         |
| `Sleep(1000)` for reg 0 commit       | proved  | `0041a31e:71` `write_reg(0, 1, 1000)`                                 |
| Sixth write's return is ignored      | proved  | `0041a31e:73` `write_reg(0, 0, 0x28)` not added to `local_41`         |
| reg 1 = mode (descramble vs scramble) | inferred | `0041a31e:55-58` reads `Opt_Descrambling` radio (`DAT_0043e398`) and writes that bit to reg 1 |
| reg 2 = standard (NTSC vs PAL)       | inferred | `0041a31e:52-54` reads `Opt_Pal` radio (`DAT_0043e3d8`) and writes that bit to reg 2 |
| reg 3, reg 4 = seed hi/lo            | inferred | `0041a31e:36-50` parses `Lb_random` edit text as int → ROUND/256 → reg 3, &0xFF → reg 4 |
| seed range 0..7679                   | inferred | GUI label `Lb_range` text `"(0~7679)"` at `.data:0x437b08`. **No range check exists in code** |
| reg 0 = commit pulse                 | inferred | `0041a31e:71-73` writes `1` (1000 ms wait) then `0` (return ignored) — strobe shape |

"Inferred" rows above use *control name → register* mappings that hold
in the PC binary but have not been observed on the device. A different
firmware build could shuffle the meanings while leaving the wire format
identical.

The deeper "what does the *device* actually do with these bytes?"
question is out of scope for this binary entirely — see
[`DEVICE_OPERATION.md`](DEVICE_OPERATION.md), explicitly framed as
hypotheses.
