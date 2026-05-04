// 00431480  IMAGE_DOS_HEADER * FUN_00431480(void)
// callers: 3  callees: 1


IMAGE_DOS_HEADER * FUN_00431480(void)

{
  bool bVar1;
  undefined7 extraout_var;
  IMAGE_DOS_HEADER *pIVar2;
  IMAGE_DOS_HEADER *pIVar3;
  
  pIVar2 = &IMAGE_DOS_HEADER_00400000;
  pIVar3 = (IMAGE_DOS_HEADER *)0x0;
  bVar1 = FUN_00431220((longlong)&IMAGE_DOS_HEADER_00400000);
  if ((int)CONCAT71(extraout_var,bVar1) != 0) {
    pIVar3 = pIVar2;
  }
  return pIVar3;
}


