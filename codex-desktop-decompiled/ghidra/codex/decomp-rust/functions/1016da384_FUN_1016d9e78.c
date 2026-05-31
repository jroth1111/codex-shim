
/* WARNING: Removing unreachable block (ram,0x0001016da104) */
/* WARNING: Removing unreachable block (ram,0x0001016d9fe0) */
/* WARNING: Removing unreachable block (ram,0x0001016da270) */
/* WARNING: Removing unreachable block (ram,0x0001016da268) */
/* WARNING: Removing unreachable block (ram,0x0001016da2bc) */
/* WARNING: Removing unreachable block (ram,0x0001016da2dc) */
/* WARNING: Removing unreachable block (ram,0x0001016da928) */
/* WARNING: Removing unreachable block (ram,0x0001016da944) */
/* WARNING: Removing unreachable block (ram,0x0001016da1c8) */
/* WARNING: Removing unreachable block (ram,0x0001016da6cc) */
/* WARNING: Removing unreachable block (ram,0x0001016da704) */
/* WARNING: Removing unreachable block (ram,0x0001016da6e4) */
/* WARNING: Removing unreachable block (ram,0x0001016da6f4) */
/* WARNING: Removing unreachable block (ram,0x0001016da708) */
/* WARNING: Removing unreachable block (ram,0x0001016da730) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1016d9e78(undefined *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  char cVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  code *pcVar12;
  long *plVar13;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar14;
  long unaff_x21;
  undefined8 *puVar15;
  long lVar16;
  long unaff_x24;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined1 *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  ulong in_xzr;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [12];
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  ulong in_stack_00000060;
  undefined8 *in_stack_00000068;
  undefined *in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined1 *puStack0000000000000080;
  undefined *puStack0000000000000088;
  char *pcStack0000000000000090;
  undefined8 *puStack0000000000000098;
  undefined8 *in_stack_000000a0;
  code *in_stack_000000a8;
  long *plStack00000000000000b0;
  undefined8 *puStack00000000000000b8;
  undefined *puStack00000000000000c0;
  undefined *puStack00000000000000c8;
  long lStack00000000000000d0;
  uint uStack00000000000000d8;
  undefined2 uStack00000000000000de;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  char *pcStack0000000000000100;
  long lStack0000000000000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  long in_stack_00000210;
  ulong in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  char *in_stack_00000240;
  long in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  
  puStack0000000000000098 = &stack0x000000a0;
  pcStack0000000000000090 = s__failed_to_restore_terminal_mode_108adbbcd;
  puStack0000000000000080 = (undefined1 *)&stack0x00000090;
  puStack0000000000000088 = &UNK_10b208fd0;
  *(undefined8 *)(unaff_x26 + 0x38) = in_stack_00000050;
  *(undefined8 **)(unaff_x26 + 0x30) = in_stack_00000048;
  uStack00000000000000f0 = in_stack_00000058;
  lStack00000000000000d0 = *(long *)(unaff_x24 + 0x60);
  _uStack00000000000000d8 = *(ulong *)(unaff_x24 + 0x68);
  puStack00000000000000b8 = *(undefined8 **)(unaff_x24 + 0x50);
  puStack00000000000000c0 = *(undefined **)(unaff_x24 + 0x58);
  plStack00000000000000b0 = (long *)0x1;
  if (puStack00000000000000b8 == (undefined8 *)0x0) {
    plStack00000000000000b0 = (long *)0x2;
  }
  uStack00000000000000f8 = *(undefined8 *)(unaff_x24 + 8);
  *(undefined1 **)(unaff_x29 + -0x70) = &stack0x000001f0;
  *(undefined1 *)(unaff_x29 + -0x68) = 1;
  *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x70;
  *(undefined **)(unaff_x29 + -0x80) = &DAT_1061c2098;
  puStack00000000000000c8 = (undefined *)0x1;
  if (lStack00000000000000d0 == 0) {
    puStack00000000000000c8 = (undefined *)0x2;
  }
  lStack0000000000000108 = unaff_x29 + -0x88;
  pcStack0000000000000100 = s__108b39f4f;
  (**(code **)(unaff_x20 + 0x20))();
  if ((in_stack_00000060 & 3) == 1) {
    puVar17 = (undefined8 *)(in_stack_00000060 - 1);
    uVar18 = *puVar17;
    puVar14 = *(undefined8 **)(in_stack_00000060 + 7);
    pcVar12 = (code *)*puVar14;
    if (pcVar12 != (code *)0x0) {
      (*pcVar12)(uVar18);
    }
    if (puVar14[1] != 0) {
      _free(uVar18);
    }
    _free(puVar17);
  }
  *(undefined1 *)(unaff_x19 + 0x2e1) = 0;
  *(long *)(unaff_x19 + 0x50) = unaff_x21;
  *(long *)(unaff_x19 + 0x58) = unaff_x27;
  *(undefined1 *)(unaff_x19 + 0x2b8) = 0;
  uVar18 = *(undefined8 *)(unaff_x21 + 8);
  uVar19 = *(undefined8 *)(unaff_x21 + 0x10);
  lVar7 = *(long *)(unaff_x27 + 8);
  lVar16 = *(long *)(unaff_x27 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x60) = uVar18;
  *(undefined8 *)(unaff_x19 + 0x68) = uVar19;
  *(long *)(unaff_x19 + 0x70) = lVar7;
  *(long *)(unaff_x19 + 0x78) = lVar16;
  *(undefined1 *)(unaff_x19 + 0x2b0) = 0;
  if (lVar16 == 0) {
    if (lRam000000010b66fc68 != 2) {
      FUN_108a0ad4c();
    }
    auVar20 = (**(code **)(lRam000000010b66fc60 + 0x28))
                        (uRam000000010b66fc58,&stack0x000001f0,&UNK_10b235390);
    (**(code **)(auVar20._8_8_ + 0x30))(auVar20._0_8_,&UNK_10b250900);
    plStack00000000000000b0 = (long *)&UNK_10b235d48;
    puStack00000000000000c8 = &UNK_108cd7923;
    lStack00000000000000d0 = 0x17;
    _puStack00000000000000b8 = auVar20;
    puVar14 = (undefined8 *)_malloc(0x28);
    if (puVar14 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x28);
      goto LAB_1016daa40;
    }
    unaff_x26 = (undefined1 *)&stack0x000000b0;
    puVar14[1] = puStack00000000000000b8;
    *puVar14 = plStack00000000000000b0;
    puVar14[3] = puStack00000000000000c8;
    puVar14[2] = puStack00000000000000c0;
    puVar14[4] = lStack00000000000000d0;
  }
  else {
    plStack00000000000000b0 = (long *)&UNK_108cde4a0;
    puStack00000000000000b8 = (undefined8 *)0x4;
    _uStack00000000000000d8 = (uint6)uStack00000000000000d8;
    _uStack00000000000000d8 = _uStack00000000000000d8 & 0xffffffffffff0000;
    puStack00000000000000c0 = &UNK_108cd7920;
    *(undefined8 *)(unaff_x26 + 0x20) = 6;
    *(undefined8 *)(unaff_x26 + 0x18) = 3;
    __ZN8tempfile7Builder8tempfile17h60c6c8fa200c6798E(&stack0x000001f0,&stack0x000000b0);
    *(undefined4 *)(unaff_x29 + -0x70) = 0;
    *(undefined8 *)(unaff_x19 + 0x80) = 1;
    *(undefined1 ***)(unaff_x19 + 0x88) = &stack0x00000080;
    *(undefined1 *)(unaff_x19 + 0x90) = 1;
    *(undefined4 *)(unaff_x19 + 0x91) = 0;
    *(undefined4 *)(unaff_x19 + 0x94) = 0;
    _close((ulong)param_1 & 0xffffffff);
    lVar10 = __ZN3std2fs5write5inner17h0d420be84ec93412E
                       (*(undefined8 *)(unaff_x19 + 0x80),*(undefined8 *)(unaff_x19 + 0x88),uVar18,
                        uVar19);
    if (lVar10 == 0) {
      __ZN3std3sys7process4unix6common7Command3new17h3172692053ff4dc3E
                (unaff_x19 + 0x98,*(undefined8 *)(lVar7 + 8),*(undefined8 *)(lVar7 + 0x10));
      *(undefined1 *)(unaff_x19 + 0x160) = 0;
      if (lVar16 != 1) {
        lVar16 = lVar16 * 0x18 + -0x18;
        puVar14 = (undefined8 *)(lVar7 + 0x28);
        do {
          __ZN3std3sys7process4unix6common7Command3arg17h0f76fc7c7ba03c31E
                    (unaff_x19 + 0x98,puVar14[-1],*puVar14);
          puVar14 = puVar14 + 3;
          lVar16 = lVar16 + -0x18;
        } while (lVar16 != 0);
      }
      __ZN3std3sys7process4unix6common7Command3arg17h0f76fc7c7ba03c31E
                (unaff_x19 + 0x98,*(undefined8 *)(unaff_x19 + 0x80),
                 *(undefined8 *)(unaff_x19 + 0x88));
      if (*(int *)(unaff_x19 + 0xe0) == 3) {
        _close(*(undefined4 *)(unaff_x19 + 0xe4));
        *(undefined4 *)(unaff_x19 + 0xe0) = 0;
        if (*(int *)(unaff_x19 + 0xe8) != 3) goto LAB_1016da0c8;
LAB_1016da124:
        _close(*(undefined4 *)(unaff_x19 + 0xec));
        *(undefined4 *)(unaff_x19 + 0xe8) = 0;
        iVar9 = *(int *)(unaff_x19 + 0xf0);
      }
      else {
        *(undefined4 *)(unaff_x19 + 0xe0) = 0;
        if (*(int *)(unaff_x19 + 0xe8) == 3) goto LAB_1016da124;
LAB_1016da0c8:
        *(undefined4 *)(unaff_x19 + 0xe8) = 0;
        iVar9 = *(int *)(unaff_x19 + 0xf0);
      }
      if (iVar9 == 3) {
        _close(*(undefined4 *)(unaff_x19 + 0xf4));
      }
      *(undefined4 *)(unaff_x19 + 0xf0) = 0;
      func_0x0001060339f8(&stack0x000001f0,unaff_x19 + 0x98,0,1);
      *(undefined4 *)(unaff_x29 + -0x88) = 1;
      *(undefined4 *)(unaff_x29 + -0x84) = 0;
      *(undefined1 ***)(unaff_x29 + -0x80) = &stack0x00000080;
      *(undefined8 *)(unaff_x29 + -0x78) = 1;
      __ZN5tokio7process7Command11build_child17h16d9f1b0d2e64326E
                (&stack0x000001f0,unaff_x19 + 0x98,unaff_x29 + -0x88);
      plStack00000000000000b0 = (long *)0x1;
      unaff_x26 = (undefined1 *)&stack0x000000b0;
      puStack00000000000000b8 = &stack0x00000080;
      puStack00000000000000c0 = (undefined *)0x1;
      puStack00000000000000c8 = param_1;
      lStack00000000000000d0 = in_stack_00000210;
      _uStack00000000000000d8 = in_stack_00000218;
      in_stack_000000e0 = in_stack_00000220;
      in_stack_000000e8 = in_stack_00000228;
      uStack00000000000000f0 = in_stack_00000230;
      uStack00000000000000f8 = in_stack_00000238;
      pcStack0000000000000100 = in_stack_00000240;
      lStack0000000000000108 = in_stack_00000248;
      in_stack_00000110 = in_stack_00000250;
      in_stack_00000118 = in_stack_00000258;
      in_stack_00000120 = in_stack_00000260;
      in_stack_00000128 = in_stack_00000268;
      in_stack_00000130 = in_stack_00000270;
      in_stack_00000138 = in_stack_00000278;
      _memcpy(unaff_x19 + 0x168,&stack0x000000b0,0x140);
      *(undefined1 *)(unaff_x19 + 0x2a8) = 0;
      plVar13 = (long *)(unaff_x19 + 0x168);
      func_0x000100fe7dd0(&stack0x000001f0,plVar13);
      if (*(char *)(unaff_x19 + 0x2a8) == '\x03') {
        plVar13 = (long *)(unaff_x19 + 0x1f8);
LAB_1016da248:
        FUN_100de2564(plVar13);
      }
      else if (*(char *)(unaff_x19 + 0x2a8) == '\0') {
        if (*plVar13 != 3) goto LAB_1016da248;
        FUN_100de21d4(unaff_x19 + 0x170);
      }
      puVar14 = (undefined8 *)FUN_100e9fa98(&stack0x00000080,&UNK_10b250960);
      FUN_100de2268(unaff_x19 + 0x98);
    }
    else {
      puVar14 = (undefined8 *)FUN_100e9fa98(lVar10,&UNK_10b2508d0);
    }
    __ZN66__LT_tempfile__file__TempPath_u20_as_u20_core__ops__drop__Drop_GT_4drop17he13119d8b1ca43b2E
              (unaff_x19 + 0x80);
    if (*(long *)(unaff_x19 + 0x88) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x80));
    }
  }
  *(undefined1 *)(unaff_x19 + 0x2b0) = 1;
  FUN_100e62d64((undefined8 *)(unaff_x19 + 0x60));
  *(undefined1 *)(unaff_x19 + 0x2b8) = 1;
  uVar11 = __ZN9codex_tui3tui9set_modes17hdaeaf5b72aafdf20E();
  if (uVar11 != 0) {
    in_stack_00000060 = uVar11;
    if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) {
      if (1 < bRam000000010b631280 - 1) {
        if (bRam000000010b631280 != 0) {
          cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN9codex_tui3tui3Tui13with_restored28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6652eb727320ba23E
                            );
          if (cVar8 != '\0') goto LAB_1016da360;
        }
        goto LAB_1016da460;
      }
LAB_1016da360:
      uVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (
                         ___ZN9codex_tui3tui3Tui13with_restored28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6652eb727320ba23E
                         );
      lVar7 = 
      ___ZN9codex_tui3tui3Tui13with_restored28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6652eb727320ba23E
      ;
      if ((uVar11 & 1) == 0) goto LAB_1016da460;
      puStack00000000000000c8 =
           (undefined *)
           (
           ___ZN9codex_tui3tui3Tui13with_restored28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6652eb727320ba23E
           + 0x30);
      *(ulong **)(unaff_x29 + -0x88) = &stack0x00000060;
      *(code **)(unaff_x29 + -0x80) =
           __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
      ;
      *(char **)(unaff_x29 + -0x70) = s__failed_to_re_enable_terminal_mo_108adbc41;
      *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x88;
      in_stack_000000a0 = (undefined8 *)(unaff_x29 + -0x70);
      in_stack_000000a8 = (code *)&UNK_10b208fd0;
      puStack00000000000000b8 = &stack0x000000a0;
      plStack00000000000000b0 = (long *)0x1;
      puStack00000000000000c0 = (undefined *)0x1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar7,&stack0x000000b0);
      lVar7 = 
      ___ZN9codex_tui3tui3Tui13with_restored28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6652eb727320ba23E
      ;
      auVar20._8_8_ = puStack00000000000000c0;
      auVar20._0_8_ = puStack00000000000000b8;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (_puStack00000000000000b8 = auVar20,
         1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puVar5 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar5 = &UNK_10b3c24c8;
        }
        puVar6 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar6 = &UNK_109adfc03;
        }
        iVar9 = (**(code **)(puVar5 + 0x18))(puVar6,&stack0x000001f0);
        if (iVar9 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar7,puVar6,puVar5,&stack0x000001f0,&stack0x000000b0);
        }
      }
    }
    else {
LAB_1016da460:
      lVar7 = 
      ___ZN9codex_tui3tui3Tui13with_restored28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6652eb727320ba23E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        in_stack_00000070 =
             *(undefined **)
              (
              ___ZN9codex_tui3tui3Tui13with_restored28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6652eb727320ba23E
              + 0x20);
        in_stack_00000078 =
             *(undefined8 *)
              (
              ___ZN9codex_tui3tui3Tui13with_restored28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6652eb727320ba23E
              + 0x28);
        in_stack_00000068 = (undefined8 *)0x2;
        puVar5 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar5 = &UNK_10b3c24c8;
        }
        puVar6 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar6 = &UNK_109adfc03;
        }
        iVar9 = (**(code **)(puVar5 + 0x18))(puVar6,&stack0x00000068);
        if (iVar9 != 0) {
          in_stack_000000a0 = &stack0x00000060;
          in_stack_000000a8 =
               __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
          ;
          puStack0000000000000098 = &stack0x000000a0;
          pcStack0000000000000090 = s__failed_to_re_enable_terminal_mo_108adbc41;
          puStack0000000000000080 = (undefined1 *)&stack0x00000090;
          puStack0000000000000088 = &UNK_10b208fd0;
          *(undefined **)(unaff_x26 + 0x38) = in_stack_00000070;
          *(undefined8 **)(unaff_x26 + 0x30) = in_stack_00000068;
          uStack00000000000000f0 = in_stack_00000078;
          lStack00000000000000d0 = *(long *)(lVar7 + 0x60);
          _uStack00000000000000d8 = *(ulong *)(lVar7 + 0x68);
          puStack00000000000000b8 = *(undefined8 **)(lVar7 + 0x50);
          puStack00000000000000c0 = *(undefined **)(lVar7 + 0x58);
          plStack00000000000000b0 = (long *)0x1;
          if (puStack00000000000000b8 == (undefined8 *)0x0) {
            plStack00000000000000b0 = (long *)0x2;
          }
          uStack00000000000000f8 = *(undefined8 *)(lVar7 + 8);
          *(undefined1 **)(unaff_x29 + -0x70) = &stack0x000001f0;
          *(undefined1 *)(unaff_x29 + -0x68) = 1;
          *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x70;
          *(undefined **)(unaff_x29 + -0x80) = &DAT_1061c2098;
          puStack00000000000000c8 = (undefined *)0x1;
          if (lStack00000000000000d0 == 0) {
            puStack00000000000000c8 = (undefined *)0x2;
          }
          lStack0000000000000108 = unaff_x29 + -0x88;
          pcStack0000000000000100 = s__108b39f4f;
          (**(code **)(puVar5 + 0x20))(puVar6,&stack0x000000b0);
        }
      }
    }
    if ((in_stack_00000060 & 3) == 1) {
      puVar15 = (undefined8 *)(in_stack_00000060 - 1);
      uVar18 = *puVar15;
      puVar17 = *(undefined8 **)(in_stack_00000060 + 7);
      pcVar12 = (code *)*puVar17;
      if (pcVar12 != (code *)0x0) {
        (*pcVar12)(uVar18);
      }
      if (puVar17[1] != 0) {
        _free(uVar18);
      }
      _free(puVar15);
    }
  }
  __ZN9codex_tui3tui27flush_terminal_input_buffer17h57de48fdf38c3420E();
  if ((*(byte *)(unaff_x19 + 0x2e0) & 1) != 0) {
    uVar11 = __ZN9codex_tui3tui3Tui16enter_alt_screen17h90037f44674e7892E
                       (*(undefined8 *)(unaff_x19 + 0x2d0));
    if ((uVar11 & 3) == 1) {
      uVar18 = *(undefined8 *)(uVar11 - 1);
      puVar17 = *(undefined8 **)(uVar11 + 7);
      pcVar12 = (code *)*puVar17;
      if (pcVar12 != (code *)0x0) {
        (*pcVar12)(uVar18);
      }
      if (puVar17[1] != 0) {
        _free(uVar18);
      }
      _free((undefined8 *)(uVar11 - 1));
    }
  }
  __ZN9codex_tui3tui3Tui13resume_events17h542f6ca4a023e7c0E(*(undefined8 *)(unaff_x19 + 0x2d0));
  *(undefined2 *)(unaff_x19 + 0x2e1) = 0x100;
  func_0x00010550547c(*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0x18));
  uVar18 = *(undefined8 *)(unaff_x19 + 0x10);
  in_stack_00000068 = &stack0x00000048;
  in_stack_00000070 =
       &
       __ZN4eyre5error61__LT_impl_u20_core__fmt__Display_u20_for_u20_eyre__Report_GT_3fmt17hd5e5355fe6b94b1aE
  ;
  in_stack_00000048 = puVar14;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000000b0,s_Failed_to_open_editor__108adbbb3,&stack0x00000068);
  __ZN9codex_tui12history_cell7notices15new_error_event17ha9e773b9c7fdeb0bE
            (unaff_x29 + -0x88,&stack0x000001f0);
  puVar14 = (undefined8 *)_malloc(0x18);
  if (puVar14 == (undefined8 *)0x0) {
LAB_1016da954:
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
  else {
    uVar19 = *(undefined8 *)(unaff_x29 + -0x88);
    puVar14[1] = *(undefined8 *)(unaff_x29 + -0x80);
    *puVar14 = uVar19;
    puVar14[2] = *(undefined8 *)(unaff_x29 + -0x78);
    func_0x00010533d4b0(uVar18,puVar14,&UNK_10b2503a0);
    (**(code **)*in_stack_00000048)();
    plVar13 = *(long **)(*(long *)(unaff_x19 + 0x18) + 0x80);
    plVar13[0x39] = plVar13[0x39] + 1;
    lVar7 = *plVar13;
    *plVar13 = lVar7 + 1;
    if (-1 < lVar7) {
      plStack00000000000000b0 = plVar13;
      auVar21 = func_0x000106032954(8);
      plVar13 = plStack00000000000000b0;
      uVar11 = plStack00000000000000b0[0x38];
      do {
        if ((uVar11 & 1) != 0) goto LAB_1016da7fc;
        if (uVar11 == 0xfffffffffffffffe) {
          __ZN3std7process5abort17hdc01e45e25b715e8E();
          goto LAB_1016da954;
        }
        uVar1 = uVar11 + 2;
        uVar3 = plStack00000000000000b0[0x38];
        bVar4 = uVar3 != uVar11;
        uVar11 = uVar3;
      } while (bVar4);
      plStack00000000000000b0[0x38] = uVar1;
      LOAcquire();
      uVar11 = plStack00000000000000b0[0x11];
      plStack00000000000000b0[0x11] = uVar11 + 1;
      lVar7 = func_0x000105217788(plStack00000000000000b0 + 0x10,uVar11);
      *(undefined1 (*) [12])(lVar7 + (uVar11 & 0x1f) * 0x10) = auVar21;
      *(ulong *)(lVar7 + 0x210) = *(ulong *)(lVar7 + 0x210) | 1L << (uVar11 & 0x1f);
      LORelease();
      puVar2 = (ulong *)(plVar13 + 0x22);
      LOAcquire();
      uVar11 = *puVar2;
      *puVar2 = uVar11 | 2;
      LORelease();
      if (uVar11 == 0) {
        lVar7 = plVar13[0x20];
        plVar13[0x20] = 0;
        *puVar2 = in_xzr;
        LORelease();
        if (lVar7 != 0) {
          (**(code **)(lVar7 + 8))(plVar13[0x21]);
        }
      }
LAB_1016da7fc:
      plVar13 = plStack00000000000000b0;
      LOAcquire();
      lVar7 = plStack00000000000000b0[0x39];
      plStack00000000000000b0[0x39] = lVar7 + -1;
      LORelease();
      if (lVar7 == 1) {
        LOAcquire();
        lVar7 = plStack00000000000000b0[0x11];
        plStack00000000000000b0[0x11] = lVar7 + 1;
        lVar7 = func_0x000100fcbef4(plStack00000000000000b0 + 0x10,lVar7);
        *(ulong *)(lVar7 + 0x210) = *(ulong *)(lVar7 + 0x210) | 0x200000000;
        LORelease();
        puVar2 = (ulong *)(plVar13 + 0x22);
        LOAcquire();
        uVar11 = *puVar2;
        *puVar2 = uVar11 | 2;
        LORelease();
        if (uVar11 == 0) {
          lVar7 = plVar13[0x20];
          plVar13[0x20] = 0;
          *puVar2 = in_xzr;
          LORelease();
          if (lVar7 != 0) {
            (**(code **)(lVar7 + 8))(plVar13[0x21]);
          }
        }
      }
      lVar7 = *plStack00000000000000b0;
      *plStack00000000000000b0 = lVar7 + -1;
      LORelease();
      if (lVar7 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7e00aa8d0633d1edE(&stack0x000000b0);
      }
      if (*(long *)(unaff_x19 + 0x38) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x40));
      }
      lVar7 = *(long *)(unaff_x19 + 0x28);
      lVar16 = *(long *)(unaff_x19 + 0x30);
      if (lVar16 != 0) {
        puVar14 = (undefined8 *)(lVar7 + 8);
        do {
          if (puVar14[-1] != 0) {
            _free(*puVar14);
          }
          puVar14 = puVar14 + 3;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
      }
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        _free(lVar7);
      }
      *(undefined1 *)(unaff_x19 + 0x2e8) = 1;
      return 0;
    }
  }
LAB_1016daa40:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x1016daa44);
  (*pcVar12)();
}

