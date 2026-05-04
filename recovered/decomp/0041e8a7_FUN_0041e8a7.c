// 0041e8a7  undefined FUN_0041e8a7(HWND param_1, HWND param_2)
// callers: 1  callees: 6


void FUN_0041e8a7(HWND param_1,HWND param_2)

{
  BOOL BVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  tagPOINT local_78;
  undefined8 local_70;
  int local_68;
  int iStack_64;
  tagRECT local_60;
  tagRECT local_50 [4];
  
  local_50[0].left = 0;
  local_50[0].top = 0;
  local_50[0].right = 0;
  local_50[0].bottom = 0;
  local_60.left = 0;
  local_60.top = 0;
  local_60.right = 0;
  local_60.bottom = 0;
  local_70 = 0;
  local_68 = 0;
  iStack_64 = 0;
  local_78.x = 0;
  local_78.y = 0;
  GetWindowRect(param_1,local_50);
  iVar4 = local_50[0].right - local_50[0].left;
  iVar5 = local_50[0].bottom - local_50[0].top;
  BVar1 = SystemParametersInfoW(0x30,0x10,&local_70,0);
  if (BVar1 == 0) {
    iVar2 = GetSystemMetrics(0);
    _local_68 = CONCAT44(iStack_64,iVar2);
    iVar2 = GetSystemMetrics(1);
    iStack_64 = iVar2;
  }
  if (param_2 == (HWND)0x0) {
    local_60.left = (LONG)local_70;
    local_60.top = local_70._4_4_;
    local_60.right = local_68;
    local_60.bottom = iStack_64;
  }
  else {
    GetWindowRect(param_2,&local_60);
  }
  iVar2 = local_60.left + (int)(((longlong)(local_60.right - local_60.left) - (longlong)iVar4) / 2);
  local_78.x = (int)local_70;
  if (((int)local_70 <= iVar2) &&
     (local_78.x = iVar2, (longlong)local_68 < (longlong)iVar2 + (longlong)iVar4)) {
    local_78.x = local_68 - iVar4;
  }
  local_78.y = local_60.top +
               (int)(((longlong)(local_60.bottom - local_60.top) - (longlong)iVar5) / 2);
  if (local_78.y < local_70._4_4_) {
    local_78.y = local_70._4_4_;
  }
  else if ((longlong)iStack_64 < (longlong)local_78.y + (longlong)iVar5) {
    local_78.y = iStack_64 - iVar5;
  }
  uVar3 = GetWindowLongPtrW(param_1,-0x10);
  if ((uVar3 & 0x40000000) == 0x40000000) {
    ScreenToClient(param_2,&local_78);
  }
  SetWindowPos(param_1,(HWND)0x0,local_78.x,local_78.y,0,0,5);
  return;
}


