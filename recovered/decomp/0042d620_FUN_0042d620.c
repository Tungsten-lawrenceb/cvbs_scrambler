// 0042d620  void * FUN_0042d620(wchar_t * param_1, byte * param_2, longlong param_3)
// callers: 1  callees: 6


void * FUN_0042d620(wchar_t *param_1,byte *param_2,longlong param_3)

{
  size_t sVar1;
  size_t sVar2;
  size_t sVar3;
  void *_Dst;
  byte *pbVar4;
  
  if (param_1 == (wchar_t *)0x0) {
    sVar1 = 0;
    if (param_2 != (byte *)0x0) goto LAB_0042d656;
LAB_0042d6fb:
    _Dst = (void *)0x0;
  }
  else {
    sVar1 = wcslen(param_1);
    if (param_2 == (byte *)0x0) {
      if (sVar1 == 0) goto LAB_0042d6fb;
      sVar2 = 0;
      pbVar4 = (byte *)0x0;
      sVar3 = sVar1;
    }
    else {
LAB_0042d656:
      if (param_3 == -1) {
        sVar2 = *(ulonglong *)(param_2 + 8) & 0x7fffffffffffffff;
        if (sVar1 + sVar2 == 0) {
          _Dst = (void *)0x0;
          goto LAB_0042d703;
        }
        pbVar4 = *(byte **)param_2;
        sVar3 = sVar1 + sVar2;
      }
      else {
        sVar2 = strlen((char *)param_2);
        sVar3 = sVar1 + sVar2;
        pbVar4 = param_2;
        if (sVar3 == 0) {
          return (void *)0x0;
        }
      }
    }
    _Dst = malloc(sVar3 * 2 + 2);
    memcpy(_Dst,param_1,sVar1 * 2);
    FUN_0042dad0((wchar_t *)((longlong)_Dst + sVar1 * 2),sVar2,pbVar4);
  }
  if (param_3 != -1) {
    return _Dst;
  }
LAB_0042d703:
  thunk_FUN_0042c5b0((undefined8 *)param_2);
  return _Dst;
}


