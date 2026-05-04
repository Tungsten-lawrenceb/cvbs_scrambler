// 0040386d  undefined1 FUN_0040386d(longlong param_1)
// callers: 1  callees: 4


undefined1 FUN_0040386d(longlong param_1)

{
  BOOL BVar1;
  FLASHWINFO local_68;
  undefined1 local_41;
  
  local_41 = 0;
  BVar1 = IsWindow(*(HWND *)(param_1 + 8));
  if (BVar1 != 0) {
    local_68.cbSize = 0x20;
    local_68._4_4_ = 0;
    local_68.hwnd = *(HWND *)(param_1 + 8);
    local_68.dwFlags = 3;
    local_68.uCount = 5;
    local_68.dwTimeout = 100;
    local_68._28_4_ = 0;
    OpenIcon(*(HWND *)(param_1 + 8));
    SetForegroundWindow(*(HWND *)(param_1 + 8));
    BVar1 = FlashWindowEx(&local_68);
    local_41 = BVar1 != 0;
  }
  return local_41;
}


