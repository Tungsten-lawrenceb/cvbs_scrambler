// 004054a4  undefined FUN_004054a4(longlong param_1, COLORREF param_2)
// callers: 1  callees: 7


void FUN_004054a4(longlong param_1,COLORREF param_2)

{
  BOOL BVar1;
  longlong lVar2;
  longlong *plVar3;
  ULONG_PTR UVar4;
  HGDIOBJ ho;
  HBRUSH pHVar5;
  
  BVar1 = IsWindow(*(HWND *)(param_1 + 8));
  if (BVar1 != 0) {
    lVar2 = FUN_00401580(*(longlong *)(param_1 + 8));
    if (lVar2 != 0) {
      *(COLORREF *)(lVar2 + 0x6d0) = param_2;
      plVar3 = (longlong *)FUN_00424e7a(*(HWND *)(param_1 + 8));
      if (plVar3 != (longlong *)0x0) {
        UVar4 = FUN_00421c7d(plVar3);
        if (UVar4 != 0) {
          ho = (HGDIOBJ)FUN_00421c7d(plVar3);
          DeleteObject(ho);
        }
        pHVar5 = CreateSolidBrush(param_2);
        FUN_00421cbe(plVar3,(LONG_PTR)pHVar5);
      }
    }
  }
  return;
}


