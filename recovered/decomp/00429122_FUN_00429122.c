// 00429122  undefined FUN_00429122(longlong param_1, int param_2, int param_3, int param_4, int param_5, undefined4 param_6, undefined4 param_7, undefined8 param_8)
// callers: 1  callees: 2


void FUN_00429122(longlong param_1,int param_2,int param_3,int param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    GdipDeleteBrush(*(undefined8 *)(param_1 + 0x70));
  }
  _local_48 = CONCAT44((float)(longlong)param_3 * *(float *)(param_1 + 0xd0),
                       (float)(longlong)param_2 * *(float *)(param_1 + 0xcc));
  _local_50 = CONCAT44((float)(longlong)param_5 * *(float *)(param_1 + 0xd0),
                       (float)(longlong)param_4 * *(float *)(param_1 + 0xcc));
  GdipCreateLineBrush(&local_48,&local_50,param_6,param_7,param_8,param_1 + 0x70);
  return;
}


