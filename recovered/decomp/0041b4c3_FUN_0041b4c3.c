// 0041b4c3  undefined FUN_0041b4c3(longlong param_1)
// callers: 10  callees: 6


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041b4c3(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  LPSTR local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_0042b830(&local_68,0xffffffffffffffff,&DAT_004366a8,1,0);
  }
  else {
    local_90 = (LPSTR)0x0;
    local_88 = 0;
    local_80 = 0;
    plVar2 = FUN_0042c730((ulonglong)*(uint *)(param_1 + 0x10) + 2,0);
    FUN_0042b830(&local_90,0xffffffffffffffff,(char *)plVar2,-1,0);
    auVar4._0_8_ = (double)*(uint *)(param_1 + 0x10) / 2.0;
    auVar4._8_8_ = 0;
    if ((_DAT_0043e4a0 & 0x80000) == 0) {
      _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
      iVar1 = (int)(longlong)ROUND(auVar4._0_8_);
    }
    else {
      auVar4 = roundsd(auVar4,auVar4,4);
      iVar1 = (int)(longlong)auVar4._0_8_;
    }
    iVar1 = WideCharToMultiByte(DAT_004366ac,0,*(LPCWSTR *)(param_1 + 8),iVar1,local_90,
                                *(int *)(param_1 + 0x10) + 2,(LPCSTR)0x0,(LPBOOL)0x0);
    if ((longlong)iVar1 != 0) {
      pcVar3 = (char *)FUN_0042cc20((longlong *)&local_90,(longlong)iVar1);
      FUN_0042b830(&local_68,0xffffffffffffffff,pcVar3,-1,0);
    }
    FUN_0042c680(&local_90);
  }
  FUN_0042cee0(&local_68);
  return;
}


