// 0042cf50  undefined8 * FUN_0042cf50(longlong * param_1)
// callers: 2  callees: 5


undefined8 * FUN_0042cf50(longlong *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  if (param_1 == (longlong *)0x0) {
    return (undefined8 *)&DAT_00445150;
  }
  if (((char *)*param_1 != (char *)0x0) && ((param_1[1] & 0x7fffffffffffffffU) != 0)) {
    pcVar2 = FUN_0042c920((char *)*param_1,param_1[1] & 0x7fffffffffffffffU,0x20);
    pcVar1 = (char *)*param_1;
    if (0 < (longlong)(pcVar2 + (1 - (longlong)pcVar1))) {
      pcVar3 = FUN_0042c8f0(pcVar1,param_1[1] & 0x7fffffffffffffff,0x20);
      uVar5 = (longlong)(pcVar2 + (1 - (longlong)pcVar1)) - ((longlong)pcVar3 - *param_1);
      if (0 < (longlong)uVar5) {
        puVar4 = FUN_0042c520((undefined8 *)0x0,uVar5);
        if (puVar4 != (undefined8 *)0x0) {
          FUN_0042c640((undefined1 *)*puVar4,pcVar3,uVar5);
          goto LAB_0042cf8e;
        }
      }
    }
  }
  puVar4 = (undefined8 *)&DAT_00445150;
LAB_0042cf8e:
  FUN_0042c5b0(param_1);
  return puVar4;
}


