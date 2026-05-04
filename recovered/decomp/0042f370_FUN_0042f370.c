// 0042f370  undefined FUN_0042f370(int * param_1, int * param_2, int * param_3, int * param_4)
// callers: 1  callees: 2


void FUN_0042f370(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int local_30;
  int local_2c [3];
  
  if (DAT_00440da0 == 0) {
    FUN_0042f070();
  }
  if (((short)DAT_0044a2f8 != DAT_0044a2f8._4_2_) && (DAT_0044a2f8._2_2_ != DAT_0044a2f8._6_2_)) {
    FUN_0042f210(&local_30,local_2c,(int *)0x0,(int *)0x0);
    if (param_1 != (int *)0x0) {
      *param_1 = *param_1 - (local_30 + -1);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = *param_2 - (local_2c[0] + -1);
    }
    if (param_3 != (int *)0x0) {
      *param_3 = *param_3 - (local_30 + -1);
    }
    if (param_4 != (int *)0x0) {
      *param_4 = *param_4 - (local_2c[0] + -1);
    }
  }
  return;
}


