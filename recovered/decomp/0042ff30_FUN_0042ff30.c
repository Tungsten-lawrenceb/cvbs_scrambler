// 0042ff30  undefined FUN_0042ff30(void)
// callers: 2  callees: 1


void FUN_0042ff30(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  
  uVar1 = 0;
  do {
    uVar2 = uVar1;
    uVar1 = uVar2 + 1;
  } while ((&DAT_00435ab0)[uVar2 + 1] != 0);
  if ((int)uVar2 != 0) {
    puVar3 = &DAT_00435ab0 + (uVar2 & 0xffffffff);
    do {
      (*(code *)*puVar3)();
      puVar3 = puVar3 + -1;
    } while (puVar3 != (undefined8 *)
                       (&UNK_00435aa8 + ((uVar2 & 0xffffffff) - (ulonglong)((int)uVar2 - 1)) * 8));
  }
  FUN_00401520(FUN_0042fef0);
  return;
}


