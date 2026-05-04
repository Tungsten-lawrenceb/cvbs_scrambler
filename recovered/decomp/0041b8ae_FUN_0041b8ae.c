// 0041b8ae  bool FUN_0041b8ae(uint * param_1, void * param_2, uint param_3)
// callers: 3  callees: 2


bool FUN_0041b8ae(uint *param_1,void *param_2,uint param_3)

{
  longlong lVar1;
  
  if ((int)param_1[1] < 0) {
    if ((ulonglong)*param_1 < (ulonglong)param_1[4] + (ulonglong)param_3) {
      FUN_0041b77f(param_1,(param_1[4] + param_3) * 2,'\0');
    }
  }
  else if ((ulonglong)*param_1 < (ulonglong)param_1[4] + (ulonglong)param_3) {
    FUN_0041b77f(param_1,param_1[4] + param_3 + param_1[1],'\0');
  }
  lVar1 = *(longlong *)(param_1 + 2);
  if (lVar1 != 0) {
    memcpy((void *)(*(longlong *)(param_1 + 2) + (ulonglong)param_1[4]),param_2,(ulonglong)param_3);
    param_1[4] = param_1[4] + param_3;
    *(undefined1 *)(*(longlong *)(param_1 + 2) + (ulonglong)param_1[4]) = 0;
    *(undefined1 *)(*(longlong *)(param_1 + 2) + (ulonglong)param_1[4] + 1) = 0;
  }
  return lVar1 != 0;
}


