// 004302a0  undefined FUN_004302a0(undefined8 param_1)
// callers: 1  callees: 8


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004302a0(undefined8 param_1)

{
  DWORD64 ControlPc;
  undefined1 *puVar1;
  DWORD64 DVar2;
  PRUNTIME_FUNCTION FunctionEntry;
  HANDLE hProcess;
  DWORD64 unaff_retaddr;
  DWORD64 local_40;
  ulonglong local_38;
  PVOID local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  RtlCaptureContext(&DAT_00443e40);
  ControlPc = DAT_00443f38;
  FunctionEntry = RtlLookupFunctionEntry(DAT_00443f38,&local_40,(PUNWIND_HISTORY_TABLE)0x0);
  puVar1 = &stack0xfffffffffffffff0;
  DVar2 = unaff_retaddr;
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    RtlVirtualUnwind(0,local_40,ControlPc,FunctionEntry,(PCONTEXT)&DAT_00443e40,&local_30,&local_38,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
    puVar1 = _DAT_00443ed8;
    DVar2 = DAT_00443f38;
  }
  DAT_00443f38 = DVar2;
  _DAT_00443ed8 = puVar1;
  _DAT_00444330 = DAT_00443f38;
  _DAT_00444320 = 0x1c0000409;
  local_28 = DAT_00437f90;
  local_20 = DAT_00437fa0;
  _DAT_00443ec0 = param_1;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_004385e0);
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0xc0000409);
                    /* WARNING: Subroutine does not return */
  abort();
}


