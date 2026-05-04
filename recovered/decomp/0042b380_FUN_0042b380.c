// 0042b380  undefined4 FUN_0042b380(undefined4 param_1)
// callers: 17  callees: 1


undefined4 FUN_0042b380(undefined4 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_0042e770(0,0x30,0);
  *(undefined4 *)(lVar1 + 8) = param_1;
  return param_1;
}


