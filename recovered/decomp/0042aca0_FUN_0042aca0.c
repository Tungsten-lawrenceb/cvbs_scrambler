// 0042aca0  undefined FUN_0042aca0(undefined8 * param_1, longlong param_2, int param_3, undefined * param_4, ulonglong param_5, longlong * param_6)
// callers: 3  callees: 5


void FUN_0042aca0(undefined8 *param_1,longlong param_2,int param_3,undefined *param_4,
                 ulonglong param_5,longlong *param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  longlong *plVar5;
  size_t _Size;
  longlong local_c0 [8];
  longlong local_80 [8];
  
  uVar1 = (ulonglong)((uint)param_1[5] & 0x20);
  if (((param_1[5] & 0x20) != 0) || ((param_1[4] != param_5 && (param_1[4] != 0)))) {
LAB_0042ad3b:
    FUN_0042b380(1);
    return;
  }
  plVar5 = param_1 + 6;
  if (param_5 != 0) {
    do {
      lVar2 = *param_6;
      lVar3 = param_6[1];
      param_6 = param_6 + 2;
      local_c0[uVar1] = lVar2;
      local_80[uVar1] = lVar3;
      if (lVar3 < lVar2) goto LAB_0042ad3b;
      uVar1 = uVar1 + 1;
      plVar5[1] = lVar2;
      plVar5[2] = lVar3;
      *plVar5 = (lVar3 - lVar2) + 1;
      plVar5 = plVar5 + 3;
    } while (param_5 != uVar1);
  }
  lVar2 = FUN_0042ea00(param_5,local_c0,local_80);
  lVar3 = FUN_0042ea40(param_5,local_c0,(longlong)local_80);
  _Size = lVar2 * param_2;
  if ((param_3 == 0) || (param_4 != (undefined *)0x0)) {
    pvVar4 = malloc(_Size);
    param_1[1] = pvVar4;
    if (pvVar4 == (void *)0x0) goto LAB_0042ae08;
    if ((param_4 != (undefined *)0x0) && (lVar2 != 0)) {
      do {
        (*(code *)param_4)();
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
      pvVar4 = (void *)param_1[1];
    }
  }
  else {
    pvVar4 = calloc(_Size,1);
    param_1[1] = pvVar4;
    if (pvVar4 == (void *)0x0) {
LAB_0042ae08:
      FUN_0042b380(4);
      return;
    }
  }
  param_1[2] = _Size;
  *param_1 = (void *)(lVar3 * param_2 + (longlong)pvVar4);
  param_1[3] = param_2;
  param_1[4] = param_5;
  FUN_0042b380(0);
  return;
}


