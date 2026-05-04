// 004290c5  undefined FUN_004290c5(longlong param_1, int param_2)
// callers: 4  callees: 2


void FUN_004290c5(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    GdipDeleteBrush(*(undefined8 *)(param_1 + 0x70));
  }
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  else {
    GdipCreateSolidFill(param_2,param_1 + 0x70);
  }
  return;
}


