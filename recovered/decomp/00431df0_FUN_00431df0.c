// 00431df0  uint FUN_00431df0(char * param_1, longlong * param_2, uint * param_3, uint * param_4, uint * param_5)
// callers: 2  callees: 25


uint FUN_00431df0(char *param_1,longlong *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char *pcVar7;
  undefined8 *puVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  lconv *plVar16;
  size_t sVar17;
  char *pcVar18;
  undefined8 uVar19;
  uint *puVar20;
  int *piVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  longlong lVar27;
  undefined8 *puVar28;
  double *pdVar29;
  undefined7 extraout_var;
  uint *puVar30;
  int *piVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  char cVar37;
  int iVar38;
  uint uVar39;
  double dVar40;
  double dVar41;
  uint local_114;
  int local_110;
  int local_108;
  uint local_f8;
  uint local_f4;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_bc;
  int local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  char *local_a8;
  undefined8 *local_a0 [12];
  
  plVar16 = localeconv();
  pcVar2 = plVar16->decimal_point;
  sVar17 = strlen(pcVar2);
  local_b4 = 0;
  local_a0[0] = (undefined8 *)0x0;
  uVar1 = *param_3;
  pcVar18 = param_1;
LAB_00431e93:
  cVar37 = *pcVar18;
  switch(cVar37) {
  case '\0':
switchD_00431eab_caseD_0:
    if (param_2 == (longlong *)0x0) {
      return 6;
    }
    *param_2 = (longlong)param_1;
    return 6;
  default:
    local_f4 = 0;
    local_a8 = pcVar18;
    goto LAB_00431eb8;
  case '\t':
  case '\n':
  case '\v':
  case '\f':
  case '\r':
  case ' ':
    goto switchD_00431eab_caseD_9;
  case '+':
    local_f4 = 0;
    break;
  case '-':
    local_f4 = 1;
  }
  local_a8 = pcVar18 + 1;
  cVar37 = pcVar18[1];
  if (cVar37 != '\0') {
LAB_00431eb8:
    bVar4 = false;
    if (cVar37 != '0') goto LAB_00431ec5;
    if ((local_a8[1] & 0xdfU) != 0x58) goto LAB_00432230;
    bVar9 = FUN_00433ac0((longlong *)&local_a8,param_3,param_4,(longlong *)local_a0,local_f4);
    local_b4 = (uint)CONCAT71(extraout_var,bVar9);
    if (local_b4 != 6) goto LAB_00432098;
    local_a8 = param_1;
    if (param_2 != (longlong *)0x0) {
      *param_2 = (longlong)param_1;
    }
    goto LAB_004320c6;
  }
  goto switchD_00431eab_caseD_0;
switchD_00431eab_caseD_9:
  pcVar18 = pcVar18 + 1;
  goto LAB_00431e93;
LAB_00432230:
  do {
    local_a8 = local_a8 + 1;
    cVar37 = *local_a8;
  } while (cVar37 == '0');
  if (cVar37 == '\0') goto LAB_00432098;
  bVar4 = true;
LAB_00431ec5:
  pcVar18 = local_a8;
  local_d0 = param_3[4];
  uVar10 = (uint)cVar37;
  if (uVar10 - 0x30 < 10) {
    uVar33 = 0;
    uVar14 = 0;
    iVar38 = 0;
    do {
      local_a8 = local_a8 + 1;
      if (iVar38 < 9) {
        uVar14 = (uVar10 - 0x30) + uVar14 * 10;
      }
      else if (iVar38 < 0x10) {
        uVar33 = (uVar10 - 0x30) + uVar33 * 10;
      }
      cVar37 = *local_a8;
      uVar10 = (uint)cVar37;
      iVar38 = iVar38 + 1;
    } while (uVar10 - 0x30 < 10);
  }
  else {
    uVar33 = 0;
    uVar14 = 0;
    iVar38 = 0;
  }
  iVar13 = iVar38;
  if (*pcVar2 == cVar37) {
    lVar27 = 1;
    cVar37 = pcVar2[1];
    while (cVar37 != '\0') {
      if (local_a8[lVar27] != cVar37) goto LAB_00431ff9;
      lVar27 = lVar27 + 1;
      cVar37 = pcVar2[lVar27];
    }
    local_a8 = local_a8 + lVar27;
    uVar10 = (uint)*local_a8;
    if (iVar38 == 0) {
      if (uVar10 == 0x30) {
        iVar13 = (int)local_a8;
        do {
          iVar12 = (1 - iVar13) + (int)local_a8;
          local_a8 = local_a8 + 1;
          uVar10 = (uint)*local_a8;
        } while (uVar10 == 0x30);
      }
      else {
        iVar12 = 0;
      }
      if (uVar10 - 0x31 < 9) {
        uVar11 = uVar10 - 0x30;
        local_108 = iVar12 + 1;
        iVar32 = 1;
        pcVar18 = local_a8;
        goto LAB_00432e40;
      }
      local_108 = 0;
      iVar13 = 0;
    }
    else {
      local_108 = 0;
      iVar12 = 0;
      while (uVar11 = uVar10 - 0x30, uVar11 < 10) {
        iVar12 = iVar12 + 1;
        iVar32 = iVar13;
        if (uVar11 != 0) {
          local_108 = local_108 + iVar12;
          iVar32 = iVar13 + 1;
          iVar15 = iVar13;
          if (iVar12 != 1) {
            iVar32 = iVar12 + iVar13;
            iVar15 = iVar32 + -1;
            do {
              if (iVar13 < 9) {
                uVar14 = uVar14 * 10;
              }
              else if (iVar13 + 1 < 0x11) {
                uVar33 = uVar33 * 10;
              }
              iVar13 = iVar13 + 1;
            } while (iVar15 != iVar13);
          }
          if (iVar15 < 9) {
LAB_00432e40:
            iVar12 = 0;
            uVar14 = uVar11 + uVar14 * 10;
          }
          else {
            iVar12 = 0;
            if (iVar32 < 0x11) {
              uVar33 = uVar11 + uVar33 * 10;
            }
          }
        }
        uVar10 = (uint)local_a8[1];
        local_a8 = local_a8 + 1;
        iVar13 = iVar32;
      }
    }
    bVar5 = true;
  }
  else {
LAB_00431ff9:
    local_108 = 0;
    iVar12 = 0;
    bVar5 = false;
  }
  pcVar2 = local_a8;
  if ((uVar10 & 0xffffffdf) != 0x45) {
    local_110 = 0;
    local_a8 = pcVar2;
    iVar32 = local_110;
    goto LAB_0043201f;
  }
  if ((iVar13 == 0 && iVar12 == 0) && !bVar4) goto LAB_00432078;
  cVar37 = local_a8[1];
  if (cVar37 == '+') {
    bVar6 = false;
LAB_00432ba8:
    cVar37 = local_a8[2];
    local_a8 = local_a8 + 2;
  }
  else {
    if (cVar37 == '-') {
      bVar6 = true;
      goto LAB_00432ba8;
    }
    bVar6 = false;
    local_a8 = local_a8 + 1;
  }
  uVar10 = (uint)cVar37;
  pcVar7 = local_a8;
  param_1 = pcVar2;
  if (uVar10 - 0x30 < 10) {
    while (uVar10 == 0x30) {
      uVar10 = (uint)pcVar7[1];
      pcVar7 = pcVar7 + 1;
    }
    local_110 = 0;
    local_a8 = pcVar7;
    iVar32 = local_110;
    if (uVar10 - 0x31 < 9) {
      iVar32 = uVar10 - 0x30;
      local_a8 = pcVar7 + 1;
      uVar10 = (uint)pcVar7[1];
      if (uVar10 - 0x30 < 10) {
        pcVar2 = pcVar7 + 2;
        do {
          local_a8 = pcVar2;
          iVar32 = (uVar10 - 0x30) + iVar32 * 10;
          uVar10 = (uint)*local_a8;
          pcVar2 = local_a8 + 1;
        } while (uVar10 - 0x30 < 10);
        local_110 = 19999;
        if ((longlong)local_a8 - (longlong)pcVar7 < 9) goto LAB_0043354f;
      }
      else {
LAB_0043354f:
        local_110 = 19999;
        if (iVar32 < 20000) {
          local_110 = iVar32;
        }
      }
      iVar32 = -local_110;
      if (!bVar6) {
        iVar32 = local_110;
      }
    }
  }
  else {
    local_110 = 0;
    local_a8 = pcVar2;
    iVar32 = local_110;
  }
LAB_0043201f:
  local_110 = iVar32;
  if (iVar13 == 0) {
    if (iVar12 != 0 || bVar4) goto LAB_00432098;
    if (bVar5) goto LAB_00432078;
    if (uVar10 == 0x69) {
LAB_00432e7e:
      uVar19 = FUN_004357d0(&local_a8,"nf");
      if ((int)uVar19 != 0) {
        local_a8 = local_a8 + -1;
        uVar19 = FUN_004357d0(&local_a8,"inity");
        if ((int)uVar19 == 0) {
          local_a8 = local_a8 + 1;
        }
        local_b4 = 3;
LAB_00432ecd:
        *param_4 = param_3[2] + 1;
        goto LAB_00432098;
      }
    }
    else if ((int)uVar10 < 0x6a) {
      if (uVar10 == 0x49) goto LAB_00432e7e;
      if (uVar10 == 0x4e) goto LAB_00432052;
    }
    else if (uVar10 == 0x6e) {
LAB_00432052:
      uVar19 = FUN_004357d0(&local_a8,"an");
      if ((int)uVar19 != 0) {
        local_b4 = 4;
        *param_4 = param_3[2] + 1;
        if (*local_a8 != '(') goto LAB_00432098;
        uVar19 = FUN_00434610(&local_a8,param_3,param_5);
        local_b4 = (uint)uVar19;
        goto LAB_00432ecd;
      }
    }
LAB_00432078:
    local_b4 = 6;
    local_a8 = param_1;
    goto LAB_00432098;
  }
  uVar10 = local_110 - local_108;
  local_b4 = 1;
  uVar11 = param_3[3] & 3;
  local_f8 = uVar11 - local_f4;
  if ((uVar11 != 2) && (local_f8 = local_f4 + 1, uVar11 != 3)) {
    local_f8 = (uint)(uVar11 == 0);
  }
  dVar40 = (double)uVar14;
  if (iVar38 == 0) {
    iVar38 = iVar13;
  }
  iVar12 = 0x10;
  if (iVar13 < 0x11) {
    iVar12 = iVar13;
  }
  if (9 < iVar13) {
    dVar40 = dVar40 * *(double *)(&DAT_00438b00 + (longlong)(iVar12 + -9) * 8) + (double)uVar33;
  }
  uVar33 = uVar10;
  if (((int)uVar1 < 0x36) && (iVar13 < 0x10)) {
    if (uVar10 == 0) {
      iVar32 = FUN_00431950(dVar40,param_3,param_4,param_5,1,local_f8,&local_b4);
      if (iVar32 != 0) goto LAB_00432098;
      uVar33 = 0;
      goto LAB_00432624;
    }
    if ((int)uVar10 < 1) {
      if (-0x17 < (int)uVar10) {
        dVar40 = dVar40 / *(double *)(&DAT_00438b00 + (longlong)(local_108 - local_110) * 8);
LAB_00432f1c:
        uVar33 = 0;
        goto LAB_00432559;
      }
      goto LAB_00432624;
    }
    if ((int)uVar10 < 0x17) {
      uVar33 = SUB84(dVar40,0);
      if (uVar33 == 0) {
        iVar32 = 0;
        for (uVar33 = (uint)((ulonglong)dVar40 >> 0x20) | 0x100000; (uVar33 & 1) == 0;
            uVar33 = uVar33 >> 1 | 0x80000000) {
          iVar32 = iVar32 + 1;
        }
        iVar32 = 0x15 - iVar32;
      }
      else {
        iVar32 = 0;
        for (; (uVar33 & 1) == 0; uVar33 = uVar33 >> 1 | 0x80000000) {
          iVar32 = iVar32 + 1;
        }
        iVar32 = 0x35 - iVar32;
      }
      dVar40 = dVar40 * *(double *)(&DAT_00438b00 + (longlong)(int)uVar10 * 8);
      uVar33 = (uint)(iVar32 + *(int *)(&DAT_00438a20 + (longlong)(int)uVar10 * 4) < 0x36);
LAB_00432559:
      iVar32 = FUN_00431950(dVar40,param_3,param_4,param_5,uVar33,local_f8,&local_b4);
      if (iVar32 != 0) goto LAB_00432098;
      uVar33 = 0;
      goto LAB_00432624;
    }
    uVar33 = (iVar13 - iVar12) + uVar10;
    if ((int)uVar10 <= 0x25 - iVar13) {
      dVar40 = dVar40 * *(double *)(&DAT_00438b00 + (longlong)(0xf - iVar13) * 8) *
               *(double *)(&DAT_00438b00 + (longlong)(int)(uVar10 - (0xf - iVar13)) * 8);
      goto LAB_00432f1c;
    }
LAB_00432633:
    if ((uVar33 & 0xf) != 0) {
      dVar40 = dVar40 * *(double *)(&DAT_00438b00 + (longlong)(int)(uVar33 & 0xf) * 8);
    }
    if ((uVar33 & 0xfffffff0) == 0) {
LAB_0043265b:
      iVar12 = 0;
    }
    else {
      uVar11 = (int)uVar33 >> 4;
      if ((int)(uVar33 & 0xfffffff0) < 0x100) {
        iVar12 = 0;
      }
      else {
        iVar12 = 0;
        uVar33 = uVar11;
        do {
          uVar33 = uVar33 - 0x10;
          uVar36 = (uint)((ulonglong)dVar40 >> 0x20);
          iVar12 = iVar12 + -0x3ff + (uVar36 >> 0x14 & 0x7ff);
          dVar40 = (double)((ulonglong)dVar40 & 0xffffffff |
                           (ulonglong)(uVar36 & 0x800fffff | 0x3ff00000) << 0x20) * 1e+256;
        } while (0xf < (int)uVar33);
        uVar11 = uVar11 & 0xf;
      }
      uVar33 = (uint)((ulonglong)dVar40 >> 0x20);
      iVar12 = iVar12 + -0x3ff + (uVar33 >> 0x14 & 0x7ff);
      dVar40 = (double)((ulonglong)dVar40 & 0xffffffff |
                       (ulonglong)(uVar33 & 0x800fffff | 0x3ff00000) << 0x20);
      if (uVar11 != 0) {
        pdVar29 = (double *)&DAT_00438c00;
        bVar4 = false;
        dVar41 = dVar40;
        do {
          if ((uVar11 & 1) != 0) {
            dVar41 = dVar41 * *pdVar29;
            bVar4 = true;
          }
          pdVar29 = pdVar29 + 1;
          uVar11 = (int)uVar11 >> 1;
        } while (uVar11 != 0);
        if (bVar4) {
LAB_00432dde:
          dVar40 = dVar41;
        }
      }
    }
  }
  else {
LAB_00432624:
    uVar33 = (iVar13 - iVar12) + uVar33;
    if (0 < (int)uVar33) goto LAB_00432633;
    if (uVar33 == 0) goto LAB_0043265b;
    uVar33 = -uVar33;
    if ((uVar33 & 0xf) != 0) {
      dVar40 = dVar40 / *(double *)(&DAT_00438b00 + (longlong)(int)(uVar33 & 0xf) * 8);
    }
    if ((uVar33 & 0xfffffff0) == 0) goto LAB_0043265b;
    uVar11 = (int)uVar33 >> 4;
    if ((int)(uVar33 & 0xfffffff0) < 0x100) {
      iVar12 = 0;
    }
    else {
      iVar12 = 0;
      uVar33 = uVar11;
      do {
        uVar33 = uVar33 - 0x10;
        uVar36 = (uint)((ulonglong)dVar40 >> 0x20);
        iVar12 = iVar12 + -0x3ff + (uVar36 >> 0x14 & 0x7ff);
        dVar40 = (double)((ulonglong)dVar40 & 0xffffffff |
                         (ulonglong)(uVar36 & 0x800fffff | 0x3ff00000) << 0x20) * 1e-256;
      } while (0xf < (int)uVar33);
      uVar11 = uVar11 & 0xf;
    }
    uVar33 = (uint)((ulonglong)dVar40 >> 0x20);
    iVar12 = iVar12 + -0x3ff + (uVar33 >> 0x14 & 0x7ff);
    dVar41 = (double)((ulonglong)(uVar33 & 0x800fffff | 0x3ff00000) << 0x20 |
                     (ulonglong)dVar40 & 0xffffffff);
    dVar40 = dVar41;
    if (uVar11 != 0) {
      pdVar29 = (double *)&DAT_00438bc0;
      bVar4 = false;
      do {
        if ((uVar11 & 1) != 0) {
          dVar40 = dVar40 * *pdVar29;
          bVar4 = true;
        }
        pdVar29 = pdVar29 + 1;
        uVar11 = (int)uVar11 >> 1;
      } while (uVar11 != 0);
      if (bVar4) goto LAB_00432660;
      goto LAB_00432dde;
    }
  }
LAB_00432660:
  local_a0[0] = (undefined8 *)FUN_004354f0(dVar40,(int *)&local_ac,(int *)&local_b0);
  local_ac = iVar12 + local_ac;
  uVar33 = local_b0 - uVar1;
  if (0 < (int)uVar33) {
    FUN_00434420((longlong)local_a0[0],uVar33);
    local_ac = uVar33 + local_ac;
    local_b0 = uVar1;
  }
  local_cc = (local_ac + local_b0) - uVar1;
  if ((int)(param_3[2] + 1) < (int)local_cc) {
    local_114 = 0;
    goto LAB_004332d8;
  }
  uVar33 = param_3[1];
  if ((int)uVar33 <= (int)local_cc) {
    local_114 = 0;
    goto LAB_0043278d;
  }
  uVar11 = local_ac - uVar33;
  if (0 < (int)uVar11) {
    local_a0[0] = (undefined8 *)FUN_00435080(local_a0[0],uVar11);
    local_b0 = local_b0 + uVar11;
LAB_00432750:
    if (local_d0 == 0) {
      local_114 = 1;
      local_cc = uVar33;
      local_ac = uVar33;
LAB_0043278d:
      puVar22 = FUN_00435620((longlong)pcVar18,iVar38,iVar13,uVar14,(int)sVar17);
      uVar11 = 0;
      uVar14 = local_108 - local_110;
      if (-1 < (int)uVar10) {
        uVar11 = uVar10;
        uVar14 = 0;
      }
      iVar38 = 0;
      do {
        puVar23 = (undefined8 *)FUN_00434b50(*(int *)(puVar22 + 1));
        memcpy(puVar23 + 2,puVar22 + 2,(longlong)*(int *)((longlong)puVar22 + 0x14) * 4 + 8);
        puVar24 = (undefined8 *)FUN_00434b50(*(int *)(local_a0[0] + 1));
        memcpy(puVar24 + 2,local_a0[0] + 2,(longlong)*(int *)((longlong)local_a0[0] + 0x14) * 4 + 8)
        ;
        uVar34 = local_ac;
        uVar36 = local_b0;
        puVar25 = (undefined8 *)FUN_00434d70(1);
        iVar13 = uVar34 + iVar38;
        iVar12 = uVar36 - iVar38;
        if (iVar13 < 0) {
          uVar35 = uVar11 - iVar13;
          uVar39 = uVar14;
        }
        else {
          uVar35 = uVar11;
          uVar39 = iVar13 + uVar14;
        }
        iVar32 = (uVar36 + uVar34) - uVar1;
        iVar13 = (uVar1 + 1) - iVar12;
        if (iVar32 < (int)uVar33) {
          iVar13 = (iVar32 - uVar33) + iVar13;
        }
        uVar36 = uVar39 + iVar13;
        uVar35 = uVar35 + iVar13;
        uVar34 = uVar35;
        if ((int)uVar36 <= (int)uVar35) {
          uVar34 = uVar36;
        }
        if ((int)uVar39 <= (int)uVar34) {
          uVar34 = uVar39;
        }
        if (0 < (int)uVar34) {
          uVar36 = uVar36 - uVar34;
          uVar35 = uVar35 - uVar34;
          uVar39 = uVar39 - uVar34;
        }
        puVar26 = puVar24;
        if (0 < (int)uVar14) {
          puVar25 = FUN_00434ef0(puVar25,uVar14);
          puVar26 = (undefined8 *)FUN_00434da0((longlong)puVar25,(longlong)puVar24);
          FUN_00434c50(puVar24);
        }
        uVar34 = uVar36 - iVar38;
        if ((int)uVar34 < 1) {
          if (uVar34 != 0) {
            FUN_00434420((longlong)puVar26,iVar38 - uVar36);
          }
        }
        else {
          puVar26 = (undefined8 *)FUN_00435080(puVar26,uVar34);
        }
        if (0 < (int)uVar10) {
          puVar23 = FUN_00434ef0(puVar23,uVar11);
        }
        if (0 < (int)uVar35) {
          puVar23 = (undefined8 *)FUN_00435080(puVar23,uVar35);
        }
        if (0 < (int)uVar39) {
          puVar25 = (undefined8 *)FUN_00435080(puVar25,uVar39);
        }
        puVar24 = (undefined8 *)FUN_00435200((longlong)puVar26,(longlong)puVar23);
        uVar36 = local_d0;
        if ((*(int *)((longlong)puVar24 + 0x14) < 2) && (*(int *)(puVar24 + 3) == 0))
        goto LAB_004322a0;
        uVar34 = *(uint *)(puVar24 + 2);
        *(undefined4 *)(puVar24 + 2) = 0;
        uVar35 = FUN_004351b0((longlong)puVar24,(longlong)puVar25);
        if ((local_f8 == 0) || (0 < (int)uVar35)) {
          if ((int)uVar35 < 0) {
            if (uVar34 != 0) goto LAB_0043382a;
            local_b4 = 0x21;
            if (((1 < iVar12) || (local_cc == uVar33)) || (local_114 != 0)) goto LAB_004322a0;
            puVar24 = (undefined8 *)FUN_00435080(puVar24,1);
            uVar14 = FUN_004351b0((longlong)puVar24,(longlong)puVar25);
            uVar10 = local_b0;
            if ((int)uVar14 < 1) goto LAB_004333c6;
            local_b4 = 0x11;
            local_114 = 0;
          }
          else {
            if (uVar35 != 0) {
              dVar40 = FUN_00435730((longlong)puVar24,(longlong)puVar25);
              if (2.0 < dVar40) {
                dVar40 = dVar40 * 0.5;
                local_d4 = (-(uint)(uVar34 == 0) & 0x10) + 0x10;
                uVar34 = (uint)(uVar34 == 0);
                if (2147483647.0 <= dVar40) {
                  local_108 = 0;
                  uVar35 = 0;
                  dVar41 = dVar40;
                }
                else {
                  local_108 = (int)dVar40;
                  dVar41 = (double)local_108;
                  dVar40 = dVar40 - dVar41;
                  if (local_f8 == 1) {
                    if (uVar34 != 0) {
LAB_00433174:
                      if (0.0 < dVar40) goto LAB_0043317e;
                    }
LAB_00433165:
                    uVar35 = 0;
                  }
                  else if (local_f8 == 2) {
                    if (uVar34 == 0) goto LAB_00433174;
                    uVar35 = 0;
                  }
                  else {
                    if (dVar40 < 0.5) goto LAB_00433165;
LAB_0043317e:
                    local_108 = local_108 + 1;
                    local_d4 = 0x30 - local_d4;
                    uVar35 = 0;
                    dVar41 = (double)local_108;
                  }
                }
              }
              else {
                if (uVar34 == 0) {
                  uVar35 = 0;
                  goto LAB_00432a0c;
                }
                local_108 = 0;
                uVar35 = 0;
                uVar34 = 0;
                local_d4 = 0x20;
                dVar40 = 1.0;
                dVar41 = 1.0;
              }
              goto LAB_00432a3e;
            }
            if (uVar34 != 0) {
              if (local_114 == 0) goto LAB_0043386e;
              puVar30 = (uint *)(local_a0[0] + 3);
              goto LAB_00433682;
            }
            if (iVar12 != 1) {
              local_b4 = 0x21;
              goto LAB_004337d0;
            }
            local_b4 = 1;
            if (local_cc == uVar33) {
              local_b4 = 0x21;
              if ((*(int *)((longlong)local_a0[0] + 0x14) == 1) &&
                 (uVar36 = 1, *(int *)(local_a0[0] + 3) != 1)) {
                uVar36 = local_d0;
              }
              goto LAB_004322a0;
            }
          }
          local_ac = local_ac - uVar1;
          local_b0 = uVar1;
          local_a0[0] = (undefined8 *)FUN_00431d10(local_a0[0],uVar1);
          goto LAB_004322a0;
        }
        uVar39 = local_f8 & 1;
        uVar35 = uVar39 ^ uVar34;
        if (uVar39 == uVar34) {
          local_b4 = (-(uint)(uVar39 == 0) & 0x10) + 0x11;
          goto LAB_004322a0;
        }
        if (uVar34 != 0) {
          uVar34 = 0;
          local_b4 = 0x21;
          local_108 = 0;
          local_d4 = 0x20;
          dVar40 = 1.0;
          dVar41 = 1.0;
          goto LAB_00432a3e;
        }
        local_b4 = 0x11;
        if (local_cc != uVar33) {
          uVar34 = uVar1;
          if ((int)uVar1 < 0x20) {
            iVar38 = 0;
          }
          else {
            lVar27 = 1;
            do {
              if (*(int *)((longlong)local_a0[0] + lVar27 * 4 + 0x14) != 0) goto LAB_00432a0c;
              uVar34 = uVar34 - 0x20;
              iVar38 = (int)lVar27;
              lVar27 = lVar27 + 1;
            } while (0x1f < (int)uVar34);
          }
          if (1 < (int)uVar34) {
            puVar30 = (uint *)((longlong)local_a0[0] + (longlong)iVar38 * 4 + 0x18);
            iVar38 = 0;
            uVar39 = *puVar30;
            for (uVar3 = uVar39; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
              iVar38 = iVar38 + 1;
            }
            *puVar30 = uVar39 >> ((byte)iVar38 & 0x1f);
            if (iVar38 < (int)(uVar34 - 1)) goto LAB_00432a0c;
          }
          local_ac = local_cc - 1;
          local_b0 = uVar1;
          local_a0[0] = (undefined8 *)FUN_00431d10(local_a0[0],uVar1);
          goto LAB_004322a0;
        }
LAB_00432a0c:
        if ((iVar12 < 2) && (local_114 != 0)) {
          local_114 = 1;
          goto LAB_00433786;
        }
        uVar34 = 1;
        local_108 = 0;
        local_d4 = 0x10;
        dVar40 = 1.0;
        dVar41 = 1.0;
LAB_00432a3e:
        iVar38 = local_ac + local_b0;
        if ((local_114 == 0) && ((int)local_b0 < (int)uVar1)) {
          uVar39 = uVar1 - local_b0;
          local_a0[0] = (undefined8 *)FUN_00435080(local_a0[0],uVar39);
          local_ac = local_ac - uVar39;
          local_b0 = uVar1;
        }
        puVar28 = (undefined8 *)FUN_004354f0(dVar41,(int *)&local_bc,&local_b8);
        if ((int)local_bc < 0) {
          FUN_00434420((longlong)puVar28,-local_bc);
        }
        else if (local_bc != 0) {
          puVar28 = (undefined8 *)FUN_00435080(puVar28,local_bc);
        }
        puVar8 = local_a0[0];
        if (uVar34 == 0) {
          local_a0[0] = FUN_00433930((longlong)local_a0[0],(longlong)puVar28);
          iVar13 = *(int *)((longlong)local_a0[0] + 0x14) + -1;
          if (iVar13 < *(int *)((longlong)puVar8 + 0x14)) {
            puVar30 = (uint *)((longlong)local_a0[0] + (longlong)iVar13 * 4 + 0x18);
            uVar34 = 0x1f;
            if (*puVar30 != 0) {
              for (; *puVar30 >> uVar34 == 0; uVar34 = uVar34 - 1) {
              }
            }
            puVar30 = (uint *)((longlong)puVar8 + (longlong)iVar13 * 4 + 0x18);
            uVar39 = 0x1f;
            if (*puVar30 != 0) {
              for (; *puVar30 >> uVar39 == 0; uVar39 = uVar39 - 1) {
              }
            }
            if ((int)(uVar39 ^ 0x1f) <= (int)(uVar34 ^ 0x1f)) goto LAB_00432b00;
          }
          if (local_114 == 0) {
            FUN_00434420((longlong)local_a0[0],1);
            local_ac = local_ac + 1;
            local_cc = local_cc + 1;
            local_108 = 0;
          }
          else {
            local_b0 = local_b0 + 1;
            local_114 = (uint)(local_b0 != uVar1);
          }
LAB_00432b00:
          FUN_00434c50(puVar28);
          FUN_00434c50(puVar8);
          if (uVar35 != 0) goto LAB_004322a0;
          if ((local_b0 + local_ac == iVar38) && (local_108 != 0)) {
            dVar41 = dVar41 * 5e-16;
            if (-dVar41 <= dVar40 - 0.5) {
              if ((dVar41 < dVar40 - 0.5) && (dVar40 < 1.0 - dVar41)) goto LAB_00432290;
            }
            else if (dVar41 < dVar40) goto LAB_00432290;
          }
          iVar38 = 0;
          if (local_114 == 0) goto LAB_004330ca;
        }
        else {
          local_a0[0] = (undefined8 *)FUN_00435200((longlong)local_a0[0],(longlong)puVar28);
          if (local_114 != 0) goto LAB_00432b00;
          iVar13 = *(int *)((longlong)puVar8 + 0x14) + -1;
          if (iVar13 < *(int *)((longlong)local_a0[0] + 0x14)) {
            puVar30 = (uint *)((longlong)local_a0[0] + (longlong)iVar13 * 4 + 0x18);
            uVar39 = 0x1f;
            if (*puVar30 != 0) {
              for (; *puVar30 >> uVar39 == 0; uVar39 = uVar39 - 1) {
              }
            }
            puVar30 = (uint *)((longlong)puVar8 + (longlong)iVar13 * 4 + 0x18);
            uVar3 = 0x1f;
            if (*puVar30 != 0) {
              for (; *puVar30 >> uVar3 == 0; uVar3 = uVar3 - 1) {
              }
            }
            if ((int)(uVar39 ^ 0x1f) <= (int)(uVar3 ^ 0x1f)) goto LAB_00432b00;
          }
          if (local_cc == uVar33) {
            local_b0 = local_b0 - 1;
            local_114 = uVar34;
            goto LAB_00432b00;
          }
          local_a0[0] = (undefined8 *)FUN_00435080(local_a0[0],1);
          local_ac = local_ac - 1;
          local_cc = local_cc - 1;
          FUN_00434c50(puVar28);
          FUN_00434c50(puVar8);
LAB_004330ca:
          iVar38 = FUN_00434520((longlong)local_a0[0]);
          local_114 = 0;
        }
        FUN_00434c50(puVar26);
        FUN_00434c50(puVar23);
        FUN_00434c50(puVar25);
        FUN_00434c50(puVar24);
      } while( true );
    }
    local_114 = 1;
    iVar12 = local_cc + 1;
    local_cc = uVar33;
    local_ac = uVar33;
    if ((int)uVar33 <= iVar12) goto LAB_0043278d;
    *(undefined8 *)((longlong)local_a0[0] + 0x14) = 0;
    *param_4 = uVar33;
    goto LAB_00433260;
  }
  if (uVar11 == 0) goto LAB_00432750;
  local_b0 = local_b0 + uVar11;
  if (0 < (int)local_b0) {
    FUN_00434420((longlong)local_a0[0],uVar33 - local_ac);
    goto LAB_00432750;
  }
  if (-2 < (int)local_b0) {
    local_b0 = 1;
    *(undefined8 *)((longlong)local_a0[0] + 0x14) = 0x100000001;
    goto LAB_00432750;
  }
  *(undefined8 *)((longlong)local_a0[0] + 0x14) = 0;
  *param_4 = uVar33;
  if (local_d0 != 0) goto LAB_00433260;
  local_b4 = 0x50;
  goto LAB_004323fc;
LAB_00432290:
  local_b4 = local_b4 | local_d4;
LAB_004322a0:
  local_d0 = uVar36;
  uVar10 = local_b0;
  if (local_114 == 0) goto LAB_004333c6;
  goto LAB_004322b3;
  while (uVar10 = *puVar30, puVar30 = puVar30 + 1, uVar10 == 0xffffffff) {
LAB_00433682:
    if ((uint *)((longlong)(local_a0[0] + 3) + (longlong)((int)local_b0 >> 5) * 4) <= puVar30) {
      if (((local_b0 & 0x1f) == 0) || ((-1 << (sbyte)(local_b0 & 0x1f) | *puVar30) == 0xffffffff)) {
        local_b0 = 1;
        *(undefined8 *)((longlong)local_a0[0] + 0x14) = 0x100000001;
        local_b4 = 0x21;
        local_ac = (uVar1 - 1) + uVar33;
        uVar10 = local_114;
        goto LAB_004333c6;
      }
      break;
    }
  }
LAB_0043386e:
  local_b4 = 0x11;
LAB_004337d0:
  if (((int)uVar1 <= iVar12) || (uVar10 = local_b0, local_114 != 0)) {
    if ((*(byte *)(local_a0[0] + 3) & 1) != 0) {
      if (uVar34 == 0) {
        if (iVar12 == 1) {
LAB_00433786:
          *(undefined4 *)((longlong)local_a0[0] + 0x14) = 0;
          local_b4 = 0x50;
          local_ac = uVar33;
        }
        else {
          iVar38 = *(int *)((longlong)local_a0[0] + 0x14);
          piVar21 = (int *)(local_a0[0] + 3);
          do {
            if (*piVar21 != 0) {
              *piVar21 = *piVar21 + -1;
              break;
            }
            piVar31 = piVar21 + 1;
            *piVar21 = -1;
            piVar21 = piVar31;
          } while (piVar31 < (int *)((longlong)(local_a0[0] + 3) + (longlong)iVar38 * 4));
LAB_0043382a:
          local_b4 = 0x11;
        }
      }
      else {
        local_a0[0] = FUN_00431890(local_a0[0]);
        puVar30 = (uint *)((longlong)local_a0[0] +
                          (longlong)(*(int *)((longlong)local_a0[0] + 0x14) + -1) * 4 + 0x18);
        uVar10 = 0x1f;
        if (*puVar30 != 0) {
          for (; *puVar30 >> uVar10 == 0; uVar10 = uVar10 - 1) {
          }
        }
        if ((-local_b0 & 0x1f) != (uVar10 ^ 0x1f)) {
          local_b0 = local_b0 + 1;
        }
        local_b4 = 0x21;
      }
    }
    goto LAB_004322a0;
  }
LAB_004333c6:
  local_114 = uVar1 - uVar10;
  if (local_114 != 0) {
    if ((int)local_114 < 1) {
      FUN_00434420((longlong)local_a0[0],uVar10 - uVar1);
    }
    else {
      local_a0[0] = (undefined8 *)FUN_00435080(local_a0[0],local_114);
    }
    local_ac = local_ac - local_114;
    local_114 = 0;
  }
LAB_004322b3:
  *param_4 = local_ac;
  FUN_00434c50(puVar26);
  FUN_00434c50(puVar23);
  FUN_00434c50(puVar25);
  FUN_00434c50(puVar22);
  FUN_00434c50(puVar24);
  if ((int)param_3[2] < (int)local_ac) {
    uVar10 = param_3[3] & 3;
    if (uVar10 == 2) {
      if (local_f4 == 0) goto LAB_004332d8;
    }
    else if (uVar10 == 3) {
      if (local_f4 != 0) goto LAB_004332d8;
    }
    else if (uVar10 == 1) {
LAB_004332d8:
      local_b4 = 0xa3;
      *(undefined4 *)((longlong)local_a0[0] + 0x14) = 0;
      piVar21 = _errno();
      *piVar21 = 0x22;
      *param_4 = param_3[2] + 1;
      goto LAB_004323b8;
    }
    FUN_00434c50(local_a0[0]);
    local_a0[0] = (undefined8 *)0x0;
    local_b4 = 0x11;
    *param_4 = param_3[2];
    uVar10 = *param_3;
    puVar30 = param_5 + ((int)(uVar10 + 0x1f) >> 5);
    for (puVar20 = param_5; puVar20 < puVar30; puVar20 = puVar20 + 1) {
      *puVar20 = 0xffffffff;
    }
    uVar10 = uVar10 & 0x1f;
    if (uVar10 != 0) {
      puVar30[-1] = puVar30[-1] >> (0x20U - (char)uVar10 & 0x1f);
    }
  }
LAB_004323b8:
  if (local_114 != 0) {
    if (local_d0 == 0) {
      uVar10 = local_b4 & 0x30;
      local_b4 = local_b4 & 0xfffffff8;
      if (0 < *(int *)((longlong)local_a0[0] + 0x14)) {
        local_b4 = local_b4 | 2;
      }
      if (uVar10 != 0) {
LAB_004323fc:
        local_b4 = local_b4 | 0x40;
        piVar21 = _errno();
        *piVar21 = 0x22;
      }
    }
    else {
LAB_00433260:
      *(undefined4 *)((longlong)local_a0[0] + 0x14) = 0;
      local_b4 = 0x50;
      piVar21 = _errno();
      *piVar21 = 0x22;
    }
  }
LAB_00432098:
  if (param_2 != (longlong *)0x0) {
    *param_2 = (longlong)local_a8;
  }
  if (local_f4 != 0) {
    local_b4 = local_b4 | 8;
  }
LAB_004320c6:
  if (local_a0[0] != (undefined8 *)0x0) {
    FUN_00435820(param_5,uVar1,(longlong)local_a0[0]);
    FUN_00434c50(local_a0[0]);
  }
  return local_b4;
}


