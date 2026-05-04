// 00431240  bool FUN_00431240(short * param_1)
// callers: 1  callees: 1


bool FUN_00431240(short *param_1)

{
  bool bVar1;
  
  if (*param_1 == 0x5a4d) {
    bVar1 = FUN_00431220((longlong)param_1);
    return bVar1;
  }
  return false;
}


