// 0040a8cd  bool FUN_0040a8cd(int * param_1)
// callers: 3  callees: 1


bool FUN_0040a8cd(int *param_1)

{
  longlong lVar1;
  undefined1 local_41;
  
  local_41 = false;
  lVar1 = FUN_004074f2(param_1);
  if (lVar1 != 0) {
    local_41 = (*(ulonglong *)(lVar1 + 0x6b8) & 2) != 0;
  }
  return local_41;
}


