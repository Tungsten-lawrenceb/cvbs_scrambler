// 0042f4f0  undefined FUN_0042f4f0(int * param_1, longlong * param_2)
// callers: 1  callees: 0


void FUN_0042f4f0(int *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 4);
  if (lVar1 == 0) {
    *(longlong **)(param_1 + 2) = param_2;
  }
  else {
    *(longlong **)(lVar1 + 8) = param_2;
  }
  *param_2 = lVar1;
  param_2[1] = 0;
  *param_1 = *param_1 + 1;
  *(longlong **)(param_1 + 4) = param_2;
  return;
}


