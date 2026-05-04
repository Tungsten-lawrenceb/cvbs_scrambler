# cvbs_scrambler

Reverse-engineering of `cvbs_scramble_assistant(2).exe` — a small Win64
GUI tool that configures a hardware CVBS (composite video) scrambler /
descrambler over a serial port.

The repo holds the **subject binary**, the **Ghidra-derived
decompilation dump**, a clean **C++ source reconstruction**, and the
analysis docs that go with them. No physical device is in hand; every
finding here is sourced from the binary alone.

## Subject

| field           | value                                                    |
|-----------------|----------------------------------------------------------|
| file            | `cvbs_scramble_assistant(2).exe`                         |
| sha256          | `7906fa39b25735931980f47b98c17b059885451d6fa5700e963d4e5dbb6bb780` |
| size            | 274 944 B (≈ 275 KB)                                     |
| format          | PE32+ Win64 GUI, AMD64, 10 sections, **not packed**      |
| version         | 1.0.0.167                                                |
| compiler        | MinGW-w64 GCC 9.3.0 (x86_64-posix-sjlj, by Brecht Sanders) |
| linker          | GNU ld 2.34                                              |
| timestamp       | 2024-06-11 01:57 (-04:00)                                |

## Layout

```
.
├── cvbs_scramble_assistant(2).exe   the subject binary
├── unpacked/                        PE sections, resources, imports, strings
├── scripts/
│   └── DumpAll.java                 Ghidra postScript: decomp + tables → disk
├── recovered/                       output of running DumpAll.java headlessly
│   ├── decomp/                      one .c per function (343 files)
│   ├── decomp_index.tsv             addr → file map, plus pass/fail
│   ├── functions.tsv                signatures, sizes, calling conv
│   ├── symbols.tsv                  every defined/imported symbol
│   ├── strings.tsv                  string literals (ASCII + UTF-16)
│   └── memory_map.txt               PE section ranges as Ghidra sees them
└── recovered_src/                   reconstructed C++ source
    ├── README.md                    reconstruction overview + caveats
    ├── DEVICE_OPERATION.md          surmise of device internals from the binary
    ├── main.cpp / handlers.cpp      WinMain + button handlers
    ├── serial.{h,cpp}               COM port + register protocol
    ├── scramble.{h,cpp}             4-register apply / read sequence
    ├── window.h                     control IDs, status strings, LED colours
    ├── resources.rc                 manifest + icon + VS_VERSION_INFO
    ├── app.manifest, app.ico        verbatim copies of the embedded resources
    └── CMakeLists.txt               MinGW build recipe
```

## Findings, in 200 words

The PC's view of the device is exactly **5 registers and 2 commands**.
Everything the tool can do is one of:

- **Open / close** `\\.\COM<N>` at 19200 / 8 / N / 1 — no handshake.
- **Write register** with `"{00<addr_hex2><val_hex2><chk_hex2>}"`
  (10 B), expecting `"{<addr><val><chk>}"` (8 B) back. `chk = (addr+val)&0xFF`.
- **Read register**  with `"{ff<addr_hex2><(addr-1)_hex2>}"` (8 B),
  same 8-B reply format.

Five registers are touched: `0` (commit strobe — pulse 1 then 0),
`1` (mode: scramble vs descramble), `2` (standard: NTSC vs PAL),
`3` (seed_high), `4` (seed_low). The seed is **not** a single 13-bit
value: `seed_high = round_half_to_even(seed/256)`, taking values 0..30,
while `seed_low` is the byte truncation. The `7680 = 256 × 30`
parameter space looks like a 30-band × 256-seed table inside the
device.

There is no version query, no keep-alive, no boot probe, no firmware
update path. The user-facing app is the entire surface. **Pulling
firmware over the existing UART is unlikely to work** without
undocumented vendor commands; the realistic target is the SPI flash on
the PCB. See [`recovered_src/DEVICE_OPERATION.md`](recovered_src/DEVICE_OPERATION.md)
for the long form.

## Reproducing the analysis

Tooling versions used. CachyOS / Arch repos:

```sh
sudo pacman -S ghidra jdk21-openjdk \
               7zip binwalk innoextract cabextract unshield \
               icoutils upx perl-image-exiftool
```

Ghidra 12.0.4, JDK 21.0.10, `7z` 26.01, `binwalk` 3.1.0, `objdump`
(binutils), `exiftool` 13.55. Cross-build of `recovered_src/` needs
`mingw-w64-gcc` (any host).

Regenerate `recovered/` from the EXE in ≈ 90 s:

```sh
/opt/ghidra/support/analyzeHeadless . cvbs_scramble \
    -import 'cvbs_scramble_assistant(2).exe' -overwrite \
    -scriptPath ./scripts -postScript DumpAll.java
```

(That writes the Ghidra project as `cvbs_scramble.gpr` +
`cvbs_scramble.rep/` — both gitignored — and writes the `recovered/`
tree.)

Build the recovered source:

```sh
cmake -S recovered_src -B build \
      -DCMAKE_TOOLCHAIN_FILE=<your-mingw-toolchain>.cmake
cmake --build build
```

## Status

| done                                           | open                              |
|------------------------------------------------|-----------------------------------|
| PE unpacked, sections + resources extracted    | physical device acquisition       |
| Ghidra headless analysis + decomp dump         | UART protocol probe (need device) |
| Wire protocol + register sequencing recovered  | undocumented-command sweep        |
| C++ source reconstructed for user-domain code  | bootloader / firmware extraction  |
| Codex review pass — bugs flagged + fixed       | end-to-end verification on real HW|

## Further reading

- [`recovered_src/README.md`](recovered_src/README.md) — what the
  reconstructed source maps to, with a per-function cross-reference
  table and a Caveats section listing every claim that is *inferred*
  vs *directly proved*.
- [`recovered_src/DEVICE_OPERATION.md`](recovered_src/DEVICE_OPERATION.md)
  — the surmised behaviour of the hardware on the other end of the
  serial port, plus a prioritised non-destructive plan for when the
  device arrives.
