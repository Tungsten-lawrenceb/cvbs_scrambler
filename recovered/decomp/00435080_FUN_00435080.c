// 00435080  longlong FUN_00435080(undefined8 * param_1, uint param_2)
// callers: 12  callees: 2


longlong FUN_00435080(undefined8 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  sbyte sVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  
  iVar6 = *(int *)(param_1 + 1);
  iVar9 = (int)param_2 >> 5;
  iVar8 = *(int *)((longlong)param_1 + 0x14) + iVar9;
  for (iVar1 = *(int *)((longlong)param_1 + 0xc); iVar1 < iVar8 + 1; iVar1 = iVar1 * 2) {
    iVar6 = iVar6 + 1;
  }
  lVar5 = FUN_00434b50(iVar6);
  if (lVar5 != 0) {
    puVar12 = (uint *)(lVar5 + 0x18);
    if (0 < iVar9) {
      do {
        puVar14 = puVar12 + 1;
        *puVar12 = 0;
        puVar12 = puVar14;
      } while (puVar14 != (uint *)(lVar5 + 0x1c + (ulonglong)(iVar9 - 1) * 4));
      puVar12 = (uint *)(lVar5 + 0x1c + (ulonglong)(iVar9 - 1) * 4);
    }
    puVar11 = (uint *)(param_1 + 3);
    puVar14 = puVar11 + *(int *)((longlong)param_1 + 0x14);
    if ((param_2 & 0x1f) == 0) {
      do {
        puVar10 = puVar12 + 1;
        puVar15 = puVar11 + 1;
        *puVar12 = *puVar11;
        if (puVar14 <= puVar15) break;
        puVar12 = puVar12 + 2;
        puVar11 = puVar11 + 2;
        *puVar10 = *puVar15;
      } while (puVar11 < puVar14);
    }
    else {
      uVar13 = 0;
      sVar4 = (sbyte)(param_2 & 0x1f);
      puVar15 = puVar12;
      do {
        puVar10 = puVar11 + 1;
        *puVar15 = *puVar11 << sVar4 | uVar13;
        uVar2 = *puVar11;
        bVar3 = 0x20U - sVar4 & 0x1f;
        uVar13 = uVar2 >> bVar3;
        puVar11 = puVar10;
        puVar15 = puVar15 + 1;
      } while (puVar10 < puVar14);
      lVar7 = ((longlong)puVar14 + (-0x19 - (longlong)param_1) & 0xfffffffffffffffcU) + 4;
      if (puVar14 < (uint *)((longlong)param_1 + 0x19U)) {
        lVar7 = 4;
      }
      if (uVar2 >> bVar3 != 0) {
        iVar8 = iVar8 + 1;
      }
      *(uint *)((longlong)puVar12 + lVar7) = uVar13;
    }
    *(int *)(lVar5 + 0x14) = iVar8;
    FUN_00434c50(param_1);
  }
  return lVar5;
}


