// 0042cd30  size_t FUN_0042cd30(char * param_1, longlong param_2)
// callers: 3  callees: 2


size_t FUN_0042cd30(char *param_1,longlong param_2)

{
  ulonglong uVar1;
  size_t sVar2;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  if (param_2 != -1) {
    sVar2 = strlen(param_1);
    return sVar2;
  }
  uVar1 = *(ulonglong *)(param_1 + 8);
  thunk_FUN_0042c5b0((undefined8 *)param_1);
  return uVar1 & 0x7fffffffffffffff;
}


