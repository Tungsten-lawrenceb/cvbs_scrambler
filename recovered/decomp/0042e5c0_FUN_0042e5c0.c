// 0042e5c0  HMODULE FUN_0042e5c0(undefined8 * param_1)
// callers: 1  callees: 2


HMODULE FUN_0042e5c0(undefined8 *param_1)

{
  HMODULE pHVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    pHVar1 = (HMODULE)0x0;
  }
  else {
    pHVar1 = (HMODULE)0x0;
    if ((LPCSTR)*param_1 != (LPCSTR)0x0) {
      pHVar1 = LoadLibraryA((LPCSTR)*param_1);
    }
  }
  thunk_FUN_0042c5b0(param_1);
  return pHVar1;
}


