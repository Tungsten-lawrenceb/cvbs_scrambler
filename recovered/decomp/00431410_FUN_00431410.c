// 00431410  longlong FUN_00431410(longlong param_1)
// callers: 2  callees: 1


longlong FUN_00431410(longlong param_1)

{
  longlong lVar1;
  dword dVar2;
  bool bVar3;
  undefined7 extraout_var;
  IMAGE_DOS_HEADER *pIVar4;
  longlong lVar5;
  
  lVar5 = 0;
  pIVar4 = &IMAGE_DOS_HEADER_00400000;
  bVar3 = FUN_00431220((longlong)&IMAGE_DOS_HEADER_00400000);
  if ((int)CONCAT71(extraout_var,bVar3) != 0) {
    dVar2 = pIVar4->e_lfanew;
    lVar5 = (longlong)pIVar4->e_res_4_ +
            (ulonglong)*(ushort *)((longlong)pIVar4->e_res_4_ + (longlong)(int)dVar2 + -8) +
            (longlong)(int)dVar2 + -4;
    if (*(ushort *)(pIVar4->e_magic + (longlong)(int)dVar2 + 6) != 0) {
      lVar1 = lVar5 + (ulonglong)(*(ushort *)(pIVar4->e_magic + (longlong)(int)dVar2 + 6) - 1) *
                      0x28 + 0x28;
      do {
        if ((*(byte *)(lVar5 + 0x27) & 0x20) != 0) {
          if (param_1 == 0) {
            return lVar5;
          }
          param_1 = param_1 + -1;
        }
        lVar5 = lVar5 + 0x28;
      } while (lVar5 != lVar1);
    }
    lVar5 = 0;
  }
  return lVar5;
}


