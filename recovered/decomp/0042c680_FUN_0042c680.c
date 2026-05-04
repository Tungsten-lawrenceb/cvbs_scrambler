// 0042c680  undefined FUN_0042c680(undefined8 * param_1)
// callers: 147  callees: 1


void FUN_0042c680(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if ((void *)*param_1 != (void *)0x0) {
      free((void *)*param_1);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    return;
  }
  return;
}


