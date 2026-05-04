// 00421159  undefined FUN_00421159(undefined8 * param_1, longlong param_2)
// callers: 1  callees: 9


void FUN_00421159(undefined8 *param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  HMODULE pHVar5;
  size_t sVar6;
  undefined8 *puVar7;
  INITCOMMONCONTROLSEX local_48 [8];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0x60;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x2c) = 0;
  puVar7 = (undefined8 *)((longlong)param_1 + 0x2e);
  lVar3 = 0x41;
  do {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(undefined4 *)(param_1 + 0x47) = 0;
  puVar7 = (undefined8 *)((longlong)param_1 + 0x23c);
  lVar3 = 8;
  do {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  puVar7 = param_1 + 0x50;
  lVar3 = 100;
  do {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 6;
  param_1[0xb8] = 1;
  param_1[0xb9] = 0x11;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  pwVar4 = (wchar_t *)FUN_0041b49a(param_2);
  FUN_0042d170((undefined2 *)((longlong)param_1 + 0x2e),0x104,pwVar4);
  pHVar5 = GetModuleHandleW((LPCWSTR)0x0);
  param_1[1] = pHVar5;
  bVar1 = FUN_0041efa3();
  if (bVar1) {
    FUN_00421566((longlong)param_1,-1.0);
  }
  else {
    FUN_00421566((longlong)param_1,96.0);
  }
  sVar6 = FUN_0042e1e0((wchar_t *)((longlong)param_1 + 0x23c));
  if (sVar6 == 0) {
    iVar2 = FUN_0041dc34();
    bVar1 = FUN_0041efa3();
    if ((-(ulonglong)(599 < iVar2) & (longlong)(int)(char)-bVar1) == 0) {
      FUN_0042d370((wchar_t *)((longlong)param_1 + 0x23c),0x20,(byte *)s_Tahoma_00436b70,7);
    }
    else {
      FUN_0042d370((wchar_t *)((longlong)param_1 + 0x23c),0x20,(byte *)s_Segoe_UI_00436b60,9);
    }
  }
  if (*(int *)(param_1 + 0x47) == 0) {
    iVar2 = FUN_0041dc34();
    bVar1 = FUN_0041efa3();
    if ((-(ulonglong)(599 < iVar2) & (longlong)(int)(char)-bVar1) == 0) {
      *(undefined4 *)(param_1 + 0x47) = 8;
    }
    else {
      *(undefined4 *)(param_1 + 0x47) = 9;
    }
  }
  local_48[0].dwSize = 8;
  local_48[0].dwICC = 0x7fff;
  InitCommonControlsEx(local_48);
  return;
}


