// 00403c4d  bool FUN_00403c4d(longlong param_1)
// callers: 1  callees: 2


bool FUN_00403c4d(longlong param_1)

{
  BOOL BVar1;
  ulonglong uVar2;
  undefined1 local_41;
  
  local_41 = false;
  BVar1 = IsWindow(*(HWND *)(param_1 + 8));
  if (BVar1 != 0) {
    uVar2 = FUN_0041e706(*(HWND *)(param_1 + 8));
    local_41 = (uVar2 & 0x20) == 0x20;
  }
  return local_41;
}


