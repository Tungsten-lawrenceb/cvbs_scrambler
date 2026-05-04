// 0041bb19  undefined FUN_0041bb19(uint * param_1, char * param_2, UINT param_3)
// callers: 2  callees: 5


void FUN_0041bb19(uint *param_1,char *param_2,UINT param_3)

{
  int iVar1;
  size_t sVar2;
  int cbMultiByte;
  LPWSTR local_50;
  uint local_48;
  
  sVar2 = FUN_0042cd30(param_2,-1);
  cbMultiByte = (int)sVar2;
  if (cbMultiByte != 0) {
    if (param_3 == 0xfde9) {
      iVar1 = MultiByteToWideChar(0xfde9,0,*(LPCSTR *)param_2,cbMultiByte,(LPWSTR)0x0,0);
      if (iVar1 == 0) {
        return;
      }
      local_48 = iVar1 << 1;
      local_50 = malloc((ulonglong)local_48);
      MultiByteToWideChar(0xfde9,0,*(LPCSTR *)param_2,cbMultiByte,local_50,local_48);
    }
    else {
      iVar1 = MultiByteToWideChar(param_3,1,*(LPCSTR *)param_2,cbMultiByte,(LPWSTR)0x0,0);
      if (iVar1 == 0) {
        return;
      }
      local_48 = iVar1 << 1;
      local_50 = malloc((ulonglong)local_48);
      MultiByteToWideChar(param_3,1,*(LPCSTR *)param_2,cbMultiByte,local_50,local_48);
    }
    if (local_50 != (LPWSTR)0x0) {
      FUN_0041b8ae(param_1,local_50,local_48);
      free(local_50);
    }
  }
  return;
}


