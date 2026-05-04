// 0042c5b0  undefined8 FUN_0042c5b0(undefined8 * param_1)
// callers: 12  callees: 2


undefined8 FUN_0042c5b0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    if ((longlong)param_1[1] < 0) {
      FUN_0042c680(param_1);
    }
    plVar1 = param_1 + -2;
    if ((plVar1 < &DAT_0043e4c0) || (&DAT_00440c98 < plVar1)) {
      uVar2 = 0xffffffff;
    }
    else {
      FUN_0042f4a0((int *)&DAT_00440cc0,plVar1);
      *param_1 = 0;
      uVar2 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    return uVar2;
  }
  return 0xffffffff;
}


