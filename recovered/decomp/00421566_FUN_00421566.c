// 00421566  undefined FUN_00421566(longlong param_1, float param_2)
// callers: 2  callees: 3


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00421566(longlong param_1,float param_2)

{
  undefined4 uVar1;
  int iVar2;
  HDC hdc;
  undefined1 auVar3 [16];
  undefined4 local_res10;
  
  if ((_DAT_0043e4a0 & 0x80000) == 0) {
    _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
    uVar1 = (undefined4)(longlong)ROUND(param_2);
  }
  else {
    auVar3 = roundss(ZEXT416((uint)param_2),ZEXT416((uint)param_2),4);
    uVar1 = (undefined4)(longlong)auVar3._0_4_;
  }
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  hdc = GetDC((HWND)0x0);
  local_res10 = param_2;
  if (*(int *)(param_1 + 0x20) < 0) {
    iVar2 = GetDeviceCaps(hdc,0x58);
    *(int *)(param_1 + 0x20) = iVar2;
    local_res10 = (float)*(int *)(param_1 + 0x20);
  }
  if (0.0 <= local_res10) {
    *(float *)(param_1 + 0x24) = local_res10 / 96.0;
    *(float *)(param_1 + 0x28) = local_res10 / 96.0;
  }
  else {
    iVar2 = GetDeviceCaps(hdc,0x58);
    *(float *)(param_1 + 0x24) = (float)((double)(longlong)iVar2 / 96.0);
    iVar2 = GetDeviceCaps(hdc,0x5a);
    *(float *)(param_1 + 0x28) = (float)((double)(longlong)iVar2 / 96.0);
  }
  ReleaseDC((HWND)0x0,hdc);
  return;
}


