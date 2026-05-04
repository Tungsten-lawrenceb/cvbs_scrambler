// 004288f5  undefined FUN_004288f5(longlong param_1, COLORREF param_2)
// callers: 1  callees: 5


void FUN_004288f5(longlong param_1,COLORREF param_2)

{
  HBRUSH hbr;
  tagRECT local_50 [2];
  
  if (param_2 == 0xffffffff) {
    BitBlt(*(HDC *)(param_1 + 0x90),0,0,*(int *)(param_1 + 0xb8),
           (int)*(undefined8 *)(param_1 + 0xbc),*(HDC *)(param_1 + 0x98),0,0,0xcc0020);
  }
  else {
    local_50[0].left = 0;
    local_50[0].top = 0;
    local_50[0].right = 0;
    local_50[0].bottom = 0;
    SetRect(local_50,0,0,*(int *)(param_1 + 0xb8),(int)*(undefined8 *)(param_1 + 0xbc));
    hbr = CreateSolidBrush(param_2);
    if (hbr != (HBRUSH)0x0) {
      FillRect(*(HDC *)(param_1 + 0x90),local_50,hbr);
      DeleteObject(hbr);
    }
  }
  return;
}


