// 00431220  bool FUN_00431220(longlong param_1)
// callers: 9  callees: 0


bool FUN_00431220(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  
  piVar1 = (int *)(*(int *)(param_1 + 0x3c) + param_1);
  bVar2 = false;
  if (*piVar1 == 0x4550) {
    bVar2 = (short)piVar1[6] == 0x20b;
  }
  return bVar2;
}


