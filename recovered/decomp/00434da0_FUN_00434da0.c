// 00434da0  longlong FUN_00434da0(longlong param_1, longlong param_2)
// callers: 4  callees: 1


longlong FUN_00434da0(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  uint *puVar9;
  ulonglong uVar10;
  int iVar11;
  uint *puVar12;
  uint *puVar13;
  ulonglong uVar14;
  uint *puVar15;
  longlong lVar16;
  
  iVar11 = *(int *)(param_1 + 0x14);
  iVar3 = *(int *)(param_2 + 0x14);
  lVar16 = param_1;
  iVar6 = iVar11;
  if (iVar3 <= iVar11) {
    lVar16 = param_2;
    param_2 = param_1;
    iVar6 = iVar3;
    iVar3 = iVar11;
  }
  iVar11 = iVar3 + iVar6;
  lVar7 = FUN_00434b50((uint)(*(int *)(param_2 + 0xc) < iVar11) + *(int *)(param_2 + 8));
  if (lVar7 != 0) {
    puVar12 = (uint *)(lVar7 + 0x18);
    puVar8 = puVar12 + iVar11;
    for (puVar15 = puVar12; puVar15 < puVar8; puVar15 = puVar15 + 1) {
      *puVar15 = 0;
    }
    puVar15 = (uint *)(lVar16 + 0x18);
    puVar1 = puVar15 + iVar6;
    puVar2 = (uint *)(param_2 + 0x18) + iVar3;
    if (puVar15 < puVar1) {
      lVar16 = ((longlong)puVar2 + (-0x19 - param_2) & 0xfffffffffffffffcU) + 4;
      if (puVar2 < (uint *)(param_2 + 0x19)) {
        lVar16 = 4;
      }
      do {
        while( true ) {
          uVar4 = *puVar15;
          puVar15 = puVar15 + 1;
          if (uVar4 == 0) break;
          uVar14 = 0;
          puVar9 = (uint *)(param_2 + 0x18);
          puVar13 = puVar12;
          do {
            uVar5 = *puVar9;
            puVar9 = puVar9 + 1;
            uVar10 = (ulonglong)uVar5 * (ulonglong)uVar4 + (ulonglong)*puVar13 + uVar14;
            *puVar13 = (uint)uVar10;
            uVar14 = uVar10 >> 0x20;
            puVar13 = puVar13 + 1;
          } while (puVar9 < puVar2);
          *(int *)((longlong)puVar12 + lVar16) = (int)(uVar10 >> 0x20);
          puVar12 = puVar12 + 1;
          if (puVar1 <= puVar15) goto LAB_00434eb4;
        }
        puVar12 = puVar12 + 1;
      } while (puVar15 < puVar1);
    }
LAB_00434eb4:
    if (0 < iVar11) {
      do {
        puVar12 = puVar8 + -1;
        puVar8 = puVar8 + -1;
        if (*puVar12 != 0) break;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    *(int *)(lVar7 + 0x14) = iVar11;
  }
  return lVar7;
}


