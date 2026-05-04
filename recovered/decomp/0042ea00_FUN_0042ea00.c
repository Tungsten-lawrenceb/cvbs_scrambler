// 0042ea00  longlong FUN_0042ea00(ulonglong param_1, longlong * param_2, longlong * param_3)
// callers: 2  callees: 0


longlong FUN_0042ea00(ulonglong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar4 = (*param_3 - *param_2) + 1;
  if (1 < param_1) {
    uVar3 = 1;
    do {
      plVar1 = param_3 + uVar3;
      plVar2 = param_2 + uVar3;
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 * ((*plVar1 - *plVar2) + 1);
    } while (param_1 != uVar3);
  }
  return lVar4;
}


