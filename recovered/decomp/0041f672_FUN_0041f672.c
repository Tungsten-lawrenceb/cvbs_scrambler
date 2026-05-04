// 0041f672  HFONT FUN_0041f672(longlong param_1, int param_2, int param_3, LONG param_4, BYTE param_5, BYTE param_6, BYTE param_7, BYTE param_8)
// callers: 2  callees: 7


HFONT FUN_0041f672(longlong param_1,int param_2,int param_3,LONG param_4,BYTE param_5,BYTE param_6,
                  BYTE param_7,BYTE param_8)

{
  longlong lVar1;
  HDC hdc;
  wchar_t *pwVar2;
  HFONT pHVar3;
  LOGFONTW *pLVar4;
  int local_res10;
  int local_res18;
  BYTE local_b0;
  LOGFONTW local_a4;
  undefined8 local_48;
  
  local_48 = 0;
  pLVar4 = &local_a4;
  lVar1 = 0xb;
  do {
    pLVar4->lfHeight = 0;
    pLVar4->lfWidth = 0;
    pLVar4 = (LOGFONTW *)&pLVar4->lfEscapement;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  *(LONG *)pLVar4 = 0;
  if (DAT_0043e040 == 0) {
    hdc = GetDC((HWND)0x0);
    DAT_0043e040 = GetDeviceCaps(hdc,0x58);
    DAT_0043e044 = GetDeviceCaps(hdc,0x5a);
    ReleaseDC((HWND)0x0,hdc);
  }
  local_res18 = param_3;
  if (param_3 == -1) {
    local_res18 = DAT_0043e040;
  }
  local_res10 = param_2;
  if (0 < local_res18) {
    local_res10 = (int)(((longlong)param_2 * (longlong)local_res18) / (longlong)DAT_0043e044);
  }
  local_a4.lfHeight = MulDiv(local_res10,DAT_0043e044,0x48);
  local_a4.lfHeight = -local_a4.lfHeight;
  local_a4.lfWidth = 0;
  local_a4.lfEscapement = 0;
  local_a4.lfOrientation = 0;
  local_a4.lfItalic = param_5;
  local_a4.lfUnderline = param_6;
  local_a4.lfStrikeOut = param_7;
  local_a4.lfCharSet = param_8;
  local_a4.lfOutPrecision = '\x04';
  local_a4.lfClipPrecision = '\0';
  if (local_res10 < 0x18) {
    local_b0 = '\0';
  }
  else {
    local_b0 = '\x04';
  }
  local_a4.lfQuality = local_b0;
  local_a4.lfPitchAndFamily = '\0';
  local_a4.lfWeight = param_4;
  pwVar2 = (wchar_t *)FUN_0041b49a(param_1);
  FUN_0042d170(local_a4.lfFaceName,0x20,pwVar2);
  pHVar3 = CreateFontIndirectW(&local_a4);
  return pHVar3;
}


