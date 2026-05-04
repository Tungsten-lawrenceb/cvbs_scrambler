// 0042e610  FARPROC FUN_0042e610(HMODULE param_1, undefined8 * param_2)
// callers: 1  callees: 5


/* WARNING: Restarted to delay deadcode elimination for space: register */

FARPROC FUN_0042e610(HMODULE param_1,undefined8 *param_2)

{
  FARPROC pFVar1;
  char *pcVar2;
  char *_Str;
  int iVar3;
  CHAR local_440 [1023];
  undefined1 local_41;
  
  if (param_1 == (HMODULE)0x0) {
    param_1 = GetModuleHandleA((LPCSTR)0x0);
  }
  if ((param_2 != (undefined8 *)0x0) && ((LPCSTR)*param_2 != (LPCSTR)0x0)) {
    pFVar1 = GetProcAddress(param_1,(LPCSTR)*param_2);
    if (pFVar1 != (FARPROC)0x0) goto LAB_0042e65b;
    _Str = (char *)*param_2;
    pcVar2 = strchr(_Str,0x40);
    if (pcVar2 == (char *)0x0) {
      local_41 = 0;
      iVar3 = 0;
      while( true ) {
        _snprintf(local_440,0x3ff,"%s@%d",_Str);
        pFVar1 = GetProcAddress(param_1,local_440);
        if (pFVar1 != (FARPROC)0x0) break;
        if (iVar3 == 0xfc) goto LAB_0042e680;
        _Str = (char *)*param_2;
        iVar3 = iVar3 + 4;
      }
      goto LAB_0042e65b;
    }
  }
LAB_0042e680:
  pFVar1 = (FARPROC)0x0;
LAB_0042e65b:
  thunk_FUN_0042c5b0(param_2);
  return pFVar1;
}


