// Reconstructed from FUN_0041a31e (write/scramble button)
//                and FUN_0041a6ac (read button).
#include "scramble.h"
#include <cmath>

SerialResult apply_scramble(Serial& s, const ScrambleParams& p) {
    uint8_t err = 0;

    // Original computes seed_high as ROUND(seed / 256.0), NOT (seed >> 8).
    // The decompilation shows two rounding paths gated on the SSE4.1
    // feature bit:
    //   * SSE4.1 available  -> roundsd <imm8>=4 -> round-to-nearest-even
    //                          (a.k.a. "banker's rounding"; uses MXCSR)
    //   * SSE4.1 unavailable -> C round() -> round-half-away-from-zero
    // Modern x86 CPUs always have SSE4.1, so the banker's-rounding path
    // is what runs in practice. We model that with std::lrint, which uses
    // the current FE rounding mode (default = FE_TONEAREST = RNE).
    // This differs from int(x + 0.5) at exactly-half-integer cases:
    //   seed=128: lrint(0.5)=0   ;  +0.5 trick gives 1
    //   seed=384: lrint(1.5)=2   ;  +0.5 trick gives 2
    //   seed=640: lrint(2.5)=2   ;  +0.5 trick gives 3
    // i.e. lrint matches the original on SSE4.1 hardware; the +0.5 trick
    // accidentally matched the *fallback* path. (Codex review caught this.)
    uint8_t seed_hi = uint8_t(std::lrint(double(p.seed) / 256.0));
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
