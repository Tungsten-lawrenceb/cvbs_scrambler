// 004068d2  undefined FUN_004068d2(longlong * param_1, char * param_2)
// callers: 9  callees: 8


void FUN_004068d2(longlong *param_1,char *param_2)

{
  BOOL BVar1;
  uint uVar2;
  longlong lVar3;
  LRESULT LVar4;
  WPARAM wParam;
  CHAR *pCVar5;
  int local_250;
  CHAR local_24c [8];
  undefined4 auStack_244 [127];
  longlong local_48;
  
  BVar1 = IsWindow((HWND)*param_1);
  if (BVar1 == 0) {
    return;
  }
  local_48 = FUN_00401580(*param_1);
  if (local_48 != 0) {
    FUN_0042b830((undefined8 *)(local_48 + 0x6e0),0xffffffffffffffff,param_2,-1,0);
    pCVar5 = local_24c;
    lVar3 = 0x20;
    do {
      pCVar5[0] = '\0';
      pCVar5[1] = '\0';
      pCVar5[2] = '\0';
      pCVar5[3] = '\0';
      pCVar5[4] = '\0';
      pCVar5[5] = '\0';
      pCVar5[6] = '\0';
      pCVar5[7] = '\0';
      pCVar5 = pCVar5 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    pCVar5[0] = '\0';
    pCVar5[1] = '\0';
    pCVar5[2] = '\0';
    pCVar5[3] = '\0';
    local_250 = 0;
    GetClassNameA((HWND)*param_1,local_24c,0x104);
    uVar2 = FUN_0042b910(local_24c,0x104,&DAT_00436d88,5);
    if (uVar2 == 0) {
      LVar4 = SendMessageA((HWND)*param_1,0xd4,0,0);
      local_250 = (int)LVar4;
    }
    else {
      uVar2 = FUN_0042b910(local_24c,0x104,s_ListBox_00437878,8);
      if ((uVar2 == 0) || (uVar2 = FUN_0042b910(local_24c,0x104,s_ComboBox_00437880,9), uVar2 == 0))
      {
        LVar4 = SendMessageW((HWND)*param_1,0x1a1,0,0);
        local_250 = (int)LVar4;
      }
    }
    wParam = FUN_0040fa6a(param_2);
    SendMessageW((HWND)*param_1,0x30,wParam,-1);
    uVar2 = FUN_0042b910(local_24c,0x104,&DAT_00436d88,5);
    if (uVar2 == 0) {
      SendMessageA((HWND)*param_1,0xd3,3,(longlong)local_250);
    }
    else {
      uVar2 = FUN_0042b910(local_24c,0x104,s_ListBox_00437878,8);
      if ((uVar2 != 0) && (uVar2 = FUN_0042b910(local_24c,0x104,s_ComboBox_00437880,9), uVar2 != 0))
      {
        return;
      }
      SendMessageW((HWND)*param_1,0x1a0,0,(longlong)local_250);
    }
    return;
  }
  return;
}


