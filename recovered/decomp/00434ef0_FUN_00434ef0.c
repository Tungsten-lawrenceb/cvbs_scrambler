// 00434ef0  undefined8 * FUN_00434ef0(undefined8 * param_1, uint param_2)
// callers: 3  callees: 6


undefined8 * FUN_00434ef0(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  if (((param_2 & 3) != 0) &&
     (param_1 = FUN_00434cc0(param_1,*(int *)(&DAT_00438ae0 + (longlong)(int)((param_2 & 3) - 1) * 4
                                             ),0), param_1 == (undefined8 *)0x0)) {
    return (undefined8 *)0x0;
  }
  uVar3 = (int)param_2 >> 2;
  if (uVar3 != 0) {
    puVar2 = DAT_00444740;
    if (DAT_00444740 == (undefined8 *)0x0) {
      FUN_00434a20(1);
      puVar2 = DAT_00444740;
      if (DAT_00444740 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)FUN_00434b50(1);
        if (puVar2 == (undefined8 *)0x0) {
          DAT_00444740 = (undefined8 *)0x0;
          return (undefined8 *)0x0;
        }
        DAT_00444740 = puVar2;
        *(undefined8 *)((longlong)puVar2 + 0x14) = 0x27100000001;
        *puVar2 = 0;
      }
      if (DAT_004450b0 == 2) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004450e8);
      }
    }
    while( true ) {
      puVar4 = puVar2;
      uVar1 = uVar3 & 1;
      uVar3 = (int)uVar3 >> 1;
      if (uVar1 != 0) {
        puVar2 = (undefined8 *)FUN_00434da0((longlong)param_1,(longlong)puVar4);
        if (puVar2 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        FUN_00434c50(param_1);
        param_1 = puVar2;
      }
      if (uVar3 == 0) break;
      puVar2 = (undefined8 *)*puVar4;
      if ((undefined8 *)*puVar4 == (undefined8 *)0x0) {
        FUN_00434a20(1);
        puVar2 = (undefined8 *)*puVar4;
        if (puVar2 == (undefined8 *)0x0) {
          puVar2 = (undefined8 *)FUN_00434da0((longlong)puVar4,(longlong)puVar4);
          *puVar4 = puVar2;
          if (puVar2 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          *puVar2 = 0;
        }
        if (DAT_004450b0 == 2) {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004450e8);
        }
      }
    }
  }
  return param_1;
}


