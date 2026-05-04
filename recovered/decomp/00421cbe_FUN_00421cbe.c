// 00421cbe  undefined FUN_00421cbe(longlong * param_1, LONG_PTR param_2)
// callers: 1  callees: 3


void FUN_00421cbe(longlong *param_1,LONG_PTR param_2)

{
  if (*param_1 != 0) {
    SetClassLongPtrW((HWND)*param_1,-10,param_2);
    InvalidateRect((HWND)*param_1,(RECT *)0x0,1);
    UpdateWindow((HWND)*param_1);
  }
  return;
}


