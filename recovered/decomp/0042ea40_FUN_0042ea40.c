// 0042ea40  longlong FUN_0042ea40(longlong param_1, longlong * param_2, longlong param_3)
// callers: 2  callees: 0


longlong FUN_0042ea40(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = 0;
  if (param_1 != 0) {
    if (param_1 == 1) {
      lVar1 = 0;
    }
    else {
      lVar2 = 0;
      lVar3 = *param_2;
      do {
        lVar2 = lVar2 + 1;
        lVar1 = (lVar1 + lVar3) * ((*(longlong *)(param_3 + lVar2 * 8) - param_2[lVar2]) + 1);
        lVar3 = param_2[lVar2];
      } while (lVar2 != param_1 + -1);
    }
    return -(lVar1 + param_2[param_1 + -1]);
  }
  return 0;
}


