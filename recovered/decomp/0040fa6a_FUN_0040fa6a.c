// 0040fa6a  undefined8 FUN_0040fa6a(char * param_1)
// callers: 3  callees: 17


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0040fa6a(char *param_1)

{
  BYTE BVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  char *pcVar9;
  longlong *plVar10;
  size_t sVar11;
  HFONT pHVar12;
  int iVar13;
  LONG local_170;
  uint local_168 [6];
  longlong local_150 [3];
  int local_134;
  char *local_130;
  char *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  char local_e8 [24];
  undefined8 local_d0 [3];
  undefined8 local_b8 [3];
  undefined8 local_a0 [3];
  undefined8 local_88 [3];
  undefined8 local_70 [3];
  int local_54;
  int local_50;
  int local_4c;
  undefined8 local_48;
  
  local_48 = 0;
  local_4c = 0;
  lVar7 = FUN_0042b310((longlong *)&DAT_00437890,1);
  iVar13 = (int)lVar7;
  local_54 = 0xffffffff;
  local_50 = iVar13;
  if (-1 < iVar13) {
    for (local_4c = 0; local_4c <= iVar13; local_4c = local_4c + 1) {
      uVar2 = FUN_0042b910((char *)((longlong)local_4c * 0x18 + _DAT_00437890),-1,param_1,-1);
      if (uVar2 == 0) {
        return *(undefined8 *)((longlong)local_4c * 8 + _DAT_00437980);
      }
    }
  }
  local_54 = local_50 + 1;
  FUN_0042b090((undefined8 *)&DAT_00437890,0x18,-1,-1,1);
  FUN_0042b090((undefined8 *)&DAT_00437980,8,-1,0,1);
  FUN_0042b830((undefined8 *)((longlong)local_54 * 0x18 + _DAT_00437890),0xffffffffffffffff,param_1,
               -1,0);
  pcVar9 = local_e8;
  lVar7 = 0x12;
  do {
    pcVar9[0] = '\0';
    pcVar9[1] = '\0';
    pcVar9[2] = '\0';
    pcVar9[3] = '\0';
    pcVar9[4] = '\0';
    pcVar9[5] = '\0';
    pcVar9[6] = '\0';
    pcVar9[7] = '\0';
    pcVar9 = pcVar9 + 8;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  local_130 = local_e8;
  local_128 = local_e8;
  local_120 = 0x90;
  local_118 = 0x18;
  local_110 = 1;
  local_108 = 0x31;
  local_100 = 6;
  local_f8 = 0;
  local_f0 = 5;
  local_134 = 0;
  FUN_0042b850(local_150,0xffffffffffffffff,param_1,-1,0);
  local_4c = 0;
  do {
    puVar8 = FUN_0042ce40(&DAT_00436780,1);
    lVar7 = FUN_0042cb40(1,local_150,puVar8);
    local_134 = (int)lVar7;
    if (local_134 == 0) {
      pcVar9 = (char *)FUN_0042cf50(local_150);
      FUN_0042b830((undefined8 *)(local_e8 + (longlong)local_4c * 0x18),0xffffffffffffffff,pcVar9,-1
                   ,0);
      break;
    }
    plVar10 = FUN_0042cc20(local_150,(longlong)local_134 - 1);
    pcVar9 = (char *)FUN_0042cf50(plVar10);
    FUN_0042b830((undefined8 *)(local_e8 + (longlong)local_4c * 0x18),0xffffffffffffffff,pcVar9,-1,0
                );
    plVar10 = FUN_0042cd80(local_150,(longlong)local_134 + 1,0xffffffffffffffff);
    FUN_0042b830(local_150,0xffffffffffffffff,(char *)plVar10,-1,0);
    local_4c = local_4c + 1;
  } while (local_4c < 6);
  uVar3 = FUN_0042be90(local_d0);
  if (uVar3 == 0) {
    FUN_0042b830(local_d0,0xffffffffffffffff,&DAT_00437a78,2,0);
  }
  sVar11 = FUN_0042cd30(local_e8,-1);
  if (sVar11 == 0) {
    FUN_0042b830((undefined8 *)local_e8,0xffffffffffffffff,s_SimSun_00437a80,7,0);
  }
  BVar1 = DAT_004366b0;
  uVar3 = FUN_0042be90(local_70);
  uVar4 = FUN_0042be90(local_88);
  uVar5 = FUN_0042be90(local_a0);
  uVar6 = FUN_0042be90(local_b8);
  if (uVar6 == 0) {
    local_170 = 400;
  }
  else {
    local_170 = 700;
  }
  uVar6 = FUN_0042be90(local_d0);
  FUN_0041b1eb(local_168,local_e8,DAT_004366ac);
  pHVar12 = FUN_0041f672((longlong)local_168,uVar6,-1,local_170,(BYTE)uVar5,(BYTE)uVar4,(BYTE)uVar3,
                         BVar1);
  *(HFONT *)((longlong)local_54 * 8 + _DAT_00437980) = pHVar12;
  FUN_0041b3ab((longlong)local_168);
  if (*(longlong *)((longlong)local_54 * 8 + _DAT_00437980) == 0) {
    local_54 = local_54 + -1;
    FUN_0042b090((undefined8 *)&DAT_00437890,0x18,-1,-1,1);
    FUN_0042b090((undefined8 *)&DAT_00437980,8,-1,0,1);
    local_48 = 0;
    FUN_0042c680(local_150);
    FUN_0042abe0((longlong)&local_130);
  }
  else {
    local_48 = *(undefined8 *)((longlong)local_54 * 8 + _DAT_00437980);
    FUN_0042c680(local_150);
    FUN_0042abe0((longlong)&local_130);
  }
  return local_48;
}


