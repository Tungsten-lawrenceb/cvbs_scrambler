// 00409626  undefined FUN_00409626(undefined8 * param_1, char param_2)
// callers: 2  callees: 1


void FUN_00409626(undefined8 *param_1,char param_2)

{
  if (param_2 == '\0') {
    SendMessageW((HWND)*param_1,0xf1,0,0);
  }
  else {
    SendMessageW((HWND)*param_1,0xf1,1,0);
  }
  return;
}


