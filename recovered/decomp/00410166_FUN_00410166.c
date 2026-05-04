// 00410166  uint FUN_00410166(uint param_1, uint param_2)
// callers: 22  callees: 1


uint FUN_00410166(uint param_1,uint param_2)

{
  uint nIndex;
  DWORD DVar1;
  uint local_48;
  
  local_48 = param_1;
  if ((param_1 & 0xffffff) == 0x7f7f7f) {
    nIndex = param_1 >> 0x18;
    if (nIndex == 0x19) {
      return param_2;
    }
    if (nIndex < 0x1f) {
      DVar1 = GetSysColor(nIndex);
      local_48 = DVar1 | 0xff000000;
    }
  }
  return (int)(short)(local_48 >> 0x10) & 0xffU | (local_48 & 0xff) << 0x10 | local_48 & 0xff00ff00;
}


