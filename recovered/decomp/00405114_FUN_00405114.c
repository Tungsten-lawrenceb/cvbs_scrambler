// 00405114  undefined FUN_00405114(longlong param_1, int param_2)
// callers: 1  callees: 2


void FUN_00405114(longlong param_1,int param_2)

{
  longlong lVar1;
  HCURSOR pHVar2;
  
  lVar1 = FUN_00401580(*(longlong *)(param_1 + 8));
  if (lVar1 != 0) {
    *(int *)(lVar1 + 0x6c8) = param_2;
    if (param_2 == 0) {
      *(undefined8 *)(lVar1 + 0x738) = 0;
    }
    else if (param_2 == 1) {
      pHVar2 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f8a);
      *(HCURSOR *)(lVar1 + 0x738) = pHVar2;
    }
    else if (param_2 == 2) {
      pHVar2 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
      *(HCURSOR *)(lVar1 + 0x738) = pHVar2;
    }
    else if (param_2 == 3) {
      pHVar2 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f03);
      *(HCURSOR *)(lVar1 + 0x738) = pHVar2;
    }
    else if (param_2 == 4) {
      pHVar2 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f8b);
      *(HCURSOR *)(lVar1 + 0x738) = pHVar2;
    }
    else if (param_2 == 5) {
      pHVar2 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f01);
      *(HCURSOR *)(lVar1 + 0x738) = pHVar2;
    }
    else if (param_2 == 6) {
      pHVar2 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f88);
      *(HCURSOR *)(lVar1 + 0x738) = pHVar2;
    }
    else if (param_2 == 7) {
      pHVar2 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f86);
      *(HCURSOR *)(lVar1 + 0x738) = pHVar2;
    }
    else if (param_2 == 8) {
      pHVar2 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f83);
      *(HCURSOR *)(lVar1 + 0x738) = pHVar2;
    }
    else if (param_2 == 9) {
      pHVar2 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f85);
      *(HCURSOR *)(lVar1 + 0x738) = pHVar2;
    }
    else if (param_2 == 10) {
      pHVar2 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f82);
      *(HCURSOR *)(lVar1 + 0x738) = pHVar2;
    }
    else if (param_2 == 0xb) {
      pHVar2 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f84);
      *(HCURSOR *)(lVar1 + 0x738) = pHVar2;
    }
    else if (param_2 == 0xc) {
      pHVar2 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f04);
      *(HCURSOR *)(lVar1 + 0x738) = pHVar2;
    }
    else if (param_2 == 0xd) {
      pHVar2 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f02);
      *(HCURSOR *)(lVar1 + 0x738) = pHVar2;
    }
    else if (param_2 == 0xe) {
      pHVar2 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f89);
      *(HCURSOR *)(lVar1 + 0x738) = pHVar2;
    }
    else {
      *(undefined8 *)(lVar1 + 0x738) = 0;
    }
  }
  return;
}


