// 0042f520  undefined FUN_0042f520(int * param_1, longlong * param_2)
// callers: 1  callees: 0


void FUN_0042f520(int *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  plVar2 = (longlong *)param_2[1];
  if (lVar1 == 0) {
    *(longlong **)(param_1 + 2) = plVar2;
  }
  else {
    *(longlong **)(lVar1 + 8) = plVar2;
    plVar2 = (longlong *)param_2[1];
  }
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_1 + 4) = lVar1;
  }
  else {
    *plVar2 = lVar1;
  }
  param_2[1] = 0;
  *param_2 = 0;
  *param_1 = *param_1 + -1;
  return;
}


