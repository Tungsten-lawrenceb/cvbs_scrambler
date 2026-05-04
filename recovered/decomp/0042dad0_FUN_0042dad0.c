// 0042dad0  size_t FUN_0042dad0(wchar_t * param_1, longlong param_2, byte * param_3)
// callers: 3  callees: 1


size_t FUN_0042dad0(wchar_t *param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  wchar_t wVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  
  if (param_3 == (byte *)0x0) {
    *param_1 = L'\0';
    return 0;
  }
  sVar3 = mbstowcs(param_1,(char *)param_3,param_2 + 1U);
  if (-1 < (longlong)sVar3) {
    if (param_2 + 1U == sVar3) {
      sVar3 = param_2 - 1;
      param_1[param_2] = L'\0';
    }
    return sVar3;
  }
  pwVar4 = param_1;
  if (param_1 < param_1 + param_2) {
    do {
      bVar1 = *param_3;
      wVar2 = (wchar_t)bVar1;
      param_3 = param_3 + 1;
      pwVar5 = pwVar4;
      if (bVar1 == 0) break;
      if ((char)bVar1 < '\0') {
        wVar2 = L'?';
      }
      pwVar5 = pwVar4 + 1;
      *pwVar4 = wVar2;
      pwVar4 = pwVar5;
    } while (pwVar5 < param_1 + param_2);
    sVar3 = (longlong)pwVar5 - (longlong)param_1 >> 1;
    param_1 = pwVar5;
  }
  else {
    sVar3 = 0;
  }
  *param_1 = L'\0';
  return sVar3;
}


