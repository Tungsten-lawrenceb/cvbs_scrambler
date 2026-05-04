// 0042eae0  undefined FUN_0042eae0(longlong param_1, undefined * param_2, ulonglong param_3)
// callers: 2  callees: 1


void FUN_0042eae0(longlong param_1,undefined *param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_0042eaa0(param_1);
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar4 = uVar2 - 1;
  lVar3 = uVar4 * lVar1 + *(longlong *)(param_1 + 8);
  if (param_3 < uVar2) {
    while( true ) {
      (*(code *)param_2)(lVar3);
      if (uVar4 == param_3) break;
      uVar4 = uVar4 - 1;
      lVar3 = lVar3 - lVar1;
    }
  }
  return;
}


