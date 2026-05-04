// 0042ee50  undefined FUN_0042ee50(int * param_1, int * param_2)
// callers: 1  callees: 1


void FUN_0042ee50(int *param_1,int *param_2)

{
  if (DAT_004451c0 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0042ee63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_004451c0)();
    return;
  }
  FUN_0042eeb0(param_1,param_2);
  return;
}


