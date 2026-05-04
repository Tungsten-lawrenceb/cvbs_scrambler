// 0042ce40  undefined8 * FUN_0042ce40(undefined8 param_1, undefined8 param_2)
// callers: 3  callees: 1


undefined8 * FUN_0042ce40(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0042c2e0();
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_2;
    return puVar1;
  }
  return (undefined8 *)&DAT_00445150;
}


