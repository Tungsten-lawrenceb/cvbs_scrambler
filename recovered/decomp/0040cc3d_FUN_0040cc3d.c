// 0040cc3d  undefined FUN_0040cc3d(int * param_1, longlong param_2, undefined8 param_3)
// callers: 1  callees: 11


void FUN_0040cc3d(int *param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  float *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138 [24];
  uint local_74;
  undefined4 local_70;
  int local_6c;
  int local_68;
  int local_64;
  int iStack_60;
  int local_5c;
  int local_58;
  int local_54;
  uint local_50;
  uint local_4c;
  longlong local_48;
  
  *(undefined8 *)(param_1 + 2) = param_3;
  local_48 = FUN_004074f2(param_1);
  if ((local_48 != 0) && ((*(ulonglong *)(local_48 + 0x6b8) & 2) != 0)) {
    local_4c = (uint)((ulonglong)*(undefined8 *)(local_48 + 0x6b8) >> 0x18) & 0xff;
    local_50 = (uint)((ulonglong)*(undefined8 *)(local_48 + 0x6b8) >> 0x10) & 0xff;
    local_54 = (int)((*(ulonglong *)(local_48 + 0x6b8) & 0xf000) >> 0xc);
    local_58 = 0;
    local_5c = 0;
    iStack_60 = 0;
    local_64 = 0;
    local_68 = 0;
    local_6c = 0;
    local_70 = 0;
    local_74 = 0;
    local_74 = FUN_00410166(*(uint *)(local_48 + 0x6d0),0);
    if (local_50 == 0) {
      FUN_004290c5(param_2,0);
    }
    else if (local_50 == 1) {
      FUN_004290c5(param_2,local_74);
    }
    else {
      if ((local_50 != 0) && (local_50 != 1)) {
        if (local_50 == 2) {
          local_58 = *(int *)(local_48 + 0x740);
          local_5c = *(int *)(local_48 + 0x744);
          iStack_60 = *(int *)(local_48 + 0x740) + *(int *)(local_48 + 0x748);
          local_64 = *(int *)(local_48 + 0x744);
        }
        else if (local_50 == 3) {
          local_58 = *(int *)(local_48 + 0x740);
          local_5c = *(int *)(local_48 + 0x744);
          iStack_60 = *(int *)(local_48 + 0x740);
          local_64 = *(int *)(local_48 + 0x744) + *(int *)(local_48 + 0x74c);
        }
        else if (local_50 == 4) {
          iStack_60 = *(int *)(local_48 + 0x740);
          local_64 = *(int *)(local_48 + 0x744);
          local_58 = *(int *)(local_48 + 0x740) + *(int *)(local_48 + 0x748);
          local_5c = *(int *)(local_48 + 0x744);
        }
        else if (local_50 == 5) {
          iStack_60 = *(int *)(local_48 + 0x740);
          local_64 = *(int *)(local_48 + 0x744);
          local_58 = *(int *)(local_48 + 0x740);
          local_5c = *(int *)(local_48 + 0x744) + *(int *)(local_48 + 0x74c);
        }
        else if (local_50 == 6) {
          local_58 = *(int *)(local_48 + 0x740);
          local_5c = *(int *)(local_48 + 0x744);
          iStack_60 = *(int *)(local_48 + 0x740) + *(int *)(local_48 + 0x748);
          local_64 = *(int *)(local_48 + 0x744) + *(int *)(local_48 + 0x74c);
        }
        else if (local_50 == 7) {
          local_58 = *(int *)(local_48 + 0x740);
          local_5c = *(int *)(local_48 + 0x744) + *(int *)(local_48 + 0x74c);
          iStack_60 = *(int *)(local_48 + 0x740) + *(int *)(local_48 + 0x748);
          local_64 = *(int *)(local_48 + 0x744);
        }
        else if (local_50 == 8) {
          iStack_60 = *(int *)(local_48 + 0x740);
          local_64 = *(int *)(local_48 + 0x744) + *(int *)(local_48 + 0x74c);
          local_58 = *(int *)(local_48 + 0x740) + *(int *)(local_48 + 0x748);
          local_5c = *(int *)(local_48 + 0x744);
        }
        else if (local_50 == 9) {
          iStack_60 = *(int *)(local_48 + 0x740);
          local_64 = *(int *)(local_48 + 0x744);
          local_58 = *(int *)(local_48 + 0x740) + *(int *)(local_48 + 0x748);
          local_5c = *(int *)(local_48 + 0x744) + *(int *)(local_48 + 0x74c);
        }
      }
      uVar2 = FUN_00410166(*(uint *)(local_48 + 0x6d0),0);
      uVar1 = FUN_00410166(*(uint *)(local_48 + 0x6cc),0);
      FUN_00429122(param_2,local_58,local_5c,iStack_60,local_64,uVar1,uVar2,1);
    }
    uVar2 = FUN_00410166(*(uint *)(local_48 + 0x6cc),0);
    FUN_00429036(param_2,(float)local_54,uVar2);
    local_58 = *(int *)(local_48 + 0x740);
    local_5c = *(int *)(local_48 + 0x744);
    local_68 = *(int *)(local_48 + 0x748);
    local_6c = *(int *)(local_48 + 0x74c);
    local_70 = 0;
    local_168 = (float *)0x0;
    local_160 = 0;
    local_158 = 0;
    local_150 = 8;
    local_148 = 0;
    local_140 = 8;
    puVar4 = local_138;
    lVar3 = 0x18;
    do {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    if (local_4c == 0) {
      FUN_0042925b(param_2,(float)local_58,(float)local_5c,(float)local_68,(float)local_6c);
    }
    else if (local_4c == 1) {
      FUN_004296f0(param_2,(float)local_58,(float)local_5c,(float)local_68,(float)local_6c);
    }
    else if (local_4c == 2) {
      FUN_004293da(param_2,(float)local_58,(float)local_5c,(float)local_68,(float)local_6c,
                   (float)((double)(longlong)local_68 * 0.5),
                   (float)((double)(longlong)local_6c * 0.5),0xf);
    }
    else if (local_4c == 3) {
      FUN_0042ae20(&local_168,8,-1,0,1);
      *local_168 = (float)((double)(longlong)local_58 + (double)(longlong)local_68 / 2.0);
      local_168[1] = (float)local_5c;
      local_168[2] = (float)local_58;
      local_168[3] = (float)((longlong)local_5c + (longlong)local_6c);
      local_168[4] = (float)((longlong)local_58 + (longlong)local_68);
      local_168[5] = (float)((longlong)local_5c + (longlong)local_6c);
    }
    else if (local_4c == 4) {
      FUN_0042ae20(&local_168,8,-1,0,1);
      *local_168 = (float)local_58;
      local_168[1] = (float)local_5c;
      local_168[2] = (float)((longlong)local_58 + (longlong)local_68);
      local_168[3] = (float)local_5c;
      local_168[4] = (float)((double)(longlong)local_58 + (double)(longlong)local_68 / 2.0);
      local_168[5] = (float)((longlong)local_5c + (longlong)local_6c);
    }
    else if (local_4c == 5) {
      FUN_0042ae20(&local_168,8,-1,0,1);
      *local_168 = (float)local_58;
      local_168[1] = (float)((double)(longlong)local_5c + (double)(longlong)local_6c / 2.0);
      local_168[2] = (float)((longlong)local_58 + (longlong)local_68);
      local_168[3] = (float)local_5c;
      local_168[4] = (float)((longlong)local_58 + (longlong)local_68);
      local_168[5] = (float)((longlong)local_5c + (longlong)local_6c);
    }
    else if (local_4c == 6) {
      FUN_0042ae20(&local_168,8,-1,0,1);
      *local_168 = (float)local_58;
      local_168[1] = (float)local_5c;
      local_168[2] = (float)local_58;
      local_168[3] = (float)((longlong)local_5c + (longlong)local_6c);
      local_168[4] = (float)((longlong)local_58 + (longlong)local_68);
      local_168[5] = (float)((double)(longlong)local_5c + (double)(longlong)local_6c / 2.0);
    }
    else if (local_4c == 7) {
      FUN_0042ae20(&local_168,8,-1,0,1);
      *local_168 = (float)((double)(longlong)local_58 + (double)(longlong)local_68 * 0.5);
      local_168[1] = (float)local_5c;
      local_168[2] = (float)((longlong)local_58 + (longlong)local_68);
      local_168[3] = (float)((double)(longlong)local_5c + (double)(longlong)local_6c / 2.0);
      local_168[4] = (float)((double)(longlong)local_58 + (double)(longlong)local_68 / 2.0);
      local_168[5] = (float)((longlong)local_5c + (longlong)local_6c);
      local_168[6] = (float)local_58;
      local_168[7] = (float)((double)(longlong)local_5c + (double)(longlong)local_6c / 2.0);
    }
    else if (local_4c == 8) {
      FUN_0042ae20(&local_168,8,-1,0,1);
      *local_168 = (float)((double)(longlong)local_58 + (double)(longlong)local_68 * 0.5);
      local_168[1] = (float)local_5c;
      local_168[2] = (float)((longlong)local_58 + (longlong)local_68);
      local_168[3] = (float)((double)(longlong)local_5c + (double)(longlong)local_6c * 0.38231);
      local_168[4] = (float)((double)(longlong)local_58 + (double)(longlong)local_68 * 0.80946);
      local_168[5] = (float)((longlong)local_5c + (longlong)local_6c);
      local_168[6] = (float)((double)(longlong)local_58 + (double)(longlong)local_68 * 0.19178);
      local_168[7] = (float)((longlong)local_5c + (longlong)local_6c);
      local_168[8] = (float)local_58;
      local_168[9] = (float)((double)(longlong)local_5c + (double)(longlong)local_6c * 0.38231);
    }
    else if (local_4c == 9) {
      FUN_0042ae20(&local_168,8,-1,0,1);
      local_70 = 1;
      *local_168 = (float)((double)(longlong)local_58 + (double)(longlong)local_68 * 0.5);
      local_168[1] = (float)local_5c;
      local_168[2] = (float)((double)(longlong)local_58 + (double)(longlong)local_68 * 0.80946);
      local_168[3] = (float)((longlong)local_5c + (longlong)local_6c);
      local_168[4] = (float)local_58;
      local_168[5] = (float)((double)(longlong)local_5c + (double)(longlong)local_6c * 0.38231);
      local_168[6] = (float)((longlong)local_58 + (longlong)local_68);
      local_168[7] = (float)((double)(longlong)local_5c + (double)(longlong)local_6c * 0.38231);
      local_168[8] = (float)((double)(longlong)local_58 + (double)(longlong)local_68 * 0.19178);
      local_168[9] = (float)((longlong)local_5c + (longlong)local_6c);
    }
    else if (local_4c == 10) {
      FUN_0042ae20(&local_168,8,-1,0,1);
      *local_168 = (float)((double)(longlong)local_58 + (double)(longlong)local_68 * 0.2427);
      local_168[1] = (float)local_5c;
      local_168[2] = (float)((double)(longlong)local_58 + (double)(longlong)local_68 * 0.7463);
      local_168[3] = (float)local_5c;
      local_168[4] = (float)((longlong)local_58 + (longlong)local_68);
      local_168[5] = (float)((double)(longlong)local_5c + (double)(longlong)local_6c * 0.5);
      local_168[6] = (float)((double)(longlong)local_58 + (double)(longlong)local_68 * 0.7463);
      local_168[7] = (float)((longlong)local_5c + (longlong)local_6c);
      local_168[8] = (float)((double)(longlong)local_58 + (double)(longlong)local_68 * 0.2427);
      local_168[9] = (float)((longlong)local_5c + (longlong)local_6c);
      local_168[10] = (float)local_58;
      local_168[0xb] = (float)((double)(longlong)local_5c + (double)(longlong)local_6c * 0.5);
    }
    else if (local_4c == 0xb) {
      FUN_0042ae20(&local_168,8,-1,0,1);
      *local_168 = (float)((double)(longlong)local_58 + (double)(longlong)local_68 * 0.5);
      local_168[1] = (float)local_5c;
      local_168[2] = (float)((longlong)local_58 + (longlong)local_68);
      local_168[3] = (float)((double)(longlong)local_5c + (double)(longlong)local_6c * 0.2427);
      local_168[4] = (float)((longlong)local_58 + (longlong)local_68);
      local_168[5] = (float)((double)(longlong)local_5c + (double)(longlong)local_6c * 0.7463);
      local_168[6] = (float)((double)(longlong)local_58 + (double)(longlong)local_68 * 0.5);
      local_168[7] = (float)((longlong)local_5c + (longlong)local_6c);
      local_168[8] = (float)local_58;
      local_168[9] = (float)((double)(longlong)local_5c + (double)(longlong)local_6c * 0.7463);
      local_168[10] = (float)local_58;
      local_168[0xb] = (float)((double)(longlong)local_5c + (double)(longlong)local_6c * 0.2427);
    }
    if (2 < (int)local_4c) {
      FUN_0042986f(param_2,(longlong *)&local_168,local_70);
    }
    FUN_0042ac00(&local_168);
  }
  return;
}


