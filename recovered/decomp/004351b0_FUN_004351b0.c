// 004351b0  uint FUN_004351b0(longlong param_1, longlong param_2)
// callers: 3  callees: 0


uint FUN_004351b0(longlong param_1,longlong param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_2 + 0x14);
  uVar4 = *(int *)(param_1 + 0x14) - iVar1;
  if (uVar4 == 0) {
    puVar2 = (uint *)(param_1 + 0x18) + iVar1;
    puVar3 = (uint *)(param_2 + 0x18 + (longlong)iVar1 * 4);
    do {
      puVar2 = puVar2 + -1;
      puVar3 = puVar3 + -1;
      if (*puVar2 != *puVar3) {
        return -(uint)(*puVar2 < *puVar3) | 1;
      }
    } while ((uint *)(param_1 + 0x18) < puVar2);
  }
  return uVar4;
}


