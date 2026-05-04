// 00421be1  undefined FUN_00421be1(undefined8 * param_1, HWND param_2, HWND param_3)
// callers: 1  callees: 1


void FUN_00421be1(undefined8 *param_1,HWND param_2,HWND param_3)

{
  undefined8 local_res10;
  
  local_res10 = param_2;
  if (param_2 == (HWND)0x0) {
    local_res10 = (HWND)*param_1;
  }
  FUN_0041e8a7(local_res10,param_3);
  return;
}


