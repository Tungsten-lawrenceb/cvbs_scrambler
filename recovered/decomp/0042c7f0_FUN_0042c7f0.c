// 0042c7f0  longlong * FUN_0042c7f0(byte param_1, int param_2)
// callers: 5  callees: 1


longlong * FUN_0042c7f0(byte param_1,int param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar2 = (ulonglong)param_1;
  if (param_2 < 1) {
    if (uVar2 != 0) {
      param_2 = 0;
      uVar3 = uVar2;
      do {
        param_2 = param_2 + 1;
        uVar3 = uVar3 >> 4;
      } while (uVar3 != 0);
      plVar1 = thunk_FUN_0042c520((undefined8 *)0x0,(longlong)param_2);
      goto joined_r0x0042c8b6;
    }
    uVar3 = 1;
    param_2 = 1;
  }
  else {
    uVar3 = (ulonglong)param_2;
  }
  plVar1 = thunk_FUN_0042c520((undefined8 *)0x0,uVar3);
joined_r0x0042c8b6:
  if (plVar1 != (longlong *)0x0) {
    lVar4 = (longlong)(int)(param_2 - 1U);
    do {
      *(undefined *)(*plVar1 + lVar4) = (&DAT_00438190)[(uint)uVar2 & 0xf];
      lVar4 = lVar4 + -1;
      uVar2 = uVar2 >> 4;
    } while (lVar4 != ((longlong)param_2 + -2) - (ulonglong)(param_2 - 1U));
    *(undefined1 *)(*plVar1 + (longlong)param_2) = 0;
    return plVar1;
  }
  return (longlong *)&DAT_00445150;
}


