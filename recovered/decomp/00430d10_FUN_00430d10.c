// 00430d10  int FUN_00430d10(void)
// callers: 2  callees: 4


int FUN_00430d10(void)

{
  int iVar1;
  IMAGE_DOS_HEADER *BaseAddress;
  char *pcVar2;
  longlong lVar3;
  DWORD EntryCount;
  int *piVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  longlong lVar7;
  
  BaseAddress = FUN_00431480();
  iVar1 = DAT_00444428;
  if ((DAT_00444428 == 0) && (BaseAddress != (IMAGE_DOS_HEADER *)0x0)) {
    DAT_00444428 = 1;
    pcVar2 = FUN_004312b0(".pdata");
    if (pcVar2 == (char *)0x0) {
      lVar7 = 0;
      puVar5 = (undefined8 *)&DAT_00444540;
      for (lVar3 = 0x30; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      puVar5 = (undefined8 *)&DAT_00444440;
      for (lVar3 = 0x20; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      piVar4 = &DAT_00444540;
      puVar6 = &DAT_00444440;
      do {
        lVar3 = FUN_00431410(lVar7);
        if (lVar3 == 0) {
          if (lVar7 == 0) goto LAB_00430d4c;
          EntryCount = (DWORD)lVar7;
          goto LAB_00430df5;
        }
        *puVar6 = 9;
        lVar7 = lVar7 + 1;
        *(int *)(puVar6 + 4) = 0x430b50 - (int)BaseAddress;
        iVar1 = *(int *)(lVar3 + 0xc);
        *piVar4 = iVar1;
        piVar4[1] = iVar1 + *(int *)(lVar3 + 8);
        piVar4[2] = (int)puVar6 - (int)BaseAddress;
        piVar4 = piVar4 + 3;
        puVar6 = puVar6 + 8;
      } while (lVar7 != 0x20);
      EntryCount = 0x20;
LAB_00430df5:
      RtlAddFunctionTable((PRUNTIME_FUNCTION)&DAT_00444540,EntryCount,(DWORD64)BaseAddress);
    }
LAB_00430d4c:
    iVar1 = 1;
  }
  return iVar1;
}


