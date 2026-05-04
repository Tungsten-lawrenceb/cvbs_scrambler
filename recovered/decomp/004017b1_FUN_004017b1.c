// 004017b1  undefined FUN_004017b1(longlong param_1)
// callers: 1  callees: 0


void FUN_004017b1(longlong param_1)

{
  int local_4c;
  longlong local_48;
  
  if (DAT_0043e270 != 0) {
    local_48 = DAT_0043e270;
    while( true ) {
      local_4c = 0;
      do {
        if (*(longlong *)(local_48 + (longlong)local_4c * 8) == param_1) {
          *(undefined8 *)(local_48 + (longlong)local_4c * 8) = 0;
          *(undefined8 *)(local_48 + (longlong)local_4c * 8 + 8) = 0;
          return;
        }
        local_4c = local_4c + 2;
      } while (local_4c < 199);
      if (*(longlong *)(local_48 + 0x648) == 0) break;
      local_48 = *(longlong *)(local_48 + 0x648);
    }
  }
  return;
}


