// 00431140  undefined8 FUN_00431140(undefined8 param_1, uint param_2)
// callers: 3  callees: 5


undefined8 FUN_00431140(undefined8 param_1,uint param_2)

{
  void *pvVar1;
  void *_Memory;
  
  if (param_2 != 2) {
    if (param_2 < 3) {
      if (param_2 == 0) {
        if (DAT_004446c8 != 0) {
          FUN_00430fc0();
        }
        if (DAT_004446c8 == 1) {
          DAT_004446c8 = 1;
          _Memory = DAT_004446c0;
          while (_Memory != (void *)0x0) {
            pvVar1 = *(void **)((longlong)_Memory + 0x10);
            free(_Memory);
            _Memory = pvVar1;
          }
          DAT_004446c0 = (void *)0x0;
          DAT_004446c8 = 0;
          DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_004446e0);
        }
      }
      else {
        if (DAT_004446c8 == 0) {
          InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_004446e0);
        }
        DAT_004446c8 = 1;
      }
    }
    else if ((param_2 == 3) && (DAT_004446c8 != 0)) {
      FUN_00430fc0();
    }
    return 1;
  }
  FUN_00430570();
  return 1;
}


