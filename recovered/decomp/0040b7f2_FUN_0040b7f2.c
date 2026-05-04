// 0040b7f2  undefined FUN_0040b7f2(int * param_1, undefined4 param_2)
// callers: 3  callees: 2


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0040b7f2(int *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 local_res10;
  undefined1 uStackX_11;
  undefined1 uStackX_12;
  undefined1 uStackX_13;
  
  lVar1 = FUN_004074f2(param_1);
  if (lVar1 != 0) {
    uStackX_12 = (undefined1)((uint)param_2 >> 0x10);
    uStackX_11 = (undefined1)((uint)param_2 >> 8);
    local_res10 = (undefined1)param_2;
    uStackX_13 = (undefined1)((uint)param_2 >> 0x18);
    *(uint *)(lVar1 + 0x6cc) =
         CONCAT13(uStackX_13,CONCAT12(local_res10,CONCAT11(uStackX_11,uStackX_12)));
    FUN_0041ed87(*(HWND *)(param_1 + 2));
  }
  return;
}


