// 00409f7c  undefined FUN_00409f7c(int * param_1, char param_2)
// callers: 3  callees: 14


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409f7c(int *param_1,char param_2)

{
  BOOL BVar1;
  longlong lVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  HWND local_98;
  int local_88;
  int local_84;
  longlong local_80;
  tagRECT local_78;
  tagRECT local_68;
  tagRECT local_58;
  longlong local_48;
  
  local_48 = FUN_004074f2(param_1);
  if (local_48 != 0) {
    if (param_2 == '\0') {
      *(ulonglong *)(local_48 + 0x6b8) = *(ulonglong *)(local_48 + 0x6b8) & 0xfffffffffffffffe;
    }
    else {
      *(ulonglong *)(local_48 + 0x6b8) = *(ulonglong *)(local_48 + 0x6b8) | 1;
    }
    local_58.left = 0;
    local_58.top = 0;
    local_58.right = 0;
    local_58.bottom = 0;
    local_68.left = 0;
    local_68.top = 0;
    local_68.right = 0;
    local_68.bottom = 0;
    local_78.left = 0;
    local_78.top = 0;
    local_78.right = 0;
    local_78.bottom = 0;
    SetRect(&local_68,*(int *)(local_48 + 0x740),*(int *)(local_48 + 0x744),
            *(int *)(local_48 + 0x740) + *(int *)(local_48 + 0x748),
            *(int *)(local_48 + 0x744) + *(int *)(local_48 + 0x74c));
    local_80 = FUN_00401580(*(longlong *)(param_1 + 2));
    local_84 = 0;
    for (; local_80 != 0; local_80 = *(longlong *)(local_80 + 0x768)) {
      if (0 < *(int *)(local_80 + 0x24) && *(int *)(local_80 + 0x24) != *param_1) {
        SetRect(&local_78,*(int *)(local_80 + 0x740),*(int *)(local_80 + 0x744),
                *(int *)(local_80 + 0x740) + *(int *)(local_80 + 0x748),
                *(int *)(local_80 + 0x744) + *(int *)(local_80 + 0x74c));
        if ((1.0 < (double)(((longlong)local_68.right - (longlong)local_68.left) *
                           ((longlong)local_68.bottom - (longlong)local_68.top)) /
                   (double)(((longlong)local_78.right - (longlong)local_78.left) *
                           ((longlong)local_78.bottom - (longlong)local_78.top))) &&
           (BVar1 = IntersectRect(&local_58,&local_68,&local_78), BVar1 != 0)) {
          if (0.8 < (double)(((longlong)local_58.right - (longlong)local_58.left) *
                            ((longlong)local_58.bottom - (longlong)local_58.top)) /
                    (double)(((longlong)local_78.right - (longlong)local_78.left) *
                            ((longlong)local_78.bottom - (longlong)local_78.top))) {
            if (param_2 == '\0') {
              if ((*(ulonglong *)(local_48 + 0x6b8) & 1) == 0) {
                FUN_0042b090((undefined8 *)&DAT_00436010,4,-1,0,1);
                *(undefined4 *)((longlong)local_84 * 4 + _DAT_00436010) =
                     *(undefined4 *)(local_80 + 0x24);
                local_84 = local_84 + 1;
              }
              else {
                *(ulonglong *)(local_80 + 0x6b8) =
                     *(ulonglong *)(local_80 + 0x6b8) & 0xfffffffffffffffe;
              }
            }
            else {
              *(ulonglong *)(local_80 + 0x6b8) = *(ulonglong *)(local_80 + 0x6b8) | 1;
              lVar2 = FUN_0042b310((longlong *)&DAT_00436010,1);
              if (-1 < lVar2) {
                local_88 = 0;
                lVar2 = FUN_0042b310((longlong *)&DAT_00436010,1);
                for (; local_88 <= (int)lVar2; local_88 = local_88 + 1) {
                  if (*(int *)((longlong)local_88 * 4 + _DAT_00436010) == *(int *)(local_80 + 0x24))
                  {
                    *(ulonglong *)(local_80 + 0x6b8) =
                         *(ulonglong *)(local_80 + 0x6b8) & 0xfffffffffffffffe;
                    break;
                  }
                }
              }
            }
          }
        }
      }
    }
    if (local_84 == 0) {
      FUN_0042ac00((undefined8 *)&DAT_00436010);
    }
    fVar3 = FUN_0041f07e(1.0);
    local_98 = (HWND)0x0;
    local_84 = 0;
LAB_0040a3dc:
    local_98 = FindWindowExW(*(HWND *)(param_1 + 2),local_98,(LPCWSTR)0x0,(LPCWSTR)0x0);
    if (local_98 != (HWND)0x0) {
      GetWindowRect(local_98,&local_78);
      MapWindowPoints((HWND)0x0,*(HWND *)(param_1 + 2),(LPPOINT)&local_78,2);
      auVar4._0_8_ = (double)(longlong)local_78.left / (double)fVar3;
      auVar4._8_8_ = 0;
      if ((_DAT_0043e4a0 & 0x80000) == 0) {
        _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
        local_78.left = (LONG)(longlong)ROUND(auVar4._0_8_);
      }
      else {
        auVar4 = roundsd(auVar4,auVar4,4);
        local_78.left = (LONG)(longlong)auVar4._0_8_;
      }
      auVar5._0_8_ = (double)(longlong)local_78.top / (double)fVar3;
      auVar5._8_8_ = 0;
      if ((_DAT_0043e4a0 & 0x80000) == 0) {
        _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
        local_78.top = (LONG)(longlong)ROUND(auVar5._0_8_);
      }
      else {
        auVar4 = roundsd(auVar5,auVar5,4);
        local_78.top = (LONG)(longlong)auVar4._0_8_;
      }
      auVar6._0_8_ = (double)(longlong)local_78.right / (double)fVar3;
      auVar6._8_8_ = 0;
      if ((_DAT_0043e4a0 & 0x80000) == 0) {
        _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
        local_78.right = (LONG)(longlong)ROUND(auVar6._0_8_);
      }
      else {
        auVar4 = roundsd(auVar6,auVar6,4);
        local_78.right = (LONG)(longlong)auVar4._0_8_;
      }
      auVar7._0_8_ = (double)(longlong)local_78.bottom / (double)fVar3;
      auVar7._8_8_ = 0;
      if ((_DAT_0043e4a0 & 0x80000) == 0) {
        _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
        local_78.bottom = (LONG)(longlong)ROUND(auVar7._0_8_);
      }
      else {
        auVar4 = roundsd(auVar7,auVar7,4);
        local_78.bottom = (LONG)(longlong)auVar4._0_8_;
      }
      if ((1.0 < (double)(((longlong)local_68.right - (longlong)local_68.left) *
                         ((longlong)local_68.bottom - (longlong)local_68.top)) /
                 (double)(((longlong)local_78.right - (longlong)local_78.left) *
                         ((longlong)local_78.bottom - (longlong)local_78.top))) &&
         (BVar1 = IntersectRect(&local_58,&local_68,&local_78), BVar1 != 0)) {
        if (0.8 < (double)(((longlong)local_58.right - (longlong)local_58.left) *
                          ((longlong)local_58.bottom - (longlong)local_58.top)) /
                  (double)(((longlong)local_78.right - (longlong)local_78.left) *
                          ((longlong)local_78.bottom - (longlong)local_78.top))) {
          if (param_2 == '\0') {
            BVar1 = IsWindowEnabled(local_98);
            if (BVar1 == 0) {
              FUN_0042b090((undefined8 *)&DAT_00436100,8,-1,0,1);
              *(HWND *)((longlong)local_84 * 8 + _DAT_00436100) = local_98;
              local_84 = local_84 + 1;
            }
            else {
              EnableWindow(local_98,0);
            }
          }
          else {
            EnableWindow(local_98,-1);
            lVar2 = FUN_0042b310((longlong *)&DAT_00436100,1);
            if (-1 < lVar2) {
              local_88 = 0;
              lVar2 = FUN_0042b310((longlong *)&DAT_00436100,1);
              for (; local_88 <= (int)lVar2; local_88 = local_88 + 1) {
                if (*(HWND *)((longlong)local_88 * 8 + _DAT_00436100) == local_98) {
                  EnableWindow(local_98,0);
                  break;
                }
              }
            }
          }
        }
      }
      goto LAB_0040a3dc;
    }
    if (local_84 == 0) {
      FUN_0042ac00((undefined8 *)&DAT_00436100);
    }
    FUN_0041ed87(*(HWND *)(param_1 + 2));
  }
  return;
}


