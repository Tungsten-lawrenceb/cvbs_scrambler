// 004353d0  ulonglong FUN_004353d0(longlong param_1, int * param_2)
// callers: 3  callees: 0


ulonglong FUN_004353d0(longlong param_1,int *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar1 = param_1 + 0x18;
  lVar2 = uVar1 + (longlong)*(int *)(param_1 + 0x14) * 4;
  uVar3 = *(uint *)(lVar2 + -4);
  uVar6 = 0x1f;
  if (uVar3 != 0) {
    for (; uVar3 >> uVar6 == 0; uVar6 = uVar6 - 1) {
    }
  }
  uVar6 = uVar6 ^ 0x1f;
  *param_2 = 0x20 - uVar6;
  if ((int)uVar6 < 0xb) {
    uVar8 = 0;
    bVar5 = 0xb - (char)uVar6;
    if (uVar1 < lVar2 - 4U) {
      uVar8 = *(uint *)(lVar2 + -8) >> (bVar5 & 0x1f);
    }
    return CONCAT44(uVar3 >> (bVar5 & 0x1f),uVar3 << ((char)uVar6 + 0x15U & 0x1f) | uVar8) |
           0x3ff0000000000000;
  }
  iVar7 = uVar6 - 0xb;
  bVar5 = (byte)iVar7;
  if (uVar1 < lVar2 - 4U) {
    uVar6 = *(uint *)(lVar2 + -8);
    uVar4 = (ulonglong)uVar6;
    if (iVar7 == 0) {
LAB_00435477:
      return (ulonglong)(uVar3 | 0x3ff00000) << 0x20 | uVar4;
    }
    uVar8 = uVar6 << (bVar5 & 0x1f);
    uVar9 = (ulonglong)uVar8;
    uVar4 = (ulonglong)(uVar3 << (bVar5 & 0x1f) | uVar6 >> (-bVar5 & 0x1f) | 0x3ff00000) << 0x20;
    if (uVar1 < lVar2 - 8U) {
      uVar9 = (ulonglong)(uVar8 | *(uint *)(lVar2 + -0xc) >> (-bVar5 & 0x1f));
    }
  }
  else {
    uVar4 = 0;
    if (iVar7 == 0) goto LAB_00435477;
    uVar9 = 0;
    uVar4 = (ulonglong)(uVar3 << (bVar5 & 0x1f) | 0x3ff00000) << 0x20;
  }
  return uVar4 | uVar9;
}


