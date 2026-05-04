// 00429036  undefined FUN_00429036(longlong param_1, float param_2, undefined4 param_3)
// callers: 5  callees: 2


void FUN_00429036(longlong param_1,float param_2,undefined4 param_3)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    GdipDeletePen(*(undefined8 *)(param_1 + 0x68));
  }
  if (1.0 <= param_2) {
    GdipCreatePen1(param_3,param_2 * *(float *)(param_1 + 0xcc),2,param_1 + 0x68);
  }
  else {
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  return;
}


