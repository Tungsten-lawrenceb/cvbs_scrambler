// 00434610  undefined8 FUN_00434610(undefined8 * param_1, uint * param_2, uint * param_3)
// callers: 2  callees: 1


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00434610(undefined8 *param_1,uint *param_2,uint *param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  char *pcVar8;
  uint uVar9;
  ulonglong uVar10;
  uint *puVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  char *pcVar15;
  int iVar16;
  uint *puVar17;
  uint *puVar18;
  int iVar19;
  
  if (DAT_0044a350 == '\0') {
    FUN_00434570();
  }
  uVar4 = *param_2 & 0x1f;
  puVar7 = param_3 + ((int)*param_2 >> 5);
  if (uVar4 == 0) {
    puVar11 = puVar7 + -1;
    puVar18 = puVar7;
  }
  else {
    puVar18 = puVar7 + 1;
    puVar11 = puVar7;
  }
  puVar18[-1] = 0;
  pcVar15 = (char *)*param_1;
  bVar2 = pcVar15[1];
  while( true ) {
    if (bVar2 == 0) {
      return 4;
    }
    if (0x20 < bVar2) break;
    bVar2 = pcVar15[2];
    pcVar15 = pcVar15 + 1;
  }
  if (((bVar2 == 0x30) && ((pcVar15[2] & 0xdfU) == 0x58)) && (bVar2 = pcVar15[3], 0x20 < bVar2)) {
    pcVar8 = pcVar15 + 3;
    pcVar15 = pcVar15 + 2;
  }
  else {
    bVar2 = pcVar15[1];
    pcVar8 = pcVar15 + 1;
    if (bVar2 == 0) {
      return 4;
    }
  }
  uVar10 = (ulonglong)bVar2;
  iVar16 = 0;
  iVar19 = 0;
  iVar12 = 0;
  puVar7 = puVar11;
  puVar17 = puVar11;
LAB_0043471f:
  do {
    bVar2 = (&DAT_0044a320)[uVar10];
    if (bVar2 == 0) {
      if (0x20 < (uint)uVar10) {
        if (((uint)uVar10 != 0x29) || (iVar12 == 0)) {
          do {
            pcVar8 = pcVar8 + 1;
            if ((int)uVar10 == 0x29) {
              *param_1 = pcVar8;
              return 4;
            }
            uVar10 = (ulonglong)(uint)(int)*pcVar8;
          } while ((int)*pcVar8 != 0);
          return 4;
        }
        *param_1 = pcVar15 + 2;
        goto LAB_00434760;
      }
      if (iVar12 <= iVar19) {
LAB_004348cd:
        bVar2 = pcVar8[1];
        while (bVar2 < 0x21) {
          pbVar1 = (byte *)(pcVar8 + 2);
          pcVar8 = pcVar8 + 1;
          bVar2 = *pbVar1;
        }
        if (((bVar2 != 0x30) || ((pcVar8[2] & 0xdfU) != 0x58)) ||
           (uVar10 = (ulonglong)(byte)pcVar8[3], (byte)pcVar8[3] < 0x21)) goto LAB_00434749;
        pcVar15 = pcVar8 + 2;
        pcVar8 = pcVar8 + 3;
        goto LAB_0043471f;
      }
      if ((puVar17 < puVar7) && (iVar16 < 8)) {
        uVar9 = *puVar17;
        cVar3 = '\b' - (char)iVar16;
        puVar13 = puVar17;
        do {
          puVar14 = puVar13 + 1;
          *puVar13 = uVar9 | puVar13[1] << (cVar3 * -4 + 0x20U & 0x1f);
          uVar9 = puVar13[1] >> (cVar3 * '\x04' & 0x1fU);
          *puVar14 = uVar9;
          puVar13 = puVar14;
        } while (puVar14 < puVar7);
      }
      if (param_3 < puVar17) {
        puVar7 = puVar17 + -1;
        puVar17[-1] = 0;
        iVar16 = 0;
        puVar17 = puVar7;
        iVar19 = iVar12;
        goto LAB_004348cd;
      }
      bVar2 = pcVar8[1];
      iVar16 = 8;
      pcVar15 = pcVar8;
    }
    else {
      iVar16 = iVar16 + 1;
      iVar12 = iVar12 + 1;
      if (iVar16 < 9) {
        uVar9 = *puVar17 << 4;
      }
      else {
        if (puVar17 <= param_3) goto LAB_00434749;
        puVar17[-1] = 0;
        uVar9 = 0;
        puVar17 = puVar17 + -1;
        iVar16 = 1;
      }
      *puVar17 = bVar2 & 0xf | uVar9;
LAB_00434749:
      bVar2 = pcVar8[1];
      pcVar15 = pcVar8;
    }
    uVar10 = (ulonglong)bVar2;
    pcVar8 = pcVar15 + 1;
    if (bVar2 == 0) {
      if (iVar12 == 0) {
        return 4;
      }
LAB_00434760:
      if ((puVar17 < puVar7) && (iVar16 < 8)) {
        uVar9 = *puVar17;
        cVar3 = '\b' - (char)iVar16;
        puVar13 = puVar17;
        do {
          puVar14 = puVar13 + 1;
          uVar5 = puVar13[1] << (cVar3 * -4 + 0x20U & 0x1f) | uVar9;
          uVar9 = puVar13[1] >> (cVar3 * '\x04' & 0x1fU);
          *puVar13 = uVar5;
          *puVar14 = uVar9;
          puVar13 = puVar14;
        } while (puVar14 < puVar7);
      }
      puVar7 = puVar17;
      puVar13 = param_3;
      if (param_3 < puVar17) {
        do {
          puVar14 = puVar7 + 1;
          *puVar13 = *puVar7;
          puVar7 = puVar14;
          puVar13 = puVar13 + 1;
        } while (puVar14 <= puVar11);
        lVar6 = ((longlong)puVar11 - (longlong)puVar17 & 0xfffffffffffffffcU) + 4;
        if ((longlong)puVar11 + 1U < (longlong)puVar17 + 1U) {
          lVar6 = 4;
        }
        puVar7 = (uint *)(lVar6 + (longlong)param_3);
        do {
          puVar17 = puVar7 + 1;
          *puVar7 = 0;
          puVar7 = puVar17;
        } while (puVar17 <= puVar11);
        uVar9 = puVar18[-1];
      }
      else {
        uVar9 = puVar18[-1];
        if (uVar4 != 0) {
          uVar9 = uVar9 & 0xffffffffU >> (0x20U - (char)uVar4 & 0x1f);
          puVar18[-1] = uVar9;
        }
      }
      while( true ) {
        if (uVar9 != 0) {
          return 5;
        }
        if (puVar11 == param_3) break;
        uVar9 = puVar11[-1];
        puVar11 = puVar11 + -1;
      }
      *puVar11 = 1;
      return 5;
    }
  } while( true );
}


