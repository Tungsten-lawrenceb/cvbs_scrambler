// 0042c520  undefined8 * FUN_0042c520(undefined8 * param_1, ulonglong param_2)
// callers: 5  callees: 3


undefined8 * FUN_0042c520(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    param_1 = (undefined8 *)FUN_0042c2e0();
    if (param_1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    puVar1 = FUN_0042c410(param_1,param_2,0);
    if (puVar1 == (undefined8 *)0x0) {
      FUN_0042c350(param_1);
      return (undefined8 *)0x0;
    }
  }
  else {
    puVar1 = FUN_0042c410(param_1,param_2,0);
    if (puVar1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
  }
  param_1[1] = param_1[1] | 0x8000000000000000;
  return param_1;
}


