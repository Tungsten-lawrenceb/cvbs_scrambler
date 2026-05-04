// 0042db90  wchar_t * FUN_0042db90(byte * param_1)
// callers: 1  callees: 4


wchar_t * FUN_0042db90(byte *param_1)

{
  byte bVar1;
  wchar_t wVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  
  if (param_1 != (byte *)0x0) {
    sVar3 = mbstowcs((wchar_t *)0x0,(char *)param_1,0);
    if ((longlong)sVar3 < 0) {
      sVar3 = strlen((char *)param_1);
      pwVar4 = malloc(sVar3 * 2 + 2);
      if (pwVar4 != (wchar_t *)0x0) {
        for (pwVar5 = pwVar4; pwVar5 < pwVar4 + sVar3; pwVar5 = pwVar5 + 1) {
          bVar1 = *param_1;
          wVar2 = (wchar_t)bVar1;
          param_1 = param_1 + 1;
          if (bVar1 == 0) break;
          if ((char)bVar1 < '\0') {
            wVar2 = L'?';
          }
          *pwVar5 = wVar2;
        }
        *pwVar5 = L'\0';
        return pwVar4;
      }
    }
    else if (sVar3 != 0) {
      pwVar4 = malloc(sVar3 * 2 + 2);
      if (pwVar4 != (wchar_t *)0x0) {
        FUN_0042dad0(pwVar4,sVar3,param_1);
      }
      return pwVar4;
    }
  }
  return (wchar_t *)0x0;
}


