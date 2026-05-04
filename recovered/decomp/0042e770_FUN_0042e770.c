// 0042e770  undefined FUN_0042e770(int param_1, longlong param_2, undefined8 param_3)
// callers: 4  callees: 1


void FUN_0042e770(int param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(&DAT_00440ce0 + (longlong)param_1 * 8) == 0) {
    puVar1 = calloc(1,param_2 + 8);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = param_3;
      *(undefined8 **)(&DAT_00440ce0 + (longlong)param_1 * 8) = puVar1 + 1;
      return;
    }
  }
  return;
}


