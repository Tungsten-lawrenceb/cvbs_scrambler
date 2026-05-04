// 0042efc0  undefined FUN_0042efc0(void)
// callers: 1  callees: 2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042efc0(void)

{
  BOOL BVar1;
  HANDLE pvVar2;
  _CONSOLE_SCREEN_BUFFER_INFO local_40;
  
  pvVar2 = FUN_0042f5e0(0);
  BVar1 = GetConsoleScreenBufferInfo(pvVar2,&local_40);
  if (BVar1 == 0) {
    DAT_0044a2f8 = 0;
  }
  else {
    DAT_0044a2f8 = (ulonglong)
                   CONCAT24(local_40.srWindow.Bottom,
                            CONCAT22(local_40.dwSize.X + -1,local_40.srWindow.Top)) << 0x10;
  }
  pvVar2 = FUN_0042f5e0(0);
  BVar1 = GetConsoleScreenBufferInfo(pvVar2,&local_40);
  if (BVar1 != 0) {
    _DAT_00440da8 =
         CONCAT26(local_40.srWindow.Bottom,
                  CONCAT24(local_40.srWindow.Right,
                           CONCAT22(local_40.srWindow.Top,local_40.srWindow.Left)));
    return;
  }
  _DAT_00440da8 = 0;
  return;
}


