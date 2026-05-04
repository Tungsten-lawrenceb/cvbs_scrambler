// 0040c797  undefined FUN_0040c797(int * param_1, uint param_2)
// callers: 2  callees: 2


void FUN_0040c797(int *param_1,uint param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_004074f2(param_1);
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x6d0) = param_2 | 0xff000000;
    FUN_0041ed87(*(HWND *)(param_1 + 2));
  }
  return;
}


