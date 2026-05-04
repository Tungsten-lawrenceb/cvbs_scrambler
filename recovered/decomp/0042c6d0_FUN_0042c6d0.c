// 0042c6d0  longlong * FUN_0042c6d0(ulonglong param_1, int param_2)
// callers: 1  callees: 2


longlong * FUN_0042c6d0(ulonglong param_1,int param_2)

{
  longlong *plVar1;
  
  plVar1 = thunk_FUN_0042c520((undefined8 *)0x0,param_1);
  if (plVar1 != (longlong *)0x0) {
    memset((void *)*plVar1,param_2,param_1);
    *(undefined1 *)(*plVar1 + param_1) = 0;
    return plVar1;
  }
  return (longlong *)&DAT_00445150;
}


