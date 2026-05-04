// 0042e900  undefined FUN_0042e900(longlong param_1)
// callers: 2  callees: 2


void FUN_0042e900(longlong param_1)

{
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    memset(*(void **)(param_1 + 8),0,*(size_t *)(param_1 + 0x10));
    FUN_0042b380(0);
    return;
  }
  FUN_0042b380(0);
  return;
}


