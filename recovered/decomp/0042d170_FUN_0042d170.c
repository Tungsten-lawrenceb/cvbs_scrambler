// 0042d170  undefined2 * FUN_0042d170(undefined2 * param_1, longlong param_2, wchar_t * param_3)
// callers: 9  callees: 2


undefined2 * FUN_0042d170(undefined2 *param_1,longlong param_2,wchar_t *param_3)

{
  size_t sVar1;
  undefined2 *puVar2;
  
  if (param_1 != (undefined2 *)0x0) {
    if (param_3 != (wchar_t *)0x0) {
      sVar1 = wcslen(param_3);
      if (sVar1 != 0) {
        if ((0 < param_2) && ((longlong)(param_2 - 1U) < (longlong)sVar1)) {
          sVar1 = param_2 - 1U;
        }
        puVar2 = param_1;
        if (0 < (longlong)sVar1) {
          puVar2 = param_1 + sVar1;
          memcpy(param_1,param_3,sVar1 * 2);
        }
        *puVar2 = 0;
        return param_1;
      }
    }
    *param_1 = 0;
  }
  return param_1;
}


