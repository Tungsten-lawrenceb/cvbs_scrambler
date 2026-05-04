// 0042f410  undefined FUN_0042f410(undefined8 * param_1, undefined8 * param_2, longlong param_3, ulonglong param_4)
// callers: 1  callees: 1


void FUN_0042f410(undefined8 *param_1,undefined8 *param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  
  FUN_0042f4d0(param_1);
  param_1[3] = param_2;
  if (param_4 != 0) {
    uVar1 = 0;
    do {
      puVar2 = (undefined8 *)0x0;
      if (uVar1 < param_4 - 1) {
        puVar2 = (undefined8 *)((longlong)param_2 + param_3);
      }
      uVar1 = uVar1 + 1;
      *param_2 = 0;
      param_2[1] = puVar2;
      param_2 = (undefined8 *)((longlong)param_2 + param_3);
    } while (param_4 != uVar1);
  }
  return;
}


