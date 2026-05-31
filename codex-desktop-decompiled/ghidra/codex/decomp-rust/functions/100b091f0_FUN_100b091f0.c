
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b091f0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  undefined1 uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x22;
  ulong *unaff_x24;
  long unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  long lStack0000000000000100;
  undefined1 *puStack0000000000000108;
  long lStack0000000000000110;
  undefined *puStack0000000000000118;
  undefined1 *in_stack_00000120;
  undefined *in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  long in_stack_000001c0;
  undefined *in_stack_000001c8;
  long in_stack_000001d0;
  undefined *in_stack_000001d8;
  undefined1 *in_stack_000001e0;
  undefined *in_stack_000001e8;
  undefined8 in_stack_00000248;
  
  *(undefined1 **)(unaff_x29 + -0x80) = &stack0x00000280;
  *(undefined **)(unaff_x29 + -0x78) = &UNK_10b208fd0;
  puStack0000000000000108 = (undefined1 *)(unaff_x29 + -0x80);
  lStack0000000000000100 = 1;
  lStack0000000000000110 = 1;
  puStack0000000000000118 = (undefined *)param_1;
  FUN_100b0bedc(&stack0x00000100);
  if (*unaff_x28 != -0x7fffffffffffffff) {
    *(undefined1 *)(unaff_x19 + 0x1fb) = 0;
  }
  *(undefined1 *)(unaff_x19 + 0x1fb) = 0;
  if ((*unaff_x24 < 3) &&
     (((bRam000000010b62eb10 - 1 < 2 ||
       ((bRam000000010b62eb10 != 0 &&
        (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (&
                            __ZN19codex_network_proxy6socks517handle_socks5_tcp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h219e0fdaf7cf9884E
                           ), cVar5 != '\0')))) &&
      (uVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (
                         ___ZN19codex_network_proxy6socks517handle_socks5_tcp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h219e0fdaf7cf9884E
                         ), (uVar7 & 1) != 0)))) {
    puStack0000000000000118 =
         (undefined *)
         (
         ___ZN19codex_network_proxy6socks517handle_socks5_tcp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h219e0fdaf7cf9884E
         + 0x30);
    in_stack_000001c0 = unaff_x19 + 0xf8;
    in_stack_000001d0 = unaff_x19 + 0x1f8;
    in_stack_000001c8 = &DAT_10112965c;
    in_stack_000001d8 =
         &
         __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h0a78be7af221127fE
    ;
    *(undefined1 **)(unaff_x29 + -0x80) = &stack0x00000280;
    *(undefined **)(unaff_x29 + -0x78) = &UNK_10b208fd0;
    puStack0000000000000108 = (undefined1 *)(unaff_x29 + -0x80);
    lStack0000000000000100 = 1;
    lStack0000000000000110 = 1;
    FUN_100b0c3d4(&stack0x00000100);
  }
  else {
    lVar3 = 
    ___ZN19codex_network_proxy6socks517handle_socks5_tcp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h219e0fdaf7cf9884E
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x000003e8);
      if (iVar6 != 0) {
        puStack0000000000000118 =
             (undefined *)
             (
             ___ZN19codex_network_proxy6socks517handle_socks5_tcp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h219e0fdaf7cf9884E
             + 0x30);
        in_stack_000001c0 = unaff_x19 + 0xf8;
        in_stack_000001d0 = unaff_x19 + 0x1f8;
        in_stack_000001c8 = &DAT_10112965c;
        in_stack_000001d8 =
             &
             __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h0a78be7af221127fE
        ;
        *(char **)(unaff_x29 + -0x80) = s__SOCKS_upstream_dial_started__ho_108ad07a9;
        *(long **)(unaff_x29 + -0x78) = &stack0x000001c0;
        puStack0000000000000108 = &stack0x00000380;
        lStack0000000000000100 = 1;
        lStack0000000000000110 = 1;
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar3,puVar2,puVar1,&stack0x00000280,&stack0x00000100);
      }
    }
  }
  auVar19 = func_0x000106032954(8);
  *(undefined1 (*) [12])(unaff_x19 + 0xa38) = auVar19;
  *(undefined1 *)(unaff_x19 + 0x1fc) = 0;
  uVar12 = *(undefined8 *)(unaff_x19 + 0x98);
  uVar16 = *(undefined8 *)(unaff_x19 + 0xb0);
  uVar13 = *(undefined8 *)(unaff_x19 + 0xa8);
  unaff_x22[5] = *(undefined8 *)(unaff_x19 + 0xa0);
  unaff_x22[4] = uVar12;
  unaff_x22[7] = uVar16;
  unaff_x22[6] = uVar13;
  uVar12 = *(undefined8 *)(unaff_x19 + 0xb8);
  unaff_x22[9] = *(undefined8 *)(unaff_x19 + 0xc0);
  unaff_x22[8] = uVar12;
  unaff_x22[10] = *(undefined8 *)(unaff_x19 + 200);
  uVar12 = *(undefined8 *)(unaff_x19 + 0x78);
  uVar16 = *(undefined8 *)(unaff_x19 + 0x90);
  uVar13 = *(undefined8 *)(unaff_x19 + 0x88);
  unaff_x22[1] = *(undefined8 *)(unaff_x19 + 0x80);
  *unaff_x22 = uVar12;
  unaff_x22[3] = uVar16;
  unaff_x22[2] = uVar13;
  *(long *)(unaff_x19 + 600) = unaff_x19 + 0xd0;
  *(undefined1 *)(unaff_x19 + 0x2b8) = 0;
  FUN_100714c74(&stack0x000001c0,unaff_x19 + 0x200);
  if (in_stack_000001c0 == 3) {
    *unaff_x20 = 3;
    uVar8 = 0xb;
  }
  else {
    in_stack_00000128 = in_stack_000001e8;
    in_stack_00000120 = in_stack_000001e0;
    puStack0000000000000108 = in_stack_000001c8;
    lStack0000000000000100 = in_stack_000001c0;
    puStack0000000000000118 = in_stack_000001d8;
    lStack0000000000000110 = in_stack_000001d0;
    in_stack_00000188 = in_stack_00000248;
    FUN_100d97804(unaff_x19 + 0x200);
    lVar3 = lStack0000000000000100;
    if (lStack0000000000000100 == 2) {
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
          ((bRam000000010b62eb58 - 1 < 2 ||
           ((bRam000000010b62eb58 != 0 &&
            (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN19codex_network_proxy6socks517handle_socks5_tcp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4eb432d27b0cf607E
                               ), cVar5 != '\0')))))) &&
         (uVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (
                            ___ZN19codex_network_proxy6socks517handle_socks5_tcp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4eb432d27b0cf607E
                            ), (uVar7 & 1) != 0)) {
        auVar17 = __ZN3std4time7Instant7elapsed17hd8a84ef162118389E(unaff_x19 + 0xa38);
        auVar18._8_8_ = 0;
        auVar18._0_8_ = auVar17._0_8_;
        lVar11 = SUB168(auVar18 * ZEXT816(1000),8);
        uVar9 = auVar17._0_8_ * 1000;
        uVar7 = (auVar17._8_8_ & 0xffffffff) / 1000000;
        if (CARRY8(uVar9,uVar7)) {
          lVar11 = lVar11 + 1;
        }
        *(ulong *)(unaff_x29 + -0x80) = uVar9 + uVar7;
        *(long *)(unaff_x29 + -0x78) = lVar11;
        in_stack_000001c0 = unaff_x19 + 0xf8;
        in_stack_000001c8 = &DAT_10112965c;
        in_stack_000001d0 = unaff_x19 + 0x1f8;
        in_stack_000001d8 =
             &
             __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h0a78be7af221127fE
        ;
        in_stack_000001e0 = (undefined1 *)(unaff_x29 + -0x80);
        in_stack_000001e8 =
             &
             __ZN4core3fmt3num53__LT_impl_u20_core__fmt__Display_u20_for_u20_u128_GT_3fmt17hf4dcab81a00cc2c7E
        ;
        FUN_100b0c78c(&stack0x00000280);
      }
      else {
        lVar11 = 
        ___ZN19codex_network_proxy6socks517handle_socks5_tcp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4eb432d27b0cf607E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uVar12 = *(undefined8 *)
                    (
                    ___ZN19codex_network_proxy6socks517handle_socks5_tcp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4eb432d27b0cf607E
                    + 0x28);
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000418);
          if (iVar6 != 0) {
            __ZN3std4time7Instant7elapsed17hd8a84ef162118389E(unaff_x19 + 0xa38);
            in_stack_000001c0 = unaff_x19 + 0xf8;
            in_stack_000001c8 = &DAT_10112965c;
            in_stack_000001d0 = unaff_x19 + 0x1f8;
            in_stack_000001d8 =
                 &
                 __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h0a78be7af221127fE
            ;
            in_stack_000001e0 = &stack0x00000380;
            in_stack_000001e8 =
                 &
                 __ZN4core3fmt3num53__LT_impl_u20_core__fmt__Display_u20_for_u20_u128_GT_3fmt17hf4dcab81a00cc2c7E
            ;
            uVar13 = *(undefined8 *)(unaff_x27 + 0x60);
            *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x27 + 0x68);
            *(undefined8 *)(unaff_x29 + -0x80) = uVar13;
            *(undefined8 *)(unaff_x29 + -0x70) = uVar12;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar11,puVar2,puVar1,unaff_x29 + -0x80,&stack0x00000280);
          }
        }
      }
    }
    else if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) &&
             ((bRam000000010b62eba0 - 1 < 2 ||
              ((bRam000000010b62eba0 != 0 &&
               (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                  (&
                                   __ZN19codex_network_proxy6socks517handle_socks5_tcp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha16dcc176a1af816E
                                  ), cVar5 != '\0')))))) &&
            (uVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (
                               ___ZN19codex_network_proxy6socks517handle_socks5_tcp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha16dcc176a1af816E
                               ), (uVar7 & 1) != 0)) {
      auVar18 = __ZN3std4time7Instant7elapsed17hd8a84ef162118389E(unaff_x19 + 0xa38);
      auVar17._8_8_ = 0;
      auVar17._0_8_ = auVar18._0_8_;
      lVar11 = SUB168(auVar17 * ZEXT816(1000),8);
      uVar9 = auVar18._0_8_ * 1000;
      uVar7 = (auVar18._8_8_ & 0xffffffff) / 1000000;
      if (CARRY8(uVar9,uVar7)) {
        lVar11 = lVar11 + 1;
      }
      *(ulong *)(unaff_x29 + -0x80) = uVar9 + uVar7;
      *(long *)(unaff_x29 + -0x78) = lVar11;
      in_stack_000001c0 = unaff_x19 + 0xf8;
      in_stack_000001c8 = &DAT_10112965c;
      in_stack_000001d0 = unaff_x19 + 0x1f8;
      in_stack_000001d8 =
           &
           __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h0a78be7af221127fE
      ;
      in_stack_000001e0 = (undefined1 *)(unaff_x29 + -0x80);
      in_stack_000001e8 =
           &
           __ZN4core3fmt3num53__LT_impl_u20_core__fmt__Display_u20_for_u20_u128_GT_3fmt17hf4dcab81a00cc2c7E
      ;
      FUN_100b0ca04(&stack0x00000280);
    }
    else {
      lVar11 = 
      ___ZN19codex_network_proxy6socks517handle_socks5_tcp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha16dcc176a1af816E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uVar12 = *(undefined8 *)
                  (
                  ___ZN19codex_network_proxy6socks517handle_socks5_tcp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha16dcc176a1af816E
                  + 0x20);
        uVar13 = *(undefined8 *)
                  (
                  ___ZN19codex_network_proxy6socks517handle_socks5_tcp28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha16dcc176a1af816E
                  + 0x28);
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000400);
        if (iVar6 != 0) {
          __ZN3std4time7Instant7elapsed17hd8a84ef162118389E(unaff_x19 + 0xa38);
          in_stack_000001c0 = unaff_x19 + 0xf8;
          in_stack_000001c8 = &DAT_10112965c;
          in_stack_000001d0 = unaff_x19 + 0x1f8;
          in_stack_000001d8 =
               &
               __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h0a78be7af221127fE
          ;
          in_stack_000001e0 = &stack0x00000380;
          in_stack_000001e8 =
               &
               __ZN4core3fmt3num53__LT_impl_u20_core__fmt__Display_u20_for_u20_u128_GT_3fmt17hf4dcab81a00cc2c7E
          ;
          *(undefined8 *)(unaff_x29 + -0x78) = uVar12;
          *(undefined8 *)(unaff_x29 + -0x80) = 3;
          *(undefined8 *)(unaff_x29 + -0x70) = uVar13;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar11,puVar2,puVar1,unaff_x29 + -0x80,&stack0x00000280);
        }
      }
    }
    lVar11 = lStack0000000000000110;
    puVar1 = puStack0000000000000108;
    uVar12 = *(undefined8 *)(unaff_x26 + 0x90);
    uVar16 = *(undefined8 *)(unaff_x26 + 0xa8);
    uVar13 = *(undefined8 *)(unaff_x26 + 0xa0);
    *(undefined8 *)(unaff_x29 + -0xb8) = *(undefined8 *)(unaff_x26 + 0x98);
    *(undefined8 *)(unaff_x29 + -0xc0) = uVar12;
    *(undefined8 *)(unaff_x29 + -0xa8) = uVar16;
    *(undefined8 *)(unaff_x29 + -0xb0) = uVar13;
    uVar12 = *(undefined8 *)(unaff_x26 + 0xb0);
    *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x26 + 0xb8);
    *(undefined8 *)(unaff_x29 + -0xa0) = uVar12;
    *(undefined8 *)(unaff_x29 + -0x90) = in_stack_00000188;
    uVar12 = *(undefined8 *)(unaff_x26 + 0x50);
    uVar16 = *(undefined8 *)(unaff_x26 + 0x68);
    uVar13 = *(undefined8 *)(unaff_x26 + 0x60);
    *(undefined8 *)(unaff_x29 + -0xf8) = *(undefined8 *)(unaff_x26 + 0x58);
    *(undefined8 *)(unaff_x29 + -0x100) = uVar12;
    *(undefined8 *)(unaff_x29 + -0xe8) = uVar16;
    *(undefined8 *)(unaff_x29 + -0xf0) = uVar13;
    uVar12 = *(undefined8 *)(unaff_x26 + 0x70);
    uVar16 = *(undefined8 *)(unaff_x26 + 0x88);
    uVar13 = *(undefined8 *)(unaff_x26 + 0x80);
    *(undefined8 *)(unaff_x29 + -0xd8) = *(undefined8 *)(unaff_x26 + 0x78);
    *(undefined8 *)(unaff_x29 + -0xe0) = uVar12;
    *(undefined8 *)(unaff_x29 + -200) = uVar16;
    *(undefined8 *)(unaff_x29 + -0xd0) = uVar13;
    FUN_100e43948(unaff_x19 + 0x158);
    if ((*(long *)(unaff_x19 + 0x110) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x110) != 0)
       ) {
      _free(*(undefined8 *)(unaff_x19 + 0x118));
    }
    if (*(long *)(unaff_x19 + 0xf8) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x100));
    }
    lVar4 = **(long **)(unaff_x19 + 0xf0);
    **(long **)(unaff_x19 + 0xf0) = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h10f445fb86fd931aE();
    }
    plVar10 = *(long **)(unaff_x19 + 0xe0);
    if (plVar10 != (long *)0x0) {
      lVar4 = *plVar10;
      *plVar10 = lVar4 + -1;
      LORelease();
      if (lVar4 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1eab458e7200fb96E();
      }
    }
    if (*(char *)(unaff_x19 + 0xd0) != '\0') {
      lVar4 = **(long **)(unaff_x19 + 0xd8);
      **(long **)(unaff_x19 + 0xd8) = lVar4 + -1;
      LORelease();
      if (lVar4 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h10f445fb86fd931aE();
      }
    }
    lVar4 = *(long *)(unaff_x29 + -0xc0);
    lVar15 = *(long *)(unaff_x29 + -0xa8);
    lVar14 = *(long *)(unaff_x29 + -0xb0);
    unaff_x20[0xc] = *(long *)(unaff_x29 + -0xb8);
    unaff_x20[0xb] = lVar4;
    unaff_x20[0xe] = lVar15;
    unaff_x20[0xd] = lVar14;
    lVar4 = *(long *)(unaff_x29 + -0xa0);
    unaff_x20[0x10] = *(long *)(unaff_x29 + -0x98);
    unaff_x20[0xf] = lVar4;
    lVar4 = *(long *)(unaff_x29 + -0x100);
    lVar15 = *(long *)(unaff_x29 + -0xe8);
    lVar14 = *(long *)(unaff_x29 + -0xf0);
    unaff_x20[4] = *(long *)(unaff_x29 + -0xf8);
    unaff_x20[3] = lVar4;
    unaff_x20[6] = lVar15;
    unaff_x20[5] = lVar14;
    lVar4 = *(long *)(unaff_x29 + -0xe0);
    lVar15 = *(long *)(unaff_x29 + -200);
    lVar14 = *(long *)(unaff_x29 + -0xd0);
    unaff_x20[8] = *(long *)(unaff_x29 + -0xd8);
    unaff_x20[7] = lVar4;
    *(undefined1 *)(unaff_x19 + 0x1fc) = 0;
    *unaff_x20 = lVar3;
    unaff_x20[1] = (long)puVar1;
    unaff_x20[2] = lVar11;
    unaff_x20[0x11] = *(long *)(unaff_x29 + -0x90);
    uVar8 = 1;
    unaff_x20[10] = lVar15;
    unaff_x20[9] = lVar14;
  }
  *(undefined1 *)(unaff_x19 + 0x1fa) = uVar8;
  return;
}

