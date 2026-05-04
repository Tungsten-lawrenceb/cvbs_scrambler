// 004301c0  undefined FUN_004301c0(void)
// callers: 3  callees: 5


void FUN_004301c0(void)

{
  _FILETIME _Var1;
  DWORD DVar2;
  DWORD DVar3;
  DWORD DVar4;
  _FILETIME local_38;
  LARGE_INTEGER local_30;
  
  local_38.dwLowDateTime = 0;
  local_38.dwHighDateTime = 0;
  if (DAT_00437f90 != 0x2b992ddfa232) {
    DAT_00437fa0 = ~DAT_00437f90;
    return;
  }
  GetSystemTimeAsFileTime(&local_38);
  _Var1 = local_38;
  DVar2 = GetCurrentProcessId();
  DVar3 = GetCurrentThreadId();
  DVar4 = GetTickCount();
  QueryPerformanceCounter(&local_30);
  DAT_00437f90 = ((ulonglong)DVar4 ^
                 (ulonglong)DVar3 ^ (ulonglong)DVar2 ^ (ulonglong)_Var1 ^ local_30.QuadPart) &
                 0xffffffffffff;
  if (DAT_00437f90 == 0x2b992ddfa232) {
    DAT_00437fa0 = 0xffffd466d2205dcc;
    DAT_00437f90 = 0x2b992ddfa233;
  }
  else {
    DAT_00437fa0 = ~DAT_00437f90;
  }
  return;
}


