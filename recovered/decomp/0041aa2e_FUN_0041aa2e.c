// 0041aa2e  undefined FUN_0041aa2e(void)
// callers: 1  callees: 10


void FUN_0041aa2e(void)

{
  int iVar1;
  uint *puVar2;
  LPCWSTR lpSrc;
  char *pcVar3;
  uint local_e0 [6];
  char local_c8 [40];
  uint local_a0 [6];
  uint local_88 [6];
  char local_70 [40];
  ulonglong local_48;
  
  local_48 = 0;
  local_70[0] = '\0';
  local_70[1] = '\0';
  local_70[2] = '\0';
  local_70[3] = '\0';
  local_70[4] = '\0';
  local_70[5] = '\0';
  local_70[6] = '\0';
  local_70[7] = '\0';
  local_70[8] = '\0';
  local_70[9] = '\0';
  local_70[10] = '\0';
  local_70[0xb] = '\0';
  local_70[0xc] = '\0';
  local_70[0xd] = '\0';
  local_70[0xe] = '\0';
  local_70[0xf] = '\0';
  local_70[0x10] = '\0';
  local_70[0x11] = '\0';
  local_70[0x12] = '\0';
  local_70[0x13] = '\0';
  local_70[0x14] = '\0';
  local_70[0x15] = '\0';
  local_70[0x16] = '\0';
  local_70[0x17] = '\0';
  FUN_0042b830((undefined8 *)local_70,0xffffffffffffffff,s_Hi_Welcome_To_You___00437df8,0x14,0);
  FUN_0041b1eb(local_88,local_70,DAT_004366ac);
  FUN_00408972((int *)&DAT_0043e480,(longlong)local_88);
  FUN_0041b3ab((longlong)local_88);
  FUN_0042c680((undefined8 *)local_70);
  puVar2 = FUN_0040f0ee(local_a0,(undefined8 *)&DAT_0043e470);
  lpSrc = (LPCWSTR)FUN_0041b471((longlong)puVar2);
  iVar1 = StrToIntW(lpSrc);
  local_48 = (ulonglong)iVar1;
  FUN_0041b3ab((longlong)local_a0);
  if (local_48 < 0x1e00) {
    DAT_0043e490 = local_48;
  }
  else {
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
    pcVar3 = (char *)FUN_0042c1e0(DAT_0043e490);
    FUN_0042b830((undefined8 *)local_c8,0xffffffffffffffff,pcVar3,-1,0);
    FUN_0041b1eb(local_e0,local_c8,DAT_004366ac);
    FUN_0040f132((undefined8 *)&DAT_0043e470,(longlong)local_e0);
    FUN_0041b3ab((longlong)local_e0);
    FUN_0042c680((undefined8 *)local_c8);
  }
  return;
}


