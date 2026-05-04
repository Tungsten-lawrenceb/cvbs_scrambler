// 00408972  undefined FUN_00408972(int * param_1, longlong param_2)
// callers: 16  callees: 3


void FUN_00408972(int *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_004074f2(param_1);
  if (lVar1 != 0) {
    FUN_0041b732((uint *)(lVar1 + 0x40),param_2);
    FUN_0041ed87(*(HWND *)(param_1 + 2));
  }
  return;
}


