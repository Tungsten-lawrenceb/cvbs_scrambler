// 0042c260  undefined8 * FUN_0042c260(ulonglong param_1)
// callers: 1  callees: 3


undefined8 * FUN_0042c260(ulonglong param_1)

{
  undefined8 *puVar1;
  size_t sVar2;
  
  puVar1 = thunk_FUN_0042c520((undefined8 *)0x0,0x18);
  if (puVar1 != (undefined8 *)0x0) {
    _ui64toa(param_1,(char *)*puVar1,10);
    sVar2 = strlen((char *)*puVar1);
    puVar1[1] = puVar1[1] & 0x8000000000000000 | sVar2;
    return puVar1;
  }
  return (undefined8 *)&DAT_00445150;
}


