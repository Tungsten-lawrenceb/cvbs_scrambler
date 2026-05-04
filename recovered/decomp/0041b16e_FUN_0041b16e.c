// 0041b16e  undefined FUN_0041b16e(uint * param_1, wchar_t * param_2)
// callers: 7  callees: 2


void FUN_0041b16e(uint *param_1,wchar_t *param_2)

{
  *param_1 = 0;
  param_1[1] = 0x208;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if (param_2 == (wchar_t *)0x0) {
    FUN_0041b77f(param_1,param_1[1],'\0');
  }
  else {
    FUN_0041bac0(param_1,param_2);
  }
  return;
}


