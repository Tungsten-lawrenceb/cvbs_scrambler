// 00428a75  undefined FUN_00428a75(longlong param_1, longlong param_2, int param_3, char param_4, BYTE param_5, BYTE param_6, BYTE param_7)
// callers: 1  callees: 6


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00428a75(longlong param_1,longlong param_2,int param_3,char param_4,BYTE param_5,
                 BYTE param_6,BYTE param_7)

{
  BYTE BVar1;
  wchar_t *pwVar2;
  HFONT pHVar3;
  float fVar4;
  undefined1 auVar5 [16];
  uint local_68 [6];
  LONG local_50;
  int local_4c;
  HGDIOBJ local_48;
  
  BVar1 = DAT_004366b0;
  local_48 = (HGDIOBJ)0x0;
  fVar4 = *(float *)(param_1 + 0xcc) * 96.0;
  if ((_DAT_0043e4a0 & 0x80000) == 0) {
    _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
    local_4c = (int)(longlong)ROUND(fVar4);
  }
  else {
    auVar5 = roundss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4),4);
    local_4c = (int)(longlong)auVar5._0_4_;
  }
  if (param_4 == '\0') {
    local_50 = 400;
  }
  else {
    local_50 = 700;
  }
  pwVar2 = (wchar_t *)FUN_0041b40c(param_2);
  FUN_0041b16e(local_68,pwVar2);
  pHVar3 = FUN_0041f672((longlong)local_68,param_3,local_4c,local_50,param_5,param_6,param_7,BVar1);
  *(HFONT *)(param_1 + 0x50) = pHVar3;
  FUN_0041b3ab((longlong)local_68);
  local_48 = SelectObject(*(HDC *)(param_1 + 0x90),*(HGDIOBJ *)(param_1 + 0x50));
  DeleteObject(local_48);
  return;
}


