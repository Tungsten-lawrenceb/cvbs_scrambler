// 0042fef0  undefined FUN_0042fef0(void)
// callers: 2  callees: 2


void FUN_0042fef0(void)

{
  code *pcVar1;
  
  pcVar1 = *(code **)PTR_PTR_00437ec0;
  while (pcVar1 != (code *)0x0) {
    PTR_PTR_00437ec0 = PTR_PTR_00437ec0 + 8;
    (*pcVar1)();
    pcVar1 = *(code **)PTR_PTR_00437ec0;
  }
  return;
}


