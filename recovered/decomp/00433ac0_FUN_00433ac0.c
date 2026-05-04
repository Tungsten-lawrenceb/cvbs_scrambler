// 00433ac0  byte FUN_00433ac0(longlong * param_1, uint * param_2, uint * param_3, longlong * param_4, uint param_5)
// callers: 2  callees: 9


byte FUN_00433ac0(longlong *param_1,uint *param_2,uint *param_3,longlong *param_4,uint param_5)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  bool bVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  lconv *plVar8;
  longlong lVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  int *piVar12;
  byte *pbVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  int iVar19;
  int iVar20;
  byte bVar21;
  uint *puVar22;
  uint *puVar23;
  ulonglong uVar24;
  byte bVar25;
  uint uVar26;
  byte bVar27;
  uint *puVar28;
  bool bVar29;
  uint uVar30;
  bool bVar31;
  uint *local_50;
  
  plVar8 = localeconv();
  pbVar3 = (byte *)plVar8->decimal_point;
  if (DAT_0044a350 == '\0') {
    FUN_00434570();
  }
  *param_4 = 0;
  lVar9 = *param_1;
  bVar21 = *(byte *)(lVar9 + 2);
  if (bVar21 == 0x30) {
    pbVar13 = (byte *)(lVar9 + 3);
    do {
      pbVar17 = pbVar13;
      iVar15 = (1 - (int)(byte *)(lVar9 + 3)) + (int)pbVar17;
      bVar21 = *pbVar17;
      pbVar13 = pbVar17 + 1;
    } while (bVar21 == 0x30);
  }
  else {
    pbVar17 = (byte *)(lVar9 + 2);
    iVar15 = 0;
  }
  bVar2 = *pbVar3;
  if ((&DAT_0044a320)[bVar21] != '\0') {
    iVar15 = iVar15 + 1;
    bVar31 = false;
    pbVar13 = (byte *)0x0;
    pbVar10 = pbVar17;
    goto LAB_00433cb0;
  }
  pbVar18 = pbVar17;
  lVar9 = 1;
  bVar27 = bVar21;
  bVar25 = bVar2;
  if (bVar2 == 0) {
LAB_00433b73:
    uVar6 = 0;
    bVar31 = true;
    if ((bVar21 & 0xdf) == 0x50) {
LAB_00433df7:
      bVar21 = pbVar18[1];
      if (bVar21 == 0x2b) {
        bVar29 = false;
LAB_00433f66:
        bVar21 = pbVar18[2];
        pbVar13 = pbVar18 + 2;
      }
      else {
        if (bVar21 == 0x2d) {
          bVar29 = true;
          goto LAB_00433f66;
        }
        pbVar13 = pbVar18 + 1;
        bVar29 = false;
      }
      bVar4 = false;
      pbVar10 = pbVar18;
      if ((byte)((&DAT_0044a320)[bVar21] - 1) < 0x19) {
        uVar7 = (byte)(&DAT_0044a320)[bVar21] - 0x10;
        bVar21 = pbVar13[1];
        bVar4 = false;
        while( true ) {
          uVar24 = (ulonglong)bVar21;
          pbVar10 = pbVar13 + 1;
          if (0x18 < (byte)((&DAT_0044a320)[uVar24] - 1)) break;
          if ((uVar7 & 0xf8000000) != 0) {
            bVar4 = true;
          }
          bVar21 = pbVar13[2];
          uVar7 = ((byte)(&DAT_0044a320)[uVar24] - 0x10) + uVar7 * 10;
          pbVar13 = pbVar10;
        }
        if (bVar29) {
          uVar7 = -uVar7;
        }
        uVar6 = uVar6 + uVar7;
      }
    }
    else {
      bVar31 = true;
      uVar6 = 0;
      bVar29 = false;
      bVar4 = false;
      pbVar10 = pbVar18;
    }
    if (iVar15 == 0) {
      pbVar10 = pbVar17 + -1;
    }
    *param_1 = (longlong)pbVar10;
    if (bVar31) {
      return 0;
    }
    if (bVar4) {
      uVar6 = param_2[3];
      if (bVar29) {
        if (uVar6 == 2) {
          if (param_5 != 0) goto LAB_0043406d;
        }
        else if ((uVar6 != 3) || (param_5 == 0)) goto LAB_0043406d;
        puVar11 = (undefined8 *)FUN_00434b50(0);
        *(undefined8 *)((longlong)puVar11 + 0x14) = 0x100000001;
        uVar7 = param_2[1];
        goto LAB_0043400a;
      }
      if (uVar6 == 2) {
        if (param_5 != 0) goto LAB_00433bdf;
      }
      else if (uVar6 == 3) {
        if (param_5 == 0) goto LAB_00433bdf;
      }
      else if (uVar6 != 1) {
LAB_00433bdf:
        uVar6 = *param_2 & 0x1f;
        iVar19 = (int)*param_2 >> 5;
        iVar20 = (iVar19 + 1) - (uint)(uVar6 == 0);
        iVar14 = 0;
        iVar15 = iVar20;
        while (iVar15 = iVar15 >> 1, iVar15 != 0) {
          iVar14 = iVar14 + 1;
        }
        lVar9 = FUN_00434b50(iVar14);
        *param_4 = lVar9;
        *(int *)(lVar9 + 0x14) = iVar20;
        iVar15 = 0;
        if (0 < iVar19) {
          puVar16 = (undefined4 *)(lVar9 + 0x18);
          do {
            *puVar16 = 0xffffffff;
            puVar16 = puVar16 + 1;
            iVar15 = iVar19;
          } while ((undefined4 *)(lVar9 + 0x1c + (ulonglong)(iVar19 - 1) * 4) != puVar16);
        }
        if (iVar19 < iVar20) {
          *(int *)(lVar9 + 0x18 + (longlong)iVar15 * 4) = 0x20 >> (-(char)uVar6 & 0x1fU);
        }
        *param_3 = param_2[1];
        return 0x11;
      }
      goto LAB_00434100;
    }
  }
  else {
    do {
      if (bVar25 != bVar27) goto LAB_00433b73;
      bVar25 = pbVar3[lVar9];
      pbVar13 = pbVar17 + lVar9;
      bVar27 = pbVar17[lVar9];
      lVar9 = lVar9 + 1;
    } while (bVar25 != 0);
    pbVar18 = pbVar13;
    bVar21 = bVar27;
    if ((&DAT_0044a320)[bVar27] == '\0') goto LAB_00433b73;
    if (bVar27 == 0x30) {
      do {
        bVar21 = pbVar18[1];
        pbVar18 = pbVar18 + 1;
      } while (bVar21 == 0x30);
      bVar31 = (&DAT_0044a320)[bVar21] == '\0';
      iVar15 = 1;
      pbVar17 = pbVar18;
      pbVar10 = pbVar18;
      if (!bVar31) goto LAB_00433cb0;
    }
    else {
      bVar31 = false;
      iVar15 = 1;
      pbVar17 = pbVar13;
      pbVar10 = pbVar13;
LAB_00433cb0:
      do {
        bVar21 = pbVar17[1];
        pbVar18 = pbVar17 + 1;
        pbVar17 = pbVar18;
      } while ((&DAT_0044a320)[bVar21] != '\0');
    }
    pbVar17 = pbVar10;
    if (bVar21 == bVar2) {
      if (pbVar13 == (byte *)0x0) {
        lVar9 = 1;
        bVar21 = pbVar3[1];
        while (bVar21 != 0) {
          if (pbVar18[lVar9] != bVar21) {
            bVar21 = *pbVar18;
            goto LAB_004340d9;
          }
          lVar9 = lVar9 + 1;
          bVar21 = pbVar3[lVar9];
        }
        pbVar13 = pbVar18 + lVar9;
        bVar21 = *pbVar13;
        pbVar18 = pbVar13;
        if ((&DAT_0044a320)[bVar21] == '\0') {
LAB_004340d9:
          uVar6 = 0;
        }
        else {
          do {
            bVar21 = pbVar18[1];
            pbVar18 = pbVar18 + 1;
          } while ((&DAT_0044a320)[bVar21] != '\0');
          uVar6 = ((int)pbVar13 - (int)pbVar18) * 4;
        }
        goto LAB_00433ce1;
      }
      uVar6 = ((int)pbVar13 - (int)pbVar18) * 4;
      if ((*pbVar18 & 0xdf) != 0x50) goto LAB_00433ced;
      goto LAB_00433df7;
    }
    bVar21 = *pbVar18;
    uVar6 = ((int)pbVar13 - (int)pbVar18) * 4;
    if (pbVar13 == (byte *)0x0) {
      uVar6 = 0;
    }
LAB_00433ce1:
    if ((bVar21 & 0xdf) == 0x50) goto LAB_00433df7;
LAB_00433ced:
    *param_1 = (longlong)pbVar18;
    if (bVar31) {
      return 0;
    }
  }
  iVar14 = 0;
  for (iVar15 = ((int)pbVar18 - (int)pbVar17) + -1; 7 < iVar15; iVar15 = iVar15 >> 1) {
    iVar14 = iVar14 + 1;
  }
  puVar11 = (undefined8 *)FUN_00434b50(iVar14);
  local_50 = (uint *)(puVar11 + 3);
  if (pbVar3[1] == 0) {
    lVar9 = 0;
  }
  else {
    lVar5 = 1;
    do {
      lVar9 = lVar5;
      lVar5 = lVar9 + 1;
    } while (pbVar3[lVar9 + 1] != 0);
  }
  puVar28 = local_50;
  if (pbVar17 < pbVar18) {
    uVar26 = 0;
    iVar15 = 0;
    do {
      while( true ) {
        bVar21 = pbVar18[-1];
        pbVar13 = pbVar18 + -1;
        puVar23 = puVar28 + 1;
        if (bVar21 == pbVar3[lVar9]) break;
        if (iVar15 == 0x20) {
          *puVar28 = uVar26;
          iVar14 = 4;
          bVar21 = pbVar18[-1];
          uVar26 = 0;
          iVar15 = 0;
          puVar22 = puVar28 + 2;
          puVar28 = puVar23;
        }
        else {
          iVar14 = iVar15 + 4;
          puVar22 = puVar23;
        }
        uVar26 = uVar26 | ((byte)(&DAT_0044a320)[bVar21] & 0xf) << ((byte)iVar15 & 0x1f);
        pbVar18 = pbVar13;
        puVar23 = puVar22;
        iVar15 = iVar14;
        if (pbVar13 <= pbVar17) goto LAB_00433e9f;
      }
      pbVar18 = pbVar13 + -lVar9;
    } while (pbVar17 < pbVar18);
LAB_00433e9f:
    uVar7 = 0x1f;
    if (uVar26 != 0) {
      for (; uVar26 >> uVar7 == 0; uVar7 = uVar7 - 1) {
      }
    }
    uVar7 = uVar7 ^ 0x1f;
  }
  else {
    puVar23 = (uint *)((longlong)puVar11 + 0x1c);
    uVar7 = 0x20;
    uVar26 = 0;
  }
  uVar30 = *param_2;
  *puVar28 = uVar26;
  iVar15 = (int)((longlong)puVar23 - (longlong)local_50 >> 2);
  *(int *)((longlong)puVar11 + 0x14) = iVar15;
  iVar15 = iVar15 * 0x20 - uVar7;
  if ((int)uVar30 < iVar15) {
    uVar7 = iVar15 - uVar30;
    iVar15 = FUN_00435880((longlong)puVar11,uVar7);
    uVar26 = 0;
    if (iVar15 != 0) {
      uVar1 = uVar7 - 1;
      uVar26 = 1;
      if ((local_50[(int)uVar1 >> 5] & 1 << ((byte)uVar1 & 0x1f)) != 0) {
        if (uVar1 != 0) {
          uVar26 = 3;
          iVar15 = FUN_00435880((longlong)puVar11,uVar1);
          if (iVar15 != 0) goto LAB_00434174;
        }
        uVar26 = 2;
      }
    }
LAB_00434174:
    uVar6 = uVar6 + uVar7;
    FUN_00434420((longlong)puVar11,uVar7);
  }
  else {
    uVar26 = 0;
    if (iVar15 < (int)uVar30) {
      uVar6 = uVar6 - (uVar30 - iVar15);
      puVar11 = (undefined8 *)FUN_00435080(puVar11,uVar30 - iVar15);
      local_50 = (uint *)(puVar11 + 3);
    }
  }
  if ((int)param_2[2] < (int)uVar6) {
LAB_004340f8:
    FUN_00434c50(puVar11);
LAB_00434100:
    piVar12 = _errno();
    *piVar12 = 0x22;
    return 0xa3;
  }
  uVar7 = param_2[1];
  if ((int)uVar6 < (int)uVar7) {
    uVar6 = uVar7 - uVar6;
    if ((int)uVar30 <= (int)uVar6) {
      uVar26 = param_2[3];
      if (uVar26 == 2) {
        if (param_5 == 0) goto LAB_004342ad;
      }
      else if (uVar26 == 3) {
        if (param_5 != 0) goto LAB_004342ad;
      }
      else if ((uVar26 == 1) && (uVar30 == uVar6)) {
        if (uVar30 != 1) {
          iVar15 = FUN_00435880((longlong)puVar11,uVar30 - 1);
          if (iVar15 == 0) goto LAB_00434065;
          uVar7 = param_2[1];
        }
LAB_004342ad:
        *(undefined4 *)((longlong)puVar11 + 0x14) = 1;
        *local_50 = 1;
LAB_0043400a:
        *param_4 = (longlong)puVar11;
        *param_3 = uVar7;
        piVar12 = _errno();
        *piVar12 = 0x22;
        return 0x62;
      }
LAB_00434065:
      FUN_00434c50(puVar11);
LAB_0043406d:
      piVar12 = _errno();
      *piVar12 = 0x22;
      return 0x50;
    }
    uVar7 = uVar6 - 1;
    if (uVar26 == 0) {
      if (uVar7 != 0) {
        uVar26 = FUN_00435880((longlong)puVar11,uVar7);
      }
    }
    else {
      uVar26 = 1;
    }
    if ((local_50[(int)uVar7 >> 5] & 1 << ((byte)uVar7 & 0x1f)) != 0) {
      uVar26 = uVar26 | 2;
    }
    uVar30 = uVar30 - uVar6;
    bVar21 = 2;
    FUN_00434420((longlong)puVar11,uVar6);
    uVar6 = param_2[1];
  }
  else {
    bVar21 = 1;
  }
  if (uVar26 == 0) goto LAB_00433f15;
  uVar7 = param_2[3];
  if (uVar7 == 2) {
    param_5 = 1 - param_5;
joined_r0x00434216:
    if (param_5 != 0) {
      iVar15 = *(int *)((longlong)puVar11 + 0x14);
      puVar11 = FUN_00431890(puVar11);
      if (bVar21 == 2) {
        bVar21 = 0x22;
        if (*param_2 - 1 == uVar30) {
          bVar21 = ((*(uint *)((longlong)puVar11 + (longlong)((int)uVar30 >> 5) * 4 + 0x18) &
                    1 << ((byte)uVar30 & 0x1f)) == 0) + 0x21;
        }
        goto LAB_00433f15;
      }
      if (iVar15 < *(int *)((longlong)puVar11 + 0x14)) {
LAB_00434259:
        uVar6 = uVar6 + 1;
        FUN_00434420((longlong)puVar11,1);
        if ((int)param_2[2] < (int)uVar6) goto LAB_004340f8;
      }
      else if ((uVar30 & 0x1f) != 0) {
        puVar28 = (uint *)((longlong)puVar11 + (longlong)iVar15 * 4 + 0x14);
        uVar7 = 0x1f;
        if (*puVar28 != 0) {
          for (; *puVar28 >> uVar7 == 0; uVar7 = uVar7 - 1) {
          }
        }
        if ((int)(uVar7 ^ 0x1f) < (int)(0x20 - (uVar30 & 0x1f))) goto LAB_00434259;
      }
      bVar21 = 0x21;
      goto LAB_00433f15;
    }
  }
  else {
    if (uVar7 == 3) goto joined_r0x00434216;
    if ((uVar7 == 1) && ((uVar26 & 2) != 0)) {
      param_5 = (uVar26 | *local_50) & 1;
      goto joined_r0x00434216;
    }
  }
  bVar21 = bVar21 | 0x10;
LAB_00433f15:
  *param_4 = (longlong)puVar11;
  *param_3 = uVar6;
  return bVar21;
}


