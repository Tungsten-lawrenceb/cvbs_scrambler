// 00435200  undefined FUN_00435200(longlong param_1, longlong param_2)
// callers: 3  callees: 1


void FUN_00435200(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  int *piVar15;
  uint uVar16;
  uint *puVar17;
  int *piVar18;
  
  iVar6 = *(int *)(param_2 + 0x14);
  lVar5 = param_2;
  if (*(int *)(param_1 + 0x14) == iVar6) {
    puVar3 = (uint *)(param_1 + 0x18U) + iVar6;
    puVar8 = (uint *)(param_2 + 0x18 + (longlong)iVar6 * 4);
    do {
      puVar3 = puVar3 + -1;
      puVar8 = puVar8 + -1;
      if (*puVar3 != *puVar8) {
        uVar12 = 0;
        if (*puVar3 < *puVar8) goto LAB_0043538b;
        goto LAB_0043525f;
      }
    } while ((uint *)(param_1 + 0x18U) < puVar3);
    lVar5 = FUN_00434b50(0);
    if (lVar5 != 0) {
      *(undefined8 *)(lVar5 + 0x14) = 1;
      return;
    }
  }
  else {
    uVar12 = 0;
    if (*(int *)(param_1 + 0x14) - iVar6 < 0) {
LAB_0043538b:
      uVar12 = 1;
      lVar5 = param_1;
      param_1 = param_2;
    }
LAB_0043525f:
    lVar4 = FUN_00434b50(*(int *)(param_1 + 8));
    if (lVar4 != 0) {
      uVar16 = *(uint *)(param_1 + 0x14);
      uVar9 = (ulonglong)(int)uVar16;
      *(undefined4 *)(lVar4 + 0x10) = uVar12;
      lVar14 = 0x18;
      uVar13 = 0;
      puVar3 = (uint *)(param_1 + 0x18 + uVar9 * 4);
      uVar1 = lVar5 + 0x18 + (longlong)*(int *)(lVar5 + 0x14) * 4;
      do {
        lVar7 = (*(uint *)(param_1 + lVar14) - uVar13) - (ulonglong)*(uint *)(lVar5 + lVar14);
        iVar6 = (int)lVar7;
        *(int *)(lVar4 + lVar14) = iVar6;
        lVar14 = lVar14 + 4;
        uVar13 = (ulonglong)((uint)((ulonglong)lVar7 >> 0x20) & 1);
      } while ((ulonglong)(lVar14 + lVar5) < uVar1);
      uVar10 = (uVar1 - lVar5) - 0x19;
      uVar11 = uVar10 & 0xfffffffffffffffc;
      if (uVar1 < lVar5 + 0x19U) {
        uVar11 = 0;
      }
      lVar14 = (uVar10 & 0xfffffffffffffffc) + 4;
      lVar7 = uVar11 + lVar4 + 0x18;
      if (uVar1 < lVar5 + 0x19U) {
        lVar14 = 4;
      }
      puVar17 = (uint *)(param_1 + 0x18 + lVar14);
      piVar18 = (int *)(lVar4 + 0x18 + lVar14);
      puVar8 = puVar17;
      piVar15 = piVar18;
      if (puVar17 < puVar3) {
        do {
          uVar2 = *puVar8;
          puVar8 = puVar8 + 1;
          iVar6 = (int)(uVar2 - uVar13);
          *piVar15 = iVar6;
          uVar13 = (ulonglong)((uint)(uVar2 - uVar13 >> 0x20) & 1);
          piVar15 = piVar15 + 1;
        } while (puVar8 < puVar3);
        lVar7 = ((longlong)puVar3 + (-1 - (longlong)puVar17) & 0xfffffffffffffffcU) +
                (longlong)piVar18;
      }
      while (iVar6 == 0) {
        piVar15 = (int *)(lVar7 + -4);
        lVar7 = lVar7 + -4;
        uVar16 = (int)uVar9 - 1;
        uVar9 = (ulonglong)uVar16;
        iVar6 = *piVar15;
      }
      *(uint *)(lVar4 + 0x14) = uVar16;
    }
  }
  return;
}


