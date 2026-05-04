// 0042eeb0  undefined FUN_0042eeb0(int * param_1, int * param_2)
// callers: 1  callees: 2


void FUN_0042eeb0(int *param_1,int *param_2)

{
  int local_20;
  int local_1c [3];
  
  FUN_0042f0c0();
  if (((short)DAT_0044a2f8 == DAT_0044a2f8._4_2_) || (DAT_0044a2f8._2_2_ == DAT_0044a2f8._6_2_)) {
    local_1c[0] = 0x50;
    local_20 = 0x19;
  }
  else {
    FUN_0042f210((int *)0x0,(int *)0x0,local_1c,&local_20);
  }
  if (param_1 != (int *)0x0) {
    *param_1 = local_1c[0];
  }
  if (param_2 != (int *)0x0) {
    *param_2 = local_20;
  }
  return;
}


