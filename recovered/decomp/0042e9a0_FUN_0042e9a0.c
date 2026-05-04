// 0042e9a0  undefined FUN_0042e9a0(longlong param_1, undefined * param_2, undefined * param_3)
// callers: 1  callees: 4


void FUN_0042e9a0(longlong param_1,undefined *param_2,undefined *param_3)

{
  if (param_3 != (undefined *)0x0) {
    FUN_0042eb60(param_1,param_3);
  }
  if (param_2 != (undefined *)0x0) {
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_0042e940(param_1,param_2);
    }
    FUN_0042b380(0);
    return;
  }
  FUN_0042e900(param_1);
  FUN_0042b380(0);
  return;
}


