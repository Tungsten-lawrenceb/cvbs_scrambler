// 00431890  undefined8 * FUN_00431890(undefined8 * param_1)
// callers: 5  callees: 3


undefined8 * FUN_00431890(undefined8 *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = *(int *)((longlong)param_1 + 0x14);
  lVar5 = (longlong)iVar4;
  piVar2 = (int *)(param_1 + 3);
  do {
    if (*piVar2 != -1) {
      *piVar2 = *piVar2 + 1;
      return param_1;
    }
    piVar1 = piVar2 + 1;
    *piVar2 = 0;
    piVar2 = piVar1;
  } while (piVar1 < (int *)((longlong)(param_1 + 3) + lVar5 * 4));
  puVar3 = param_1;
  if (*(int *)((longlong)param_1 + 0xc) <= iVar4) {
    puVar3 = (undefined8 *)FUN_00434b50(*(int *)(param_1 + 1) + 1);
    memcpy(puVar3 + 2,param_1 + 2,(longlong)*(int *)((longlong)param_1 + 0x14) * 4 + 8);
    FUN_00434c50(param_1);
    iVar4 = *(int *)((longlong)puVar3 + 0x14);
    lVar5 = (longlong)iVar4;
  }
  *(int *)((longlong)puVar3 + 0x14) = iVar4 + 1;
  *(undefined4 *)((longlong)puVar3 + lVar5 * 4 + 0x18) = 1;
  return puVar3;
}


