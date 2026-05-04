// 0042bd30  double FUN_0042bd30(undefined8 * param_1)
// callers: 4  callees: 2


double FUN_0042bd30(undefined8 *param_1)

{
  double dVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    dVar1 = 0.0;
    if (((char *)*param_1 != (char *)0x0) && ((param_1[1] & 0x7fffffffffffffff) != 0)) {
      dVar1 = FUN_0042bbe0((char *)*param_1,param_1[1] & 0x7fffffffffffffff);
    }
    thunk_FUN_0042c5b0(param_1);
    return dVar1;
  }
  return 0.0;
}


