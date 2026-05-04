// 004314b0  ulonglong FUN_004314b0(longlong param_1)
// callers: 1  callees: 1


ulonglong FUN_004314b0(longlong param_1)

{
  longlong lVar1;
  dword dVar2;
  bool bVar3;
  undefined7 extraout_var;
  longlong lVar5;
  IMAGE_DOS_HEADER *pIVar6;
  ulonglong uVar4;
  
  pIVar6 = &IMAGE_DOS_HEADER_00400000;
  bVar3 = FUN_00431220((longlong)&IMAGE_DOS_HEADER_00400000);
  uVar4 = CONCAT71(extraout_var,bVar3);
  if ((int)uVar4 != 0) {
    dVar2 = pIVar6->e_lfanew;
    lVar5 = (longlong)pIVar6->e_res_4_ +
            (ulonglong)*(ushort *)((longlong)pIVar6->e_res_4_ + (longlong)(int)dVar2 + -8) +
            (longlong)(int)dVar2 + -4;
    if (*(ushort *)(pIVar6->e_magic + (longlong)(int)dVar2 + 6) != 0) {
      lVar1 = lVar5 + (ulonglong)(*(ushort *)(pIVar6->e_magic + (longlong)(int)dVar2 + 6) - 1) *
                      0x28 + 0x28;
      do {
        if (((ulonglong)*(uint *)(lVar5 + 0xc) <= (ulonglong)(param_1 - (longlong)pIVar6)) &&
           ((ulonglong)(param_1 - (longlong)pIVar6) <
            (ulonglong)(*(uint *)(lVar5 + 0xc) + *(int *)(lVar5 + 8)))) {
          return (ulonglong)(~*(uint *)(lVar5 + 0x24) >> 0x1f);
        }
        lVar5 = lVar5 + 0x28;
      } while (lVar5 != lVar1);
    }
    uVar4 = 0;
  }
  return uVar4;
}


