// 00434b00  undefined FUN_00434b00(void)
// callers: 2  callees: 1


void FUN_00434b00(void)

{
  int iVar1;
  
  iVar1 = DAT_004450b0;
  LOCK();
  DAT_004450b0 = 3;
  UNLOCK();
  if (iVar1 != 2) {
    return;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_004450c0);
                    /* WARNING: Could not recover jumptable at 0x00434b3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_004450e8);
  return;
}


