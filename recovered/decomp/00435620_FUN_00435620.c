// 00435620  undefined8 * FUN_00435620(longlong param_1, int param_2, int param_3, undefined4 param_4, int param_5)
// callers: 2  callees: 2


undefined8 * FUN_00435620(longlong param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  char *pcVar6;
  
  if (param_3 < 10) {
    iVar5 = 0;
  }
  else {
    iVar3 = 1;
    iVar5 = 0;
    do {
      iVar3 = iVar3 * 2;
      iVar5 = iVar5 + 1;
    } while (iVar3 < (param_3 + 8) / 9);
  }
  puVar4 = (undefined8 *)FUN_00434b50(iVar5);
  *(undefined4 *)(puVar4 + 3) = param_4;
  *(undefined4 *)((longlong)puVar4 + 0x14) = 1;
  if (param_2 < 10) {
    pcVar6 = (char *)(param_1 + 9 + (longlong)param_5);
    param_2 = 9;
  }
  else {
    pcVar6 = (char *)(param_1 + 9);
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      puVar4 = FUN_00434cc0(puVar4,10,cVar2 + -0x30);
    } while (pcVar6 != (char *)(param_1 + 10 + (ulonglong)(param_2 - 10)));
    pcVar6 = (char *)(param_1 + 9) + (longlong)param_5 + 1 + (ulonglong)(param_2 - 10);
  }
  if (param_2 < param_3) {
    pcVar1 = pcVar6 + (ulonglong)(uint)((param_3 + -1) - param_2) + 1;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      puVar4 = FUN_00434cc0(puVar4,10,cVar2 + -0x30);
    } while (pcVar1 != pcVar6);
  }
  return puVar4;
}


