// 004106f3  HWND FUN_004106f3(undefined8 * param_1, int param_2, HWND param_3, HWND param_4, int param_5, int param_6)
// callers: 1  callees: 15


HWND FUN_004106f3(undefined8 *param_1,int param_2,HWND param_3,HWND param_4,int param_5,int param_6)

{
  BOOL BVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  HWND hWnd;
  HACCEL hAccTable;
  undefined8 *puVar5;
  int local_res10;
  HWND local_res20;
  longlong local_298;
  undefined8 local_27c;
  undefined4 auStack_274 [127];
  tagMSG local_78;
  HWND local_48;
  
  local_48 = (HWND)0x0;
  uVar3 = GetWindowLongPtrW(param_3,-0x14);
  local_res10 = param_2;
  if ((uVar3 & 0x40) == 0x40) {
    local_res10 = 0;
  }
  uVar3 = GetWindowLongPtrW(param_3,-0x14);
  if (param_5 == 1 && (uVar3 & 0x8000000) == 0x8000000) {
    param_5 = 4;
  }
  local_res20 = param_4;
  if (local_res10 == -1) {
    while (uVar3 = GetWindowLongPtrW(local_res20,-0x10), (uVar3 & 0x40000000) != 0) {
      local_res20 = GetParent(local_res20);
      BVar1 = IsWindow(local_res20);
      if ((BVar1 == 0) || (uVar3 = GetWindowLongPtrW(local_res20,-0x14), (uVar3 & 0x40) != 0))
      break;
    }
    BVar1 = IsWindow(local_res20);
    if (BVar1 != 0) {
      EnableWindow(local_res20,0);
    }
    ShowWindow(param_3,param_5);
    UpdateWindow(param_3);
    local_78.hwnd = (HWND)0x0;
    local_78.message = 0;
    local_78._12_4_ = 0;
    local_78.wParam = 0;
    local_78.lParam = 0;
    local_78.time = 0;
    local_78.pt.x = 0;
    local_78.pt.y = 0;
    local_78._44_4_ = 0;
    puVar5 = &local_27c;
    lVar4 = 0x20;
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    *(undefined4 *)puVar5 = 0;
    hWnd = (HWND)FUN_00421c1c(param_1);
LAB_0041089a:
    do {
      BVar1 = GetMessageW(&local_78,(HWND)0x0,0,0);
      if (BVar1 == 0) break;
      iVar2 = FUN_0041afe2();
      if (iVar2 == 0) {
        hAccTable = (HACCEL)FUN_00424cc0((longlong)param_1);
        if (hAccTable == (HACCEL)0x0) {
          local_298 = -1;
        }
        else {
          iVar2 = TranslateAcceleratorW(hWnd,hAccTable,&local_78);
          local_298 = -(ulonglong)(iVar2 == 0);
        }
        if (local_298 != 0) {
          if ((param_6 == -1) && (BVar1 = TranslateMDISysAccel(hWnd,&local_78), BVar1 != 0))
          goto LAB_0041089a;
          BVar1 = IsDialogMessageW(hWnd,&local_78);
          if (BVar1 == 0) {
            TranslateMessage(&local_78);
            DispatchMessageW(&local_78);
          }
        }
      }
      BVar1 = IsWindow(param_3);
    } while (BVar1 != 0);
    local_48 = DAT_0043e360;
    DAT_0043e360 = (HWND)0x0;
  }
  else {
    ShowWindow(param_3,param_5);
    local_48 = param_3;
  }
  return local_48;
}


