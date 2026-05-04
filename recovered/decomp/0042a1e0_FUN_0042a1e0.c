// 0042a1e0  undefined FUN_0042a1e0(longlong param_1, float param_2, float param_3, float param_4, float param_5)
// callers: 4  callees: 2


void FUN_0042a1e0(longlong param_1,float param_2,float param_3,float param_4,float param_5)

{
  if (*(longlong *)(param_1 + 0x80) == 0) {
    GdipCreatePath(0,param_1 + 0x80);
  }
  GdipAddPathLine(*(undefined8 *)(param_1 + 0x80),param_2 * *(float *)(param_1 + 0xcc),
                  param_3 * *(float *)(param_1 + 0xd0),param_4 * *(float *)(param_1 + 0xcc),
                  param_5 * *(float *)(param_1 + 0xd0));
  return;
}


