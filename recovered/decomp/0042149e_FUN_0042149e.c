// 0042149e  undefined FUN_0042149e(longlong param_1)
// callers: 2  callees: 7


void FUN_0042149e(longlong param_1)

{
  uint uVar1;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x10));
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    DestroyAcceleratorTable(*(HACCEL *)(param_1 + 0x18));
  }
  uVar1 = FUN_0042d200((wchar_t *)(param_1 + 0x2e),(wchar_t *)&DAT_004366b8);
  if (uVar1 != 0) {
    UnregisterClassW((LPCWSTR)(param_1 + 0x2e),*(HINSTANCE *)(param_1 + 8));
  }
  if ((*(longlong *)(param_1 + 0x5e8) != 0) && (*(longlong *)(param_1 + 0x5e8) != 0)) {
    FUN_0041ff66();
    free(*(void **)(param_1 + 0x5e8));
  }
  FUN_0042ac00((undefined8 *)(param_1 + 0x5a0));
  return;
}


