// 0041e706  ulonglong FUN_0041e706(HWND param_1)
// callers: 1  callees: 1


ulonglong FUN_0041e706(HWND param_1)

{
  ulonglong uVar1;
  
  uVar1 = GetWindowLongPtrW(param_1,-0x14);
  return uVar1 & 0xffffffff;
}


