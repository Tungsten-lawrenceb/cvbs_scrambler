// 0042d200  uint FUN_0042d200(wchar_t * param_1, wchar_t * param_2)
// callers: 71  callees: 2


uint FUN_0042d200(wchar_t *param_1,wchar_t *param_2)

{
  uint uVar1;
  size_t sVar2;
  size_t sVar3;
  size_t sVar4;
  
  if (param_1 != (wchar_t *)0x0) {
    if (param_2 != (wchar_t *)0x0) {
      sVar3 = wcslen(param_1);
      sVar4 = wcslen(param_2);
      sVar2 = sVar3;
      if ((longlong)sVar4 <= (longlong)sVar3) {
        sVar2 = sVar4;
      }
      uVar1 = wcsncmp(param_1,param_2,sVar2);
      if (uVar1 != 0) {
        return uVar1;
      }
      if (sVar4 == sVar3) {
        return 0;
      }
      return (((longlong)sVar4 < (longlong)sVar3) - 1) + (uint)((longlong)sVar4 < (longlong)sVar3);
    }
    if (param_1 != (wchar_t *)0x0) {
      sVar2 = wcslen(param_1);
      return (uint)(sVar2 != 0);
    }
  }
  if (param_2 == (wchar_t *)0x0) {
    return 0;
  }
  sVar2 = wcslen(param_2);
  return -(uint)(sVar2 != 0);
}


