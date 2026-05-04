// 00430fc0  undefined FUN_00430fc0(void)
// callers: 3  callees: 3


void FUN_00430fc0(void)

{
  DWORD *pDVar1;
  DWORD DVar2;
  LPVOID pvVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004446e0);
  for (pDVar1 = DAT_004446c0; pDVar1 != (DWORD *)0x0; pDVar1 = *(DWORD **)(pDVar1 + 4)) {
    pvVar3 = TlsGetValue(*pDVar1);
    DVar2 = GetLastError();
    if ((DVar2 == 0) && (pvVar3 != (LPVOID)0x0)) {
      (**(code **)(pDVar1 + 2))(pvVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00431024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004446e0);
  return;
}


