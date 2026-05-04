// 00411b98  undefined4 FUN_00411b98(HWND param_1)
// callers: 2  callees: 2


undefined4 FUN_00411b98(HWND param_1)

{
  BOOL BVar1;
  LRESULT LVar2;
  undefined4 local_44;
  
  local_44 = 0;
  BVar1 = IsWindow(param_1);
  if (BVar1 != 0) {
    LVar2 = SendMessageW(param_1,0xf0,0,0);
    if (LVar2 == 1) {
      local_44 = 0xffffffff;
    }
  }
  return local_44;
}


