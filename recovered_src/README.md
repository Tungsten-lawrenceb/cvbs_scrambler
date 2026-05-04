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
   bytes `"{0001010202}"`. Expected reply: `"{010102}"` — sets register 1
   to 1 (descramble mode), checksum = (1 + 1) & 0xFF = 0x02.

2. The original's "Write Successfull!" banner (note the typo) fires when
   the **first five** writes — regs 1, 2, 3, 4, 0=1 — all return 0. The
   final reg0=0 release pulse is fired but its return code is *ignored*.
   `apply_scramble()` mirrors this exactly.

## Caveats — claims that are inferred, not directly proven

| Claim                                  | Source                               |
|----------------------------------------|--------------------------------------|
| 19200 / 8 / N / 1                      | `FUN_00419b56` `SetCommState` call   |
| `{` `}` literal delimiters             | Raw bytes at `.data:0x437e30/38/40`  |
| reg 1 = mode (descramble vs scramble)  | Inferred from `Opt_Scrambling` /     |
|                                        | `Opt_Descrambling` radio bindings    |
| reg 2 = standard (NTSC vs PAL)         | Inferred from `Opt_ntsc` / `Opt_Pal` |
| reg 3 / 4 = seed hi/lo                 | Inferred from `Lb_random` edit field |
| seed range 0..7679                     | GUI label `Lb_range` text "(0~7679)" |
|                                        | — *no clamp* in code                 |
| reg 0 = commit pulse                   | Inferred from 1000 ms wait after =1, |
|                                        | followed by =0 with ignored return   |

Nothing here is verified end-to-end against the device — until the device
is connected, treat all register *meanings* as best-effort interpretation
of UI bindings, not facts.
