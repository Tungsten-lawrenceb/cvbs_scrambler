// 00422662  HWND FUN_00422662(undefined8 * param_1, longlong param_2, HWND param_3, HMENU param_4, longlong param_5, int param_6, int param_7, int param_8, int param_9, uint param_10, uint param_11, LPVOID param_12, SUBCLASSPROC param_13, UINT_PTR param_14, DWORD_PTR param_15)
// callers: 9  callees: 29


/* WARNING: Removing unreachable block (ram,0x004242c5) */
/* WARNING: Removing unreachable block (ram,0x00424385) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HWND FUN_00422662(undefined8 *param_1,longlong param_2,HWND param_3,HMENU param_4,longlong param_5,
                 int param_6,int param_7,int param_8,int param_9,uint param_10,uint param_11,
                 LPVOID param_12,SUBCLASSPROC param_13,UINT_PTR param_14,DWORD_PTR param_15)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  size_t sVar5;
  LPCWSTR pWVar6;
  longlong *plVar7;
  char *pcVar8;
  ulonglong uVar9;
  uint *puVar10;
  HANDLE hData;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 extraout_XMM0_Qb_02;
  HWND local_res18;
  uint local_5c8 [6];
  uint local_5b0;
  ushort local_5aa;
  HANDLE local_5a8;
  longlong local_5a0;
  uint local_598 [6];
  uint local_580;
  ushort local_57a;
  HANDLE local_578;
  longlong local_570;
  uint local_568 [6];
  uint local_550;
  ushort local_54a;
  HANDLE local_548;
  longlong local_540;
  uint local_538 [6];
  uint local_520;
  ushort local_51a;
  HANDLE local_518;
  undefined4 local_50c;
  undefined4 local_508;
  SCROLLINFO local_504;
  char local_4e8 [40];
  undefined8 *local_4c0;
  ulonglong local_4b8;
  ulonglong local_4b0;
  ulonglong local_4a8;
  undefined8 *local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
  int local_480;
  int iStack_47c;
  undefined2 *local_478;
  wchar_t *local_470;
  wchar_t *local_468;
  wchar_t local_460 [518];
  int local_54;
  HWND local_50;
  HWND local_48;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  
  local_48 = (HWND)0x0;
  local_50 = (HWND)0x0;
  uVar2 = FUN_0041b435(param_2);
  if (uVar2 != 0) {
    local_res18 = param_3;
    if (param_3 == (HWND)0x0) {
      local_res18 = (HWND)*param_1;
    }
    local_54 = 1;
    pwVar4 = local_460;
    lVar3 = 0x41;
    do {
      pwVar4[0] = L'\0';
      pwVar4[1] = L'\0';
      pwVar4[2] = L'\0';
      pwVar4[3] = L'\0';
      pwVar4 = pwVar4 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    pwVar4 = (wchar_t *)FUN_0041b49a(param_2);
    FUN_0042d170(local_460,0x104,pwVar4);
    local_470 = FUN_0042e4c0(local_460,0);
    sVar5 = FUN_0042e1e0(local_470);
    local_468 = FUN_0042d150(sVar5);
    local_478 = FUN_0042d170(local_468,0,local_470);
    uVar2 = FUN_0042d200(local_468,u_BUTTON_00436b80);
    if (uVar2 == 0) {
      if (param_10 == 0xffffffff) {
        param_10 = 0x10010f00;
      }
      if (param_10 == 0x8000) {
        param_10 = 0x10018f00;
      }
      if (param_10 == 1) {
        param_10 = 0x10010f01;
      }
      if (param_10 == 0xb) {
        param_10 = 0x1001000b;
      }
    }
    else {
      uVar2 = FUN_0042d200(local_468,u_CUSTOMBUTTON_00436b90);
      if ((uVar2 == 0) || (uVar2 = FUN_0042d200(local_468,u_OWNERDRAWBUTTON_00436bb0), uVar2 == 0))
      {
        FUN_0042d370(local_460,0x104,(byte *)s_Button_00436bd0,7);
        if (param_10 == 0xffffffff) {
          param_10 = 0x1001000b;
        }
      }
      else {
        uVar2 = FUN_0042d200(local_468,u_RADIOBUTTON_00436be0);
        if ((uVar2 == 0) || (uVar2 = FUN_0042d200(local_468,u_OPTION_00436bf8), uVar2 == 0)) {
          FUN_0042d370(local_460,0x104,(byte *)s_Button_00436bd0,7);
          if (param_10 == 0xffffffff) {
            param_10 = 0x10010d09;
          }
          if (param_10 == 0x20000) {
            param_10 = 0x10030d09;
          }
        }
        else {
          uVar2 = FUN_0042d200(local_468,u_CHECKBOX_00436c08);
          if (uVar2 == 0) {
            FUN_0042d370(local_460,0x104,(byte *)s_Button_00436bd0,7);
            if (param_10 == 0xffffffff) {
              param_10 = 0x10010d03;
            }
          }
          else {
            uVar2 = FUN_0042d200(local_468,u_CHECK3STATE_00436c20);
            if (uVar2 == 0) {
              FUN_0042d370(local_460,0x104,(byte *)s_Button_00436bd0,7);
              if (param_10 == 0xffffffff) {
                param_10 = 0x10010d06;
              }
            }
            else {
              uVar2 = FUN_0042d200(local_468,u_LABEL_00436c38);
              if (uVar2 == 0) {
                FUN_0042d370(local_460,0x104,(byte *)s_Static_00436c48,7);
                if (param_10 == 0xffffffff) {
                  param_10 = 0x10020100;
                }
              }
              else {
                uVar2 = FUN_0042d200(local_468,u_BITMAPLABEL_00436c60);
                if (uVar2 == 0) {
                  FUN_0042d370(local_460,0x104,(byte *)s_Static_00436c48,7);
                  if (param_10 == 0xffffffff) {
                    param_10 = 0x1002000e;
                  }
                  if (param_11 == 0xffffffff) {
                    param_11 = 0x20;
                  }
                  local_54 = 0;
                }
                else {
                  uVar2 = FUN_0042d200(local_468,u_ICONLABEL_00436c88);
                  if (uVar2 == 0) {
                    FUN_0042d370(local_460,0x104,(byte *)s_Static_00436c48,7);
                    if (param_10 == 0xffffffff) {
                      param_10 = 0x10020003;
                    }
                    if (param_11 == 0xffffffff) {
                      param_11 = 0x20;
                    }
                    local_54 = 0;
                  }
                  else {
                    uVar2 = FUN_0042d200(local_468,u_BITMAPBUTTON_00436cb0);
                    if (uVar2 == 0) {
                      FUN_0042d370(local_460,0x104,(byte *)s_Button_00436bd0,7);
                      if (param_10 == 0xffffffff) {
                        param_10 = 0x10010080;
                      }
                    }
                    else {
                      uVar2 = FUN_0042d200(local_468,u_ICONBUTTON_00436ce0);
                      if (uVar2 == 0) {
                        FUN_0042d370(local_460,0x104,(byte *)s_Button_00436bd0,7);
                        if (param_10 == 0xffffffff) {
                          param_10 = 0x10010040;
                        }
                      }
                      else {
                        uVar2 = FUN_0042d200(local_468,u_CUSTOMLABEL_00436cf8);
                        if (uVar2 == 0) {
                          FUN_0042d370(local_460,0x104,(byte *)s_Static_00436c48,7);
                          if (param_10 == 0xffffffff) {
                            param_10 = 0x1002000d;
                          }
                          local_54 = 0;
                        }
                        else {
                          uVar2 = FUN_0042d200(local_468,u_FRAME_00436d10);
                          if ((uVar2 == 0) ||
                             (uVar2 = FUN_0042d200(local_468,u_FRAMEWINDOW_00436d20), uVar2 == 0)) {
                            FUN_0042d370(local_460,0x104,(byte *)s_Static_00436c48,7);
                            if (param_10 == 0xffffffff) {
                              param_10 = 0x14020007;
                            }
                            if (param_11 == 0xffffffff) {
                              param_11 = 0x20;
                            }
                            local_54 = 0;
                          }
                          else {
                            uVar2 = FUN_0042d200(local_468,u_GROUPBOX_00436d38);
                            if (uVar2 == 0) {
                              FUN_0042d370(local_460,0x104,(byte *)s_Button_00436bd0,7);
                              if (param_10 == 0xffffffff) {
                                param_10 = 0x14020007;
                              }
                              if (param_11 == 0xffffffff) {
                                param_11 = 0x20;
                              }
                            }
                            else {
                              uVar2 = FUN_0042d200(local_468,u_LINE_00436d50);
                              if (uVar2 == 0) {
                                FUN_0042d370(local_460,0x104,(byte *)s_Static_00436c48,7);
                                if (param_10 == 0xffffffff) {
                                  param_10 = 0x10000012;
                                }
                                if (param_11 == 0xffffffff) {
                                  param_11 = 0x20;
                                }
                                local_54 = 0;
                              }
                              else {
                                uVar2 = FUN_0042d200(local_468,u_EDIT_00436d68);
                                if ((uVar2 == 0) ||
                                   (uVar2 = FUN_0042d200(local_468,u_TEXTBOX_00436d78), uVar2 == 0))
                                {
                                  FUN_0042d370(local_460,0x104,&DAT_00436d88,5);
                                  if (param_10 == 0xffffffff) {
                                    param_10 = 0x10010080;
                                  }
                                  if (param_11 == 0xffffffff) {
                                    param_11 = 0x200;
                                  }
                                }
                                else {
                                  uVar2 = FUN_0042d200(local_468,u_EDITMULTILINE_00436d90);
                                  if ((uVar2 == 0) ||
                                     (uVar2 = FUN_0042d200(local_468,u_MULTILINETEXTBOX_00436db0),
                                     uVar2 == 0)) {
                                    FUN_0042d370(local_460,0x104,&DAT_00436d88,5);
                                    if (param_10 == 0xffffffff) {
                                      param_10 = 0x10211184;
                                    }
                                    if (param_11 == 0xffffffff) {
                                      param_11 = 0x200;
                                    }
                                  }
                                  else {
                                    uVar2 = FUN_0042d200(local_468,u_COMBOBOX_00436de8);
                                    if (uVar2 == 0) {
                                      if (param_10 == 0xffffffff) {
                                        param_10 = 0x50a10302;
                                      }
                                      if (param_11 == 0xffffffff) {
                                        param_11 = 0x200;
                                      }
                                    }
                                    else {
                                      uVar2 = FUN_0042d200(local_468,u_COMBOBOXEX_00436e00);
                                      if ((uVar2 == 0) ||
                                         (uVar2 = FUN_0042d200(local_468,u_COMBOBOXEX32_00436e18),
                                         uVar2 == 0)) {
                                        FUN_0042d370(local_460,0x104,(byte *)s_ComboBoxEx32_00436e38
                                                     ,0xd);
                                        if (param_10 == 0xffffffff) {
                                          param_10 = 0x10810003;
                                        }
                                      }
                                      else {
                                        uVar2 = FUN_0042d200(local_468,u_LISTBOX_00436e50);
                                        if (uVar2 == 0) {
                                          if (param_10 == 0xffffffff) {
                                            param_10 = 0x10b10043;
                                          }
                                          if (param_11 == 0xffffffff) {
                                            param_11 = 0x200;
                                          }
                                        }
                                        else {
                                          uVar2 = FUN_0042d200(local_468,u_PROGRESSBAR_00436e88);
                                          if ((uVar2 == 0) ||
                                             (uVar2 = FUN_0042d200(local_468,
                                                                   u_MSCTLS_PROGRESS32_00436ea0),
                                             uVar2 == 0)) {
                                            FUN_0042d370(local_460,0x104,
                                                         (byte *)s_msctls_progress32_00436ec8,0x12);
                                            if (param_10 == 0xffffffff) {
                                              param_10 = 0x10000000;
                                            }
                                            local_54 = 0;
                                          }
                                          else {
                                            uVar2 = FUN_0042d200(local_468,u_HEADER_00436ee0);
                                            if ((uVar2 == 0) ||
                                               (uVar2 = FUN_0042d200(local_468,
                                                                     u_SYSHEADER32_00436ef0),
                                               uVar2 == 0)) {
                                              FUN_0042d370(local_460,0x104,
                                                           (byte *)s_SysHeader32_00436f08,0xc);
                                              if (param_10 == 0xffffffff) {
                                                param_10 = 0x10000003;
                                              }
                                            }
                                            else {
                                              uVar2 = FUN_0042d200(local_468,u_TREEVIEW_00436f18);
                                              if ((uVar2 == 0) ||
                                                 (uVar2 = FUN_0042d200(local_468,
                                                                       u_SYSTREEVIEW32_00436f30),
                                                 uVar2 == 0)) {
                                                FUN_0042d370(local_460,0x104,
                                                             (byte *)s_SysTreeView32_00436f50,0xe);
                                                if (param_10 == 0xffffffff) {
                                                  param_10 = 0x10810027;
                                                }
                                                if (param_11 == 0xffffffff) {
                                                  param_11 = 0x200;
                                                }
                                              }
                                              else {
                                                uVar2 = FUN_0042d200(local_468,u_LISTVIEW_00436f60);
                                                if ((uVar2 == 0) ||
                                                   (uVar2 = FUN_0042d200(local_468,
                                                                         u_SYSLISTVIEW32_00436f78),
                                                   uVar2 == 0)) {
                                                  FUN_0042d370(local_460,0x104,
                                                               (byte *)s_SysListView32_00436f98,0xe)
                                                  ;
                                                  if (param_10 == 0xffffffff) {
                                                    param_10 = 0x12010349;
                                                  }
                                                  if (param_11 == 0xffffffff) {
                                                    param_11 = 0x200;
                                                  }
                                                }
                                                else {
                                                  uVar2 = FUN_0042d200(local_468,u_TOOLBAR_00436fc0)
                                                  ;
                                                  if ((uVar2 == 0) ||
                                                     (uVar2 = FUN_0042d200(local_468,
                                                                                                                                                      
                                                  u_TOOLBARWINDOW32_00436fd0), uVar2 == 0)) {
                                                    FUN_0042d370(local_460,0x104,
                                                                 (byte *)s_ToolbarWindow32_00436ff0,
                                                                 0x10);
                                                    if (param_10 == 0xffffffff) {
                                                      param_10 = 0x16800901;
                                                    }
                                                  }
                                                  else {
                                                    uVar2 = FUN_0042d200(local_468,u_REBAR_00437000)
                                                    ;
                                                    if ((uVar2 == 0) ||
                                                       (uVar2 = FUN_0042d200(local_468,
                                                                                                                                                          
                                                  u_REBARWINDOW32_00437010), uVar2 == 0)) {
                                                    FUN_0042d370(local_460,0x104,
                                                                 (byte *)s_ReBarWindow32_00437030,
                                                                 0xe);
                                                    if (param_10 == 0xffffffff) {
                                                      param_10 = 0x16800640;
                                                    }
                                                  }
                                                  else {
                                                    uVar2 = FUN_0042d200(local_468,
                                                                         u_DATETIMEPICKER_00437068);
                                                    if ((uVar2 == 0) ||
                                                       (uVar2 = FUN_0042d200(local_468,
                                                                                                                                                          
                                                  u_SYSDATETIMEPICK32_00437088), uVar2 == 0)) {
                                                    FUN_0042d370(local_460,0x104,
                                                                 (byte *)
                                                  s_SysDateTimePick32_004370b0,0x12);
                                                  if (param_10 == 0xffffffff) {
                                                    param_10 = 0x10010000;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = FUN_0042d200(local_468,
                                                                         u_MONTHCALENDAR_004370c8);
                                                    if (((uVar2 == 0) ||
                                                        (uVar2 = FUN_0042d200(local_468,
                                                                              u_MONTHCAL_004370e8),
                                                        uVar2 == 0)) ||
                                                       (uVar2 = FUN_0042d200(local_468,
                                                                                                                                                          
                                                  u_SYSMONTHCAL32_00437100), uVar2 == 0)) {
                                                    FUN_0042d370(local_460,0x104,
                                                                 (byte *)s_SysMonthCal32_00437120,
                                                                 0xe);
                                                    if (param_10 == 0xffffffff) {
                                                      param_10 = 0x10010000;
                                                    }
                                                    if (param_11 == 0xffffffff) {
                                                      param_11 = 0x200;
                                                    }
                                                  }
                                                  else {
                                                    uVar2 = FUN_0042d200(local_468,
                                                                         u_IPADDRESS_00437130);
                                                    if ((uVar2 == 0) ||
                                                       (uVar2 = FUN_0042d200(local_468,
                                                                                                                                                          
                                                  u_SYSIPADDRESS32_00437148), uVar2 == 0)) {
                                                    FUN_0042d370(local_460,0x104,
                                                                 (byte *)s_SysIPAddress32_00437168,
                                                                 0xf);
                                                    if (param_10 == 0xffffffff) {
                                                      param_10 = 0x10010000;
                                                    }
                                                    if (param_11 == 0xffffffff) {
                                                      param_11 = 0x200;
                                                    }
                                                  }
                                                  else {
                                                    uVar2 = FUN_0042d200(local_468,u_HOTKEY_00437178
                                                                        );
                                                    if ((uVar2 == 0) ||
                                                       (uVar2 = FUN_0042d200(local_468,
                                                                                                                                                          
                                                  u_MSCTLS_HOTKEY32_00437188), uVar2 == 0)) {
                                                    FUN_0042d370(local_460,0x104,
                                                                 (byte *)s_msctls_hotkey32_004371a8,
                                                                 0x10);
                                                    if (param_10 == 0xffffffff) {
                                                      param_10 = 0x10010000;
                                                    }
                                                    if (param_11 == 0xffffffff) {
                                                      param_11 = 0x200;
                                                    }
                                                  }
                                                  else {
                                                    uVar2 = FUN_0042d200(local_468,
                                                                         u_ANIMATE_004371b8);
                                                    if (((uVar2 == 0) ||
                                                        (uVar2 = FUN_0042d200(local_468,
                                                                              u_ANIMATION_004371c8),
                                                        uVar2 == 0)) ||
                                                       (uVar2 = FUN_0042d200(local_468,
                                                                             u_SYSANIMATE32_004371e0
                                                                            ), uVar2 == 0)) {
                                                      FUN_0042d370(local_460,0x104,
                                                                   (byte *)s_SysAnimate32_00437200,
                                                                   0xd);
                                                      if (param_10 == 0xffffffff) {
                                                        param_10 = 0x10000002;
                                                      }
                                                    }
                                                    else {
                                                      uVar2 = FUN_0042d200(local_468,
                                                                           u_SYSLINK_00437210);
                                                      if (uVar2 == 0) {
                                                        if (param_10 == 0xffffffff) {
                                                          param_10 = 0x10010000;
                                                        }
                                                        local_54 = 0;
                                                      }
                                                      else {
                                                        uVar2 = FUN_0042d200(local_468,
                                                                             u_PAGER_00437220);
                                                        if ((uVar2 == 0) ||
                                                           (uVar2 = FUN_0042d200(local_468,
                                                                                 u_SYSPAGER_00437230
                                                                                ), uVar2 == 0)) {
                                                          FUN_0042d370(local_460,0x104,
                                                                       (byte *)s_SysPager_00437248,9
                                                                      );
                                                          if (param_10 == 0xffffffff) {
                                                            param_10 = 0x10010001;
                                                          }
                                                          local_54 = 0;
                                                        }
                                                        else {
                                                          uVar2 = FUN_0042d200(local_468,
                                                                               (wchar_t *)
                                                                               &DAT_00437258);
                                                          if (((uVar2 == 0) ||
                                                              (uVar2 = FUN_0042d200(local_468,
                                                                                                                                                                        
                                                  u_TABCONTROL_00437260), uVar2 == 0)) ||
                                                  (uVar2 = FUN_0042d200(local_468,
                                                                        u_SYSTABCONTROL32_00437278),
                                                  uVar2 == 0)) {
                                                    FUN_0042d370(local_460,0x104,
                                                                 (byte *)s_SysTabControl32_00437298,
                                                                 0x10);
                                                    if (param_10 == 0xffffffff) {
                                                      param_10 = 0x16030800;
                                                    }
                                                    if (param_11 == 0xffffffff) {
                                                      param_11 = 0;
                                                    }
                                                    param_11 = param_11 | 0x10000;
                                                  }
                                                  else {
                                                    uVar2 = FUN_0042d200(local_468,
                                                                         u_STATUSBAR_004372a8);
                                                    if ((uVar2 == 0) ||
                                                       (uVar2 = FUN_0042d200(local_468,
                                                                                                                                                          
                                                  u_MSCTLS_STATUSBAR32_004372c0), uVar2 == 0)) {
                                                    FUN_0042d370(local_460,0x104,
                                                                 (byte *)
                                                  s_msctls_statusbar32_004372e8,0x13);
                                                  if (param_10 == 0xffffffff) {
                                                    param_10 = 0x16000103;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = FUN_0042d200(local_468,
                                                                         u_SIZEBAR_00437300);
                                                    if (((uVar2 == 0) ||
                                                        (uVar2 = FUN_0042d200(local_468,
                                                                              u_SIZEBOX_00437310),
                                                        uVar2 == 0)) ||
                                                       (uVar2 = FUN_0042d200(local_468,
                                                                             u_SIZEGRIP_00437320),
                                                       uVar2 == 0)) {
                                                      FUN_0042d370(local_460,0x104,
                                                                   (byte *)s_Scrollbar_00437338,10);
                                                      if (param_10 == 0xffffffff) {
                                                        param_10 = 0x10000014;
                                                      }
                                                      local_54 = 0;
                                                      param_8 = GetSystemMetrics(2);
                                                      param_9 = GetSystemMetrics(3);
                                                      local_4a0 = &local_488;
                                                      local_498 = 0;
                                                      local_490 = 0;
                                                      FUN_00421f68(&local_498,param_1);
                                                      puVar1 = local_4a0;
                                                      *local_4a0 = local_498;
                                                      puVar1[1] = local_490;
                                                      param_6 = local_480 - param_8;
                                                      param_7 = iStack_47c - param_9;
                                                    }
                                                    else {
                                                      uVar2 = FUN_0042d200(local_468,
                                                                           u_HSCROLLBAR_00437358);
                                                      if (uVar2 == 0) {
                                                        FUN_0042d370(local_460,0x104,
                                                                     (byte *)s_Scrollbar_00437338,10
                                                                    );
                                                        if (param_10 == 0xffffffff) {
                                                          param_10 = 0x10010000;
                                                        }
                                                        local_54 = 0;
                                                      }
                                                      else {
                                                        uVar2 = FUN_0042d200(local_468,
                                                                             u_VSCROLLBAR_00437380);
                                                        if (uVar2 == 0) {
                                                          FUN_0042d370(local_460,0x104,
                                                                       (byte *)s_Scrollbar_00437338,
                                                                       10);
                                                          if (param_10 == 0xffffffff) {
                                                            param_10 = 0x10010001;
                                                          }
                                                          local_54 = 0;
                                                        }
                                                        else {
                                                          uVar2 = FUN_0042d200(local_468,
                                                                               u_TRACKBAR_004373c0);
                                                          if (((uVar2 == 0) ||
                                                              (uVar2 = FUN_0042d200(local_468,
                                                                                                                                                                        
                                                  u_MSCTLS_TRACKBAR32_004373d8), uVar2 == 0)) ||
                                                  (uVar2 = FUN_0042d200(local_468,u_SLIDER_00437400)
                                                  , uVar2 == 0)) {
                                                    FUN_0042d370(local_460,0x104,
                                                                 (byte *)
                                                  s_msctls_trackbar32_00437410,0x12);
                                                  if (param_10 == 0xffffffff) {
                                                    param_10 = 0x10010101;
                                                  }
                                                  local_54 = 0;
                                                  }
                                                  else {
                                                    uVar2 = FUN_0042d200(local_468,u_UPDOWN_00437440
                                                                        );
                                                    if ((uVar2 == 0) ||
                                                       (uVar2 = FUN_0042d200(local_468,
                                                                                                                                                          
                                                  u_MSCTLS_UPDOWN32_00437450), uVar2 == 0)) {
                                                    FUN_0042d370(local_460,0x104,
                                                                 (byte *)s_msctls_updown32_00437470,
                                                                 0x10);
                                                    if (param_10 == 0xffffffff) {
                                                      param_10 = 0x10000027;
                                                    }
                                                    local_54 = 0;
                                                  }
                                                  else {
                                                    uVar2 = FUN_0042d200(local_468,
                                                                         u_RICHEDIT_004374a0);
                                                    if ((uVar2 == 0) ||
                                                       (uVar2 = FUN_0042d200(local_468,
                                                                             u_RichEdit50W_004374b8)
                                                       , uVar2 == 0)) {
                                                      if (param_10 == 0xffffffff) {
                                                        param_10 = 0x103191c4;
                                                      }
                                                      if (param_11 == 0xffffffff) {
                                                        param_11 = 0x200;
                                                      }
                                                      FUN_0042d370(local_460,0x104,
                                                                   (byte *)s_RichEdit50W_00437490,
                                                                   0xc);
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    FUN_0042ded0(local_468);
    if (param_10 == 0xffffffff) {
      param_10 = 0;
    }
    if (param_11 == 0xffffffff) {
      param_11 = 0;
    }
    fVar11 = (float)(longlong)param_9 * *(float *)(param_1 + 5);
    if ((_DAT_0043e4a0 & 0x80000) == 0) {
      _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
      uVar2 = (uint)(longlong)ROUND(fVar11);
    }
    else {
      auVar12 = roundss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11),4);
      uVar2 = (uint)(longlong)auVar12._0_4_;
    }
    local_4b8 = (ulonglong)uVar2;
    fVar11 = (float)(longlong)param_8 * *(float *)((longlong)param_1 + 0x24);
    if ((_DAT_0043e4a0 & 0x80000) == 0) {
      _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
      uVar2 = (uint)(longlong)ROUND(fVar11);
    }
    else {
      auVar12 = roundss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11),4);
      uVar2 = (uint)(longlong)auVar12._0_4_;
    }
    local_4a8 = (ulonglong)uVar2;
    fVar11 = (float)(longlong)param_7 * *(float *)(param_1 + 5);
    if ((_DAT_0043e4a0 & 0x80000) == 0) {
      _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
      uVar2 = (uint)(longlong)ROUND(fVar11);
    }
    else {
      auVar12 = roundss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11),4);
      uVar2 = (uint)(longlong)auVar12._0_4_;
    }
    local_4b0 = (ulonglong)uVar2;
    fVar11 = (float)(longlong)param_6 * *(float *)((longlong)param_1 + 0x24);
    if ((_DAT_0043e4a0 & 0x80000) == 0) {
      _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
      uVar2 = (uint)(longlong)ROUND(fVar11);
    }
    else {
      auVar12 = roundss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11),4);
      uVar2 = (uint)(longlong)auVar12._0_4_;
    }
    local_4a0 = (undefined8 *)(ulonglong)uVar2;
    local_4c0 = param_1;
    pWVar6 = (LPCWSTR)FUN_0041b471(param_5);
    local_50 = CreateWindowExW(param_11,local_460,pWVar6,param_10 | 0x40000000,(int)local_4a0,
                               (int)local_4b0,(int)local_4a8,(int)local_4b8,local_res18,param_4,
                               (HINSTANCE)local_4c0[1],param_12);
    if (local_50 != (HWND)0x0) {
      if ((param_1[2] != 0) && (local_54 != 0)) {
        SendMessageW(local_50,0x30,param_1[2],1);
      }
      plVar7 = (longlong *)FUN_0041b4c3(param_2);
      pcVar8 = (char *)FUN_0042d030(plVar7,0);
      FUN_0042b850((undefined8 *)local_4e8,0xffffffffffffffff,pcVar8,-1,0);
      uVar2 = FUN_0042b910(local_4e8,-1,s_LISTBOX_00436e48,8);
      if (uVar2 == 0) {
        FUN_004221fc((longlong)param_1,local_50,(HWND)0x0,param_6,param_7,param_8,param_9,4);
      }
      else {
        uVar2 = FUN_0042b910(local_4e8,-1,s_DATETIMEPICKER_00437040,0xf);
        if ((uVar2 == 0) ||
           (uVar2 = FUN_0042b910(local_4e8,-1,s_SYSDATETIMEPICK32_00437050,0x12), uVar2 == 0)) {
          if (param_1[2] != 0) {
            SendMessageW(local_50,0x1009,param_1[2],1);
          }
        }
        else {
          uVar2 = FUN_0042b910(local_4e8,-1,s_PROGRESSBAR_00436e60,0xc);
          if ((uVar2 == 0) ||
             (uVar2 = FUN_0042b910(local_4e8,-1,s_MSCTLS_PROGRESS32_00436e70,0x12), uVar2 == 0)) {
            SendMessageW(local_50,0x406,0,100);
            SendMessageW(local_50,0x402,0,0);
          }
          else {
            uVar2 = FUN_0042b910(local_4e8,-1,s_TRACKBAR_00437398,9);
            if ((uVar2 == 0) ||
               (uVar2 = FUN_0042b910(local_4e8,-1,s_MSCTLS_TRACKBAR32_004373a8,0x12), uVar2 == 0)) {
              SendMessageW(local_50,0x407,1,0);
              SendMessageW(local_50,0x408,1,100);
              SendMessageW(local_50,0x415,0,10);
            }
            else {
              uVar2 = FUN_0042b910(local_4e8,-1,s_UPDOWN_00437428,7);
              if ((uVar2 == 0) ||
                 (uVar2 = FUN_0042b910(local_4e8,-1,s_MSCTLS_UPDOWN32_00437430,0x10), uVar2 == 0)) {
                SendMessageW(local_50,0x46d,10,0);
                SendMessageW(local_50,0x46f,100,0);
                SendMessageW(local_50,0x471,0,0);
                FUN_004221fc((longlong)param_1,local_50,(HWND)0x0,param_6,param_7,param_8,param_9,4)
                ;
              }
              else {
                uVar2 = FUN_0042b910(local_4e8,-1,s_HSCROLLBAR_00437348,0xb);
                if ((uVar2 == 0) ||
                   (uVar2 = FUN_0042b910(local_4e8,-1,s_VSCROLLBAR_00437370,0xb), uVar2 == 0)) {
                  local_504.nTrackPos = 0;
                  local_504.cbSize = 0x1c;
                  local_504.fMask = 7;
                  local_504.nMin = 0;
                  local_504.nMax = 100;
                  local_504.nPage = 0;
                  local_504.nPos = 0;
                  SetScrollInfo(local_50,2,&local_504,1);
                }
                else {
                  uVar2 = FUN_0042b910(local_4e8,-1,s_TOOLBAR_00436fa8,8);
                  if ((uVar2 == 0) ||
                     (uVar2 = FUN_0042b910(local_4e8,-1,s_TOOLBARWINDOW32_00436fb0,0x10), uVar2 == 0
                     )) {
                    local_508 = 0;
                    local_50c = 0;
                    uVar9 = SendMessageW(local_50,0x43a,0,0);
                    fVar11 = (float)(uVar9 & 0xffff) * *(float *)((longlong)param_1 + 0x24);
                    if ((_DAT_0043e4a0 & 0x80000) == 0) {
                      _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
                      local_508 = (undefined4)(longlong)ROUND(fVar11);
                    }
                    else {
                      auVar12 = roundss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11),4);
                      local_508 = (undefined4)(longlong)auVar12._0_4_;
                    }
                    uVar9 = SendMessageW(local_50,0x43a,0,0);
                    fVar11 = (float)((uVar9 & 0xffff0000) >> 0x10) * *(float *)(param_1 + 5);
                    if ((_DAT_0043e4a0 & 0x80000) == 0) {
                      _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
                      local_50c = (undefined4)(longlong)ROUND(fVar11);
                    }
                    else {
                      auVar12 = roundss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11),4);
                      local_50c = (undefined4)(longlong)auVar12._0_4_;
                    }
                    SendMessageW(local_50,0x41f,0,
                                 (longlong)CONCAT22((short)local_50c,(short)local_508));
                    SendMessageW(local_50,0x41e,0x20,0);
                  }
                  else {
                    uVar2 = FUN_0042b910(local_4e8,-1,s_BITMAPLABEL_00436c50,0xc);
                    if (uVar2 == 0) {
                      local_518 = (HANDLE)0x0;
                      local_51a = 0;
                      local_520 = 0;
                      puVar10 = FUN_0041c46e(local_538,param_5,1);
                      pcVar8 = (char *)FUN_0041b4c3((longlong)puVar10);
                      uVar2 = FUN_0042b910(pcVar8,-1,&DAT_00436a18,2);
                      local_540 = -(ulonglong)(uVar2 == 0);
                      FUN_0041b3ab((longlong)local_538);
                      if (local_540 == 0) {
                        pWVar6 = (LPCWSTR)FUN_0041b471(param_5);
                        local_518 = LoadImageW((HINSTANCE)param_1[1],pWVar6,0,0,0,0);
                      }
                      else {
                        plVar7 = (longlong *)FUN_0041b4c3(param_5);
                        plVar7 = FUN_0042cd80(plVar7,2,0xffffffffffffffff);
                        auVar13._0_8_ = FUN_0042bd30(plVar7);
                        auVar13._8_8_ = extraout_XMM0_Qb;
                        if ((_DAT_0043e4a0 & 0x80000) == 0) {
                          _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
                          local_51a = (ushort)(longlong)ROUND(auVar13._0_8_);
                        }
                        else {
                          auVar12 = roundsd(auVar13,auVar13,4);
                          local_51a = (ushort)(longlong)auVar12._0_8_;
                        }
                        local_520 = (uint)local_51a;
                        local_518 = LoadImageW((HINSTANCE)param_1[1],(LPCWSTR)(ulonglong)local_520,0
                                               ,0,0,0);
                      }
                      if (local_518 != (HANDLE)0x0) {
                        SendMessageW(local_50,0x172,0,(LPARAM)local_518);
                      }
                    }
                    else {
                      uVar2 = FUN_0042b910(local_4e8,-1,s_ICONLABEL_00436c78,10);
                      if (uVar2 == 0) {
                        local_548 = (HANDLE)0x0;
                        local_54a = 0;
                        local_550 = 0;
                        puVar10 = FUN_0041c46e(local_568,param_5,1);
                        pcVar8 = (char *)FUN_0041b4c3((longlong)puVar10);
                        uVar2 = FUN_0042b910(pcVar8,-1,&DAT_00436a18,2);
                        local_570 = -(ulonglong)(uVar2 == 0);
                        FUN_0041b3ab((longlong)local_568);
                        if (local_570 == 0) {
                          pWVar6 = (LPCWSTR)FUN_0041b471(param_5);
                          local_548 = LoadImageW((HINSTANCE)param_1[1],pWVar6,1,0,0,0);
                        }
                        else {
                          plVar7 = (longlong *)FUN_0041b4c3(param_5);
                          plVar7 = FUN_0042cd80(plVar7,2,0xffffffffffffffff);
                          auVar14._0_8_ = FUN_0042bd30(plVar7);
                          auVar14._8_8_ = extraout_XMM0_Qb_00;
                          if ((_DAT_0043e4a0 & 0x80000) == 0) {
                            _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
                            local_54a = (ushort)(longlong)ROUND(auVar14._0_8_);
                          }
                          else {
                            auVar12 = roundsd(auVar14,auVar14,4);
                            local_54a = (ushort)(longlong)auVar12._0_8_;
                          }
                          local_550 = (uint)local_54a;
                          local_548 = LoadImageW((HINSTANCE)param_1[1],(LPCWSTR)(ulonglong)local_550
                                                 ,1,0,0,0);
                        }
                        if (local_548 != (HANDLE)0x0) {
                          SendMessageW(local_50,0x172,1,(LPARAM)local_548);
                        }
                      }
                      else {
                        uVar2 = FUN_0042b910(local_4e8,-1,s_BITMAPBUTTON_00436ca0,0xd);
                        if (uVar2 == 0) {
                          local_578 = (HANDLE)0x0;
                          local_57a = 0;
                          local_580 = 0;
                          puVar10 = FUN_0041c46e(local_598,param_5,1);
                          pcVar8 = (char *)FUN_0041b4c3((longlong)puVar10);
                          uVar2 = FUN_0042b910(pcVar8,-1,&DAT_00436a18,2);
                          local_5a0 = -(ulonglong)(uVar2 == 0);
                          FUN_0041b3ab((longlong)local_598);
                          if (local_5a0 == 0) {
                            pWVar6 = (LPCWSTR)FUN_0041b471(param_5);
                            local_578 = LoadImageW((HINSTANCE)param_1[1],pWVar6,0,0,0,0);
                          }
                          else {
                            plVar7 = (longlong *)FUN_0041b4c3(param_5);
                            plVar7 = FUN_0042cd80(plVar7,2,0xffffffffffffffff);
                            auVar15._0_8_ = FUN_0042bd30(plVar7);
                            auVar15._8_8_ = extraout_XMM0_Qb_01;
                            if ((_DAT_0043e4a0 & 0x80000) == 0) {
                              _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
                              local_57a = (ushort)(longlong)ROUND(auVar15._0_8_);
                            }
                            else {
                              auVar12 = roundsd(auVar15,auVar15,4);
                              local_57a = (ushort)(longlong)auVar12._0_8_;
                            }
                            local_580 = (uint)local_57a;
                            local_578 = LoadImageW((HINSTANCE)param_1[1],
                                                   (LPCWSTR)(ulonglong)local_580,0,0,0,0);
                          }
                          if (local_578 != (HANDLE)0x0) {
                            SendMessageW(local_50,0xf7,0,(LPARAM)local_578);
                          }
                        }
                        else {
                          uVar2 = FUN_0042b910(local_4e8,-1,s_ICONBUTTON_00436cd0,0xb);
                          if (uVar2 == 0) {
                            local_5a8 = (HANDLE)0x0;
                            local_5aa = 0;
                            local_5b0 = 0;
                            puVar10 = FUN_0041c46e(local_5c8,param_5,1);
                            pcVar8 = (char *)FUN_0041b4c3((longlong)puVar10);
                            uVar2 = FUN_0042b910(pcVar8,-1,&DAT_00436a18,2);
                            FUN_0041b3ab((longlong)local_5c8);
                            if (uVar2 == 0) {
                              plVar7 = (longlong *)FUN_0041b4c3(param_5);
                              plVar7 = FUN_0042cd80(plVar7,2,0xffffffffffffffff);
                              auVar12._0_8_ = FUN_0042bd30(plVar7);
                              auVar12._8_8_ = extraout_XMM0_Qb_02;
                              if ((_DAT_0043e4a0 & 0x80000) == 0) {
                                _DAT_0043e498 = CONCAT44(DAT_0043e498_4,MXCSR);
                                local_5aa = (ushort)(longlong)ROUND(auVar12._0_8_);
                              }
                              else {
                                auVar12 = roundsd(auVar12,auVar12,4);
                                local_5aa = (ushort)(longlong)auVar12._0_8_;
                              }
                              local_5b0 = (uint)local_5aa;
                              local_5a8 = LoadImageW((HINSTANCE)param_1[1],
                                                     (LPCWSTR)(ulonglong)local_5b0,1,0,0,0);
                            }
                            else {
                              pWVar6 = (LPCWSTR)FUN_0041b471(param_5);
                              local_5a8 = LoadImageW((HINSTANCE)param_1[1],pWVar6,1,0,0,0);
                            }
                            if (local_5a8 != (HANDLE)0x0) {
                              SendMessageW(local_50,0xf7,1,(LPARAM)local_5a8);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      FUN_0042c680((undefined8 *)local_4e8);
      if (param_13 != (SUBCLASSPROC)0x0) {
        if (param_14 == 0xffffffff) {
          hData = (HANDLE)SetWindowLongPtrW(local_50,-4,(LONG_PTR)param_13);
          SetPropW(local_50,u_OLDWNDPROC_004374d0,hData);
        }
        else {
          SetWindowSubclass(local_50,param_13,param_14,param_15);
        }
      }
      local_48 = local_50;
    }
  }
  return local_48;
}


