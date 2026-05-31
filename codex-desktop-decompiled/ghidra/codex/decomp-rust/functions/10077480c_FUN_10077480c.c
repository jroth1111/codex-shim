
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10077480c(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ushort uVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  code *pcVar12;
  long extraout_x1;
  long extraout_x1_00;
  undefined1 uVar13;
  code *pcVar14;
  long lVar15;
  char *pcVar16;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *puVar17;
  long *plVar18;
  byte bVar19;
  long unaff_x24;
  char *pcVar20;
  long lVar21;
  undefined8 *puVar22;
  long unaff_x25;
  char *pcVar23;
  undefined8 *unaff_x27;
  undefined8 uVar24;
  code *in_stack_00000008;
  code *in_stack_00000010;
  code *in_stack_00000020;
  code *pcStack0000000000000050;
  long lStack0000000000000058;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  char *in_stack_00000090;
  long in_stack_00000098;
  char *in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined7 uStack00000000000000b0;
  undefined1 uStack00000000000000b7;
  undefined7 uStack00000000000000b8;
  undefined1 uStack00000000000000bf;
  long in_stack_000000c0;
  char *pcStack00000000000000c8;
  char *pcStack00000000000000d0;
  long in_stack_000000d8;
  char *in_stack_000000e0;
  undefined8 in_stack_000000e8;
  char *in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined1 in_stack_00000100;
  undefined1 uStack0000000000000108;
  char *in_stack_00000110;
  long in_stack_00000118;
  char *in_stack_00000120;
  undefined *in_stack_00000128;
  long in_stack_00000160;
  code *in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  char *in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_00000308;
  undefined8 in_stack_00000310;
  char *pcVar25;
  undefined8 in_stack_000003a8;
  undefined1 in_stack_00000400;
  char *pcVar26;
  code *pcVar27;
  code *in_stack_00000420;
  long *in_stack_00000460;
  long *in_stack_00000470;
  char *pcVar28;
  char *pcVar29;
  long lVar30;
  code *in_stack_000006f0;
  code *in_stack_000006f8;
  char *pcVar31;
  code *pcVar32;
  long in_stack_00000750;
  
  pcStack00000000000000d0 = (char *)&stack0x00000120;
  pcStack00000000000000c8 = s_Resuming_rollout_from_108ac6fb9;
  pcVar12 = (code *)&stack0x00000690;
  pcVar31 = (char *)0x1;
  unaff_x27[0x73] = in_stack_00000080;
  unaff_x27[0x72] = in_stack_00000078;
  lVar4 = *(long *)(unaff_x25 + 0x50);
  pcVar29 = *(char **)(unaff_x25 + 0x58);
  pcVar1 = (char *)0x1;
  if (lVar4 == 0) {
    pcVar1 = (char *)0x2;
  }
  pcVar25 = &stack0x00000710;
  pcVar26 = &stack0x00000378;
  pcVar27 = (code *)&DAT_1061c2098;
  (**(code **)(unaff_x24 + 0x20))();
  *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x19 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined1 *)(unaff_x19 + 0x68) = 0;
  FUN_100fbfb50(&stack0x00000480,unaff_x19 + 0x20);
  if (pcVar1 == (char *)0x8000000000000001) {
    *unaff_x21 = 0x8000000000000001;
    uVar13 = 3;
  }
  else {
    if (*(char *)(unaff_x19 + 0x68) == '\x03') {
      if (*(char *)(unaff_x19 + 0x60) == '\x03') {
        plVar10 = *(long **)(unaff_x19 + 0x58);
        if (*plVar10 == 0xcc) {
          *plVar10 = 0x84;
        }
        else {
          (**(code **)(plVar10[2] + 0x20))();
        }
      }
      else if ((*(char *)(unaff_x19 + 0x60) == '\0') && (*(long *)(unaff_x19 + 0x40) != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0x48));
      }
    }
    pcVar20 = (char *)0x8000000000000000;
    lVar30 = lVar4;
    if (pcVar1 != (char *)0x8000000000000000) {
      FUN_100e8d6f8(lVar4,pcVar29);
      if (extraout_x1 == 0) {
        lVar30 = FUN_100c35750(&UNK_108cad314,0x12);
      }
      else {
        in_stack_00000070 = 0;
        in_stack_00000090 = (char *)0x0;
        in_stack_00000098 = 8;
        in_stack_000000a0 = (char *)0x0;
        in_stack_000000a8._7_1_ = 0;
        in_stack_000000c0 = 0;
        pcStack00000000000000c8 = (char *)0x0;
        in_stack_000000e8 = 0;
        in_stack_000000f8 = 0xa0000000a;
        in_stack_00000100 = 1;
        _uStack0000000000000108 = 0;
        lStack0000000000000058 = 9;
        pcStack00000000000000d0 = pcVar29;
        in_stack_000000d8 = lVar4;
        in_stack_000000e0 = pcVar29;
        in_stack_000000f0 = pcVar29;
        pcVar20 = pcVar1;
        do {
          lVar30 = in_stack_000000d8;
          FUN_1011e0db8(&stack0x00000480,&stack0x000000d8);
          uVar5 = _uStack0000000000000108;
          if ((int)pcVar20 == 1) {
            lVar21 = (long)pcVar29 - (long)pcStack00000000000000c8;
            pcVar23 = pcVar29;
          }
          else {
            if ((_uStack0000000000000108 & 0x100) != 0) break;
            _uStack0000000000000108 = CONCAT11(1,uStack0000000000000108);
            if (((uVar5 & 1) == 0) && (pcStack00000000000000d0 == pcStack00000000000000c8)) break;
            lVar21 = (long)pcStack00000000000000d0 - (long)pcStack00000000000000c8;
            pcVar23 = pcStack00000000000000c8;
            lVar30 = in_stack_000000d8;
          }
          pcVar28 = pcStack00000000000000c8 + lVar30;
          lVar30 = lVar21;
          if ((lVar21 != 0) && (lVar15 = lVar21 + -1, pcVar28[lVar15] == '\n')) {
            if (lVar15 == 0) {
              pcVar16 = (char *)0x0;
            }
            else {
              pcVar16 = pcVar28;
              if (pcVar28[lVar21 + -2] != '\r') {
                pcVar16 = (char *)0x0;
              }
            }
            lVar30 = lVar15;
            if (pcVar16 != (char *)0x0) {
              lVar30 = lVar21 + -2;
              pcVar28 = pcVar16;
            }
          }
          pcStack00000000000000c8 = pcVar23;
          if (pcVar28 == (char *)0x0) break;
          in_stack_00000110 = pcVar28;
          in_stack_00000118 = lVar30;
          FUN_100e8d6f8(pcVar28,lVar30);
          if (extraout_x1_00 != 0) {
            pcVar29 = (char *)0x0;
            FUN_10064dc08(&stack0x00000710,&stack0x00000480);
            if (pcVar31 == (char *)0x8000000000000005) {
              in_stack_00000170 = pcVar12;
              if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
                  ((bRam000000010b62fc40 - 1 < 2 ||
                   ((bRam000000010b62fc40 != 0 &&
                    (cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                       (&
                                        __ZN13codex_rollout8recorder15RolloutRecorder18load_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc13683c091ffc70aE
                                       ), cVar7 != '\0')))))) &&
                 (uVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                    (
                                    ___ZN13codex_rollout8recorder15RolloutRecorder18load_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc13683c091ffc70aE
                                    ), (uVar9 & 1) != 0)) {
                pcVar28 = (char *)&stack0x00000110;
                pcVar29 = (char *)&stack0x00000170;
                in_stack_000006f0 = (code *)&stack0x00000690;
                in_stack_000006f8 = (code *)&UNK_10b208fd0;
                pcVar26 = (char *)0x1;
                pcVar27 = (code *)&stack0x000006f0;
                in_stack_00000420 = (code *)0x1;
                __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                          (___ZN13codex_rollout8recorder15RolloutRecorder18load_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc13683c091ffc70aE
                           ,&stack0x00000410);
                lVar30 = 
                ___ZN13codex_rollout8recorder15RolloutRecorder18load_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc13683c091ffc70aE
                ;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  pcVar25 = (char *)0x2;
                  puVar2 = puRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    puVar2 = &UNK_10b3c24c8;
                  }
                  puVar3 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar3 = &UNK_109adfc03;
                  }
                  iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000378);
                  if (iVar8 != 0) {
                    __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                              (lVar30,puVar3,puVar2,&stack0x00000378,&stack0x00000410);
                  }
                }
              }
              else {
                lVar30 = 
                ___ZN13codex_rollout8recorder15RolloutRecorder18load_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc13683c091ffc70aE
                ;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  in_stack_00000180 =
                       *(undefined8 *)
                        (
                        ___ZN13codex_rollout8recorder15RolloutRecorder18load_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc13683c091ffc70aE
                        + 0x20);
                  in_stack_00000188 =
                       *(undefined8 *)
                        (
                        ___ZN13codex_rollout8recorder15RolloutRecorder18load_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc13683c091ffc70aE
                        + 0x28);
                  in_stack_00000178 = 2;
                  puVar2 = puRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    puVar2 = &UNK_10b3c24c8;
                  }
                  puVar3 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar3 = &UNK_109adfc03;
                  }
                  iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000178);
                  if (iVar8 != 0) {
                    pcVar26 = (char *)&stack0x00000110;
                    pcVar27 = (code *)&DAT_100c5cd90;
                    in_stack_00000420 = (code *)&stack0x00000170;
                    pcVar25 = (char *)0x1;
                    pcVar29 = *(char **)(lVar30 + 0x58);
                    pcVar28 = (char *)0x1;
                    if (*(long *)(lVar30 + 0x50) == 0) {
                      pcVar28 = (char *)0x2;
                    }
                    in_stack_000006f0 = (code *)&stack0x00000378;
                    in_stack_000006f8 = (code *)CONCAT71((int7)((ulong)in_stack_000006f8 >> 8),1);
                    (**(code **)(puVar2 + 0x20))(puVar3,&stack0x00000480);
                  }
                }
              }
              pcVar32 = in_stack_00000170;
              bVar6 = in_stack_00000070 == -1;
              in_stack_00000070 = in_stack_00000070 + 1;
              if (bVar6) {
                in_stack_00000070 = -1;
              }
              in_stack_000000c0 = in_stack_00000070;
              if (*(long *)in_stack_00000170 == 1) {
                uVar9 = *(ulong *)(in_stack_00000170 + 8);
                if ((uVar9 & 3) == 1) {
                  puVar22 = (undefined8 *)(uVar9 - 1);
                  uVar24 = *puVar22;
                  puVar17 = *(undefined8 **)(uVar9 + 7);
                  pcVar14 = (code *)*puVar17;
                  if (pcVar14 != (code *)0x0) {
                    (*pcVar14)(uVar24);
                  }
                  if (puVar17[1] != 0) {
                    _free(uVar24);
                  }
                  goto LAB_100775260;
                }
              }
              else if ((*(long *)in_stack_00000170 == 0) &&
                      (*(long *)(in_stack_00000170 + 0x10) != 0)) {
                puVar22 = *(undefined8 **)(in_stack_00000170 + 8);
LAB_100775260:
                _free(puVar22);
              }
              _free(pcVar32);
              pcVar20 = pcVar28;
            }
            else {
              unaff_x27[5] = unaff_x27[0xc3];
              unaff_x27[4] = unaff_x27[0xc2];
              unaff_x27[7] = unaff_x27[0xc5];
              unaff_x27[6] = unaff_x27[0xc4];
              unaff_x27[1] = unaff_x27[0xbf];
              *unaff_x27 = unaff_x27[0xbe];
              unaff_x27[3] = unaff_x27[0xc1];
              unaff_x27[2] = unaff_x27[0xc0];
              in_stack_00000160 = in_stack_00000750;
              uVar9 = __ZN13codex_rollout8recorder40strip_legacy_ghost_snapshot_rollout_line17h1b6a146c4956d28aE
                                (&stack0x00000120);
              if ((uVar9 & 1) == 0) {
                FUN_10112c3fc(&stack0x00000378,&stack0x00000120);
                pcVar32 = pcVar12;
                if ((long)pcVar25 < 0) {
                  pcVar14 = (code *)thunk_FUN_108832ea0(&stack0x00000378,&stack0x00000690,
                                                        &UNK_10b21cc20);
                  FUN_100de6690(&stack0x00000378);
LAB_1007756cc:
                  pcVar12 = pcVar32;
                  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
                     (((bRam000000010b62fc58 - 1 < 2 ||
                       ((bRam000000010b62fc58 != 0 &&
                        (cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                           (&
                                            __ZN13codex_rollout8recorder15RolloutRecorder18load_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc3bbd56f2ced1e84E
                                           ), cVar7 != '\0')))) &&
                      (uVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                         (
                                         ___ZN13codex_rollout8recorder15RolloutRecorder18load_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc3bbd56f2ced1e84E
                                         ), (uVar9 & 1) != 0)))) {
                    pcVar31 = &stack0x000006f0;
                    pcVar12 = 
                    __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E
                    ;
                    pcVar26 = s_failed_to_parse_rollout_line__108ac7051;
                    pcVar27 = (code *)&stack0x00000710;
                    pcVar25 = &stack0x00000410;
                    pcVar28 = (char *)0x1;
                    pcVar29 = (char *)0x1;
                    FUN_1007764cc(&stack0x00000480);
                  }
                  else {
                    uVar24 = 
                    ___ZN13codex_rollout8recorder15RolloutRecorder18load_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc3bbd56f2ced1e84E
                    ;
                    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                      puVar2 = puRam000000010b634c20;
                      if (lRam000000010b66fd20 != 2) {
                        puVar2 = &UNK_10b3c24c8;
                      }
                      puVar3 = puRam000000010b634c18;
                      if (lRam000000010b66fd20 != 2) {
                        puVar3 = &UNK_109adfc03;
                      }
                      iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x000003c0);
                      if (iVar8 != 0) {
                        pcVar26 = &stack0x000006f0;
                        pcVar27 = 
                        __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E
                        ;
                        pcVar25 = s_failed_to_parse_rollout_line__108ac7051;
                        pcVar28 = (char *)0x1;
                        pcVar29 = (char *)0x1;
                        unaff_x27[0xbf] = unaff_x27[0x55];
                        unaff_x27[0xbe] = unaff_x27[0x54];
                        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                                  (uVar24,puVar3,puVar2,&stack0x00000710,&stack0x00000480);
                      }
                    }
                  }
                  bVar6 = in_stack_00000070 == -1;
                  in_stack_00000070 = in_stack_00000070 + 1;
                  if (bVar6) {
                    in_stack_00000070 = -1;
                  }
                  in_stack_000000c0 = in_stack_00000070;
                  if (*(long *)pcVar14 == 1) {
                    FUN_100de21d4(pcVar14 + 8);
                  }
                  else if ((*(long *)pcVar14 == 0) && (*(long *)(pcVar14 + 0x10) != 0)) {
                    _free(*(long *)(pcVar14 + 8));
                  }
                  _free(pcVar14);
                  in_stack_000006f0 = pcVar14;
                }
                else {
                  __ZN10serde_json5value2de15MapDeserializer3new17hd3edd1e3d737bb9dE
                            (&stack0x00000410,&stack0x00000378);
                  lVar30 = 0;
                  if (in_stack_00000460 == in_stack_00000470) {
LAB_100775638:
                    pcVar31 = &stack0x00000690;
                    pcVar32 = (code *)&DAT_100c7b3a0;
                    pcVar12 = (code *)thunk_FUN_108856088(s_missing_field_____108ac28f7,
                                                          &stack0x00000710);
LAB_100775684:
                    bVar19 = 1;
                    pcStack0000000000000050 = (code *)0x0;
LAB_100775688:
                    FUN_100d5c778(&stack0x00000678);
                    bVar6 = (bool)(bVar19 ^ 1);
                    if (((ulong)pcStack0000000000000050 & 0x7fffffffffffffff) == 0) {
                      bVar6 = true;
                    }
                    if (!bVar6) {
                      _free(in_stack_00000020);
                    }
                    FUN_100de8910(&stack0x00000458);
                    pcVar14 = pcVar12;
                    if (pcVar26 == (char *)0x8000000000000005) goto LAB_1007756cc;
                    pcVar23 = (char *)0x5;
                    pcStack0000000000000050 = in_stack_00000010;
                    pcVar20 = pcVar28;
                    pcVar12 = pcVar32;
LAB_10077580c:
                    FUN_100de6690(&stack0x00000410);
                  }
                  else {
                    pcStack0000000000000050 = (code *)0x8000000000000000;
                    plVar10 = in_stack_00000460;
LAB_100775358:
                    do {
                      pcVar23 = pcVar26;
                      in_stack_00000460 = plVar10 + 0xd;
                      lVar21 = *plVar10;
                      plVar18 = in_stack_00000460;
                      pcVar26 = pcVar23;
                      pcVar20 = pcVar31;
                      pcVar12 = pcVar32;
                      if (lVar21 == -0x8000000000000000) goto LAB_100775628;
                      plVar18 = (long *)plVar10[1];
                      lVar15 = plVar10[2];
                      lVar11 = plVar10[5];
                      unaff_x27[0xc1] = plVar10[6];
                      unaff_x27[0xc0] = lVar11;
                      lVar11 = plVar10[7];
                      unaff_x27[0xc3] = plVar10[8];
                      unaff_x27[0xc2] = lVar11;
                      lVar11 = plVar10[9];
                      unaff_x27[0xc5] = plVar10[10];
                      unaff_x27[0xc4] = lVar11;
                      in_stack_00000750 = plVar10[0xb];
                      lVar11 = plVar10[3];
                      unaff_x27[0xbf] = plVar10[4];
                      unaff_x27[0xbe] = lVar11;
                      if (pcVar23 != (char *)0x8000000000000005) {
                        FUN_100de6690(&stack0x00000410);
                      }
                      unaff_x27[99] = unaff_x27[0xc3];
                      unaff_x27[0x62] = unaff_x27[0xc2];
                      unaff_x27[0x65] = unaff_x27[0xc5];
                      unaff_x27[100] = unaff_x27[0xc4];
                      unaff_x27[0x5f] = unaff_x27[0xbf];
                      unaff_x27[0x5e] = unaff_x27[0xbe];
                      unaff_x27[0x61] = unaff_x27[0xc1];
                      unaff_x27[0x60] = unaff_x27[0xc0];
                      if (lVar15 == 0) {
                        lVar11 = 1;
LAB_10077545c:
                        _memcpy(lVar11,plVar18,lVar15);
joined_r0x000100775484:
                        bVar6 = false;
                      }
                      else {
                        if (lVar15 != 9) {
                          lVar11 = _malloc(lVar15);
                          if (lVar11 == 0) {
LAB_100776140:
                            lStack0000000000000058 = lVar15;
                            FUN_107c03c64(1,lStack0000000000000058);
                    /* WARNING: Does not return */
                            pcVar12 = (code *)SoftwareBreakpoint(1,0x100776150);
                            (*pcVar12)();
                          }
                          goto LAB_10077545c;
                        }
                        if (*plVar18 != 0x6d617473656d6974 || (char)plVar18[1] != 'p') {
                          plVar10 = (long *)_malloc(9);
                          lVar15 = lStack0000000000000058;
                          if (plVar10 == (long *)0x0) goto LAB_100776140;
                          lVar15 = *plVar18;
                          *(char *)(plVar10 + 1) = (char)plVar18[1];
                          *plVar10 = lVar15;
                          goto joined_r0x000100775484;
                        }
                        bVar6 = true;
                      }
                      if (lVar21 != 0) {
                        _free(plVar18);
                      }
                      plVar10 = in_stack_00000460;
                      if (!bVar6) {
                        pcVar26 = (char *)0x8000000000000005;
                        if (pcVar23 == (char *)0x8000000000000005) {
                          pcVar12 = (code *)thunk_FUN_1088561c0(&UNK_108cde170,0x10);
                        }
                        else {
                          FUN_100673418(&stack0x000006f0,&stack0x00000710);
                          pcVar12 = in_stack_000006f8;
                          pcVar31 = pcVar23;
                          pcVar32 = pcVar27;
                          if (SUB81(in_stack_000006f0,0) != (code)0x16) {
                            unaff_x27[0xaf] = unaff_x27[0xb7];
                            unaff_x27[0xae] = unaff_x27[0xb6];
                            unaff_x27[0xb1] = unaff_x27[0xb9];
                            unaff_x27[0xb0] = unaff_x27[0xb8];
                            if (lVar30 == 0) {
                              __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h34a99b0fb5689584E
                                        (&stack0x00000678);
                            }
                            lVar21 = lVar30 * 0x40;
                            uVar24 = unaff_x27[0xae];
                            *(undefined8 *)(lVar21 + 0x10) = unaff_x27[0xaf];
                            *(undefined8 *)(lVar21 + 8) = uVar24;
                            uVar24 = unaff_x27[0xb0];
                            *(undefined8 *)(lVar21 + 0x20) = unaff_x27[0xb1];
                            *(undefined8 *)(lVar21 + 0x18) = uVar24;
                            uVar24 = unaff_x27[0xb2];
                            *(undefined8 *)(lVar21 + 0x30) = unaff_x27[0xb3];
                            *(undefined8 *)(lVar21 + 0x28) = uVar24;
                            uVar24 = unaff_x27[0xb4];
                            *(undefined8 *)(lVar21 + 0x40) = unaff_x27[0xb5];
                            *(undefined8 *)(lVar21 + 0x38) = uVar24;
                            lVar30 = lVar30 + 1;
                            pcVar26 = (char *)0x8000000000000005;
                            if (in_stack_00000460 == in_stack_00000470) break;
                            goto LAB_100775358;
                          }
                        }
                        FUN_100e077ec(&stack0x000006d0);
                        bVar19 = 1;
                        goto LAB_100775688;
                      }
                      if (pcStack0000000000000050 != (code *)0x8000000000000000) {
                        pcVar31 = &stack0x00000690;
                        pcVar32 = (code *)&DAT_100c7b3a0;
                        pcVar12 = (code *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,
                                                              &stack0x00000710);
                        bVar19 = 1;
                        goto LAB_100775688;
                      }
                      pcVar26 = (char *)0x8000000000000005;
                      if (pcVar23 == (char *)0x8000000000000005) {
                        pcVar12 = (code *)thunk_FUN_1088561c0(&UNK_108cde170,0x10);
                        goto LAB_100775684;
                      }
                      if (pcVar23 != (char *)0x8000000000000003) {
                        pcVar12 = (code *)thunk_FUN_108832ea0(&stack0x00000710,&stack0x00000690,
                                                              &UNK_10b20a5e0);
                        FUN_100de6690(&stack0x00000710);
                        pcVar31 = pcVar23;
                        pcVar32 = pcVar27;
                        goto LAB_100775684;
                      }
                      pcVar12 = in_stack_00000420;
                      pcVar31 = pcVar23;
                      pcVar32 = pcVar27;
                      if (pcVar27 == (code *)0x8000000000000000) goto LAB_100775684;
                      in_stack_00000020 = in_stack_00000420;
                      pcStack0000000000000050 = pcVar27;
                    } while (in_stack_00000460 != in_stack_00000470);
                    pcVar26 = (char *)0x8000000000000005;
                    plVar18 = in_stack_00000470;
                    pcVar20 = pcVar23;
                    pcVar12 = pcVar27;
LAB_100775628:
                    if (pcStack0000000000000050 == (code *)0x8000000000000000) goto LAB_100775638;
                    FUN_1007db7f4(&stack0x00000710,8,lVar30);
                    pcVar31 = pcVar20;
                    if (pcVar20 == (char *)0x5) {
                      pcVar32 = pcVar12;
                      if (pcStack0000000000000050 == (code *)0x0) {
                        pcStack0000000000000050 = (code *)0x0;
                        bVar19 = 0;
                      }
                      else {
                        _free(in_stack_00000020);
                        bVar19 = 0;
                      }
                      goto LAB_100775688;
                    }
                    _memcpy(&stack0x000001a8,&stack0x00000720,0x1d0);
                    FUN_100d5c778(&stack0x00000678);
                    _memcpy(&stack0x00000490,&stack0x000001a8,0x1d0);
                    pcVar23 = pcVar20;
                    pcVar14 = pcVar12;
                    if (in_stack_00000470 != plVar18) {
                      pcVar14 = (code *)thunk_FUN_1087e422c(in_stack_000003a8,&UNK_10b21cb90,
                                                            &UNK_10b20a590);
                      FUN_100e06a10(&stack0x00000480);
                      pcVar23 = (char *)0x5;
                    }
                    FUN_100de8910(&stack0x00000458);
                    in_stack_00000008 = in_stack_00000020;
                    if (pcVar26 != (char *)0x8000000000000005) goto LAB_10077580c;
                  }
                  pcVar16 = in_stack_000000a0;
                  if ((long)pcVar23 < 3) {
                    if (pcVar23 == (char *)0x0) {
                      if ((in_stack_000000a8._7_1_ & 1) == 0) {
                        uStack00000000000000b8 = (undefined7)in_stack_00000310;
                        uStack00000000000000bf = (undefined1)((ulong)in_stack_00000310 >> 0x38);
                        uStack00000000000000b0 = (undefined7)in_stack_00000308;
                        uStack00000000000000b7 = (undefined1)((ulong)in_stack_00000308 >> 0x38);
                        in_stack_000000a8._7_1_ = 1;
                      }
                      _memcpy(&stack0x00000490,&stack0x000001a8,0x1d0);
                      pcVar16 = in_stack_000000a0;
                      pcVar28 = (char *)0x0;
                      if (in_stack_000000a0 == in_stack_00000090) {
                        FUN_107c05bf0(&stack0x00000090);
                      }
                    }
                    else {
                      pcVar29 = in_stack_000001a8;
                      if (pcVar23 == (char *)0x1) {
                        pcVar28 = (char *)0x1;
                        if (in_stack_000000a0 == in_stack_00000090) {
                          FUN_107c05bf0(&stack0x00000090);
                        }
                      }
                      else {
                        pcVar28 = (char *)0x2;
                        if (in_stack_000000a0 == in_stack_00000090) {
                          FUN_107c05bf0(&stack0x00000090);
                        }
                      }
                    }
                  }
                  else if (pcVar23 == (char *)0x3) {
                    _memcpy(&stack0x00000490,&stack0x000001a8,0x168);
                    pcVar16 = in_stack_000000a0;
                    pcVar28 = (char *)0x3;
                    if (in_stack_000000a0 == in_stack_00000090) {
                      FUN_107c05bf0(&stack0x00000090);
                    }
                  }
                  else {
                    if (pcVar23 != (char *)0x4) {
                      in_stack_00000010 = pcStack0000000000000050;
                      pcVar28 = pcVar20;
                      pcVar32 = pcVar12;
                      goto LAB_1007756cc;
                    }
                    _memcpy(&stack0x00000490,&stack0x000001a8,0x1d0);
                    pcVar16 = in_stack_000000a0;
                    pcVar28 = (char *)0x4;
                    if (in_stack_000000a0 == in_stack_00000090) {
                      FUN_107c05bf0(&stack0x00000090);
                    }
                  }
                  _memcpy(in_stack_00000098 + (long)pcVar16 * 0x1e0,&stack0x00000480,0x1e0);
                  in_stack_000000a0 = pcVar16 + 1;
                  if (pcStack0000000000000050 == (code *)0x0) {
                    in_stack_00000010 = (code *)0x0;
                  }
                  else {
                    _free(in_stack_00000008);
                    in_stack_00000010 = pcStack0000000000000050;
                  }
                }
                FUN_100de6690(&stack0x00000120);
                pcVar20 = pcVar28;
              }
              else {
                if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
                    ((bRam000000010b62fc28 - 1 < 2 ||
                     ((bRam000000010b62fc28 != 0 &&
                      (cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                         (&
                                          __ZN13codex_rollout8recorder15RolloutRecorder18load_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6c4e4c29601c810dE
                                         ), cVar7 != '\0')))))) &&
                   (uVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                      (
                                      ___ZN13codex_rollout8recorder15RolloutRecorder18load_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6c4e4c29601c810dE
                                      ), (uVar9 & 1) != 0)) {
                  pcVar26 = 
                  "skipping legacy ghost_snapshot rollout lineempty session fileget_state_dbreconcile_rolloutstate db discrepancy during read_repair_rollout_path: upsert_needed (fast path)state db discrepancy during read_repair_rollout_path: upsert_needed (slow path)backfill_incompleteSpanRef.LockFailedFailed to acquire lock for SpanRef: {:?}$__toml_private_datetime<permissions instructions></permissions instructions>JSON number out of rangeget host:port from transport ctxTcp Connector Service cannot establish a UDP transporttcp connector: conncept to proxytcp connector: conncept to connector target (overwrite?)tcp connector: connect to servershould not be called againtext/event-streammcp-session-idlast-event-id"
                  ;
                  pcVar27 = (code *)0x57;
                  pcVar25 = &stack0x00000410;
                  pcVar28 = (char *)0x1;
                  pcVar29 = (char *)0x1;
                  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                            (___ZN13codex_rollout8recorder15RolloutRecorder18load_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6c4e4c29601c810dE
                             ,&stack0x00000480);
                  lVar30 = 
                  ___ZN13codex_rollout8recorder15RolloutRecorder18load_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6c4e4c29601c810dE
                  ;
                  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                     (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                    pcVar12 = *(code **)(
                                        ___ZN13codex_rollout8recorder15RolloutRecorder18load_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6c4e4c29601c810dE
                                        + 0x20);
                    pcVar31 = (char *)0x5;
                    puVar2 = puRam000000010b634c20;
                    if (lRam000000010b66fd20 != 2) {
                      puVar2 = &UNK_10b3c24c8;
                    }
                    puVar3 = puRam000000010b634c18;
                    if (lRam000000010b66fd20 != 2) {
                      puVar3 = &UNK_109adfc03;
                    }
                    iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000710);
                    if (iVar8 != 0) {
                      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                                (lVar30,puVar3,puVar2,&stack0x00000710,&stack0x00000480);
                    }
                  }
                }
                else {
                  lVar30 = 
                  ___ZN13codex_rollout8recorder15RolloutRecorder18load_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6c4e4c29601c810dE
                  ;
                  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                     (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                    in_stack_00000198 =
                         *(undefined8 *)
                          (
                          ___ZN13codex_rollout8recorder15RolloutRecorder18load_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6c4e4c29601c810dE
                          + 0x20);
                    in_stack_000001a0 =
                         *(undefined8 *)
                          (
                          ___ZN13codex_rollout8recorder15RolloutRecorder18load_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6c4e4c29601c810dE
                          + 0x28);
                    in_stack_00000190 = 5;
                    puVar2 = puRam000000010b634c20;
                    if (lRam000000010b66fd20 != 2) {
                      puVar2 = &UNK_10b3c24c8;
                    }
                    puVar3 = puRam000000010b634c18;
                    if (lRam000000010b66fd20 != 2) {
                      puVar3 = &UNK_109adfc03;
                    }
                    iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000190);
                    if (iVar8 != 0) {
                      in_stack_000006f0 = (code *)&stack0x00000690;
                      in_stack_000006f8 = (code *)&UNK_10b208fd0;
                      pcVar31 = (char *)0x1;
                      pcVar12 = (code *)&stack0x000006f0;
                      pcVar29 = *(char **)(lVar30 + 0x58);
                      pcVar28 = (char *)0x1;
                      if (*(long *)(lVar30 + 0x50) == 0) {
                        pcVar28 = (char *)0x2;
                      }
                      pcVar25 = &stack0x00000710;
                      pcVar26 = &stack0x00000378;
                      pcVar27 = (code *)&DAT_1061c2098;
                      (**(code **)(puVar2 + 0x20))(puVar3,&stack0x00000480);
                    }
                  }
                }
                FUN_100de6690(&stack0x00000120);
                pcVar20 = pcVar28;
              }
            }
          }
        } while ((_uStack0000000000000108 & 0x100) == 0);
        if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
           (((bRam000000010b62fc70 - 1 < 2 ||
             ((bRam000000010b62fc70 != 0 &&
              (cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN13codex_rollout8recorder15RolloutRecorder18load_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hde016fe86fa0fec5E
                                 ), cVar7 != '\0')))) &&
            (uVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (
                               ___ZN13codex_rollout8recorder15RolloutRecorder18load_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hde016fe86fa0fec5E
                               ), (uVar9 & 1) != 0)))) {
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                    (___ZN13codex_rollout8recorder15RolloutRecorder18load_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hde016fe86fa0fec5E
                     ,&stack0x00000410);
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            uVar24 = *(undefined8 *)
                      (
                      ___ZN13codex_rollout8recorder15RolloutRecorder18load_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hde016fe86fa0fec5E
                      + 0x20);
            puVar2 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_10b3c24c8;
            }
            puVar3 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar3 = &UNK_109adfc03;
            }
            iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000378);
            if (iVar8 != 0) {
              pcStack00000000000000c8 = &stack0x00000410;
              pcStack00000000000000d0 = (char *)CONCAT71(pcStack00000000000000d0._1_7_,1);
              in_stack_00000120 = (char *)&stack0x000000c8;
              in_stack_00000128 = &DAT_1061c2098;
              unaff_x27[0x73] = uVar24;
              unaff_x27[0x72] = 4;
              (**(code **)(puVar2 + 0x20))(puVar3,&stack0x00000480);
            }
          }
        }
        else {
          lVar30 = 
          ___ZN13codex_rollout8recorder15RolloutRecorder18load_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hde016fe86fa0fec5E
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            puVar2 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_10b3c24c8;
            }
            puVar3 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar3 = &UNK_109adfc03;
            }
            iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x000003d8);
            if (iVar8 != 0) {
              in_stack_00000120 = in_stack_000000a0;
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar30,puVar3,puVar2,&stack0x000003d8,&stack0x00000710);
            }
          }
        }
        unaff_x27[0x5b] = CONCAT71(uStack00000000000000b8,uStack00000000000000b7);
        unaff_x27[0x5a] = CONCAT71(uStack00000000000000b0,in_stack_000000a8._7_1_);
        pcVar29 = in_stack_000000a0;
        pcVar20 = in_stack_00000090;
        lVar30 = in_stack_00000098;
        in_stack_00000400 = uStack00000000000000bf;
      }
      if (pcVar1 != (char *)0x0) {
        _free(lVar4);
      }
    }
    *unaff_x21 = pcVar20;
    unaff_x21[1] = lVar30;
    unaff_x21[2] = pcVar29;
    uVar24 = unaff_x27[0x5a];
    unaff_x21[4] = unaff_x27[0x5b];
    unaff_x21[3] = uVar24;
    *(undefined1 *)(unaff_x21 + 5) = in_stack_00000400;
    unaff_x21[6] = in_stack_00000070;
    uVar13 = 1;
  }
  *(undefined1 *)(unaff_x19 + 0x70) = uVar13;
  return;
}

