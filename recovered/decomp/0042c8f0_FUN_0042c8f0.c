// 0042c8f0  char * FUN_0042c8f0(char * param_1, longlong param_2, int param_3)
// callers: 3  callees: 0


char * FUN_0042c8f0(char *param_1,longlong param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar2 = (char *)0x0;
  if ((param_1 != (char *)0x0) && (pcVar2 = param_1, 0 < param_2)) {
    pcVar1 = param_1 + param_2;
    do {
      if (*param_1 != param_3) {
        return param_1;
      }
      param_1 = param_1 + 1;
      pcVar2 = param_1;
    } while (param_1 != pcVar1);
  }
  return pcVar2;
}


