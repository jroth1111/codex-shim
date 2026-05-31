
/* WARNING: Removing unreachable block (ram,0x0001016e0764) */
/* WARNING: Removing unreachable block (ram,0x0001016dfeec) */
/* WARNING: Removing unreachable block (ram,0x0001016df928) */
/* WARNING: Removing unreachable block (ram,0x0001016dfacc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016df6bc(void)

{
  byte *pbVar1;
  undefined *puVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  code *pcVar7;
  long lVar8;
  byte bVar9;
  char cVar10;
  char cVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined1 *extraout_x1;
  undefined1 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  bool bVar21;
  ulong uVar22;
  long unaff_x19;
  ulong uVar23;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
  ulong uVar27;
  byte *unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x27;
  byte *pbVar28;
  ulong *unaff_x28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined8 *in_stack_00000068;
  byte *in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  undefined1 *in_stack_00000090;
  ulong *in_stack_000000a0;
  undefined8 in_stack_000000a8;
  char in_stack_00004198;
  undefined7 in_stack_00004199;
  undefined8 in_stack_000041a0;
  long *in_stack_00006ae0;
  long *in_stack_00006ae8;
  ulong in_stack_00006af0;
  byte in_stack_00007620;
  long *in_stack_00007640;
  long *in_stack_00007648;
  ulong in_stack_00007650;
  byte in_stack_00007f88;
  byte in_stack_000081b8;
  long *in_stack_000088f0;
  long *in_stack_000088f8;
  ulong in_stack_00008918;
  undefined4 uVar33;
  byte in_stack_00009618;
  long *in_stack_0000b290;
  long *plVar34;
  long *plVar35;
  long *in_stack_0000b298;
  long *plVar36;
  long *plVar37;
  undefined *puVar38;
  undefined *in_stack_0000b2a0;
  code *in_stack_0000b2a8;
  undefined *in_stack_0000b2b0;
  ulong in_stack_0000b2b8;
  undefined *in_stack_0000b2c0;
  ulong in_stack_0000b2c8;
  ulong in_stack_0000b2d0;
  ulong in_stack_0000b2d8;
  ulong in_stack_0000b2e0;
  ulong in_stack_0000b2e8;
  ulong in_stack_0000b2f0;
  ulong in_stack_0000b2f8;
  ulong in_stack_0000b300;
  ulong in_stack_0000b308;
  ulong in_stack_0000b310;
  ulong in_stack_0000b318;
  byte in_stack_0000bfb8;
  long in_stack_0000dc90;
  undefined8 in_stack_0000dc98;
  ulong in_stack_0000dca0;
  byte in_stack_0000e9b8;
  undefined *in_stack_00010280;
  code *in_stack_00010288;
  undefined *in_stack_00010290;
  ulong in_stack_00010298;
  undefined *in_stack_000102a0;
  ulong in_stack_000102a8;
  ulong in_stack_000102b0;
  ulong in_stack_000102b8;
  ulong in_stack_000102c0;
  ulong in_stack_000102c8;
  ulong in_stack_000102d0;
  ulong in_stack_000102d8;
  
  auVar6._8_8_ = in_stack_0000dc98;
  auVar6._0_8_ = in_stack_0000dc90;
  auVar5._8_8_ = in_stack_0000dc98;
  auVar5._0_8_ = in_stack_0000dc90;
  auVar31._8_8_ = in_stack_0000dc98;
  auVar31._0_8_ = in_stack_0000dc90;
  uVar33 = (undefined4)(in_stack_00008918 >> 0x20);
  __ZN3std2io5stdio7_eprint17heb74b67280cb307dE
            (s_Could_not_create_otel_exporter__108ac27a0,&stack0x000088f0);
  *(undefined8 *)(unaff_x19 + 0x4830) = 0x8000000000000001;
  FUN_100c9623c(*unaff_x27,unaff_x27[1]);
  if (*unaff_x28 == 0x8000000000000003) {
    FUN_100db50cc(&stack0x0000b290);
  }
  if (*(long *)(unaff_x19 + 0x4830) != -0x7fffffffffffffff) {
    uVar19 = *(undefined8 *)(unaff_x19 + 0x4820);
    uVar20 = *(undefined8 *)(unaff_x19 + 0x4828);
    if (*(long *)(unaff_x19 + 0x48a8) != 0) {
      if (cRam000000010b66da58 == '\0') {
        cRam000000010b66da58 = '\x01';
        auVar32 = __ZN10codex_otel7metrics4tags28bounded_originator_tag_value17h5f91266f84828ca0E
                            (uVar19,uVar20);
        *unaff_x27 = &UNK_108e4e33f;
        unaff_x27[1] = 10;
        *(undefined1 (*) [16])(unaff_x27 + 2) = auVar32;
        __ZN10codex_otel7metrics6client13MetricsClient7counter17h17eba62d7595813aE
                  (&stack0x0000b290,unaff_x19 + 0x48a8,&UNK_108e4f5aa,0x13,1,&stack0x0000dc90,1);
        if ((*unaff_x28 != 0xb) &&
           (in_stack_000088f0 = in_stack_0000b290, in_stack_000088f8 = in_stack_0000b298,
           in_stack_00008918 = in_stack_0000b2b8, in_stack_0000b290 != (long *)0xb)) {
          FUN_1033a1e7c(&stack0x000088f0);
        }
      }
      uVar33 = (undefined4)(in_stack_00008918 >> 0x20);
      if (*(long *)(unaff_x19 + 0x4830) == -0x7fffffffffffffff) goto LAB_1016df848;
      uVar19 = *(undefined8 *)(unaff_x19 + 0x4820);
      uVar20 = *(undefined8 *)(unaff_x19 + 0x4828);
    }
    plVar17 = *(long **)(unaff_x19 + 0x48a8);
    if (plVar17 != (long *)0x0) {
      lVar8 = *plVar17;
      *plVar17 = lVar8 + 1;
      if (lVar8 < 0) goto LAB_1016e14bc;
      __ZN13codex_rollout8state_db25sqlite_telemetry_recorder17h5184d94f63a61f8aE
                (plVar17,uVar19,uVar20);
      __ZN11codex_state9telemetry28install_process_db_telemetry17h557d8365d5bfb162E();
    }
  }
LAB_1016df848:
  *(long *)(unaff_x19 + 0x7dd8) = unaff_x26;
  *(long **)(unaff_x19 + 0x7de0) = (long *)(unaff_x19 + 0x588);
  pbVar28 = unaff_x25 + 0xd8;
  *pbVar28 = 0;
  *(long *)(unaff_x19 + 0x7de8) = unaff_x26;
  if (*(long *)(unaff_x19 + 0x588) == 0) {
    *(long *)(unaff_x19 + 0x7df8) = unaff_x26;
    *(undefined1 *)(in_stack_00000080 + 0x2c0) = 0;
    auVar31 = FUN_10077b744(unaff_x19 + 0x7df8,in_stack_000000a8);
    plVar17 = auVar31._8_8_;
    if (auVar31._0_8_ == 2) {
      *pbVar28 = 3;
      goto LAB_1016dffa0;
    }
    FUN_100ccf6e0(unaff_x19 + 0x7df8);
    plVar14 = plVar17;
    if ((auVar31._0_8_ & 1) == 0) goto LAB_1016dff84;
    __ZN3std4path4Path5_join17ha8f408dfc5576c3eE
              (&stack0x00006ae0,*(undefined8 *)(*(long *)(unaff_x19 + 0x7de8) + 0x1c18),
               *(undefined8 *)(*(long *)(unaff_x19 + 0x7de8) + 0x1c20),&UNK_108ed2e30,0xe);
    auVar6 = ZEXT816(1) << 0x40;
    in_stack_0000dca0 = 0;
    in_stack_000088f0 = (long *)&stack0x0000dc90;
    in_stack_000088f8 = (long *)&UNK_10b209290;
    iVar12 = __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
                       (&stack0x00007640,&stack0x000088f0);
    if (iVar12 != 0) {
      func_0x000108a07a3c(&UNK_108cc3daa,0x37,&stack0x000081c0,&UNK_10b235000,&UNK_10b2346c0);
      goto LAB_1016e14bc;
    }
    unaff_x28[4] = 1;
    unaff_x28[3] = 0;
    unaff_x28[5] = 0;
    unaff_x28[2] = in_stack_00006af0;
    puVar15 = (undefined8 *)_malloc(0x30);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0001087c906c(8,0x30);
      goto LAB_1016e14bc;
    }
    puVar15[1] = in_stack_00006ae8;
    *puVar15 = in_stack_00006ae0;
    puVar15[3] = in_stack_0000b2a8;
    puVar15[2] = in_stack_0000b2a0;
    puVar15[5] = in_stack_0000b2b8;
    puVar15[4] = in_stack_0000b2b0;
    plVar14 = (long *)func_0x000106029c30(0x28,puVar15,&UNK_10b251420);
    (**(code **)*plVar17)(plVar17);
    lVar8 = 1;
    in_stack_0000b290 = in_stack_00006ae0;
    in_stack_0000b298 = in_stack_00006ae8;
LAB_1016dff88:
    *pbVar28 = 1;
    if (lVar8 != 2) {
      if (lVar8 == 0) {
        unaff_x25[0xa3] = 1;
        *(long **)(unaff_x19 + 0x48b0) = plVar14;
        __ZN12codex_config5state16ConfigLayerStack16effective_config17hb81929d75e8817f7E
                  (&stack0x00004148,unaff_x19 + 0x22d0);
        FUN_100f141b4(unaff_x19 + 0x48b8,&stack0x00004148);
        if (*(long *)(unaff_x19 + 0x48b8) == 2) {
          in_stack_0000b2b8 = *(ulong *)(unaff_x19 + 0x48e8);
          in_stack_0000b2b0 = *(undefined **)(unaff_x19 + 0x48e0);
          in_stack_0000b2c8 = *(ulong *)(unaff_x19 + 0x48f8);
          in_stack_0000b2c0 = *(undefined **)(unaff_x19 + 0x48f0);
          in_stack_0000b2d8 = *(ulong *)(unaff_x19 + 0x4908);
          in_stack_0000b2d0 = *(ulong *)(unaff_x19 + 0x4900);
          unaff_x28[10] = *(ulong *)(unaff_x19 + 0x4910);
          in_stack_0000b298 = *(long **)(unaff_x19 + 0x48c8);
          in_stack_0000b290 = *(long **)(unaff_x19 + 0x48c0);
          in_stack_0000b2a8 = *(code **)(unaff_x19 + 0x48d8);
          in_stack_0000b2a0 = *(undefined **)(unaff_x19 + 0x48d0);
          if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) {
            if (1 < bRam000000010b631508 - 1) {
              if (bRam000000010b631508 != 0) {
                cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                   (&
                                    __ZN9codex_tui8run_main28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7a9bf20ffd2f1e82E
                                   );
                unaff_x28 = (ulong *)&stack0x0000b290;
                if (cVar10 != '\0') goto LAB_1016dfbec;
              }
              goto LAB_1016e0154;
            }
LAB_1016dfbec:
            uVar27 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (
                               ___ZN9codex_tui8run_main28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7a9bf20ffd2f1e82E
                               );
            if ((uVar27 & 1) == 0) goto LAB_1016e0154;
            in_stack_00006ae0 = (long *)&UNK_108cd934d;
            in_stack_000088f0 = (long *)&stack0x00006ae0;
            in_stack_000088f8 = (long *)&UNK_10b208fd0;
            auVar6._8_8_ = &stack0x000088f0;
            auVar6._0_8_ = 1;
            in_stack_0000dca0 = 2;
            FUN_1016e2a58(&stack0x0000dc90);
            in_stack_00006ae8 = (long *)0x6d;
          }
          else {
LAB_1016e0154:
            lVar8 = 
            ___ZN9codex_tui8run_main28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7a9bf20ffd2f1e82E;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              plVar17 = *(long **)(
                                  ___ZN9codex_tui8run_main28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7a9bf20ffd2f1e82E
                                  + 0x20);
              puVar38 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar38 = &UNK_10b3c24c8;
              }
              puVar2 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar2 = &UNK_109adfc03;
              }
              iVar12 = (**(code **)(puVar38 + 0x18))(puVar2,&stack0x00006708);
              if (iVar12 != 0) {
                in_stack_000088f0 = (long *)&stack0x00007640;
                in_stack_000088f8 = (long *)&UNK_10b208fd0;
                auVar6._8_8_ = &stack0x000088f0;
                auVar6._0_8_ = 1;
                in_stack_0000dca0 = 2;
                in_stack_00006ae0 = (long *)0x2;
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar8,puVar2,puVar38,&stack0x00006ae0,&stack0x0000dc90);
                in_stack_00006ae8 = plVar17;
              }
            }
          }
          FUN_100de3b58(&stack0x0000b290);
        }
        else {
          _memcpy(unaff_x19 + 0x62e8,unaff_x19 + 0x48b8,0x1a30);
          uVar19 = *(undefined8 *)(unaff_x19 + 0x3ed0);
          uVar20 = *(undefined8 *)(unaff_x19 + 0x3ed8);
          plVar14 = *(long **)(unaff_x19 + 0x48b0);
          if ((plVar14 != (long *)0x0) && (lVar8 = *plVar14, *plVar14 = lVar8 + 1, lVar8 < 0))
          goto LAB_1016e14bc;
          *(undefined8 *)(unaff_x19 + 0x7de8) = uVar19;
          *(undefined8 *)(unaff_x19 + 0x7df0) = uVar20;
          *(long **)(unaff_x19 + 0x7df8) = plVar14;
          *(long *)(unaff_x25 + 0x420) = unaff_x19 + 0x62e8;
          unaff_x25[0x42a] = 0;
          FUN_100520840(&stack0x00004198,unaff_x19 + 0x7dd8,in_stack_000000a8);
          if (in_stack_00004198 == '\x02') {
            *in_stack_000000a0 = 0x8000000000000002;
            bVar9 = 0xb;
            goto LAB_1016e0b0c;
          }
          *(undefined8 *)(unaff_x25 + 8) = in_stack_000041a0;
          *(ulong *)unaff_x25 = CONCAT71(in_stack_00004199,in_stack_00004198);
          FUN_100cc4448(unaff_x19 + 0x7dd8);
          if ((*unaff_x25 & 1) == 0) {
            if (unaff_x25[1] == 3) {
              func_0x0001013edc8c(&stack0x00007640,*(undefined8 *)(unaff_x19 + 0x4b0),
                                  *(undefined8 *)(unaff_x19 + 0x4b8));
              FUN_1011accf0(&stack0x0000dc90,unaff_x19 + 0x2118);
              FUN_1011b4ddc(&stack0x00006ae0,unaff_x19 + 0x610);
              plVar14 = *(long **)(unaff_x19 + 0x20f0);
              if ((plVar14 != (long *)0x0) && (lVar8 = *plVar14, *plVar14 = lVar8 + 1, lVar8 < 0))
              goto LAB_1016e14bc;
              bVar9 = unaff_x25[0x95];
              unaff_x28[2] = in_stack_00007650;
              _memcpy(&stack0x0000b2a8,&stack0x0000dc90,0x1b8);
              _memcpy(&stack0x000088f0,&stack0x0000b290,0x280);
              _memcpy(unaff_x19 + 0x7dd8,&stack0x000088f0,0x280);
              *(long **)(unaff_x25 + 0x340) = plVar14;
              unaff_x25[0x348] = 0xff;
              unaff_x25[0x349] = 0xff;
              unaff_x25[0x34a] = 0xff;
              unaff_x25[0x34b] = 0xff;
              unaff_x25[0x34c] = 0xff;
              unaff_x25[0x34d] = 0xff;
              unaff_x25[0x34e] = 0xff;
              unaff_x25[0x34f] = 0xff;
              unaff_x25[0x8e8] = bVar9;
              unaff_x25[0x8e9] = 0;
              FUN_10167442c(&stack0x0000b290,unaff_x19 + 0x7dd8,in_stack_000000a8);
              if (*unaff_x28 == 2) {
                *in_stack_000000a0 = 0x8000000000000002;
                bVar9 = 0xc;
                goto LAB_1016e0b0c;
              }
              _memcpy(&stack0x000041a8,&stack0x0000b290,0x2548);
              FUN_100e49154(unaff_x19 + 0x7dd8);
              FUN_100de93d0(unaff_x19 + 0x22d0);
              unaff_x25[0xa4] = 1;
              _memcpy(unaff_x19 + 0x22d0,&stack0x000041a8,0x2548);
              in_stack_0000b290 = plVar17;
              in_stack_0000b298 = in_stack_00007648;
            }
          }
          else {
            uVar27 = *(ulong *)(unaff_x19 + 0x7d20);
            if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) {
              if (1 < bRam000000010b6314f0 - 1) {
                if (bRam000000010b6314f0 != 0) {
                  cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                     (&
                                      __ZN9codex_tui8run_main28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2a48937f770fc48bE
                                     );
                  unaff_x28 = (ulong *)&stack0x0000b290;
                  if (cVar10 != '\0') goto LAB_1016db4c8;
                }
                goto LAB_1016dc104;
              }
LAB_1016db4c8:
              uVar23 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (
                                 ___ZN9codex_tui8run_main28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2a48937f770fc48bE
                                 );
              if ((uVar23 & 1) == 0) goto LAB_1016dc104;
              auVar6._8_8_ = 0x47;
              auVar6._0_8_ = &UNK_108cd9383;
              in_stack_00006ae0 = (long *)&stack0x000081c0;
              *unaff_x28 = (ulong)&stack0x0000dc90;
              unaff_x28[1] = (ulong)&UNK_10b208fd0;
              unaff_x28[2] = (ulong)&stack0x00006ae0;
              unaff_x28[3] = (ulong)&UNK_10b217808;
              in_stack_000088f0 = (long *)0x1;
              in_stack_000088f8 = (long *)&stack0x0000b290;
              FUN_1016e2818(&stack0x000088f0);
            }
            else {
LAB_1016dc104:
              lVar8 = 
              ___ZN9codex_tui8run_main28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2a48937f770fc48bE
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                uVar19 = *(undefined8 *)
                          (
                          ___ZN9codex_tui8run_main28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2a48937f770fc48bE
                          + 0x20);
                uVar23 = *(ulong *)(
                                   ___ZN9codex_tui8run_main28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2a48937f770fc48bE
                                   + 0x28);
                puVar38 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar38 = &UNK_10b3c24c8;
                }
                puVar2 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar2 = &UNK_109adfc03;
                }
                iVar12 = (**(code **)(puVar38 + 0x18))(puVar2,&stack0x000066f0);
                if (iVar12 != 0) {
                  in_stack_00006ae0 = (long *)&UNK_108cd9383;
                  in_stack_00006ae8 = (long *)0x47;
                  *unaff_x28 = (ulong)&stack0x00006ae0;
                  unaff_x28[1] = (ulong)&UNK_10b208fd0;
                  unaff_x28[2] = (ulong)&stack0x00007640;
                  unaff_x28[3] = (ulong)&UNK_10b217808;
                  in_stack_000088f0 = (long *)0x1;
                  in_stack_000088f8 = (long *)&stack0x0000b290;
                  auVar6._8_8_ = uVar19;
                  auVar6._0_8_ = 2;
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (lVar8,puVar2,puVar38,&stack0x0000dc90,&stack0x000088f0);
                  in_stack_0000dca0 = uVar23;
                }
              }
            }
            if ((uVar27 & 3) == 1) {
              uVar19 = *(undefined8 *)(uVar27 - 1);
              puVar15 = *(undefined8 **)(uVar27 + 7);
              pcVar7 = (code *)*puVar15;
              if (pcVar7 != (code *)0x0) {
                (*pcVar7)(uVar19);
              }
              if (puVar15[1] != 0) {
                _free(uVar19);
              }
              _free((undefined8 *)(uVar27 - 1));
            }
          }
          FUN_100e04ad4(unaff_x19 + 0x62e8);
        }
        uVar19 = auVar6._8_8_;
        *(long *)(unaff_x19 + 0x7dd8) = unaff_x19 + 0x22d0;
        unaff_x25[0x2d0] = 0;
        func_0x0001004eedb8(&stack0x0000b290,unaff_x19 + 0x7dd8,in_stack_000000a8);
        uVar27 = *unaff_x28;
        if (uVar27 == 2) {
          *in_stack_000000a0 = 0x8000000000000002;
          bVar9 = 0xd;
          goto LAB_1016e0b0c;
        }
        uVar23 = unaff_x28[1];
        if ((unaff_x25[0x2d0] == 3) && (unaff_x25[0x2c8] == 3)) {
          FUN_100e6ae88(unaff_x19 + 0x7de8);
        }
        if (((uVar27 & 1) != 0) || (uVar23 != 9)) {
          unaff_x28[10] = in_stack_0000b2e8;
          unaff_x28[9] = in_stack_0000b2e0;
          unaff_x28[0xc] = in_stack_0000b2f8;
          unaff_x28[0xb] = in_stack_0000b2f0;
          unaff_x28[0xe] = in_stack_0000b308;
          unaff_x28[0xd] = in_stack_0000b300;
          unaff_x28[0x10] = in_stack_0000b318;
          unaff_x28[0xf] = in_stack_0000b310;
          unaff_x28[2] = (ulong)in_stack_0000b2a8;
          unaff_x28[1] = (ulong)in_stack_0000b2a0;
          unaff_x28[4] = in_stack_0000b2b8;
          unaff_x28[3] = (ulong)in_stack_0000b2b0;
          unaff_x28[6] = in_stack_0000b2c8;
          unaff_x28[5] = (ulong)in_stack_0000b2c0;
          *unaff_x28 = uVar23;
          unaff_x28[8] = in_stack_0000b2d8;
          unaff_x28[7] = in_stack_0000b2d0;
          __ZN10codex_core11exec_policy36format_exec_policy_error_with_source17h2aded56d5eca2b76E
                    (&stack0x000088f0,&stack0x0000b290);
          __ZN3std2io5stdio7_eprint17heb74b67280cb307dE
                    (s_Error_loading_rules__108ac2786,&stack0x0000dc90);
          if (in_stack_000088f0 != (long *)0x0) {
            _free(in_stack_000088f8);
          }
          __ZN3std7process4exit17h656c4fcb5bd11385E(1);
          goto LAB_1016e14bc;
        }
        __ZN11codex_login4auth14default_client40set_default_client_residency_requirement17h4620080bb8df219dE
                  (*in_stack_00000090);
        uVar20 = *(undefined8 *)(unaff_x19 + 0x268);
        uVar25 = *(undefined8 *)(unaff_x19 + 0x270);
        lVar8 = *(long *)(unaff_x19 + 0x3148);
        if (-1 < lVar8) {
          lVar8 = 2;
        }
        lVar8 = unaff_x19 + *(long *)(&UNK_108cdb7a8 + lVar8 * 8);
        uVar22 = *(ulong *)(lVar8 + 0x2f00);
        uVar23 = 0x8000000000000000;
        uVar27 = uVar22;
        if (uVar22 < 0x8000000000000001) {
          uVar27 = 0;
        }
        if ((uVar27 & 0x7fffffffffffffff) == 0) {
          if (uVar22 == 0x8000000000000000) {
            uVar27 = 0x8000000000000000;
          }
          else {
            FUN_1035ab934(&stack0x0000b290,*(undefined8 *)(lVar8 + 0x2f08),
                          *(undefined8 *)(lVar8 + 0x2f10));
            uVar27 = *(ulong *)(lVar8 + 0x2f18);
            uVar23 = *unaff_x28;
            in_stack_00006ae8 = (long *)unaff_x28[2];
            in_stack_00006ae0 = (long *)unaff_x28[1];
          }
          uVar4 = *(undefined1 *)(lVar8 + 0x2f20);
          *unaff_x28 = uVar23;
          unaff_x28[2] = (ulong)in_stack_00006ae8;
          unaff_x28[1] = (ulong)in_stack_00006ae0;
          unaff_x28[3] = uVar27;
          *(undefined1 *)(unaff_x28 + 4) = uVar4;
        }
        else if ((uVar27 & 0x7fffffffffffffff) == 1) {
          *unaff_x28 = 0x8000000000000001;
        }
        else {
          in_stack_0000b298 = *(long **)(lVar8 + 0x2f08);
          in_stack_0000b290 = *(long **)(lVar8 + 0x2f00);
          in_stack_0000b2a8 = *(code **)(lVar8 + 0x2f18);
          in_stack_0000b2a0 = *(undefined **)(lVar8 + 0x2f10);
          unaff_x28[4] = *(ulong *)(lVar8 + 0x2f20);
        }
        func_0x000104922e0c(&stack0x000088f0,&stack0x0000b290,*(undefined8 *)(unaff_x19 + 0x30d0),
                            *(undefined8 *)(unaff_x19 + 0x30d8));
        __ZN9codex_tui15additional_dirs23add_dir_warning_message17h9f8dbd9f33155150E
                  (&stack0x0000dc90,uVar20,uVar25,&stack0x000088f0,
                   *(undefined8 *)(unaff_x19 + 0x3e88),*(undefined8 *)(unaff_x19 + 0x3e90));
        if (auVar6._0_8_ != -0x8000000000000000) {
          unaff_x28[2] = in_stack_0000dca0;
          __ZN3std2io5stdio7_eprint17heb74b67280cb307dE
                    (s_Error_adding_directories__108adbcba,&stack0x00006ae0);
          __ZN3std7process4exit17h656c4fcb5bd11385E(1);
          goto LAB_1016e14bc;
        }
        plVar17 = in_stack_000088f0;
        if (in_stack_000088f0 < (long *)0x8000000000000001) {
          plVar17 = (long *)0x0;
        }
        if ((in_stack_000088f0 != (long *)0x8000000000000000) &&
           (((ulong)plVar17 & 0x7fffffffffffffff) == 0)) {
          FUN_100e79780(&stack0x000088f0);
        }
        if (*(long *)(unaff_x19 + 0x588) != 2) {
          uVar20 = *(undefined8 *)(unaff_x19 + 0x3ed0);
          lVar8 = *(long *)(unaff_x19 + 0x3ed8);
          if (lVar8 == 0) {
            lVar24 = 1;
          }
          else {
            lVar24 = _malloc(lVar8);
            if (lVar24 == 0) {
              func_0x0001087c9084(1,lVar8);
              goto LAB_1016e14bc;
            }
          }
          _memcpy(lVar24,uVar20,lVar8);
          bVar9 = in_stack_00000090[0x13f];
          bVar3 = in_stack_00000090[0x13b];
          if (*(long *)(unaff_x19 + 0x44e0) == -0x8000000000000000) {
            *unaff_x28 = 0x8000000000000000;
          }
          else {
            FUN_101146714(&stack0x0000b290,*(undefined8 *)(unaff_x19 + 0x44e8),
                          *(undefined8 *)(unaff_x19 + 0x44f0));
          }
          uVar20 = *(undefined8 *)(unaff_x19 + 0x3f18);
          lVar26 = *(long *)(unaff_x19 + 0x3f20);
          if (lVar26 == 0) {
            lVar13 = 1;
          }
          else {
            lVar13 = _malloc(lVar26);
            if (lVar13 == 0) {
              func_0x0001087c9084(1,lVar26);
              goto LAB_1016e14bc;
            }
          }
          _memcpy(lVar13,uVar20,lVar26);
          *(long *)(unaff_x25 + 0xbd8) = lVar8;
          *(long *)(unaff_x25 + 0xbe0) = lVar24;
          *(long *)(unaff_x25 + 0xbe8) = lVar8;
          unaff_x25[0xc21] = bVar9;
          unaff_x25[0xc20] = bVar3;
          *(long *)(unaff_x25 + 0xbf0) = lVar26;
          *(long *)(unaff_x25 + 0xbf8) = lVar13;
          *(long *)(unaff_x25 + 0xc00) = lVar26;
          *(long **)(unaff_x19 + 0x8928) = in_stack_0000b298;
          *(long **)(unaff_x19 + 0x8920) = in_stack_0000b290;
          *(ulong *)(unaff_x19 + 0x8930) = unaff_x28[2];
          *(byte **)(unaff_x19 + 0x7dd8) = unaff_x25 + 0xbd8;
          unaff_x25[0xbd0] = 0;
          auVar31 = FUN_1006df03c(unaff_x19 + 0x7dd8,in_stack_000000a8);
          if ((auVar31._0_8_ & 1) != 0) {
            *in_stack_000000a0 = 0x8000000000000002;
            bVar9 = 0xe;
            goto LAB_1016e0b0c;
          }
          if (unaff_x25[0xbd0] == 3) {
            FUN_100e5e3e0(unaff_x19 + 0x7de8);
          }
          if (auVar31._8_8_ != 0) {
            *unaff_x28 = (ulong)&stack0x000088f0;
            unaff_x28[1] = (ulong)
                           __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
            ;
            __ZN3std2io5stdio7_eprint17heb74b67280cb307dE(s__108ac265a,&stack0x0000b290);
            __ZN3std7process4exit17h656c4fcb5bd11385E(1);
            goto LAB_1016e14bc;
          }
          if (*(long *)(unaff_x25 + 0xbd8) != 0) {
            _free(*(undefined8 *)(unaff_x25 + 0xbe0));
          }
          if ((*(long *)(unaff_x25 + 0xbf0) != -0x8000000000000000) &&
             (*(long *)(unaff_x25 + 0xbf0) != 0)) {
            _free(*(undefined8 *)(unaff_x25 + 0xbf8));
          }
          lVar8 = *(long *)(unaff_x25 + 0xc08);
          if (lVar8 != -0x8000000000000000) {
            lVar26 = *(long *)(unaff_x25 + 0xc10);
            lVar24 = *(long *)(unaff_x25 + 0xc18);
            if (lVar24 != 0) {
              puVar15 = (undefined8 *)(lVar26 + 8);
              do {
                if (puVar15[-1] != 0) {
                  _free(*puVar15);
                }
                puVar15 = puVar15 + 3;
                lVar24 = lVar24 + -1;
              } while (lVar24 != 0);
            }
            if (lVar8 != 0) {
              _free(lVar26);
            }
          }
        }
        uVar20 = *(undefined8 *)(unaff_x19 + 0x3f00);
        lVar8 = *(long *)(unaff_x19 + 0x3f08);
        if (lVar8 == 0) {
          lVar24 = 1;
        }
        else {
          lVar24 = _malloc(lVar8);
          if (lVar24 == 0) {
            func_0x0001087c9084(1,lVar8);
            goto LAB_1016e14bc;
          }
        }
        _memcpy(lVar24,uVar20,lVar8);
        *(long *)(unaff_x19 + 0x7d28) = lVar8;
        *(long *)(unaff_x19 + 0x7d30) = lVar24;
        *(long *)(unaff_x19 + 0x7d38) = lVar8;
        *(undefined2 *)unaff_x28 = 0x1ff;
        *(undefined1 *)((long)unaff_x28 + 2) = 1;
        plVar14 = (long *)__ZN3std2fs10DirBuilder7_create17h88524462c4c2be57E
                                    (&stack0x0000b290,lVar24,lVar8);
        if (plVar14 != (long *)0x0) {
LAB_1016dc7d4:
          if (*(long *)(unaff_x19 + 0x7d28) != 0) {
            _free(*(undefined8 *)(unaff_x19 + 0x7d30));
          }
          plVar17 = *(long **)(unaff_x19 + 0x48b0);
          if (plVar17 != (long *)0x0) {
            lVar8 = *plVar17;
            *plVar17 = lVar8 + -1;
            LORelease();
            if (lVar8 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h4d407ca5c062c376E(unaff_x19 + 0x48b0);
            }
          }
          goto LAB_1016dfadc;
        }
        pbVar28 = unaff_x25 + 0x88;
        pbVar28[0] = 0;
        pbVar28[1] = 0;
        pbVar28[2] = 0;
        pbVar28[3] = 0;
        *(undefined2 *)(unaff_x19 + 0x7daa) = 0;
        *(undefined4 *)(unaff_x19 + 0x7da6) = 0;
        unaff_x25[0x92] = 1;
        unaff_x25[0x90] = 1;
        unaff_x25[0x8c] = 0x80;
        unaff_x25[0x8d] = 1;
        __ZN3std4path4Path5_join17ha8f408dfc5576c3eE
                  (&stack0x0000dc90,*(undefined8 *)(unaff_x19 + 0x7d30),
                   *(undefined8 *)(unaff_x19 + 0x7d38),&UNK_108cd93a6,0xd);
        plVar14 = in_stack_00006ae8;
        if (in_stack_0000dca0 < 0x180) {
          _memcpy(&stack0x0000b290,uVar19,in_stack_0000dca0);
          (&stack0x0000b290)[in_stack_0000dca0] = 0;
          __ZN4core3ffi5c_str4CStr19from_bytes_with_nul17h3eb41042a4761af1E
                    (&stack0x000088f0,&stack0x0000b290,in_stack_0000dca0 + 1);
          if ((int)in_stack_000088f0 == 1) {
            in_stack_00006ae0 = (long *)CONCAT44((int)((ulong)in_stack_00006ae0 >> 0x20),1);
            plVar14 = (long *)&UNK_10b4add80;
          }
          else {
            FUN_10602e6c4(&stack0x00006ae0,in_stack_000088f8,pbVar28);
          }
        }
        else {
          FUN_108a81cfc(&stack0x00006ae0,uVar19,in_stack_0000dca0,pbVar28);
        }
        _free(uVar19);
        if (((ulong)in_stack_00006ae0 & 1) != 0) {
LAB_1016dc7d0:
          unaff_x25[0xb6] = 0;
          goto LAB_1016dc7d4;
        }
        unaff_x25[0xb6] = 0;
        FUN_1009db6c0(&stack0x0000b290);
        unaff_x25[0xb5] = 1;
        *(ulong *)(unaff_x19 + 0x7d48) = in_stack_0000b2b8;
        *(undefined **)(unaff_x19 + 0x7d40) = in_stack_0000b2b0;
        *(ulong *)(unaff_x19 + 0x7d58) = in_stack_0000b2c8;
        *(undefined **)(unaff_x19 + 0x7d50) = in_stack_0000b2c0;
        *(ulong *)(unaff_x19 + 0x7d68) = in_stack_0000b2d8;
        *(ulong *)(unaff_x19 + 0x7d60) = in_stack_0000b2d0;
        *(ulong *)(unaff_x19 + 0x7d70) = unaff_x28[10];
        FUN_100a888d0(&stack0x0000b290);
        unaff_x25[0xb5] = 0;
        uVar23 = *unaff_x28;
        uVar27 = unaff_x28[2];
        uVar4 = *(undefined1 *)((long)unaff_x28 + 0x13);
        FUN_1016e2954(&stack0x0000b290);
        _memcpy(unaff_x19 + 0x8520,&stack0x0000b290,0x6f8);
        *(long **)(unaff_x19 + 0x8c20) = in_stack_0000b298;
        *(long **)(unaff_x19 + 0x8c18) = in_stack_0000b290;
        *(code **)(unaff_x19 + 0x8c30) = in_stack_0000b2a8;
        *(undefined **)(unaff_x19 + 0x8c28) = in_stack_0000b2a0;
        *(ulong *)(unaff_x19 + 0x8c40) = CONCAT44(uVar33,CONCAT13(uVar4,CONCAT21(9,(char)uVar27)));
        *(ulong *)(unaff_x19 + 0x8c38) = uVar23 & 0xffffffffffff00ff | 0x100;
        unaff_x25[0xf30] = 0xff;
        unaff_x25[0xf31] = 0xff;
        unaff_x25[0xf32] = 0xff;
        unaff_x25[0xf33] = 0xff;
        unaff_x25[0xf34] = 0xff;
        unaff_x25[0xf35] = 0xff;
        unaff_x25[0xf36] = 0xff;
        unaff_x25[0xf37] = 0xff;
        unaff_x25[0xa2] = 1;
        uVar19 = __ZN14codex_feedback13CodexFeedback3new17h789d83cb1c9a7f6eE();
        *(undefined8 *)(unaff_x19 + 0x7d78) = uVar19;
        unaff_x25[0xa1] = 1;
        FUN_100788bf0(unaff_x19 + 0x7dd8);
        unaff_x25[0xa0] = 1;
        FUN_100788d84(unaff_x19 + 0x7fd0,*(undefined8 *)(unaff_x19 + 0x7d78));
        unaff_x25[0x9f] = 1;
        if ((*(char *)(unaff_x19 + 0x2f0) == '\x01') &&
           (*(long *)(unaff_x19 + 0x2100) != -0x8000000000000000)) {
          uVar19 = *(undefined8 *)(unaff_x19 + 0x2110);
          *(undefined8 *)(unaff_x25 + 0x4a0) = *(undefined8 *)(unaff_x19 + 0x2108);
          *(undefined8 *)(unaff_x25 + 0x4a8) = uVar19;
          *(long *)(unaff_x25 + 0x4b0) = unaff_x19 + 0x22d0;
          unaff_x25[0x4c0] = 0;
          auVar31 = FUN_10085cb28(unaff_x19 + 0x81b8,in_stack_000000a8);
          plVar14 = auVar31._8_8_;
          if ((auVar31._0_8_ & 1) != 0) {
            *in_stack_000000a0 = 0x8000000000000002;
            bVar9 = 0xf;
            goto LAB_1016e0b0c;
          }
          bVar9 = unaff_x25[0x4c0];
          if (bVar9 == 5) {
            FUN_100e48c8c(unaff_x19 + 0x81e0);
          }
          else if (bVar9 == 4) {
            FUN_100e68d90(unaff_x19 + 0x81e0);
          }
          else if (bVar9 == 3) {
            FUN_100e4d670(unaff_x19 + 0x81e0);
          }
          if (plVar14 != (long *)0x0) {
            FUN_100d133f0(unaff_x19 + 0x7fd0);
            lVar8 = **(long **)(unaff_x25 + 0x490);
            **(long **)(unaff_x25 + 0x490) = lVar8 + -1;
            LORelease();
            if (lVar8 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hc9edeb079b4dcf91E(unaff_x25 + 0x490);
            }
            unaff_x25[0x9f] = 0;
            FUN_100d133f0(unaff_x19 + 0x7dd8);
            lVar8 = **(long **)(unaff_x19 + 0x7fb8);
            **(long **)(unaff_x19 + 0x7fb8) = lVar8 + -1;
            LORelease();
            if (lVar8 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hc9edeb079b4dcf91E(unaff_x19 + 0x7fb8);
            }
            unaff_x25[0xa0] = 0;
            lVar8 = **(long **)(unaff_x19 + 0x7d78);
            **(long **)(unaff_x19 + 0x7d78) = lVar8 + -1;
            LORelease();
            if (lVar8 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hc9edeb079b4dcf91E(unaff_x19 + 0x7d78);
            }
            unaff_x25[0xa1] = 0;
            FUN_100ddcc28(unaff_x19 + 0x8520);
            unaff_x25[0xa2] = 0;
            FUN_100e1ab64(unaff_x19 + 0x7d40);
            unaff_x25[0xb5] = 0;
            goto LAB_1016dc7d0;
          }
        }
        lVar8 = *(long *)(unaff_x19 + 0x4830);
        if (lVar8 == -0x7fffffffffffffff) {
          lVar24 = 7;
          unaff_x25[0xb4] = 1;
LAB_1016dca24:
          lVar8 = 7;
          unaff_x25[0xb3] = 1;
          plVar17 = *(long **)(unaff_x19 + 0x48b0);
          if (plVar17 == (long *)0x0) goto LAB_1016dcc7c;
LAB_1016dca3c:
          lVar26 = *plVar17;
          *plVar17 = lVar26 + 1;
          if (lVar26 < 0) goto LAB_1016e14bc;
          unaff_x28[2] = 2;
          *(undefined4 *)(unaff_x28 + 3) = 0;
          __ZN11codex_state6log_db10LogDbLayer17start_with_config17h272dec35bf794744E
                    (unaff_x19 + 0x7d80,plVar17,&stack0x0000b290);
          lVar26 = *(long *)(unaff_x19 + 0x7d80);
          unaff_x25[0xb2] = 1;
          if (lVar26 == -0x8000000000000000) goto LAB_1016dcc90;
          __ZN70__LT_codex_state__log_db__LogDbLayer_u20_as_u20_core__clone__Clone_GT_5clone17ha458d0af0f700332E
                    (&stack0x00006ae0,unaff_x19 + 0x7d80);
          if (in_stack_00006ae0 != (long *)0x8000000000000000) {
            unaff_x28[1] = 0;
            unaff_x28[2] = 8;
            unaff_x28[4] = 0x8000000000000000;
            unaff_x28[3] = 0;
            *unaff_x28 = 0;
            FUN_100a8b354(&stack0x000088f0,&stack0x0000b290);
            _memcpy(&stack0x0000b290,&stack0x000088f0,0x1d8);
            _memcpy(&stack0x000068e0,&stack0x0000b290,0x1f8);
          }
        }
        else {
          if (*(long *)(unaff_x19 + 0x4898) == 0) {
            lVar24 = 7;
            unaff_x25[0xb4] = 1;
          }
          else {
            unaff_x28[4] = 1;
            unaff_x28[6] = 0x8000000000000001;
            unaff_x28[5] = 0;
            unaff_x28[9] = 0x8000000000000001;
            *unaff_x28 = 0;
            unaff_x28[1] = 8;
            in_stack_0000b2a8 = (code *)0x8000000000000000;
            __ZN123__LT_opentelemetry_sdk__logs__logger_provider__SdkLoggerProvider_u20_as_u20_opentelemetry__logs__logger__LoggerProvider_GT_17logger_with_scope17hbfa78e9946fcc212E
                      (&stack0x000067d0,unaff_x19 + 0x4898,&stack0x0000b290);
            lVar8 = *(long *)(unaff_x19 + 0x4830);
            lVar24 = 6;
            unaff_x25[0xb4] = 1;
            if (lVar8 == -0x7fffffffffffffff) goto LAB_1016dca24;
          }
          if (lVar8 == -0x8000000000000000) goto LAB_1016dca24;
          FUN_1011e8b94(&stack0x0000b290,unaff_x19 + 0x4830);
          lVar8 = **(long **)(unaff_x19 + 0x4890);
          **(long **)(unaff_x19 + 0x4890) = lVar8 + 1;
          if (lVar8 < 0) goto LAB_1016e14bc;
          lVar8 = 6;
          unaff_x25[0xb3] = 1;
          plVar17 = *(long **)(unaff_x19 + 0x48b0);
          if (plVar17 != (long *)0x0) goto LAB_1016dca3c;
LAB_1016dcc7c:
          *(undefined8 *)(unaff_x19 + 0x7d80) = 0x8000000000000000;
          unaff_x25[0xb2] = 1;
LAB_1016dcc90:
          in_stack_00006ae0 = (long *)0x8000000000000000;
        }
        unaff_x25[0xb1] = 1;
        __ZN90__LT_tracing_subscriber__registry__sharded__Registry_u20_as_u20_core__default__Default_GT_7default17h310ae85e486ce566E
                  (&stack0x00007fa0);
        unaff_x25[0xa2] = 0;
        _memcpy(&stack0x000081c0,unaff_x19 + 0x8520,0x730);
        if (0x3f < in_stack_000081b8) {
          __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bf5c5d,0x25,&UNK_10b4d8480);
          goto LAB_1016e14bc;
        }
        _memcpy(&stack0x00007640,&stack0x000081c0,0x730);
        _memcpy(&stack0x00007d70,&stack0x00007fa0,0x220);
        unaff_x25[0xa0] = 0;
        _memcpy(&stack0x000081c0,unaff_x19 + 0x7dd8,0x1f8);
        if (0x3f < in_stack_00007f88) {
          __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bf5c5d,0x25,&UNK_10b4d8480);
          goto LAB_1016e14bc;
        }
        _memcpy(&stack0x00006ae0,&stack0x000081c0,0x1f8);
        _memcpy(&stack0x00006cd8,&stack0x00007640,0x958);
        unaff_x25[0x9f] = 0;
        _memcpy(&stack0x00007640,unaff_x19 + 0x7fd0,0x1e8);
        if (0x3f < in_stack_00007620) {
          __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bf5c5d,0x25,&UNK_10b4d8480);
          goto LAB_1016e14bc;
        }
        _memcpy(&stack0x0000dc90,&stack0x00007640,0x1e8);
        _memcpy(&stack0x0000de78,&stack0x00006ae0,0xb58);
        unaff_x25[0xb1] = 0;
        _memcpy(&stack0x00006ae0,&stack0x000068e0,0x200);
        if ((in_stack_00006ae0 != (long *)0x2) && (0x3f < in_stack_0000e9b8)) {
          __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bf5c5d,0x25,&UNK_10b4d8480);
          goto LAB_1016e14bc;
        }
        _memcpy(&stack0x0000bfe0,&stack0x00006ae8,0x1f8);
        _memcpy(&stack0x0000b290,&stack0x0000dc90,0xd48);
        unaff_x25[0xb4] = 0;
        FUN_100696230(&stack0x0000b290,0xd4434e71b846d36,0x889f678fecebcd05);
        if ((lVar24 != 7) && (0x3f < in_stack_0000bfb8)) {
          __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bf5c5d,0x25,&UNK_10b4d8480);
          goto LAB_1016e14bc;
        }
        _memcpy(&stack0x000088f0,&stack0x0000b290,0xf50);
        unaff_x25[0xb3] = 0;
        if (lVar24 == 7) {
          bVar9 = FUN_100696230(&stack0x000088f0,0xd4434e71b846d36,0x889f678fecebcd05);
          puVar18 = extraout_x1;
        }
        else {
          puVar18 = &stack0x000098b0;
          bVar9 = 1;
        }
        if ((lVar8 != 7) && (0x3f < in_stack_00009618)) {
          __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bf5c5d,0x25,&UNK_10b4d8480);
          goto LAB_1016e14bc;
        }
        _memcpy(&stack0x0000b2a0,&stack0x000088f0,0xfd0);
        *(undefined1 *)(in_stack_00000078 + 0x80) = 0;
        *(bool *)(in_stack_00000078 + 0x81) = lVar8 != 7;
        *(byte *)(in_stack_00000078 + 0x82) = bVar9 & puVar18 != (undefined1 *)0x0;
        plVar14 = (long *)_malloc(0x1088);
        if (plVar14 == (long *)0x0) {
          func_0x0001087c906c(8,0x1088);
          goto LAB_1016e14bc;
        }
        _memcpy(plVar14,&stack0x0000b290,0x1088);
        uVar27 = 1;
        puVar38 = &UNK_10b2214a0;
        __ZN12tracing_core8callsite17register_dispatch17hc97428c55d0217f6E(&stack0x0000b290);
        if (___ZN12tracing_core10dispatcher11GLOBAL_INIT17h78a80d4b5d855b1aE == 0) {
          ___ZN12tracing_core10dispatcher11GLOBAL_INIT17h78a80d4b5d855b1aE = 1;
          plVar17 = plVar14 + 2;
          if (___ZN12tracing_core10dispatcher15GLOBAL_DISPATCH17ha0df1ee9753ea710E != 0) {
            lVar8 = *plRam000000010b63daa8;
            *plRam000000010b63daa8 = lVar8 + -1;
            LORelease();
            if (lVar8 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hdf85dc28d5530721E(0x10b63daa8);
            }
          }
          ___ZN12tracing_core10dispatcher15GLOBAL_DISPATCH17ha0df1ee9753ea710E = 0;
          puRam000000010b63dab0 = &UNK_10b2214a0;
          ___ZN12tracing_core10dispatcher11GLOBAL_INIT17h78a80d4b5d855b1aE = 2;
          ___ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE = 1;
          uVar27 = 5 - ___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E;
          puVar38 = (undefined *)0x8;
          in_stack_0000b2a8 = (code *)0x0;
          plVar14 = (long *)0x0;
          plRam000000010b63daa8 = plVar17;
          uVar23 = __ZN11tracing_log10log_tracer7Builder4init17h60d7de083b368112E(&stack0x0000b290);
          if ((uVar23 & 1) != 0) {
            puVar15 = (undefined8 *)&UNK_10b22c598;
            goto LAB_1016dd2bc;
          }
        }
        else {
          lVar8 = *plVar14;
          *plVar14 = lVar8 + -1;
          LORelease();
          if (lVar8 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hdf85dc28d5530721E
                      ((ulong)&stack0x000088f0 | 8);
          }
          puVar15 = (undefined8 *)&UNK_10b22c610;
LAB_1016dd2bc:
          if ((code *)*puVar15 != (code *)0x0) {
            (*(code *)*puVar15)(1);
          }
          if (puVar15[1] != 0) {
            _free(1);
          }
        }
        unaff_x25[0xb0] = 0;
        _memcpy(&stack0x00007640,unaff_x19 + 0x248,0x120);
        unaff_x25[0xaf] = 0;
        unaff_x25[0xa8] = 0;
        unaff_x25[0xa9] = 0;
        bVar9 = unaff_x25[0x95];
        unaff_x25[0xac] = 0;
        unaff_x25[0xab] = 0;
        _memcpy(&stack0x0000dc90,unaff_x19 + 0x22d0,0x2548);
        _memcpy(&stack0x00006ae0,unaff_x19 + 0x2118,0x1b8);
        unaff_x25[0xad] = 0;
        unaff_x25[0xa4] = 0;
        unaff_x25[0xa5] = 0;
        unaff_x25[0xa6] = 0;
        unaff_x25[0xa7] = 0;
        uVar30 = *(undefined8 *)(unaff_x19 + 0x20f8);
        uVar29 = *(undefined8 *)(unaff_x19 + 0x20f0);
        unaff_x25[0xa1] = 0;
        uVar20 = *(undefined8 *)(unaff_x19 + 0x7d78);
        unaff_x25[0xb2] = 0;
        unaff_x25[0xa3] = 0;
        uVar19 = *(undefined8 *)(unaff_x19 + 0x48b0);
        unaff_x25[0xaa] = 0;
        uVar25 = *(undefined8 *)(unaff_x19 + 0x5d8);
        _memcpy(&stack0x0000d810,&stack0x00007640,0x120);
        _memcpy(&stack0x0000b290,&stack0x0000dc90,0x2548);
        _memcpy(&stack0x0000d930,&stack0x00006ae0,0x1b8);
        _memcpy(&stack0x000088f0,&stack0x0000b290,0x29a0);
        _memcpy(unaff_x19 + 0x7de0,&stack0x000088f0,0x29a0);
        *in_stack_00000068 = uVar20;
        in_stack_00000068[1] = uVar25;
        in_stack_00000068[3] = uVar30;
        in_stack_00000068[2] = uVar29;
        in_stack_00000068[4] = uVar19;
        *in_stack_00000070 = bVar9;
        in_stack_00000070[1] = 0;
        FUN_10165a0fc(&stack0x0000b290,unaff_x19 + 0x7de0,in_stack_000000a8);
        if (uVar27 == 0x8000000000000002) {
          *in_stack_000000a0 = 0x8000000000000002;
          bVar9 = 0x10;
          goto LAB_1016e0b0c;
        }
        FUN_100e3ede4(unaff_x19 + 0x7de0);
        if (uVar27 == 0x8000000000000001) {
          lVar8 = plVar14[1];
          if (lVar8 == 0) {
            auVar31 = (**(code **)(*plVar14 + 8))(plVar14);
            iVar12 = (**(code **)(auVar31._8_8_ + 0x20))(auVar31._0_8_,&stack0x0000b290);
          }
          else {
            lVar24 = plVar14[2];
            auVar31 = (**(code **)(*plVar14 + 8))(plVar14);
            iVar12 = (**(code **)(lVar24 + 0x28))
                               (lVar8,auVar31._0_8_,auVar31._8_8_,&stack0x0000b290);
          }
          if (iVar12 != 0) {
            func_0x000108a07a3c(&UNK_108cc3daa,0x37,&stack0x000081c0,&UNK_10b235000,&UNK_10b2346c0);
LAB_1016e14bc:
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1016e14c0);
            (*pcVar7)();
          }
          puVar15 = (undefined8 *)_malloc(0x18);
          if (puVar15 == (undefined8 *)0x0) {
            func_0x0001087c906c(8,0x18);
            goto LAB_1016e14bc;
          }
          *puVar15 = 0;
          puVar15[1] = 1;
          puVar15[2] = 0;
          puVar16 = (undefined8 *)_malloc(0x18);
          if (puVar16 == (undefined8 *)0x0) {
            func_0x0001087c906c(8,0x18);
            goto LAB_1016e14bc;
          }
          *puVar16 = puVar15;
          puVar16[1] = &UNK_10b209118;
          *(undefined1 *)(puVar16 + 2) = 0x28;
          (**(code **)*plVar14)(plVar14);
          plVar14 = (long *)((long)puVar16 + 1);
          puVar38 = in_stack_00010280;
          in_stack_0000b2a8 = in_stack_00010288;
          in_stack_0000b2b0 = in_stack_00010290;
          in_stack_0000b2b8 = in_stack_00010298;
          in_stack_0000b2c0 = in_stack_000102a0;
          in_stack_0000b2c8 = in_stack_000102a8;
          in_stack_0000b2d0 = in_stack_000102b0;
          in_stack_0000b2d8 = in_stack_000102b8;
          in_stack_0000b2e0 = in_stack_000102c0;
          in_stack_0000b2e8 = in_stack_000102c8;
          in_stack_0000b2f0 = in_stack_000102d0;
          in_stack_0000b2f8 = in_stack_000102d8;
        }
        in_stack_000102d8 = in_stack_0000b2f8;
        in_stack_000102d0 = in_stack_0000b2f0;
        in_stack_000102c8 = in_stack_0000b2e8;
        in_stack_000102c0 = in_stack_0000b2e0;
        in_stack_000102b8 = in_stack_0000b2d8;
        in_stack_000102b0 = in_stack_0000b2d0;
        in_stack_000102a8 = in_stack_0000b2c8;
        in_stack_000102a0 = in_stack_0000b2c0;
        in_stack_00010298 = in_stack_0000b2b8;
        in_stack_00010290 = in_stack_0000b2b0;
        in_stack_00010288 = in_stack_0000b2a8;
        in_stack_00010280 = puVar38;
        unaff_x25[0xb1] = 0;
        unaff_x25[0xb2] = 0;
        unaff_x25[0xb3] = 0;
        unaff_x25[0xb4] = 0;
        unaff_x25[0x9f] = 0;
        unaff_x25[0xa0] = 0;
        unaff_x25[0xa1] = 0;
        unaff_x25[0xa2] = 0;
        FUN_100e1ab64(unaff_x19 + 0x7d40);
        unaff_x25[0xb5] = 0;
        unaff_x25[0xb6] = 0;
        if (*(long *)(unaff_x19 + 0x7d28) != 0) {
          _free(*(undefined8 *)(unaff_x19 + 0x7d30));
        }
        unaff_x25[0xa3] = 0;
        if (*(long *)(unaff_x19 + 0x4830) != -0x7fffffffffffffff) {
          FUN_100dfc5b8(unaff_x19 + 0x4830);
        }
        if (*(long *)(unaff_x19 + 0x4818) != 0) {
          _free(*(undefined8 *)(unaff_x19 + 0x4820));
        }
        unaff_x25[0xa4] = 0;
        unaff_x25[0xa5] = 0;
        unaff_x25[0xb7] = 0;
        unaff_x25[0xb8] = 0;
        if ((*(long *)(unaff_x19 + 0x2100) != -0x8000000000000000) &&
           (*(long *)(unaff_x19 + 0x2100) != 0)) {
          _free(*(undefined8 *)(unaff_x19 + 0x2108));
        }
        unaff_x25[0xa6] = 0;
        unaff_x25[0xb9] = 0;
        FUN_100e04ad4(unaff_x19 + 0x6c0);
        unaff_x25[0xa7] = 0;
        unaff_x25[0xa8] = 0;
        unaff_x25[0xa9] = 0;
        if ((*(ulong *)(unaff_x19 + 0x5f8) & 0x7fffffffffffffff) != 0) {
          _free(*(undefined8 *)(unaff_x19 + 0x600));
        }
        if ((((unaff_x25[0x9d] & 1) != 0) && (*(long *)(unaff_x19 + 0x5e0) != -0x8000000000000000))
           && (*(long *)(unaff_x19 + 0x5e0) != 0)) {
          _free(*(undefined8 *)(unaff_x19 + 0x5e8));
        }
        unaff_x25[0x9d] = 0;
        unaff_x25[0xaa] = 0;
        unaff_x25[0xba] = 0;
        unaff_x25[0xab] = 0;
        unaff_x25[0xac] = 0;
        FUN_100e01cdc(unaff_x19 + 0x4d8);
        if (*(long *)(unaff_x19 + 0x4c0) != 0) {
          _free(*(undefined8 *)(unaff_x19 + 0x4c8));
        }
        unaff_x25[0xad] = 0;
        lVar24 = *(long *)(unaff_x19 + 0x498);
        lVar8 = *(long *)(unaff_x19 + 0x4a0);
        if (lVar8 != 0) {
          puVar15 = (undefined8 *)(lVar24 + 8);
          do {
            if (puVar15[-1] != 0) {
              _free(*puVar15);
            }
            puVar15 = puVar15 + 3;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        if (*(long *)(unaff_x19 + 0x490) != 0) {
          _free(lVar24);
        }
        unaff_x25[0xae] = 0;
        unaff_x25[0xaf] = 0;
        unaff_x25[0x9e] = 0;
      }
      else {
LAB_1016dfadc:
        unaff_x25[0xa3] = 0;
        if (*(long *)(unaff_x19 + 0x4830) != -0x7fffffffffffffff) {
          FUN_100dfc5b8(unaff_x19 + 0x4830);
        }
        if (*(long *)(unaff_x19 + 0x4818) != 0) {
          _free(*(undefined8 *)(unaff_x19 + 0x4820));
        }
        FUN_100de93d0(unaff_x19 + 0x22d0);
        unaff_x25[0xa4] = 0;
        FUN_100dff6cc(unaff_x19 + 0x2118);
        unaff_x25[0xa5] = 0;
        unaff_x25[0xb7] = 0;
        unaff_x25[0xb8] = 0;
        if ((*(long *)(unaff_x19 + 0x2100) != -0x8000000000000000) &&
           (*(long *)(unaff_x19 + 0x2100) != 0)) {
          _free(*(undefined8 *)(unaff_x19 + 0x2108));
        }
        FUN_100dd8a98(unaff_x19 + 0x20f0);
        unaff_x25[0xa6] = 0;
        unaff_x25[0xb9] = 0;
        FUN_100e04ad4(unaff_x19 + 0x6c0);
        FUN_100e01cdc(unaff_x19 + 0x610);
        unaff_x25[0xa7] = 0;
        unaff_x25[0xa8] = 0;
        unaff_x25[0xa9] = 0;
        if ((*(ulong *)(unaff_x19 + 0x5f8) & 0x7fffffffffffffff) == 0) {
          bVar9 = unaff_x25[0x9d];
        }
        else {
          _free(*(undefined8 *)(unaff_x19 + 0x600));
          bVar9 = unaff_x25[0x9d];
        }
        if ((((bVar9 & 1) != 0) && (*(long *)(unaff_x19 + 0x5e0) != -0x8000000000000000)) &&
           (*(long *)(unaff_x19 + 0x5e0) != 0)) {
          _free(*(undefined8 *)(unaff_x19 + 0x5e8));
        }
        unaff_x25[0x9d] = 0;
        lVar8 = **(long **)(unaff_x19 + 0x5d8);
        **(long **)(unaff_x19 + 0x5d8) = lVar8 + -1;
        LORelease();
        if (lVar8 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2208656e6791b8a3E(unaff_x19 + 0x5d8);
        }
        unaff_x25[0xaa] = 0;
        unaff_x25[0xba] = 0;
        if ((*(long *)(unaff_x19 + 0x5c0) != -0x8000000000000000) &&
           (*(long *)(unaff_x19 + 0x5c0) != 0)) {
          _free(*(undefined8 *)(unaff_x19 + 0x5c8));
        }
        unaff_x25[0xab] = 0;
        FUN_100dea73c(unaff_x19 + 0x588);
        unaff_x25[0xac] = 0;
        FUN_100e01cdc(unaff_x19 + 0x4d8);
        if (*(long *)(unaff_x19 + 0x4c0) != 0) {
          _free(*(undefined8 *)(unaff_x19 + 0x4c8));
        }
        FUN_100e76384(unaff_x19 + 0x4a8);
        unaff_x25[0xad] = 0;
        lVar24 = *(long *)(unaff_x19 + 0x498);
        lVar8 = *(long *)(unaff_x19 + 0x4a0);
        if (lVar8 != 0) {
          puVar15 = (undefined8 *)(lVar24 + 8);
          do {
            if (puVar15[-1] != 0) {
              _free(*puVar15);
            }
            puVar15 = puVar15 + 3;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        if (*(long *)(unaff_x19 + 0x490) != 0) {
          _free(lVar24);
        }
        unaff_x25[0xae] = 0;
        if ((unaff_x25[0x9e] & 1) != 0) {
          FUN_100e01cdc(unaff_x19 + 0x3b0);
        }
        unaff_x25[0x9e] = 0;
        if ((*(long *)(unaff_x19 + 0x368) != -0x8000000000000000) &&
           (*(long *)(unaff_x19 + 0x368) != 0)) {
          _free(*(undefined8 *)(unaff_x19 + 0x370));
        }
        if ((*(long *)(unaff_x19 + 0x380) != -0x8000000000000000) &&
           (*(long *)(unaff_x19 + 0x380) != 0)) {
          _free(*(undefined8 *)(unaff_x19 + 0x388));
        }
        if ((*(long *)(unaff_x19 + 0x398) != -0x8000000000000000) &&
           (*(long *)(unaff_x19 + 0x398) != 0)) {
          _free(*(undefined8 *)(unaff_x19 + 0x3a0));
        }
        unaff_x25[0xaf] = 0;
        FUN_100ddd750(unaff_x19 + 0x248);
        uVar27 = 0x8000000000000001;
      }
      unaff_x25[0xb0] = 0;
      *in_stack_000000a0 = uVar27;
      in_stack_000000a0[1] = (ulong)plVar14;
      in_stack_000000a0[7] = in_stack_000102a8;
      in_stack_000000a0[6] = (ulong)in_stack_000102a0;
      in_stack_000000a0[9] = in_stack_000102b8;
      in_stack_000000a0[8] = in_stack_000102b0;
      in_stack_000000a0[0xb] = in_stack_000102c8;
      in_stack_000000a0[10] = in_stack_000102c0;
      in_stack_000000a0[0xd] = in_stack_000102d8;
      in_stack_000000a0[0xc] = in_stack_000102d0;
      bVar9 = 1;
      in_stack_000000a0[3] = (ulong)in_stack_00010288;
      in_stack_000000a0[2] = (ulong)in_stack_00010280;
      in_stack_000000a0[5] = in_stack_00010298;
      in_stack_000000a0[4] = (ulong)in_stack_00010290;
      goto LAB_1016e0b0c;
    }
  }
  else {
    *(long *)(unaff_x19 + 0x7e18) = unaff_x26;
    pbVar1 = unaff_x25 + 0x109;
    unaff_x25[0x109] = 0;
    plVar17 = (long *)(unaff_x19 + 0x7df8);
    unaff_x25[0x108] = 0;
    *(long *)(unaff_x19 + 0x7df8) = unaff_x26;
    __ZN3std4path4Path5_join17ha8f408dfc5576c3eE
              (unaff_x19 + 0x7e00,*(undefined8 *)(unaff_x26 + 0x1c18),
               *(undefined8 *)(unaff_x26 + 0x1c20),&UNK_108ed2e30,0xe);
    *(long *)(unaff_x19 + 0x7e28) = unaff_x19 + 0x7e00;
    unaff_x25[0x148] = 0;
    plVar14 = (long *)(unaff_x19 + 0x7e28);
    FUN_100fbca20(&stack0x0000b290,plVar14,in_stack_000000a8);
    if ((char)in_stack_0000b290 != '\x02') {
      if (unaff_x25[0x148] == 3) {
        if (unaff_x25[0x140] == 3) {
          plVar34 = *(long **)(unaff_x19 + 0x7e50);
          if (*plVar34 == 0xcc) {
            *plVar34 = 0x84;
          }
          else {
            (**(code **)(plVar34[2] + 0x20))();
          }
        }
        else if ((unaff_x25[0x140] == 0) && (*(long *)(unaff_x19 + 0x7e38) != 0)) {
          _free(*(undefined8 *)(unaff_x19 + 0x7e40));
        }
      }
      if (((ulong)in_stack_0000b290 & 1) == 0) {
        if (((ulong)in_stack_0000b290 & 0x100) == 0) goto LAB_1016dfd80;
        __ZN3std4path4Path11to_path_buf17hc9bd4cca887f646eE
                  (&stack0x0000b290,*(undefined8 *)(*plVar17 + 0x1c18),
                   *(undefined8 *)(*plVar17 + 0x1c20));
        uVar19 = *(undefined8 *)(*plVar17 + 0x1b88);
        lVar8 = *(long *)(*plVar17 + 0x1b90);
        if (lVar8 == 0) {
          lVar24 = 1;
        }
        else {
          lVar24 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar8,1);
          if (lVar24 == 0) {
            func_0x0001087c9084(1,lVar8);
            goto LAB_1016e14bc;
          }
        }
        _memcpy(lVar24,uVar19,lVar8);
        *(long **)(unaff_x19 + 0x7e30) = in_stack_0000b298;
        *plVar14 = (long)in_stack_0000b290;
        *(undefined **)(unaff_x19 + 0x7e38) = in_stack_0000b2a0;
        *(long *)(unaff_x19 + 0x7e40) = lVar8;
        *(long *)(unaff_x19 + 0x7e48) = lVar24;
        *(long *)(unaff_x19 + 0x7e50) = lVar8;
        unaff_x25[0xb10] = 0;
        in_stack_0000b2a0 = *(undefined **)(unaff_x19 + 0x7e38);
        plVar36 = *(long **)(unaff_x19 + 0x7e30);
        plVar34 = (long *)*plVar14;
        in_stack_0000b2b0 = *(undefined **)(unaff_x19 + 0x7e48);
        in_stack_0000b2a8 = *(code **)(unaff_x19 + 0x7e40);
        in_stack_0000b2b8 = *(ulong *)(unaff_x19 + 0x7e50);
        *(long **)(unaff_x19 + 0x7e60) = plVar36;
        *(long **)(unaff_x19 + 0x7e58) = plVar34;
        *(code **)(unaff_x19 + 0x7e70) = in_stack_0000b2a8;
        *(undefined **)(unaff_x19 + 0x7e68) = in_stack_0000b2a0;
        *(ulong *)(unaff_x19 + 0x7e80) = in_stack_0000b2b8;
        *(undefined **)(unaff_x19 + 0x7e78) = in_stack_0000b2b0;
        *(undefined8 *)(unaff_x19 + 0x7e88) = 0;
        unaff_x25[0x2a8] = 0;
        auVar31 = FUN_1006e8198(unaff_x19 + 0x7e58,in_stack_000000a8);
        puVar15 = auVar31._8_8_;
        if (auVar31._0_8_ == 2) {
          unaff_x25[0xb10] = 3;
          *pbVar1 = 4;
          goto LAB_1016df8fc;
        }
        FUN_100e7fdb8(unaff_x19 + 0x7e58);
        unaff_x25[0xb10] = 1;
        if ((auVar31._0_8_ & 1) != 0) {
          __ZN11codex_state9telemetry15record_fallback17h4fef7a0f859d97adE
                    (&UNK_108cad326,0xc,&UNK_108c98240,8,0);
          (**(code **)*puVar15)();
          unaff_x25[0x108] = 0;
          goto LAB_1016dff50;
        }
        unaff_x25[0x108] = 0;
        uVar19 = *(undefined8 *)(*(long *)(unaff_x19 + 0x7df8) + 0x1c18);
        uVar20 = *(undefined8 *)(*(long *)(unaff_x19 + 0x7df8) + 0x1c20);
        *(undefined8 *)(unaff_x19 + 0x7ec8) = uVar19;
        *(undefined8 *)(unaff_x19 + 0x7ed0) = uVar20;
        *(undefined8 **)(unaff_x19 + 0x7ee0) = puVar15;
        unaff_x25[0x1d1] = 0;
        unaff_x25[0x1d0] = 1;
        *(undefined8 **)(unaff_x19 + 0x7ed8) = puVar15;
        *(undefined8 *)(unaff_x19 + 0x7e28) = uVar19;
        *(undefined8 *)(unaff_x19 + 0x7e30) = uVar20;
        *(undefined8 **)(unaff_x19 + 0x7e38) = puVar15 + 2;
        unaff_x25[0x130] = 0;
        FUN_1006f0d5c(&stack0x0000b290,unaff_x19 + 0x7e38,in_stack_000000a8);
        if (plVar34 == (long *)0x8000000000000002) {
          unaff_x25[0x1d1] = 3;
          bVar21 = true;
        }
        else {
          cVar10 = (char)((ulong)in_stack_0000b2b0 >> 0x20);
          FUN_100d535a0(unaff_x19 + 0x7e38);
          plVar37 = plVar36;
          if (plVar34 == (long *)0x8000000000000001) {
            if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
                ((bRam000000010b62ff10 - 1 < 2 ||
                 ((bRam000000010b62ff10 != 0 &&
                  (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                      (&
                                       __ZN13codex_rollout8state_db25require_backfill_complete28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h200eeacf968eaafaE
                                      ), cVar10 != '\0')))))) &&
               (uVar27 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                   (
                                   ___ZN13codex_rollout8state_db25require_backfill_complete28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h200eeacf968eaafaE
                                   ), (uVar27 & 1) != 0)) {
              in_stack_00007640 = *(long **)(unaff_x19 + 0x7e28);
              in_stack_00007648 = *(long **)(unaff_x19 + 0x7e30);
              plVar34 = (long *)&stack0x00007640;
              in_stack_0000b2a0 = &stack0x000068e0;
              in_stack_0000b2a8 =
                   __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
              ;
              in_stack_0000b290 = (long *)0x1;
              in_stack_0000b298 = (long *)&stack0x00007fa0;
              FUN_10077b390(&stack0x000088f0);
              plVar37 = (long *)&
                                __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
              ;
            }
            else {
              lVar8 = 
              ___ZN13codex_rollout8state_db25require_backfill_complete28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h200eeacf968eaafaE
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                in_stack_0000dca0 =
                     *(ulong *)(
                               ___ZN13codex_rollout8state_db25require_backfill_complete28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h200eeacf968eaafaE
                               + 0x28);
                auVar32._8_8_ =
                     *(undefined8 *)
                      (
                      ___ZN13codex_rollout8state_db25require_backfill_complete28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h200eeacf968eaafaE
                      + 0x20);
                auVar32._0_8_ = 2;
                auVar31._8_8_ =
                     *(undefined8 *)
                      (
                      ___ZN13codex_rollout8state_db25require_backfill_complete28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h200eeacf968eaafaE
                      + 0x20);
                auVar31._0_8_ = 2;
                puVar38 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar38 = &UNK_10b3c24c8;
                }
                puVar2 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar2 = &UNK_109adfc03;
                }
                iVar12 = (**(code **)(puVar38 + 0x18))(puVar2,&stack0x0000dc90);
                if (iVar12 != 0) {
                  in_stack_00007640 = *(long **)(unaff_x19 + 0x7e28);
                  in_stack_00007648 = *(long **)(unaff_x19 + 0x7e30);
                  plVar34 = (long *)&stack0x00007640;
                  plVar37 = (long *)&
                                    __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
                  ;
                  in_stack_0000b2a0 = &stack0x000068e0;
                  in_stack_0000b2a8 =
                       __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
                  ;
                  in_stack_0000b290 = (long *)0x1;
                  in_stack_0000b298 = (long *)&stack0x00007fa0;
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (lVar8,puVar2,puVar38,&stack0x0000dc90,&stack0x000088f0);
                  auVar31 = auVar32;
                }
              }
            }
            __ZN11codex_state9telemetry15record_fallback17h4fef7a0f859d97adE
                      (&UNK_108cad326,0xc,&UNK_108c98240,8,0);
            (**(code **)*plVar36)();
            plVar35 = plVar34;
LAB_1016e070c:
            plVar14 = (long *)0x0;
            plVar34 = plVar35;
            plVar36 = plVar37;
          }
          else {
            if (cVar10 != '\x02') {
              if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
                 (((bRam000000010b62ff28 - 1 < 2 ||
                   ((bRam000000010b62ff28 != 0 &&
                    (cVar11 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                        (&
                                         __ZN13codex_rollout8state_db25require_backfill_complete28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha57e01e2a2a6f22aE
                                        ), cVar11 != '\0')))) &&
                  (uVar27 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                      (
                                      ___ZN13codex_rollout8state_db25require_backfill_complete28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha57e01e2a2a6f22aE
                                      ), (uVar27 & 1) != 0)))) {
                in_stack_00007640 = (long *)&UNK_108ca815e;
                if (cVar10 != '\0') {
                  in_stack_00007640 = (long *)&UNK_108ca8165;
                }
                in_stack_00007648 = (long *)0x7;
                in_stack_0000b2a0 = &stack0x00007640;
                in_stack_0000b2a8 = (code *)&DAT_100c7b3a0;
                in_stack_0000b290 = (long *)0x1;
                in_stack_0000b298 = (long *)&stack0x000068e0;
                FUN_10077b4cc(&stack0x000088f0);
                plVar35 = (long *)&stack0x000081c0;
                plVar37 = (long *)&
                                  __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
                ;
              }
              else {
                lVar8 = 
                ___ZN13codex_rollout8state_db25require_backfill_complete28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha57e01e2a2a6f22aE
                ;
                plVar35 = plVar34;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  in_stack_00006ae8 =
                       *(long **)(
                                 ___ZN13codex_rollout8state_db25require_backfill_complete28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha57e01e2a2a6f22aE
                                 + 0x20);
                  in_stack_00006ae0 = (long *)0x2;
                  puVar38 = puRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    puVar38 = &UNK_10b3c24c8;
                  }
                  puVar2 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar2 = &UNK_109adfc03;
                  }
                  iVar12 = (**(code **)(puVar38 + 0x18))(puVar2,&stack0x00006ae0);
                  if (iVar12 != 0) {
                    in_stack_00007640 = (long *)&UNK_108ca815e;
                    if (cVar10 != '\0') {
                      in_stack_00007640 = (long *)&UNK_108ca8165;
                    }
                    in_stack_00007648 = (long *)0x7;
                    plVar35 = (long *)&stack0x000081c0;
                    plVar37 = (long *)&
                                      __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
                    ;
                    in_stack_0000b2a0 = &stack0x00007640;
                    in_stack_0000b2a8 = (code *)&DAT_100c7b3a0;
                    in_stack_0000b290 = (long *)0x1;
                    in_stack_0000b298 = (long *)&stack0x000068e0;
                    __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                              (lVar8,puVar2,puVar38,&stack0x00006ae0,&stack0x000088f0);
                  }
                }
              }
              __ZN11codex_state9telemetry15record_fallback17h4fef7a0f859d97adE
                        (&UNK_108cad326,0xc,&UNK_108cad3e1,0x13,0);
              if (((ulong)plVar34 & 0x7fffffffffffffff) != 0) {
                _free(plVar36);
              }
              goto LAB_1016e070c;
            }
            unaff_x25[0x1d0] = 0;
            plVar14 = *(long **)(unaff_x19 + 0x7ed8);
            if (((ulong)plVar34 & 0x7fffffffffffffff) != 0) {
              _free(plVar36);
            }
          }
          if ((unaff_x25[0x1d0] & 1) != 0) {
            lVar8 = **(long **)(unaff_x19 + 0x7ed8);
            **(long **)(unaff_x19 + 0x7ed8) = lVar8 + -1;
            LORelease();
            if (lVar8 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h4d407ca5c062c376E(unaff_x19 + 0x7ed8);
            }
          }
          bVar21 = false;
          unaff_x25[0x1d0] = 0;
          unaff_x25[0x1d1] = 1;
        }
        if (bVar21) {
          *pbVar1 = 5;
          goto LAB_1016df8fc;
        }
        FUN_100c97dac(unaff_x19 + 0x7e28);
        unaff_x25[0x108] = 0;
        lVar8 = *(long *)(unaff_x19 + 0x7e00);
        in_stack_000088f0 = in_stack_0000b290;
        in_stack_000088f8 = in_stack_0000b298;
        in_stack_0000b290 = plVar34;
        in_stack_0000b298 = plVar36;
        auVar6 = auVar31;
      }
      else {
        if (((ulong)in_stack_0000b298 & 3) == 1) {
          uVar19 = *(undefined8 *)((long)in_stack_0000b298 + -1);
          puVar15 = *(undefined8 **)((long)in_stack_0000b298 + 7);
          pcVar7 = (code *)*puVar15;
          if (pcVar7 != (code *)0x0) {
            (*pcVar7)(uVar19);
          }
          if (puVar15[1] != 0) {
            _free(uVar19);
          }
          _free((undefined8 *)((long)in_stack_0000b298 + -1));
        }
LAB_1016dfd80:
        plVar34 = (long *)&UNK_108ed3a13;
        plVar36 = (long *)0x6;
        in_stack_0000b2a0 = &UNK_108cad326;
        in_stack_0000b2a8 = (code *)0xc;
        in_stack_0000b2b0 = &UNK_108ed3a19;
        in_stack_0000b2b8 = 6;
        in_stack_0000b2c0 = &UNK_108cad16e;
        in_stack_0000b2c8 = 0xe;
        in_stack_0000b290 = in_stack_000088f0;
        in_stack_0000b298 = in_stack_000088f8;
        if ((lRam000000010b6302b0 == 0) &&
           (lVar8 = lRam000000010b6302a0 +
                    (*(long *)(lRam000000010b6302a8 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
           auVar31 = auVar5, lVar8 != 0)) {
          (**(code **)(lRam000000010b6302a8 + 0x18))(lVar8,&UNK_108ed3a1f,0x1b,1,&stack0x0000b290,2)
          ;
          auVar31 = auVar6;
        }
LAB_1016dff50:
        plVar14 = (long *)0x0;
        lVar8 = *(long *)(unaff_x19 + 0x7e00);
        in_stack_000088f0 = in_stack_0000b290;
        in_stack_000088f8 = in_stack_0000b298;
        in_stack_0000b290 = plVar34;
        in_stack_0000b298 = plVar36;
        auVar6 = auVar31;
      }
      if (lVar8 != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x7e08));
      }
      *pbVar1 = 1;
      unaff_x28 = (ulong *)&stack0x0000b290;
      FUN_100ceba70(plVar17);
LAB_1016dff84:
      lVar8 = 0;
      plVar17 = in_stack_00007640;
      goto LAB_1016dff88;
    }
    *pbVar1 = 3;
LAB_1016df8fc:
    *pbVar28 = 4;
  }
LAB_1016dffa0:
  *in_stack_000000a0 = 0x8000000000000002;
  bVar9 = 10;
LAB_1016e0b0c:
  unaff_x25[0x94] = bVar9;
  return;
}

