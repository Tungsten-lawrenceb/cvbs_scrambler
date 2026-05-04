// 0040e945  undefined FUN_0040e945(undefined8 * param_1, int param_2)
// callers: 1  callees: 1


void FUN_0040e945(undefined8 *param_1,int param_2)

{
  *(int *)(param_1 + 2) = param_2;
  SendMessageW((HWND)*param_1,0x141,(longlong)param_2,0);
  return;
}


