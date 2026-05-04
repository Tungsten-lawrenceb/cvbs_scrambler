// 0042244f  HFONT FUN_0042244f(longlong param_1, longlong param_2, int param_3, LONG param_4, BYTE param_5, BYTE param_6, BYTE param_7, BYTE param_8)
// callers: 1  callees: 8


HFONT FUN_0042244f(longlong param_1,longlong param_2,int param_3,LONG param_4,BYTE param_5,
                  BYTE param_6,BYTE param_7,BYTE param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int nNumerator;
  longlong lVar4;
  wchar_t *pwVar5;
  HDC hdc;
  HFONT pHVar6;
  LOGFONTW *pLVar7;
  wchar_t local_108 [50];
  LOGFONTW local_a4;
  undefined8 local_48;
  
  local_48 = 0;
  pLVar7 = &local_a4;
  lVar4 = 0xb;
  do {
    pLVar7->lfHeight = 0;
    pLVar7->lfWidth = 0;
    pLVar7 = (LOGFONTW *)&pLVar7->lfEscapement;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  *(LONG *)pLVar7 = 0;
  pwVar5 = local_108;
  lVar4 = 8;
  do {
    pwVar5[0] = L'\0';
    pwVar5[1] = L'\0';
    pwVar5[2] = L'\0';
    pwVar5[3] = L'\0';
    pwVar5 = pwVar5 + 4;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  uVar2 = FUN_0041b435(param_2);
  if (uVar2 == 0 || param_2 == 0) {
    FUN_0042d170(local_108,0x20,(wchar_t *)(param_1 + 0x23c));
  }
  else {
    pwVar5 = (wchar_t *)FUN_0041b49a(param_2);
    FUN_0042d170(local_108,0x20,pwVar5);
  }
  hdc = GetDC((HWND)0x0);
  iVar1 = *(int *)(param_1 + 0x20);
  iVar3 = GetDeviceCaps(hdc,0x5a);
  nNumerator = GetDeviceCaps(hdc,0x5a);
  local_a4.lfHeight =
       MulDiv((int)(((longlong)param_3 * (longlong)iVar1) / (longlong)iVar3),nNumerator,0x48);
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
  local_a4.lfQuality = '\0';
  local_a4.lfPitchAndFamily = '\0';
  local_a4.lfWeight = param_4;
  FUN_0042d170(local_a4.lfFaceName,0x20,local_108);
  ReleaseDC((HWND)0x0,hdc);
  pHVar6 = CreateFontIndirectW(&local_a4);
  return pHVar6;
}


