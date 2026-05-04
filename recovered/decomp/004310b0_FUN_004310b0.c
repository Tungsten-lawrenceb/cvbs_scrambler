// 004310b0  undefined8 FUN_004310b0(int param_1)
// callers: 1  callees: 3


undefined8 FUN_004310b0(int param_1)

{
  int *piVar1;
  int *_Memory;
  int *piVar2;
  
  if (DAT_004446c8 == 0) {
    return 0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004446e0);
  if (DAT_004446c0 != (int *)0x0) {
    piVar1 = DAT_004446c0;
    piVar2 = (int *)0x0;
    do {
      _Memory = piVar1;
      piVar1 = *(int **)(_Memory + 4);
      if (*_Memory == param_1) {
        if (piVar2 != (int *)0x0) {
          *(int **)(piVar2 + 4) = piVar1;
          piVar1 = DAT_004446c0;
        }
        DAT_004446c0 = piVar1;
        free(_Memory);
        break;
      }
      piVar2 = _Memory;
    } while (piVar1 != (int *)0x0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004446e0);
  return 0;
}


