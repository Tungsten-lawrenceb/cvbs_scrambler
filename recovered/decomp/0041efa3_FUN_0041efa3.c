// 0041efa3  bool FUN_0041efa3(void)
// callers: 3  callees: 4


bool FUN_0041efa3(void)

{
  undefined8 *puVar1;
  HMODULE hLibModule;
  FARPROC pFVar2;
  INT_PTR IVar3;
  bool local_41;
  
  local_41 = false;
  puVar1 = FUN_0042ce40(s_user32_dll_00436a50,10);
  hLibModule = FUN_0042e5c0(puVar1);
  if (hLibModule != (HMODULE)0x0) {
    puVar1 = FUN_0042ce40(s_IsProcessDPIAware_00436a78,0x11);
    pFVar2 = FUN_0042e610(hLibModule,puVar1);
    if (pFVar2 != (FARPROC)0x0) {
      IVar3 = (*pFVar2)();
      local_41 = (int)IVar3 != 0;
      FreeLibrary(hLibModule);
    }
  }
  return local_41;
}


