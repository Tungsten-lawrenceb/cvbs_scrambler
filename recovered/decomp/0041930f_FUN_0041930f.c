// 0041930f  undefined1 FUN_0041930f(byte param_1, byte param_2, DWORD param_3)
// callers: 6  callees: 8


undefined1 FUN_0041930f(byte param_1,byte param_2,DWORD param_3)

{
  char cVar1;
  char cVar2;
  BOOL BVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  char *pcVar7;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_8e;
  byte local_8d;
  byte local_8c;
  byte local_8b;
  undefined8 local_8a;
  undefined8 local_82;
  undefined8 local_7a;
  undefined4 local_72;
  undefined2 local_6e;
  longlong local_50;
  undefined1 local_41;
  
  local_41 = 0;
  local_50 = 0;
  local_8a = 0;
  local_82 = 0;
  local_7a = 0;
  local_72 = 0;
  local_6e = 0;
  local_8b = 0;
  local_8c = 0;
  local_8d = 0;
  local_8e = 0;
  PurgeComm(DAT_00437a70,0xc);
  local_8d = param_1 + param_2;
  plVar4 = FUN_0042c7f0(local_8d,2);
  plVar5 = FUN_0042c7f0(param_2,2);
  plVar6 = FUN_0042c7f0(param_1,2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  pcVar7 = (char *)FUN_0042ba80(&local_a8,&DAT_00437e30,4,(char *)plVar6,-1);
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  pcVar7 = (char *)FUN_0042ba80(&local_d0,pcVar7,-1,(char *)plVar5,-1);
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  pcVar7 = (char *)FUN_0042ba80(&local_e8,pcVar7,-1,(char *)plVar4,-1);
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  pcVar7 = (char *)FUN_0042ba80(&local_110,pcVar7,-1,&DAT_00437e38,2);
  FUN_0042b830(&local_8a,0x1e,pcVar7,-1,0);
  BVar3 = WriteFile(DAT_00437a70,&local_8a,10,(LPDWORD)&local_50,(LPOVERLAPPED)0x0);
  if (BVar3 == 0) {
    local_41 = 1;
  }
  else if (local_50 == 10) {
    FUN_0042e8c0(param_3,1);
    BVar3 = ReadFile(DAT_00437a70,&local_8a,8,(LPDWORD)&local_50,(LPOVERLAPPED)0x0);
    if (BVar3 == 0) {
      local_41 = 3;
    }
    else if (local_50 == 8) {
      cVar1 = FUN_00419ab0(local_8a._1_1_);
      cVar2 = FUN_00419ab0(local_8a._2_1_);
      local_8b = cVar1 * '\x10' + cVar2;
      cVar1 = FUN_00419ab0(local_8a._3_1_);
      cVar2 = FUN_00419ab0(local_8a._4_1_);
      local_8c = cVar1 * '\x10' + cVar2;
      cVar1 = FUN_00419ab0(local_8a._5_1_);
      cVar2 = FUN_00419ab0(local_8a._6_1_);
      if (param_2 == 0 && param_1 == 0) {
        local_41 = 0;
      }
      else if (local_8b == param_1) {
        if (local_8c == param_2) {
          if ((byte)(cVar1 * '\x10' + cVar2) == (byte)(local_8c + local_8b)) {
            local_41 = 0;
          }
          else {
            local_41 = 7;
          }
        }
        else {
          local_41 = 6;
        }
      }
      else {
        local_41 = 5;
      }
    }
    else {
      local_41 = 4;
    }
  }
  else {
    local_41 = 2;
  }
  return local_41;
}


