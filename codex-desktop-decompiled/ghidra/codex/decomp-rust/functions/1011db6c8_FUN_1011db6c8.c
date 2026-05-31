
void FUN_1011db6c8(void)

{
  undefined8 *puVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  uint6 uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  code *pcVar13;
  long lVar14;
  ulong uVar15;
  undefined8 extraout_x1;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  long *unaff_x20;
  ushort uVar23;
  long *plVar24;
  long lVar25;
  long *plVar26;
  long unaff_x23;
  long *plVar27;
  long unaff_x24;
  ulong uVar28;
  ulong uVar29;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined1 unaff_w27;
  long unaff_x28;
  long unaff_x29;
  long in_xzr;
  long lStack0000000000000020;
  long in_stack_00000028;
  ulong in_stack_00000030;
  long in_stack_00000048;
  long in_stack_00000058;
  undefined8 in_stack_00000068;
  ulong in_stack_00000070;
  long in_stack_00000078;
  ulong in_stack_00000080;
  long in_stack_00000088;
  ulong in_stack_00000090;
  long in_stack_00000098;
  ulong in_stack_000000a0;
  long in_stack_000000a8;
  ulong in_stack_000000b0;
  long in_stack_000000b8;
  ulong in_stack_000000c0;
  long in_stack_000000c8;
  ulong in_stack_000000d0;
  long in_stack_000000d8;
  ulong in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  long in_stack_000000f8;
  long *in_stack_00000100;
  undefined *in_stack_00000108;
  undefined8 *in_stack_00000110;
  undefined *in_stack_00000118;
  long *in_stack_00000160;
  undefined *in_stack_00000168;
  long in_stack_000001b8;
  undefined8 in_stack_000001c0;
  long in_stack_00000270;
  long in_stack_00000278;
  ulong in_stack_00000280;
  long in_stack_00000288;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000001d0,s_the_subcommand_____wasn_t_recogn_108abf349,&stack0x00000220);
  uVar15 = FUN_10072a880(&stack0x000001d0);
  FUN_100e3ab90(&stack0x00000070);
  if (in_stack_000001b8 != 0) {
    _free(in_stack_000001c0);
  }
  FUN_100e3ab90(&stack0x00000160);
  if (unaff_x23 != 0) {
    _free();
  }
  if (unaff_x25 == 0x8000000000000005) {
    *unaff_x20 = 2;
    unaff_x20[1] = uVar15;
    return;
  }
  in_stack_00000058 = in_stack_00000028;
  in_stack_00000048 = unaff_x24;
  FUN_10072c154(unaff_x29 + -0xd0);
  in_stack_00000160 = (long *)&UNK_108ccbeac;
  in_stack_00000168 = (undefined *)0xd;
  if (*(long *)(unaff_x29 + -0xd0) != 2) {
    in_stack_00000090 = *(ulong *)(unaff_x29 + -0xb0);
    in_stack_00000100 = (long *)&stack0x00000160;
    in_stack_00000108 = &DAT_100c7b3a0;
    in_stack_00000110 = &stack0x00000070;
    in_stack_00000118 =
         &
         __ZN80__LT_clap_builder__parser__error__MatchesError_u20_as_u20_core__fmt__Display_GT_3fmt17h4df871ff5894b778E
    ;
    in_stack_00000070 = in_stack_00000270;
    in_stack_00000078 = in_stack_00000278;
    in_stack_00000080 = in_stack_00000280;
    in_stack_00000088 = in_stack_00000288;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s__Mismatch_between_definition_and_108ac57ee,&stack0x00000100,&UNK_10b21f750);
    goto LAB_1011db9f0;
  }
  puVar1 = &stack0x00000048;
  cVar4 = *(char *)(unaff_x29 + -200);
  if (cVar4 == '\x02') {
    lVar14 = FUN_10072aa8c(9,&UNK_108cd3038,0x3f);
  }
  else {
    plVar24 = (long *)&UNK_108ccce5e;
    FUN_1007295b8(&stack0x00000070);
    lVar9 = in_stack_000000d8;
    uVar19 = in_stack_000000d0;
    lVar8 = in_stack_000000c8;
    lVar25 = in_stack_00000078;
    lVar14 = in_stack_00000070;
    if (in_stack_00000080 != 2) {
      plVar27 = (long *)0x542426b42a78cf0f;
      lStack0000000000000020 = in_stack_000000c8;
      uVar17 = extraout_x1;
      uVar29 = unaff_x25;
      if ((in_stack_00000080 & 1) == 0) {
        if (in_stack_000000c0 != 0) {
          lVar20 = in_stack_000000b8;
          do {
            lVar18 = *(long *)(lVar20 + 8);
            plVar22 = (long *)(lVar20 + 0x10);
            lVar20 = lVar20 + 0x18;
            lVar16 = *plVar22 << 5;
            while (lVar16 != 0) {
              plVar22 = (long *)(lVar18 + 0x10);
              uVar29 = *(ulong *)(lVar18 + 0x18);
              lVar18 = lVar18 + 0x20;
              lVar16 = lVar16 + -0x20;
              lVar21 = *plVar22;
              uVar28 = uVar29;
              if (uVar29 != 0x542426b42a78cf0f || *plVar22 != -0x205e335f245ef1e8)
              goto LAB_1011da840;
            }
            uVar17 = 0;
          } while (lVar20 != in_stack_000000b8 + in_stack_000000c0 * 0x18);
        }
      }
      else {
        lVar21 = in_stack_00000088;
        uVar28 = in_stack_00000090;
        if (in_stack_00000090 != 0x542426b42a78cf0f || in_stack_00000088 != -0x205e335f245ef1e8) {
LAB_1011da840:
          in_stack_00000070 = in_stack_00000080;
          in_stack_00000078 = in_stack_00000088;
          in_stack_00000080 = in_stack_00000090;
          in_stack_00000088 = in_stack_00000098;
          in_stack_00000090 = in_stack_000000a0;
          in_stack_00000098 = in_stack_000000a8;
          in_stack_000000a0 = in_stack_000000b0;
          in_stack_000000a8 = in_stack_000000b8;
          in_stack_000000b0 = in_stack_000000c0;
          in_stack_000000b8 = in_stack_000000c8;
          in_stack_000000c0 = in_stack_000000d0;
          in_stack_000000d0 = in_stack_000000e0;
          in_stack_000000c8 = in_stack_000000d8;
          func_0x000100729744(unaff_x29 + -0xd0);
          if (*(long *)(unaff_x29 + -0xd0) != 2) {
            FUN_100e3ac9c(unaff_x29 + -0xd0);
          }
          in_stack_00000100 = (long *)&UNK_108ccce5e;
          in_stack_00000108 = (undefined *)0x6;
          in_stack_00000070 = 0;
          in_stack_00000090 = 0x542426b42a78cf0f;
          in_stack_00000088 = -0x205e335f245ef1e8;
          *(long ***)(unaff_x29 + -0xd0) = &stack0x00000100;
          *(undefined **)(unaff_x29 + -200) = &DAT_100c7b3a0;
          *(ulong **)(unaff_x29 + -0xc0) = &stack0x00000070;
          *(undefined **)(unaff_x29 + -0xb8) =
               &
               __ZN80__LT_clap_builder__parser__error__MatchesError_u20_as_u20_core__fmt__Display_GT_3fmt17h4df871ff5894b778E
          ;
          in_stack_00000078 = lVar21;
          in_stack_00000080 = uVar28;
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                    (s__Mismatch_between_definition_and_108ac57ee,unaff_x29 + -0xd0,&UNK_10b21f750);
          goto LAB_1011db9f0;
        }
      }
      in_stack_00000070 = in_stack_000000b8;
      in_stack_00000078 = in_stack_000000b8;
      in_stack_00000088 = in_stack_000000b8 + in_stack_000000c0 * 0x18;
      in_stack_00000080 = in_stack_000000b0;
      in_stack_00000090 = 0;
      in_stack_000000b0 = 0;
      if (in_stack_00000098 != 0) {
        _free(in_stack_000000a0,uVar17,lVar14,lVar25);
      }
      if (lVar9 != 0) {
        lVar14 = 0;
        uVar29 = 0x18;
        do {
          plVar22 = (long *)(uVar19 + lVar14 * 0x18);
          plVar24 = (long *)plVar22[1];
          lVar25 = plVar22[2];
          if (lVar25 != 0) {
            plVar26 = plVar24 + 1;
            do {
              if (plVar26[-1] != 0) {
                _free(*plVar26);
              }
              plVar26 = plVar26 + 3;
              lVar25 = lVar25 + -1;
            } while (lVar25 != 0);
          }
          if (*plVar22 != 0) {
            _free(plVar24);
          }
          lVar14 = lVar14 + 1;
        } while (lVar14 != lVar9);
      }
      if (lVar8 != 0) {
        _free(uVar19);
      }
      FUN_1006c2cdc(&stack0x00000100,&stack0x00000070);
      puVar12 = in_stack_00000118;
      puVar11 = in_stack_00000110;
      puVar10 = in_stack_00000108;
      plVar22 = in_stack_00000100;
      if (in_stack_00000100 == (long *)0x0) {
        uVar23 = 6;
      }
      else {
        in_stack_00000160 = in_stack_00000100;
        in_stack_00000168 = in_stack_00000108;
        (**(code **)(in_stack_00000108 + 0x18))
                  (unaff_x29 + -0xd0,
                   (undefined *)
                   ((long)in_stack_00000100 +
                   (*(long *)(in_stack_00000108 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10));
        if (*(long *)(unaff_x29 + -200) != 0x542426b42a78cf0f ||
            *(long *)(unaff_x29 + -0xd0) != -0x205e335f245ef1e8) {
          *(long **)(unaff_x29 + -0xd0) = plVar22;
          *(undefined **)(unaff_x29 + -200) = puVar10;
          *(undefined8 **)(unaff_x29 + -0xc0) = puVar11;
          *(undefined **)(unaff_x29 + -0xb8) = puVar12;
          func_0x000108a07a3c(&UNK_108cab14c,99,unaff_x29 + -0xd0,&UNK_10b234e40,&UNK_10b21f768);
          goto LAB_1011db9f0;
        }
        plVar26 = plVar22;
        if (*plVar22 == 1) {
          *plVar22 = in_xzr;
          DataMemoryBarrier(2,1);
          uVar23 = *(ushort *)(plVar22 + 2);
          uVar7 = *(uint6 *)((long)plVar22 + 0x12);
          plVar26 = (long *)plVar22[3];
          lStack0000000000000020 = plVar22[4];
          plVar24 = (long *)plVar22[5];
          if (plVar22 != (long *)0xffffffffffffffff) {
            lVar14 = plVar22[1];
            plVar22[1] = lVar14 + -1;
            LORelease();
            if (lVar14 == 1) {
              DataMemoryBarrier(2,1);
              _free(plVar22);
            }
          }
          plVar27 = plVar26;
          if (uVar23 != 6) {
            uVar29 = (ulong)uVar7;
            goto LAB_1011daee0;
          }
        }
        uVar3 = *(ushort *)(plVar26 + 2);
        uVar23 = 2;
        uVar2 = 2;
        if (1 < uVar3) {
          uVar2 = uVar3 - 2;
        }
        if (uVar2 < 2) {
          if (uVar2 != 0) {
            lVar14 = plVar26[4];
            plVar24 = (long *)plVar26[5];
            if (plVar24 == (long *)0x0) {
              lStack0000000000000020 = 1;
            }
            else {
              lStack0000000000000020 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(plVar24,1);
              if (lStack0000000000000020 == 0) {
                func_0x0001087c9084(1,plVar24);
                goto LAB_1011db9f0;
              }
            }
            _memcpy(lStack0000000000000020,lVar14,plVar24);
            plVar27 = plVar24;
            uVar23 = 3;
          }
        }
        else if (uVar2 == 2) {
          uVar29 = (ulong)*(uint6 *)((long)plVar26 + 0x12);
          plVar27 = (long *)plVar26[3];
          lStack0000000000000020 = plVar26[4];
          plVar24 = (long *)plVar26[5];
          uVar23 = uVar3;
        }
        else {
          uVar23 = 5;
        }
        lVar14 = *plVar26;
        *plVar26 = lVar14 + -1;
        LORelease();
        if (lVar14 == 1) {
          DataMemoryBarrier(2,1);
          FUN_100f41070(plVar26);
        }
      }
LAB_1011daee0:
      FUN_100d74934(&stack0x00000070);
      if (uVar23 != 6) {
        FUN_10072c154(unaff_x29 + -0xd0,unaff_x26,&UNK_108cb25c3,0xe);
        in_stack_00000160 = (long *)&UNK_108cb25c3;
        in_stack_00000168 = (undefined *)0xe;
        if (*(long *)(unaff_x29 + -0xd0) != 2) {
          in_stack_00000090 = *(ulong *)(unaff_x29 + -0xb0);
          in_stack_00000100 = (long *)&stack0x00000160;
          in_stack_00000108 = &DAT_100c7b3a0;
          in_stack_00000110 = &stack0x00000070;
          in_stack_00000118 =
               &
               __ZN80__LT_clap_builder__parser__error__MatchesError_u20_as_u20_core__fmt__Display_GT_3fmt17h4df871ff5894b778E
          ;
          in_stack_00000070 = in_stack_00000270;
          in_stack_00000078 = in_stack_00000278;
          in_stack_00000080 = in_stack_00000280;
          in_stack_00000088 = in_stack_00000288;
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                    (s__Mismatch_between_definition_and_108ac57ee,&stack0x00000100,&UNK_10b21f750);
LAB_1011db9f0:
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x1011db9f4);
          (*pcVar13)();
        }
        cVar5 = *(char *)(unaff_x29 + -200);
        if (cVar5 == '\x02') {
          lVar14 = FUN_10072aa8c(9,&UNK_108cd3f42,0x40);
LAB_1011db034:
          *unaff_x20 = 2;
          unaff_x20[1] = lVar14;
        }
        else {
          FUN_10072c154(unaff_x29 + -0xd0,unaff_x26,&UNK_108cccf18,0x19);
          in_stack_00000160 = (long *)&UNK_108cccf18;
          in_stack_00000168 = (undefined *)0x19;
          if (*(long *)(unaff_x29 + -0xd0) != 2) {
            in_stack_00000090 = *(ulong *)(unaff_x29 + -0xb0);
            in_stack_00000100 = (long *)&stack0x00000160;
            in_stack_00000108 = &DAT_100c7b3a0;
            in_stack_00000110 = &stack0x00000070;
            in_stack_00000118 =
                 &
                 __ZN80__LT_clap_builder__parser__error__MatchesError_u20_as_u20_core__fmt__Display_GT_3fmt17h4df871ff5894b778E
            ;
            in_stack_00000070 = in_stack_00000270;
            in_stack_00000078 = in_stack_00000278;
            in_stack_00000080 = in_stack_00000280;
            in_stack_00000088 = in_stack_00000288;
            __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                      (s__Mismatch_between_definition_and_108ac57ee,&stack0x00000100,&UNK_10b21f750)
            ;
            goto LAB_1011db9f0;
          }
          cVar6 = *(char *)(unaff_x29 + -200);
          if (cVar6 == '\x02') {
            lVar14 = FUN_10072aa8c(9,&UNK_108cd3f82,0x4b);
            goto LAB_1011db034;
          }
          __ZN128__LT_codex_app_server_transport__transport__auth__AppServerWebsocketAuthArgs_u20_as_u20_clap_builder__derive__FromArgMatches_GT_20from_arg_matches_mut17h8234abf319740b48E
                    (&stack0x00000070,unaff_x26);
          if (in_stack_00000070 != 2) {
            unaff_x20[0xb] = in_stack_000000c8;
            unaff_x20[10] = in_stack_000000c0;
            unaff_x20[0xd] = in_stack_000000d8;
            unaff_x20[0xc] = in_stack_000000d0;
            unaff_x20[0xf] = in_stack_000000e8;
            unaff_x20[0xe] = in_stack_000000e0;
            unaff_x20[0x11] = in_stack_000000f8;
            unaff_x20[0x10] = in_stack_000000f0;
            unaff_x20[3] = in_stack_00000088;
            unaff_x20[2] = in_stack_00000080;
            unaff_x20[5] = in_stack_00000098;
            unaff_x20[4] = in_stack_00000090;
            unaff_x20[7] = in_stack_000000a8;
            unaff_x20[6] = in_stack_000000a0;
            unaff_x20[9] = in_stack_000000b8;
            unaff_x20[8] = in_stack_000000b0;
            unaff_x20[0x13] = uVar15;
            unaff_x20[0x12] = unaff_x25;
            unaff_x20[0x15] = in_stack_00000030;
            unaff_x20[0x14] = in_stack_00000048;
            unaff_x20[0x17] = unaff_x28;
            unaff_x20[0x16] = in_stack_00000058;
            unaff_x20[0x18] = CONCAT71(in_stack_00000068._1_7_,unaff_w27);
            *unaff_x20 = in_stack_00000070;
            unaff_x20[1] = in_stack_00000078;
            *(ushort *)(unaff_x20 + 0x19) = uVar23;
            *(short *)((long)unaff_x20 + 0xce) = (short)(uVar29 >> 0x20);
            *(int *)((long)unaff_x20 + 0xca) = (int)uVar29;
            unaff_x20[0x1a] = (long)plVar27;
            unaff_x20[0x1b] = lStack0000000000000020;
            unaff_x20[0x1c] = (long)plVar24;
            *(char *)(unaff_x20 + 0x1d) = cVar4;
            *(char *)((long)unaff_x20 + 0xe9) = cVar5;
            *(char *)((long)unaff_x20 + 0xea) = cVar6;
            return;
          }
          *unaff_x20 = 2;
          unaff_x20[1] = in_stack_00000078;
          in_stack_00000070 = 2;
        }
        if ((uVar23 == 3) && (plVar27 != (long *)0x0)) {
          _free(lStack0000000000000020);
        }
        goto joined_r0x0001011db058;
      }
    }
    lVar14 = FUN_10072aa8c(9,&UNK_108cd3f0a,0x38);
  }
  *unaff_x20 = 2;
  unaff_x20[1] = lVar14;
joined_r0x0001011db058:
  if (unaff_x25 != 0x8000000000000005) {
    uVar19 = unaff_x25 ^ 0x8000000000000000;
    if (-1 < (long)unaff_x25) {
      uVar19 = 2;
    }
    if ((long)uVar19 < 2) {
      if (uVar19 == 0) {
        return;
      }
      if (uVar19 == 1) {
        uVar15 = uVar15 & 0x7fffffffffffffff;
      }
    }
    else if (uVar19 == 2) {
      if (unaff_x25 != 0) {
        _free(uVar15);
      }
      uVar15 = in_stack_00000030 & 0x7fffffffffffffff;
      puVar1 = &stack0x00000058;
    }
    if (uVar15 != 0) {
      _free(*puVar1);
    }
  }
  return;
}

