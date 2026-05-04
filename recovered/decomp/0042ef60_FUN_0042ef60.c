// 0042ef60  int FUN_0042ef60(void)
// callers: 1  callees: 2


int FUN_0042ef60(void)

{
  BOOL BVar1;
  int iVar2;
  HANDLE hConsoleOutput;
  _CONSOLE_SCREEN_BUFFER_INFO local_30;
  
  hConsoleOutput = FUN_0042f5e0(0);
  BVar1 = GetConsoleScreenBufferInfo(hConsoleOutput,&local_30);
  iVar2 = 0;
  if (BVar1 != 0) {
    iVar2 = (int)local_30.dwCursorPosition.X;
  }
  return iVar2;
}


