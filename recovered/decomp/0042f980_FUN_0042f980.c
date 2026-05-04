// 0042f980  undefined FUN_0042f980(int * param_1)
// callers: 2  callees: 3


void FUN_0042f980(int *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  int iVar5;
  UINT UVar6;
  uint uVar7;
  ulonglong uVar8;
  CHAR ch;
  bool bVar9;
  longlong local_20;
  
  uVar7 = param_1[3];
  if (*param_1 == 0) {
    if (((uVar7 & 0x1c) == 0) && ((uVar7 & 3) != 0)) {
      return;
    }
LAB_0042f9ad:
    if (DAT_00440dc8 != 0) {
      ch = (CHAR)DAT_00440dc8;
      uVar4 = VkKeyScanA(ch);
      iVar5 = (int)(short)uVar4;
      local_20 = ((ulonglong)uVar4 & 0xff) << 0x30;
      UVar6 = MapVirtualKeyA((uint)(byte)uVar4,0);
      *(uint *)(&DAT_00443600 + DAT_004435e0 * 4) = DAT_00440dc8 & 0xff;
      lVar1 = DAT_004435e0 * 0x14;
      uVar7 = (int)DAT_004435e0 + 1U & 0x1ff;
      DAT_004435e0 = (ulonglong)uVar7;
      bVar9 = DAT_004435e0 == DAT_004435e8;
      *(undefined2 *)(&DAT_00440de0 + lVar1) = 1;
      *(longlong *)(&DAT_00440de4 + lVar1) = local_20;
      *(ulonglong *)(lVar1 + 0x440dec) =
           CONCAT44(iVar5 >> 9 & 2U | iVar5 >> 4 & 0x10U | iVar5 >> 6 & 8U,
                    (uint)CONCAT12(ch,(short)UVar6));
      if (bVar9) {
        DAT_004435e8 = (ulonglong)(uVar7 + 1 & 0x1ff);
      }
      DAT_00440dc4 = 1;
      DAT_00440dc8 = 0;
    }
    return;
  }
  uVar8 = FUN_0042f7b0(*(byte *)((longlong)param_1 + 10),*(ushort *)(param_1 + 2),
                       (uint)*(ushort *)((longlong)param_1 + 6),uVar7,0);
  iVar5 = (int)uVar8;
  if (((param_1[3] & 0x1cU) == 0) && ((param_1[3] & 3U) != 0)) {
    if ((ushort)(*(ushort *)((longlong)param_1 + 6) - 0x60) < 10) {
      if (*param_1 != 0) {
        DAT_00440dc8 = (*(ushort *)((longlong)param_1 + 6) - 0x60) + DAT_00440dc8 * 10;
      }
      if (iVar5 == -1) {
        return;
      }
      goto LAB_0042fac4;
    }
    if (iVar5 == -1) {
      return;
    }
  }
  else if (iVar5 == -1) goto LAB_0042f9ad;
  DAT_00440dc8 = 0;
LAB_0042fac4:
  uVar2 = *(undefined8 *)param_1;
  uVar3 = *(undefined8 *)(param_1 + 2);
  *(int *)(&DAT_00443600 + DAT_004435e0 * 4) = iVar5;
  lVar1 = DAT_004435e0 * 0x14;
  uVar7 = (int)DAT_004435e0 + 1U & 0x1ff;
  bVar9 = uVar7 == DAT_004435e8;
  *(undefined2 *)(&DAT_00440de0 + lVar1) = 1;
  *(undefined8 *)(&DAT_00440de4 + lVar1) = uVar2;
  *(undefined8 *)(lVar1 + 0x440dec) = uVar3;
  if (bVar9) {
    DAT_004435e8 = (ulonglong)(uVar7 + 1 & 0x1ff);
  }
  DAT_004435e0 = (ulonglong)uVar7;
  DAT_00440dc4 = 1;
  return;
}


