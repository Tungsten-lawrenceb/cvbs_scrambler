// 0041dc34  undefined4 FUN_0041dc34(void)
// callers: 2  callees: 3


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0041dc34(void)

{
  longlong lVar1;
  INT_PTR IVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined8 local_174;
  uint local_16c [69];
  FARPROC local_58;
  HMODULE local_50;
  undefined4 local_44;
  
  local_44 = 0;
  local_50 = LoadLibraryW(u_NtDll_dll_00436810);
  if (local_50 != (HMODULE)0x0) {
    local_58 = (FARPROC)0x0;
    local_58 = GetProcAddress(local_50,s_RtlGetVersion_00436828);
    if (local_58 != (FARPROC)0x0) {
      puVar3 = &local_174;
      lVar1 = 0x23;
      do {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
        lVar1 = lVar1 + -1;
      } while (lVar1 != 0);
      *(undefined4 *)puVar3 = 0;
      IVar2 = (*local_58)(&local_174);
      if ((int)IVar2 == 0) {
        auVar4._0_8_ = ((double)local_174._4_4_ + (double)local_16c[0] / 100.0) * 100.0;
        auVar4._8_8_ = 0;
        if ((_DAT_0043e4a0 & 0x80000) == 0) {
          _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
          local_44 = (undefined4)(longlong)ROUND(auVar4._0_8_);
        }
        else {
          auVar4 = roundsd(auVar4,auVar4,4);
          local_44 = (undefined4)(longlong)auVar4._0_8_;
        }
      }
      FreeLibrary(local_50);
    }
  }
  return local_44;
}


