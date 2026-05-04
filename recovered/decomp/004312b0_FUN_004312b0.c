// 004312b0  char * FUN_004312b0(char * param_1)
// callers: 2  callees: 3


char * FUN_004312b0(char *param_1)

{
  char *pcVar1;
  dword dVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  undefined7 extraout_var;
  IMAGE_DOS_HEADER *pIVar6;
  char *_Str1;
  
  sVar5 = strlen(param_1);
  if (sVar5 < 9) {
    pIVar6 = &IMAGE_DOS_HEADER_00400000;
    bVar3 = FUN_00431220((longlong)&IMAGE_DOS_HEADER_00400000);
    if ((int)CONCAT71(extraout_var,bVar3) == 0) {
      return (char *)0x0;
    }
    dVar2 = pIVar6->e_lfanew;
    _Str1 = (char *)((longlong)pIVar6->e_res_4_ +
                    (ulonglong)*(ushort *)((longlong)pIVar6->e_res_4_ + (longlong)(int)dVar2 + -8) +
                    (longlong)(int)dVar2 + -4);
    if (*(ushort *)(pIVar6->e_magic + (longlong)(int)dVar2 + 6) != 0) {
      pcVar1 = _Str1 + (ulonglong)(*(ushort *)(pIVar6->e_magic + (longlong)(int)dVar2 + 6) - 1) *
                       0x28 + 0x28;
      do {
        iVar4 = strncmp(_Str1,param_1,8);
        if (iVar4 == 0) {
          return _Str1;
        }
        _Str1 = _Str1 + 0x28;
      } while (_Str1 != pcVar1);
    }
  }
  return (char *)0x0;
}


