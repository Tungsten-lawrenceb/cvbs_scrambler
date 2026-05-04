// 0042b910  uint FUN_0042b910(char * param_1, longlong param_2, char * param_3, longlong param_4)
// callers: 35  callees: 3


uint FUN_0042b910(char *param_1,longlong param_2,char *param_3,longlong param_4)

{
  uint uVar1;
  size_t sVar2;
  size_t sVar3;
  char *_Buf2;
  size_t _Size;
  char *_Buf1;
  
  if (param_1 == (char *)0x0) {
LAB_0042ba38:
    uVar1 = 0;
    if (param_3 != (char *)0x0) {
      if (param_4 == -1) {
        sVar2 = *(ulonglong *)(param_3 + 8) & 0x7fffffffffffffff;
      }
      else {
        sVar2 = strlen(param_3);
      }
      uVar1 = -(uint)(sVar2 != 0);
    }
LAB_0042b990:
    if (param_2 != -1) goto joined_r0x0042b9d2;
  }
  else {
    if (param_3 != (char *)0x0) {
      if (param_2 == -1) {
        _Buf1 = *(char **)param_1;
        sVar2 = *(ulonglong *)(param_1 + 8) & 0x7fffffffffffffff;
        if (param_4 == -1) goto LAB_0042ba1b;
LAB_0042b957:
        sVar3 = strlen(param_3);
        _Buf2 = param_3;
      }
      else {
        sVar2 = strlen(param_1);
        _Buf1 = param_1;
        if (param_4 != -1) goto LAB_0042b957;
LAB_0042ba1b:
        _Buf2 = *(char **)param_3;
        sVar3 = *(ulonglong *)(param_3 + 8) & 0x7fffffffffffffff;
      }
      _Size = sVar3;
      if ((longlong)sVar2 <= (longlong)sVar3) {
        _Size = sVar2;
      }
      uVar1 = memcmp(_Buf1,_Buf2,_Size);
      if ((uVar1 == 0) && (sVar2 != sVar3)) {
        uVar1 = (((longlong)sVar3 <= (longlong)sVar2) - 1) +
                (uint)((longlong)sVar3 <= (longlong)sVar2);
      }
      goto LAB_0042b990;
    }
    if (param_1 == (char *)0x0) goto LAB_0042ba38;
    if (param_2 != -1) {
      sVar2 = strlen(param_1);
      uVar1 = (uint)(sVar2 != 0);
      goto joined_r0x0042b9d2;
    }
    uVar1 = (uint)((*(ulonglong *)(param_1 + 8) & 0x7fffffffffffffff) != 0);
  }
  FUN_0042c5b0((undefined8 *)param_1);
joined_r0x0042b9d2:
  if (param_4 == -1) {
    FUN_0042c5b0((undefined8 *)param_3);
  }
  return uVar1;
}


