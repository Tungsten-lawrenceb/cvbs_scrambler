// 0041b732  undefined FUN_0041b732(uint * param_1, longlong param_2)
// callers: 3  callees: 3


void FUN_0041b732(uint *param_1,longlong param_2)

{
  wchar_t *pwVar1;
  
  if (*(longlong *)(param_1 + 2) != *(longlong *)(param_2 + 8)) {
    FUN_0041bcd0((longlong)param_1);
    pwVar1 = (wchar_t *)FUN_0041b3e3(param_2);
    FUN_0041bac0(param_1,pwVar1);
  }
  return;
}


