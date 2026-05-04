// 004100e2  uint FUN_004100e2(uint param_1, uint param_2)
// callers: 23  callees: 1


uint FUN_004100e2(uint param_1,uint param_2)

{
  uint nIndex;
  DWORD DVar1;
  
  if ((param_1 & 0xffffff) == 0x7f7f7f) {
    nIndex = param_1 >> 0x18;
    if (nIndex == 0x19) {
      return param_2;
    }
    if (nIndex < 0x1f) {
      DVar1 = GetSysColor(nIndex);
      return DVar1;
    }
  }
  return param_1 & 0xffffff;
}


