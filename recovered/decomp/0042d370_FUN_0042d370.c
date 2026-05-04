// 0042d370  wchar_t * FUN_0042d370(wchar_t * param_1, longlong param_2, byte * param_3, longlong param_4)
// callers: 39  callees: 3


wchar_t * FUN_0042d370(wchar_t *param_1,longlong param_2,byte *param_3,longlong param_4)

{
  size_t sVar1;
  byte *pbVar2;
  
  if (param_1 != (wchar_t *)0x0) {
    if (param_3 == (byte *)0x0) {
      pbVar2 = (byte *)0x0;
      sVar1 = 0;
    }
    else if (param_4 == -1) {
      pbVar2 = *(byte **)param_3;
      sVar1 = *(ulonglong *)(param_3 + 8) & 0x7fffffffffffffff;
    }
    else {
      sVar1 = strlen((char *)param_3);
      pbVar2 = param_3;
    }
    if (param_2 != 0) {
      sVar1 = param_2 - 1;
    }
    FUN_0042dad0(param_1,sVar1,pbVar2);
  }
  if (param_4 != -1) {
    return param_1;
  }
  thunk_FUN_0042c5b0((undefined8 *)param_3);
  return param_1;
}


