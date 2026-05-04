// 0042f4a0  undefined FUN_0042f4a0(int * param_1, longlong * param_2)
// callers: 2  callees: 1


void FUN_0042f4a0(int *param_1,longlong *param_2)

{
  FUN_0042f520(param_1,param_2);
  param_2[1] = *(longlong *)(param_1 + 6);
  *(longlong **)(param_1 + 6) = param_2;
  return;
}


