// 00434520  int FUN_00434520(longlong param_1)
// callers: 2  callees: 0


int FUN_00434520(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  
  iVar5 = 0;
  puVar4 = (uint *)(param_1 + 0x18);
  puVar1 = puVar4 + *(int *)(param_1 + 0x14);
  while( true ) {
    if (puVar1 <= puVar4) {
      return iVar5;
    }
    uVar2 = *puVar4;
    if (uVar2 != 0) break;
    puVar4 = puVar4 + 1;
    iVar5 = iVar5 + 0x20;
  }
  if (puVar1 <= puVar4) {
    return iVar5;
  }
  iVar3 = 0;
  for (; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
    iVar3 = iVar3 + 1;
  }
  return iVar5 + iVar3;
}


