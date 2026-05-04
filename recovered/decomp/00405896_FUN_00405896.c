// 00405896  undefined FUN_00405896(undefined8 * param_1, char param_2)
// callers: 26  callees: 2


void FUN_00405896(undefined8 *param_1,char param_2)

{
  BOOL BVar1;
  
  BVar1 = IsWindow((HWND)*param_1);
  if (BVar1 != 0) {
    EnableWindow((HWND)*param_1,(int)-(param_2 != '\0'));
  }
  return;
}


