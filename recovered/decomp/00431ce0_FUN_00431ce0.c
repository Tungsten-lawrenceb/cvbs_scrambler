// 00431ce0  undefined FUN_00431ce0(longlong param_1)
// callers: 1  callees: 0


void FUN_00431ce0(longlong param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0x14);
  piVar3 = (int *)(param_1 + 0x18);
  do {
    if (*piVar3 != 0) {
      *piVar3 = *piVar3 + -1;
      return;
    }
    piVar2 = piVar3 + 1;
    *piVar3 = -1;
    piVar3 = piVar2;
  } while (piVar2 < (int *)(param_1 + 0x18) + iVar1);
  return;
}


