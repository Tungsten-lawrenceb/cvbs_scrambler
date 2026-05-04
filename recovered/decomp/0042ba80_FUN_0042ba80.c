// 0042ba80  undefined8 * FUN_0042ba80(undefined8 * param_1, char * param_2, longlong param_3, char * param_4, longlong param_5)
// callers: 10  callees: 5


undefined8 *
FUN_0042ba80(undefined8 *param_1,char *param_2,longlong param_3,char *param_4,longlong param_5)

{
  ulonglong uVar1;
  char *_Src;
  size_t _Size;
  size_t _Size_00;
  void *pvVar2;
  char *_Src_00;
  
  if (param_2 == (char *)0x0) {
    if (param_4 != (char *)0x0) {
      _Src_00 = (char *)0x0;
      _Size = 0;
      if (param_5 == -1) goto LAB_0042bbb9;
LAB_0042bad5:
      _Size_00 = strlen(param_4);
      uVar1 = _Size_00 + _Size;
      _Src = param_4;
      goto joined_r0x0042bb6c;
    }
  }
  else {
    if (param_3 == -1) {
      _Size = *(ulonglong *)(param_2 + 8) & 0x7fffffffffffffff;
      _Src_00 = *(char **)param_2;
    }
    else {
      _Size = strlen(param_2);
      _Src_00 = param_2;
    }
    if (param_4 == (char *)0x0) {
      _Size_00 = 0;
      _Src = (char *)0x0;
      uVar1 = _Size;
    }
    else {
      if (param_5 != -1) goto LAB_0042bad5;
LAB_0042bbb9:
      _Size_00 = *(ulonglong *)(param_4 + 8) & 0x7fffffffffffffff;
      _Src = *(char **)param_4;
      uVar1 = _Size_00 + _Size;
    }
joined_r0x0042bb6c:
    if (uVar1 != 0) {
      param_1 = thunk_FUN_0042c520(param_1,uVar1);
      pvVar2 = memcpy((void *)*param_1,_Src_00,_Size);
      memcpy((void *)(_Size + (longlong)pvVar2),_Src,_Size_00);
      *(undefined1 *)((longlong)(_Size + (longlong)pvVar2) + _Size_00) = 0;
      goto joined_r0x0042bb7c;
    }
  }
  FUN_0042c680(param_1);
joined_r0x0042bb7c:
  if (param_3 == -1) {
    FUN_0042c5b0((undefined8 *)param_2);
  }
  if (param_5 == -1) {
    FUN_0042c5b0((undefined8 *)param_4);
  }
  return param_1;
}


