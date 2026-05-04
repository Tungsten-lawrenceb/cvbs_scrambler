// 00431540  char * FUN_00431540(uint param_1)
// callers: 1  callees: 1


char * FUN_00431540(uint param_1)

{
  longlong lVar1;
  dword dVar2;
  uint uVar3;
  bool bVar4;
  undefined7 extraout_var;
  ulonglong uVar5;
  word *pwVar6;
  longlong lVar7;
  ulonglong uVar8;
  char *pcVar9;
  IMAGE_DOS_HEADER *pIVar10;
  
  pIVar10 = &IMAGE_DOS_HEADER_00400000;
  pcVar9 = (char *)0x0;
  uVar8 = (ulonglong)param_1;
  bVar4 = FUN_00431220((longlong)&IMAGE_DOS_HEADER_00400000);
  if ((int)CONCAT71(extraout_var,bVar4) != 0) {
    dVar2 = pIVar10->e_lfanew;
    uVar3 = *(uint *)((longlong)pIVar10[1].e_res_4_ + (longlong)(int)dVar2 + -0xc);
    uVar5 = (ulonglong)uVar3;
    if (uVar3 != 0) {
      lVar7 = (longlong)pIVar10->e_res_4_ +
              (ulonglong)*(ushort *)((longlong)pIVar10->e_res_4_ + (longlong)(int)dVar2 + -8) +
              (longlong)(int)dVar2 + -4;
      if (*(ushort *)(pIVar10->e_magic + (longlong)(int)dVar2 + 6) != 0) {
        lVar1 = lVar7 + (ulonglong)(*(ushort *)(pIVar10->e_magic + (longlong)(int)dVar2 + 6) - 1) *
                        0x28 + 0x28;
        while ((uVar5 < *(uint *)(lVar7 + 0xc) ||
               (*(uint *)(lVar7 + 0xc) + *(int *)(lVar7 + 8) <= uVar5))) {
          lVar7 = lVar7 + 0x28;
          if (lVar7 == lVar1) goto LAB_004315b5;
        }
        for (pwVar6 = (word *)(pIVar10->e_magic + uVar5);
            (*(int *)(pwVar6 + 2) != 0 || (*(int *)(pwVar6 + 6) != 0)); pwVar6 = pwVar6 + 10) {
          if ((int)uVar8 < 1) {
            return pIVar10->e_magic + *(uint *)(pwVar6 + 6);
          }
          uVar8 = (ulonglong)((int)uVar8 - 1);
        }
LAB_004315b5:
        pcVar9 = (char *)0x0;
      }
    }
  }
  return pcVar9;
}


