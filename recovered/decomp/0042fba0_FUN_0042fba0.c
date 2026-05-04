// 0042fba0  undefined8 FUN_0042fba0(void)
// callers: 1  callees: 6


undefined8 FUN_0042fba0(void)

{
  _union_983 *p_Var1;
  BOOL BVar2;
  HANDLE pvVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  DWORD local_64;
  _INPUT_RECORD local_60;
  
  if (DAT_00440dc0 == 0) {
    DAT_00440dc0 = 1;
    FUN_00401520((_onexit_t)&LAB_0042f6b0);
    SetConsoleCtrlHandler((PHANDLER_ROUTINE)&LAB_0042f6d0,1);
  }
  uVar4 = 0;
  p_Var1 = &local_60.Event;
  while( true ) {
    pvVar3 = FUN_0042f5e0(1);
    BVar2 = PeekConsoleInputA(pvVar3,&local_60,1,&local_64);
    if (BVar2 == 0) {
      return uVar4;
    }
    if (local_64 == 0) break;
    pvVar3 = FUN_0042f5e0(1);
    ReadConsoleInputA(pvVar3,&local_60,1,&local_64);
    if (local_60.EventType == 1) {
      if (local_60.Event.KeyEvent.bKeyDown == 0) {
        FUN_0042f980((int *)&p_Var1->WindowBufferSizeEvent);
      }
      else if (local_60.Event.KeyEvent.wRepeatCount != 0) {
        uVar5 = 0;
        do {
          uVar5 = uVar5 + 1;
          FUN_0042f980((int *)&p_Var1->WindowBufferSizeEvent);
        } while (uVar5 < local_60.Event.KeyEvent.wRepeatCount);
      }
    }
    else if ((local_60.EventType == 2) && (DAT_0044a308 != (code *)0x0)) {
      uVar4 = 1;
      (*DAT_0044a308)(p_Var1);
    }
    if (local_64 == 0) {
      return uVar4;
    }
  }
  return uVar4;
}


