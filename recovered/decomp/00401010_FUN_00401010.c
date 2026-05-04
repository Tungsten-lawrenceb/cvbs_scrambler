// 00401010  undefined8 FUN_00401010(void)
// callers: 2  callees: 4


/* WARNING: Removing unreachable block (ram,0x00401108) */
/* WARNING: Removing unreachable block (ram,0x00401112) */

undefined8 FUN_00401010(void)

{
  undefined4 *puVar1;
  
  DAT_004443d8 = 1;
  DAT_004443d4 = 1;
  DAT_004443d0 = 1;
  DAT_00443e20 = 1;
  DAT_0043e00c = 0;
  if (DAT_004443e0 == 0) {
    __set_app_type(1);
  }
  else {
    __set_app_type(2);
  }
  puVar1 = (undefined4 *)FUN_00430180();
  *puVar1 = DAT_00444410;
  FUN_004301b0();
  if (DAT_00437f70 != 1) {
    return 0;
  }
  FUN_00430b40(FUN_00430470);
  return 0;
}


