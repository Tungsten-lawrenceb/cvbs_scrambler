// 00421f68  undefined8 * FUN_00421f68(undefined8 * param_1, undefined8 * param_2)
// callers: 1  callees: 1


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00421f68(undefined8 *param_1,undefined8 *param_2)

{
  LONG LVar1;
  LONG LVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  tagRECT local_50 [4];
  
  local_50[0].left = 0;
  local_50[0].top = 0;
  local_50[0].right = 0;
  local_50[0].bottom = 0;
  GetClientRect((HWND)*param_2,local_50);
  auVar3._0_8_ = (double)(longlong)local_50[0].left / (double)*(float *)((longlong)param_2 + 0x24);
  auVar3._8_8_ = 0;
  if ((_DAT_0043e4a0 & 0x80000) == 0) {
    _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
    LVar1 = (LONG)(longlong)ROUND(auVar3._0_8_);
  }
  else {
    auVar3 = roundsd(auVar3,auVar3,4);
    LVar1 = (LONG)(longlong)auVar3._0_8_;
  }
  auVar4._0_8_ = (double)(longlong)local_50[0].right / (double)*(float *)((longlong)param_2 + 0x24);
  auVar4._8_8_ = 0;
  if ((_DAT_0043e4a0 & 0x80000) == 0) {
    _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
    LVar2 = (LONG)(longlong)ROUND(auVar4._0_8_);
  }
  else {
    auVar3 = roundsd(auVar4,auVar4,4);
    LVar2 = (LONG)(longlong)auVar3._0_8_;
  }
  auVar5._0_8_ = (double)(longlong)local_50[0].top / (double)*(float *)(param_2 + 5);
  auVar5._8_8_ = 0;
  if ((_DAT_0043e4a0 & 0x80000) == 0) {
    _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
    local_50[0].top = (LONG)(longlong)ROUND(auVar5._0_8_);
  }
  else {
    auVar3 = roundsd(auVar5,auVar5,4);
    local_50[0].top = (LONG)(longlong)auVar3._0_8_;
  }
  local_50[0].left = LVar1;
  auVar6._0_8_ = (double)(longlong)local_50[0].bottom / (double)*(float *)(param_2 + 5);
  auVar6._8_8_ = 0;
  if ((_DAT_0043e4a0 & 0x80000) == 0) {
    _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
    local_50[0].bottom = (LONG)(longlong)ROUND(auVar6._0_8_);
  }
  else {
    auVar3 = roundsd(auVar6,auVar6,4);
    local_50[0].bottom = (LONG)(longlong)auVar3._0_8_;
  }
  local_50[0].right = LVar2;
  *param_1 = local_50[0]._0_8_;
  param_1[1] = local_50[0]._8_8_;
  return param_1;
}


