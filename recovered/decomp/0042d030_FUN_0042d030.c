// 0042d030  undefined8 * FUN_0042d030(longlong * param_1, int param_2)
// callers: 1  callees: 4


undefined8 * FUN_0042d030(longlong *param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  
  if (param_1 == (longlong *)0x0) {
    return (undefined8 *)&DAT_00445150;
  }
  if (*param_1 != 0) {
    uVar6 = param_1[1] & 0x7fffffffffffffff;
    puVar4 = FUN_0042c520((undefined8 *)0x0,uVar6);
    if (puVar4 != (undefined8 *)0x0) {
      lVar1 = *param_1;
      puVar7 = (undefined1 *)*puVar4;
      if (param_2 == 1) {
        if (uVar6 != 0) {
          uVar5 = 0;
          do {
            cVar2 = *(char *)(lVar1 + uVar5);
            if ((int)cVar2 - 0x61U < 0x1a) {
              cVar2 = cVar2 + -0x20;
            }
            puVar7[uVar5] = cVar2;
            uVar5 = uVar5 + 1;
          } while (uVar6 != uVar5);
          goto LAB_0042d0bf;
        }
      }
      else {
        uVar5 = 0;
        if (uVar6 != 0) {
          do {
            cVar2 = *(char *)(lVar1 + uVar5);
            iVar3 = islower((int)cVar2);
            if (iVar3 != 0) {
              iVar3 = toupper((int)cVar2);
              cVar2 = (char)iVar3;
            }
            puVar7[uVar5] = cVar2;
            uVar5 = uVar5 + 1;
          } while (uVar6 != uVar5);
LAB_0042d0bf:
          puVar7 = puVar7 + uVar6;
        }
      }
      *puVar7 = 0;
      goto LAB_0042d0db;
    }
  }
  puVar4 = (undefined8 *)&DAT_00445150;
LAB_0042d0db:
  FUN_0042c5b0(param_1);
  return puVar4;
}


