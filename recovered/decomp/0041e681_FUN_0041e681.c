// 0041e681  bool FUN_0041e681(HWND param_1, longlong param_2)
// callers: 3  callees: 2


bool FUN_0041e681(HWND param_1,longlong param_2)

{
  LPARAM lParam;
  LRESULT LVar1;
  
  lParam = FUN_0041b3e3(param_2);
  LVar1 = SendMessageW(param_1,0xc,0,lParam);
  return LVar1 != 0;
}


