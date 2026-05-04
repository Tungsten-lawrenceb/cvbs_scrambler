// 0040e853  int FUN_0040e853(undefined8 * param_1, longlong param_2, longlong param_3)
// callers: 40  callees: 2


int FUN_0040e853(undefined8 *param_1,longlong param_2,longlong param_3)

{
  LPARAM lParam;
  LRESULT LVar1;
  
  lParam = FUN_0041b3e3(param_2);
  LVar1 = SendMessageW((HWND)*param_1,0x143,0,lParam);
  if (param_3 != 0) {
    SendMessageW((HWND)*param_1,0x151,(longlong)(int)LVar1,param_3);
  }
  return (int)LVar1;
}


