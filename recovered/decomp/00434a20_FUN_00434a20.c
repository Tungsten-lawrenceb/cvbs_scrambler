// 00434a20  undefined FUN_00434a20(int param_1)
// callers: 5  callees: 3


/* WARNING: Removing unreachable block (ram,0x00434ae4) */
/* WARNING: Removing unreachable block (ram,0x00434ad0) */
/* WARNING: Removing unreachable block (ram,0x00434ad5) */
/* WARNING: Removing unreachable block (ram,0x00434af0) */

void FUN_00434a20(int param_1)

{
  if (DAT_004450b0 != 2) {
    if (DAT_004450b0 != 0) {
      if (DAT_004450b0 == 1) {
        do {
          Sleep(1);
        } while (DAT_004450b0 == 1);
        if (DAT_004450b0 == 2) goto LAB_00434aae;
      }
      return;
    }
    LOCK();
    DAT_004450b0 = 1;
    UNLOCK();
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_004450c0);
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_004450e8);
    FUN_00401520(FUN_00434b00);
    DAT_004450b0 = 2;
  }
LAB_00434aae:
                    /* WARNING: Could not recover jumptable at 0x00434ac6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_004450c0 + (longlong)param_1 * 0x28));
  return;
}


