// 004354f0  undefined FUN_004354f0(undefined8 param_1, int * param_2, int * param_3)
// callers: 4  callees: 1


void FUN_004354f0(undefined8 param_1,int *param_2,int *param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  lVar4 = FUN_00434b50(1);
  if (lVar4 != 0) {
    uVar6 = (uint)((ulonglong)param_1 >> 0x20);
    uVar9 = uVar6 & 0xfffff;
    uVar6 = uVar6 >> 0x14 & 0x7ff;
    if (uVar6 != 0) {
      uVar9 = uVar9 | 0x100000;
    }
    uVar7 = (uint)param_1;
    if (uVar7 == 0) {
      *(undefined4 *)(lVar4 + 0x14) = 1;
      iVar8 = 0;
      for (uVar7 = uVar9; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        iVar8 = iVar8 + 1;
      }
      iVar2 = iVar8 + 0x20;
      *(uint *)(lVar4 + 0x18) = uVar9 >> ((byte)iVar8 & 0x1f);
      iVar8 = 1;
    }
    else {
      iVar2 = 0;
      for (uVar3 = uVar7; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        iVar2 = iVar2 + 1;
      }
      bVar5 = (byte)iVar2;
      uVar7 = uVar7 >> (bVar5 & 0x1f);
      if (iVar2 != 0) {
        uVar7 = uVar7 | uVar9 << (0x20 - bVar5 & 0x1f);
        uVar9 = uVar9 >> (bVar5 & 0x1f);
      }
      *(uint *)(lVar4 + 0x18) = uVar7;
      *(uint *)(lVar4 + 0x1c) = uVar9;
      iVar8 = (uVar9 != 0) + 1;
      *(int *)(lVar4 + 0x14) = iVar8;
    }
    if (uVar6 != 0) {
      *param_2 = (uVar6 - 0x433) + iVar2;
      *param_3 = 0x35 - iVar2;
      return;
    }
    puVar1 = (uint *)(lVar4 + 0x14 + (longlong)iVar8 * 4);
    uVar9 = 0x1f;
    if (*puVar1 != 0) {
      for (; *puVar1 >> uVar9 == 0; uVar9 = uVar9 - 1) {
      }
    }
    *param_2 = iVar2 + -0x432;
    *param_3 = iVar8 * 0x20 - (uVar9 ^ 0x1f);
  }
  return;
}


