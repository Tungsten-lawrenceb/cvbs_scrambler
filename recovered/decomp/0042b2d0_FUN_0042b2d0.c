// 0042b2d0  undefined FUN_0042b2d0(undefined8 * param_1)
// callers: 1  callees: 1


void FUN_0042b2d0(undefined8 *param_1)

{
  param_1[5] = param_1[5] & 0x3f;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  memset(param_1 + 6,0,param_1[4] * 0x18);
  return;
}


