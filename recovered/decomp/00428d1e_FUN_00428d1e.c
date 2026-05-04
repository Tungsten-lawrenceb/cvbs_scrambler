// 00428d1e  int FUN_00428d1e(longlong param_1, int param_2, int param_3, int param_4, int param_5, longlong param_6, UINT param_7)
// callers: 3  callees: 2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00428d1e(longlong param_1,int param_2,int param_3,int param_4,int param_5,longlong param_6,
                UINT param_7)

{
  int iVar1;
  LPCWSTR lpchText;
  float fVar2;
  undefined1 auVar3 [16];
  tagRECT local_54;
  undefined4 local_44;
  
  local_44 = 0;
  fVar2 = (float)(longlong)param_2 * *(float *)(param_1 + 0xcc);
  if ((_DAT_0043e4a0 & 0x80000) == 0) {
    _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
    local_54.left = (LONG)(longlong)ROUND(fVar2);
  }
  else {
    auVar3 = roundss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2),4);
    local_54.left = (LONG)(longlong)auVar3._0_4_;
  }
  fVar2 = (float)(longlong)param_3 * *(float *)(param_1 + 0xd0);
  if ((_DAT_0043e4a0 & 0x80000) == 0) {
    _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
    local_54.top = (LONG)(longlong)ROUND(fVar2);
  }
  else {
    auVar3 = roundss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2),4);
    local_54.top = (LONG)(longlong)auVar3._0_4_;
  }
  fVar2 = (float)((longlong)param_2 + (longlong)param_4) * *(float *)(param_1 + 0xcc);
  if ((_DAT_0043e4a0 & 0x80000) == 0) {
    _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
    local_54.right = (LONG)(longlong)ROUND(fVar2);
  }
  else {
    auVar3 = roundss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2),4);
    local_54.right = (LONG)(longlong)auVar3._0_4_;
  }
  fVar2 = (float)((longlong)param_3 + (longlong)param_5) * *(float *)(param_1 + 0xd0);
  if ((_DAT_0043e4a0 & 0x80000) == 0) {
    _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
    local_54.bottom = (LONG)(longlong)ROUND(fVar2);
  }
  else {
    auVar3 = roundss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2),4);
    local_54.bottom = (LONG)(longlong)auVar3._0_4_;
  }
  lpchText = (LPCWSTR)FUN_0041b40c(param_6);
  iVar1 = DrawTextW(*(HDC *)(param_1 + 0x90),lpchText,-1,&local_54,param_7);
  return iVar1;
}


