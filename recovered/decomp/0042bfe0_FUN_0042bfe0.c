// 0042bfe0  longlong FUN_0042bfe0(char * param_1, longlong param_2, int param_3)
// callers: 1  callees: 0


longlong FUN_0042bfe0(char *param_1,longlong param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  
  if (param_3 == 8) {
    pcVar1 = param_1 + param_2;
    lVar3 = 0;
    if (param_2 < 1) {
      return 0;
    }
    while( true ) {
      cVar2 = *param_1;
      param_1 = param_1 + 1;
      if (7 < (int)cVar2 - 0x30U) break;
      lVar3 = (longlong)(int)((int)cVar2 - 0x30U) + lVar3 * 8;
      if (pcVar1 == param_1) {
        return lVar3;
      }
    }
  }
  else {
    if (param_3 == 0x10) {
      pcVar1 = param_1 + param_2;
      lVar3 = 0;
      if (param_2 < 1) {
        return 0;
      }
      do {
        iVar4 = (int)*param_1;
        param_1 = param_1 + 1;
        if (iVar4 - 0x61U < 6) {
          uVar5 = iVar4 - 0x57;
LAB_0042c074:
          lVar3 = lVar3 * 0x10 + (longlong)(int)uVar5;
        }
        else {
          if (5 < iVar4 - 0x41U) {
            uVar5 = iVar4 - 0x30;
            if (9 < uVar5) {
              return lVar3;
            }
            goto LAB_0042c074;
          }
          lVar3 = lVar3 * 0x10 + (longlong)(iVar4 + -0x37);
        }
        if (param_1 == pcVar1) {
          return lVar3;
        }
      } while( true );
    }
    if (param_3 != 2) {
      return 0;
    }
    pcVar1 = param_1 + param_2;
    lVar3 = 0;
    if (param_2 < 1) {
      return 0;
    }
    do {
      cVar2 = *param_1;
      param_1 = param_1 + 1;
      if (1 < (int)cVar2 - 0x30U) {
        return lVar3;
      }
      lVar3 = (longlong)(int)((int)cVar2 - 0x30U) + lVar3 * 2;
    } while (pcVar1 != param_1);
  }
  return lVar3;
}


