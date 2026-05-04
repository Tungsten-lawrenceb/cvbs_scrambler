// 0042ee70  undefined FUN_0042ee70(void)
// callers: 1  callees: 1


void FUN_0042ee70(void)

{
  if (DAT_004451a8 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0042ee80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_004451a8)();
    return;
  }
  FUN_0042ef90();
  return;
}


