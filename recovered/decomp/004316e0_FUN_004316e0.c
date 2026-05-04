// 004316e0  double FUN_004316e0(double param_1)
// callers: 2  callees: 0


double FUN_004316e0(double param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  double dVar10;
  double local_10;
  
  uVar8 = SUB84(param_1,0);
  uVar5 = (ulonglong)param_1 >> 0x20;
  uVar4 = (uint)((ulonglong)param_1 >> 0x20);
  uVar3 = (int)uVar4 >> 0x14 & 0x7ff;
  iVar1 = uVar3 - 0x3ff;
  dVar10 = param_1;
  if (iVar1 < 0x34) {
    if (iVar1 < 0x14) {
      if (iVar1 < 0) {
        if (((0.0 < param_1 + 1e+300) && (dVar10 = 0.0, (longlong)param_1 < 0)) &&
           (dVar10 = param_1, ((ulonglong)param_1 & 0x7fffffff00000000) != 0 || uVar8 != 0)) {
          local_10 = -1.0;
          dVar10 = local_10;
        }
      }
      else {
        uVar3 = 0xfffff >> ((byte)iVar1 & 0x1f);
        if (((uVar8 != 0) || ((uVar3 & uVar4) != 0)) && (0.0 < param_1 + 1e+300)) {
          iVar6 = 0;
          if ((longlong)param_1 < 0) {
            iVar6 = 0x100000 >> ((byte)iVar1 & 0x1f);
          }
          return (double)((ulonglong)(~uVar3 & uVar4 + iVar6) << 0x20);
        }
      }
    }
    else {
      cVar2 = (char)uVar3;
      uVar3 = 0xffffffff >> (cVar2 - 0x13U & 0x1f);
      if (((uVar3 & uVar8) != 0) && (0.0 < param_1 + 1e+300)) {
        if (((longlong)param_1 < 0) &&
           ((iVar1 == 0x14 ||
            (uVar7 = 1 << (0x33U - cVar2 & 0x1f), bVar9 = CARRY4(uVar7,uVar8), uVar8 = uVar7 + uVar8
            , bVar9)))) {
          uVar5 = (ulonglong)(uVar4 + 1);
        }
        return (double)(uVar5 << 0x20 | (ulonglong)(uVar8 & ~uVar3));
      }
    }
  }
  else if (iVar1 == 0x400) {
    return param_1 + param_1;
  }
  return dVar10;
}


