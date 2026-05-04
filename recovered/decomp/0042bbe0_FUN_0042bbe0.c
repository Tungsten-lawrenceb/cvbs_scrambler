// 0042bbe0  double FUN_0042bbe0(char * param_1, longlong param_2)
// callers: 1  callees: 5


double FUN_0042bbe0(char *param_1,longlong param_2)

{
  byte bVar1;
  byte *pbVar2;
  char *_Memory;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  double dVar7;
  
  pbVar2 = (byte *)FUN_0042c8f0(param_1,param_2,0x20);
  lVar4 = param_2 - ((longlong)pbVar2 - (longlong)param_1);
  if (lVar4 < 1) {
    return 0.0;
  }
  bVar1 = *pbVar2;
  if (lVar4 != 1) {
    if (bVar1 == 0x26) {
      switch(pbVar2[1]) {
      case 0x42:
      case 0x62:
        lVar3 = 2;
        lVar6 = 2;
        iVar5 = 2;
        break;
      default:
        lVar3 = 1;
        lVar6 = 1;
        iVar5 = 8;
        break;
      case 0x48:
      case 0x68:
        lVar3 = 2;
        lVar6 = 2;
        iVar5 = 0x10;
        break;
      case 0x4f:
      case 0x6f:
        lVar3 = 2;
        lVar6 = 2;
        iVar5 = 8;
      }
      lVar4 = FUN_0042bfe0((char *)(pbVar2 + lVar3),lVar4 - lVar6,iVar5);
      return (double)lVar4;
    }
    if ((bVar1 == 0x30) && ((pbVar2[1] & 0xdf) == 0x58)) {
      return 0.0;
    }
  }
  _Memory = malloc(lVar4 + 1);
  lVar6 = 0;
  while( true ) {
    _Memory[lVar6] = bVar1 + ((bVar1 & 0xdf) == 0x44);
    lVar6 = lVar6 + 1;
    if (lVar4 == lVar6) break;
    bVar1 = pbVar2[lVar6];
  }
  _Memory[lVar4] = '\0';
  dVar7 = (double)FUN_00431600(_Memory,(longlong *)0x0);
  free(_Memory);
  return dVar7;
}


