// 0042a186  undefined FUN_0042a186(longlong param_1, undefined4 param_2)
// callers: 1  callees: 2


void FUN_0042a186(longlong param_1,undefined4 param_2)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
    GdipDeletePath(*(undefined8 *)(param_1 + 0x80));
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  GdipCreatePath(param_2,param_1 + 0x80);
  return;
}


