// 0042ec50  undefined FUN_0042ec50(longlong param_1)
// callers: 1  callees: 1


void FUN_0042ec50(longlong param_1)

{
  if (*(void **)(param_1 + 0x40) != (void *)0x0) {
    free(*(void **)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}


