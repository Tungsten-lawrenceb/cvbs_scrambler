// Button-click handlers, reconstructed from FUN_00419b56, FUN_0041a31e,
// FUN_0041a6ac.  The original code reads/writes UI state through a
// name-keyed widget table; this file uses a small AppState struct instead.

#include "scramble.h"
#include "window.h"
#include <string>

extern struct AppState {
    HINSTANCE     hInstance;
    HWND          hWnd;
    Serial        com;
    int           selectedPort;
    ScrambleParams cur;
} g;

namespace {
void set_status(const std::string&)       { /* writes to ui::ctrl::kInfoPanel */ }
void set_button_text(const char*, const std::string&) { /* "Open Com" <-> "Close" */ }
void set_led(unsigned /*argb*/)           { /* paints ui::ctrl::kUartLed */ }
void set_radio(const char* /*name*/, bool /*on*/) {}
bool get_radio(const char* /*name*/)      { return false; }
int  get_seed_edit()                      { return 0; }
void set_seed_edit(int /*v*/)             {}
}

void on_open_close_clicked() {
    if (g.com.is_open()) {
        g.com.close();
        set_button_text(ui::ctrl::kBtnOpen, ui::msg::kOpenCom);
        set_led(ui::kLedRed);
        set_status(ui::msg::kWelcome);
        return;
    }

    if (g.com.open(g.selectedPort)) {
        set_button_text(ui::ctrl::kBtnOpen, ui::msg::kClose);
        set_led(ui::kLedGreen);
    } else {
        set_status(std::string(ui::msg::kOpenCom) +
                   "COM" + std::to_string(g.selectedPort) +
                   ui::msg::kErrorSuffix);
    }
}

void on_write_clicked() {
    if (!g.com.is_open()) { set_status(ui::msg::kWriteErr); return; }

    ScrambleParams p;
    int seed = get_seed_edit();
    if (seed < 0) seed = 0;
    if (seed > 7679) seed = 7679;
    p.seed         = uint16_t(seed);
    p.pal          = get_radio(ui::ctrl::kOptPal);
    p.descrambling = get_radio(ui::ctrl::kOptDescrambling);

    SerialResult r = apply_scramble(g.com, p);
    set_status(r == SR_OK ? ui::msg::kWriteOk : ui::msg::kWriteErr);
    if (r == SR_OK) g.cur = p;
}

void on_read_clicked() {
    if (!g.com.is_open()) { set_status(ui::msg::kReadErr); return; }

    ScrambleParams p{};
    SerialResult r = read_scramble(g.com, &p);
    if (r != SR_OK) { set_status(ui::msg::kReadErr); return; }

    g.cur = p;
    set_radio(ui::ctrl::kOptScrambling,    !p.descrambling);
    set_radio(ui::ctrl::kOptDescrambling,   p.descrambling);
    set_radio(ui::ctrl::kOptNtsc,          !p.pal);
    set_radio(ui::ctrl::kOptPal,            p.pal);
    set_seed_edit(int(p.seed));
    set_status(ui::msg::kReadOk);
}
