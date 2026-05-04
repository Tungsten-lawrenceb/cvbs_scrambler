// 0042810d  undefined FUN_0042810d(LPPAINTSTRUCT param_1, HWND param_2, COLORREF param_3, int param_4, int param_5, int param_6, int param_7, int param_8, int param_9)
// callers: 1  callees: 22


void FUN_0042810d(LPPAINTSTRUCT param_1,HWND param_2,COLORREF param_3,int param_4,int param_5,
                 int param_6,int param_7,int param_8,int param_9)

{
  BOOL BVar1;
  int iVar2;
  longlong lVar3;
  HDC pHVar4;
  HBITMAP pHVar5;
  HGDIOBJ pvVar6;
  LPPAINTSTRUCT ptVar7;
  uint local_80 [6];
  char local_68 [24];
  tagRECT local_50;
  
  lVar3 = 9;
  ptVar7 = param_1;
  do {
    ptVar7->hdc = (HDC)0x0;
    ptVar7 = (LPPAINTSTRUCT)&ptVar7->fErase;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  param_1[1].hdc = (HDC)0x0;
  param_1[1].fErase = 0;
  param_1[1].rcPaint.left = 0;
  param_1[1].rcPaint.top = 0;
  param_1[1].rcPaint.right = 0;
  *(undefined8 *)&param_1[1].rcPaint.bottom = 0;
  param_1[1].fIncUpdate = 0;
  param_1[1].rgbReserved[0] = '\0';
  param_1[1].rgbReserved[1] = '\0';
  param_1[1].rgbReserved[2] = '\0';
  param_1[1].rgbReserved[3] = '\0';
  param_1[1].rgbReserved[4] = '\0';
  param_1[1].rgbReserved[5] = '\0';
  param_1[1].rgbReserved[6] = '\0';
  param_1[1].rgbReserved[7] = '\0';
  param_1[1].rgbReserved[8] = '\0';
  param_1[1].rgbReserved[9] = '\0';
  param_1[1].rgbReserved[10] = '\0';
  param_1[1].rgbReserved[0xb] = '\0';
  param_1[1].rgbReserved[0xc] = '\0';
  param_1[1].rgbReserved[0xd] = '\0';
  param_1[1].rgbReserved[0xe] = '\0';
  param_1[1].rgbReserved[0xf] = '\0';
  param_1[1].rgbReserved[0x10] = '\0';
  param_1[1].rgbReserved[0x11] = '\0';
  param_1[1].rgbReserved[0x12] = '\0';
  param_1[1].rgbReserved[0x13] = '\0';
  param_1[1].rgbReserved[0x14] = '\0';
  param_1[1].rgbReserved[0x15] = '\0';
  param_1[1].rgbReserved[0x16] = '\0';
  param_1[1].rgbReserved[0x17] = '\0';
  param_1[1].rgbReserved[0x18] = '\0';
  param_1[1].rgbReserved[0x19] = '\0';
  param_1[1].rgbReserved[0x1a] = '\0';
  param_1[1].rgbReserved[0x1b] = '\0';
  *(undefined8 *)(param_1[1].rgbReserved + 0x1c) = 0;
  param_1[2].hdc = (HDC)0x0;
  param_1[2].fErase = 0;
  param_1[2].rcPaint.left = 0;
  param_1[2].rcPaint.top = 0;
  param_1[2].rcPaint.right = 0;
  *(undefined8 *)&param_1[2].rcPaint.bottom = 0;
  param_1[2].fIncUpdate = 0;
  param_1[2].rgbReserved[0] = '\0';
  param_1[2].rgbReserved[1] = '\0';
  param_1[2].rgbReserved[2] = '\0';
  param_1[2].rgbReserved[3] = '\0';
  param_1[2].rgbReserved[4] = '\0';
  param_1[2].rgbReserved[5] = '\0';
  param_1[2].rgbReserved[6] = '\0';
  param_1[2].rgbReserved[7] = '\0';
  param_1[2].rgbReserved[8] = '\0';
  param_1[2].rgbReserved[9] = '\0';
  param_1[2].rgbReserved[10] = '\0';
  param_1[2].rgbReserved[0xb] = '\0';
  param_1[2].rgbReserved[0xc] = '\0';
  param_1[2].rgbReserved[0xd] = '\0';
  param_1[2].rgbReserved[0xe] = '\0';
  param_1[2].rgbReserved[0xf] = '\0';
  param_1[2].rgbReserved[0x10] = '\0';
  param_1[2].rgbReserved[0x11] = '\0';
  param_1[2].rgbReserved[0x12] = '\0';
  param_1[2].rgbReserved[0x13] = '\0';
  param_1[2].rgbReserved[0x14] = '\0';
  param_1[2].rgbReserved[0x15] = '\0';
  param_1[2].rgbReserved[0x16] = '\0';
  param_1[2].rgbReserved[0x17] = '\0';
  param_1[2].rgbReserved[0x18] = '\0';
  param_1[2].rgbReserved[0x19] = '\0';
  param_1[2].rgbReserved[0x1a] = '\0';
  param_1[2].rgbReserved[0x1b] = '\0';
  param_1[2].rgbReserved[0x1c] = '\0';
  param_1[2].rgbReserved[0x1d] = '\0';
  param_1[2].rgbReserved[0x1e] = '\0';
  param_1[2].rgbReserved[0x1f] = '\0';
  *(undefined4 *)&param_1[2].field_0x44 = 0;
  *(undefined4 *)&param_1[3].hdc = 0;
  param_1[3].fErase = 0;
  param_1[3].rcPaint.left = 0;
  param_1[3].rcPaint.top = 0;
  param_1[3].rcPaint.right = 0;
  param_1[2].rgbReserved[0x18] = '\0';
  param_1[2].rgbReserved[0x19] = '\0';
  param_1[2].rgbReserved[0x1a] = 0x80;
  param_1[2].rgbReserved[0x1b] = '?';
  param_1[2].rgbReserved[0x1c] = '\0';
  param_1[2].rgbReserved[0x1d] = '\0';
  param_1[2].rgbReserved[0x1e] = 0x80;
  param_1[2].rgbReserved[0x1f] = '?';
  BVar1 = IsWindow(param_2);
  if (BVar1 != 0) {
    *(HWND *)&param_1[2].fIncUpdate = param_2;
    local_50.left = 0;
    local_50.top = 0;
    local_50.right = 0;
    local_50.bottom = 0;
    *(int *)(param_1[2].rgbReserved + 0x14) = param_4;
    if (param_4 == 0) {
      if (param_9 == 0) {
        pHVar4 = GetDC(param_2);
        *(HDC *)&param_1[2].rcPaint.top = pHVar4;
      }
      else {
        pHVar4 = GetWindowDC(param_2);
        *(HDC *)&param_1[2].rcPaint.top = pHVar4;
      }
    }
    else {
      pHVar4 = BeginPaint(param_2,param_1);
      *(HDC *)&param_1[2].rcPaint.top = pHVar4;
    }
    *(int *)(param_1[2].rgbReserved + 0xc) = param_5;
    *(int *)(param_1[2].rgbReserved + 0x10) = param_6;
    if (param_8 < 1 || param_7 < 1) {
      if (param_9 == 0) {
        GetClientRect(param_2,&local_50);
      }
      else {
        GetWindowRect(param_2,&local_50);
      }
      *(LONG *)(param_1[2].rgbReserved + 4) = (local_50.right - local_50.left) - param_5;
      *(LONG *)(param_1[2].rgbReserved + 8) = (local_50.bottom - local_50.top) - param_6;
    }
    else {
      *(int *)(param_1[2].rgbReserved + 4) = param_7;
      *(int *)(param_1[2].rgbReserved + 8) = param_8;
    }
    pHVar5 = CreateCompatibleBitmap
                       (*(HDC *)&param_1[2].rcPaint.top,*(int *)(param_1[2].rgbReserved + 4),
                        *(int *)(param_1[2].rgbReserved + 8));
    *(HBITMAP *)(param_1[1].rgbReserved + 0x1c) = pHVar5;
    pHVar4 = CreateCompatibleDC(*(HDC *)&param_1[2].rcPaint.top);
    param_1[2].hdc = pHVar4;
    if (param_1[2].hdc != (HDC)0x0) {
      pvVar6 = SelectObject(param_1[2].hdc,*(HGDIOBJ *)(param_1[1].rgbReserved + 0x1c));
      DeleteObject(pvVar6);
    }
    if (param_3 == 0xffffffff) {
      pHVar5 = CreateCompatibleBitmap
                         (*(HDC *)&param_1[2].rcPaint.top,*(int *)(param_1[2].rgbReserved + 4),
                          *(int *)(param_1[2].rgbReserved + 8));
      param_1[1].hdc = (HDC)pHVar5;
      if (param_1[1].hdc != (HDC)0x0) {
        pHVar4 = CreateCompatibleDC(param_1[2].hdc);
        *(HDC *)&param_1[2].fErase = pHVar4;
        pvVar6 = SelectObject(*(HDC *)&param_1[2].fErase,param_1[1].hdc);
        DeleteObject(pvVar6);
      }
      BitBlt(*(HDC *)&param_1[2].fErase,0,0,*(int *)(param_1[2].rgbReserved + 4),
             (int)*(undefined8 *)(param_1[2].rgbReserved + 8),*(HDC *)&param_1[2].rcPaint.top,
             (int)*(undefined8 *)(param_1[2].rgbReserved + 0xc),
             (int)*(undefined8 *)(param_1[2].rgbReserved + 0x10),0xcc0020);
      BitBlt(param_1[2].hdc,0,0,*(int *)(param_1[2].rgbReserved + 4),
             (int)*(undefined8 *)(param_1[2].rgbReserved + 8),*(HDC *)&param_1[2].rcPaint.top,
             (int)*(undefined8 *)(param_1[2].rgbReserved + 0xc),
             (int)*(undefined8 *)(param_1[2].rgbReserved + 0x10),0xcc0020);
    }
    else {
      FUN_004288f5((longlong)param_1,param_3);
    }
    SetBkMode(param_1[2].hdc,1);
    GdipCreateFromHDC(param_1[2].hdc,&param_1[2].rcPaint.bottom);
    GdipSetSmoothingMode(*(undefined8 *)&param_1[2].rcPaint.bottom,4);
    iVar2 = GetDeviceCaps(*(HDC *)&param_1[2].rcPaint.top,0x58);
    *(float *)(param_1[2].rgbReserved + 0x18) = (float)((double)(longlong)iVar2 / 96.0);
    iVar2 = GetDeviceCaps(*(HDC *)&param_1[2].rcPaint.top,0x5a);
    *(float *)(param_1[2].rgbReserved + 0x1c) = (float)((double)(longlong)iVar2 / 96.0);
    local_68[0] = '\0';
    local_68[1] = '\0';
    local_68[2] = '\0';
    local_68[3] = '\0';
    local_68[4] = '\0';
    local_68[5] = '\0';
    local_68[6] = '\0';
    local_68[7] = '\0';
    local_68[8] = '\0';
    local_68[9] = '\0';
    local_68[10] = '\0';
    local_68[0xb] = '\0';
    local_68[0xc] = '\0';
    local_68[0xd] = '\0';
    local_68[0xe] = '\0';
    local_68[0xf] = '\0';
    local_68[0x10] = '\0';
    local_68[0x11] = '\0';
    local_68[0x12] = '\0';
    local_68[0x13] = '\0';
    local_68[0x14] = '\0';
    local_68[0x15] = '\0';
    local_68[0x16] = '\0';
    local_68[0x17] = '\0';
    FUN_0042b830((undefined8 *)local_68,0xffffffffffffffff,s_Microsoft_YaHei_00437798,0x10,0);
    FUN_0041b1eb(local_80,local_68,DAT_004366ac);
    FUN_00428a75((longlong)param_1,(longlong)local_80,9,'\0','\0','\0','\0');
    FUN_0041b3ab((longlong)local_80);
    FUN_0042c680((undefined8 *)local_68);
  }
  FUN_00429036((longlong)param_1,1.0,0xff000000);
  return;
}


