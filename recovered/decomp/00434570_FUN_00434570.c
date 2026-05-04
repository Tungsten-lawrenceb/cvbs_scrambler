// 00434570  undefined FUN_00434570(void)
// callers: 3  callees: 0


void FUN_00434570(void)

{
  char cVar1;
  ulonglong uVar2;
  byte *pbVar3;
  
  pbVar3 = &DAT_00438ac0;
  uVar2 = 0x30;
  do {
    cVar1 = (char)pbVar3;
    pbVar3 = pbVar3 + 1;
    (&DAT_0044a320)[uVar2] = cVar1 + 'P';
    uVar2 = (ulonglong)*pbVar3;
  } while (*pbVar3 != 0);
  pbVar3 = &DAT_00438acb;
  uVar2 = 0x61;
  do {
    cVar1 = (char)pbVar3;
    pbVar3 = pbVar3 + 1;
    (&DAT_0044a320)[uVar2] = cVar1 + 'O';
    uVar2 = (ulonglong)*pbVar3;
  } while (*pbVar3 != 0);
  pbVar3 = &DAT_00438ad2;
  uVar2 = 0x41;
  do {
    cVar1 = (char)pbVar3;
    pbVar3 = pbVar3 + 1;
    (&DAT_0044a320)[uVar2] = cVar1 + 'H';
    uVar2 = (ulonglong)*pbVar3;
  } while (*pbVar3 != 0);
  return;
}


