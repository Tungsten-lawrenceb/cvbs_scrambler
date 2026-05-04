// 004201b0  ATOM FUN_004201b0(longlong param_1, HINSTANCE param_2, WNDPROC param_3)
// callers: 1  callees: 16


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ATOM FUN_004201b0(longlong param_1,HINSTANCE param_2,WNDPROC param_3)

{
  uint uVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  WNDCLASSEXW *pWVar4;
  WNDPROC local_res18;
  undefined *local_d8;
  int local_cc;
  wchar_t *local_c8;
  wchar_t *local_c0;
  wchar_t *local_b8;
  wchar_t *local_b0;
  longlong local_a8;
  int local_a0;
  int local_9c;
  WNDCLASSEXW local_98;
  ATOM local_44;
  undefined2 local_42;
  
  local_42 = 0;
  local_44 = 0;
  pWVar4 = &local_98;
  lVar2 = 10;
  do {
    pWVar4->cbSize = 0;
    pWVar4->style = 0;
    pWVar4 = (WNDCLASSEXW *)&pWVar4->lpfnWndProc;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  if (DAT_0043e248 == 0) {
    DAT_0043e248 = 1;
    FUN_00401520((_onexit_t)&LAB_00420186);
  }
  uVar1 = FUN_0041b435(param_1);
  if (uVar1 == 0) {
    FUN_0042d370((wchar_t *)&DAT_0043e048,0x100,(byte *)s_VFBWindowClass_00436b50,0xf);
    local_c0 = FUN_0042dc70(DAT_004363d0);
    local_b8 = FUN_0042d620((wchar_t *)&DAT_0043e048,&DAT_00436950,2);
    local_c8 = FUN_0042d2c0(local_b8,local_c0);
    FUN_0042d170((undefined2 *)&DAT_0043e048,0x100,local_c8);
    FUN_0042ded0(local_c8);
    FUN_0042ded0(local_c0);
    FUN_0042ded0(local_b8);
  }
  else {
    lVar2 = FUN_0042b310((longlong *)&DAT_004363d8,1);
    if (-1 < lVar2) {
      local_9c = 0;
      lVar2 = FUN_0042b310((longlong *)&DAT_004363d8,1);
      local_a0 = (int)lVar2;
      for (; local_9c <= local_a0; local_9c = local_9c + 1) {
        if (*(HINSTANCE *)((longlong)local_9c * 8 + _DAT_004364c8) == param_2) {
          local_b0 = (wchar_t *)FUN_0041b49a(param_1);
          pwVar3 = (wchar_t *)FUN_0041b49a((longlong)local_9c * 0x18 + _DAT_004363d8);
          uVar1 = FUN_0042d200(pwVar3,local_b0);
          local_a8 = -(ulonglong)(uVar1 == 0);
        }
        else {
          local_a8 = 0;
        }
        if (local_a8 != 0) {
          return *(ATOM *)((longlong)local_9c * 2 + _DAT_004365b8);
        }
      }
    }
    pwVar3 = (wchar_t *)FUN_0041b49a(param_1);
    FUN_0042d170((undefined2 *)&DAT_0043e048,0x100,pwVar3);
  }
  local_res18 = param_3;
  if (param_3 == (WNDPROC)0x0) {
    local_res18 = (WNDPROC)&LAB_004207a5;
  }
  local_98.cbSize = 0x50;
  local_98.style = 0xb;
  local_98.lpfnWndProc = local_res18;
  local_98.cbClsExtra = 0;
  local_98.cbWndExtra = 8;
  local_98.hInstance = param_2;
  local_98.hCursor = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
  local_98.hbrBackground = (HBRUSH)0x10;
  local_98.lpszMenuName = (LPCWSTR)0x0;
  local_98.lpszClassName = (LPCWSTR)&DAT_0043e048;
  local_98.hIcon = (HICON)0x0;
  local_98.hIconSm = (HICON)0x0;
  local_44 = RegisterClassExW(&local_98);
  if (local_44 != 0) {
    uVar1 = FUN_0041b435(param_1);
    if (uVar1 != 0) {
      lVar2 = FUN_0042b310((longlong *)&DAT_004363d8,1);
      local_cc = (int)lVar2 + 1;
      FUN_0042b110((undefined8 *)&DAT_004363d8,0x18,FUN_0041b108,0x41b3ab,1);
      FUN_0042b090((undefined8 *)&DAT_004364c8,8,-1,0,1);
      FUN_0042b090((undefined8 *)&DAT_004365b8,2,-1,0,1);
      local_d8 = &DAT_0043e048;
      FUN_0041b6f5((uint *)((longlong)local_cc * 0x18 + _DAT_004363d8),(longlong *)&local_d8);
      *(HINSTANCE *)((longlong)local_cc * 8 + _DAT_004364c8) = param_2;
      *(ATOM *)((longlong)local_cc * 2 + _DAT_004365b8) = local_44;
    }
    DAT_004363d0 = DAT_004363d0 + 1;
  }
  return local_44;
}


