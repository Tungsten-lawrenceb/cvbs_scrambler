// 0042bef0  int FUN_0042bef0(char * param_1, longlong param_2, int param_3)
// callers: 1  callees: 0


int FUN_0042bef0(char *param_1,longlong param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (param_3 == 8) {
    pcVar1 = param_1 + param_2;
    iVar3 = 0;
    if (param_2 < 1) {
      return 0;
    }
    while( true ) {
      cVar2 = *param_1;
      param_1 = param_1 + 1;
      if (7 < (int)cVar2 - 0x30U) break;
      iVar3 = ((int)cVar2 - 0x30U) + iVar3 * 8;
      if (param_1 == pcVar1) {
        return iVar3;
      }
    }
  }
  else {
    if (param_3 == 0x10) {
      pcVar1 = param_1 + param_2;
      iVar3 = 0;
      if (param_2 < 1) {
        return 0;
      }
      do {
        iVar4 = (int)*param_1;
        param_1 = param_1 + 1;
        if (iVar4 - 0x61U < 6) {
          uVar5 = iVar4 - 0x57;
LAB_0042bf83:
          iVar3 = iVar3 * 0x10 + uVar5;
        }
        else {
          if (5 < iVar4 - 0x41U) {
            uVar5 = iVar4 - 0x30;
            if (9 < uVar5) {
              return iVar3;
            }
            goto LAB_0042bf83;
          }
          iVar3 = iVar3 * 0x10 + iVar4 + -0x37;
        }
        if (param_1 == pcVar1) {
          return iVar3;
        }
      } while( true );
    }
    if (param_3 != 2) {
      return 0;
    }
    pcVar1 = param_1 + param_2;
    iVar3 = 0;
    if (param_2 < 1) {
      return 0;
    }
    do {
      cVar2 = *param_1;
      param_1 = param_1 + 1;
      if (1 < (int)cVar2 - 0x30U) {
        return iVar3;
      }
      iVar3 = ((int)cVar2 - 0x30U) + iVar3 * 2;
    } while (pcVar1 != param_1);
  }
  return iVar3;
}


