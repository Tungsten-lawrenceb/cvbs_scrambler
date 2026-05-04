// 00431030  undefined4 FUN_00431030(undefined4 param_1, undefined8 param_2)
// callers: 1  callees: 3


undefined4 FUN_00431030(undefined4 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = 0;
  if (DAT_004446c8 != 0) {
    puVar2 = calloc(1,0x18);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = param_1;
      *(undefined8 *)(puVar2 + 2) = param_2;
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004446e0);
      *(undefined4 **)(puVar2 + 4) = DAT_004446c0;
      DAT_004446c0 = puVar2;
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004446e0);
      return 0;
    }
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


