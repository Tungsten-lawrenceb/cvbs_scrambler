// 00431600  ulonglong FUN_00431600(char * param_1, longlong * param_2)
// callers: 2  callees: 1


ulonglong FUN_00431600(char *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong unaff_RBX;
  uint local_14;
  uint local_10;
  uint uStack_c;
  
  uVar1 = FUN_00431df0(param_1,param_2,(uint *)&DAT_00437f50,&local_14,&local_10);
  switch(uVar1 & 7) {
  case 0:
  case 6:
    unaff_RBX = 0;
    break;
  case 1:
    unaff_RBX = CONCAT44((local_14 + 0x433) * 0x100000 | uStack_c & 0xffefffff,local_10);
    break;
  case 2:
    unaff_RBX = CONCAT44(uStack_c,local_10);
    break;
  case 3:
    unaff_RBX = 0x7ff0000000000000;
    break;
  case 4:
    unaff_RBX = 0x7ff8000000000000;
    break;
  case 5:
    unaff_RBX = CONCAT44(uStack_c,local_10) | 0x7ff0000000000000;
  }
  if ((uVar1 & 8) != 0) {
    unaff_RBX = unaff_RBX & 0xffffffff | (ulonglong)((uint)(unaff_RBX >> 0x20) | 0x80000000) << 0x20
    ;
  }
  return unaff_RBX;
}


