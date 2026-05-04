// 00419b56  undefined FUN_00419b56(void)
// callers: 1  callees: 23


void FUN_00419b56(void)

{
  undefined8 uVar1;
  uint uVar2;
  BOOL BVar3;
  ulonglong uVar4;
  uint *puVar5;
  char *pcVar6;
  uint local_228 [6];
  char local_210 [40];
  uint local_1e8 [6];
  char local_1d0 [40];
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  uint local_168 [6];
  char local_150 [24];
  wchar_t *local_138;
  byte *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong local_e0;
  uint local_d8 [6];
  uint local_c0 [6];
  char local_a8 [40];
  _COMMTIMEOUTS local_80;
  _DCB local_6c;
  longlong local_50;
  longlong local_48;
  
  uVar4 = FUN_0040ed5d((undefined8 *)&DAT_0043e428);
  local_48 = (longlong)(int)uVar4 + 1;
  local_6c.DCBlength = 0;
  local_6c.BaudRate = 0;
  local_6c._8_8_ = 0;
  local_6c.XoffLim = 0;
  local_6c.ByteSize = '\0';
  local_6c.Parity = '\0';
  local_6c.StopBits = '\0';
  local_6c.XonChar = '\0';
  local_6c.XoffChar = '\0';
  local_6c.ErrorChar = '\0';
  local_6c.EofChar = '\0';
  local_6c.EvtChar = '\0';
  local_6c.wReserved1 = 0;
  local_80.ReadIntervalTimeout = 0;
  local_80.ReadTotalTimeoutMultiplier = 0;
  local_80.ReadTotalTimeoutConstant = 0;
  local_80.WriteTotalTimeoutMultiplier = 0;
  local_80.WriteTotalTimeoutConstant = 0;
  local_50 = 0;
  local_a8[0] = '\0';
  local_a8[1] = '\0';
  local_a8[2] = '\0';
  local_a8[3] = '\0';
  local_a8[4] = '\0';
  local_a8[5] = '\0';
  local_a8[6] = '\0';
  local_a8[7] = '\0';
  local_a8[8] = '\0';
  local_a8[9] = '\0';
  local_a8[10] = '\0';
  local_a8[0xb] = '\0';
  local_a8[0xc] = '\0';
  local_a8[0xd] = '\0';
  local_a8[0xe] = '\0';
  local_a8[0xf] = '\0';
  local_a8[0x10] = '\0';
  local_a8[0x11] = '\0';
  local_a8[0x12] = '\0';
  local_a8[0x13] = '\0';
  local_a8[0x14] = '\0';
  local_a8[0x15] = '\0';
  local_a8[0x16] = '\0';
  local_a8[0x17] = '\0';
  FUN_0042b830((undefined8 *)local_a8,0xffffffffffffffff,s_Hi_Welcome_To_You___00437df8,0x14,0);
  FUN_0041b1eb(local_c0,local_a8,DAT_004366ac);
  FUN_00408972((int *)&DAT_0043e480,(longlong)local_c0);
  FUN_0041b3ab((longlong)local_c0);
  FUN_0042c680((undefined8 *)local_a8);
  puVar5 = FUN_0040c2ff(local_d8,(undefined8 *)&DAT_0043e418);
  pcVar6 = (char *)FUN_0041b4c3((longlong)puVar5);
  uVar2 = FUN_0042b910(pcVar6,-1,&DAT_00437c40,5);
  local_e0 = -(ulonglong)(uVar2 == 0);
  FUN_0041b3ab((longlong)local_d8);
  if (local_e0 == 0) {
    CloseHandle(DAT_00437a70);
    DAT_00437a70 = (HANDLE)0xffffffffffffffff;
    FUN_00405896((undefined8 *)&DAT_0043e428,'\x01');
    local_210[0] = '\0';
    local_210[1] = '\0';
    local_210[2] = '\0';
    local_210[3] = '\0';
    local_210[4] = '\0';
    local_210[5] = '\0';
    local_210[6] = '\0';
    local_210[7] = '\0';
    local_210[8] = '\0';
    local_210[9] = '\0';
    local_210[10] = '\0';
    local_210[0xb] = '\0';
    local_210[0xc] = '\0';
    local_210[0xd] = '\0';
    local_210[0xe] = '\0';
    local_210[0xf] = '\0';
    local_210[0x10] = '\0';
    local_210[0x11] = '\0';
    local_210[0x12] = '\0';
    local_210[0x13] = '\0';
    local_210[0x14] = '\0';
    local_210[0x15] = '\0';
    local_210[0x16] = '\0';
    local_210[0x17] = '\0';
    FUN_0042b830((undefined8 *)local_210,0xffffffffffffffff,&DAT_00437c40,5,0);
    FUN_0041b1eb(local_228,local_210,DAT_004366ac);
    FUN_0040c343((undefined8 *)&DAT_0043e418,(longlong)local_228);
    FUN_0041b3ab((longlong)local_228);
    FUN_0042c680((undefined8 *)local_210);
    FUN_0040c797((int *)&DAT_0043e408,0xff0000ff);
    FUN_00405896((undefined8 *)&DAT_0043e3d8,'\0');
    FUN_00405896((undefined8 *)&DAT_0043e3c8,'\0');
    FUN_00405896((undefined8 *)&DAT_0043e398,'\0');
    FUN_00405896((undefined8 *)&DAT_0043e388,'\0');
    FUN_00405896((undefined8 *)&DAT_0043e3f8,'\0');
    FUN_00405896((undefined8 *)&DAT_0043e3e8,'\0');
    FUN_00405896((undefined8 *)&DAT_0043e428,'\x01');
    FUN_00405896((undefined8 *)&DAT_0043e470,'\0');
  }
  else {
    if (local_48 < 1) {
      local_48 = 1;
    }
    if (DAT_00437a70 != (HANDLE)0xffffffffffffffff) {
      CloseHandle(DAT_00437a70);
      DAT_00437a70 = (HANDLE)0xffffffffffffffff;
    }
    local_130 = (byte *)0x0;
    local_128 = 0;
    local_120 = 0;
    pcVar6 = (char *)FUN_0042c1e0(local_48);
    local_108 = 0;
    local_100 = 0;
    local_f8 = 0;
    pcVar6 = (char *)FUN_0042ba80(&local_108,s_____COM_00437e48,8,pcVar6,-1);
    FUN_0042b830(&local_130,0xffffffffffffffff,pcVar6,-1,0);
    local_138 = FUN_0042db90(local_130);
    DAT_00437a70 = CreateFileW(local_138,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
    FUN_0042ded0(local_138);
    FUN_0042c680(&local_130);
    if (DAT_00437a70 == (HANDLE)0xffffffffffffffff) {
      local_50 = 1;
    }
    local_6c.DCBlength = 0x1c;
    BVar3 = GetCommState(DAT_00437a70,&local_6c);
    if (BVar3 == 0) {
      local_50 = 1;
    }
    BVar3 = SetupComm(DAT_00437a70,0x100,0x100);
    if (BVar3 == 0) {
      local_50 = 1;
    }
    BVar3 = SetCommMask(DAT_00437a70,0);
    if (BVar3 == 0) {
      local_50 = 1;
    }
    local_80.ReadIntervalTimeout = 2;
    local_80.ReadTotalTimeoutMultiplier = 1;
    local_80.ReadTotalTimeoutConstant = 1;
    local_80.WriteTotalTimeoutMultiplier = 1;
    local_80.WriteTotalTimeoutConstant = 10;
    BVar3 = SetCommTimeouts(DAT_00437a70,&local_80);
    uVar1 = local_6c._16_8_;
    if (BVar3 == 0) {
      local_50 = 1;
    }
    local_6c.BaudRate = 0x4b00;
    local_6c._16_5_ = 0x2000000;
    local_6c.XoffLim = (WORD)uVar1;
    local_6c.ByteSize = '\b';
    local_6c._8_8_ = local_6c._8_8_ & 0xffffffffffffcfce | 1;
    BVar3 = SetCommState(DAT_00437a70,&local_6c);
    if (BVar3 == 0) {
      local_50 = 1;
    }
    if (local_50 == 0) {
      local_150[0] = '\0';
      local_150[1] = '\0';
      local_150[2] = '\0';
      local_150[3] = '\0';
      local_150[4] = '\0';
      local_150[5] = '\0';
      local_150[6] = '\0';
      local_150[7] = '\0';
      local_150[8] = '\0';
      local_150[9] = '\0';
      local_150[10] = '\0';
      local_150[0xb] = '\0';
      local_150[0xc] = '\0';
      local_150[0xd] = '\0';
      local_150[0xe] = '\0';
      local_150[0xf] = '\0';
      local_150[0x10] = '\0';
      local_150[0x11] = '\0';
      local_150[0x12] = '\0';
      local_150[0x13] = '\0';
      local_150[0x14] = '\0';
      local_150[0x15] = '\0';
      local_150[0x16] = '\0';
      local_150[0x17] = '\0';
      FUN_0042b830((undefined8 *)local_150,0xffffffffffffffff,s_Close_00437e50,6,0);
      FUN_0041b1eb(local_168,local_150,DAT_004366ac);
      FUN_0040c343((undefined8 *)&DAT_0043e418,(longlong)local_168);
      FUN_0041b3ab((longlong)local_168);
      FUN_0042c680((undefined8 *)local_150);
      FUN_0040c797((int *)&DAT_0043e408,0xff00);
      FUN_00405896((undefined8 *)&DAT_0043e3d8,'\x01');
      FUN_00405896((undefined8 *)&DAT_0043e3c8,'\x01');
      FUN_00405896((undefined8 *)&DAT_0043e398,'\x01');
      FUN_00405896((undefined8 *)&DAT_0043e388,'\x01');
      FUN_00405896((undefined8 *)&DAT_0043e428,'\x01');
      FUN_00405896((undefined8 *)&DAT_0043e3f8,'\x01');
      FUN_00405896((undefined8 *)&DAT_0043e3e8,'\x01');
      FUN_00405896((undefined8 *)&DAT_0043e428,'\0');
      FUN_00405896((undefined8 *)&DAT_0043e470,'\x01');
    }
    else {
      local_1d0[0] = '\0';
      local_1d0[1] = '\0';
      local_1d0[2] = '\0';
      local_1d0[3] = '\0';
      local_1d0[4] = '\0';
      local_1d0[5] = '\0';
      local_1d0[6] = '\0';
      local_1d0[7] = '\0';
      local_1d0[8] = '\0';
      local_1d0[9] = '\0';
      local_1d0[10] = '\0';
      local_1d0[0xb] = '\0';
      local_1d0[0xc] = '\0';
      local_1d0[0xd] = '\0';
      local_1d0[0xe] = '\0';
      local_1d0[0xf] = '\0';
      local_1d0[0x10] = '\0';
      local_1d0[0x11] = '\0';
      local_1d0[0x12] = '\0';
      local_1d0[0x13] = '\0';
      local_1d0[0x14] = '\0';
      local_1d0[0x15] = '\0';
      local_1d0[0x16] = '\0';
      local_1d0[0x17] = '\0';
      pcVar6 = (char *)FUN_0042c1e0(local_48);
      local_190 = 0;
      local_188 = 0;
      local_180 = 0;
      pcVar6 = (char *)FUN_0042ba80(&local_190,s_Open_Com_00437e58,9,pcVar6,-1);
      local_1a8 = 0;
      local_1a0 = 0;
      local_198 = 0;
      pcVar6 = (char *)FUN_0042ba80(&local_1a8,pcVar6,-1,s_Error__00437e68,8);
      FUN_0042b830((undefined8 *)local_1d0,0xffffffffffffffff,pcVar6,-1,0);
      FUN_0041b1eb(local_1e8,local_1d0,DAT_004366ac);
      FUN_00408972((int *)&DAT_0043e480,(longlong)local_1e8);
      FUN_0041b3ab((longlong)local_1e8);
      FUN_0042c680((undefined8 *)local_1d0);
    }
  }
  return;
}


