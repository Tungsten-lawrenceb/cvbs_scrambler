// 0042e140  undefined2 * FUN_0042e140(wchar_t * param_1, size_t param_2)
// callers: 3  callees: 3


undefined2 * FUN_0042e140(wchar_t *param_1,size_t param_2)

{
  size_t sVar1;
  undefined2 *_Dst;
  undefined2 *puVar2;
  
  if (param_1 == (wchar_t *)0x0) {
    return (undefined2 *)0x0;
  }
  sVar1 = wcslen(param_1);
  if ((0 < (longlong)param_2) && (sVar1 != 0)) {
    if ((longlong)sVar1 < (longlong)param_2) {
      param_2 = sVar1;
    }
    _Dst = malloc(param_2 * 2 + 2);
    if (_Dst != (undefined2 *)0x0) {
      puVar2 = _Dst;
      if (0 < (longlong)param_2) {
        puVar2 = memcpy(_Dst,param_1,param_2 * 2);
        _Dst = puVar2 + param_2;
      }
      *_Dst = 0;
      return puVar2;
    }
  }
  return (undefined2 *)0x0;
}


