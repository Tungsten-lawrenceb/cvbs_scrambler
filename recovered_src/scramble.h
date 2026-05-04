#pragma once
// Higher-level "Scramble" / "Read" actions, reconstructed from
// FUN_0041a31e (write button) and FUN_0041a6ac (read button).
//
// Hardware register map (8-bit each):
//   reg 0 : commit/trigger.  Pulse 1 then 0 to apply settings (1000 ms wait on the '1' write).
//   reg 1 : mode      0 = Scrambling,  1 = Descrambling
//   reg 2 : standard  0 = NTSC,        1 = PAL
//   reg 3 : seed_high  (seed >> 8) & 0xFF      seed range 0..7679
//   reg 4 : seed_low   seed & 0xFF
//
// "Seed" UI label in the GUI showed the range "(0~7679)".

#include "serial.h"

struct ScrambleParams {
    bool   descrambling;     // false = scramble, true = descramble
    bool   pal;              // false = NTSC, true = PAL
    uint16_t seed;           // 0..7679
};

// Returns SR_OK only if every register write echoed back correctly.
SerialResult apply_scramble(Serial& s, const ScrambleParams& p);

// Reads the four parameter registers back from the device into *out.
SerialResult read_scramble (Serial& s, ScrambleParams* out);
