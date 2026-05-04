// 00401180  int FUN_00401180(undefined8 param_1, undefined * param_2, undefined8 param_3, undefined8 param_4)
// callers: 3  callees: 18


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00401180(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined8 *puVar9;
  size_t sVar10;
  void *_Dst;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  LPSTARTUPINFOA p_Var15;
  longlong unaff_GS_OFFSET;
  bool bVar16;
  _STARTUPINFOA local_a8;
  
  p_Var15 = &local_a8;
  for (lVar11 = 0xd; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined8 *)p_Var15 = 0;
    p_Var15 = (LPSTARTUPINFOA)&p_Var15->lpReserved;
  }
  if (DAT_004443e0 != 0) {
    GetStartupInfoA(&local_a8);
  }
  lVar11 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x30) + 8);
  while( true ) {
    LOCK();
    lVar6 = 0;
    lVar5 = lVar11;
    if (DAT_0044a318 != 0) {
      lVar6 = DAT_0044a318;
      lVar5 = DAT_0044a318;
    }
    DAT_0044a318 = lVar5;
    UNLOCK();
    if (lVar6 == 0) {
      bVar16 = false;
      goto joined_r0x00401204;
    }
    if (lVar11 == lVar6) break;
    Sleep(1000);
  }
  bVar16 = true;
joined_r0x00401204:
  if (DAT_0044a310 == 1) {
    _amsg_exit(0x1f);
  }
  else if (DAT_0044a310 == 0) {
    DAT_0044a310 = 1;
    _initterm();
  }
  else {
    DAT_0043e008 = 1;
  }
  if (DAT_0044a310 == 1) {
    _initterm();
    DAT_0044a310 = 2;
  }
  if (!bVar16) {
    LOCK();
    DAT_0044a318 = 0;
    UNLOCK();
  }
  uVar13 = 2;
  uVar12 = 0;
  tls_callback_0(0,2);
  FUN_00430800(uVar12,uVar13,param_3,param_4);
  DAT_00444420 = SetUnhandledExceptionFilter(FUN_00430e10);
  FUN_00430d10();
  FUN_00430160(FUN_00401000);
  FUN_00430570();
  _DAT_00445128 = &IMAGE_DOS_HEADER_00400000;
  puVar7 = (undefined8 *)FUN_00430170();
  iVar4 = DAT_0043e028;
  bVar16 = false;
  pcVar8 = (char *)*puVar7;
  if (pcVar8 != (char *)0x0) {
    do {
      cVar3 = *pcVar8;
      if (cVar3 < '!') {
        _DAT_00445120 = pcVar8;
        if (cVar3 == '\0') break;
        if (!bVar16) goto LAB_004012d0;
        bVar16 = true;
      }
      else if (cVar3 == '\"') {
        bVar16 = (bool)(bVar16 ^ 1);
      }
      pcVar8 = pcVar8 + 1;
    } while( true );
  }
  goto LAB_004012f0;
LAB_004012d0:
  if (cVar3 != '\0') {
    do {
      pcVar2 = pcVar8 + 1;
      pcVar8 = pcVar8 + 1;
      _DAT_00445120 = pcVar8;
      if (*pcVar2 == '\0') break;
    } while (*pcVar2 < '!');
  }
LAB_004012f0:
  if ((DAT_004443e0 != 0) && (_DAT_00436000 = 10, ((byte)local_a8.dwFlags & 1) != 0)) {
    _DAT_00436000 = (uint)local_a8.wShowWindow;
  }
  iVar1 = DAT_0043e028 + 1;
  puVar9 = malloc((longlong)iVar1 * 8);
  lVar11 = (longlong)DAT_0043e020;
  puVar7 = puVar9;
  if (0 < iVar4) {
    uVar14 = 0;
    do {
      sVar10 = strlen(*(char **)(lVar11 + uVar14 * 8));
      _Dst = malloc(sVar10 + 1);
      puVar9[uVar14] = _Dst;
      memcpy(_Dst,*(void **)(lVar11 + uVar14 * 8),sVar10 + 1);
      bVar16 = iVar4 - 1 != uVar14;
      uVar14 = uVar14 + 1;
    } while (bVar16);
    puVar7 = puVar9 + (longlong)iVar1 + -1;
  }
  *puVar7 = 0;
  DAT_0043e020 = puVar9;
  FUN_0042ffa0();
  iVar4 = DAT_0043e028;
  *(undefined8 *)__initenv_exref = DAT_0043e018;
  DAT_0043e010 = FUN_0041b0c0(iVar4,DAT_0043e020);
  if (DAT_0043e00c != 0) {
    if (DAT_0043e008 != 0) {
      return DAT_0043e010;
    }
    _cexit();
    return DAT_0043e010;
  }
                    /* WARNING: Subroutine does not return */
  exit(DAT_0043e010);
}


