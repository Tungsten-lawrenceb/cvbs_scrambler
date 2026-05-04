// 00404152  undefined FUN_00404152(longlong param_1, COLORREF param_2)
// callers: 1  callees: 6


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404152(longlong param_1,COLORREF param_2)

{
  int iVar1;
  bool bVar2;
  BYTE BVar3;
  BOOL BVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  BVar4 = IsWindow(*(HWND *)(param_1 + 8));
  if (BVar4 != 0) {
    lVar5 = FUN_00401580(*(longlong *)(param_1 + 8));
    if (lVar5 != 0) {
      *(COLORREF *)(lVar5 + 0x6c4) = param_2;
      iVar1 = *(int *)(lVar5 + 0x6c0);
      bVar2 = FUN_00403c4d(param_1);
      if (bVar2 || (param_2 != 0xffffffff || iVar1 != 0)) {
        FUN_0041e793(*(HWND *)(param_1 + 8),0x80000);
        if (*(int *)(lVar5 + 0x6c0) < 1 || param_2 != 0xffffffff) {
          if (param_2 != 0xffffffff) {
            if (*(int *)(lVar5 + 0x6c0) == 0) {
              SetLayeredWindowAttributes(*(HWND *)(param_1 + 8),param_2,'\0',1);
            }
            else {
              auVar7._0_8_ = (double)(100 - (longlong)*(int *)(lVar5 + 0x6c0)) * 2.55;
              auVar7._8_8_ = 0;
              if ((_DAT_0043e4a0 & 0x80000) == 0) {
                _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
                BVar3 = (BYTE)(longlong)ROUND(auVar7._0_8_);
              }
              else {
                auVar7 = roundsd(auVar7,auVar7,4);
                BVar3 = (BYTE)(longlong)auVar7._0_8_;
              }
              SetLayeredWindowAttributes(*(HWND *)(param_1 + 8),param_2,BVar3,3);
            }
          }
        }
        else {
          auVar6._0_8_ = (double)(100 - (longlong)*(int *)(lVar5 + 0x6c0)) * 2.55;
          auVar6._8_8_ = 0;
          if ((_DAT_0043e4a0 & 0x80000) == 0) {
            _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
            BVar3 = (BYTE)(longlong)ROUND(auVar6._0_8_);
          }
          else {
            auVar7 = roundsd(auVar6,auVar6,4);
            BVar3 = (BYTE)(longlong)auVar7._0_8_;
          }
          SetLayeredWindowAttributes(*(HWND *)(param_1 + 8),0,BVar3,2);
        }
      }
      else {
        FUN_0041e84a(*(HWND *)(param_1 + 8),0x80000);
      }
    }
  }
  return;
}


