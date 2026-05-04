// 004357d0  undefined8 FUN_004357d0(undefined8 * param_1, char * param_2)
// callers: 4  callees: 0


undefined8 FUN_004357d0(undefined8 *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    pcVar3 = pcVar3 + 1;
    if (cVar1 == 0) {
      *param_1 = pcVar3;
      return 1;
    }
    iVar2 = (int)*pcVar3;
    if (iVar2 - 0x41U < 0x1a) {
      iVar2 = iVar2 + 0x20;
    }
  } while (iVar2 == cVar1);
  return 0;
}


