// 0042e1e0  size_t FUN_0042e1e0(wchar_t * param_1)
// callers: 3  callees: 1


size_t FUN_0042e1e0(wchar_t *param_1)

{
  size_t sVar1;
  
  if (param_1 != (wchar_t *)0x0) {
    sVar1 = wcslen(param_1);
    return sVar1;
  }
  return 0;
}


