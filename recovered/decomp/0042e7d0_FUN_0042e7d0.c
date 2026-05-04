// 0042e7d0  undefined FUN_0042e7d0(int param_1)
// callers: 1  callees: 1


void FUN_0042e7d0(int param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(&DAT_00440ce0 + (longlong)param_1 * 8);
  if (lVar1 != 0) {
    if (*(code **)(lVar1 + -8) != (code *)0x0) {
      (**(code **)(lVar1 + -8))();
    }
    free((void *)(lVar1 + -8));
    *(undefined8 *)(&DAT_00440ce0 + (longlong)param_1 * 8) = 0;
  }
  return;
}


