// Reconstructed from FUN_0041a31e (write/scramble button)
//                and FUN_0041a6ac (read button).
#include "scramble.h"

SerialResult apply_scramble(Serial& s, const ScrambleParams& p) {
    uint8_t err = 0;

    // Original computes seed_high as ROUND(seed / 256.0), NOT (seed >> 8).
    // For odd quotients the rounded value is one above the floor, so the
    // device-side seed_high register can take values 0..30 even though
    // (seed >> 8) over the GUI's 0..7679 range maxes at 29. We mirror the
    // original quirk faithfully.
    uint8_t seed_hi = uint8_t(int(double(p.seed) / 256.0 + 0.5));
    uint8_t seed_lo = uint8_t(p.seed & 0xFF);

    err += s.write_reg(1, p.descrambling ? 1 : 0, 40);
    err += s.write_reg(2, p.pal          ? 1 : 0, 40);
    err += s.write_reg(3, seed_hi,                 40);
    err += s.write_reg(4, seed_lo,                 40);

    // Commit pulse: reg0=1 (long wait) then reg0=0. The original *does not*
    // accumulate the return code from the second pulse — success is gated
    // on the first five writes only.
    err += s.write_reg(0, 1, 1000);
    s.write_reg(0, 0, 40);

    return err == 0 ? SR_OK : SR_WRITE_FAIL;
}

SerialResult read_scramble(Serial& s, ScrambleParams* out) {
    uint8_t err = 0;
    uint8_t mode = 0, std_ = 0, sh = 0, sl = 0;

    err += s.read_reg(1, &mode);
    err += s.read_reg(2, &std_);
    err += s.read_reg(3, &sh);
    err += s.read_reg(4, &sl);
    if (err != 0) return SR_READ_FAIL;

    out->descrambling = (mode != 0);
    out->pal          = (std_ != 0);
    out->seed         = uint16_t((sh << 8) | sl);
    return SR_OK;
}
