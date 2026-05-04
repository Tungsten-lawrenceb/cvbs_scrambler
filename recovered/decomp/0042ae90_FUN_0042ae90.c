// 0042ae90  undefined FUN_0042ae90(undefined8 * param_1, ulonglong param_2, int param_3, undefined * param_4, undefined * param_5, undefined8 param_6, ulonglong param_7, longlong * param_8)
// callers: 2  callees: 6


void FUN_0042ae90(undefined8 *param_1,ulonglong param_2,int param_3,undefined *param_4,
                 undefined *param_5,undefined8 param_6,ulonglong param_7,longlong *param_8)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  size_t _NewSize;
  ulonglong uVar4;
  void *pvVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong local_c0 [8];
  longlong local_80 [8];
  
  if (((param_1[4] != param_7) && (param_1[4] != 0)) ||
     (uVar7 = (ulonglong)((uint)param_1[5] & 0x20), (param_1[5] & 0x20) != 0)) {
LAB_0042af12:
    FUN_0042b380(1);
    return;
  }
  uVar2 = 0;
  if (param_7 != 0) {
    do {
      lVar3 = *param_8;
      lVar1 = param_8[1];
      param_8 = param_8 + 2;
      local_c0[uVar2] = lVar3;
      local_80[uVar2] = lVar1;
      if (lVar1 < lVar3) goto LAB_0042af12;
      uVar2 = uVar2 + 1;
    } while (param_7 != uVar2);
  }
  uVar2 = FUN_0042ea00(param_7,local_c0,local_80);
  lVar3 = FUN_0042ea40(param_7,local_c0,(longlong)local_80);
  _NewSize = uVar2 * param_2;
  if ((param_5 != (undefined *)0x0) && (uVar4 = FUN_0042eaa0((longlong)param_1), uVar2 < uVar4)) {
    (*(code *)param_5)(param_1,param_6,uVar2);
  }
  pvVar5 = realloc((void *)param_1[1],_NewSize);
  if (pvVar5 == (void *)0x0) {
    FUN_0042b380(4);
    return;
  }
  param_1[1] = pvVar5;
  uVar2 = param_1[2];
  if (uVar2 < _NewSize) {
    if (param_4 == (undefined *)0x0) {
      if (param_3 == 0) goto LAB_0042b002;
      memset((void *)((longlong)pvVar5 + uVar2),0,_NewSize - uVar2);
    }
    else {
      uVar4 = (_NewSize - uVar2) / param_2;
      if (_NewSize - uVar2 < param_2) goto LAB_0042b002;
      do {
        (*(code *)param_4)();
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    pvVar5 = (void *)param_1[1];
  }
LAB_0042b002:
  param_1[3] = param_2;
  *param_1 = (void *)((longlong)pvVar5 + lVar3 * param_2);
  param_1[2] = _NewSize;
  param_1[4] = param_7;
  plVar6 = param_1 + 6;
  if (param_7 != 0) {
    do {
      lVar3 = local_80[uVar7];
      lVar1 = local_c0[uVar7];
      uVar7 = uVar7 + 1;
      plVar6[1] = lVar1;
      plVar6[2] = lVar3;
      *plVar6 = (lVar3 - lVar1) + 1;
      plVar6 = plVar6 + 3;
    } while (param_7 != uVar7);
  }
  FUN_0042b380(0);
  return;
}


