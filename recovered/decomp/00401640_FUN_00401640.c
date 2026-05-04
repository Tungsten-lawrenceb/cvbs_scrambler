// 00401640  undefined FUN_00401640(longlong param_1, undefined8 param_2)
// callers: 10  callees: 1


void FUN_00401640(longlong param_1,undefined8 param_2)

{
  void *pvVar1;
  int local_4c;
  void *local_48;
  
  if (DAT_0043e270 == (void *)0x0) {
    DAT_0043e270 = calloc(0x650,1);
  }
  local_48 = DAT_0043e270;
  while( true ) {
    local_4c = 0;
    do {
      if (*(longlong *)((longlong)local_48 + (longlong)local_4c * 8) == param_1) {
        *(undefined8 *)((longlong)local_48 + (longlong)local_4c * 8 + 8) = param_2;
        return;
      }
      local_4c = local_4c + 2;
    } while (local_4c < 199);
    if (*(longlong *)((longlong)local_48 + 0x648) == 0) break;
    local_48 = *(void **)((longlong)local_48 + 0x648);
  }
  do {
    local_4c = 0;
    do {
      if (*(longlong *)((longlong)local_48 + (longlong)local_4c * 8) == 0) {
        *(longlong *)((longlong)local_48 + (longlong)local_4c * 8) = param_1;
        *(undefined8 *)((longlong)local_48 + (longlong)local_4c * 8 + 8) = param_2;
        return;
      }
      local_4c = local_4c + 2;
    } while (local_4c < 199);
    if (*(longlong *)((longlong)local_48 + 0x648) == 0) {
      *(void **)((longlong)local_48 + 0x640) = local_48;
      pvVar1 = calloc(0x650,1);
      *(void **)((longlong)local_48 + 0x648) = pvVar1;
    }
    local_48 = *(void **)((longlong)local_48 + 0x648);
  } while( true );
}


