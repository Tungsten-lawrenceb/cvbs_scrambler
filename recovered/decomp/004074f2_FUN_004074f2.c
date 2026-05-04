// 004074f2  longlong FUN_004074f2(int * param_1)
// callers: 16  callees: 1


longlong FUN_004074f2(int *param_1)

{
  longlong local_50;
  
  local_50 = FUN_00401580(*(longlong *)(param_1 + 2));
  while( true ) {
    if (local_50 == 0) {
      return 0;
    }
    if (*(int *)(local_50 + 0x24) == *param_1) break;
    local_50 = *(longlong *)(local_50 + 0x768);
  }
  return local_50;
}


