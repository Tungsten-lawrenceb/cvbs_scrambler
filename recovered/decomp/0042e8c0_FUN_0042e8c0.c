// 0042e8c0  undefined FUN_0042e8c0(DWORD param_1, int param_2)
// callers: 2  callees: 3


void FUN_0042e8c0(DWORD param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_0042ee90(param_1);
    FUN_0042b380(0);
    return;
  }
  if (param_2 != 1) {
    FUN_0042b380(1);
    return;
  }
  Sleep(param_1);
  FUN_0042b380(0);
  return;
}


