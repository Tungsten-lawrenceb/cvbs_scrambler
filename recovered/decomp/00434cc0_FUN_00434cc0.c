// 00434cc0  undefined8 * FUN_00434cc0(undefined8 * param_1, int param_2, int param_3)
// callers: 4  callees: 3


undefined8 * FUN_00434cc0(undefined8 *param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  uVar5 = (ulonglong)param_3;
  lVar4 = 0;
  do {
    uVar2 = (ulonglong)*(uint *)((longlong)param_1 + lVar4 * 4 + 0x18) * (longlong)param_2 + uVar5;
    *(int *)((longlong)param_1 + lVar4 * 4 + 0x18) = (int)uVar2;
    lVar4 = lVar4 + 1;
    uVar5 = uVar2 >> 0x20;
  } while ((int)lVar4 < iVar1);
  puVar3 = param_1;
  if (uVar5 != 0) {
    if (*(int *)((longlong)param_1 + 0xc) <= iVar1) {
      puVar3 = (undefined8 *)FUN_00434b50(*(int *)(param_1 + 1) + 1);
      if (puVar3 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      memcpy(puVar3 + 2,param_1 + 2,(longlong)*(int *)((longlong)param_1 + 0x14) * 4 + 8);
      FUN_00434c50(param_1);
    }
    *(int *)((longlong)puVar3 + (longlong)iVar1 * 4 + 0x18) = (int)(uVar2 >> 0x20);
    *(int *)((longlong)puVar3 + 0x14) = iVar1 + 1;
  }
  return puVar3;
}


