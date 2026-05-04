// 00430160  undefined8 FUN_00430160(undefined8 param_1)
// callers: 3  callees: 0


undefined8 FUN_00430160(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = DAT_00443e10;
  LOCK();
  DAT_00443e10 = param_1;
  UNLOCK();
  return uVar1;
}


