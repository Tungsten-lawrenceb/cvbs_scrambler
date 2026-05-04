// 0042be90  ulong FUN_0042be90(undefined8 * param_1)
// callers: 6  callees: 2


ulong FUN_0042be90(undefined8 *param_1)

{
  ulong uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = 0;
    if (((char *)*param_1 != (char *)0x0) && (uVar1 = 0, (param_1[1] & 0x7fffffffffffffff) != 0)) {
      uVar1 = FUN_0042bdb0((char *)*param_1,param_1[1] & 0x7fffffffffffffff);
    }
    thunk_FUN_0042c5b0(param_1);
    return uVar1;
  }
  return 0;
}


