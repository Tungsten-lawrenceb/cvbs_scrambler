// 0042ee90  undefined FUN_0042ee90(DWORD param_1)
// callers: 1  callees: 1


void FUN_0042ee90(DWORD param_1)

{
  if (DAT_00445228 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0042eea3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00445228)();
    return;
  }
  FUN_0042f570(param_1);
  return;
}


