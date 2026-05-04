// 00430470  undefined8 FUN_00430470(undefined4 * param_1)
// callers: 2  callees: 2


undefined8 FUN_00430470(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FILE *_File;
  char *pcVar5;
  
  switch(*param_1) {
  default:
    pcVar5 = "Unknown error";
    break;
  case 1:
    pcVar5 = "Argument domain error (DOMAIN)";
    break;
  case 2:
    pcVar5 = "Argument singularity (SIGN)";
    break;
  case 3:
    pcVar5 = "Overflow range error (OVERFLOW)";
    break;
  case 4:
    pcVar5 = "The result is too small to be represented (UNDERFLOW)";
    break;
  case 5:
    pcVar5 = "Total loss of significance (TLOSS)";
    break;
  case 6:
    pcVar5 = "Partial loss of significance (PLOSS)";
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 6);
  uVar3 = *(undefined8 *)(param_1 + 4);
  uVar4 = *(undefined8 *)(param_1 + 2);
  _File = FUN_00430130(2);
  fprintf(_File,"_matherr(): %s in %s(%g, %g)  (retval=%g)\n",pcVar5,uVar4,uVar3,uVar2,uVar1);
  return 0;
}


