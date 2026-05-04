// 00401580  undefined8 FUN_00401580(longlong param_1)
// callers: 19  callees: 0


undefined8 FUN_00401580(longlong param_1)

{
  int local_54;
  longlong local_50;
  
  if (DAT_0043e270 != 0) {
    local_50 = DAT_0043e270;
    while( true ) {
      local_54 = 0;
      do {
        if (*(longlong *)(local_50 + (longlong)local_54 * 8) == param_1) {
          return *(undefined8 *)(local_50 + (longlong)local_54 * 8 + 8);
        }
        local_54 = local_54 + 2;
      } while (local_54 < 199);
      if (*(longlong *)(local_50 + 0x648) == 0) break;
      local_50 = *(longlong *)(local_50 + 0x648);
    }
  }
  return 0;
}


