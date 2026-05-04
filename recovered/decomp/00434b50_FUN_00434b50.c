// 00434b50  undefined FUN_00434b50(int param_1)
// callers: 19  callees: 3


void FUN_00434b50(int param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_00434a20(0);
  iVar1 = DAT_004450b0;
  if (param_1 < 10) {
    puVar2 = *(undefined8 **)(&DAT_00445060 + (longlong)param_1 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined8 *)(&DAT_00445060 + (longlong)param_1 * 8) = *puVar2;
      goto joined_r0x00434bd1;
    }
    iVar4 = 1 << ((byte)param_1 & 0x1f);
    uVar3 = (longlong)(iVar4 + -1) * 4 + 0x27U >> 3 & 0xffffffff;
    if (0x120 < ((longlong)(PTR_DAT_00437f80 + -0x444760) >> 3) + uVar3) goto LAB_00434b64;
    puVar2 = (undefined8 *)PTR_DAT_00437f80;
    PTR_DAT_00437f80 = PTR_DAT_00437f80 + uVar3 * 8;
  }
  else {
LAB_00434b64:
    iVar4 = 1 << ((byte)param_1 & 0x1f);
    puVar2 = malloc((longlong)(iVar4 + -1) * 4 + 0x27U & 0x7fffffff8);
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
  }
  iVar1 = DAT_004450b0;
  *(int *)(puVar2 + 1) = param_1;
  *(int *)((longlong)puVar2 + 0xc) = iVar4;
joined_r0x00434bd1:
  if (iVar1 == 2) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004450c0);
  }
  puVar2[2] = 0;
  return;
}


