// 0042ab60  undefined FUN_0042ab60(longlong param_1, ulonglong param_2)
// callers: 2  callees: 2


void FUN_0042ab60(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  
  uVar1 = FUN_0042eaa0(param_1);
  plVar2 = (longlong *)(*(longlong *)(param_1 + 8) + -0x18 + uVar1 * 0x18);
  if (param_2 < uVar1) {
    do {
      if (*plVar2 != 0) {
        FUN_0042c680(plVar2);
      }
      uVar1 = uVar1 - 1;
      plVar2 = plVar2 + -3;
    } while (uVar1 != param_2);
  }
  return;
}


