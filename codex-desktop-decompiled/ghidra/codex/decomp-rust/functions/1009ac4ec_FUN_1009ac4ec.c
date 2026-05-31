
void FUN_1009ac4ec(void)

{
  char cVar1;
  ushort *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ushort uVar6;
  long *plVar7;
  code *pcVar8;
  int iVar9;
  undefined1 uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long unaff_x19;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  long *unaff_x21;
  undefined8 uVar20;
  long lVar21;
  long *plVar22;
  undefined8 uVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  long unaff_x29;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 *in_stack_00000000;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  long *in_stack_00000120;
  long *in_stack_00000128;
  long *in_stack_00000130;
  long *in_stack_00000138;
  long *in_stack_00000140;
  long *in_stack_00000148;
  long *in_stack_00000150;
  long *in_stack_00000158;
  long *in_stack_00000160;
  long in_stack_00000168;
  undefined8 in_stack_00000170;
  ulong in_stack_00000178;
  undefined8 in_stack_00000180;
  long *in_stack_00000190;
  long *in_stack_00000198;
  long *in_stack_000001a0;
  long *in_stack_000001a8;
  long *in_stack_000001b0;
  long *in_stack_000001b8;
  long *in_stack_000001c0;
  long *in_stack_000001c8;
  long *in_stack_000001d0;
  long in_stack_000001d8;
  undefined8 in_stack_000001e0;
  ulong in_stack_000001e8;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  
  do {
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0xb0,s___108acc98a,&stack0x00000190);
    uVar16 = *(undefined8 *)(unaff_x29 + -0xb0);
    uVar20 = *(undefined8 *)(unaff_x29 + -0xa8);
    uVar23 = *(undefined8 *)(unaff_x29 + -0xa0);
    lVar25 = *(long *)(unaff_x19 + 0x1a8);
    if (lVar25 == *(long *)(unaff_x19 + 0x198)) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(unaff_x19 + 0x198);
    }
    puVar11 = (undefined8 *)(*(long *)(unaff_x19 + 0x1a0) + lVar25 * 0x18);
    *puVar11 = uVar16;
    puVar11[1] = uVar20;
    puVar11[2] = uVar23;
    *(long *)(unaff_x19 + 0x1a8) = lVar25 + 1;
    FUN_100e241d4((ulong)&stack0x00000120 | 8);
LAB_1009ac5e8:
    if (*unaff_x21 != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x658));
    }
    puVar13 = *(undefined8 **)(unaff_x19 + 0x13e8);
    puVar11 = *(undefined8 **)(unaff_x19 + 0x13d8);
    if (puVar11 == puVar13) goto LAB_1009ad22c;
LAB_1009ac60c:
    *(undefined8 **)(unaff_x19 + 0x13d8) = puVar11 + 3;
    uVar16 = puVar11[2];
    uVar20 = *puVar11;
    *(undefined8 *)(unaff_x19 + 0x640) = puVar11[1];
    *(undefined8 *)(unaff_x19 + 0x638) = uVar20;
    *(undefined8 *)(unaff_x19 + 0x648) = uVar16;
    puVar14 = puVar11 + 3;
    if (*(long *)(unaff_x19 + 0x638) == -0x8000000000000000) {
LAB_1009ad238:
      if ((long)puVar13 - (long)puVar14 != 0) {
        uVar19 = (ulong)((long)puVar13 - (long)puVar14) / 0x18;
        puVar14 = puVar14 + 1;
        do {
          if (puVar14[-1] != 0) {
            _free(*puVar14);
          }
          puVar14 = puVar14 + 3;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      if (*(long *)(unaff_x19 + 0x13e0) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x13d0));
      }
      if (*(long *)(unaff_x19 + 0x620) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x628));
      }
      if ((*(long *)(unaff_x19 + 0x5c0) == -0x8000000000000000) &&
         (*(long *)(unaff_x19 + 0x5d0) != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0x5d8));
      }
      *(undefined2 *)(unaff_x19 + 0x613) = 0;
      if (*(long *)(unaff_x19 + 0x578) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x580));
      }
      lVar21 = *(long *)(unaff_x19 + 0x568);
      lVar25 = *(long *)(unaff_x19 + 0x570);
      if (lVar25 != 0) {
        puVar11 = (undefined8 *)(lVar21 + 8);
        do {
          if (puVar11[-1] != 0) {
            _free(*puVar11);
          }
          puVar11 = puVar11 + 3;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
      }
      if (*(long *)(unaff_x19 + 0x560) != 0) {
        _free(lVar21);
      }
      *(undefined1 *)(unaff_x19 + 0x615) = 0;
      *(undefined1 *)(unaff_x19 + 0x612) = 0;
      if (*(long *)(unaff_x19 + 0x530) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x538));
      }
      *(undefined1 *)(unaff_x19 + 0x616) = 0;
      lVar25 = *(long *)(unaff_x19 + 0x500);
      do {
        if (lVar25 != 0) {
          _free(*(undefined8 *)(unaff_x19 + 0x508));
        }
        *(undefined1 *)(unaff_x19 + 0x617) = 0;
        puVar11 = (undefined8 *)(unaff_x19 + 0x4d0);
        puVar13 = *(undefined8 **)(unaff_x19 + 0x4b8);
        if (puVar13 == *(undefined8 **)(unaff_x19 + 0x4c8)) {
          *puVar11 = 0x8000000000000000;
LAB_1009ad344:
          FUN_100cf68e0(unaff_x19 + 0x4b0);
          *(undefined1 *)(unaff_x19 + 0x618) = 0;
          uVar16 = *(undefined8 *)(unaff_x19 + 0x150);
          plVar17 = *(long **)(unaff_x19 + 0x158);
          in_stack_00000228 = *(undefined8 *)(unaff_x19 + 0x188);
          in_stack_00000220 = *(undefined8 *)(unaff_x19 + 0x180);
          in_stack_00000238 = *(undefined8 *)(unaff_x19 + 0x198);
          in_stack_00000230 = *(undefined8 *)(unaff_x19 + 400);
          in_stack_00000248 = *(undefined8 *)(unaff_x19 + 0x1a8);
          in_stack_00000240 = *(undefined8 *)(unaff_x19 + 0x1a0);
          in_stack_00000208 = *(undefined8 *)(unaff_x19 + 0x168);
          in_stack_00000200 = *(undefined8 *)(unaff_x19 + 0x160);
          in_stack_00000218 = *(undefined8 *)(unaff_x19 + 0x178);
          in_stack_00000210 = *(undefined8 *)(unaff_x19 + 0x170);
          FUN_100e1955c(unaff_x19 + 0x1b0);
          *(undefined2 *)(unaff_x19 + 0x618) = 0;
          if (*(long *)(unaff_x19 + 0xc0) != -0x8000000000000000) {
            lVar25 = *(long *)(unaff_x19 + 0xe0);
            lVar21 = *(long *)(unaff_x19 + 0xe8);
            if (lVar21 != 0) {
              puVar11 = (undefined8 *)(lVar25 + 0x20);
              do {
                if (puVar11[-4] != 0) {
                  _free(puVar11[-3]);
                }
                if (puVar11[-1] != 0) {
                  _free(*puVar11);
                }
                if (puVar11[2] != -0x8000000000000000 && puVar11[2] != 0) {
                  _free(puVar11[3]);
                }
                puVar11 = puVar11 + 9;
                lVar21 = lVar21 + -1;
              } while (lVar21 != 0);
            }
            if (*(long *)(unaff_x19 + 0xd8) != 0) {
              _free(lVar25);
            }
            lVar25 = *(long *)(unaff_x19 + 0xf8);
            lVar21 = *(long *)(unaff_x19 + 0x100);
            if (lVar21 != 0) {
              puVar11 = (undefined8 *)(lVar25 + 8);
              do {
                if (puVar11[-1] != 0) {
                  _free(*puVar11);
                }
                puVar11 = puVar11 + 3;
                lVar21 = lVar21 + -1;
              } while (lVar21 != 0);
            }
            if (*(long *)(unaff_x19 + 0xf0) != 0) {
              _free(lVar25);
            }
            lVar25 = *(long *)(unaff_x19 + 0x110);
            lVar21 = *(long *)(unaff_x19 + 0x118);
            if (lVar21 != 0) {
              puVar11 = (undefined8 *)(lVar25 + 8);
              do {
                if (puVar11[-1] != 0) {
                  _free(*puVar11);
                }
                puVar11 = puVar11 + 3;
                lVar21 = lVar21 + -1;
              } while (lVar21 != 0);
            }
            if (*(long *)(unaff_x19 + 0x108) != 0) {
              _free(lVar25);
            }
            lVar25 = *(long *)(unaff_x19 + 0x128);
            lVar21 = *(long *)(unaff_x19 + 0x130);
            if (lVar21 != 0) {
              puVar11 = (undefined8 *)(lVar25 + 8);
              do {
                if (puVar11[-1] != 0) {
                  _free(*puVar11);
                }
                puVar11 = puVar11 + 3;
                lVar21 = lVar21 + -1;
              } while (lVar21 != 0);
            }
            if (*(long *)(unaff_x19 + 0x120) != 0) {
              _free(lVar25);
            }
            lVar25 = *(long *)(unaff_x19 + 0x140);
            lVar21 = *(long *)(unaff_x19 + 0x148);
            if (lVar21 != 0) {
              puVar11 = (undefined8 *)(lVar25 + 8);
              do {
                if (puVar11[-1] != 0) {
                  _free(*puVar11);
                }
                puVar11 = puVar11 + 3;
                lVar21 = lVar21 + -1;
              } while (lVar21 != 0);
            }
            if (*(long *)(unaff_x19 + 0x138) != 0) {
              _free(lVar25);
            }
            *(undefined1 *)(unaff_x19 + 0x611) = 0;
          }
          goto LAB_1009ad7a8;
        }
        *(undefined8 **)(unaff_x19 + 0x4b8) = puVar13 + 6;
        uVar15 = puVar13[3];
        uVar23 = puVar13[2];
        uVar20 = puVar13[5];
        uVar16 = puVar13[4];
        uVar31 = *puVar13;
        *(undefined8 *)(unaff_x19 + 0x4d8) = puVar13[1];
        *puVar11 = uVar31;
        *(undefined8 *)(unaff_x19 + 0x4e8) = uVar15;
        *(undefined8 *)(unaff_x19 + 0x4e0) = uVar23;
        *(undefined8 *)(unaff_x19 + 0x4f8) = uVar20;
        *(undefined8 *)(unaff_x19 + 0x4f0) = uVar16;
        if (*(long *)(unaff_x19 + 0x4d0) == -0x8000000000000000) goto LAB_1009ad344;
        *(undefined1 *)(unaff_x19 + 0x617) = 1;
        *(undefined8 *)(unaff_x19 + 0x508) = *(undefined8 *)(unaff_x19 + 0x4d8);
        *(undefined8 *)(unaff_x19 + 0x500) = *puVar11;
        *(undefined8 *)(unaff_x19 + 0x518) = *(undefined8 *)(unaff_x19 + 0x4e8);
        *(undefined8 *)(unaff_x19 + 0x510) = *(undefined8 *)(unaff_x19 + 0x4e0);
        *(undefined8 *)(unaff_x19 + 0x528) = *(undefined8 *)(unaff_x19 + 0x4f8);
        *(undefined8 *)(unaff_x19 + 0x520) = *(undefined8 *)(unaff_x19 + 0x4f0);
        uVar16 = *(undefined8 *)(unaff_x19 + 0x508);
        lVar21 = *(long *)(unaff_x19 + 0x510);
        lVar25 = 1;
        if ((lVar21 != 0) && (lVar25 = _malloc(lVar21), lVar25 == 0)) {
          func_0x0001087c9084(1,lVar21);
          goto LAB_1009ad8ac;
        }
        _memcpy(lVar25,uVar16,lVar21);
        *(long *)(unaff_x19 + 0x530) = lVar21;
        *(long *)(unaff_x19 + 0x538) = lVar25;
        *(long *)(unaff_x19 + 0x540) = lVar21;
        *(undefined2 *)(unaff_x19 + 0x616) = 1;
        *(undefined1 *)(unaff_x19 + 0x612) = 1;
        *(undefined8 *)(unaff_x19 + 0x550) = *(undefined8 *)(unaff_x19 + 0x520);
        *(long *)(unaff_x19 + 0x548) = *(long *)(unaff_x19 + 0x518);
        lVar25 = *(long *)(unaff_x19 + 0x528);
        *(long *)(unaff_x19 + 0x558) = lVar25;
        if (lVar25 == 0) {
          *(undefined8 *)(unaff_x29 + -0xb0) = 0;
          *(undefined8 *)(unaff_x29 + -0xa8) = 8;
        }
        else {
          puVar11 = (undefined8 *)_malloc(lVar25 * 0x18);
          if (puVar11 == (undefined8 *)0x0) {
            func_0x0001087c9084(8,lVar25 * 0x18);
            goto LAB_1009ad8ac;
          }
          lVar21 = 0;
          *(long *)(unaff_x29 + -0xb0) = lVar25;
          *(undefined8 **)(unaff_x29 + -0xa8) = puVar11;
          do {
            in_stack_00000198 = (long *)&DAT_100c7b524;
            in_stack_000001a8 = (long *)&DAT_10112965c;
            in_stack_00000190 = (long *)&stack0x00000250;
            in_stack_000001a0 = (long *)(unaff_x19 + 0x530);
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (&stack0x00000120,s___108acc98a,&stack0x00000190);
            puVar11[1] = in_stack_00000128;
            *puVar11 = in_stack_00000120;
            puVar11[2] = in_stack_00000130;
            lVar21 = lVar21 + 1;
            puVar11 = puVar11 + 3;
          } while (lVar25 != lVar21);
        }
        lVar21 = *(long *)(unaff_x29 + -0xb0);
        *(undefined8 *)(unaff_x19 + 0x568) = *(undefined8 *)(unaff_x29 + -0xa8);
        *(long *)(unaff_x19 + 0x560) = lVar21;
        *(long *)(unaff_x19 + 0x570) = lVar25;
        *(undefined1 *)(unaff_x19 + 0x615) = 1;
        if (*(long *)(unaff_x19 + 0xb0) == 0) {
          __ZN3std4path4Path5_join17ha8f408dfc5576c3eE
                    (unaff_x19 + 0x578,*(undefined8 *)(*(long *)(unaff_x19 + 0xa8) + 0x20),
                     *(undefined8 *)(*(long *)(unaff_x19 + 0xa8) + 0x28),&UNK_108cb45e4,0xd);
        }
        else {
          __ZN3std4path4Path5_join17ha8f408dfc5576c3eE
                    (&stack0x00000190,*(long *)(unaff_x19 + 0xb0),*(undefined8 *)(unaff_x19 + 0xb8),
                     &UNK_108cb45dd,7);
          plVar17 = in_stack_00000198;
          __ZN3std4path4Path5_join17ha8f408dfc5576c3eE
                    (unaff_x19 + 0x578,in_stack_00000198,in_stack_000001a0,&UNK_108cb45e4,0xd);
          if (in_stack_00000190 != (long *)0x0) {
            _free(plVar17);
          }
        }
        puVar11 = (undefined8 *)(*(long *)(unaff_x19 + 0xa8) + 0x28);
        lVar25 = *(long *)(*(long *)(unaff_x19 + 0xa8) + 0x20);
        if (*(long *)(unaff_x19 + 0xb0) != 0) {
          puVar11 = (undefined8 *)(unaff_x19 + 0xb8);
          lVar25 = *(long *)(unaff_x19 + 0xb0);
        }
        uVar16 = *puVar11;
        __ZN16codex_app_server6config21external_agent_config27effective_external_settings17h546c719b6b7eeb35E
                  (&stack0x00000190,*(undefined8 *)(unaff_x19 + 0x580),
                   *(undefined8 *)(unaff_x19 + 0x588));
        plVar17 = in_stack_00000198;
        if (in_stack_00000190 == (long *)0x8000000000000006) {
          *(undefined1 *)(unaff_x19 + 0x614) = 0;
          if (*(long *)(unaff_x19 + 0x578) != 0) {
            _free(*(undefined8 *)(unaff_x19 + 0x580));
          }
          lVar21 = *(long *)(unaff_x19 + 0x568);
          lVar25 = *(long *)(unaff_x19 + 0x570);
          if (lVar25 != 0) {
            puVar11 = (undefined8 *)(lVar21 + 8);
            do {
              if (puVar11[-1] != 0) {
                _free(*puVar11);
              }
              puVar11 = puVar11 + 3;
              lVar25 = lVar25 + -1;
            } while (lVar25 != 0);
          }
          if (*(long *)(unaff_x19 + 0x560) != 0) {
            _free(lVar21);
          }
          *(undefined1 *)(unaff_x19 + 0x615) = 0;
          lVar21 = *(long *)(unaff_x19 + 0x550);
          lVar25 = *(long *)(unaff_x19 + 0x558);
          if (lVar25 != 0) {
            puVar11 = (undefined8 *)(lVar21 + 8);
            do {
              if (puVar11[-1] != 0) {
                _free(*puVar11);
              }
              puVar11 = puVar11 + 3;
              lVar25 = lVar25 + -1;
            } while (lVar25 != 0);
          }
          if (*(long *)(unaff_x19 + 0x548) != 0) {
            _free(lVar21);
          }
          *(undefined1 *)(unaff_x19 + 0x612) = 0;
          if (*(long *)(unaff_x19 + 0x530) != 0) {
            _free(*(undefined8 *)(unaff_x19 + 0x538));
          }
          *(undefined1 *)(unaff_x19 + 0x616) = 0;
          if (*(long *)(unaff_x19 + 0x500) != 0) {
            _free(*(undefined8 *)(unaff_x19 + 0x508));
          }
          *(undefined1 *)(unaff_x19 + 0x617) = 0;
          FUN_100cf68e0(unaff_x19 + 0x4b0);
          FUN_100e1955c(unaff_x19 + 0x1b0);
          FUN_100e652d8(unaff_x19 + 0x150);
          *(undefined2 *)(unaff_x19 + 0x618) = 0;
          uVar16 = 0x8000000000000000;
          if (*(long *)(unaff_x19 + 0xc0) != -0x8000000000000000) {
            if (*(char *)(unaff_x19 + 0x611) == '\x01') {
              lVar25 = *(long *)(unaff_x19 + 0xe0);
              lVar21 = *(long *)(unaff_x19 + 0xe8);
              if (lVar21 != 0) {
                puVar11 = (undefined8 *)(lVar25 + 0x20);
                do {
                  if (puVar11[-4] != 0) {
                    _free(puVar11[-3]);
                  }
                  if (puVar11[-1] != 0) {
                    _free(*puVar11);
                  }
                  if (puVar11[2] != -0x8000000000000000 && puVar11[2] != 0) {
                    _free(puVar11[3]);
                  }
                  puVar11 = puVar11 + 9;
                  lVar21 = lVar21 + -1;
                } while (lVar21 != 0);
              }
              if (*(long *)(unaff_x19 + 0xd8) != 0) {
                _free(lVar25);
              }
              if ((*(byte *)(unaff_x19 + 0x611) & 1) != 0) {
                lVar25 = *(long *)(unaff_x19 + 0xf8);
                lVar21 = *(long *)(unaff_x19 + 0x100);
                if (lVar21 != 0) {
                  puVar11 = (undefined8 *)(lVar25 + 8);
                  do {
                    if (puVar11[-1] != 0) {
                      _free(*puVar11);
                    }
                    puVar11 = puVar11 + 3;
                    lVar21 = lVar21 + -1;
                  } while (lVar21 != 0);
                }
                if (*(long *)(unaff_x19 + 0xf0) != 0) {
                  _free(lVar25);
                }
              }
            }
            if ((*(byte *)(unaff_x19 + 0x611) & 1) != 0) {
              lVar25 = *(long *)(unaff_x19 + 0x110);
              lVar21 = *(long *)(unaff_x19 + 0x118);
              if (lVar21 != 0) {
                puVar11 = (undefined8 *)(lVar25 + 8);
                do {
                  if (puVar11[-1] != 0) {
                    _free(*puVar11);
                  }
                  puVar11 = puVar11 + 3;
                  lVar21 = lVar21 + -1;
                } while (lVar21 != 0);
              }
              if (*(long *)(unaff_x19 + 0x108) != 0) {
                _free(lVar25);
              }
            }
            if ((*(byte *)(unaff_x19 + 0x611) & 1) != 0) {
              lVar25 = *(long *)(unaff_x19 + 0x128);
              lVar21 = *(long *)(unaff_x19 + 0x130);
              if (lVar21 != 0) {
                puVar11 = (undefined8 *)(lVar25 + 8);
                do {
                  if (puVar11[-1] != 0) {
                    _free(*puVar11);
                  }
                  puVar11 = puVar11 + 3;
                  lVar21 = lVar21 + -1;
                } while (lVar21 != 0);
              }
              if (*(long *)(unaff_x19 + 0x120) != 0) {
                _free(lVar25);
              }
            }
            if ((*(byte *)(unaff_x19 + 0x611) & 1) != 0) {
              lVar25 = *(long *)(unaff_x19 + 0x140);
              lVar21 = *(long *)(unaff_x19 + 0x148);
              if (lVar21 != 0) {
                puVar11 = (undefined8 *)(lVar25 + 8);
                do {
                  if (puVar11[-1] != 0) {
                    _free(*puVar11);
                  }
                  puVar11 = puVar11 + 3;
                  lVar21 = lVar21 + -1;
                } while (lVar21 != 0);
              }
              if (*(long *)(unaff_x19 + 0x138) != 0) {
                _free(lVar25);
              }
            }
            *(undefined1 *)(unaff_x19 + 0x611) = 0;
            uVar16 = 0x8000000000000000;
          }
LAB_1009ad7a8:
          *(undefined1 *)(unaff_x19 + 0x611) = 0;
          *in_stack_00000000 = uVar16;
          in_stack_00000000[1] = plVar17;
          in_stack_00000000[7] = in_stack_00000228;
          in_stack_00000000[6] = in_stack_00000220;
          in_stack_00000000[9] = in_stack_00000238;
          in_stack_00000000[8] = in_stack_00000230;
          in_stack_00000000[0xb] = in_stack_00000248;
          in_stack_00000000[10] = in_stack_00000240;
          uVar10 = 1;
          in_stack_00000000[3] = in_stack_00000208;
          in_stack_00000000[2] = in_stack_00000200;
          in_stack_00000000[5] = in_stack_00000218;
          in_stack_00000000[4] = in_stack_00000210;
          goto LAB_1009ad7d0;
        }
        if (in_stack_00000190 == (long *)0x8000000000000005) {
          *(undefined8 *)(unaff_x19 + 0x590) = 0x8000000000000000;
          *(undefined1 *)(unaff_x19 + 0x614) = 1;
LAB_1009acca4:
          *(undefined1 *)(unaff_x19 + 0x616) = 0;
          uVar16 = *(undefined8 *)(unaff_x19 + 0x530);
          uVar23 = *(undefined8 *)(unaff_x19 + 0x538);
          uVar20 = *(undefined8 *)(unaff_x19 + 0x540);
          lVar25 = *(long *)(unaff_x19 + 400);
          if (lVar25 == *(long *)(unaff_x19 + 0x180)) {
            __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(unaff_x19 + 0x180);
          }
          puVar11 = (undefined8 *)(*(long *)(unaff_x19 + 0x188) + lVar25 * 0x18);
          *puVar11 = uVar16;
          puVar11[1] = uVar23;
          puVar11[2] = uVar20;
          *(long *)(unaff_x19 + 400) = lVar25 + 1;
          *(undefined1 *)(unaff_x19 + 0x615) = 0;
          plVar17 = *(long **)(unaff_x19 + 0x560);
          plVar22 = *(long **)(unaff_x19 + 0x568);
          uVar19 = *(ulong *)(unaff_x19 + 0x570);
          in_stack_000001a8 = plVar22 + uVar19 * 3;
          lVar25 = *(long *)(unaff_x19 + 0x1a8);
          in_stack_00000190 = plVar22;
          in_stack_00000198 = plVar22;
          in_stack_000001a0 = plVar17;
          if ((ulong)(*(long *)(unaff_x19 + 0x198) - lVar25) < uVar19) {
            FUN_108855060(unaff_x19 + 0x198,lVar25,uVar19,8,0x18);
            lVar25 = *(long *)(unaff_x19 + 0x1a8);
          }
          _memcpy(*(long *)(unaff_x19 + 0x1a0) + lVar25 * 0x18,plVar22,uVar19 * 0x18);
          *(ulong *)(unaff_x19 + 0x1a8) = lVar25 + uVar19;
          if (plVar17 != (long *)0x0) {
            _free(plVar22);
          }
        }
        else {
          __ZN16codex_app_server6config21external_agent_config34collect_marketplace_import_sources17h8178f85040fd1d91E
                    (unaff_x29 + -0xe8,&stack0x00000250,lVar25,uVar16);
          lVar25 = *(long *)(unaff_x29 + -0xe8);
          if (lVar25 != 0) {
            uVar16 = *(undefined8 *)(unaff_x19 + 0x538);
            uVar19 = *(ulong *)(unaff_x19 + 0x540);
            lVar26 = *(long *)(unaff_x29 + -0xe0);
            lVar21 = lVar26;
            lVar28 = lVar25;
LAB_1009aca38:
            uVar29 = (ulong)*(ushort *)(lVar28 + 0x322);
            lVar30 = uVar29 * 0x18;
            lVar12 = lVar28 + 0x218;
            lVar4 = 100;
            do {
              lVar27 = lVar4;
              if (lVar30 == 0) goto LAB_1009acaa0;
              uVar5 = *(ulong *)(lVar12 + 0x10);
              uVar3 = uVar19;
              if (uVar5 <= uVar19) {
                uVar3 = uVar5;
              }
              iVar9 = _memcmp(uVar16,*(undefined8 *)(lVar12 + 8),uVar3);
              lVar4 = uVar19 - uVar5;
              if (iVar9 != 0) {
                lVar4 = (long)iVar9;
              }
              cVar1 = 0 < lVar4;
              if (lVar4 < 0) {
                cVar1 = -1;
              }
              lVar30 = lVar30 + -0x18;
              lVar12 = lVar12 + 0x18;
              lVar4 = lVar27 + 1;
            } while (cVar1 == '\x01');
            if (cVar1 == '\0') {
              *(undefined1 *)(unaff_x29 + -0xc9) = 0;
              if (lVar21 == 0) {
                in_stack_00000130 = (long *)(lVar27 + -100);
                in_stack_00000128 = (long *)0x0;
                in_stack_00000120 = (long *)lVar28;
                FUN_100f3ed88(&stack0x00000190,&stack0x00000120,unaff_x29 + -0xc9);
              }
              else {
                lVar28 = *(long *)(lVar28 + (lVar27 + 1) * 8);
                while (lVar21 = lVar21 + -1, lVar21 != 0) {
                  lVar28 = *(long *)(lVar28 + (ulong)*(ushort *)(lVar28 + 0x322) * 8 + 0x328);
                }
                uVar6 = *(ushort *)(lVar28 + 0x322);
                *(long *)(unaff_x29 + -200) = lVar28;
                *(undefined8 *)(unaff_x29 + -0xc0) = 0;
                *(ulong *)(unaff_x29 + -0xb8) = (ulong)uVar6 - 1;
                FUN_100f3ed88(&stack0x00000190,unaff_x29 + -200,unaff_x29 + -0xc9);
                *(long **)(unaff_x29 + -0x88) = in_stack_000001b8;
                *(long **)(unaff_x29 + -0x90) = in_stack_000001b0;
                *(long **)(unaff_x29 + -0x78) = in_stack_000001c8;
                *(long **)(unaff_x29 + -0x80) = in_stack_000001c0;
                *(long **)(unaff_x29 + -0x70) = in_stack_000001d0;
                *(long **)(unaff_x29 + -0xa8) = in_stack_00000198;
                *(long **)(unaff_x29 + -0xb0) = in_stack_00000190;
                *(long **)(unaff_x29 + -0x98) = in_stack_000001a8;
                *(long **)(unaff_x29 + -0xa0) = in_stack_000001a0;
                lVar21 = in_stack_000001d8;
                uVar19 = in_stack_000001e8;
                if (*(ushort *)(in_stack_000001d8 + 0x322) <= in_stack_000001e8) {
                  do {
                    puVar2 = (ushort *)(lVar21 + 800);
                    uVar19 = (ulong)*puVar2;
                    lVar21 = *(long *)(lVar21 + 0x210);
                  } while (*(ushort *)(lVar21 + 0x322) <= *puVar2);
                }
                lVar28 = lVar21 + uVar19 * 0x18;
                puVar11 = (undefined8 *)(lVar21 + uVar19 * 0x30);
                in_stack_000001a0 = *(long **)(lVar28 + 0x228);
                in_stack_00000198 = *(long **)(lVar28 + 0x220);
                in_stack_00000190 = *(long **)(lVar28 + 0x218);
                *(undefined8 *)(lVar28 + 0x228) = *(undefined8 *)(unaff_x29 + -0xa0);
                uVar16 = *(undefined8 *)(unaff_x29 + -0xb0);
                *(undefined8 *)(lVar28 + 0x220) = *(undefined8 *)(unaff_x29 + -0xa8);
                *(undefined8 *)(lVar28 + 0x218) = uVar16;
                in_stack_000001b0 = (long *)puVar11[1];
                in_stack_000001a8 = (long *)*puVar11;
                in_stack_000001c0 = (long *)puVar11[3];
                in_stack_000001b8 = (long *)puVar11[2];
                in_stack_000001d0 = (long *)puVar11[5];
                in_stack_000001c8 = (long *)puVar11[4];
                uVar16 = *(undefined8 *)(unaff_x29 + -0x98);
                uVar23 = *(undefined8 *)(unaff_x29 + -0x80);
                uVar20 = *(undefined8 *)(unaff_x29 + -0x88);
                puVar11[1] = *(undefined8 *)(unaff_x29 + -0x90);
                *puVar11 = uVar16;
                puVar11[3] = uVar23;
                puVar11[2] = uVar20;
                uVar16 = *(undefined8 *)(unaff_x29 + -0x78);
                puVar11[5] = *(undefined8 *)(unaff_x29 + -0x70);
                puVar11[4] = uVar16;
              }
              in_stack_00000148 = in_stack_000001b8;
              in_stack_00000140 = in_stack_000001b0;
              in_stack_00000158 = in_stack_000001c8;
              in_stack_00000150 = in_stack_000001c0;
              in_stack_00000160 = in_stack_000001d0;
              in_stack_00000128 = in_stack_00000198;
              in_stack_00000120 = in_stack_00000190;
              in_stack_00000138 = in_stack_000001a8;
              in_stack_00000130 = in_stack_000001a0;
              *(long *)(unaff_x29 + -0xd8) = *(long *)(unaff_x29 + -0xd8) + -1;
              if (*(char *)(unaff_x29 + -0xc9) == '\x01') {
                if (lVar26 == 0) {
                  __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc5fa6,0x21,&UNK_10b238178);
                  goto LAB_1009ad8ac;
                }
                lVar25 = *(long *)(lVar25 + 0x328);
                *(long *)(unaff_x29 + -0xe8) = lVar25;
                *(long *)(unaff_x29 + -0xe0) = lVar26 + -1;
                *(undefined8 *)(lVar25 + 0x210) = 0;
                _free();
              }
              in_stack_00000198 = in_stack_00000138;
              in_stack_00000190 = in_stack_00000130;
              in_stack_000001a8 = in_stack_00000148;
              in_stack_000001a0 = in_stack_00000140;
              in_stack_000001b8 = in_stack_00000158;
              in_stack_000001b0 = in_stack_00000150;
              in_stack_000001c0 = in_stack_00000160;
              if (in_stack_00000120 == (long *)0x8000000000000000) goto LAB_1009acc48;
              puVar11 = (undefined8 *)((ulong)&stack0x00000190 | 8);
              if (in_stack_00000120 != (long *)0x0) {
                _free(in_stack_00000128);
              }
              uVar16 = *puVar11;
              uVar23 = puVar11[3];
              uVar20 = puVar11[2];
              *(undefined8 *)(unaff_x19 + 0x598) = puVar11[1];
              *(undefined8 *)(unaff_x19 + 0x590) = uVar16;
              *(undefined8 *)(unaff_x19 + 0x5a8) = uVar23;
              *(undefined8 *)(unaff_x19 + 0x5a0) = uVar20;
              uVar16 = puVar11[4];
              *(undefined8 *)(unaff_x19 + 0x5b8) = puVar11[5];
              *(undefined8 *)(unaff_x19 + 0x5b0) = uVar16;
              goto LAB_1009acc7c;
            }
            uVar29 = lVar27 - 100;
LAB_1009acaa0:
            if (lVar21 != 0) goto code_r0x0001009acaa4;
          }
LAB_1009acc48:
          *(undefined8 *)(unaff_x19 + 0x590) = 0x8000000000000000;
LAB_1009acc7c:
          FUN_100d6de0c(unaff_x29 + -0xe8);
          FUN_100de6690(&stack0x00000250);
          lVar21 = *(long *)(unaff_x19 + 0x590);
          lVar25 = 1;
          *(undefined1 *)(unaff_x19 + 0x614) = 1;
          if (lVar21 == -0x8000000000000000) goto LAB_1009acca4;
          uVar20 = *(undefined8 *)(unaff_x19 + 0x598);
          uVar23 = *(undefined8 *)(unaff_x19 + 0x5a0);
          uVar32 = *(undefined8 *)(unaff_x19 + 0x5b0);
          uVar31 = *(undefined8 *)(unaff_x19 + 0x5a8);
          uVar15 = *(undefined8 *)(unaff_x19 + 0x5b8);
          *(undefined2 *)(unaff_x19 + 0x613) = 1;
          uVar16 = *(undefined8 *)(*(long *)(unaff_x19 + 0xa8) + 8);
          lVar28 = *(long *)(*(long *)(unaff_x19 + 0xa8) + 0x10);
          if ((lVar28 != 0) && (lVar25 = _malloc(lVar28), lVar25 == 0)) {
            func_0x0001087c9084(1,lVar28);
            goto LAB_1009ad8ac;
          }
          _memcpy(lVar25,uVar16,lVar28);
          *(undefined1 *)(unaff_x19 + 0x613) = 0;
          *(long *)(unaff_x19 + 0x620) = lVar28;
          *(long *)(unaff_x19 + 0x628) = lVar25;
          *(long *)(unaff_x19 + 0x630) = lVar28;
          *(undefined8 *)(unaff_x19 + 0x660) = 0;
          *(undefined8 *)(unaff_x19 + 0x658) = 8;
          *(undefined8 *)(unaff_x19 + 0x670) = uVar32;
          *(undefined8 *)(unaff_x19 + 0x668) = uVar31;
          *(undefined8 *)(unaff_x19 + 0x678) = uVar15;
          *(undefined8 *)(unaff_x19 + 0x640) = uVar20;
          *(long *)(unaff_x19 + 0x638) = lVar21;
          *(undefined8 *)(unaff_x19 + 0x650) = 0;
          *(undefined8 *)(unaff_x19 + 0x648) = uVar23;
          *(undefined1 *)(unaff_x19 + 0x688) = 0;
          FUN_100a6625c(&stack0x000000d0,(long *)(unaff_x19 + 0x620),in_stack_00000018);
          if (in_stack_000000d0 == -0x7fffffffffffffff) {
            *in_stack_00000000 = 0x8000000000000001;
            uVar10 = 3;
            goto LAB_1009ad7d0;
          }
          plVar17 = (long *)(unaff_x19 + 0x5c0);
          *(undefined8 *)(unaff_x19 + 0x5d8) = in_stack_000000e8;
          *(undefined8 *)(unaff_x19 + 0x5d0) = in_stack_000000e0;
          *(undefined8 *)(unaff_x19 + 0x5e8) = in_stack_000000f8;
          *(undefined8 *)(unaff_x19 + 0x5e0) = in_stack_000000f0;
          *(undefined8 *)(unaff_x19 + 0x5f8) = in_stack_00000108;
          *(undefined8 *)(unaff_x19 + 0x5f0) = in_stack_00000100;
          *(undefined8 *)(unaff_x19 + 0x608) = in_stack_00000118;
          *(undefined8 *)(unaff_x19 + 0x600) = in_stack_00000110;
          *(undefined8 *)(unaff_x19 + 0x5c8) = in_stack_000000d8;
          *(long *)(unaff_x19 + 0x5c0) = in_stack_000000d0;
          if (*(char *)(unaff_x19 + 0x688) == '\x03') {
            plVar22 = *(long **)(unaff_x19 + 0x680);
            if (*plVar22 == 0xcc) {
              *plVar22 = 0x84;
            }
            else {
              (**(code **)(plVar22[2] + 0x20))();
            }
          }
          else if (*(char *)(unaff_x19 + 0x688) == '\0') {
            if (*(long *)(unaff_x19 + 0x620) != 0) {
              _free(*(undefined8 *)(unaff_x19 + 0x628));
            }
            if (*(long *)(unaff_x19 + 0x638) != 0) {
              _free(*(undefined8 *)(unaff_x19 + 0x640));
            }
            if ((*(long *)(unaff_x19 + 0x668) != -0x8000000000000000) &&
               (*(long *)(unaff_x19 + 0x668) != 0)) {
              _free(*(undefined8 *)(unaff_x19 + 0x670));
            }
            lVar21 = *(long *)(unaff_x19 + 0x658);
            lVar25 = *(long *)(unaff_x19 + 0x660);
            if (lVar25 != 0) {
              puVar11 = (undefined8 *)(lVar21 + 8);
              do {
                if (puVar11[-1] != 0) {
                  _free(*puVar11);
                }
                puVar11 = puVar11 + 3;
                lVar25 = lVar25 + -1;
              } while (lVar25 != 0);
            }
            if (*(long *)(unaff_x19 + 0x650) != 0) {
              _free(lVar21);
            }
          }
          if (*plVar17 == -0x8000000000000000) {
            *(undefined1 *)(unaff_x19 + 0x616) = 0;
            uVar16 = *(undefined8 *)(unaff_x19 + 0x530);
            uVar20 = *(undefined8 *)(unaff_x19 + 0x538);
            uVar23 = *(undefined8 *)(unaff_x19 + 0x540);
            lVar25 = *(long *)(unaff_x19 + 400);
            if (lVar25 == *(long *)(unaff_x19 + 0x180)) {
              __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE
                        (unaff_x19 + 0x180);
            }
            puVar11 = (undefined8 *)(*(long *)(unaff_x19 + 0x188) + lVar25 * 0x18);
            *puVar11 = uVar16;
            puVar11[1] = uVar20;
            puVar11[2] = uVar23;
            *(long *)(unaff_x19 + 400) = lVar25 + 1;
            *(undefined1 *)(unaff_x19 + 0x615) = 0;
            plVar18 = *(long **)(unaff_x19 + 0x560);
            plVar22 = *(long **)(unaff_x19 + 0x568);
            uVar19 = *(ulong *)(unaff_x19 + 0x570);
            in_stack_000001a8 = plVar22 + uVar19 * 3;
            lVar25 = *(long *)(unaff_x19 + 0x1a8);
            in_stack_00000190 = plVar22;
            in_stack_00000198 = plVar22;
            in_stack_000001a0 = plVar18;
            if ((ulong)(*(long *)(unaff_x19 + 0x198) - lVar25) < uVar19) {
              FUN_108855060(unaff_x19 + 0x198,lVar25,uVar19,8,0x18);
              lVar25 = *(long *)(unaff_x19 + 0x1a8);
            }
            _memcpy(*(long *)(unaff_x19 + 0x1a0) + lVar25 * 0x18,plVar22,uVar19 * 0x18);
            *(ulong *)(unaff_x19 + 0x1a8) = lVar25 + uVar19;
          }
          else {
            plVar22 = *(long **)(unaff_x19 + 0x5f8);
            in_stack_000001c0 = *(long **)(unaff_x19 + 0x5f0);
            in_stack_000001d8 = *(long *)(unaff_x19 + 0x608);
            in_stack_000001d0 = *(long **)(unaff_x19 + 0x600);
            in_stack_000001a8 = *(long **)(unaff_x19 + 0x5d8);
            in_stack_000001a0 = *(long **)(unaff_x19 + 0x5d0);
            in_stack_000001b8 = *(long **)(unaff_x19 + 0x5e8);
            in_stack_000001b0 = *(long **)(unaff_x19 + 0x5e0);
            in_stack_00000198 = *(long **)(unaff_x19 + 0x5c8);
            in_stack_00000190 = (long *)*plVar17;
            in_stack_000001c8 = plVar22;
            __ZN18codex_core_plugins11marketplace30find_marketplace_manifest_path17h1e06eee85b85bf8eE
                      (&stack0x00000120,plVar22,in_stack_000001d0);
            plVar7 = in_stack_00000130;
            plVar24 = in_stack_00000128;
            plVar18 = in_stack_00000120;
            if (in_stack_00000120 != (long *)0x8000000000000000) goto LAB_1009ad154;
            *(undefined1 *)(unaff_x19 + 0x616) = 0;
            uVar16 = *(undefined8 *)(unaff_x19 + 0x530);
            uVar20 = *(undefined8 *)(unaff_x19 + 0x538);
            uVar23 = *(undefined8 *)(unaff_x19 + 0x540);
            lVar25 = *(long *)(unaff_x19 + 400);
            if (lVar25 == *(long *)(unaff_x19 + 0x180)) {
              __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE
                        (unaff_x19 + 0x180);
            }
            puVar11 = (undefined8 *)(*(long *)(unaff_x19 + 0x188) + lVar25 * 0x18);
            *puVar11 = uVar16;
            puVar11[1] = uVar20;
            puVar11[2] = uVar23;
            *(long *)(unaff_x19 + 400) = lVar25 + 1;
            *(undefined1 *)(unaff_x19 + 0x615) = 0;
            plVar18 = *(long **)(unaff_x19 + 0x560);
            plVar24 = *(long **)(unaff_x19 + 0x568);
            uVar19 = *(ulong *)(unaff_x19 + 0x570);
            in_stack_00000138 = plVar24 + uVar19 * 3;
            lVar25 = *(long *)(unaff_x19 + 0x1a8);
            in_stack_00000120 = plVar24;
            in_stack_00000128 = plVar24;
            in_stack_00000130 = plVar18;
            if ((ulong)(*(long *)(unaff_x19 + 0x198) - lVar25) < uVar19) {
              FUN_108855060(unaff_x19 + 0x198,lVar25,uVar19,8,0x18);
              lVar25 = *(long *)(unaff_x19 + 0x1a8);
            }
            _memcpy(*(long *)(unaff_x19 + 0x1a0) + lVar25 * 0x18,plVar24,uVar19 * 0x18);
            *(ulong *)(unaff_x19 + 0x1a8) = lVar25 + uVar19;
            if (plVar18 != (long *)0x0) {
              _free(plVar24);
            }
            if (in_stack_00000190 != (long *)0x0) {
              _free(in_stack_00000198);
            }
            plVar18 = in_stack_000001c0;
            if (in_stack_000001a8 != (long *)0x0) {
              _free(in_stack_000001b0);
              plVar18 = in_stack_000001c0;
            }
          }
          if (plVar18 != (long *)0x0) {
            _free(plVar22);
          }
          if ((*plVar17 == -0x8000000000000000) && (*(long *)(unaff_x19 + 0x5d0) != 0)) {
            _free(*(undefined8 *)(unaff_x19 + 0x5d8));
          }
          *(undefined1 *)(unaff_x19 + 0x613) = 0;
        }
        *(undefined1 *)(unaff_x19 + 0x614) = 0;
        if (*(long *)(unaff_x19 + 0x578) != 0) {
          _free(*(undefined8 *)(unaff_x19 + 0x580));
        }
        *(undefined1 *)(unaff_x19 + 0x615) = 0;
        lVar21 = *(long *)(unaff_x19 + 0x550);
        lVar25 = *(long *)(unaff_x19 + 0x558);
        if (lVar25 != 0) {
          puVar11 = (undefined8 *)(lVar21 + 8);
          do {
            if (puVar11[-1] != 0) {
              _free(*puVar11);
            }
            puVar11 = puVar11 + 3;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
        }
        if (*(long *)(unaff_x19 + 0x548) != 0) {
          _free(lVar21);
        }
        *(undefined1 *)(unaff_x19 + 0x612) = 0;
        *(undefined1 *)(unaff_x19 + 0x616) = 0;
        lVar25 = *(long *)(unaff_x19 + 0x500);
      } while( true );
    }
    uVar20 = puVar11[1];
    uVar16 = *puVar11;
    lVar21 = puVar11[2];
    *(long *)(unaff_x19 + 0x660) = lVar21;
    *(undefined8 *)(unaff_x19 + 0x658) = uVar20;
    *(undefined8 *)(unaff_x19 + 0x650) = uVar16;
    uVar16 = *(undefined8 *)(unaff_x19 + 0x658);
    lVar25 = 1;
    if ((lVar21 != 0) && (lVar25 = _malloc(lVar21), lVar25 == 0)) {
      func_0x0001087c9084(1,lVar21);
LAB_1009ad8ac:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1009ad8b0);
      (*pcVar8)();
    }
    _memcpy(lVar25,uVar16,lVar21);
    uVar16 = *(undefined8 *)(unaff_x19 + 0x628);
    lVar26 = *(long *)(unaff_x19 + 0x630);
    lVar28 = 1;
    if ((lVar26 != 0) && (lVar28 = _malloc(lVar26), lVar28 == 0)) {
      func_0x0001087c9084(1,lVar26);
      goto LAB_1009ad8ac;
    }
    _memcpy(lVar28,uVar16,lVar26);
    *(long *)(unaff_x19 + 0x668) = lVar21;
    *(long *)(unaff_x19 + 0x670) = lVar25;
    *(long *)(unaff_x19 + 0x678) = lVar21;
    *(long *)(unaff_x19 + 0x680) = lVar26;
    *(long *)(unaff_x19 + 0x688) = lVar28;
    *(long *)(unaff_x19 + 0x690) = lVar26;
    *(long *)(unaff_x19 + 0x698) = unaff_x19 + 0x1b0;
    *(undefined1 *)(in_stack_00000010 + 0xdb6) = 0;
    FUN_100a7c4d8(&stack0x00000190,unaff_x19 + 0x668,in_stack_00000018);
    if (in_stack_00000190 == (long *)0x8000000000000001) {
      *in_stack_00000000 = 0x8000000000000001;
      uVar10 = 4;
LAB_1009ad7d0:
      *(undefined1 *)(unaff_x19 + 0x610) = uVar10;
      return;
    }
    in_stack_00000168 = in_stack_000001d8;
    in_stack_00000160 = in_stack_000001d0;
    in_stack_00000178 = in_stack_000001e8;
    in_stack_00000170 = in_stack_000001e0;
    in_stack_00000128 = in_stack_00000198;
    in_stack_00000120 = in_stack_00000190;
    in_stack_00000138 = in_stack_000001a8;
    in_stack_00000130 = in_stack_000001a0;
    in_stack_00000148 = in_stack_000001b8;
    in_stack_00000140 = in_stack_000001b0;
    in_stack_00000158 = in_stack_000001c8;
    in_stack_00000150 = in_stack_000001c0;
    in_stack_00000180 = in_stack_000001f0;
    FUN_100cc1104(unaff_x19 + 0x668);
    plVar17 = in_stack_00000120;
    unaff_x21 = (long *)(unaff_x19 + 0x650);
    in_stack_000001a0 = (long *)(unaff_x19 + 0x530);
    in_stack_00000190 = unaff_x21;
    if (in_stack_00000120 != (long *)0x8000000000000000) {
      in_stack_00000198 = (long *)&DAT_10112965c;
      in_stack_000001a8 = (long *)&DAT_10112965c;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0xb0,s___108acc98a,&stack0x00000190);
      uVar16 = *(undefined8 *)(unaff_x29 + -0xb0);
      uVar20 = *(undefined8 *)(unaff_x29 + -0xa8);
      uVar23 = *(undefined8 *)(unaff_x29 + -0xa0);
      lVar25 = *(long *)(unaff_x19 + 0x178);
      if (lVar25 == *(long *)(unaff_x19 + 0x168)) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(unaff_x19 + 0x168);
      }
      puVar11 = (undefined8 *)(*(long *)(unaff_x19 + 0x170) + lVar25 * 0x18);
      *puVar11 = uVar16;
      puVar11[1] = uVar20;
      puVar11[2] = uVar23;
      *(long *)(unaff_x19 + 0x178) = lVar25 + 1;
      if (plVar17 != (long *)0x0) {
        _free(in_stack_00000128);
      }
      if (in_stack_00000138 != (long *)0x0) {
        _free(in_stack_00000140);
      }
      if (in_stack_00000150 != (long *)0x0) {
        _free(in_stack_00000158);
      }
      if (in_stack_00000168 != 0) {
        _free(in_stack_00000170);
      }
      goto LAB_1009ac5e8;
    }
    in_stack_00000198 = (long *)&DAT_10112965c;
    in_stack_000001a8 = (long *)&DAT_10112965c;
  } while( true );
code_r0x0001009acaa4:
  lVar28 = *(long *)(lVar28 + uVar29 * 8 + 0x328);
  lVar21 = lVar21 + -1;
  goto LAB_1009aca38;
LAB_1009ad154:
  uVar16 = *(undefined8 *)(unaff_x19 + 0x538);
  lVar25 = 1;
  lVar21 = *(long *)(unaff_x19 + 0x540);
  if ((lVar21 != 0) && (lVar25 = _malloc(lVar21), lVar25 == 0)) {
    func_0x0001087c9084(1,lVar21);
    goto LAB_1009ad8ac;
  }
  _memcpy(lVar25,uVar16,lVar21);
  lVar28 = *(long *)(unaff_x19 + 0x160);
  if (lVar28 == *(long *)(unaff_x19 + 0x150)) {
    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(unaff_x19 + 0x150);
  }
  plVar17 = (long *)(*(long *)(unaff_x19 + 0x158) + lVar28 * 0x18);
  *plVar17 = lVar21;
  plVar17[1] = lVar25;
  plVar17[2] = lVar21;
  *(long *)(unaff_x19 + 0x160) = lVar28 + 1;
  *(long **)(unaff_x19 + 0x620) = plVar18;
  *(long **)(unaff_x19 + 0x628) = plVar24;
  *(long **)(unaff_x19 + 0x630) = plVar7;
  if (in_stack_00000190 != (long *)0x0) {
    _free(in_stack_00000198);
  }
  if (in_stack_000001a8 != (long *)0x0) {
    _free(in_stack_000001b0);
  }
  if (in_stack_000001c0 != (long *)0x0) {
    _free(plVar22);
  }
  *(undefined1 *)(unaff_x19 + 0x612) = 0;
  puVar11 = *(undefined8 **)(unaff_x19 + 0x550);
  puVar13 = puVar11 + *(long *)(unaff_x19 + 0x558) * 3;
  *(undefined8 **)(unaff_x19 + 0x13d0) = puVar11;
  *(undefined8 **)(unaff_x19 + 0x13d8) = puVar11;
  *(undefined8 *)(unaff_x19 + 0x13e0) = *(undefined8 *)(unaff_x19 + 0x548);
  *(undefined8 **)(unaff_x19 + 0x13e8) = puVar13;
  if (puVar11 != puVar13) goto LAB_1009ac60c;
LAB_1009ad22c:
  *(undefined8 *)(unaff_x19 + 0x638) = 0x8000000000000000;
  puVar14 = puVar11;
  goto LAB_1009ad238;
}

