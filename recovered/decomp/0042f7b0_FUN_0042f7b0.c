// 0042f7b0  ulonglong FUN_0042f7b0(byte param_1, ushort param_2, uint param_3, uint param_4, int param_5)
// callers: 1  callees: 5


ulonglong FUN_0042f7b0(byte param_1,ushort param_2,uint param_3,uint param_4,int param_5)

{
  UINT UVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ushort uVar5;
  ushort *puVar6;
  uint _C;
  ulonglong uVar7;
  undefined7 uVar8;
  bool bVar9;
  
  if (((param_4 & 0x100) == 0) || (param_1 != 0)) {
    if (param_2 < 0x59) {
      lVar4 = (ulonglong)param_2 * 8;
      UVar1 = MapVirtualKeyA(param_3 & 0xffff,2);
      uVar7 = (ulonglong)(ushort)UVar1;
      iVar2 = isupper(UVar1 & 0xffff);
      _C = UVar1 & 0xffff;
      if (iVar2 == 0) {
        iVar2 = islower(UVar1 & 0xffff);
        uVar3 = _C;
        if (iVar2 != 0) {
          uVar3 = toupper(_C);
        }
        if ((param_4 & 3) == 0) goto LAB_0042f8cb;
LAB_0042f88b:
        uVar7 = (ulonglong)*(ushort *)(&DAT_00438286 + lVar4);
      }
      else {
        uVar3 = tolower(UVar1 & 0xffff);
        if ((param_4 & 3) != 0) goto LAB_0042f88b;
LAB_0042f8cb:
        if ((param_4 & 0xc) == 0) {
          if ((param_4 & 0x10) == 0) {
            if (param_1 == 0) {
              uVar7 = (ulonglong)*(ushort *)(&DAT_00438280 + lVar4);
            }
          }
          else {
            uVar7 = (ulonglong)*(ushort *)(&DAT_00438282 + lVar4);
          }
        }
        else {
          uVar7 = (ulonglong)*(ushort *)(&DAT_00438284 + lVar4);
        }
      }
      if ((0xff < (uint)uVar7) && ((param_1 == _C || (uVar3 == param_1)))) {
        uVar8 = (undefined7)(uVar7 >> 8);
        goto LAB_0042f8b1;
      }
    }
    if ((param_5 == 0) && (param_1 != 0)) {
      return (ulonglong)param_1;
    }
LAB_0042f7da:
    uVar7 = 0xffffffff;
  }
  else {
    lVar4 = 0;
    uVar5 = 0x1c;
    puVar6 = &DAT_0043856a;
    while (param_2 != uVar5) {
      lVar4 = lVar4 + 1;
      if (lVar4 == 0xc) goto LAB_0042f7da;
      uVar5 = *puVar6;
      puVar6 = puVar6 + 5;
    }
    lVar4 = lVar4 * 10;
    if ((param_4 & 3) == 0) {
      if ((param_4 & 0xc) != 0) {
        uVar7 = (ulonglong)*(ushort *)(&UNK_00438566 + lVar4);
        bVar9 = *(ushort *)(&UNK_00438566 + lVar4) != 0;
        goto LAB_0042f906;
      }
      if ((param_4 & 0x10) != 0) {
        uVar7 = (ulonglong)*(ushort *)(&UNK_00438564 + lVar4);
        bVar9 = *(ushort *)(&UNK_00438564 + lVar4) != 0;
        goto LAB_0042f906;
      }
      uVar7 = (ulonglong)*(ushort *)(&UNK_00438562 + lVar4);
    }
    else {
      uVar7 = (ulonglong)*(ushort *)(&UNK_00438568 + lVar4);
      bVar9 = *(ushort *)(&UNK_00438568 + lVar4) != 0;
LAB_0042f906:
      if (!bVar9) goto LAB_0042f7da;
    }
    if (0xff < (uint)uVar7) {
      uVar8 = (undefined7)(uVar7 >> 8);
LAB_0042f8b1:
      return CONCAT71(uVar8,0xff);
    }
  }
  return uVar7;
}


