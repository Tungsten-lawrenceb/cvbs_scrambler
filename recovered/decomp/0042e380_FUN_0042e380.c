// 0042e380  undefined2 * FUN_0042e380(longlong param_1)
// callers: 1  callees: 1


undefined2 * FUN_0042e380(longlong param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  if (param_1 < 1) {
    return (undefined2 *)0x0;
  }
  puVar1 = malloc(param_1 * 2 + 2);
  if (puVar1 != (undefined2 *)0x0) {
    puVar2 = puVar1;
    do {
      puVar3 = puVar2 + 1;
      *puVar2 = 0x20;
      puVar2 = puVar3;
    } while (puVar1 + param_1 != puVar3);
    puVar1[param_1] = 0;
    return puVar1;
  }
  return (undefined2 *)0x0;
}


