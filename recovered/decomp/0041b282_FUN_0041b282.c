// 0041b282  undefined FUN_0041b282(uint * param_1, longlong param_2)
// callers: 4  callees: 3


void FUN_0041b282(uint *param_1,longlong param_2)

{
  wchar_t *pwVar1;
  
  *param_1 = 0;
  param_1[1] = 0x208;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if (*(int *)(param_2 + 0x10) == 0) {
    FUN_0041b77f(param_1,param_1[1],'\0');
  }
  else {
    pwVar1 = (wchar_t *)FUN_0041b3e3(param_2);
    FUN_0041bac0(param_1,pwVar1);
  }
  return;
}


