// WinMain skeleton, reconstructed from FUN_00401adb (program init) and
// FUN_0041b0c0 (mainCRT->user main shim). The original binary uses a custom
// Win32+GDI+ widget framework whose internals (~340 functions) are not
// reconstructed here; this file shows only the *user-visible* startup path.
//
// Build:  x86_64-w64-mingw32-g++ -mwindows -std=c++17 *.cpp -lgdiplus -lcomctl32 \
//                                -lshlwapi -lole32 -loleaut32 -static
//
// Original toolchain string from .rdata:
//   GCC: (MinGW-W64 x86_64-posix-sjlj, built by Brecht Sanders) 9.3.0
// Original linker: GNU ld 2.34.

#include <windows.h>
#include <commctrl.h>
#include <gdiplus.h>
#include "serial.h"
#include "scramble.h"
#include "window.h"

// ----- Program globals (mirroring DAT_0043e2xx layout in the original) -------
struct AppState {
    HINSTANCE     hInstance{};
    HWND          hWnd{};
    Serial        com;
    int           selectedPort = 1;       // index into the COM1..COM40 list
    ScrambleParams cur{ false, false, 0 };
};
static AppState g;

// ----- Forward declarations of handlers (reconstructed in their own files) --
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);     // FUN_00422662 family
void on_open_close_clicked();                              // FUN_00419b56
void on_write_clicked();                                   // FUN_0041a31e
void on_read_clicked();                                    // FUN_0041a6ac

int APIENTRY wWinMain(HINSTANCE hInst, HINSTANCE, PWSTR, int nShow) {
    g.hInstance = hInst;

    // 1. COM (used by GDI+ stream helpers)
    OleInitialize(nullptr);

    // 2. Common controls v6 (manifest pulls in COMCTL32 v6)
    INITCOMMONCONTROLSEX icc{ sizeof icc, ICC_STANDARD_CLASSES | ICC_BAR_CLASSES };
    InitCommonControlsEx(&icc);

    // 3. GDI+
    Gdiplus::GdiplusStartupInput si;
    ULONG_PTR token{};
    Gdiplus::GdiplusStartup(&token, &si, nullptr);

    // 4. Register the main window class.  The original uses the literal
    //    string "bt656 mwindows" as both class name and dummy font tag.
    WNDCLASSEXW wc{};
    wc.cbSize        = sizeof wc;
    wc.style         = CS_HREDRAW | CS_VREDRAW;
    wc.lpfnWndProc   = WndProc;
    wc.hInstance     = hInst;
    wc.hIcon         = LoadIconW(hInst, ui::kAppIcon);
    wc.hCursor       = LoadCursor(nullptr, IDC_ARROW);
    wc.hbrBackground = (HBRUSH)(COLOR_BTNFACE + 1);
    wc.lpszClassName = ui::kAppClass;
    RegisterClassExW(&wc);

    g.hWnd = CreateWindowExW(0, ui::kAppClass, ui::kAppTitle,
                             WS_OVERLAPPEDWINDOW & ~WS_THICKFRAME & ~WS_MAXIMIZEBOX,
                             CW_USEDEFAULT, CW_USEDEFAULT, 480, 360,
                             nullptr, nullptr, hInst, nullptr);

    ShowWindow(g.hWnd, nShow);
    UpdateWindow(g.hWnd);

    // 5. Standard message loop
    MSG msg;
    while (GetMessageW(&msg, nullptr, 0, 0) > 0) {
        TranslateMessage(&msg);
        DispatchMessageW(&msg);
    }

    // 6. Shutdown
    Gdiplus::GdiplusShutdown(token);
    OleUninitialize();
    return int(msg.wParam);
}

// --- Stub: the original WndProc is FUN_00422662 (~980 LOC).  It demuxes ----
// WM_COMMAND -> control-name-string -> handler.  A faithful reconstruction
// would require porting the framework's name-keyed message map; for the
// purposes of this recovery we route the three observable buttons here.
LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wp, LPARAM lp) {
    switch (msg) {
        case WM_DESTROY:
            g.com.close();
            PostQuitMessage(0);
            return 0;
        case WM_COMMAND: {
            // Real code dispatches via control-name -> callback table.
            // Place-holder: the three meaningful actions are:
            //   on_open_close_clicked();   (cmd_open)
            //   on_write_clicked();        (cmd_write)
            //   on_read_clicked();         (cmd_read)
            return 0;
        }
        default:
            return DefWindowProcW(hwnd, msg, wp, lp);
    }
}
