// 0042f470  longlong * FUN_0042f470(int * param_1)
// callers: 1  callees: 1


longlong * FUN_0042f470(int *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 6);
  if (plVar1 != (longlong *)0x0) {
    *(longlong *)(param_1 + 6) = plVar1[1];
    FUN_0042f4f0(param_1,plVar1);
  }
  return plVar1;
}


