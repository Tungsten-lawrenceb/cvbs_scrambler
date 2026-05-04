// 0041e597  uint * FUN_0041e597(uint * param_1, HWND param_2)
// callers: 2  callees: 8


uint * FUN_0041e597(uint *param_1,HWND param_2)

{
  uint uVar1;
  LRESULT LVar2;
  wchar_t *pwVar3;
  LPARAM lParam;
  uint local_60 [7];
  int local_44;
  
  LVar2 = SendMessageW(param_2,0xe,0,0);
  local_44 = (int)LVar2;
  pwVar3 = FUN_0042e380((longlong)local_44 + 1);
  FUN_0041b16e(local_60,pwVar3);
  FUN_0042ded0(pwVar3);
  lParam = FUN_0041b40c((longlong)local_60);
  SendMessageW(param_2,0xd,(longlong)local_44 + 1,lParam);
  uVar1 = FUN_0041b435((longlong)local_60);
  pwVar3 = (wchar_t *)FUN_0041b40c((longlong)local_60);
  pwVar3 = FUN_0042e140(pwVar3,(ulonglong)uVar1 - 1);
  FUN_0041b16e(param_1,pwVar3);
  FUN_0042ded0(pwVar3);
  FUN_0041b3ab((longlong)local_60);
  return param_1;
}


