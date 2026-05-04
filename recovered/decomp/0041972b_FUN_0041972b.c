// 0041972b  undefined1 FUN_0041972b(byte param_1, char * param_2)
// callers: 4  callees: 8


undefined1 FUN_0041972b(byte param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  BOOL BVar3;
  longlong *plVar4;
  longlong *plVar5;
  char *pcVar6;
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
  char local_8c;
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
  *param_2 = '\0';
  local_8d = param_1 - 1;
  plVar4 = FUN_0042c7f0(local_8d,2);
  plVar5 = FUN_0042c7f0(param_1,2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  pcVar6 = (char *)FUN_0042ba80(&local_a8,&DAT_00437e40,4,(char *)plVar5,-1);
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  pcVar6 = (char *)FUN_0042ba80(&local_d0,pcVar6,-1,(char *)plVar4,-1);
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  pcVar6 = (char *)FUN_0042ba80(&local_e8,pcVar6,-1,&DAT_00437e38,2);
  FUN_0042b830(&local_8a,0x1e,pcVar6,-1,0);
  BVar3 = WriteFile(DAT_00437a70,&local_8a,8,(LPDWORD)&local_50,(LPOVERLAPPED)0x0);
  if (BVar3 == 0) {
    local_41 = 1;
  }
  else if (local_50 == 8) {
    FUN_0042e8c0(0x28,1);
    BVar3 = ReadFile(DAT_00437a70,&local_8a,8,(LPDWORD)&local_50,(LPOVERLAPPED)0x0);
    if (BVar3 == 0) {
      local_41 = 3;
    }
    else if (local_50 == 8) {
      cVar1 = FUN_00419ab0(local_8a._1_1_);
      cVar2 = FUN_00419ab0(local_8a._2_1_);
      local_8b = cVar1 * '\x10' + cVar2;
      cVar1 = FUN_00419ab0(local_8a._3_1_);
      local_8c = FUN_00419ab0(local_8a._4_1_);
      local_8c = cVar1 * '\x10' + local_8c;
      cVar1 = FUN_00419ab0(local_8a._5_1_);
      cVar2 = FUN_00419ab0(local_8a._6_1_);
      if (local_8b == param_1) {
        if ((byte)(cVar1 * '\x10' + cVar2) == (byte)(local_8c + local_8b)) {
          *param_2 = local_8c;
          local_41 = 0;
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


