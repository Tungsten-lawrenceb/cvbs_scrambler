// 00430e10  undefined8 FUN_00430e10(undefined8 * param_1)
// callers: 2  callees: 2


undefined8 FUN_00430e10(undefined8 *param_1)

{
  uint uVar1;
  code *extraout_RAX;
  code *extraout_RAX_00;
  undefined8 uVar2;
  code *extraout_RAX_01;
  code *pcVar3;
  code *extraout_RAX_02;
  
  uVar1 = *(uint *)*param_1;
  if (((uVar1 & 0x20ffffff) == 0x20474343) && ((((uint *)*param_1)[1] & 1) == 0)) {
    return 0xffffffff;
  }
  if (0xc0000096 < uVar1) goto LAB_00430ee7;
  if (uVar1 < 0xc000008c) {
    if (uVar1 == 0xc0000005) {
      signal(0xb);
      if (extraout_RAX_02 == (code *)0x1) {
        signal(0xb);
        return 0xffffffff;
      }
      if (extraout_RAX_02 != (code *)0x0) {
        (*extraout_RAX_02)(0xb);
        return 0xffffffff;
      }
      goto LAB_00430ee7;
    }
    if (uVar1 < 0xc0000006) {
      if (uVar1 == 0x80000002) {
        return 0xffffffff;
      }
      goto LAB_00430ee7;
    }
    if (uVar1 == 0xc0000008) {
      return 0xffffffff;
    }
    if (uVar1 != 0xc000001d) goto LAB_00430ee7;
switchD_00430e5c_caseD_c0000096:
    signal(4);
    if (extraout_RAX_00 == (code *)0x1) {
      signal(4);
      return 0xffffffff;
    }
    if (extraout_RAX_00 != (code *)0x0) {
      (*extraout_RAX_00)(4);
      return 0xffffffff;
    }
  }
  else {
    switch(uVar1) {
    case 0xc000008d:
    case 0xc000008e:
    case 0xc000008f:
    case 0xc0000090:
    case 0xc0000091:
    case 0xc0000093:
      signal(8);
      pcVar3 = extraout_RAX;
      if (extraout_RAX == (code *)0x1) {
        signal(8);
        FUN_00430570();
        return 0xffffffff;
      }
      break;
    default:
      return 0xffffffff;
    case 0xc0000094:
      signal(8);
      pcVar3 = extraout_RAX_01;
      if (extraout_RAX_01 == (code *)0x1) {
        signal(8);
        return 0xffffffff;
      }
      break;
    case 0xc0000096:
      goto switchD_00430e5c_caseD_c0000096;
    }
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(8);
      return 0xffffffff;
    }
  }
LAB_00430ee7:
  if (DAT_00444420 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00430efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*DAT_00444420)(param_1);
    return uVar2;
  }
  return 0;
}


