// 00431950  undefined4 FUN_00431950(undefined8 param_1, uint * param_2, uint * param_3, undefined4 * param_4, int param_5, int param_6, uint * param_7)
// callers: 3  callees: 8


undefined4
FUN_00431950(undefined8 param_1,uint *param_2,uint *param_3,undefined4 *param_4,int param_5,
            int param_6,uint *param_7)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint local_50;
  uint local_4c [3];
  
  puVar5 = (undefined8 *)FUN_004354f0(param_1,(int *)local_4c,(int *)&local_50);
  uVar3 = *param_2;
  uVar8 = local_50 - uVar3;
  local_4c[0] = local_4c[0] + uVar8;
  if ((int)uVar8 < 1) {
    uVar11 = 0;
    if (param_5 == 0) goto LAB_00431a58;
    uVar4 = 0;
    uVar9 = 0;
    if (uVar8 != 0) {
      uVar9 = uVar3 - local_50;
      local_50 = uVar8;
      puVar5 = (undefined8 *)FUN_00435080(puVar5,uVar9);
      uVar9 = 0;
      uVar8 = local_50;
    }
  }
  else if (uVar3 == 0x35) {
    uVar11 = 0;
    if ((param_5 == 0) || (uVar11 = 0, param_2[3] != 1)) goto LAB_00431a58;
    local_50 = uVar8;
    uVar4 = FUN_00435880((longlong)puVar5,uVar8);
    if (uVar4 != 0) goto LAB_00431c86;
    FUN_00434420((longlong)puVar5,local_50);
    uVar9 = 0;
    uVar8 = local_50;
  }
  else if (param_6 == 1) {
    local_50 = uVar8;
    uVar4 = FUN_00435880((longlong)puVar5,uVar8);
    if (uVar4 == 0) {
      FUN_00434420((longlong)puVar5,local_50);
      uVar9 = 0;
      uVar8 = local_50;
    }
    else {
LAB_00431c86:
      FUN_00434420((longlong)puVar5,local_50);
      uVar9 = 0x10;
      uVar8 = local_50;
    }
  }
  else {
    if (param_6 == 2) {
      local_50 = uVar8;
      uVar4 = FUN_00435880((longlong)puVar5,uVar8);
      FUN_00434420((longlong)puVar5,local_50);
    }
    else {
      iVar7 = uVar8 - 1;
      if (iVar7 == 0) {
        uVar11 = 0;
        if (param_5 == 0) goto LAB_00431a58;
        uVar10 = *(uint *)(puVar5 + 3) >> 1;
      }
      else {
        uVar10 = *(uint *)((longlong)puVar5 + (longlong)(iVar7 >> 5) * 4 + 0x18) >>
                 ((byte)iVar7 & 0x1f);
      }
      local_50 = uVar8;
      uVar4 = FUN_00435880((longlong)puVar5,uVar8);
      FUN_00434420((longlong)puVar5,local_50);
      uVar9 = ~-(uint)(uVar4 == 0) & 0x10;
      uVar8 = local_50;
      if ((uVar10 & 1) == 0) goto LAB_00431a94;
    }
    puVar5 = FUN_00431890(puVar5);
    uVar8 = 0;
    if ((uVar3 & 0x1f) != 0) {
      uVar8 = 0x20 - (uVar3 & 0x1f);
    }
    puVar2 = (uint *)((longlong)puVar5 +
                     (longlong)(*(int *)((longlong)puVar5 + 0x14) + -1) * 4 + 0x18);
    uVar9 = 0x1f;
    if (*puVar2 != 0) {
      for (; *puVar2 >> uVar9 == 0; uVar9 = uVar9 - 1) {
      }
    }
    if ((uVar9 ^ 0x1f) == uVar8) {
      uVar9 = 0x20;
      uVar8 = local_50;
    }
    else {
      if (uVar4 == 0) {
        uVar4 = *(uint *)(puVar5 + 3) & 1;
      }
      FUN_00434420((longlong)puVar5,1);
      local_4c[0] = local_4c[0] + 1;
      uVar9 = 0x20;
      uVar8 = local_50;
    }
  }
LAB_00431a94:
  local_50 = uVar8;
  uVar8 = param_2[1];
  if ((int)local_4c[0] < (int)uVar8) {
    uVar10 = uVar8 - local_4c[0];
    local_4c[0] = uVar8;
    if (((int)uVar3 < (int)uVar10) || (param_2[4] != 0)) {
      uVar9 = 0;
      *(undefined4 *)((longlong)puVar5 + 0x14) = 0;
      *param_7 = 0x50;
    }
    else {
      uVar1 = uVar10 - 1;
      if ((0 < (int)uVar1) && (uVar4 == 0)) {
        uVar4 = FUN_00435880((longlong)puVar5,uVar1);
      }
      uVar11 = 0;
      uVar8 = local_50;
      if (uVar4 == 0 && param_5 == 0) goto LAB_00431a58;
      uVar8 = *(uint *)((longlong)puVar5 + (longlong)((int)uVar1 >> 5) * 4 + 0x18);
      FUN_00434420((longlong)puVar5,uVar10);
      *param_7 = 2;
      if ((uVar8 & 1 << ((byte)uVar1 & 0x1f)) == 0) {
        if (uVar4 != 0) {
          uVar9 = 0x50;
        }
      }
      else {
        uVar9 = 0x60;
        puVar5 = FUN_00431890(puVar5);
      }
    }
  }
  else if ((int)param_2[2] < (int)local_4c[0]) {
    local_4c[0] = param_2[2] + 1;
    uVar9 = 0;
    *param_7 = 0xa3;
    piVar6 = _errno();
    *piVar6 = 0x22;
    *(undefined4 *)((longlong)puVar5 + 0x14) = 0;
  }
  *param_3 = local_4c[0];
  FUN_00435820(param_4,uVar3,(longlong)puVar5);
  *param_7 = *param_7 | uVar9;
  uVar11 = 1;
  uVar8 = local_50;
LAB_00431a58:
  local_50 = uVar8;
  FUN_00434c50(puVar5);
  return uVar11;
}


