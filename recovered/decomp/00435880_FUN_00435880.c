// 00435880  undefined4 FUN_00435880(longlong param_1, uint param_2)
// callers: 10  callees: 0


undefined4 FUN_00435880(longlong param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  sbyte sVar5;
  int iVar6;
  
  puVar1 = (uint *)(param_1 + 0x18);
  iVar3 = *(int *)(param_1 + 0x14);
  iVar6 = (int)param_2 >> 5;
  if (iVar3 < iVar6) {
    puVar4 = puVar1 + iVar3;
  }
  else {
    puVar4 = puVar1 + iVar6;
    if (((iVar6 < iVar3) && ((param_2 & 0x1f) != 0)) &&
       (sVar5 = (sbyte)(param_2 & 0x1f), *puVar4 != (*puVar4 >> sVar5) << sVar5)) {
      return 1;
    }
  }
  do {
    if (puVar4 <= puVar1) {
      return 0;
    }
    puVar2 = puVar4 + -1;
    puVar4 = puVar4 + -1;
  } while (*puVar2 == 0);
  return 1;
}


