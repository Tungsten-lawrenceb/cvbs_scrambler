// 0041b004  undefined4 FUN_0041b004(void)
// callers: 1  callees: 4


undefined4 FUN_0041b004(void)

{
  int iVar1;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_44;
  
  local_44 = 0;
  local_50 = 0;
  local_60 = 0;
  local_58 = 0;
  local_68 = 1;
  GdiplusStartup(&local_50,&local_68,0);
  iVar1 = FUN_0041afaf();
  if (iVar1 == 0) {
    FUN_004120dd(&DAT_0043e368,(HWND)0x0,'\x01',0);
    GdiplusShutdown(local_50);
    local_44 = 0;
  }
  else {
    local_44 = 0xffffffff;
  }
  return local_44;
}


