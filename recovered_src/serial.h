#pragma once
// Serial-port register protocol used by cvbs_scramble_assistant.
// Reverse-engineered from cvbs_scramble_assistant(2).exe (build 1.0.0.167).
//
// Wire format (PC -> device):
//   WRITE: "{00" <addr_hex2> <val_hex2> <chk_hex2> "}"        (10 bytes ASCII)
//                                       chk = (addr + val) & 0xFF
//   READ : "{ff" <addr_hex2> <(addr-1)_hex2> "}"              ( 8 bytes ASCII)
//
// Wire format (device -> PC, both cases):
//   "{" <addr_hex2> <val_hex2> <chk_hex2> "}"                  ( 8 bytes ASCII)
//                                       chk = (addr + val) & 0xFF
//
// Port settings: 19200 / 8 / N / 1, no flow control.
// Inter-frame wait between WriteFile and ReadFile is supplied by the caller
// (40 ms typical, 1000 ms for register 0 commit).

#include <windows.h>
#include <cstdint>

// NOTE: write_reg uses codes 0..7 with VAL/CHK distinct (5/6/7).
// read_reg uses codes 0..6 because val is the *output* of the call, so a
// "value mismatch" doesn't exist — only addr-mismatch (5) and chk-mismatch (6)
// can occur. The error codes are returned raw to the caller; do not treat
// "ECHO_CHK" as a single numeric value across both functions.
enum SerialResult : uint8_t {
    SR_OK            = 0,
    SR_WRITE_FAIL    = 1,
    SR_WRITE_SHORT   = 2,
    SR_READ_FAIL    = 3,
    SR_READ_SHORT  = 4,
    SR_ECHO_ADDR    = 5,
    SR_ECHO_VAL     = 6,    // write_reg only
    SR_ECHO_CHK_W   = 7,    // write_reg
    SR_ECHO_CHK_R   = 6,    // read_reg  (collides intentionally with SR_ECHO_VAL)
};

struct Serial {
    HANDLE h = INVALID_HANDLE_VALUE;
    bool   open(int comNum);     // opens \\.\COM<N>, configures DCB+timeouts
    void   close();
    bool   is_open() const { return h != INVALID_HANDLE_VALUE; }

    // Both functions purge buffers, send, wait `delay_ms`, then read echo.
    SerialResult write_reg(uint8_t addr, uint8_t val, DWORD delay_ms = 40);
    SerialResult read_reg (uint8_t addr, uint8_t* out_val);
};
