// 0042b5e0  undefined8 * FUN_0042b5e0(undefined8 * param_1, ulonglong param_2, char * param_3, longlong param_4, int param_5, int param_6)
// callers: 2  callees: 8


undefined8 *
FUN_0042b5e0(undefined8 *param_1,ulonglong param_2,char *param_3,longlong param_4,int param_5,
            int param_6)

{
  undefined8 uVar1;
  char *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_1 == (undefined8 *)0x0) goto joined_r0x0042b708;
  if (param_3 == (char *)0x0) {
    if (param_2 != 0xffffffffffffffff) {
LAB_0042b68a:
      *(undefined1 *)param_1 = 0;
      uVar3 = 0;
      goto LAB_0042b645;
    }
  }
  else {
    if (param_4 == -1) {
      uVar3 = *(ulonglong *)(param_3 + 8) & 0x7fffffffffffffff;
      pcVar2 = *(char **)param_3;
    }
    else {
      uVar3 = strlen(param_3);
      pcVar2 = param_3;
    }
    if (param_2 != 0xffffffffffffffff) {
      if (uVar3 == 0) goto LAB_0042b68a;
      uVar4 = uVar3;
      if ((param_2 != 0) && (uVar4 = param_2 - 1, (longlong)uVar4 < (longlong)uVar3)) {
        uVar3 = uVar4;
      }
      FUN_0042c640((undefined1 *)param_1,pcVar2,uVar3);
      param_2 = uVar4;
LAB_0042b645:
      if ((param_5 != 0) && (0 < (longlong)(param_2 - uVar3))) {
        memset((void *)((longlong)param_1 + uVar3),0,param_2 - uVar3);
      }
      goto joined_r0x0042b708;
    }
    if (uVar3 != 0) {
      if ((param_4 == -1) && (*(longlong *)(param_3 + 8) < 0)) {
        if (param_6 == 0) {
          FUN_0042c680(param_1);
        }
        uVar1 = *(undefined8 *)(param_3 + 0x10);
        *param_1 = pcVar2;
        param_1[1] = uVar3;
        param_1[2] = uVar1;
        param_3[0] = '\0';
        param_3[1] = '\0';
        param_3[2] = '\0';
        param_3[3] = '\0';
        param_3[4] = '\0';
        param_3[5] = '\0';
        param_3[6] = '\0';
        param_3[7] = '\0';
        param_3[8] = '\0';
        param_3[9] = '\0';
        param_3[10] = '\0';
        param_3[0xb] = '\0';
        param_3[0xc] = '\0';
        param_3[0xd] = '\0';
        param_3[0xe] = '\0';
        param_3[0xf] = '\0';
        param_3[0x10] = '\0';
        param_3[0x11] = '\0';
        param_3[0x12] = '\0';
        param_3[0x13] = '\0';
        param_3[0x14] = '\0';
        param_3[0x15] = '\0';
        param_3[0x16] = '\0';
        param_3[0x17] = '\0';
        FUN_0042c350((undefined8 *)param_3);
        return param_1;
      }
      if (param_6 == 0) {
        if ((param_1[1] & 0x7fffffffffffffff) != uVar3) {
          FUN_0042c410(param_1,uVar3,0);
        }
      }
      else {
        FUN_0042c3b0(param_1,uVar3);
      }
      FUN_0042c640((undefined1 *)*param_1,pcVar2,uVar3);
      goto joined_r0x0042b708;
    }
  }
  if (param_6 == 0) {
    FUN_0042c680(param_1);
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
joined_r0x0042b708:
  if (param_4 == -1) {
    FUN_0042c5b0((undefined8 *)param_3);
  }
  return param_1;
}


