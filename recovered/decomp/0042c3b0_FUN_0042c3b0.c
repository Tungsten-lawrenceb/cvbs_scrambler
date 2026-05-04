// 0042c3b0  undefined8 * FUN_0042c3b0(undefined8 * param_1, ulonglong param_2)
// callers: 1  callees: 1


undefined8 * FUN_0042c3b0(undefined8 *param_1,ulonglong param_2)

{
  void *pvVar1;
  ulonglong uVar2;
  
  uVar2 = param_2 + 0x1f & 0xffffffffffffffe0;
  pvVar1 = malloc(uVar2 + 1);
  *param_1 = pvVar1;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = malloc(param_2 + 1);
    *param_1 = pvVar1;
    uVar2 = param_2;
    if (pvVar1 == (void *)0x0) {
      param_1[2] = 0;
      param_1[1] = 0;
      return (undefined8 *)0x0;
    }
  }
  param_1[2] = uVar2;
  param_1[1] = param_2;
  return param_1;
}


