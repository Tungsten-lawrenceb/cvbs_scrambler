// 00435730  double FUN_00435730(longlong param_1, longlong param_2)
// callers: 2  callees: 1


double FUN_00435730(longlong param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  int local_30;
  int local_2c [3];
  
  dVar1 = (double)FUN_004353d0(param_1,&local_30);
  dVar2 = (double)FUN_004353d0(param_2,local_2c);
  local_2c[0] = ((*(int *)(param_1 + 0x14) - *(int *)(param_2 + 0x14)) * 0x20 + local_30) -
                local_2c[0];
  if (local_2c[0] < 1) {
    dVar2 = (double)((ulonglong)(uint)((int)((ulonglong)dVar2 >> 0x20) + local_2c[0] * -0x100000) <<
                     0x20 | (ulonglong)dVar2 & 0xffffffff);
  }
  else {
    dVar1 = (double)((ulonglong)(uint)(local_2c[0] * 0x100000 + (int)((ulonglong)dVar1 >> 0x20)) <<
                     0x20 | (ulonglong)dVar1 & 0xffffffff);
  }
  return dVar1 / dVar2;
}


