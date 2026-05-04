// 0042f5e0  HANDLE FUN_0042f5e0(int param_1)
// callers: 5  callees: 3


HANDLE FUN_0042f5e0(int param_1)

{
  BOOL BVar1;
  longlong lVar2;
  uint local_1c;
  
  if (DAT_00440db0 == 0) {
    DAT_00440db0 = 1;
    DAT_0044a2c0 = GetStdHandle(0xfffffff6);
    DAT_0044a2c8 = GetStdHandle(0xfffffff5);
    if ((DAT_0044a2c0 != (HANDLE)0x0) &&
       (BVar1 = GetConsoleMode(DAT_0044a2c0,&local_1c), BVar1 != 0)) {
      local_1c = local_1c | 1;
      SetConsoleMode(DAT_0044a2c0,local_1c);
    }
    DAT_0044a2f0 = 0;
    DAT_0044a2d0 = DAT_0044a2c8;
  }
  if (param_1 == 0) {
    lVar2 = (longlong)(int)DAT_0044a2f0;
    return (&DAT_0044a2d0)[lVar2];
  }
  return DAT_0044a2c0;
}


