// 00434d70  undefined FUN_00434d70(undefined4 param_1)
// callers: 2  callees: 1


void FUN_00434d70(undefined4 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_00434b50(1);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x18) = param_1;
    *(undefined4 *)(lVar1 + 0x14) = 1;
  }
  return;
}


