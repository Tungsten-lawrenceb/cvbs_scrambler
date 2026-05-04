// 00433930  undefined8 * FUN_00433930(longlong param_1, longlong param_2)
// callers: 2  callees: 3


undefined8 * FUN_00433930(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  uint *puVar14;
  
  lVar10 = param_1;
  if (*(int *)(param_1 + 0x14) < *(int *)(param_2 + 0x14)) {
    lVar10 = param_2;
    param_2 = param_1;
  }
  uVar9 = 0;
  puVar6 = (undefined8 *)FUN_00434b50(*(int *)(lVar10 + 8));
  iVar2 = *(int *)(lVar10 + 0x14);
  lVar13 = 0x18;
  puVar8 = puVar6 + 3;
  *(int *)((longlong)puVar6 + 0x14) = iVar2;
  iVar3 = *(int *)(param_2 + 0x14);
  puVar1 = (undefined8 *)((longlong)puVar8 + (longlong)iVar3 * 4);
  puVar11 = puVar8;
  do {
    uVar4 = *(uint *)(lVar10 + lVar13);
    uVar5 = *(uint *)(param_2 + lVar13);
    puVar12 = (undefined8 *)((longlong)puVar11 + 4);
    lVar13 = lVar13 + 4;
    uVar9 = (uVar4 & 0xffff) + (uVar5 & 0xffff) + uVar9;
    *(short *)puVar11 = (short)uVar9;
    uVar9 = (uVar4 >> 0x10) + (uVar5 >> 0x10) + (uVar9 >> 0x10);
    *(short *)((longlong)puVar11 + 2) = (short)uVar9;
    uVar9 = uVar9 >> 0x10;
    puVar11 = puVar12;
  } while (puVar12 < puVar1);
  lVar13 = ((longlong)puVar1 + (-0x19 - (longlong)puVar6) & 0xfffffffffffffffcU) + 4;
  if (puVar1 < (undefined8 *)((longlong)puVar6 + 0x19U)) {
    lVar13 = 4;
  }
  puVar14 = (uint *)(lVar10 + 0x18 + lVar13);
  for (puVar7 = (undefined2 *)(lVar13 + (longlong)puVar8);
      puVar7 < (undefined2 *)((longlong)puVar1 + (longlong)(iVar2 - iVar3) * 4); puVar7 = puVar7 + 2
      ) {
    uVar4 = *puVar14;
    puVar14 = puVar14 + 1;
    uVar9 = (uVar4 & 0xffff) + uVar9;
    *puVar7 = (short)uVar9;
    uVar9 = (uVar4 >> 0x10) + (uVar9 >> 0x10);
    puVar7[1] = (short)uVar9;
    uVar9 = uVar9 >> 0x10;
  }
  puVar8 = puVar6;
  if (uVar9 != 0) {
    if (iVar2 == *(int *)((longlong)puVar6 + 0xc)) {
      puVar8 = (undefined8 *)FUN_00434b50(*(int *)(puVar6 + 1) + 1);
      memcpy(puVar8 + 2,puVar6 + 2,(longlong)*(int *)((longlong)puVar6 + 0x14) * 4 + 8);
      FUN_00434c50(puVar6);
      iVar2 = *(int *)((longlong)puVar8 + 0x14);
    }
    *(int *)((longlong)puVar8 + 0x14) = iVar2 + 1;
    *(undefined4 *)((longlong)puVar8 + (longlong)iVar2 * 4 + 0x18) = 1;
  }
  return puVar8;
}


