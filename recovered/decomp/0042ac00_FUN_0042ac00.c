// 0042ac00  undefined FUN_0042ac00(undefined8 * param_1)
// callers: 9  callees: 4


void FUN_0042ac00(undefined8 *param_1)

{
  if ((void *)param_1[1] != (void *)0x0) {
    if ((*(byte *)(param_1 + 5) & 0x20) == 0) {
      free((void *)param_1[1]);
      FUN_0042b2d0(param_1);
      FUN_0042b380(0);
      return;
    }
    FUN_0042e900((longlong)param_1);
  }
  FUN_0042b380(0);
  return;
}


