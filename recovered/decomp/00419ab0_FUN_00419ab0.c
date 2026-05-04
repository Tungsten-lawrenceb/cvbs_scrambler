// 00419ab0  char FUN_00419ab0(byte param_1)
// callers: 12  callees: 0


char FUN_00419ab0(byte param_1)

{
  undefined1 local_41;
  
  if ((param_1 < 0x30) || (0x39 < param_1)) {
    if ((param_1 < 0x61) || (0x66 < param_1)) {
      if ((param_1 < 0x41) || (0x46 < param_1)) {
        local_41 = -1;
      }
      else {
        local_41 = param_1 - 0x37;
      }
    }
    else {
      local_41 = param_1 + 0xa9;
    }
  }
  else {
    local_41 = param_1 - 0x30;
  }
  return local_41;
}


