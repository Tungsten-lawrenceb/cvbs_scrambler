// 00401f6e  undefined FUN_00401f6e(PAINTSTRUCT * param_1)
// callers: 1  callees: 12


void FUN_00401f6e(PAINTSTRUCT *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  BOOL BVar8;
  
  FUN_0042886a((longlong)param_1);
  BVar8 = IsWindow(*(HWND *)&param_1[2].fIncUpdate);
  if (BVar8 != 0) {
    if (*(int *)(param_1[2].rgbReserved + 0x14) == 0) {
      ReleaseDC(*(HWND *)&param_1[2].fIncUpdate,*(HDC *)&param_1[2].rcPaint.top);
    }
    else {
      EndPaint(*(HWND *)&param_1[2].fIncUpdate,param_1);
    }
  }
  if (*(longlong *)(param_1[1].rgbReserved + 0x1c) != 0) {
    DeleteObject(*(HGDIOBJ *)(param_1[1].rgbReserved + 0x1c));
    *(undefined8 *)(param_1[1].rgbReserved + 0x1c) = 0;
  }
  if (param_1[1].hdc != (HDC)0x0) {
    DeleteObject(param_1[1].hdc);
    param_1[1].hdc = (HDC)0x0;
  }
  if (param_1[2].hdc != (HDC)0x0) {
    DeleteDC(param_1[2].hdc);
    param_1[2].hdc = (HDC)0x0;
  }
  lVar1._0_4_ = param_1[2].fErase;
  lVar1._4_4_ = param_1[2].rcPaint.left;
  if (lVar1 != 0) {
    DeleteDC(*(HDC *)&param_1[2].fErase);
    param_1[2].fErase = 0;
    param_1[2].rcPaint.left = 0;
  }
  lVar2._0_4_ = param_1[1].fErase;
  lVar2._4_4_ = param_1[1].rcPaint.left;
  if (lVar2 != 0) {
    DeleteObject(*(HGDIOBJ *)&param_1[1].fErase);
    param_1[1].fErase = 0;
    param_1[1].rcPaint.left = 0;
  }
  lVar3._0_4_ = param_1[1].rcPaint.top;
  lVar3._4_4_ = param_1[1].rcPaint.right;
  if (lVar3 != 0) {
    DeleteObject(*(HGDIOBJ *)&param_1[1].rcPaint.top);
    param_1[1].rcPaint.top = 0;
    param_1[1].rcPaint.right = 0;
  }
  if (*(longlong *)&param_1[1].rcPaint.bottom != 0) {
    DeleteObject(*(HGDIOBJ *)&param_1[1].rcPaint.bottom);
    *(undefined8 *)&param_1[1].rcPaint.bottom = 0;
  }
  if (*(longlong *)&param_1[2].rcPaint.bottom != 0) {
    GdipDeleteGraphics(*(undefined8 *)&param_1[2].rcPaint.bottom);
    *(undefined8 *)&param_1[2].rcPaint.bottom = 0;
  }
  lVar4._0_4_ = param_1[1].fIncUpdate;
  lVar4._4_1_ = param_1[1].rgbReserved[0];
  lVar4._5_1_ = param_1[1].rgbReserved[1];
  lVar4._6_1_ = param_1[1].rgbReserved[2];
  lVar4._7_1_ = param_1[1].rgbReserved[3];
  if (lVar4 != 0) {
    uVar5._0_4_ = param_1[1].fIncUpdate;
    uVar5._4_1_ = param_1[1].rgbReserved[0];
    uVar5._5_1_ = param_1[1].rgbReserved[1];
    uVar5._6_1_ = param_1[1].rgbReserved[2];
    uVar5._7_1_ = param_1[1].rgbReserved[3];
    GdipDeletePen(uVar5);
    param_1[1].fIncUpdate = 0;
    param_1[1].rgbReserved[0] = '\0';
    param_1[1].rgbReserved[1] = '\0';
    param_1[1].rgbReserved[2] = '\0';
    param_1[1].rgbReserved[3] = '\0';
  }
  if (*(longlong *)(param_1[1].rgbReserved + 4) != 0) {
    GdipDeleteBrush(*(undefined8 *)(param_1[1].rgbReserved + 4));
    param_1[1].rgbReserved[4] = '\0';
    param_1[1].rgbReserved[5] = '\0';
    param_1[1].rgbReserved[6] = '\0';
    param_1[1].rgbReserved[7] = '\0';
    param_1[1].rgbReserved[8] = '\0';
    param_1[1].rgbReserved[9] = '\0';
    param_1[1].rgbReserved[10] = '\0';
    param_1[1].rgbReserved[0xb] = '\0';
  }
  if (*(longlong *)(param_1[1].rgbReserved + 0xc) != 0) {
    GdipDisposeImage(*(undefined8 *)(param_1[1].rgbReserved + 0xc));
    param_1[1].rgbReserved[0xc] = '\0';
    param_1[1].rgbReserved[0xd] = '\0';
    param_1[1].rgbReserved[0xe] = '\0';
    param_1[1].rgbReserved[0xf] = '\0';
    param_1[1].rgbReserved[0x10] = '\0';
    param_1[1].rgbReserved[0x11] = '\0';
    param_1[1].rgbReserved[0x12] = '\0';
    param_1[1].rgbReserved[0x13] = '\0';
  }
  if (*(longlong *)(param_1[1].rgbReserved + 0x14) != 0) {
    GdipDeletePath(*(undefined8 *)(param_1[1].rgbReserved + 0x14));
    param_1[1].rgbReserved[0x14] = '\0';
    param_1[1].rgbReserved[0x15] = '\0';
    param_1[1].rgbReserved[0x16] = '\0';
    param_1[1].rgbReserved[0x17] = '\0';
    param_1[1].rgbReserved[0x18] = '\0';
    param_1[1].rgbReserved[0x19] = '\0';
    param_1[1].rgbReserved[0x1a] = '\0';
    param_1[1].rgbReserved[0x1b] = '\0';
  }
  lVar6._0_4_ = param_1[3].fErase;
  lVar6._4_4_ = param_1[3].rcPaint.left;
  if (lVar6 != 0) {
    uVar7._0_4_ = param_1[3].fErase;
    uVar7._4_4_ = param_1[3].rcPaint.left;
    GdipDeleteFontFamily(uVar7);
    param_1[3].fErase = 0;
    param_1[3].rcPaint.left = 0;
  }
  return;
}


