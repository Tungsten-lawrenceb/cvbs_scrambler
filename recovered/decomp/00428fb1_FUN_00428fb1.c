// 00428fb1  undefined FUN_00428fb1(longlong param_1, COLORREF param_2, COLORREF param_3)
// callers: 2  callees: 3


void FUN_00428fb1(longlong param_1,COLORREF param_2,COLORREF param_3)

{
  SetTextColor(*(HDC *)(param_1 + 0x90),param_2);
  if (param_3 == 0xffffffff) {
    SetBkMode(*(HDC *)(param_1 + 0x90),1);
  }
  else {
    SetBkMode(*(HDC *)(param_1 + 0x90),2);
    SetBkColor(*(HDC *)(param_1 + 0x90),param_3);
  }
  return;
}


