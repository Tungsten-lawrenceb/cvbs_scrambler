// 0042e940  undefined FUN_0042e940(longlong param_1, undefined * param_2)
// callers: 1  callees: 1


void FUN_0042e940(longlong param_1,undefined *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_0042eaa0(param_1);
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 8);
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    (*(code *)param_2)(lVar2);
    lVar2 = lVar2 + lVar1;
  }
  return;
}


