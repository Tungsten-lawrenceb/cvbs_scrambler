// 0042d150  void * FUN_0042d150(longlong param_1)
// callers: 1  callees: 1


void * FUN_0042d150(longlong param_1)

{
  void *pvVar1;
  
  if (0 < param_1) {
    pvVar1 = malloc(param_1 * 2 + 2);
    return pvVar1;
  }
  return (void *)0x0;
}


