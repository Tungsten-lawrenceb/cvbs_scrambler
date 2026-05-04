// 0042c350  undefined8 FUN_0042c350(undefined8 * param_1)
// callers: 2  callees: 1


undefined8 FUN_0042c350(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = param_1 + -2;
  if ((plVar1 < (longlong *)0x440c99) && ((longlong *)0x43e4bf < plVar1)) {
    FUN_0042f4a0((int *)&DAT_00440cc0,plVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return 0;
  }
  return 0xffffffff;
}


