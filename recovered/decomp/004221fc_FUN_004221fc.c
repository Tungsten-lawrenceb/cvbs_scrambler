// 004221fc  bool FUN_004221fc(longlong param_1, HWND param_2, HWND param_3, int param_4, int param_5, int param_6, int param_7, UINT param_8)
// callers: 2  callees: 1


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_004221fc(longlong param_1,HWND param_2,HWND param_3,int param_4,int param_5,int param_6,
                 int param_7,UINT param_8)

{
  int cy;
  int cx;
  int Y;
  int X;
  BOOL BVar1;
  float fVar2;
  undefined1 auVar3 [16];
  
  fVar2 = (float)(longlong)param_7 * *(float *)(param_1 + 0x28);
  if ((_DAT_0043e4a0 & 0x80000) == 0) {
    _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
    cy = (int)(longlong)ROUND(fVar2);
  }
  else {
    auVar3 = roundss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2),4);
    cy = (int)(longlong)auVar3._0_4_;
  }
  fVar2 = (float)(longlong)param_6 * *(float *)(param_1 + 0x24);
  if ((_DAT_0043e4a0 & 0x80000) == 0) {
    _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
    cx = (int)(longlong)ROUND(fVar2);
  }
  else {
    auVar3 = roundss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2),4);
    cx = (int)(longlong)auVar3._0_4_;
  }
  fVar2 = (float)(longlong)param_5 * *(float *)(param_1 + 0x28);
  if ((_DAT_0043e4a0 & 0x80000) == 0) {
    _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
    Y = (int)(longlong)ROUND(fVar2);
  }
  else {
    auVar3 = roundss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2),4);
    Y = (int)(longlong)auVar3._0_4_;
  }
  fVar2 = (float)(longlong)param_4 * *(float *)(param_1 + 0x24);
  if ((_DAT_0043e4a0 & 0x80000) == 0) {
    _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
    X = (int)(longlong)ROUND(fVar2);
  }
  else {
    auVar3 = roundss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2),4);
    X = (int)(longlong)auVar3._0_4_;
  }
  BVar1 = SetWindowPos(param_2,param_3,X,Y,cx,cy,param_8);
  return BVar1 != 0;
}


