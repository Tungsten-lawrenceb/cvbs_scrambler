// 00434420  undefined FUN_00434420(longlong param_1, uint param_2)
// callers: 17  callees: 0


void FUN_00434420(longlong param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  sbyte sVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  longlong lVar9;
  uint *puVar10;
  uint *puVar11;
  
  lVar8 = (longlong)*(int *)(param_1 + 0x14);
  if ((int)param_2 >> 5 < *(int *)(param_1 + 0x14)) {
    puVar1 = (uint *)(param_1 + 0x18);
    lVar9 = (longlong)((int)param_2 >> 5);
    puVar2 = puVar1 + lVar8;
    puVar7 = puVar1 + lVar9;
    if ((param_2 & 0x1f) == 0) {
      puVar10 = puVar1;
      if (puVar2 <= puVar7) goto LAB_004344b0;
      do {
        puVar11 = puVar7 + 1;
        *puVar10 = *puVar7;
        puVar7 = puVar11;
        puVar10 = puVar10 + 1;
      } while (puVar11 < puVar2);
      puVar7 = puVar1 + (lVar8 - lVar9);
    }
    else {
      uVar3 = *puVar7;
      puVar7 = puVar7 + 1;
      sVar4 = (sbyte)(param_2 & 0x1f);
      uVar5 = uVar3 >> sVar4;
      puVar10 = puVar1;
      if (puVar7 < puVar2) {
        do {
          puVar11 = puVar7 + 1;
          *puVar10 = *puVar7 << (0x20U - sVar4 & 0x1f) | uVar5;
          uVar3 = *puVar7;
          uVar5 = uVar3 >> sVar4;
          puVar10 = puVar10 + 1;
          puVar7 = puVar11;
        } while (puVar11 < puVar2);
        puVar7 = (uint *)(param_1 + 0x14 + (lVar8 - lVar9) * 4);
        *puVar7 = uVar5;
        if (uVar3 >> sVar4 == 0) goto LAB_004344ed;
      }
      else {
        *(uint *)(param_1 + 0x18) = uVar5;
        puVar7 = puVar1;
        if (uVar3 >> sVar4 == 0) goto LAB_004344b0;
      }
      puVar7 = puVar7 + 1;
    }
LAB_004344ed:
    iVar6 = (int)((longlong)puVar7 - (longlong)puVar1 >> 2);
    *(int *)(param_1 + 0x14) = iVar6;
    if (iVar6 != 0) {
      return;
    }
  }
  else {
LAB_004344b0:
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


