// 0042c920  char * FUN_0042c920(char * param_1, longlong param_2, int param_3)
// callers: 1  callees: 0


char * FUN_0042c920(char *param_1,longlong param_2,int param_3)

{
  char *pcVar1;
  
  if ((param_1 != (char *)0x0) && (0 < param_2)) {
    pcVar1 = param_1 + param_2 + -1;
    while ((*pcVar1 == '\0' || (*pcVar1 == param_3))) {
      pcVar1 = pcVar1 + -1;
      if ((longlong)pcVar1 - (longlong)param_1 == -1) {
        return pcVar1;
      }
    }
    return pcVar1;
  }
  return param_1;
}


