// 0042f570  undefined FUN_0042f570(DWORD param_1)
// callers: 1  callees: 2


void FUN_0042f570(DWORD param_1)

{
  int iVar1;
  
  if (param_1 == 0xffffffff) {
    while (iVar1 = FUN_0042fd00(), iVar1 == 0) {
      Sleep(0x32);
    }
    return;
  }
  if ((int)param_1 < 100) {
    if ((int)param_1 < 0) {
      return;
    }
  }
  else {
    do {
      iVar1 = FUN_0042fd00();
      if (iVar1 != 0) {
        return;
      }
      param_1 = param_1 - 0x32;
      Sleep(0x32);
    } while (0x32 < (int)param_1);
  }
  Sleep(param_1);
  return;
}


