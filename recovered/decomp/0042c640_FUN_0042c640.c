// 0042c640  undefined FUN_0042c640(undefined1 * param_1, void * param_2, size_t param_3)
// callers: 4  callees: 1


void FUN_0042c640(undefined1 *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
  if (param_2 == (void *)0x0) {
    *param_1 = 0;
    return;
  }
  if ((longlong)param_3 < 1) {
    *param_1 = 0;
    return;
  }
  pvVar1 = memcpy(param_1,param_2,param_3);
  *(undefined1 *)((longlong)pvVar1 + param_3) = 0;
  return;
}


