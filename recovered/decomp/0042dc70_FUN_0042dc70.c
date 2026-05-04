// 0042dc70  wchar_t * FUN_0042dc70(int param_1)
// callers: 1  callees: 2


wchar_t * FUN_0042dc70(int param_1)

{
  wchar_t *_Dest;
  
  _Dest = malloc(0x1a);
  if (_Dest != (wchar_t *)0x0) {
    _itow(param_1,_Dest,10);
  }
  return _Dest;
}


