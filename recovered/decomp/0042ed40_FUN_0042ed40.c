// 0042ed40  undefined FUN_0042ed40(void)
// callers: 1  callees: 1


void FUN_0042ed40(void)

{
  undefined4 *puVar1;
  
  if (DAT_0044a2a0 != 0) {
    puVar1 = (undefined4 *)&DAT_004452f0;
    DAT_0044a2a0 = 0;
    do {
      if (*(longlong *)(puVar1 + 0xe) != 0) {
        (**(code **)(*(longlong *)(puVar1 + 0xe) + 8))(puVar1);
      }
      puVar1 = puVar1 + 0x14;
    } while (puVar1 != &DAT_0044a2a0);
    memset(&DAT_004452f0,0,0x4fb0);
    return;
  }
  return;
}


