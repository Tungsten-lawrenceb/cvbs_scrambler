// 0041a31e  undefined FUN_0041a31e(void)
// callers: 1  callees: 12


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041a31e(void)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  LPCWSTR lpSrc;
  HWND pHVar4;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar5 [16];
  uint local_e0 [6];
  char local_c8 [40];
  uint local_a0 [6];
  char local_88 [24];
  ulonglong local_70;
  uint local_68 [6];
  ulonglong local_50;
  byte local_45;
  byte local_44;
  undefined1 local_43;
  byte local_42;
  byte local_41;
  
  local_41 = 0;
  local_42 = 0;
  local_43 = 0;
  local_44 = 0;
  local_45 = 0;
  local_50 = 0;
  puVar3 = FUN_0040f0ee(local_68,(undefined8 *)&DAT_0043e470);
  lpSrc = (LPCWSTR)FUN_0041b471((longlong)puVar3);
  iVar2 = StrToIntW(lpSrc);
  local_50 = (ulonglong)iVar2;
  FUN_0041b3ab((longlong)local_68);
  auVar5._0_8_ = FUN_004316e0((double)local_50 / 256.0);
  auVar5._8_8_ = extraout_XMM0_Qb;
  if ((_DAT_0043e4a0 & 0x80000) == 0) {
    _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
    local_44 = (byte)(longlong)ROUND(auVar5._0_8_);
  }
  else {
    auVar5 = roundsd(auVar5,auVar5,4);
    local_44 = (byte)(longlong)auVar5._0_8_;
  }
  local_45 = (byte)local_50;
  pHVar4 = (HWND)FUN_00406bb7((undefined8 *)&DAT_0043e3d8);
  iVar2 = FUN_00411b98(pHVar4);
  local_42 = iVar2 != -1;
  pHVar4 = (HWND)FUN_00406bb7((undefined8 *)&DAT_0043e398);
  iVar2 = FUN_00411b98(pHVar4);
  local_43 = iVar2 != -1;
  local_41 = 0;
  local_41 = FUN_0041930f(1,local_43,0x28);
  local_70 = (ulonglong)local_41;
  cVar1 = FUN_0041930f(2,local_42,0x28);
  local_41 = (char)local_70 + cVar1;
  local_70 = (ulonglong)local_41;
  cVar1 = FUN_0041930f(3,local_44,0x28);
  local_41 = (char)local_70 + cVar1;
  local_70 = (ulonglong)local_41;
  cVar1 = FUN_0041930f(4,local_45,0x28);
  local_41 = (char)local_70 + cVar1;
  local_70 = (ulonglong)local_41;
  cVar1 = FUN_0041930f(0,1,1000);
  local_41 = (char)local_70 + cVar1;
  FUN_0041930f(0,0,0x28);
  if (local_41 == '\0') {
    local_c8[0] = '\0';
    local_c8[1] = '\0';
    local_c8[2] = '\0';
    local_c8[3] = '\0';
    local_c8[4] = '\0';
    local_c8[5] = '\0';
    local_c8[6] = '\0';
    local_c8[7] = '\0';
    local_c8[8] = '\0';
    local_c8[9] = '\0';
    local_c8[10] = '\0';
    local_c8[0xb] = '\0';
    local_c8[0xc] = '\0';
    local_c8[0xd] = '\0';
    local_c8[0xe] = '\0';
    local_c8[0xf] = '\0';
    local_c8[0x10] = '\0';
    local_c8[0x11] = '\0';
    local_c8[0x12] = '\0';
    local_c8[0x13] = '\0';
    local_c8[0x14] = '\0';
    local_c8[0x15] = '\0';
    local_c8[0x16] = '\0';
    local_c8[0x17] = '\0';
    FUN_0042b830((undefined8 *)local_c8,0xffffffffffffffff,s_Write_Successfull__00437e80,0x13,0);
    FUN_0041b1eb(local_e0,local_c8,DAT_004366ac);
    FUN_00408972((int *)&DAT_0043e480,(longlong)local_e0);
    FUN_0041b3ab((longlong)local_e0);
    FUN_0042c680((undefined8 *)local_c8);
  }
  else {
    local_88[0] = '\0';
    local_88[1] = '\0';
    local_88[2] = '\0';
    local_88[3] = '\0';
    local_88[4] = '\0';
    local_88[5] = '\0';
    local_88[6] = '\0';
    local_88[7] = '\0';
    local_88[8] = '\0';
    local_88[9] = '\0';
    local_88[10] = '\0';
    local_88[0xb] = '\0';
    local_88[0xc] = '\0';
    local_88[0xd] = '\0';
    local_88[0xe] = '\0';
    local_88[0xf] = '\0';
    local_88[0x10] = '\0';
    local_88[0x11] = '\0';
    local_88[0x12] = '\0';
    local_88[0x13] = '\0';
    local_88[0x14] = '\0';
    local_88[0x15] = '\0';
    local_88[0x16] = '\0';
    local_88[0x17] = '\0';
    FUN_0042b830((undefined8 *)local_88,0xffffffffffffffff,s_Write_Error__00437e70,0xd,0);
    FUN_0041b1eb(local_a0,local_88,DAT_004366ac);
    FUN_00408972((int *)&DAT_0043e480,(longlong)local_a0);
    FUN_0041b3ab((longlong)local_a0);
    FUN_0042c680((undefined8 *)local_88);
  }
  return;
}


