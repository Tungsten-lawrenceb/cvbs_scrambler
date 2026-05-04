// 00411bef  undefined FUN_00411bef(HWND param_1, longlong param_2)
// callers: 12  callees: 2


void FUN_00411bef(HWND param_1,longlong param_2)

{
  BOOL BVar1;
  
  BVar1 = IsWindow(param_1);
  if (BVar1 != 0) {
    if (param_2 == 0) {
      SendMessageW(param_1,0xf1,0,0);
    }
    else {
      SendMessageW(param_1,0xf1,1,0);
    }
  }
  return;
}


