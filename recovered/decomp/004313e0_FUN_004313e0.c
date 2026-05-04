// 004313e0  ulonglong FUN_004313e0(void)
// callers: 2  callees: 1


ulonglong FUN_004313e0(void)

{
  bool bVar1;
  undefined7 extraout_var;
  IMAGE_DOS_HEADER *pIVar3;
  ulonglong uVar2;
  
  pIVar3 = &IMAGE_DOS_HEADER_00400000;
  bVar1 = FUN_00431220((longlong)&IMAGE_DOS_HEADER_00400000);
  uVar2 = CONCAT71(extraout_var,bVar1);
  if ((int)uVar2 != 0) {
    uVar2 = (ulonglong)*(ushort *)(pIVar3->e_magic + (longlong)(int)pIVar3->e_lfanew + 6);
  }
  return uVar2;
}


