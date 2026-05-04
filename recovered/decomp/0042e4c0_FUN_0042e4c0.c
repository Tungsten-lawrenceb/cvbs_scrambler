// 0042e4c0  undefined2 * FUN_0042e4c0(wchar_t * param_1, int param_2)
// callers: 1  callees: 4


undefined2 * FUN_0042e4c0(wchar_t *param_1,int param_2)

{
  wchar_t wVar1;
  int iVar2;
  size_t sVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  size_t sVar6;
  
  if (param_1 != (wchar_t *)0x0) {
    sVar3 = wcslen(param_1);
    puVar4 = malloc(sVar3 * 2 + 2);
    if (puVar4 != (undefined2 *)0x0) {
      puVar5 = puVar4;
      if (param_2 == 1) {
        if (0 < (longlong)sVar3) {
          sVar6 = 0;
          do {
            wVar1 = param_1[sVar6];
            if ((ushort)(wVar1 + L'ﾟ') < 0x1a) {
              wVar1 = wVar1 + L'￠';
            }
            puVar4[sVar6] = wVar1;
            sVar6 = sVar6 + 1;
          } while (sVar6 != sVar3);
          puVar5 = puVar4 + sVar6;
        }
      }
      else {
        sVar6 = 0;
        if (0 < (longlong)sVar3) {
          do {
            wVar1 = param_1[sVar6];
            iVar2 = iswctype(wVar1,2);
            if (iVar2 != 0) {
              wVar1 = towupper(wVar1);
            }
            puVar4[sVar6] = wVar1;
            sVar6 = sVar6 + 1;
          } while (sVar6 != sVar3);
          puVar5 = puVar4 + sVar6;
        }
      }
      *puVar5 = 0;
      return puVar4;
    }
  }
  return (undefined2 *)0x0;
}


