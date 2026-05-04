// 00421c7d  ULONG_PTR FUN_00421c7d(longlong * param_1)
// callers: 2  callees: 1


ULONG_PTR FUN_00421c7d(longlong *param_1)

{
  undefined8 local_48;
  
  local_48 = 0;
  if (*param_1 != 0) {
    local_48 = GetClassLongPtrW((HWND)*param_1,-10);
  }
  return local_48;
}


