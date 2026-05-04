// Serial protocol — reconstructed from FUN_00419b56 (open),
// FUN_0041930f (write_reg), FUN_0041972b (read_reg), FUN_00419ab0 (hex2nib).

#include "serial.h"
#include <string>
#include <cstdio>

namespace {
inline char nib2hex(uint8_t n) { return n < 10 ? char('0' + n) : char('a' + n - 10); }
inline int  hex2nib(char c) {
    if (c >= '0' && c <= '9') return c - '0';
    if (c >= 'a' && c <= 'f') return c - 'a' + 10;
    if (c >= 'A' && c <= 'F') return c - 'A' + 10;
    return -1;
}
inline std::string byte_hex(uint8_t b) {
    char s[3]; std::snprintf(s, sizeof s, "%02x", b);
    return s;
}
} // namespace

bool Serial::open(int comNum) {
    close();
    char path[16];
    std::snprintf(path, sizeof path, "\\\\.\\COM%d", comNum);

    wchar_t wpath[16];
    MultiByteToWideChar(CP_ACP, 0, path, -1, wpath, 16);

    h = CreateFileW(wpath, GENERIC_READ | GENERIC_WRITE, 0, nullptr,
                    OPEN_EXISTING, 0, nullptr);
    if (h == INVALID_HANDLE_VALUE) return false;

    DCB dcb{}; dcb.DCBlength = sizeof dcb;
    if (!GetCommState(h, &dcb))                { close(); return false; }
    if (!SetupComm(h, 0x100, 0x100))           { close(); return false; }
    if (!SetCommMask(h, 0))                    { close(); return false; }

    COMMTIMEOUTS to{};
    to.ReadIntervalTimeout         = 2;
    to.ReadTotalTimeoutMultiplier  = 1;
    to.ReadTotalTimeoutConstant    = 1;
    to.WriteTotalTimeoutMultiplier = 1;
    to.WriteTotalTimeoutConstant   = 10;
    if (!SetCommTimeouts(h, &to))              { close(); return false; }

    dcb.BaudRate = CBR_19200;        // 0x4B00
    dcb.ByteSize = 8;
    dcb.Parity   = NOPARITY;
    dcb.StopBits = ONESTOPBIT;
    dcb.fBinary  = TRUE;
    if (!SetCommState(h, &dcb))                { close(); return false; }
    return true;
}

void Serial::close() {
    if (h != INVALID_HANDLE_VALUE) { CloseHandle(h); h = INVALID_HANDLE_VALUE; }
}

SerialResult Serial::write_reg(uint8_t addr, uint8_t val, DWORD delay_ms) {
    PurgeComm(h, PURGE_TXCLEAR | PURGE_RXABORT);  // 0xC

    uint8_t chk = uint8_t(addr + val);
    std::string pkt = "{00" + byte_hex(addr) + byte_hex(val) + byte_hex(chk) + "}";
    // pkt.size() == 10

    DWORD written = 0;
    if (!WriteFile(h, pkt.data(), 10, &written, nullptr)) return SR_WRITE_FAIL;
    if (written != 10)                                    return SR_WRITE_SHORT;

    Sleep(delay_ms);

    char rx[8] = {};
    DWORD got = 0;
    if (!ReadFile(h, rx, 8, &got, nullptr))               return SR_READ_FAIL;
    if (got != 8)                                         return SR_READ_SHORT;

    uint8_t r_addr = uint8_t((hex2nib(rx[1]) << 4) | hex2nib(rx[2]));
    uint8_t r_val  = uint8_t((hex2nib(rx[3]) << 4) | hex2nib(rx[4]));
    uint8_t r_chk  = uint8_t((hex2nib(rx[5]) << 4) | hex2nib(rx[6]));

    if (addr == 0 && val == 0)        return SR_OK;        // commit-pulse, no echo check
    if (r_addr != addr)               return SR_ECHO_ADDR;
    if (r_val  != val)                return SR_ECHO_VAL;     // = 6
    if (r_chk  != uint8_t(r_addr + r_val)) return SR_ECHO_CHK_W; // = 7
    return SR_OK;
}

SerialResult Serial::read_reg(uint8_t addr, uint8_t* out_val) {
    PurgeComm(h, PURGE_TXCLEAR | PURGE_RXABORT);
    *out_val = 0;

    uint8_t cmpl = uint8_t(addr - 1);                       // device's expected complement
    std::string pkt = "{ff" + byte_hex(addr) + byte_hex(cmpl) + "}";
    // pkt.size() == 8

    DWORD written = 0;
    if (!WriteFile(h, pkt.data(), 8, &written, nullptr)) return SR_WRITE_FAIL;
    if (written != 8)                                    return SR_WRITE_SHORT;

    Sleep(40);

    char rx[8] = {};
    DWORD got = 0;
    if (!ReadFile(h, rx, 8, &got, nullptr))              return SR_READ_FAIL;
    if (got != 8)                                        return SR_READ_SHORT;

    uint8_t r_addr = uint8_t((hex2nib(rx[1]) << 4) | hex2nib(rx[2]));
    uint8_t r_val  = uint8_t((hex2nib(rx[3]) << 4) | hex2nib(rx[4]));
    uint8_t r_chk  = uint8_t((hex2nib(rx[5]) << 4) | hex2nib(rx[6]));

    if (r_addr != addr)               return SR_ECHO_ADDR;
    if (r_chk  != uint8_t(r_addr + r_val)) return SR_ECHO_CHK_R; // = 6, matches original
    *out_val = r_val;
    return SR_OK;
}
