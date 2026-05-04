// 0042b090  undefined FUN_0042b090(undefined8 * param_1, ulonglong param_2, int param_3, int param_4, ulonglong param_5)
// callers: 10  callees: 2


void FUN_0042b090(undefined8 *param_1,ulonglong param_2,int param_3,int param_4,ulonglong param_5)

{
  undefined *puVar1;
  
  if (param_1[1] == 0) {
    FUN_0042aca0(param_1,param_2,param_3,(undefined *)0x0,param_5,(longlong *)&stack0x00000030);
  }
  else {
    puVar1 = &LAB_0042abc0;
    if (param_4 == 0) {
      puVar1 = (undefined *)0x0;
    }
    FUN_0042ae90(param_1,param_2,param_3,(undefined *)0x0,puVar1,0,param_5,
                 (longlong *)&stack0x00000030);
  }
  return;
}


