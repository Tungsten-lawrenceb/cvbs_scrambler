// 0042c970  longlong FUN_0042c970(longlong param_1, longlong param_2, longlong param_3, longlong param_4, longlong param_5)
// callers: 1  callees: 2


longlong FUN_0042c970(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                     longlong param_5)

{
  char cVar1;
  byte bVar2;
  void *_Memory;
  longlong *_Memory_00;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_840 [256];
  
  lVar7 = param_5 + 1;
  _Memory = calloc(lVar7 * 8,1);
  _Memory_00 = calloc(lVar7 * 8,1);
  plVar5 = local_840;
  for (lVar3 = 0x100; lVar3 != 0; lVar3 = lVar3 + -1) {
    *plVar5 = -1;
    plVar5 = plVar5 + 1;
  }
  lVar3 = 0;
  if (param_5 == 0) {
    *_Memory_00 = 1;
  }
  else {
    do {
      local_840[*(byte *)(param_4 + lVar3)] = lVar3;
      lVar3 = lVar3 + 1;
    } while (param_5 != lVar3);
    _Memory_00[param_5] = lVar7;
    lVar4 = lVar7;
    lVar6 = param_5;
    do {
      cVar1 = *(char *)(param_4 + -1 + lVar6);
      for (; (lVar4 <= lVar3 && (*(char *)(param_4 + -1 + lVar4) != cVar1));
          lVar4 = _Memory_00[lVar4]) {
        plVar5 = (longlong *)((longlong)_Memory + lVar4 * 8);
        if (*plVar5 == 0) {
          *plVar5 = lVar4 - lVar6;
        }
      }
      lVar6 = lVar6 + -1;
      lVar4 = lVar4 + -1;
      _Memory_00[lVar6] = lVar4;
    } while (lVar6 != 0);
  }
  lVar3 = *_Memory_00;
  lVar4 = 0;
  do {
    if (*(longlong *)((longlong)_Memory + lVar4 * 8) == 0) {
      *(longlong *)((longlong)_Memory + lVar4 * 8) = lVar3;
    }
    if (lVar4 == lVar3) {
      lVar3 = _Memory_00[lVar4];
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != lVar7);
  do {
    if (param_3 - param_5 < param_1) {
      lVar7 = 0;
LAB_0042caf1:
      free(_Memory);
      free(_Memory_00);
      return lVar7;
    }
    if (param_5 == 0) {
LAB_0042cb20:
      lVar7 = param_1 + 1;
      goto LAB_0042caf1;
    }
    lVar7 = param_5;
    while( true ) {
      bVar2 = *(byte *)(param_2 + param_1 + -1 + lVar7);
      lVar3 = lVar7 + -1;
      if (*(byte *)(param_4 + -1 + lVar7) != bVar2) break;
      lVar7 = lVar3;
      if (lVar3 == 0) goto LAB_0042cb20;
    }
    lVar4 = lVar3 - local_840[bVar2];
    if (lVar3 - local_840[bVar2] <= *(longlong *)((longlong)_Memory + lVar7 * 8)) {
      lVar4 = *(longlong *)((longlong)_Memory + lVar7 * 8);
    }
    param_1 = param_1 + lVar4;
  } while( true );
}


