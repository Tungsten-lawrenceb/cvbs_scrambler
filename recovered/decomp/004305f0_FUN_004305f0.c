// 004305f0  undefined FUN_004305f0(undefined8 * param_1, undefined8 * param_2, undefined8 param_3, undefined8 param_4)
// callers: 6  callees: 6


/* WARNING: Removing unreachable block (ram,0x00430891) */
/* WARNING: Removing unreachable block (ram,0x004309e8) */
/* WARNING: Removing unreachable block (ram,0x004309f0) */
/* WARNING: Removing unreachable block (ram,0x004309fe) */
/* WARNING: Removing unreachable block (ram,0x0043089d) */
/* WARNING: Removing unreachable block (ram,0x004308a5) */
/* WARNING: Removing unreachable block (ram,0x004308a8) */
/* WARNING: Removing unreachable block (ram,0x004308b0) */
/* WARNING: Removing unreachable block (ram,0x004308bc) */
/* WARNING: Removing unreachable block (ram,0x004308da) */
/* WARNING: Removing unreachable block (ram,0x00430919) */
/* WARNING: Removing unreachable block (ram,0x00430936) */
/* WARNING: Removing unreachable block (ram,0x00430a10) */
/* WARNING: Removing unreachable block (ram,0x00430a1a) */
/* WARNING: Removing unreachable block (ram,0x0043093c) */
/* WARNING: Removing unreachable block (ram,0x004308e0) */
/* WARNING: Removing unreachable block (ram,0x004308f4) */
/* WARNING: Removing unreachable block (ram,0x004308f8) */
/* WARNING: Removing unreachable block (ram,0x00430942) */
/* WARNING: Removing unreachable block (ram,0x0043094c) */
/* WARNING: Removing unreachable block (ram,0x00430961) */
/* WARNING: Removing unreachable block (ram,0x00430965) */
/* WARNING: Removing unreachable block (ram,0x00430986) */
/* WARNING: Removing unreachable block (ram,0x00430ac1) */
/* WARNING: Removing unreachable block (ram,0x00430ad8) */
/* WARNING: Removing unreachable block (ram,0x00430b00) */
/* WARNING: Removing unreachable block (ram,0x00430b2c) */
/* WARNING: Removing unreachable block (ram,0x00430a40) */
/* WARNING: Removing unreachable block (ram,0x00430a4e) */
/* WARNING: Removing unreachable block (ram,0x00430a52) */
/* WARNING: Removing unreachable block (ram,0x00430910) */
/* WARNING: Removing unreachable block (ram,0x00430a70) */
/* WARNING: Removing unreachable block (ram,0x00430a79) */
/* WARNING: Removing unreachable block (ram,0x00430a98) */
/* WARNING: Removing unreachable block (ram,0x00430abc) */
/* WARNING: Removing unreachable block (ram,0x00430990) */
/* WARNING: Removing unreachable block (ram,0x0043099e) */
/* WARNING: Removing unreachable block (ram,0x004309b0) */
/* WARNING: Removing unreachable block (ram,0x004309c2) */
/* WARNING: Removing unreachable block (ram,0x004309d0) */
/* WARNING: Removing unreachable block (ram,0x004309df) */

void FUN_004305f0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  BOOL BVar2;
  DWORD DVar3;
  ulonglong *puVar4;
  longlong lVar5;
  undefined4 *puVar6;
  IMAGE_DOS_HEADER *pIVar7;
  SIZE_T SVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong in_R8;
  ulonglong uVar12;
  PDWORD in_R9;
  undefined1 auStack_d0 [32];
  undefined8 *puStack_b0;
  longlong lStack_a8;
  undefined8 *puStack_a0;
  _MEMORY_BASIC_INFORMATION local_58;
  
  lVar11 = (longlong)DAT_004443f4;
  uVar12 = in_R8;
  if (DAT_004443f4 < 1) goto LAB_00430798;
  iVar9 = 0;
  puVar4 = (ulonglong *)(DAT_004443f8 + 0x18);
  do {
    if (((undefined8 *)*puVar4 <= param_1) &&
       (uVar12 = (ulonglong)*(uint *)(puVar4[1] + 8),
       param_1 < (undefined8 *)((longlong)*puVar4 + uVar12))) goto LAB_004306c7;
    iVar9 = iVar9 + 1;
    puVar4 = puVar4 + 5;
  } while (iVar9 != DAT_004443f4);
  while (lVar5 = FUN_00431350((longlong)param_1), lVar5 != 0) {
    lVar11 = lVar11 * 0x28;
    puVar6 = (undefined4 *)(DAT_004443f8 + lVar11);
    *(longlong *)(puVar6 + 8) = lVar5;
    *puVar6 = 0;
    pIVar7 = FUN_00431480();
    uVar10 = *(uint *)(lVar5 + 0xc);
    *(char **)(DAT_004443f8 + lVar11 + 0x18) = pIVar7->e_magic + uVar10;
    SVar8 = VirtualQuery(pIVar7->e_magic + uVar10,&local_58,0x30);
    if (SVar8 == 0) goto LAB_004307e1;
    if (((local_58.Protect - 0x40 & 0xffffffbf) == 0) || ((local_58.Protect - 4 & 0xfffffffb) == 0))
    {
LAB_004306c0:
      DAT_004443f4 = DAT_004443f4 + 1;
LAB_004306c7:
      uVar10 = (uint)in_R8;
      if (uVar10 < 8) {
        if ((in_R8 & 4) == 0) {
          if ((uVar10 != 0) && (*(undefined1 *)param_1 = *(undefined1 *)param_2, (in_R8 & 2) != 0))
          {
            *(undefined2 *)((longlong)param_1 + ((in_R8 & 0xffffffff) - 2)) =
                 *(undefined2 *)((longlong)param_2 + ((in_R8 & 0xffffffff) - 2));
          }
        }
        else {
          *(undefined4 *)param_1 = *(undefined4 *)param_2;
          *(undefined4 *)((longlong)param_1 + ((in_R8 & 0xffffffff) - 4)) =
               *(undefined4 *)((longlong)param_2 + ((in_R8 & 0xffffffff) - 4));
        }
      }
      else {
        *param_1 = *param_2;
        *(undefined8 *)((longlong)param_1 + ((in_R8 & 0xffffffff) - 8)) =
             *(undefined8 *)((longlong)param_2 + ((in_R8 & 0xffffffff) - 8));
        lVar11 = (longlong)param_1 - ((ulonglong)(param_1 + 1) & 0xfffffffffffffff8);
        uVar10 = uVar10 + (int)lVar11 & 0xfffffff8;
        if (7 < uVar10) {
          uVar1 = 0;
          do {
            uVar12 = (ulonglong)uVar1;
            uVar1 = uVar1 + 8;
            *(undefined8 *)(((ulonglong)(param_1 + 1) & 0xfffffffffffffff8) + uVar12) =
                 *(undefined8 *)((longlong)param_2 + (uVar12 - lVar11));
          } while (uVar1 < uVar10);
          return;
        }
      }
      return;
    }
    uVar12 = 0x40;
    in_R9 = (PDWORD)(DAT_004443f8 + lVar11);
    *(PVOID *)(in_R9 + 2) = local_58.BaseAddress;
    *(SIZE_T *)(in_R9 + 4) = local_58.RegionSize;
    BVar2 = VirtualProtect(local_58.BaseAddress,local_58.RegionSize,0x40,in_R9);
    if (BVar2 != 0) goto LAB_004306c0;
    DVar3 = GetLastError();
    FUN_00430580("  VirtualProtect failed with code 0x%x",(ulonglong)DVar3,uVar12,in_R9);
LAB_00430798:
    lVar11 = 0;
  }
  FUN_00430580("Address %p has no image-section",param_1,uVar12,in_R9);
LAB_004307e1:
  FUN_00430580("  VirtualQuery failed for %d bytes at address %p",(ulonglong)*(uint *)(lVar5 + 8),
               *(undefined8 *)(DAT_004443f8 + lVar11 + 0x18),in_R9);
  if (DAT_004443f0 == 0) {
    DAT_004443f0 = 1;
    puStack_b0 = param_2;
    lStack_a8 = lVar11;
    puStack_a0 = param_1;
    FUN_004313e0();
    uVar12 = FUN_00435a10();
    DAT_004443f4 = 0;
    DAT_004443f8 = auStack_d0 + -uVar12;
  }
  return;
}


