// 00431350  longlong FUN_00431350(longlong param_1)
// callers: 2  callees: 1


longlong FUN_00431350(longlong param_1)

{
  longlong lVar1;
  dword dVar2;
  bool bVar3;
  undefined7 extraout_var;
  longlong lVar4;
  IMAGE_DOS_HEADER *pIVar5;
  
  pIVar5 = &IMAGE_DOS_HEADER_00400000;
  lVar4 = 0;
  bVar3 = FUN_00431220((longlong)&IMAGE_DOS_HEADER_00400000);
  if ((int)CONCAT71(extraout_var,bVar3) != 0) {
    dVar2 = pIVar5->e_lfanew;
    lVar4 = (longlong)pIVar5->e_res_4_ +
            (ulonglong)*(ushort *)((longlong)pIVar5->e_res_4_ + (longlong)(int)dVar2 + -8) +
            (longlong)(int)dVar2 + -4;
    if (*(ushort *)(pIVar5->e_magic + (longlong)(int)dVar2 + 6) != 0) {
      lVar1 = lVar4 + (ulonglong)(*(ushort *)(pIVar5->e_magic + (longlong)(int)dVar2 + 6) - 1) *
                      0x28 + 0x28;
      do {
        if (((ulonglong)*(uint *)(lVar4 + 0xc) <= (ulonglong)(param_1 - (longlong)pIVar5)) &&
           ((ulonglong)(param_1 - (longlong)pIVar5) <
            (ulonglong)(*(uint *)(lVar4 + 0xc) + *(int *)(lVar4 + 8)))) {
          return lVar4;
        }
        lVar4 = lVar4 + 0x28;
      } while (lVar4 != lVar1);
    }
    lVar4 = 0;
  }
  return lVar4;
}


