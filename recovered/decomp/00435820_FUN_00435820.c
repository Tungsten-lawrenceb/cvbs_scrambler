// 00435820  undefined FUN_00435820(undefined4 * param_1, int param_2, longlong param_3)
// callers: 3  callees: 0


void FUN_00435820(undefined4 *param_1,int param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = (undefined4 *)(param_3 + 0x18);
  puVar1 = puVar4 + *(int *)(param_3 + 0x14);
  puVar2 = param_1 + (longlong)(param_2 + -1 >> 5) + 1;
  puVar5 = param_1;
  if (puVar4 < puVar1) {
    do {
      puVar3 = puVar4 + 1;
      *puVar5 = *puVar4;
      puVar4 = puVar3;
      puVar5 = puVar5 + 1;
    } while (puVar3 < puVar1);
    param_1 = (undefined4 *)
              ((longlong)param_1 + ((longlong)puVar1 + (-0x19 - param_3) & 0xfffffffffffffffcU) + 4)
    ;
  }
  for (; param_1 < puVar2; param_1 = param_1 + 1) {
    *param_1 = 0;
  }
  return;
}


