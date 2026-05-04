// 0041b1eb  undefined FUN_0041b1eb(uint * param_1, char * param_2, UINT param_3)
// callers: 94  callees: 3


void FUN_0041b1eb(uint *param_1,char *param_2,UINT param_3)

{
  size_t sVar1;
  
  *param_1 = 0;
  param_1[1] = 0x208;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  sVar1 = FUN_0042cd30(param_2,-1);
  if (sVar1 == 0) {
    FUN_0041b77f(param_1,param_1[1],'\0');
  }
  else {
    FUN_0041bb19(param_1,param_2,param_3);
  }
  return;
}


