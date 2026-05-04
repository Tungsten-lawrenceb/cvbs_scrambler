// 00409200  undefined FUN_00409200(int * param_1, longlong param_2, undefined8 param_3)
// callers: 4  callees: 10


void FUN_00409200(int *param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  HGDIOBJ pvVar3;
  ulonglong uVar4;
  uint local_54;
  uint local_50;
  
  *(undefined8 *)(param_1 + 2) = param_3;
  lVar2 = FUN_004074f2(param_1);
  if ((lVar2 != 0) && ((*(ulonglong *)(lVar2 + 0x6b8) & 2) != 0)) {
    uVar1 = FUN_00410166(*(uint *)(lVar2 + 0x6d0),0);
    FUN_004290c5(param_2,uVar1);
    uVar1 = FUN_00410166(*(uint *)(lVar2 + 0x6cc),0);
    if ((*(ulonglong *)(lVar2 + 0x6b8) & 0xff000000) == 0x1000000) {
      FUN_00429036(param_2,1.0,uVar1);
    }
    else {
      FUN_00429036(param_2,0.0,0xff000000);
    }
    FUN_0042925b(param_2,(float)*(int *)(lVar2 + 0x740),(float)*(int *)(lVar2 + 0x744),
                 (float)*(int *)(lVar2 + 0x748),(float)*(int *)(lVar2 + 0x74c));
    uVar1 = FUN_004100e2(*(uint *)(lVar2 + 0x6cc),0xffffffff);
    if (uVar1 != 0xffffffff) {
      FUN_00428fb1(param_2,uVar1,0xffffffff);
    }
    local_50 = 0x20;
    local_54 = 0;
    uVar4 = (*(ulonglong *)(lVar2 + 0x6b8) & 0xff0000) >> 0x10;
    if (uVar4 == 7) {
      local_54 = 9;
    }
    else if (uVar4 == 6) {
      local_54 = 8;
    }
    else if (uVar4 == 8) {
      local_54 = 10;
    }
    else if (uVar4 == 4) {
      local_54 = 5;
    }
    else if (uVar4 == 3) {
      local_54 = 4;
    }
    else if (uVar4 == 5) {
      local_54 = 6;
    }
    else if (uVar4 == 1) {
      local_54 = 1;
      local_50 = 0x10;
    }
    else if (uVar4 == 0) {
      local_54 = 0;
      local_50 = 0x10;
    }
    else if (uVar4 == 2) {
      local_54 = 2;
      local_50 = 0x10;
    }
    if ((*(ulonglong *)(lVar2 + 0x6b8) & 4) == 0) {
      local_54 = local_54 | 0x800;
    }
    if ((*(ulonglong *)(lVar2 + 0x6b8) & 8) != 0) {
      local_54 = local_54 | 0x40000;
    }
    pvVar3 = (HGDIOBJ)FUN_0040fa6a((char *)(lVar2 + 0x6e0));
    pvVar3 = SelectObject(*(HDC *)(param_2 + 0x90),pvVar3);
    FUN_00428d1e(param_2,*(int *)(lVar2 + 0x740),*(int *)(lVar2 + 0x744),*(int *)(lVar2 + 0x748),
                 (int)*(undefined8 *)(lVar2 + 0x74c),lVar2 + 0x40,local_54 | local_50 | 0x40);
    SelectObject(*(HDC *)(param_2 + 0x90),pvVar3);
  }
  return;
}


