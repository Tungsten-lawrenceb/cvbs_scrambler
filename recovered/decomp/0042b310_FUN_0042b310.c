// 0042b310  longlong FUN_0042b310(longlong * param_1, longlong param_2)
// callers: 13  callees: 0


longlong FUN_0042b310(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = param_2 - 1;
  if (param_2 == 0) {
    lVar2 = 0;
    if (*param_1 != 0) {
      return param_1[4];
    }
  }
  else {
    if (((-1 < (longlong)uVar1) && (*param_1 != 0)) && (uVar1 < (ulonglong)param_1[4])) {
      return param_1[uVar1 * 3 + 8];
    }
    lVar2 = -1;
  }
  return lVar2;
}


