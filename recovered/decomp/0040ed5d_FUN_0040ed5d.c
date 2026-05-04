// 0040ed5d  ulonglong FUN_0040ed5d(undefined8 * param_1)
// callers: 1  callees: 1


ulonglong FUN_0040ed5d(undefined8 *param_1)

{
  ulonglong uVar1;
  
  uVar1 = SendMessageW((HWND)*param_1,0x147,0,0);
  return uVar1 & 0xffffffff;
}


