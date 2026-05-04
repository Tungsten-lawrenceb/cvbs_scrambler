// 0042cee0  undefined8 * FUN_0042cee0(undefined8 * param_1)
// callers: 1  callees: 1


undefined8 * FUN_0042cee0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0042c2e0();
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1] | 0x8000000000000000;
    puVar1[2] = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return puVar1;
  }
  return (undefined8 *)&DAT_00445150;
}


