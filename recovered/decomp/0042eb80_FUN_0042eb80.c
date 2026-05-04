// 0042eb80  undefined FUN_0042eb80(undefined8 * param_1)
// callers: 1  callees: 2


void FUN_0042eb80(undefined8 *param_1)

{
  FUN_0042abe0((longlong)param_1);
  if ((param_1 != (undefined8 *)0x0) && ((*(byte *)(param_1 + 5) & 0x20) == 0)) {
    FUN_0042ac00(param_1);
    return;
  }
  return;
}


