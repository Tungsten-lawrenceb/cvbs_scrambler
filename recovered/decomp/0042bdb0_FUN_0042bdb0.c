// 0042bdb0  ulong FUN_0042bdb0(char * param_1, longlong param_2)
// callers: 1  callees: 3


ulong FUN_0042bdb0(char *param_1,longlong param_2)

{
  ulong uVar1;
  char *_Str;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  _Str = FUN_0042c8f0(param_1,param_2,0x20);
  lVar4 = param_2 - ((longlong)_Str - (longlong)param_1);
  if (lVar4 < 1) {
    return 0;
  }
  if ((lVar4 != 1) && (*_Str == '&')) {
    switch(_Str[1]) {
    case 'B':
    case 'b':
      lVar2 = 2;
      lVar3 = 2;
      iVar5 = 2;
      break;
    default:
      lVar2 = 1;
      lVar3 = 1;
      iVar5 = 8;
      break;
    case 'H':
    case 'h':
      lVar2 = 2;
      lVar3 = 2;
      iVar5 = 0x10;
      break;
    case 'O':
    case 'o':
      lVar2 = 2;
      lVar3 = 2;
      iVar5 = 8;
    }
    uVar1 = FUN_0042bef0(_Str + lVar2,lVar4 - lVar3,iVar5);
    return uVar1;
  }
  uVar1 = strtoul(_Str,(char **)0x0,10);
  return uVar1;
}


