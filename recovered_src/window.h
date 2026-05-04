#pragma once
// UI surface, reconstructed from string table and FUN_00422662 (window proc).
// The application uses a custom Win32 + GDI+ control framework (no MFC, no Qt);
// every control is created via CreateWindowExW with one of the standard
// Windows class names below, then sub-classed via SetWindowSubclass.
//
// All control IDs are referenced by *string name* via a hash map maintained
// inside the framework — they are not numeric resource IDs.

namespace ui {

constexpr wchar_t kAppClass[]      = L"bt656 mwindows";
constexpr wchar_t kAppTitle[]      = L"CVBS Scrambling Assistant 1.0";
constexpr wchar_t kAppIcon[]       = L"AAAAA_APPICON";
constexpr char    kFontDefault[]   = "Microsoft YaHei,9,0";

// --- Control IDs as referenced in code ---------------------------------------
namespace ctrl {
constexpr char kPortCombo[]   = "cbox_port";        // COM1..COM40 dropdown
constexpr char kPortLabel[]   = "Lport";            // "Port:" label
constexpr char kComSelect[]   = "com_select";       // wraps the combo
constexpr char kBtnOpen[]     = "cmd_open";         // "Open Com" / "Close" toggle
constexpr char kBtnWrite[]    = "cmd_write";        // -> apply_scramble
constexpr char kBtnRead[]     = "cmd_read";         // -> read_scramble
constexpr char kUartLed[]     = "cuart_color";      // status indicator (red/green)

constexpr char kStandardFrame[]    = "Cvbs_in_standard";   // "Input standard"
constexpr char kFormatFrame[]      = "Frm_ntsc_pal";       // NTSC/PAL group box
constexpr char kOptNtsc[]          = "Opt_ntsc";
constexpr char kOptPal[]           = "Opt_Pal";

constexpr char kModeFrame[]        = "F_tx_rx";            // "Mode (TX/RX)"
constexpr char kOptScrambling[]    = "Opt_Scrambling";
constexpr char kOptDescrambling[]  = "Opt_Descrambling";
constexpr char kLblScrambling[]    = "Scrambling";
constexpr char kLblDescrambling[]  = "Descrambling";

constexpr char kSeedEdit[]    = "Lb_random";        // numeric input for seed
constexpr char kSeedLabel[]   = "Lb_range";         // "(0~7679)" hint
constexpr char kInfoPanel[]   = "Lp_info";          // status text panel
}

// Status-bar messages exactly as embedded in the binary
namespace msg {
constexpr char kWelcome[]          = "Hi,Welcome To You !";
constexpr char kOpenCom[]          = "Open Com";
constexpr char kClose[]            = "Close";
constexpr char kErrorSuffix[]      = " Error!";
constexpr char kWriteOk[]          = "Write Successfull!";   // [sic]
constexpr char kWriteErr[]         = "Write Error!";
constexpr char kReadOk[]           = "Read Successfull!";    // [sic]
constexpr char kReadErr[]          = "Read Error!";
}

// LED indicator colours (GDI+ ARGB)
constexpr unsigned kLedRed   = 0xff0000ff;   // port closed / error
constexpr unsigned kLedGreen = 0x0000ff00;   // port open

}  // namespace ui
