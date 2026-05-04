// 0042eaa0  ulonglong FUN_0042eaa0(longlong param_1)
// callers: 4  callees: 0


ulonglong FUN_0042eaa0(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
    uVar1 = *(ulonglong *)(param_1 + 0x10) / *(ulonglong *)(param_1 + 0x18);
  }
  return uVar1;
}


