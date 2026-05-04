// 0040bc62  undefined FUN_0040bc62(int * param_1, longlong param_2, undefined8 param_3, uint param_4)
// callers: 3  callees: 21


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040bc62(int *param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  HGDIOBJ h;
  uint *puVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint local_120 [6];
  char local_108 [40];
  uint local_e0 [6];
  uint local_c8 [6];
  uint local_b0 [6];
  uint local_98 [6];
  HGDIOBJ local_80;
  uint local_74;
  uint local_70;
  uint local_6c;
  int local_68;
  int local_64;
  int iStack_60;
  int local_5c;
  int local_58;
  int local_54;
  uint local_50;
  uint local_4c;
  longlong local_48;
  
  *(undefined8 *)(param_1 + 2) = param_3;
  local_48 = FUN_004074f2(param_1);
  if ((local_48 != 0) && ((*(ulonglong *)(local_48 + 0x6b8) & 2) != 0)) {
    local_4c = (uint)((ulonglong)*(undefined8 *)(local_48 + 0x6b8) >> 0x18) & 0xff;
    local_50 = (uint)((ulonglong)*(undefined8 *)(local_48 + 0x6b8) >> 0x10) & 0xff;
    local_54 = (int)((*(ulonglong *)(local_48 + 0x6b8) & 0xf000) >> 0xc);
    local_68 = 0;
    local_6c = 0;
    local_70 = 0;
    local_58 = *(int *)(local_48 + 0x740);
    local_5c = *(int *)(local_48 + 0x744);
    iStack_60 = *(int *)(local_48 + 0x748);
    local_64 = *(int *)(local_48 + 0x74c);
    SetBkMode(*(HDC *)(param_2 + 0x90),0);
    local_6c = FUN_004100e2(*(uint *)(local_48 + 0x6cc),0xffffffff);
    if (local_6c == 0xffffffff) {
      local_6c = GetSysColor(8);
    }
    local_70 = FUN_004100e2(*(uint *)(local_48 + 0x6d0),0xffffffff);
    if (local_70 == 0xffffffff) {
      local_70 = param_4;
    }
    if (local_70 == 0xffffffff) {
      local_70 = GetSysColor(0xf);
    }
    FUN_00428fb1(param_2,local_6c,local_70);
    local_74 = 0;
    if (local_4c == 1) {
      local_74 = 1;
    }
    else if (local_4c == 0) {
      local_74 = 0;
    }
    else if (local_4c == 2) {
      local_74 = 2;
    }
    local_74 = local_74 | 0x60;
    h = (HGDIOBJ)FUN_0040fa6a((char *)(local_48 + 0x6e0));
    local_80 = SelectObject(*(HDC *)(param_2 + 0x90),h);
    local_108[0] = '\0';
    local_108[1] = '\0';
    local_108[2] = '\0';
    local_108[3] = '\0';
    local_108[4] = '\0';
    local_108[5] = '\0';
    local_108[6] = '\0';
    local_108[7] = '\0';
    local_108[8] = '\0';
    local_108[9] = '\0';
    local_108[10] = '\0';
    local_108[0xb] = '\0';
    local_108[0xc] = '\0';
    local_108[0xd] = '\0';
    local_108[0xe] = '\0';
    local_108[0xf] = '\0';
    local_108[0x10] = '\0';
    local_108[0x11] = '\0';
    local_108[0x12] = '\0';
    local_108[0x13] = '\0';
    local_108[0x14] = '\0';
    local_108[0x15] = '\0';
    local_108[0x16] = '\0';
    local_108[0x17] = '\0';
    FUN_0042b830((undefined8 *)local_108,0xffffffffffffffff,&DAT_00436710,2,0);
    FUN_0041b1eb(local_120,local_108,DAT_004366ac);
    lVar1 = local_48 + 0x40;
    FUN_0041b16e(local_c8,(wchar_t *)&DAT_00436978);
    puVar4 = FUN_0041c412(local_b0,(longlong)local_c8,lVar1);
    puVar4 = FUN_0041c412(local_e0,(longlong)puVar4,(longlong)local_120);
    FUN_0041b282(local_98,(longlong)puVar4);
    FUN_0041b3ab((longlong)local_120);
    FUN_0042c680((undefined8 *)local_108);
    FUN_0041b3ab((longlong)local_e0);
    FUN_0041b3ab((longlong)local_c8);
    FUN_0041b3ab((longlong)local_b0);
    uVar2 = FUN_0041b435(local_48 + 0x40);
    if (uVar2 != 0) {
      iVar3 = FUN_00428d1e(param_2,local_58 + local_50 + local_54 + 1,local_5c,iStack_60 + -0x14,
                           local_64,(longlong)local_98,local_74 | 0x400);
      fVar5 = FUN_0041f133(1.0);
      auVar6._0_8_ = (double)(longlong)iVar3 / (double)fVar5;
      auVar6._8_8_ = 0;
      if ((_DAT_0043e4a0 & 0x80000) == 0) {
        _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
        local_68 = (int)(longlong)ROUND(auVar6._0_8_);
      }
      else {
        auVar6 = roundsd(auVar6,auVar6,4);
        local_68 = (int)(longlong)auVar6._0_8_;
      }
    }
    uVar2 = FUN_00410166(*(uint *)(local_48 + 0x78),0);
    FUN_00429036(param_2,(float)local_54,uVar2);
    uVar2 = FUN_00410166(*(uint *)(local_48 + 0x6d0),0);
    FUN_004290c5(param_2,uVar2);
    auVar7._0_8_ = (double)(longlong)local_68 / 2.0;
    auVar7._8_8_ = 0;
    if ((_DAT_0043e4a0 & 0x80000) == 0) {
      _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
      local_68 = (int)(longlong)ROUND(auVar7._0_8_);
    }
    else {
      auVar6 = roundsd(auVar7,auVar7,4);
      local_68 = (int)(longlong)auVar6._0_8_;
    }
    FUN_004293da(param_2,(float)local_58,(float)((longlong)local_5c + (longlong)local_68),
                 (float)iStack_60,(float)((longlong)local_64 - (longlong)local_68),
                 (float)((longlong)(int)local_50 << 1),(float)((longlong)(int)local_50 << 1),0xf);
    uVar2 = FUN_0041b435(local_48 + 0x40);
    if (uVar2 != 0) {
      FUN_00428d1e(param_2,local_58 + local_50 + local_54 + 1,local_5c,iStack_60 + -0x14,local_64,
                   (longlong)local_98,local_74);
    }
    SetBkMode(*(HDC *)(param_2 + 0x90),1);
    SelectObject(*(HDC *)(param_2 + 0x90),local_80);
    FUN_0041b3ab((longlong)local_98);
  }
  return;
}


