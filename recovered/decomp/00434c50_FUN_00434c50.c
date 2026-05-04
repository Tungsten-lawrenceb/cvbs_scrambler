// 00434c50  undefined FUN_00434c50(undefined8 * param_1)
// callers: 26  callees: 2


void FUN_00434c50(undefined8 *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    if (9 < *(int *)(param_1 + 1)) {
      free(param_1);
      return;
    }
    FUN_00434a20(0);
    bVar2 = DAT_004450b0 == 2;
    uVar1 = *(undefined8 *)(&DAT_00445060 + (longlong)*(int *)(param_1 + 1) * 8);
    *(undefined8 **)(&DAT_00445060 + (longlong)*(int *)(param_1 + 1) * 8) = param_1;
    *param_1 = uVar1;
    if (bVar2) {
                    /* WARNING: Could not recover jumptable at 0x00434cad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004450c0);
      return;
    }
  }
  return;
}


