// 0041f07e  float FUN_0041f07e(float param_1)
// callers: 6  callees: 3


float FUN_0041f07e(float param_1)

{
  int iVar1;
  HDC hdc;
  
  if (DAT_0043e030 == 0.0) {
    hdc = GetDC((HWND)0x0);
    iVar1 = GetDeviceCaps(hdc,0x58);
    DAT_0043e030 = (float)((double)(longlong)iVar1 / 96.0);
    ReleaseDC((HWND)0x0,hdc);
  }
  return param_1 * DAT_0043e030;
}


