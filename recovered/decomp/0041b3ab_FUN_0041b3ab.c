// 0041b3ab  undefined FUN_0041b3ab(longlong param_1)
// callers: 126  callees: 1


void FUN_0041b3ab(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    free(*(void **)(param_1 + 8));
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


