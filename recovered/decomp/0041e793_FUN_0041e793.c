// 0041e793  ulonglong FUN_0041e793(HWND param_1, uint param_2)
// callers: 1  callees: 2


ulonglong FUN_0041e793(HWND param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = GetWindowLongPtrW(param_1,-0x14);
  SetWindowLongPtrW(param_1,-0x14,uVar1 & 0xffffffff | (ulonglong)param_2);
  return uVar1 & 0xffffffff;
}


