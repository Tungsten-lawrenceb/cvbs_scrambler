// 004296f0  undefined FUN_004296f0(longlong param_1, float param_2, float param_3, float param_4, float param_5)
// callers: 1  callees: 2


void FUN_004296f0(longlong param_1,float param_2,float param_3,float param_4,float param_5)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    GdipFillEllipse(*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0x70),
                    param_2 * *(float *)(param_1 + 0xcc),param_3 * *(float *)(param_1 + 0xd0),
                    param_4 * *(float *)(param_1 + 0xcc),param_5 * *(float *)(param_1 + 0xd0));
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    GdipDrawEllipse(*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0x68),
                    param_2 * *(float *)(param_1 + 0xcc),param_3 * *(float *)(param_1 + 0xd0),
                    param_4 * *(float *)(param_1 + 0xcc),param_5 * *(float *)(param_1 + 0xd0));
  }
  return;
}


