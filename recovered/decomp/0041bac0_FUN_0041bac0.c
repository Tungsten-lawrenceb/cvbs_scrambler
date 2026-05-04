// 0041bac0  undefined FUN_0041bac0(uint * param_1, wchar_t * param_2)
// callers: 4  callees: 2


void FUN_0041bac0(uint *param_1,wchar_t *param_2)

{
  size_t sVar1;
  
  if (param_2 != (wchar_t *)0x0) {
    sVar1 = FUN_0042e1e0(param_2);
    if ((sVar1 & 0xffffffff) != 0) {
      FUN_0041b8ae(param_1,param_2,(int)sVar1 << 1);
    }
  }
  return;
}


