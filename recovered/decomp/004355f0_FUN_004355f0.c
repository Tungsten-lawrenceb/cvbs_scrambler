// 004355f0  undefined FUN_004355f0(char * param_1, char * param_2)
// callers: 1  callees: 0


void FUN_004355f0(char *param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = *param_2;
  *param_1 = cVar1;
  while (cVar1 != '\0') {
    param_2 = param_2 + 1;
    cVar1 = *param_2;
    param_1 = param_1 + 1;
    *param_1 = cVar1;
  }
  return;
}


