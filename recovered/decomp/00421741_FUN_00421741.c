// 00421741  longlong FUN_00421741(longlong * param_1, HWND param_2, longlong param_3, WNDPROC param_4, int param_5, int param_6, int param_7, int param_8, DWORD param_9, DWORD param_10)
// callers: 1  callees: 9


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_00421741(longlong *param_1,HWND param_2,longlong param_3,WNDPROC param_4,int param_5,
                     int param_6,int param_7,int param_8,DWORD param_9,DWORD param_10)

{
  ATOM AVar1;
  int nHeight;
  int nWidth;
  int Y;
  uint uVar2;
  HFONT pHVar3;
  LPCWSTR lpWindowName;
  HWND pHVar4;
  undefined1 auVar5 [16];
  uint local_90 [6];
  longlong *local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  uint local_60 [6];
  longlong local_48;
  
  local_48 = 0;
  if (*param_1 == 0) {
    local_78 = param_1;
    FUN_0041b16e(local_60,(wchar_t *)((longlong)param_1 + 0x2e));
    AVar1 = FUN_004201b0((longlong)local_60,(HINSTANCE)local_78[1],param_4);
    *(ATOM *)((longlong)param_1 + 0x2c) = AVar1;
    FUN_0041b3ab((longlong)local_60);
    if (*(short *)((longlong)param_1 + 0x2c) != 0) {
      if (param_1[2] == 0) {
        local_78 = param_1;
        FUN_0041b16e(local_90,(wchar_t *)((longlong)param_1 + 0x23c));
        pHVar3 = FUN_0042244f((longlong)param_1,(longlong)local_90,(int)local_78[0x47],400,'\0','\0'
                              ,'\0','\x01');
        param_1[2] = (longlong)pHVar3;
        FUN_0041b3ab((longlong)local_90);
      }
      if (param_8 == -0x80000000) {
        local_70 = -2.1474836e+09;
      }
      else {
        local_70 = (float)(longlong)param_8 * *(float *)(param_1 + 5);
      }
      if ((_DAT_0043e4a0 & 0x80000) == 0) {
        _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
        nHeight = (int)(longlong)ROUND(local_70);
      }
      else {
        auVar5 = roundss(ZEXT416((uint)local_70),ZEXT416((uint)local_70),4);
        nHeight = (int)(longlong)auVar5._0_4_;
      }
      if (param_7 == -0x80000000) {
        local_6c = -2.1474836e+09;
      }
      else {
        local_6c = (float)(longlong)param_7 * *(float *)((longlong)param_1 + 0x24);
      }
      if ((_DAT_0043e4a0 & 0x80000) == 0) {
        _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
        nWidth = (int)(longlong)ROUND(local_6c);
      }
      else {
        auVar5 = roundss(ZEXT416((uint)local_6c),ZEXT416((uint)local_6c),4);
        nWidth = (int)(longlong)auVar5._0_4_;
      }
      if (param_6 == -0x80000000) {
        local_68 = -2.1474836e+09;
      }
      else {
        local_68 = (float)(longlong)param_6 * *(float *)(param_1 + 5);
      }
      if ((_DAT_0043e4a0 & 0x80000) == 0) {
        _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
        Y = (int)(longlong)ROUND(local_68);
      }
      else {
        auVar5 = roundss(ZEXT416((uint)local_68),ZEXT416((uint)local_68),4);
        Y = (int)(longlong)auVar5._0_4_;
      }
      if (param_5 == -0x80000000) {
        local_64 = -2.1474836e+09;
      }
      else {
        local_64 = (float)(longlong)param_5 * *(float *)((longlong)param_1 + 0x24);
      }
      if ((_DAT_0043e4a0 & 0x80000) == 0) {
        _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
        uVar2 = (uint)(longlong)ROUND(local_64);
      }
      else {
        auVar5 = roundss(ZEXT416((uint)local_64),ZEXT416((uint)local_64),4);
        uVar2 = (uint)(longlong)auVar5._0_4_;
      }
      local_78 = (longlong *)(ulonglong)uVar2;
      lpWindowName = (LPCWSTR)FUN_0041b471(param_3);
      pHVar4 = CreateWindowExW(param_10,(LPCWSTR)(ulonglong)*(ushort *)((longlong)param_1 + 0x2c),
                               lpWindowName,param_9,(int)local_78,Y,nWidth,nHeight,param_2,
                               (HMENU)0x0,(HINSTANCE)param_1[1],param_1);
      *param_1 = (longlong)pHVar4;
      if (*param_1 != 0) {
        GetClassNameW((HWND)*param_1,(LPWSTR)((longlong)param_1 + 0x2e),0x104);
        local_48 = *param_1;
        if (param_1[2] != 0) {
          SendMessageW((HWND)*param_1,0x30,param_1[2],0);
        }
        SetWindowLongPtrW((HWND)*param_1,0,(LONG_PTR)param_1);
      }
    }
  }
  return local_48;
}


