// 0041b77f  undefined FUN_0041b77f(uint * param_1, uint param_2, char param_3)
// callers: 6  callees: 4


void FUN_0041b77f(uint *param_1,uint param_2,char param_3)

{
  uint local_res10;
  void *local_50;
  
  local_res10 = param_2;
  if ((ulonglong)param_2 % 2 != 0) {
    local_res10 = param_2 + 1;
  }
  if (param_3 == '\0') {
    local_50 = malloc((ulonglong)local_res10 + 2);
  }
  else {
    local_50 = calloc((ulonglong)local_res10 + 2,1);
  }
  if (*(longlong *)(param_1 + 2) != 0) {
    if (local_res10 < param_1[4]) {
      param_1[4] = local_res10;
    }
    memcpy(local_50,*(void **)(param_1 + 2),(ulonglong)param_1[4]);
    free(*(void **)(param_1 + 2));
  }
  *(void **)(param_1 + 2) = local_50;
  *param_1 = local_res10;
  *(undefined1 *)(*(longlong *)(param_1 + 2) + (ulonglong)param_1[4]) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 2) + (ulonglong)param_1[4] + 1) = 0;
  return;
}


