// 0042cb40  longlong FUN_0042cb40(longlong param_1, longlong * param_2, undefined8 * param_3)
// callers: 1  callees: 3


longlong FUN_0042cb40(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  char *pcVar2;
  ulonglong uVar3;
  void *pvVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar5 = 0;
  if (param_2 == (longlong *)0x0) goto LAB_0042cbab;
  lVar1 = *param_2;
  if ((param_3 != (undefined8 *)0x0) && (lVar1 != 0)) {
    pcVar2 = (char *)*param_3;
    if (pcVar2 == (char *)0x0) goto LAB_0042cbab;
    uVar3 = param_3[1] & 0x7fffffffffffffff;
    uVar6 = param_2[1] & 0x7fffffffffffffff;
    if ((((uVar6 != 0) && (uVar3 != 0)) && (0 < param_1 && param_1 <= (longlong)uVar6)) &&
       (uVar3 <= uVar6)) {
      if (uVar3 == 1) {
        pvVar4 = memchr((void *)(lVar1 + -1 + param_1),(int)*pcVar2,(uVar6 - param_1) + 1);
        if (pvVar4 != (void *)0x0) {
          lVar5 = (longlong)pvVar4 + (1 - lVar1);
        }
      }
      else {
        lVar5 = FUN_0042c970(param_1 + -1,lVar1,uVar6,(longlong)pcVar2,uVar3);
      }
      goto LAB_0042cbab;
    }
  }
  lVar5 = 0;
LAB_0042cbab:
  FUN_0042c5b0(param_2);
  FUN_0042c5b0(param_3);
  return lVar5;
}


