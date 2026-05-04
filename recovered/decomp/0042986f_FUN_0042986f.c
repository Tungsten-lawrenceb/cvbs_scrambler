// 0042986f  undefined FUN_0042986f(longlong param_1, longlong * param_2, undefined4 param_3)
// callers: 1  callees: 5


void FUN_0042986f(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 uStackX_1c;
  undefined8 uVar2;
  longlong local_90 [9];
  int local_48;
  int local_44;
  
  local_44 = 0;
  local_48 = 0;
  lVar1 = FUN_0042b310(param_2,1);
  local_48 = (int)lVar1;
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
  local_90[3] = 8;
  local_90[4] = 1;
  local_90[5] = 0x11;
  local_90[6] = 0;
  local_90[7] = 0;
  local_90[8] = 0;
  lVar1 = (longlong)local_48;
  uVar2 = 0;
  FUN_0042ae20(local_90,8,-1,0,1);
  for (local_44 = 0; local_44 <= local_48; local_44 = local_44 + 1) {
    *(float *)((longlong)local_44 * 8 + local_90[0]) =
         *(float *)((longlong)local_44 * 8 + *param_2) * *(float *)(param_1 + 0xcc);
    *(float *)((longlong)local_44 * 8 + local_90[0] + 4) =
         *(float *)((longlong)local_44 * 8 + *param_2 + 4) * *(float *)(param_1 + 0xd0);
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    GdipFillPolygon(*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0x70),local_90[0],
                    local_48 + 1,CONCAT44(uStackX_1c,param_3),uVar2,lVar1);
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    GdipDrawPolygon(*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0x68),local_90[0],
                    local_48 + 1);
  }
  FUN_0042ac00(local_90);
  return;
}


