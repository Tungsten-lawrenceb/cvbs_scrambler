// 004113d8  undefined FUN_004113d8(longlong param_1, int param_2, int param_3, int param_4, int param_5, int * param_6, int * param_7, int * param_8, int * param_9)
// callers: 3  callees: 0


void FUN_004113d8(longlong param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,
                 int *param_7,int *param_8,int *param_9)

{
  int iVar1;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  
  *param_6 = 0;
  *param_7 = 0;
  *param_8 = 0;
  *param_9 = 0;
  iVar1 = *(int *)(param_1 + 0x750);
  if (iVar1 == 0) {
    *param_6 = *(int *)(param_1 + 0x740);
    *param_7 = *(int *)(param_1 + 0x744);
    if (((longlong)param_2 - (longlong)*(int *)(param_1 + 0x740)) -
        (longlong)*(int *)(param_1 + 0x754) < 1) {
      local_50 = 0;
    }
    else {
      local_50 = (param_2 - *(int *)(param_1 + 0x740)) - *(int *)(param_1 + 0x754);
    }
    *param_8 = local_50;
    *param_9 = param_5;
  }
  else if (iVar1 == 1) {
    *param_6 = *(int *)(param_1 + 0x740);
    *param_7 = *(int *)(param_1 + 0x744);
    if (((longlong)param_2 - (longlong)*(int *)(param_1 + 0x740)) -
        (longlong)*(int *)(param_1 + 0x754) < 1) {
      local_58 = 0;
    }
    else {
      local_58 = (param_2 - *(int *)(param_1 + 0x740)) - *(int *)(param_1 + 0x754);
    }
    *param_8 = local_58;
    *param_9 = param_5;
  }
  else if (iVar1 == 2) {
    *param_6 = (param_2 - param_4) - *(int *)(param_1 + 0x754);
    *param_7 = *(int *)(param_1 + 0x744);
    *param_8 = param_4;
    *param_9 = param_5;
  }
  else if (iVar1 == 3) {
    *param_6 = param_2 / 2 + *(int *)(param_1 + 0x75c);
    *param_7 = *(int *)(param_1 + 0x744);
    *param_8 = param_4;
    *param_9 = param_5;
  }
  else if (iVar1 == 4) {
    *param_6 = *(int *)(param_1 + 0x740);
    *param_7 = *(int *)(param_1 + 0x744);
    *param_8 = param_4;
    if (((longlong)param_3 - (longlong)*(int *)(param_1 + 0x744)) -
        (longlong)*(int *)(param_1 + 0x758) < 1) {
      local_60 = 0;
    }
    else {
      local_60 = (param_3 - *(int *)(param_1 + 0x744)) - *(int *)(param_1 + 0x758);
    }
    *param_9 = local_60;
  }
  else if (iVar1 == 5) {
    *param_6 = *(int *)(param_1 + 0x740);
    *param_7 = *(int *)(param_1 + 0x744);
    if (((longlong)param_2 - (longlong)*(int *)(param_1 + 0x740)) -
        (longlong)*(int *)(param_1 + 0x754) < 1) {
      local_68 = 0;
    }
    else {
      local_68 = (param_2 - *(int *)(param_1 + 0x740)) - *(int *)(param_1 + 0x754);
    }
    *param_8 = local_68;
    if (((longlong)param_3 - (longlong)*(int *)(param_1 + 0x744)) -
        (longlong)*(int *)(param_1 + 0x758) < 1) {
      local_70 = 0;
    }
    else {
      local_70 = (param_3 - *(int *)(param_1 + 0x744)) - *(int *)(param_1 + 0x758);
    }
    *param_9 = local_70;
  }
  else if (iVar1 == 6) {
    *param_6 = (param_2 - param_4) - *(int *)(param_1 + 0x754);
    *param_7 = *(int *)(param_1 + 0x744);
    *param_8 = param_4;
    if (((longlong)param_3 - (longlong)*(int *)(param_1 + 0x744)) -
        (longlong)*(int *)(param_1 + 0x758) < 1) {
      local_78 = 0;
    }
    else {
      local_78 = (param_3 - *(int *)(param_1 + 0x744)) - *(int *)(param_1 + 0x758);
    }
    *param_9 = local_78;
  }
  else if (iVar1 == 7) {
    *param_6 = *(int *)(param_1 + 0x740);
    *param_7 = (param_3 - *(int *)(param_1 + 0x758)) - param_5;
    *param_8 = param_4;
    *param_9 = param_5;
  }
  else if (iVar1 == 8) {
    *param_6 = *(int *)(param_1 + 0x740);
    *param_7 = (param_3 - *(int *)(param_1 + 0x758)) - param_5;
    if (((longlong)param_2 - (longlong)*(int *)(param_1 + 0x740)) -
        (longlong)*(int *)(param_1 + 0x754) < 1) {
      local_80 = 0;
    }
    else {
      local_80 = (param_2 - *(int *)(param_1 + 0x740)) - *(int *)(param_1 + 0x754);
    }
    *param_8 = local_80;
    *param_9 = param_5;
  }
  else if (iVar1 == 9) {
    *param_6 = (param_2 - param_4) - *(int *)(param_1 + 0x754);
    *param_7 = (param_3 - *(int *)(param_1 + 0x758)) - param_5;
    *param_8 = param_4;
    *param_9 = param_5;
  }
  else if (iVar1 == 10) {
    *param_6 = param_2 / 2 + *(int *)(param_1 + 0x75c);
    *param_7 = (param_3 - *(int *)(param_1 + 0x758)) - param_5;
    *param_8 = param_4;
    *param_9 = param_5;
  }
  else if (iVar1 == 0xb) {
    *param_6 = *(int *)(param_1 + 0x740);
    *param_7 = (int)(((longlong)param_3 - (longlong)param_5) / 2);
    *param_8 = param_4;
    *param_9 = param_5;
  }
  else if (iVar1 == 0xc) {
    *param_6 = (param_2 - param_4) - *(int *)(param_1 + 0x754);
    *param_7 = (int)(((longlong)param_3 - (longlong)param_5) / 2);
    *param_8 = param_4;
    *param_9 = param_5;
  }
  else if (iVar1 == 0xd) {
    *param_6 = param_2 / 2 + *(int *)(param_1 + 0x75c);
    *param_7 = param_3 / 2 + *(int *)(param_1 + 0x760);
    *param_8 = param_4;
    *param_9 = param_5;
  }
  return;
}


