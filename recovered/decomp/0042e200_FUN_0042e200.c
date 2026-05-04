// 0042e200  undefined2 * FUN_0042e200(wchar_t * param_1, longlong param_2, size_t param_3)
// callers: 1  callees: 3


undefined2 * FUN_0042e200(wchar_t *param_1,longlong param_2,size_t param_3)

{
  size_t sVar1;
  undefined2 *_Dst;
  undefined2 *puVar2;
  longlong lVar3;
  
  if (param_1 == (wchar_t *)0x0) {
    return (undefined2 *)0x0;
  }
  sVar1 = wcslen(param_1);
  if (((sVar1 == 0) || (param_2 < 1 || (longlong)sVar1 < param_2)) || (param_3 == 0)) {
    return (undefined2 *)0x0;
  }
  lVar3 = param_2 + -1;
  if ((longlong)param_3 < 0) {
    param_3 = sVar1;
  }
  if ((longlong)sVar1 < (longlong)(param_3 + lVar3)) {
    param_3 = sVar1 - lVar3;
    _Dst = malloc(param_3 * 2 + 2);
    if (_Dst == (undefined2 *)0x0) {
      return (undefined2 *)0x0;
    }
    puVar2 = _Dst;
    if ((longlong)param_3 < 1) goto LAB_0042e269;
  }
  else {
    _Dst = malloc(param_3 * 2 + 2);
    if (_Dst == (undefined2 *)0x0) {
      return (undefined2 *)0x0;
    }
  }
  puVar2 = memcpy(_Dst,param_1 + lVar3,param_3 * 2);
  _Dst = puVar2 + param_3;
LAB_0042e269:
  *_Dst = 0;
  return puVar2;
}


