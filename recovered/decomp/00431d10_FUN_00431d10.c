// 00431d10  undefined FUN_00431d10(undefined8 * param_1, uint param_2)
// callers: 3  callees: 2


void FUN_00431d10(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar2;
  
  iVar7 = (int)(param_2 + 0x1f) >> 5;
  if (*(int *)(param_1 + 1) < iVar7) {
    FUN_00434c50(param_1);
    param_1 = (undefined8 *)FUN_00434b50(iVar7);
  }
  puVar4 = param_1 + 3;
  iVar7 = (int)param_2 >> 5;
  uVar5 = param_2 & 0x1f;
  if (uVar5 == 0) {
    *(int *)((longlong)param_1 + 0x14) = iVar7;
    puVar6 = (undefined8 *)((longlong)puVar4 + (longlong)iVar7 * 4);
    puVar2 = puVar4;
    if (puVar6 <= puVar4) {
      return;
    }
  }
  else {
    *(int *)((longlong)param_1 + 0x14) = iVar7 + 1;
    puVar6 = (undefined8 *)((longlong)puVar4 + (longlong)(iVar7 + 1) * 4);
    puVar2 = puVar4;
    if (puVar6 <= puVar4) goto LAB_00431da0;
  }
  do {
    puVar1 = (undefined8 *)((longlong)puVar2 + 4);
    *(undefined4 *)puVar2 = 0xffffffff;
    puVar2 = puVar1;
  } while (puVar1 < puVar6);
  lVar3 = ((longlong)puVar6 + (-0x19 - (longlong)param_1) & 0xfffffffffffffffcU) + 4;
  if (puVar6 < (undefined8 *)((longlong)param_1 + 0x19)) {
    lVar3 = 4;
  }
  puVar4 = (undefined8 *)((longlong)puVar4 + lVar3);
  if (uVar5 == 0) {
    return;
  }
LAB_00431da0:
  *(uint *)((longlong)puVar4 + -4) =
       *(uint *)((longlong)puVar4 + -4) >> (0x20U - (char)uVar5 & 0x1f);
  return;
}


