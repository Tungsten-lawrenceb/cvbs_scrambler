// 0042c730  longlong * FUN_0042c730(ulonglong param_1, int param_2)
// callers: 1  callees: 1


longlong * FUN_0042c730(ulonglong param_1,int param_2)

{
  longlong *plVar1;
  
  if ((longlong)param_1 < 1) {
    return (longlong *)&DAT_00445150;
  }
  plVar1 = FUN_0042c6d0(param_1,param_2);
  return plVar1;
}


