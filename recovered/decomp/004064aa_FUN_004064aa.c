// 004064aa  undefined FUN_004064aa(longlong * param_1, int param_2)
// callers: 6  callees: 7


void FUN_004064aa(longlong *param_1,int param_2)

{
  BOOL BVar1;
  uint uVar2;
  longlong lVar3;
  CHAR *pCVar4;
  CHAR local_24c [8];
  undefined4 auStack_244 [127];
  longlong local_48;
  
  BVar1 = IsWindow((HWND)*param_1);
  if (BVar1 != 0) {
    local_48 = FUN_00401580(*param_1);
    if (local_48 != 0) {
      *(int *)(local_48 + 0x6cc) = param_2;
      pCVar4 = local_24c;
      lVar3 = 0x20;
      do {
        pCVar4[0] = '\0';
        pCVar4[1] = '\0';
        pCVar4[2] = '\0';
        pCVar4[3] = '\0';
        pCVar4[4] = '\0';
        pCVar4[5] = '\0';
        pCVar4[6] = '\0';
        pCVar4[7] = '\0';
        pCVar4 = pCVar4 + 8;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      pCVar4[0] = '\0';
      pCVar4[1] = '\0';
      pCVar4[2] = '\0';
      pCVar4[3] = '\0';
      GetClassNameA((HWND)*param_1,local_24c,0x104);
      uVar2 = FUN_0042b910(local_24c,0x104,s_SysTreeView32_00436f50,0xe);
      if (uVar2 == 0) {
        SendMessageW((HWND)*param_1,0x111e,0,(longlong)param_2);
      }
      else {
        uVar2 = FUN_0042b910(local_24c,0x104,s_SysListView32_00436f98,0xe);
        if (uVar2 == 0) {
          SendMessageW((HWND)*param_1,0x1024,0,(longlong)param_2);
        }
      }
      InvalidateRect((HWND)*param_1,(RECT *)0x0,-1);
      UpdateWindow((HWND)*param_1);
    }
  }
  return;
}


