// 0042f210  undefined FUN_0042f210(int * param_1, int * param_2, int * param_3, int * param_4)
// callers: 2  callees: 1


void FUN_0042f210(int *param_1,int *param_2,int *param_3,int *param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_00440da0 == 0) {
    FUN_0042f070();
  }
  sVar1 = DAT_0044a2f8._2_2_;
  iVar3 = (int)(short)DAT_0044a2f8;
  iVar4 = (int)DAT_0044a2f8._4_2_;
  if ((short)DAT_0044a2f8 != DAT_0044a2f8._4_2_) {
    iVar5 = (int)DAT_0044a2f8._2_2_;
    iVar2 = (int)DAT_0044a2f8._6_2_;
    if (DAT_0044a2f8._2_2_ != DAT_0044a2f8._6_2_) {
      if (param_1 != (int *)0x0) {
        *param_1 = (int)(short)DAT_0044a2f8;
      }
      if (param_2 != (int *)0x0) {
        *param_2 = (int)sVar1;
      }
      if (param_3 != (int *)0x0) {
        *param_3 = (iVar4 - iVar3) + 1;
      }
      if (param_4 == (int *)0x0) {
        return;
      }
      *param_4 = (iVar2 - iVar5) + 1;
      return;
    }
  }
  if (param_1 != (int *)0x0) {
    *param_1 = 0;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  if (param_4 == (int *)0x0) {
    return;
  }
  *param_4 = 0;
  return;
}


