// 0042e870  undefined FUN_0042e870(void)
// callers: 1  callees: 1


void FUN_0042e870(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_0042e770(5,0x18,0);
  plVar1[2] = 0;
  *plVar1 = (longlong)(plVar1 + 1);
  plVar1[1] = 0;
  *(undefined4 *)(plVar1 + 2) = 1;
  return;
}


