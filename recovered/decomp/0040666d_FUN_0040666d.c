// 0040666d  undefined FUN_0040666d(longlong * param_1, int param_2)
// callers: 6  callees: 7


void FUN_0040666d(longlong *param_1,int param_2)

{
  BOOL BVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  CHAR *pCVar5;
  CHAR local_24c [8];
  undefined4 auStack_244 [127];
  longlong local_48;
  
  BVar1 = IsWindow((HWND)*param_1);
  if (BVar1 != 0) {
    local_48 = FUN_00401580(*param_1);
    if (local_48 != 0) {
      *(int *)(local_48 + 0x6d0) = param_2;
      pCVar5 = local_24c;
      lVar4 = 0x20;
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
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      pCVar5[0] = '\0';
      pCVar5[1] = '\0';
      pCVar5[2] = '\0';
      pCVar5[3] = '\0';
      GetClassNameA((HWND)*param_1,local_24c,0x104);
      uVar2 = FUN_0042b910(local_24c,0x104,s_SysTreeView32_00436f50,0xe);
      if (uVar2 == 0) {
        SendMessageW((HWND)*param_1,0x111d,0,(longlong)param_2);
      }
      else {
        uVar2 = FUN_0042b910(local_24c,0x104,s_SysListView32_00436f98,0xe);
        if (uVar2 == 0) {
          SendMessageW((HWND)*param_1,0x1001,0,(longlong)param_2);
        }
        else {
          uVar2 = FUN_0042b910(local_24c,0x104,s_RICHEDIT50W_00437868,0xc);
          uVar3 = FUN_0042b910(local_24c,0x104,s_RICHEDIT_00437480,9);
          if (uVar2 == 0 || uVar3 == 0) {
            SendMessageW((HWND)*param_1,0x443,0,(longlong)param_2);
          }
        }
      }
      InvalidateRect((HWND)*param_1,(RECT *)0x0,-1);
      UpdateWindow((HWND)*param_1);
    }
  }
  return;
}


