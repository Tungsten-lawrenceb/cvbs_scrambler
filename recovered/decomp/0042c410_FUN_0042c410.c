// 0042c410  undefined8 * FUN_0042c410(undefined8 * param_1, ulonglong param_2, int param_3)
// callers: 3  callees: 3


undefined8 * FUN_0042c410(undefined8 *param_1,ulonglong param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  void *pvVar3;
  void *pvVar4;
  
  uVar2 = param_2 + 0x1f & 0xffffffffffffffe0;
  uVar2 = ((longlong)uVar2 >> 3) + uVar2;
  pvVar4 = (void *)*param_1;
  if ((pvVar4 == (void *)0x0) || (lVar1 = param_1[2], lVar1 < (longlong)param_2)) {
    if (param_3 != 0) goto LAB_0042c450;
LAB_0042c490:
    FUN_0042c680(param_1);
    pvVar4 = malloc(uVar2 + 1);
    *param_1 = pvVar4;
    if (pvVar4 == (void *)0x0) {
      pvVar4 = malloc(param_2 + 1);
      *param_1 = pvVar4;
      uVar2 = param_2;
      if (pvVar4 == (void *)0x0) {
        param_1[2] = 0;
        param_1[1] = 0;
        return (undefined8 *)0x0;
      }
    }
  }
  else {
    if (lVar1 - (lVar1 >> 3) <= (longlong)uVar2) goto LAB_0042c46b;
    if (param_3 == 0) goto LAB_0042c490;
LAB_0042c450:
    pvVar3 = realloc(pvVar4,uVar2 + 1);
    *param_1 = pvVar3;
    if (pvVar3 == (void *)0x0) {
      pvVar3 = realloc(pvVar4,param_2 + 1);
      *param_1 = pvVar3;
      uVar2 = param_2;
      if (pvVar3 == (void *)0x0) {
        *param_1 = pvVar4;
        return (undefined8 *)0x0;
      }
    }
  }
  param_1[2] = uVar2;
LAB_0042c46b:
  param_1[1] = param_2 | param_1[1] & 0x8000000000000000;
  return param_1;
}


