// 0042cc20  undefined8 * FUN_0042cc20(longlong * param_1, ulonglong param_2)
// callers: 2  callees: 3


undefined8 * FUN_0042cc20(longlong *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  if (param_1 == (longlong *)0x0) {
    return (undefined8 *)&DAT_00445150;
  }
  if (((*param_1 != 0) && (uVar2 = param_1[1] & 0x7fffffffffffffff, 0 < (longlong)param_2)) &&
     (uVar2 != 0)) {
    if ((longlong)uVar2 <= (longlong)param_2) {
      param_2 = uVar2;
    }
    puVar1 = FUN_0042c520((undefined8 *)0x0,param_2);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_0042c640((undefined1 *)*puVar1,(void *)*param_1,param_2);
      goto LAB_0042cc5a;
    }
  }
  puVar1 = (undefined8 *)&DAT_00445150;
LAB_0042cc5a:
  FUN_0042c5b0(param_1);
  return puVar1;
}


