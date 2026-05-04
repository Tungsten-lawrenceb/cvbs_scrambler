// 004109f3  undefined FUN_004109f3(HWND param_1)
// callers: 1  callees: 12


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004109f3(HWND param_1)

{
  LONG LVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined1 extraout_var [12];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  longlong local_98;
  longlong local_88;
  HDWP local_80;
  HWND local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  tagRECT local_60;
  tagRECT local_50;
  undefined1 extraout_var_00 [12];
  undefined1 extraout_var_01 [12];
  undefined1 extraout_var_02 [12];
  undefined1 extraout_var_03 [12];
  undefined1 extraout_var_04 [12];
  undefined1 extraout_var_05 [12];
  undefined1 extraout_var_06 [12];
  undefined1 extraout_var_07 [12];
  undefined1 extraout_var_08 [12];
  undefined1 extraout_var_09 [12];
  undefined1 extraout_var_10 [12];
  undefined1 extraout_var_11 [12];
  undefined1 extraout_var_12 [12];
  
  local_50.left = 0;
  local_50.top = 0;
  local_50.right = 0;
  local_50.bottom = 0;
  local_60.left = 0;
  local_60.top = 0;
  local_60.right = 0;
  local_60.bottom = 0;
  local_64 = 0;
  local_68 = 0;
  local_6c = 0;
  local_70 = 0;
  GetClientRect(param_1,&local_50);
  auVar7._0_4_ = FUN_0041f1e8((float)local_50.right);
  auVar7._4_12_ = extraout_var;
  if ((_DAT_0043e4a0 & 0x80000) == 0) {
    _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
    LVar1 = (LONG)(longlong)ROUND(auVar7._0_4_);
  }
  else {
    auVar7 = roundss(auVar7,auVar7,4);
    LVar1 = (LONG)(longlong)auVar7._0_4_;
  }
  local_50.right = LVar1;
  auVar8._0_4_ = FUN_0041f295((float)local_50.bottom);
  auVar8._4_12_ = extraout_var_00;
  if ((_DAT_0043e4a0 & 0x80000) == 0) {
    _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
    LVar1 = (LONG)(longlong)ROUND(auVar8._0_4_);
  }
  else {
    auVar7 = roundss(auVar8,auVar8,4);
    LVar1 = (LONG)(longlong)auVar7._0_4_;
  }
  local_50.bottom = LVar1;
  local_78 = GetWindow(param_1,5);
  local_80 = BeginDeferWindowPos(1);
  for (; local_78 != (HWND)0x0; local_78 = GetWindow(local_78,2)) {
    lVar6 = FUN_00401580((longlong)local_78);
    if (lVar6 == 0) {
      local_98 = 0;
    }
    else {
      local_98 = -(ulonglong)(0 < *(int *)(lVar6 + 0x750));
    }
    if (local_98 != 0) {
      GetWindowRect(local_78,&local_60);
      auVar9._0_4_ = FUN_0041f295((float)((longlong)local_60.bottom - (longlong)local_60.top));
      auVar9._4_12_ = extraout_var_01;
      if ((_DAT_0043e4a0 & 0x80000) == 0) {
        _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
        iVar2 = (int)(longlong)ROUND(auVar9._0_4_);
      }
      else {
        auVar7 = roundss(auVar9,auVar9,4);
        iVar2 = (int)(longlong)auVar7._0_4_;
      }
      auVar10._0_4_ = FUN_0041f1e8((float)((longlong)local_60.right - (longlong)local_60.left));
      auVar10._4_12_ = extraout_var_02;
      if ((_DAT_0043e4a0 & 0x80000) == 0) {
        _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
        iVar3 = (int)(longlong)ROUND(auVar10._0_4_);
      }
      else {
        auVar7 = roundss(auVar10,auVar10,4);
        iVar3 = (int)(longlong)auVar7._0_4_;
      }
      FUN_004113d8(lVar6,local_50.right,local_50.bottom,iVar3,iVar2,&local_64,&local_68,&local_6c,
                   &local_70);
      *(int *)(lVar6 + 0x740) = local_64;
      *(int *)(lVar6 + 0x744) = local_68;
      *(int *)(lVar6 + 0x748) = local_6c;
      *(int *)(lVar6 + 0x74c) = local_70;
      auVar11._0_4_ = FUN_0041f133((float)local_70);
      auVar11._4_12_ = extraout_var_03;
      if ((_DAT_0043e4a0 & 0x80000) == 0) {
        _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
        iVar2 = (int)(longlong)ROUND(auVar11._0_4_);
      }
      else {
        auVar7 = roundss(auVar11,auVar11,4);
        iVar2 = (int)(longlong)auVar7._0_4_;
      }
      auVar12._0_4_ = FUN_0041f07e((float)local_6c);
      auVar12._4_12_ = extraout_var_04;
      if ((_DAT_0043e4a0 & 0x80000) == 0) {
        _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
        iVar3 = (int)(longlong)ROUND(auVar12._0_4_);
      }
      else {
        auVar7 = roundss(auVar12,auVar12,4);
        iVar3 = (int)(longlong)auVar7._0_4_;
      }
      auVar13._0_4_ = FUN_0041f133((float)local_68);
      auVar13._4_12_ = extraout_var_05;
      if ((_DAT_0043e4a0 & 0x80000) == 0) {
        _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
        iVar4 = (int)(longlong)ROUND(auVar13._0_4_);
      }
      else {
        auVar7 = roundss(auVar13,auVar13,4);
        iVar4 = (int)(longlong)auVar7._0_4_;
      }
      auVar14._0_4_ = FUN_0041f07e((float)local_64);
      auVar14._4_12_ = extraout_var_06;
      if ((_DAT_0043e4a0 & 0x80000) == 0) {
        _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
        iVar5 = (int)(longlong)ROUND(auVar14._0_4_);
      }
      else {
        auVar7 = roundss(auVar14,auVar14,4);
        iVar5 = (int)(longlong)auVar7._0_4_;
      }
      local_80 = DeferWindowPos(local_80,local_78,(HWND)0x0,iVar5,iVar4,iVar3,iVar2,0x14);
    }
  }
  for (local_88 = FUN_00401580((longlong)param_1); local_88 != 0;
      local_88 = *(longlong *)(local_88 + 0x768)) {
    if (0 < *(int *)(local_88 + 0x750)) {
      if (*(longlong *)(local_88 + 0x28) == 0) {
        FUN_004113d8(local_88,local_50.right,local_50.bottom,*(int *)(local_88 + 0x748),
                     (int)*(undefined8 *)(local_88 + 0x74c),&local_64,&local_68,&local_6c,&local_70)
        ;
      }
      else {
        GetWindowRect(*(HWND *)(local_88 + 0x28),&local_60);
        auVar15._0_4_ = FUN_0041f295((float)((longlong)local_60.bottom - (longlong)local_60.top));
        auVar15._4_12_ = extraout_var_07;
        if ((_DAT_0043e4a0 & 0x80000) == 0) {
          _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
          iVar2 = (int)(longlong)ROUND(auVar15._0_4_);
        }
        else {
          auVar7 = roundss(auVar15,auVar15,4);
          iVar2 = (int)(longlong)auVar7._0_4_;
        }
        auVar16._0_4_ = FUN_0041f1e8((float)((longlong)local_60.right - (longlong)local_60.left));
        auVar16._4_12_ = extraout_var_08;
        if ((_DAT_0043e4a0 & 0x80000) == 0) {
          _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
          iVar3 = (int)(longlong)ROUND(auVar16._0_4_);
        }
        else {
          auVar7 = roundss(auVar16,auVar16,4);
          iVar3 = (int)(longlong)auVar7._0_4_;
        }
        FUN_004113d8(local_88,local_50.right,local_50.bottom,iVar3,iVar2,&local_64,&local_68,
                     &local_6c,&local_70);
        auVar17._0_4_ = FUN_0041f133((float)local_70);
        auVar17._4_12_ = extraout_var_09;
        if ((_DAT_0043e4a0 & 0x80000) == 0) {
          _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
          iVar2 = (int)(longlong)ROUND(auVar17._0_4_);
        }
        else {
          auVar7 = roundss(auVar17,auVar17,4);
          iVar2 = (int)(longlong)auVar7._0_4_;
        }
        auVar18._0_4_ = FUN_0041f07e((float)local_6c);
        auVar18._4_12_ = extraout_var_10;
        if ((_DAT_0043e4a0 & 0x80000) == 0) {
          _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
          iVar3 = (int)(longlong)ROUND(auVar18._0_4_);
        }
        else {
          auVar7 = roundss(auVar18,auVar18,4);
          iVar3 = (int)(longlong)auVar7._0_4_;
        }
        auVar19._0_4_ = FUN_0041f133((float)local_68);
        auVar19._4_12_ = extraout_var_11;
        if ((_DAT_0043e4a0 & 0x80000) == 0) {
          _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
          iVar4 = (int)(longlong)ROUND(auVar19._0_4_);
        }
        else {
          auVar7 = roundss(auVar19,auVar19,4);
          iVar4 = (int)(longlong)auVar7._0_4_;
        }
        auVar20._0_4_ = FUN_0041f07e((float)local_64);
        auVar20._4_12_ = extraout_var_12;
        if ((_DAT_0043e4a0 & 0x80000) == 0) {
          _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
          iVar5 = (int)(longlong)ROUND(auVar20._0_4_);
        }
        else {
          auVar7 = roundss(auVar20,auVar20,4);
          iVar5 = (int)(longlong)auVar7._0_4_;
        }
        local_80 = DeferWindowPos(local_80,*(HWND *)(local_88 + 0x28),(HWND)0x0,iVar5,iVar4,iVar3,
                                  iVar2,0x14);
      }
      *(int *)(local_88 + 0x740) = local_64;
      *(int *)(local_88 + 0x744) = local_68;
      *(int *)(local_88 + 0x748) = local_6c;
      *(int *)(local_88 + 0x74c) = local_70;
    }
  }
  EndDeferWindowPos(local_80);
  return;
}


