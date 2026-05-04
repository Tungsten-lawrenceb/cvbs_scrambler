// 0042e0a0  size_t FUN_0042e0a0(wchar_t * param_1, wchar_t * param_2, size_t param_3)
// callers: 1  callees: 1


size_t FUN_0042e0a0(wchar_t *param_1,wchar_t *param_2,size_t param_3)

{
  size_t sVar1;
  size_t sVar2;
  size_t sVar3;
  
  if (param_1 == (wchar_t *)0x0) {
    return 0;
  }
  if (param_2 != (wchar_t *)0x0) {
    sVar1 = wcslen(param_1);
    sVar2 = wcslen(param_2);
    if (((sVar1 != 0 && sVar2 != 0) && (param_3 != 0)) &&
       ((sVar3 = sVar1, (longlong)param_3 < 0 ||
        (sVar3 = param_3, (longlong)param_3 <= (longlong)sVar1)))) {
      do {
        sVar1 = 0;
        do {
          if (param_1[sVar3 - 1] == param_2[sVar1]) {
            return sVar3;
          }
          sVar1 = sVar1 + 1;
        } while (sVar1 != sVar2);
        sVar3 = sVar3 - 1;
      } while (sVar3 != 0);
    }
  }
  return 0;
}


