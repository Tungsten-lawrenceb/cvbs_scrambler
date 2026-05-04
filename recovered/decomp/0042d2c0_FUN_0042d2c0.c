// 0042d2c0  void * FUN_0042d2c0(wchar_t * param_1, wchar_t * param_2)
// callers: 1  callees: 3


void * FUN_0042d2c0(wchar_t *param_1,wchar_t *param_2)

{
  size_t sVar1;
  size_t sVar2;
  void *_Dst;
  void *_Dst_00;
  size_t sVar3;
  
  if (param_1 == (wchar_t *)0x0) {
    sVar3 = 0;
    if (param_2 == (wchar_t *)0x0) {
      return (void *)0x0;
    }
  }
  else {
    sVar1 = wcslen(param_1);
    sVar3 = sVar1;
    if (param_2 == (wchar_t *)0x0) {
      sVar2 = 0;
      goto LAB_0042d2f3;
    }
  }
  sVar2 = wcslen(param_2);
  sVar1 = sVar2 + sVar3;
LAB_0042d2f3:
  if (sVar1 == 0) {
    return (void *)0x0;
  }
  _Dst = malloc(sVar1 * 2 + 2);
  memcpy(_Dst,param_1,sVar3 * 2);
  _Dst_00 = (void *)(sVar3 * 2 + (longlong)_Dst);
  memcpy(_Dst_00,param_2,sVar2 * 2);
  *(undefined2 *)((longlong)_Dst_00 + sVar2 * 2) = 0;
  return _Dst;
}


