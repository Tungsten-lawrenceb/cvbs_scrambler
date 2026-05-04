// 0041bcd0  undefined FUN_0041bcd0(longlong param_1)
// callers: 3  callees: 0


void FUN_0041bcd0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 8) + (ulonglong)*(uint *)(param_1 + 0x10)) = 0;
    *(undefined1 *)(*(longlong *)(param_1 + 8) + (ulonglong)*(uint *)(param_1 + 0x10) + 1) = 0;
  }
  return;
}


