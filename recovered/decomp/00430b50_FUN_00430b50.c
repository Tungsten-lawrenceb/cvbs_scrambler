// 00430b50  bool FUN_00430b50(uint * param_1)
// callers: 2  callees: 2


bool FUN_00430b50(uint *param_1)

{
  uint uVar1;
  code *extraout_RAX;
  code *extraout_RAX_00;
  code *extraout_RAX_01;
  code *pcVar2;
  code *extraout_RAX_02;
  
  uVar1 = *param_1;
  if (0xc0000096 < uVar1) {
    return true;
  }
  if (0xc000008b < uVar1) {
    switch(uVar1) {
    case 0xc000008d:
    case 0xc000008e:
    case 0xc000008f:
    case 0xc0000090:
    case 0xc0000091:
    case 0xc0000093:
      signal(8);
      pcVar2 = extraout_RAX;
      if (extraout_RAX != (code *)0x1) goto LAB_00430c3d;
      signal(8);
      FUN_00430570();
    default:
      return false;
    case 0xc0000094:
      signal(8);
      pcVar2 = extraout_RAX_01;
      if (extraout_RAX_01 == (code *)0x1) {
        signal(8);
        return false;
      }
LAB_00430c3d:
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(8);
        return false;
      }
      return true;
    case 0xc0000096:
      goto switchD_00430b80_caseD_c0000096;
    }
  }
  if (uVar1 == 0xc0000005) {
    signal(0xb);
    if (extraout_RAX_02 == (code *)0x1) {
      signal(0xb);
      return false;
    }
    if (extraout_RAX_02 != (code *)0x0) {
      (*extraout_RAX_02)(0xb);
      return false;
    }
  }
  else {
    if (uVar1 < 0xc0000006) {
      return uVar1 != 0x80000002;
    }
    if (uVar1 == 0xc0000008) {
      return false;
    }
    if (uVar1 != 0xc000001d) {
      return true;
    }
switchD_00430b80_caseD_c0000096:
    signal(4);
    if (extraout_RAX_00 == (code *)0x1) {
      signal(4);
      return false;
    }
    if (extraout_RAX_00 != (code *)0x0) {
      (*extraout_RAX_00)(4);
      return false;
    }
  }
  return true;
}


