
/* WARNING: Removing unreachable block (ram,0x000100775f50) */
/* WARNING: Removing unreachable block (ram,0x000100774ab0) */
/* WARNING: Removing unreachable block (ram,0x000100774a3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10077492c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  ushort uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long extraout_x1;
  long extraout_x1_00;
  code *pcVar11;
  long lVar12;
  long unaff_x19;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  byte bVar16;
  undefined8 *puVar17;
  long lVar18;
  char *pcVar19;
  undefined8 *unaff_x27;
  undefined8 uVar20;
  code *in_stack_00000008;
  code *in_stack_00000010;
  code *in_stack_00000020;
  code *pcStack0000000000000050;
  long lStack0000000000000058;
  long in_stack_00000070;
  undefined8 *in_stack_00000090;
  long in_stack_00000098;
  undefined8 *in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined7 uStack00000000000000b0;
  undefined1 uStack00000000000000b7;
  undefined7 uStack00000000000000b8;
  undefined1 uStack00000000000000bf;
  long in_stack_000000c0;
  undefined8 *in_stack_000000c8;
  undefined8 *in_stack_000000d0;
  undefined1 *in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined1 in_stack_00000100;
  undefined1 uStack0000000000000108;
  char *in_stack_00000110;
  long in_stack_00000118;
  undefined8 *puStack0000000000000120;
  undefined *puStack0000000000000128;
  long in_stack_00000160;
  code *in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 *in_stack_000001a8;
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
  char *pcVar21;
  undefined8 in_stack_000003a8;
  undefined1 in_stack_00000400;
  char *in_stack_00000410;
  code *in_stack_00000418;
  code *in_stack_00000420;
  long *in_stack_00000460;
  long *in_stack_00000470;
  char *pcVar22;
  char *pcVar23;
  undefined8 *puVar24;
  code *in_stack_000006f0;
  code *in_stack_000006f8;
  char *in_stack_00000710;
  code *in_stack_00000718;
  code *pcVar25;
  long in_stack_00000750;
  
  pcVar21 = s_Resuming_rollout_from_108ac6fb9;
  puStack0000000000000120 = (undefined8 *)&stack0x00000378;
  puStack0000000000000128 = &UNK_10b208fd0;
  pcVar22 = (char *)0x1;
  puVar24 = (undefined8 *)0x1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x00000480);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar13 = *unaff_x22;
    in_stack_00000718 = *(code **)(lVar13 + 0x20);
    in_stack_00000710 = (char *)0x5;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000710);
    if (iVar7 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar13,puVar2,puVar1,&stack0x00000710,&stack0x00000480);
    }
  }
  *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x19 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined1 *)(unaff_x19 + 0x68) = 0;
  FUN_100fbfb50(&stack0x00000480,unaff_x19 + 0x20);
  puVar14 = (undefined8 *)0x1;
  if (*(char *)(unaff_x19 + 0x68) == '\x03') {
    if (*(char *)(unaff_x19 + 0x60) == '\x03') {
      plVar9 = *(long **)(unaff_x19 + 0x58);
      if (*plVar9 == 0xcc) {
        *plVar9 = 0x84;
      }
      else {
        (**(code **)(plVar9[2] + 0x20))();
      }
    }
    else if ((*(char *)(unaff_x19 + 0x60) == '\0') && (*(long *)(unaff_x19 + 0x40) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x48));
    }
  }
  puVar17 = (undefined8 *)0x8000000000000000;
  FUN_100e8d6f8(&stack0x00000120,1);
  if (extraout_x1 == 0) {
    lVar13 = FUN_100c35750(&UNK_108cad314,0x12);
  }
  else {
    in_stack_00000070 = 0;
    in_stack_00000090 = (undefined8 *)0x0;
    in_stack_00000098 = 8;
    in_stack_000000a0 = (undefined8 *)0x0;
    in_stack_000000a8._7_1_ = 0;
    in_stack_000000c0 = 0;
    in_stack_000000c8 = (undefined8 *)0x0;
    in_stack_000000d0 = (undefined8 *)0x1;
    in_stack_000000e0 = 1;
    in_stack_000000e8 = 0;
    in_stack_000000f0 = 1;
    in_stack_000000f8 = 0xa0000000a;
    in_stack_00000100 = 1;
    _uStack0000000000000108 = 0;
    lStack0000000000000058 = 9;
    in_stack_000000d8 = (undefined1 *)&stack0x00000120;
    do {
      puVar3 = in_stack_000000d8;
      FUN_1011e0db8(&stack0x00000480,&stack0x000000d8);
      uVar4 = _uStack0000000000000108;
      if ((int)pcVar22 == 1) {
        lVar13 = (long)puVar24 - (long)in_stack_000000c8;
        puVar14 = puVar24;
      }
      else {
        if ((_uStack0000000000000108 & 0x100) != 0) break;
        _uStack0000000000000108 = CONCAT11(1,uStack0000000000000108);
        if (((uVar4 & 1) == 0) && (in_stack_000000d0 == in_stack_000000c8)) break;
        lVar13 = (long)in_stack_000000d0 - (long)in_stack_000000c8;
        puVar14 = in_stack_000000c8;
        puVar3 = in_stack_000000d8;
      }
      pcVar23 = puVar3 + (long)in_stack_000000c8;
      lVar18 = lVar13;
      if ((lVar13 != 0) && (lVar12 = lVar13 + -1, pcVar23[lVar12] == '\n')) {
        if (lVar12 == 0) {
          pcVar19 = (char *)0x0;
        }
        else {
          pcVar19 = pcVar23;
          if (pcVar23[lVar13 + -2] != '\r') {
            pcVar19 = (char *)0x0;
          }
        }
        lVar18 = lVar12;
        if (pcVar19 != (char *)0x0) {
          lVar18 = lVar13 + -2;
          pcVar23 = pcVar19;
        }
      }
      in_stack_000000c8 = puVar14;
      if (pcVar23 == (char *)0x0) break;
      in_stack_00000110 = pcVar23;
      in_stack_00000118 = lVar18;
      FUN_100e8d6f8(pcVar23,lVar18);
      if (extraout_x1_00 != 0) {
        puVar24 = (undefined8 *)0x0;
        FUN_10064dc08(&stack0x00000710,&stack0x00000480);
        if (in_stack_00000710 == (char *)0x8000000000000005) {
          in_stack_00000170 = in_stack_00000718;
          if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
              ((bRam000000010b62fc40 - 1 < 2 ||
               ((bRam000000010b62fc40 != 0 &&
                (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                   (&
                                    __ZN13codex_rollout8recorder15RolloutRecorder18load_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc13683c091ffc70aE
                                   ), cVar6 != '\0')))))) &&
             (uVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                (
                                ___ZN13codex_rollout8recorder15RolloutRecorder18load_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc13683c091ffc70aE
                                ), (uVar8 & 1) != 0)) {
            pcVar23 = (char *)&stack0x00000110;
            puVar24 = &stack0x00000170;
            in_stack_000006f0 = (code *)&stack0x00000690;
            in_stack_000006f8 = (code *)&UNK_10b208fd0;
            in_stack_00000410 = (char *)0x1;
            in_stack_00000418 = (code *)&stack0x000006f0;
            in_stack_00000420 = (code *)0x1;
            __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                      (___ZN13codex_rollout8recorder15RolloutRecorder18load_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc13683c091ffc70aE
                       ,&stack0x00000410);
            lVar13 = 
            ___ZN13codex_rollout8recorder15RolloutRecorder18load_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc13683c091ffc70aE
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              pcVar21 = (char *)0x2;
              puVar1 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar1 = &UNK_10b3c24c8;
              }
              puVar2 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar2 = &UNK_109adfc03;
              }
              iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000378);
              if (iVar7 != 0) {
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar13,puVar2,puVar1,&stack0x00000378,&stack0x00000410);
              }
            }
          }
          else {
            lVar13 = 
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
              puVar1 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar1 = &UNK_10b3c24c8;
              }
              puVar2 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar2 = &UNK_109adfc03;
              }
              iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000178);
              if (iVar7 != 0) {
                in_stack_00000410 = (char *)&stack0x00000110;
                in_stack_00000418 = (code *)&DAT_100c5cd90;
                in_stack_00000420 = (code *)&stack0x00000170;
                pcVar21 = (char *)0x1;
                puVar24 = *(undefined8 **)(lVar13 + 0x58);
                pcVar23 = (char *)0x1;
                if (*(long *)(lVar13 + 0x50) == 0) {
                  pcVar23 = (char *)0x2;
                }
                in_stack_000006f0 = (code *)&stack0x00000378;
                in_stack_000006f8 = (code *)CONCAT71((int7)((ulong)in_stack_000006f8 >> 8),1);
                (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000480);
              }
            }
          }
          pcVar25 = in_stack_00000170;
          bVar5 = in_stack_00000070 == -1;
          in_stack_00000070 = in_stack_00000070 + 1;
          if (bVar5) {
            in_stack_00000070 = -1;
          }
          in_stack_000000c0 = in_stack_00000070;
          if (*(long *)in_stack_00000170 == 1) {
            uVar8 = *(ulong *)(in_stack_00000170 + 8);
            if ((uVar8 & 3) == 1) {
              puVar17 = (undefined8 *)(uVar8 - 1);
              uVar20 = *puVar17;
              puVar14 = *(undefined8 **)(uVar8 + 7);
              pcVar11 = (code *)*puVar14;
              if (pcVar11 != (code *)0x0) {
                (*pcVar11)(uVar20);
              }
              if (puVar14[1] != 0) {
                _free(uVar20);
              }
              goto LAB_100775260;
            }
          }
          else if ((*(long *)in_stack_00000170 == 0) && (*(long *)(in_stack_00000170 + 0x10) != 0))
          {
            puVar17 = *(undefined8 **)(in_stack_00000170 + 8);
LAB_100775260:
            _free(puVar17);
          }
          _free(pcVar25);
          pcVar22 = pcVar23;
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
          uVar8 = __ZN13codex_rollout8recorder40strip_legacy_ghost_snapshot_rollout_line17h1b6a146c4956d28aE
                            (&stack0x00000120);
          if ((uVar8 & 1) == 0) {
            FUN_10112c3fc(&stack0x00000378,&stack0x00000120);
            pcVar25 = in_stack_00000718;
            if ((long)pcVar21 < 0) {
              pcVar11 = (code *)thunk_FUN_108832ea0(&stack0x00000378,&stack0x00000690,&UNK_10b21cc20
                                                   );
              FUN_100de6690(&stack0x00000378);
LAB_1007756cc:
              in_stack_00000718 = pcVar25;
              if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
                 (((bRam000000010b62fc58 - 1 < 2 ||
                   ((bRam000000010b62fc58 != 0 &&
                    (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                       (&
                                        __ZN13codex_rollout8recorder15RolloutRecorder18load_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc3bbd56f2ced1e84E
                                       ), cVar6 != '\0')))) &&
                  (uVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                     (
                                     ___ZN13codex_rollout8recorder15RolloutRecorder18load_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc3bbd56f2ced1e84E
                                     ), (uVar8 & 1) != 0)))) {
                in_stack_00000710 = &stack0x000006f0;
                in_stack_00000718 =
                     __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E
                ;
                in_stack_00000410 = s_failed_to_parse_rollout_line__108ac7051;
                in_stack_00000418 = (code *)&stack0x00000710;
                pcVar21 = &stack0x00000410;
                pcVar23 = (char *)0x1;
                puVar24 = (undefined8 *)0x1;
                FUN_1007764cc(&stack0x00000480);
              }
              else {
                uVar20 = 
                ___ZN13codex_rollout8recorder15RolloutRecorder18load_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc3bbd56f2ced1e84E
                ;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  puVar1 = puRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    puVar1 = &UNK_10b3c24c8;
                  }
                  puVar2 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar2 = &UNK_109adfc03;
                  }
                  iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x000003c0);
                  if (iVar7 != 0) {
                    in_stack_00000410 = &stack0x000006f0;
                    in_stack_00000418 =
                         __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E
                    ;
                    pcVar21 = s_failed_to_parse_rollout_line__108ac7051;
                    pcVar23 = (char *)0x1;
                    puVar24 = (undefined8 *)0x1;
                    unaff_x27[0xbf] = unaff_x27[0x55];
                    unaff_x27[0xbe] = unaff_x27[0x54];
                    __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                              (uVar20,puVar2,puVar1,&stack0x00000710,&stack0x00000480);
                  }
                }
              }
              bVar5 = in_stack_00000070 == -1;
              in_stack_00000070 = in_stack_00000070 + 1;
              if (bVar5) {
                in_stack_00000070 = -1;
              }
              in_stack_000000c0 = in_stack_00000070;
              if (*(long *)pcVar11 == 1) {
                FUN_100de21d4(pcVar11 + 8);
              }
              else if ((*(long *)pcVar11 == 0) && (*(long *)(pcVar11 + 0x10) != 0)) {
                _free(*(long *)(pcVar11 + 8));
              }
              _free(pcVar11);
              in_stack_000006f0 = pcVar11;
            }
            else {
              __ZN10serde_json5value2de15MapDeserializer3new17hd3edd1e3d737bb9dE
                        (&stack0x00000410,&stack0x00000378);
              lVar13 = 0;
              if (in_stack_00000460 == in_stack_00000470) {
LAB_100775638:
                in_stack_00000710 = &stack0x00000690;
                pcVar25 = (code *)&DAT_100c7b3a0;
                in_stack_00000718 =
                     (code *)thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000710);
LAB_100775684:
                bVar16 = 1;
                pcStack0000000000000050 = (code *)0x0;
LAB_100775688:
                FUN_100d5c778(&stack0x00000678);
                bVar5 = (bool)(bVar16 ^ 1);
                if (((ulong)pcStack0000000000000050 & 0x7fffffffffffffff) == 0) {
                  bVar5 = true;
                }
                if (!bVar5) {
                  _free(in_stack_00000020);
                }
                FUN_100de8910(&stack0x00000458);
                pcVar11 = in_stack_00000718;
                if (in_stack_00000410 == (char *)0x8000000000000005) goto LAB_1007756cc;
                pcVar19 = (char *)0x5;
                pcStack0000000000000050 = in_stack_00000010;
                pcVar22 = pcVar23;
                in_stack_00000718 = pcVar25;
LAB_10077580c:
                FUN_100de6690(&stack0x00000410);
              }
              else {
                pcStack0000000000000050 = (code *)0x8000000000000000;
                plVar9 = in_stack_00000460;
LAB_100775358:
                do {
                  pcVar19 = in_stack_00000410;
                  in_stack_00000460 = plVar9 + 0xd;
                  lVar18 = *plVar9;
                  plVar15 = in_stack_00000460;
                  in_stack_00000410 = pcVar19;
                  pcVar22 = in_stack_00000710;
                  in_stack_00000718 = pcVar25;
                  if (lVar18 == -0x8000000000000000) goto LAB_100775628;
                  plVar15 = (long *)plVar9[1];
                  lVar12 = plVar9[2];
                  lVar10 = plVar9[5];
                  unaff_x27[0xc1] = plVar9[6];
                  unaff_x27[0xc0] = lVar10;
                  lVar10 = plVar9[7];
                  unaff_x27[0xc3] = plVar9[8];
                  unaff_x27[0xc2] = lVar10;
                  lVar10 = plVar9[9];
                  unaff_x27[0xc5] = plVar9[10];
                  unaff_x27[0xc4] = lVar10;
                  in_stack_00000750 = plVar9[0xb];
                  lVar10 = plVar9[3];
                  unaff_x27[0xbf] = plVar9[4];
                  unaff_x27[0xbe] = lVar10;
                  if (pcVar19 != (char *)0x8000000000000005) {
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
                  if (lVar12 == 0) {
                    lVar10 = 1;
LAB_10077545c:
                    _memcpy(lVar10,plVar15,lVar12);
joined_r0x000100775484:
                    bVar5 = false;
                  }
                  else {
                    if (lVar12 != 9) {
                      lVar10 = _malloc(lVar12);
                      if (lVar10 == 0) {
LAB_100776140:
                        lStack0000000000000058 = lVar12;
                        FUN_107c03c64(1,lStack0000000000000058);
                    /* WARNING: Does not return */
                        pcVar25 = (code *)SoftwareBreakpoint(1,0x100776150);
                        (*pcVar25)();
                      }
                      goto LAB_10077545c;
                    }
                    if (*plVar15 != 0x6d617473656d6974 || (char)plVar15[1] != 'p') {
                      plVar9 = (long *)_malloc(9);
                      lVar12 = lStack0000000000000058;
                      if (plVar9 == (long *)0x0) goto LAB_100776140;
                      lVar12 = *plVar15;
                      *(char *)(plVar9 + 1) = (char)plVar15[1];
                      *plVar9 = lVar12;
                      goto joined_r0x000100775484;
                    }
                    bVar5 = true;
                  }
                  if (lVar18 != 0) {
                    _free(plVar15);
                  }
                  plVar9 = in_stack_00000460;
                  if (!bVar5) {
                    in_stack_00000410 = (char *)0x8000000000000005;
                    if (pcVar19 == (char *)0x8000000000000005) {
                      in_stack_00000718 = (code *)thunk_FUN_1088561c0(&UNK_108cde170,0x10);
                    }
                    else {
                      FUN_100673418(&stack0x000006f0,&stack0x00000710);
                      in_stack_00000718 = in_stack_000006f8;
                      in_stack_00000710 = pcVar19;
                      pcVar25 = in_stack_00000418;
                      if (SUB81(in_stack_000006f0,0) != (code)0x16) {
                        unaff_x27[0xaf] = unaff_x27[0xb7];
                        unaff_x27[0xae] = unaff_x27[0xb6];
                        unaff_x27[0xb1] = unaff_x27[0xb9];
                        unaff_x27[0xb0] = unaff_x27[0xb8];
                        if (lVar13 == 0) {
                          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h34a99b0fb5689584E
                                    (&stack0x00000678);
                        }
                        lVar18 = lVar13 * 0x40;
                        uVar20 = unaff_x27[0xae];
                        *(undefined8 *)(lVar18 + 0x10) = unaff_x27[0xaf];
                        *(undefined8 *)(lVar18 + 8) = uVar20;
                        uVar20 = unaff_x27[0xb0];
                        *(undefined8 *)(lVar18 + 0x20) = unaff_x27[0xb1];
                        *(undefined8 *)(lVar18 + 0x18) = uVar20;
                        uVar20 = unaff_x27[0xb2];
                        *(undefined8 *)(lVar18 + 0x30) = unaff_x27[0xb3];
                        *(undefined8 *)(lVar18 + 0x28) = uVar20;
                        uVar20 = unaff_x27[0xb4];
                        *(undefined8 *)(lVar18 + 0x40) = unaff_x27[0xb5];
                        *(undefined8 *)(lVar18 + 0x38) = uVar20;
                        lVar13 = lVar13 + 1;
                        in_stack_00000410 = (char *)0x8000000000000005;
                        if (in_stack_00000460 == in_stack_00000470) break;
                        goto LAB_100775358;
                      }
                    }
                    FUN_100e077ec(&stack0x000006d0);
                    bVar16 = 1;
                    goto LAB_100775688;
                  }
                  if (pcStack0000000000000050 != (code *)0x8000000000000000) {
                    in_stack_00000710 = &stack0x00000690;
                    pcVar25 = (code *)&DAT_100c7b3a0;
                    in_stack_00000718 =
                         (code *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,
                                                     &stack0x00000710);
                    bVar16 = 1;
                    goto LAB_100775688;
                  }
                  in_stack_00000410 = (char *)0x8000000000000005;
                  if (pcVar19 == (char *)0x8000000000000005) {
                    in_stack_00000718 = (code *)thunk_FUN_1088561c0(&UNK_108cde170,0x10);
                    goto LAB_100775684;
                  }
                  if (pcVar19 != (char *)0x8000000000000003) {
                    in_stack_00000718 =
                         (code *)thunk_FUN_108832ea0(&stack0x00000710,&stack0x00000690,
                                                     &UNK_10b20a5e0);
                    FUN_100de6690(&stack0x00000710);
                    in_stack_00000710 = pcVar19;
                    pcVar25 = in_stack_00000418;
                    goto LAB_100775684;
                  }
                  in_stack_00000718 = in_stack_00000420;
                  in_stack_00000710 = pcVar19;
                  pcVar25 = in_stack_00000418;
                  if (in_stack_00000418 == (code *)0x8000000000000000) goto LAB_100775684;
                  in_stack_00000020 = in_stack_00000420;
                  pcStack0000000000000050 = in_stack_00000418;
                } while (in_stack_00000460 != in_stack_00000470);
                in_stack_00000410 = (char *)0x8000000000000005;
                plVar15 = in_stack_00000470;
                pcVar22 = pcVar19;
                in_stack_00000718 = in_stack_00000418;
LAB_100775628:
                if (pcStack0000000000000050 == (code *)0x8000000000000000) goto LAB_100775638;
                FUN_1007db7f4(&stack0x00000710,8,lVar13);
                in_stack_00000710 = pcVar22;
                if (pcVar22 == (char *)0x5) {
                  pcVar25 = in_stack_00000718;
                  if (pcStack0000000000000050 == (code *)0x0) {
                    pcStack0000000000000050 = (code *)0x0;
                    bVar16 = 0;
                  }
                  else {
                    _free(in_stack_00000020);
                    bVar16 = 0;
                  }
                  goto LAB_100775688;
                }
                _memcpy(&stack0x000001a8,&stack0x00000720,0x1d0);
                FUN_100d5c778(&stack0x00000678);
                _memcpy(&stack0x00000490,&stack0x000001a8,0x1d0);
                pcVar19 = pcVar22;
                pcVar11 = in_stack_00000718;
                if (in_stack_00000470 != plVar15) {
                  pcVar11 = (code *)thunk_FUN_1087e422c(in_stack_000003a8,&UNK_10b21cb90,
                                                        &UNK_10b20a590);
                  FUN_100e06a10(&stack0x00000480);
                  pcVar19 = (char *)0x5;
                }
                FUN_100de8910(&stack0x00000458);
                in_stack_00000008 = in_stack_00000020;
                if (in_stack_00000410 != (char *)0x8000000000000005) goto LAB_10077580c;
              }
              puVar14 = in_stack_000000a0;
              if ((long)pcVar19 < 3) {
                if (pcVar19 == (char *)0x0) {
                  if ((in_stack_000000a8._7_1_ & 1) == 0) {
                    uStack00000000000000b8 = (undefined7)in_stack_00000310;
                    uStack00000000000000bf = (undefined1)((ulong)in_stack_00000310 >> 0x38);
                    uStack00000000000000b0 = (undefined7)in_stack_00000308;
                    uStack00000000000000b7 = (undefined1)((ulong)in_stack_00000308 >> 0x38);
                    in_stack_000000a8._7_1_ = 1;
                  }
                  _memcpy(&stack0x00000490,&stack0x000001a8,0x1d0);
                  puVar14 = in_stack_000000a0;
                  pcVar23 = (char *)0x0;
                  if (in_stack_000000a0 == in_stack_00000090) {
                    FUN_107c05bf0(&stack0x00000090);
                  }
                }
                else {
                  puVar24 = in_stack_000001a8;
                  if (pcVar19 == (char *)0x1) {
                    pcVar23 = (char *)0x1;
                    if (in_stack_000000a0 == in_stack_00000090) {
                      FUN_107c05bf0(&stack0x00000090);
                    }
                  }
                  else {
                    pcVar23 = (char *)0x2;
                    if (in_stack_000000a0 == in_stack_00000090) {
                      FUN_107c05bf0(&stack0x00000090);
                    }
                  }
                }
              }
              else if (pcVar19 == (char *)0x3) {
                _memcpy(&stack0x00000490,&stack0x000001a8,0x168);
                puVar14 = in_stack_000000a0;
                pcVar23 = (char *)0x3;
                if (in_stack_000000a0 == in_stack_00000090) {
                  FUN_107c05bf0(&stack0x00000090);
                }
              }
              else {
                if (pcVar19 != (char *)0x4) {
                  in_stack_00000010 = pcStack0000000000000050;
                  pcVar23 = pcVar22;
                  pcVar25 = in_stack_00000718;
                  goto LAB_1007756cc;
                }
                _memcpy(&stack0x00000490,&stack0x000001a8,0x1d0);
                puVar14 = in_stack_000000a0;
                pcVar23 = (char *)0x4;
                if (in_stack_000000a0 == in_stack_00000090) {
                  FUN_107c05bf0(&stack0x00000090);
                }
              }
              _memcpy(in_stack_00000098 + (long)puVar14 * 0x1e0,&stack0x00000480,0x1e0);
              in_stack_000000a0 = (undefined8 *)((long)puVar14 + 1);
              if (pcStack0000000000000050 == (code *)0x0) {
                in_stack_00000010 = (code *)0x0;
              }
              else {
                _free(in_stack_00000008);
                in_stack_00000010 = pcStack0000000000000050;
              }
            }
            FUN_100de6690(&stack0x00000120);
            pcVar22 = pcVar23;
          }
          else {
            if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
                ((bRam000000010b62fc28 - 1 < 2 ||
                 ((bRam000000010b62fc28 != 0 &&
                  (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                     (&
                                      __ZN13codex_rollout8recorder15RolloutRecorder18load_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6c4e4c29601c810dE
                                     ), cVar6 != '\0')))))) &&
               (uVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                  (
                                  ___ZN13codex_rollout8recorder15RolloutRecorder18load_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6c4e4c29601c810dE
                                  ), (uVar8 & 1) != 0)) {
              in_stack_00000410 =
                   "skipping legacy ghost_snapshot rollout lineempty session fileget_state_dbreconcile_rolloutstate db discrepancy during read_repair_rollout_path: upsert_needed (fast path)state db discrepancy during read_repair_rollout_path: upsert_needed (slow path)backfill_incompleteSpanRef.LockFailedFailed to acquire lock for SpanRef: {:?}$__toml_private_datetime<permissions instructions></permissions instructions>JSON number out of rangeget host:port from transport ctxTcp Connector Service cannot establish a UDP transporttcp connector: conncept to proxytcp connector: conncept to connector target (overwrite?)tcp connector: connect to servershould not be called againtext/event-streammcp-session-idlast-event-id"
              ;
              in_stack_00000418 = (code *)0x57;
              pcVar21 = &stack0x00000410;
              pcVar23 = (char *)0x1;
              puVar24 = (undefined8 *)0x1;
              __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                        (___ZN13codex_rollout8recorder15RolloutRecorder18load_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6c4e4c29601c810dE
                         ,&stack0x00000480);
              lVar13 = 
              ___ZN13codex_rollout8recorder15RolloutRecorder18load_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6c4e4c29601c810dE
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                in_stack_00000718 =
                     *(code **)(
                               ___ZN13codex_rollout8recorder15RolloutRecorder18load_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6c4e4c29601c810dE
                               + 0x20);
                in_stack_00000710 = (char *)0x5;
                puVar1 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar1 = &UNK_10b3c24c8;
                }
                puVar2 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar2 = &UNK_109adfc03;
                }
                iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000710);
                if (iVar7 != 0) {
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (lVar13,puVar2,puVar1,&stack0x00000710,&stack0x00000480);
                }
              }
            }
            else {
              lVar13 = 
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
                puVar1 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar1 = &UNK_10b3c24c8;
                }
                puVar2 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar2 = &UNK_109adfc03;
                }
                iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000190);
                if (iVar7 != 0) {
                  in_stack_000006f0 = (code *)&stack0x00000690;
                  in_stack_000006f8 = (code *)&UNK_10b208fd0;
                  in_stack_00000710 = (char *)0x1;
                  in_stack_00000718 = (code *)&stack0x000006f0;
                  puVar24 = *(undefined8 **)(lVar13 + 0x58);
                  pcVar23 = (char *)0x1;
                  if (*(long *)(lVar13 + 0x50) == 0) {
                    pcVar23 = (char *)0x2;
                  }
                  pcVar21 = &stack0x00000710;
                  in_stack_00000410 = &stack0x00000378;
                  in_stack_00000418 = (code *)&DAT_1061c2098;
                  (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000480);
                }
              }
            }
            FUN_100de6690(&stack0x00000120);
            pcVar22 = pcVar23;
          }
        }
      }
    } while ((_uStack0000000000000108 & 0x100) == 0);
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
       (((bRam000000010b62fc70 - 1 < 2 ||
         ((bRam000000010b62fc70 != 0 &&
          (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN13codex_rollout8recorder15RolloutRecorder18load_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hde016fe86fa0fec5E
                             ), cVar6 != '\0')))) &&
        (uVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN13codex_rollout8recorder15RolloutRecorder18load_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hde016fe86fa0fec5E
                           ), (uVar8 & 1) != 0)))) {
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN13codex_rollout8recorder15RolloutRecorder18load_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hde016fe86fa0fec5E
                 ,&stack0x00000410);
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uVar20 = *(undefined8 *)
                  (
                  ___ZN13codex_rollout8recorder15RolloutRecorder18load_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hde016fe86fa0fec5E
                  + 0x20);
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000378);
        if (iVar7 != 0) {
          in_stack_000000c8 = (undefined8 *)&stack0x00000410;
          in_stack_000000d0 = (undefined8 *)CONCAT71(in_stack_000000d0._1_7_,1);
          puStack0000000000000120 = &stack0x000000c8;
          puStack0000000000000128 = &DAT_1061c2098;
          unaff_x27[0x73] = uVar20;
          unaff_x27[0x72] = 4;
          (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000480);
        }
      }
    }
    else {
      lVar13 = 
      ___ZN13codex_rollout8recorder15RolloutRecorder18load_rollout_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hde016fe86fa0fec5E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x000003d8);
        if (iVar7 != 0) {
          puStack0000000000000120 = in_stack_000000a0;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar13,puVar2,puVar1,&stack0x000003d8,&stack0x00000710);
        }
      }
    }
    unaff_x27[0x5b] = CONCAT71(uStack00000000000000b8,uStack00000000000000b7);
    unaff_x27[0x5a] = CONCAT71(uStack00000000000000b0,in_stack_000000a8._7_1_);
    lVar13 = in_stack_00000098;
    puVar14 = in_stack_000000a0;
    puVar17 = in_stack_00000090;
    in_stack_00000400 = uStack00000000000000bf;
  }
  _free(&stack0x00000120);
  *unaff_x21 = puVar17;
  unaff_x21[1] = lVar13;
  unaff_x21[2] = puVar14;
  uVar20 = unaff_x27[0x5a];
  unaff_x21[4] = unaff_x27[0x5b];
  unaff_x21[3] = uVar20;
  *(undefined1 *)(unaff_x21 + 5) = in_stack_00000400;
  unaff_x21[6] = in_stack_00000070;
  *(undefined1 *)(unaff_x19 + 0x70) = 1;
  return;
}

