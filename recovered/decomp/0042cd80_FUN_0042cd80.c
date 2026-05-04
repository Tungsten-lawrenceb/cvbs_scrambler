// 0042cd80  longlong * FUN_0042cd80(longlong * param_1, longlong param_2, ulonglong param_3)
// callers: 5  callees: 3


longlong * FUN_0042cd80(longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  if ((((param_1 != (longlong *)0x0) && (*param_1 != 0)) &&
      (uVar2 = param_1[1] & 0x7fffffffffffffff, uVar2 != 0)) &&
     ((0 < param_2 && param_2 <= (longlong)uVar2 && (param_3 != 0)))) {
    if ((longlong)param_3 < 0) {
      param_3 = uVar2;
    }
    lVar1 = param_2 + -1;
    if ((longlong)uVar2 < (longlong)(param_3 + lVar1)) {
      param_3 = uVar2 - lVar1;
    }
    plVar3 = FUN_0042c520((undefined8 *)0x0,param_3);
    if (plVar3 != (longlong *)0x0) {
      memcpy((void *)*plVar3,(void *)(lVar1 + *param_1),param_3);
      *(undefined1 *)(*plVar3 + param_3) = 0;
      goto LAB_0042ce2b;
    }
  }
  plVar3 = (longlong *)&DAT_00445150;
LAB_0042ce2b:
  FUN_0042c5b0(param_1);
  return plVar3;
}


