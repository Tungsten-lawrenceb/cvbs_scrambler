// 0042ac50  undefined FUN_0042ac50(undefined8 * param_1, undefined * param_2, undefined * param_3)
// callers: 1  callees: 4


void FUN_0042ac50(undefined8 *param_1,undefined *param_2,undefined *param_3)

{
  if ((*(byte *)(param_1 + 5) & 0x20) == 0) {
    if (param_3 != (undefined *)0x0) {
      FUN_0042eb60((longlong)param_1,param_3);
    }
    FUN_0042ac00(param_1);
    FUN_0042b380(0);
    return;
  }
  FUN_0042e9a0((longlong)param_1,param_2,param_3);
  FUN_0042b380(0);
  return;
}


