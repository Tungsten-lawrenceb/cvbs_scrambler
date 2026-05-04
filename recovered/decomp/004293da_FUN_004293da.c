// 004293da  undefined FUN_004293da(longlong param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, uint param_8)
// callers: 2  callees: 5


void FUN_004293da(longlong param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,uint param_8)

{
  uint in_stack_ffffffffffffff44;
  undefined4 in_stack_ffffffffffffff4c;
  
  FUN_0042a186(param_1,0);
  if ((param_8 & 1) == 0) {
    FUN_0042a1e0(param_1,param_2,param_3,param_2,param_3);
  }
  else {
    FUN_0042a2b5(param_1,param_2,param_3,param_6,param_7,
                 CONCAT44(in_stack_ffffffffffffff44,0x43340000),
                 CONCAT44(in_stack_ffffffffffffff4c,0x42b40000));
  }
  if ((param_8 & 4) == 0) {
    FUN_0042a1e0(param_1,param_2 + param_4,param_3,param_2 + param_4,param_3);
  }
  else {
    FUN_0042a2b5(param_1,(param_2 + param_4) - param_6,param_3,param_6,param_7,
                 CONCAT44(in_stack_ffffffffffffff44,0x43870000),
                 CONCAT44(in_stack_ffffffffffffff4c,0x42b40000));
  }
  if ((param_8 & 8) == 0) {
    FUN_0042a1e0(param_1,param_2 + param_4,param_3 + param_5,param_2 + param_4,param_3 + param_5);
  }
  else {
    FUN_0042a2b5(param_1,(param_2 + param_4) - param_6,(param_3 + param_5) - param_7,param_6,param_7
                 ,(ulonglong)in_stack_ffffffffffffff44 << 0x20,
                 CONCAT44(in_stack_ffffffffffffff4c,0x42b40000));
  }
  if ((param_8 & 2) == 0) {
    FUN_0042a1e0(param_1,param_2,param_3 + param_5,param_2,param_3 + param_5);
  }
  else {
    FUN_0042a2b5(param_1,param_2,(param_3 + param_5) - param_7,param_6,param_7,
                 CONCAT44(in_stack_ffffffffffffff44,0x42b40000),
                 CONCAT44(in_stack_ffffffffffffff4c,0x42b40000));
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    GdipClosePathFigure(*(undefined8 *)(param_1 + 0x80));
  }
  FUN_0042a39c(param_1);
  return;
}


