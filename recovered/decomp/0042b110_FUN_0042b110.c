// 0042b110  undefined FUN_0042b110(undefined8 * param_1, ulonglong param_2, undefined * param_3, longlong param_4, ulonglong param_5)
// callers: 1  callees: 2


void FUN_0042b110(undefined8 *param_1,ulonglong param_2,undefined *param_3,longlong param_4,
                 ulonglong param_5)

{
  undefined *puVar1;
  
  if (param_1[1] != 0) {
    puVar1 = &LAB_0042eb40;
    if (param_4 == 0) {
      puVar1 = (undefined *)0x0;
    }
    FUN_0042ae90(param_1,param_2,1,param_3,puVar1,param_4,param_5,(longlong *)&stack0x00000030);
    return;
  }
  FUN_0042aca0(param_1,param_2,1,param_3,param_5,(longlong *)&stack0x00000030);
  return;
}


