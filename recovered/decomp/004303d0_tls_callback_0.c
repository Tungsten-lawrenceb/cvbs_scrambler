// 004303d0  undefined8 tls_callback_0(undefined8 param_1, int param_2)
// callers: 5  callees: 1


/* WARNING: Removing unreachable block (ram,0x00430413) */
/* WARNING: Removing unreachable block (ram,0x00430418) */
/* WARNING: Removing unreachable block (ram,0x00430420) */
/* WARNING: Removing unreachable block (ram,0x00430422) */
/* WARNING: Removing unreachable block (ram,0x0043042b) */

undefined8 tls_callback_0(undefined8 param_1,int param_2)

{
  if (DAT_00437f40 != 2) {
    DAT_00437f40 = 2;
  }
  if ((param_2 != 2) && (param_2 == 1)) {
    FUN_00431140(param_1,1);
    return 1;
  }
  return 1;
}


