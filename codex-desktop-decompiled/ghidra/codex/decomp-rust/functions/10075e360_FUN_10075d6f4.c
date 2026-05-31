
/* WARNING: Removing unreachable block (ram,0x00010075e330) */
/* WARNING: Removing unreachable block (ram,0x00010075d934) */
/* WARNING: Removing unreachable block (ram,0x00010075d938) */
/* WARNING: Removing unreachable block (ram,0x00010075e334) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10075d6f4(undefined *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined1 *puVar8;
  long lVar9;
  char cVar10;
  int iVar11;
  ulong uVar12;
  long *plVar13;
  undefined1 uVar14;
  code *pcVar15;
  ulong uVar16;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x22;
  long lVar17;
  long *unaff_x23;
  undefined8 uVar18;
  undefined *puVar19;
  long *unaff_x24;
  undefined *puVar20;
  undefined8 *puVar21;
  long *plVar22;
  long lVar23;
  long unaff_x29;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [12];
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  int iStack0000000000000030;
  undefined *puStack0000000000000038;
  undefined1 *puStack0000000000000040;
  undefined *puStack0000000000000048;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  char *in_stack_00000080;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
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
  long *in_stack_000005a0;
  long in_stack_000005a8;
  long in_stack_000005b0;
  long in_stack_000005b8;
  long in_stack_000005c0;
  long in_stack_000005c8;
  long in_stack_000005d0;
  long in_stack_000005d8;
  long in_stack_000005e0;
  long in_stack_000005e8;
  long in_stack_000005f0;
  long in_stack_000005f8;
  long in_stack_00000600;
  long in_stack_00000608;
  long in_stack_00000610;
  
  puStack0000000000000038 = &stack0x00000440;
  _iStack0000000000000030 = 1;
  puStack0000000000000040 = (undefined1 *)0x1;
  *(undefined8 *)(unaff_x29 + -0xd8) = in_stack_00000008;
  *(undefined8 *)(unaff_x29 + -0xe0) = in_stack_00000000;
  *(undefined8 *)(unaff_x29 + -0xd0) = in_stack_00000010;
  puStack0000000000000048 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  if (*unaff_x24 != 2) {
    *(undefined1 *)(unaff_x19 + 0x31a) = 0;
    FUN_1016e8d60(unaff_x19 + 0x168,&stack0x000002e0);
  }
  FUN_100f178d8(unaff_x19 + 0x2b0,unaff_x19 + 0x180);
  auVar40 = func_0x000106032954(8);
  *(undefined1 (*) [12])(unaff_x19 + 0x308) = auVar40;
  *(undefined1 *)(unaff_x19 + 0x31b) = 0;
  lVar28 = unaff_x23[0x11];
  lVar24 = unaff_x23[0x10];
  lVar29 = unaff_x23[9];
  lVar25 = unaff_x23[8];
  lVar35 = unaff_x23[0xb];
  lVar32 = unaff_x23[10];
  lVar30 = unaff_x23[0xd];
  lVar26 = unaff_x23[0xc];
  lVar36 = unaff_x23[0xf];
  lVar33 = unaff_x23[0xe];
  plVar13 = (long *)unaff_x23[1];
  lVar17 = *unaff_x23;
  puVar19 = (undefined *)unaff_x23[2];
  lVar31 = unaff_x23[5];
  lVar9 = unaff_x23[4];
  lVar37 = unaff_x23[7];
  lVar34 = unaff_x23[6];
  auVar38 = (**(code **)(*(long *)(unaff_x22 + 0xf8) + 0x18))
                      (*(long *)(unaff_x22 + 0xf0) +
                       (*(long *)(*(long *)(unaff_x22 + 0xf8) + 0x10) - 1U & 0xfffffffffffffff0) +
                       0x10,&stack0x000002e0);
  *(undefined1 (*) [16])(unaff_x19 + 800) = auVar38;
  (**(code **)(auVar38._8_8_ + 0x18))(&stack0x000002e0);
  if (lVar17 == 3) {
    *unaff_x20 = 4;
    uVar14 = 3;
    goto LAB_10075eb80;
  }
  _memcpy(&stack0x00000198,&stack0x000002f8,0x148);
  uVar18 = *(undefined8 *)(unaff_x19 + 800);
  puVar21 = *(undefined8 **)(unaff_x19 + 0x328);
  pcVar15 = (code *)*puVar21;
  if (pcVar15 != (code *)0x0) {
    (*pcVar15)(uVar18);
  }
  if (puVar21[1] != 0) {
    _free(uVar18);
  }
  if (lVar17 == 2) {
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
       (((bRam000000010b62e618 - 1 < 2 ||
         ((bRam000000010b62e618 != 0 &&
          (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&
                               __ZN139__LT_codex_network_proxy__upstream__UpstreamClient_u20_as_u20_rama_core__service__svc__Service_LT_rama_http_types__request__Request_GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbc3c09528cf78c1bE
                              ), cVar10 != '\0')))) &&
        (uVar12 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (
                            ___ZN139__LT_codex_network_proxy__upstream__UpstreamClient_u20_as_u20_rama_core__service__svc__Service_LT_rama_http_types__request__Request_GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbc3c09528cf78c1bE
                            ), (uVar12 & 1) != 0)))) {
      func_0x000106032954(8);
      uVar6 = *(undefined4 *)(unaff_x19 + 0x310);
      *(undefined8 *)(unaff_x29 + -0xe0) = *(undefined8 *)(unaff_x19 + 0x308);
      *(undefined4 *)(unaff_x29 + -0xd8) = uVar6;
      func_0x000106032878(&stack0x000002e0,&stack0x00000440,unaff_x29 + -0xe0);
      *(undefined8 *)(unaff_x29 + -0x80) = 0;
      *(undefined8 *)(unaff_x29 + -0x78) = 0;
      *(long *)(unaff_x29 + -0xe0) = unaff_x19 + 0x248;
      *(undefined **)(unaff_x29 + -0xd8) = &DAT_10112965c;
      *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0x80;
      *(undefined **)(unaff_x29 + -200) =
           &
           __ZN4core3fmt3num53__LT_impl_u20_core__fmt__Display_u20_for_u20_u128_GT_3fmt17hf4dcab81a00cc2c7E
      ;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN139__LT_codex_network_proxy__upstream__UpstreamClient_u20_as_u20_rama_core__service__svc__Service_LT_rama_http_types__request__Request_GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbc3c09528cf78c1bE
                 ,&stack0x00000520);
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puVar20 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar20 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar11 = (**(code **)(puVar20 + 0x18))(puVar2,&stack0x00000440);
        if (iVar11 != 0) {
          *(undefined1 **)(unaff_x29 + -0x70) = &stack0x00000520;
          *(undefined1 *)(unaff_x29 + -0x68) = 1;
          *(long *)(unaff_x29 + -0x100) = unaff_x29 + -0x70;
          *(undefined **)(unaff_x29 + -0xf8) = &DAT_1061c2098;
          (**(code **)(puVar20 + 0x20))(puVar2,&stack0x000002e0);
        }
      }
    }
    else {
      lVar9 = 
      ___ZN139__LT_codex_network_proxy__upstream__UpstreamClient_u20_as_u20_rama_core__service__svc__Service_LT_rama_http_types__request__Request_GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbc3c09528cf78c1bE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puVar20 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar20 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar11 = (**(code **)(puVar20 + 0x18))(puVar2,&stack0x00000488);
        lVar31 = 
        ___ZN139__LT_codex_network_proxy__upstream__UpstreamClient_u20_as_u20_rama_core__service__svc__Service_LT_rama_http_types__request__Request_GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbc3c09528cf78c1bE
        ;
        if (iVar11 != 0) {
          __ZN3std4time7Instant7elapsed17hd8a84ef162118389E(unaff_x19 + 0x308);
          *(char **)(unaff_x29 + -0x100) = s__HTTP_upstream_connection_failed_108ac6709;
          *(undefined1 **)(unaff_x29 + -0xf8) = &stack0x000002e0;
          *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x100;
          *(undefined **)(unaff_x29 + -0x68) = &UNK_10b208fd0;
          *(undefined8 *)(unaff_x29 + -0xe0) = 1;
          *(long *)(unaff_x29 + -0xd8) = unaff_x29 + -0x70;
          *(undefined8 *)(unaff_x29 + -0xd0) = 1;
          *(long *)(unaff_x29 + -200) = lVar31 + 0x30;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar9,puVar2,puVar20,&stack0x00000520,unaff_x29 + -0xe0);
        }
      }
    }
    FUN_100dd512c(unaff_x19 + 0x2b0);
    *(undefined1 *)(unaff_x19 + 0x31a) = 0;
    if (*(long *)(unaff_x19 + 0x248) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x250));
    }
    if (*(short *)(unaff_x19 + 0x238) != 2) {
      if ((5 < *(byte *)(unaff_x19 + 0x208) - 0x1a) && (0x18 < *(byte *)(unaff_x19 + 0x208))) {
        lVar9 = **(long **)(unaff_x19 + 0x210);
        **(long **)(unaff_x19 + 0x210) = lVar9 + -1;
        LORelease();
        if (lVar9 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x210);
        }
      }
      if ((*(byte *)(unaff_x19 + 0x220) != 0x1a) && (0x18 < *(byte *)(unaff_x19 + 0x220))) {
        lVar9 = **(long **)(unaff_x19 + 0x228);
        **(long **)(unaff_x19 + 0x228) = lVar9 + -1;
        LORelease();
        if (lVar9 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x228);
        }
      }
    }
    plVar22 = (long *)0x3;
  }
  else {
    _memcpy(&stack0x000002f8,&stack0x00000198,0x148);
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) &&
       (((bRam000000010b62e600 - 1 < 2 ||
         ((bRam000000010b62e600 != 0 &&
          (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&
                               __ZN139__LT_codex_network_proxy__upstream__UpstreamClient_u20_as_u20_rama_core__service__svc__Service_LT_rama_http_types__request__Request_GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6ddfcff4439c6755E
                              ), cVar10 != '\0')))) &&
        (uVar12 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (
                            ___ZN139__LT_codex_network_proxy__upstream__UpstreamClient_u20_as_u20_rama_core__service__svc__Service_LT_rama_http_types__request__Request_GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6ddfcff4439c6755E
                            ), (uVar12 & 1) != 0)))) {
      auVar40 = func_0x000106032954(8);
      *(undefined1 (*) [12])(unaff_x29 + -0x100) = auVar40;
      func_0x000106032878(unaff_x29 + -0xe0,unaff_x29 + -0x100,&stack0x00000520);
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN139__LT_codex_network_proxy__upstream__UpstreamClient_u20_as_u20_rama_core__service__svc__Service_LT_rama_http_types__request__Request_GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6ddfcff4439c6755E
                 ,&stack0x00000440);
      lVar17 = 
      ___ZN139__LT_codex_network_proxy__upstream__UpstreamClient_u20_as_u20_rama_core__service__svc__Service_LT_rama_http_types__request__Request_GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6ddfcff4439c6755E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uVar18 = *(undefined8 *)
                  (
                  ___ZN139__LT_codex_network_proxy__upstream__UpstreamClient_u20_as_u20_rama_core__service__svc__Service_LT_rama_http_types__request__Request_GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6ddfcff4439c6755E
                  + 0x20);
        uVar4 = *(undefined8 *)
                 (
                 ___ZN139__LT_codex_network_proxy__upstream__UpstreamClient_u20_as_u20_rama_core__service__svc__Service_LT_rama_http_types__request__Request_GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6ddfcff4439c6755E
                 + 0x28);
        *(undefined8 *)(unaff_x29 + -0x100) = 3;
        *(undefined8 *)(unaff_x29 + -0xf8) = uVar18;
        *(undefined8 *)(unaff_x29 + -0xf0) = uVar4;
        puVar19 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar19 = &UNK_10b3c24c8;
        }
        puVar20 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar20 = &UNK_109adfc03;
        }
        iVar11 = (**(code **)(puVar19 + 0x18))(puVar20,unaff_x29 + -0x100);
        if (iVar11 != 0) {
          lVar23 = *(long *)(lVar17 + 0x60);
          uVar4 = *(undefined8 *)(lVar17 + 0x68);
          lVar27 = *(long *)(lVar17 + 0x50);
          uVar5 = *(undefined8 *)(lVar17 + 0x58);
          uVar18 = 1;
          if (lVar27 == 0) {
            uVar18 = 2;
          }
          uVar6 = *(undefined4 *)(lVar17 + 8);
          uVar3 = *(undefined4 *)(lVar17 + 0xc);
          *(undefined1 **)(unaff_x29 + -0x80) = &stack0x00000440;
          *(undefined1 *)(unaff_x29 + -0x78) = 1;
          *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x80;
          *(undefined **)(unaff_x29 + -0x68) = &DAT_1061c2098;
          uVar1 = 1;
          if (lVar23 == 0) {
            uVar1 = 2;
          }
          *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0xf8);
          *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x100);
          *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0xf0);
          *(char **)(unaff_x29 + -0x90) = s__108b39f4f;
          *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x70;
          *(undefined8 *)(unaff_x29 + -0xe0) = uVar18;
          *(long *)(unaff_x29 + -0xd8) = lVar27;
          *(undefined8 *)(unaff_x29 + -0xd0) = uVar5;
          *(undefined8 *)(unaff_x29 + -200) = uVar1;
          *(long *)(unaff_x29 + -0xc0) = lVar23;
          *(undefined8 *)(unaff_x29 + -0xb8) = uVar4;
          *(undefined4 *)(unaff_x29 + -0x98) = uVar6;
          *(undefined4 *)(unaff_x29 + -0x94) = uVar3;
          (**(code **)(puVar19 + 0x20))(puVar20,unaff_x29 + -0xe0);
        }
      }
    }
    else {
      lVar17 = 
      ___ZN139__LT_codex_network_proxy__upstream__UpstreamClient_u20_as_u20_rama_core__service__svc__Service_LT_rama_http_types__request__Request_GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6ddfcff4439c6755E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puVar19 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar19 = &UNK_10b3c24c8;
        }
        puVar20 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar20 = &UNK_109adfc03;
        }
        iVar11 = (**(code **)(puVar19 + 0x18))(puVar20,&stack0x00000460);
        if (iVar11 != 0) {
          auVar39 = __ZN3std4time7Instant7elapsed17hd8a84ef162118389E(unaff_x19 + 0x308);
          auVar38._8_8_ = 0;
          auVar38._0_8_ = auVar39._0_8_;
          lVar23 = SUB168(auVar38 * ZEXT816(1000),8);
          uVar16 = auVar39._0_8_ * 1000;
          uVar12 = (auVar39._8_8_ & 0xffffffff) / 1000000;
          if (CARRY8(uVar16,uVar12)) {
            lVar23 = lVar23 + 1;
          }
          *(ulong *)(unaff_x29 + -0x100) = uVar16 + uVar12;
          *(long *)(unaff_x29 + -0xf8) = lVar23;
          *(long *)(unaff_x29 + -0xe0) = unaff_x19 + 0x248;
          *(undefined **)(unaff_x29 + -0xd8) = &DAT_10112965c;
          *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0x100;
          *(undefined **)(unaff_x29 + -200) =
               &
               __ZN4core3fmt3num53__LT_impl_u20_core__fmt__Display_u20_for_u20_u128_GT_3fmt17hf4dcab81a00cc2c7E
          ;
          *(char **)(unaff_x29 + -0x70) = s__HTTP_upstream_connection_establ_108ac66c8;
          *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0xe0;
          *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x70;
          *(undefined **)(unaff_x29 + -0x78) = &UNK_10b208fd0;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar17,puVar20,puVar19,&stack0x00000440,&stack0x00000520);
        }
      }
    }
    _memcpy(&stack0x00000030,&stack0x000002e0,0x160);
    *(undefined8 *)(unaff_x19 + 0x8a8) = in_stack_00000158;
    *(undefined8 *)(unaff_x19 + 0x8a0) = in_stack_00000150;
    *(undefined8 *)(unaff_x19 + 0x8b8) = in_stack_00000168;
    *(undefined8 *)(unaff_x19 + 0x8b0) = in_stack_00000160;
    *(undefined8 *)(unaff_x19 + 0x8c8) = in_stack_00000178;
    *(undefined8 *)(unaff_x19 + 0x8c0) = in_stack_00000170;
    *(undefined8 *)(unaff_x19 + 0x8d8) = in_stack_00000188;
    *(undefined8 *)(unaff_x19 + 0x8d0) = in_stack_00000180;
    *(undefined8 *)(unaff_x19 + 0x868) = in_stack_00000118;
    *(undefined8 *)(unaff_x19 + 0x860) = in_stack_00000110;
    *(undefined8 *)(unaff_x19 + 0x878) = in_stack_00000128;
    *(undefined8 *)(unaff_x19 + 0x870) = in_stack_00000120;
    *(undefined8 *)(unaff_x19 + 0x888) = in_stack_00000138;
    *(undefined8 *)(unaff_x19 + 0x880) = in_stack_00000130;
    *(undefined8 *)(unaff_x19 + 0x898) = in_stack_00000148;
    *(undefined8 *)(unaff_x19 + 0x890) = in_stack_00000140;
    *(undefined8 *)(unaff_x19 + 0x828) = in_stack_000000d8;
    *(undefined8 *)(unaff_x19 + 0x820) = in_stack_000000d0;
    *(undefined8 *)(unaff_x19 + 0x838) = in_stack_000000e8;
    *(undefined8 *)(unaff_x19 + 0x830) = in_stack_000000e0;
    *(undefined8 *)(unaff_x19 + 0x848) = in_stack_000000f8;
    *(undefined8 *)(unaff_x19 + 0x840) = in_stack_000000f0;
    *(undefined8 *)(unaff_x19 + 0x858) = in_stack_00000108;
    *(undefined8 *)(unaff_x19 + 0x850) = in_stack_00000100;
    *(undefined8 *)(unaff_x19 + 0x7e8) = in_stack_00000098;
    *(undefined8 *)(unaff_x19 + 0x7e0) = in_stack_00000090;
    *(undefined8 *)(unaff_x19 + 0x7f8) = in_stack_000000a8;
    *(undefined8 *)(unaff_x19 + 0x7f0) = in_stack_000000a0;
    *(undefined8 *)(unaff_x19 + 0x808) = in_stack_000000b8;
    *(undefined8 *)(unaff_x19 + 0x800) = in_stack_000000b0;
    *(undefined8 *)(unaff_x19 + 0x818) = in_stack_000000c8;
    *(undefined8 *)(unaff_x19 + 0x810) = in_stack_000000c0;
    *(undefined8 *)(unaff_x19 + 0x7a8) = in_stack_00000058;
    *(long *)(unaff_x19 + 0x7a0) = in_stack_00000050;
    *(undefined8 *)(unaff_x19 + 0x7b8) = in_stack_00000068;
    *(undefined8 *)(unaff_x19 + 0x7b0) = in_stack_00000060;
    *(ulong *)(unaff_x19 + 0x7c8) = CONCAT44(uStack000000000000007c,uStack0000000000000078);
    *(undefined8 *)(unaff_x19 + 0x7c0) = in_stack_00000070;
    *(long *)(unaff_x19 + 0x7d8) = in_stack_00000088;
    *(char **)(unaff_x19 + 2000) = in_stack_00000080;
    *(undefined **)(unaff_x19 + 0x788) = puStack0000000000000038;
    *(long *)(unaff_x19 + 0x780) = _iStack0000000000000030;
    *(undefined1 *)(unaff_x19 + 0x319) = 1;
    puVar19 = *(undefined **)(unaff_x19 + 0x7d8);
    lVar17 = (long)puVar19 << 5;
    *(undefined **)(unaff_x19 + 0x798) = puStack0000000000000048;
    *(undefined1 **)(unaff_x19 + 0x790) = puStack0000000000000040;
    if (puVar19 == (undefined *)0x0) {
      plVar22 = (long *)0x8;
    }
    else {
      puVar21 = *(undefined8 **)(unaff_x19 + 2000);
      plVar22 = (long *)_malloc(lVar17);
      if (plVar22 == (long *)0x0) {
        FUN_107c03c64(8,lVar17);
        goto LAB_10075ecac;
      }
      puVar20 = (undefined *)0x0;
      plVar13 = plVar22 + 2;
      lVar23 = lVar17;
      do {
        if (lVar23 == 0) break;
        auVar38 = (**(code **)(puVar21[1] + 0x30))(*puVar21);
        puVar20 = puVar20 + 1;
        *(undefined1 (*) [16])(plVar13 + -2) = auVar38;
        plVar7 = puVar21 + 3;
        lVar27 = puVar21[2];
        puVar21 = puVar21 + 4;
        plVar13[1] = *plVar7;
        *plVar13 = lVar27;
        lVar23 = lVar23 + -0x20;
        plVar13 = plVar13 + 4;
      } while (puVar19 != puVar20);
    }
    lVar23 = *(long *)(unaff_x19 + 0x850);
    if ((undefined *)(*(long *)(unaff_x19 + 0x840) - lVar23) < puVar19) {
      thunk_FUN_108a2e538(unaff_x19 + 0x840,lVar23,puVar19);
      lVar23 = *(long *)(unaff_x19 + 0x850);
    }
    _memcpy(*(long *)(unaff_x19 + 0x848) + lVar23 * 0x20,plVar22,lVar17);
    *(undefined **)(unaff_x19 + 0x850) = puVar19 + lVar23;
    FUN_105a20ad0(&stack0x000002e0);
    auVar40 = func_0x000106032954(8);
    *(undefined1 (*) [12])(unaff_x19 + 800) = auVar40;
    *(undefined1 *)(unaff_x19 + 0x319) = 0;
    *(undefined8 *)(unaff_x19 + 0x3f8) = *(undefined8 *)(unaff_x19 + 0x8a8);
    *(undefined8 *)(unaff_x19 + 0x3f0) = *(undefined8 *)(unaff_x19 + 0x8a0);
    *(undefined8 *)(unaff_x19 + 0x408) = *(undefined8 *)(unaff_x19 + 0x8b8);
    *(undefined8 *)(unaff_x19 + 0x400) = *(undefined8 *)(unaff_x19 + 0x8b0);
    *(undefined8 *)(unaff_x19 + 0x418) = *(undefined8 *)(unaff_x19 + 0x8c8);
    *(undefined8 *)(unaff_x19 + 0x410) = *(undefined8 *)(unaff_x19 + 0x8c0);
    *(undefined8 *)(unaff_x19 + 0x428) = *(undefined8 *)(unaff_x19 + 0x8d8);
    *(undefined8 *)(unaff_x19 + 0x420) = *(undefined8 *)(unaff_x19 + 0x8d0);
    *(undefined8 *)(unaff_x19 + 0x3b8) = *(undefined8 *)(unaff_x19 + 0x868);
    *(undefined8 *)(unaff_x19 + 0x3b0) = *(undefined8 *)(unaff_x19 + 0x860);
    *(undefined8 *)(unaff_x19 + 0x3c8) = *(undefined8 *)(unaff_x19 + 0x878);
    *(undefined8 *)(unaff_x19 + 0x3c0) = *(undefined8 *)(unaff_x19 + 0x870);
    *(undefined8 *)(unaff_x19 + 0x3d8) = *(undefined8 *)(unaff_x19 + 0x888);
    *(undefined8 *)(unaff_x19 + 0x3d0) = *(undefined8 *)(unaff_x19 + 0x880);
    *(undefined8 *)(unaff_x19 + 1000) = *(undefined8 *)(unaff_x19 + 0x898);
    *(undefined8 *)(unaff_x19 + 0x3e0) = *(undefined8 *)(unaff_x19 + 0x890);
    *(undefined8 *)(unaff_x19 + 0x378) = *(undefined8 *)(unaff_x19 + 0x828);
    *(undefined8 *)(unaff_x19 + 0x370) = *(undefined8 *)(unaff_x19 + 0x820);
    *(undefined8 *)(unaff_x19 + 0x388) = *(undefined8 *)(unaff_x19 + 0x838);
    *(undefined8 *)(unaff_x19 + 0x380) = *(undefined8 *)(unaff_x19 + 0x830);
    *(undefined8 *)(unaff_x19 + 0x398) = *(undefined8 *)(unaff_x19 + 0x848);
    *(undefined8 *)(unaff_x19 + 0x390) = *(undefined8 *)(unaff_x19 + 0x840);
    *(undefined8 *)(unaff_x19 + 0x3a8) = *(undefined8 *)(unaff_x19 + 0x858);
    *(undefined8 *)(unaff_x19 + 0x3a0) = *(undefined8 *)(unaff_x19 + 0x850);
    *(undefined8 *)(unaff_x19 + 0x338) = *(undefined8 *)(unaff_x19 + 0x7e8);
    *(undefined8 *)(unaff_x19 + 0x330) = *(undefined8 *)(unaff_x19 + 0x7e0);
    *(undefined8 *)(unaff_x19 + 0x348) = *(undefined8 *)(unaff_x19 + 0x7f8);
    *(undefined8 *)(unaff_x19 + 0x340) = *(undefined8 *)(unaff_x19 + 0x7f0);
    *(undefined8 *)(unaff_x19 + 0x358) = *(undefined8 *)(unaff_x19 + 0x808);
    *(undefined8 *)(unaff_x19 + 0x350) = *(undefined8 *)(unaff_x19 + 0x800);
    *(undefined8 *)(unaff_x19 + 0x368) = *(undefined8 *)(unaff_x19 + 0x818);
    *(undefined8 *)(unaff_x19 + 0x360) = *(undefined8 *)(unaff_x19 + 0x810);
    *(long *)(unaff_x19 + 0x430) = unaff_x19 + 0x780;
    *(undefined1 *)(unaff_x19 + 0x668) = 0;
    FUN_10086e750(&stack0x000002e0,unaff_x19 + 0x330);
    if (plVar22 == (long *)0x4) {
      uVar14 = 4;
      *unaff_x20 = 4;
      goto LAB_10075eb80;
    }
    FUN_100da2768(unaff_x19 + 0x330);
    if (plVar22 == (long *)0x3) {
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
          ((bRam000000010b62e648 - 1 < 2 ||
           ((bRam000000010b62e648 != 0 &&
            (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN139__LT_codex_network_proxy__upstream__UpstreamClient_u20_as_u20_rama_core__service__svc__Service_LT_rama_http_types__request__Request_GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfd3bfbf8f0a0019fE
                                ), cVar10 != '\0')))))) &&
         (uVar12 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN139__LT_codex_network_proxy__upstream__UpstreamClient_u20_as_u20_rama_core__service__svc__Service_LT_rama_http_types__request__Request_GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfd3bfbf8f0a0019fE
                             ),
         lVar9 = 
         ___ZN139__LT_codex_network_proxy__upstream__UpstreamClient_u20_as_u20_rama_core__service__svc__Service_LT_rama_http_types__request__Request_GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfd3bfbf8f0a0019fE
         , (uVar12 & 1) != 0)) {
        func_0x000106032954(8);
        _iStack0000000000000030 = *(undefined8 *)(unaff_x19 + 800);
        puStack0000000000000038 =
             (undefined *)CONCAT44(puStack0000000000000038._4_4_,*(undefined4 *)(unaff_x19 + 0x328))
        ;
        func_0x000106032878(&stack0x000002e0,&stack0x00000520,&stack0x00000030);
        *(undefined8 *)(unaff_x29 + -0x70) = 0;
        *(undefined8 *)(unaff_x29 + -0x68) = 0;
        _iStack0000000000000030 = unaff_x19 + 0x248;
        puStack0000000000000038 = &DAT_10112965c;
        puStack0000000000000040 = (undefined1 *)(unaff_x29 + -0x70);
        puStack0000000000000048 =
             &
             __ZN4core3fmt3num53__LT_impl_u20_core__fmt__Display_u20_for_u20_u128_GT_3fmt17hf4dcab81a00cc2c7E
        ;
        *(char **)(unaff_x29 + -0x80) = s__HTTP_upstream_response_headers_f_108ac6789;
        *(int **)(unaff_x29 + -0x78) = &stack0x00000030;
        *(undefined8 *)(unaff_x29 + -0xe0) = 1;
        *(undefined1 **)(unaff_x29 + -0xd8) = &stack0x00000570;
        *(undefined8 *)(unaff_x29 + -0xd0) = 1;
        *(long *)(unaff_x29 + -200) = lVar9 + 0x30;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN139__LT_codex_network_proxy__upstream__UpstreamClient_u20_as_u20_rama_core__service__svc__Service_LT_rama_http_types__request__Request_GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfd3bfbf8f0a0019fE
                   ,unaff_x29 + -0xe0);
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          puVar20 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar20 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar11 = (**(code **)(puVar20 + 0x18))(puVar2,&stack0x00000520);
          if (iVar11 != 0) {
            *(long *)(unaff_x29 + -0x100) = unaff_x29 + -0xe0;
            *(undefined1 *)(unaff_x29 + -0xf8) = 1;
            (**(code **)(puVar20 + 0x20))(puVar2,&stack0x000002e0);
          }
        }
      }
      else {
        lVar9 = 
        ___ZN139__LT_codex_network_proxy__upstream__UpstreamClient_u20_as_u20_rama_core__service__svc__Service_LT_rama_http_types__request__Request_GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfd3bfbf8f0a0019fE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uVar18 = *(undefined8 *)
                    (
                    ___ZN139__LT_codex_network_proxy__upstream__UpstreamClient_u20_as_u20_rama_core__service__svc__Service_LT_rama_http_types__request__Request_GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfd3bfbf8f0a0019fE
                    + 0x20);
          uVar4 = *(undefined8 *)
                   (
                   ___ZN139__LT_codex_network_proxy__upstream__UpstreamClient_u20_as_u20_rama_core__service__svc__Service_LT_rama_http_types__request__Request_GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfd3bfbf8f0a0019fE
                   + 0x28);
          puVar20 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar20 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar11 = (**(code **)(puVar20 + 0x18))(puVar2,&stack0x00000588);
          lVar31 = 
          ___ZN139__LT_codex_network_proxy__upstream__UpstreamClient_u20_as_u20_rama_core__service__svc__Service_LT_rama_http_types__request__Request_GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfd3bfbf8f0a0019fE
          ;
          if (iVar11 != 0) {
            __ZN3std4time7Instant7elapsed17hd8a84ef162118389E(unaff_x19 + 800);
            puStack0000000000000048 = (undefined *)(lVar31 + 0x30);
            *(undefined1 **)(unaff_x29 + -0x100) = &stack0x00000440;
            *(undefined **)(unaff_x29 + -0xf8) = &UNK_10b208fd0;
            puStack0000000000000038 = (undefined *)(unaff_x29 + -0x100);
            _iStack0000000000000030 = 1;
            puStack0000000000000040 = (undefined1 *)0x1;
            *(undefined8 *)(unaff_x29 + -0xd8) = uVar18;
            *(undefined8 *)(unaff_x29 + -0xe0) = 2;
            *(undefined8 *)(unaff_x29 + -0xd0) = uVar4;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar9,puVar2,puVar20,unaff_x29 + -0xe0,&stack0x00000030);
          }
        }
      }
      *(undefined8 *)(unaff_x29 + -0xe0) = 3;
      *(undefined **)(unaff_x29 + -0xd8) = puVar19;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000030,s_http_request_failure_for_uri__108ac67cb,&stack0x000002e0);
      puVar8 = puStack0000000000000040;
      puVar20 = puStack0000000000000038;
      lVar9 = _iStack0000000000000030;
      plVar13 = (long *)_malloc(0x28);
      if (plVar13 == (long *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x28);
LAB_10075ecac:
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x10075ecb0);
        (*pcVar15)();
      }
      plVar13[1] = (long)puVar20;
      *plVar13 = lVar9;
      plVar13[3] = 3;
      plVar13[2] = (long)puVar8;
      plVar13[4] = (long)puVar19;
      puVar19 = &UNK_10b2240d0;
      lVar9 = in_stack_000005a8;
      lVar31 = in_stack_000005b0;
      lVar34 = in_stack_000005b8;
      lVar37 = in_stack_000005c0;
      lVar25 = in_stack_000005c8;
      lVar29 = in_stack_000005d0;
      lVar32 = in_stack_000005d8;
      lVar35 = in_stack_000005e0;
      lVar26 = in_stack_000005e8;
      lVar30 = in_stack_000005f0;
      lVar33 = in_stack_000005f8;
      lVar36 = in_stack_00000600;
      lVar24 = in_stack_00000608;
      lVar28 = in_stack_00000610;
      if (*(long *)(unaff_x19 + 0x780) != 0) goto LAB_10075ea88;
LAB_10075e8ec:
      FUN_100d886e8(unaff_x19 + 0x7b0);
      in_stack_000005a8 = lVar9;
      in_stack_000005b0 = lVar31;
      in_stack_000005b8 = lVar34;
      in_stack_000005c0 = lVar37;
      in_stack_000005c8 = lVar25;
      in_stack_000005d0 = lVar29;
      in_stack_000005d8 = lVar32;
      in_stack_000005e0 = lVar35;
      in_stack_000005e8 = lVar26;
      in_stack_000005f0 = lVar30;
      in_stack_000005f8 = lVar33;
      in_stack_00000600 = lVar36;
      in_stack_00000608 = lVar24;
      in_stack_00000610 = lVar28;
    }
    else {
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) &&
          ((bRam000000010b62e5d0 - 1 < 2 ||
           ((bRam000000010b62e5d0 != 0 &&
            (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN139__LT_codex_network_proxy__upstream__UpstreamClient_u20_as_u20_rama_core__service__svc__Service_LT_rama_http_types__request__Request_GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h27f204758bc779b5E
                                ), cVar10 != '\0')))))) &&
         (uVar12 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN139__LT_codex_network_proxy__upstream__UpstreamClient_u20_as_u20_rama_core__service__svc__Service_LT_rama_http_types__request__Request_GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h27f204758bc779b5E
                             ), (uVar12 & 1) != 0)) {
        func_0x000106032954(8);
        uVar6 = *(undefined4 *)(unaff_x19 + 0x328);
        *(undefined8 *)(unaff_x29 + -0xe0) = *(undefined8 *)(unaff_x19 + 800);
        *(undefined4 *)(unaff_x29 + -0xd8) = uVar6;
        func_0x000106032878(&stack0x00000030,&stack0x00000440,unaff_x29 + -0xe0);
        auVar39._8_8_ = 0;
        auVar39._0_8_ = puStack0000000000000038;
        lVar17 = SUB168(auVar39 * ZEXT816(1000),8);
        uVar12 = ((ulong)puStack0000000000000040 & 0xffffffff) / 1000000;
        if (CARRY8((long)puStack0000000000000038 * 1000,uVar12)) {
          lVar17 = lVar17 + 1;
        }
        lVar23 = 0;
        if (iStack0000000000000030 == 0) {
          lVar23 = lVar17;
        }
        lVar17 = 0;
        if (iStack0000000000000030 == 0) {
          lVar17 = (long)puStack0000000000000038 * 1000 + uVar12;
        }
        *(long *)(unaff_x29 + -0x80) = lVar17;
        *(long *)(unaff_x29 + -0x78) = lVar23;
        *(long *)(unaff_x29 + -0xe0) = unaff_x19 + 0x248;
        *(undefined **)(unaff_x29 + -0xd8) = &DAT_10112965c;
        *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0x80;
        *(undefined **)(unaff_x29 + -200) =
             &
             __ZN4core3fmt3num53__LT_impl_u20_core__fmt__Display_u20_for_u20_u128_GT_3fmt17hf4dcab81a00cc2c7E
        ;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN139__LT_codex_network_proxy__upstream__UpstreamClient_u20_as_u20_rama_core__service__svc__Service_LT_rama_http_types__request__Request_GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h27f204758bc779b5E
                   ,&stack0x00000520);
        lVar17 = 
        ___ZN139__LT_codex_network_proxy__upstream__UpstreamClient_u20_as_u20_rama_core__service__svc__Service_LT_rama_http_types__request__Request_GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h27f204758bc779b5E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uVar18 = *(undefined8 *)
                    (
                    ___ZN139__LT_codex_network_proxy__upstream__UpstreamClient_u20_as_u20_rama_core__service__svc__Service_LT_rama_http_types__request__Request_GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h27f204758bc779b5E
                    + 0x20);
          uVar4 = *(undefined8 *)
                   (
                   ___ZN139__LT_codex_network_proxy__upstream__UpstreamClient_u20_as_u20_rama_core__service__svc__Service_LT_rama_http_types__request__Request_GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h27f204758bc779b5E
                   + 0x28);
          puVar20 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar20 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar11 = (**(code **)(puVar20 + 0x18))(puVar2,&stack0x00000440);
          if (iVar11 != 0) {
            in_stack_00000050 = *(long *)(lVar17 + 0x60);
            in_stack_00000058 = *(undefined8 *)(lVar17 + 0x68);
            puStack0000000000000038 = *(undefined **)(lVar17 + 0x50);
            puStack0000000000000040 = *(undefined1 **)(lVar17 + 0x58);
            _iStack0000000000000030 = 1;
            if (puStack0000000000000038 == (undefined *)0x0) {
              _iStack0000000000000030 = 2;
            }
            uStack0000000000000078 = *(undefined4 *)(lVar17 + 8);
            uStack000000000000007c = *(undefined4 *)(lVar17 + 0xc);
            *(undefined1 **)(unaff_x29 + -0x70) = &stack0x00000520;
            *(undefined1 *)(unaff_x29 + -0x68) = 1;
            *(long *)(unaff_x29 + -0x100) = unaff_x29 + -0x70;
            *(undefined **)(unaff_x29 + -0xf8) = &DAT_1061c2098;
            puStack0000000000000048 = (undefined *)0x1;
            if (in_stack_00000050 == 0) {
              puStack0000000000000048 = (undefined *)0x2;
            }
            in_stack_00000060 = 3;
            in_stack_00000088 = unaff_x29 + -0x100;
            in_stack_00000080 = s__108b39f4f;
            in_stack_00000068 = uVar18;
            in_stack_00000070 = uVar4;
            (**(code **)(puVar20 + 0x20))(puVar2,&stack0x00000030);
          }
        }
      }
      else {
        lVar17 = 
        ___ZN139__LT_codex_network_proxy__upstream__UpstreamClient_u20_as_u20_rama_core__service__svc__Service_LT_rama_http_types__request__Request_GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h27f204758bc779b5E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          puVar20 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar20 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar11 = (**(code **)(puVar20 + 0x18))(puVar2,&stack0x00000548);
          lVar23 = 
          ___ZN139__LT_codex_network_proxy__upstream__UpstreamClient_u20_as_u20_rama_core__service__svc__Service_LT_rama_http_types__request__Request_GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h27f204758bc779b5E
          ;
          if (iVar11 != 0) {
            __ZN3std4time7Instant7elapsed17hd8a84ef162118389E(unaff_x19 + 800);
            _iStack0000000000000030 = unaff_x19 + 0x248;
            puStack0000000000000038 = &DAT_10112965c;
            puStack0000000000000040 = &stack0x00000440;
            puStack0000000000000048 =
                 &
                 __ZN4core3fmt3num53__LT_impl_u20_core__fmt__Display_u20_for_u20_u128_GT_3fmt17hf4dcab81a00cc2c7E
            ;
            *(char **)(unaff_x29 + -0x100) = s_0HTTP_upstream_response_headers_r_108ac6745;
            *(int **)(unaff_x29 + -0xf8) = &stack0x00000030;
            *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x100;
            *(undefined **)(unaff_x29 + -0x68) = &UNK_10b208fd0;
            *(undefined8 *)(unaff_x29 + -0xe0) = 1;
            *(long *)(unaff_x29 + -0xd8) = unaff_x29 + -0x70;
            *(undefined8 *)(unaff_x29 + -0xd0) = 1;
            *(long *)(unaff_x29 + -200) = lVar23 + 0x30;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar17,puVar2,puVar20,&stack0x00000520,unaff_x29 + -0xe0);
          }
        }
      }
      plVar13 = plVar22;
      in_stack_000005a0 = plVar22;
      if (*(long *)(unaff_x19 + 0x780) == 0) goto LAB_10075e8ec;
LAB_10075ea88:
      FUN_100cabf98(unaff_x19 + 0x788);
      in_stack_000005a8 = lVar9;
      in_stack_000005b0 = lVar31;
      in_stack_000005b8 = lVar34;
      in_stack_000005c0 = lVar37;
      in_stack_000005c8 = lVar25;
      in_stack_000005d0 = lVar29;
      in_stack_000005d8 = lVar32;
      in_stack_000005e0 = lVar35;
      in_stack_000005e8 = lVar26;
      in_stack_000005f0 = lVar30;
      in_stack_000005f8 = lVar33;
      in_stack_00000600 = lVar36;
      in_stack_00000608 = lVar24;
      in_stack_00000610 = lVar28;
    }
    func_0x000100e3c8d4(unaff_x19 + 0x7c8);
    *(undefined1 *)(unaff_x19 + 0x319) = 0;
    FUN_100dd512c(unaff_x19 + 0x2b0);
    *(undefined1 *)(unaff_x19 + 0x31a) = 0;
    if (*(long *)(unaff_x19 + 0x248) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x250));
    }
    if (*(short *)(unaff_x19 + 0x238) != 2) {
      if ((5 < *(byte *)(unaff_x19 + 0x208) - 0x1a) && (0x18 < *(byte *)(unaff_x19 + 0x208))) {
        lVar9 = **(long **)(unaff_x19 + 0x210);
        **(long **)(unaff_x19 + 0x210) = lVar9 + -1;
        LORelease();
        if (lVar9 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x210);
        }
      }
      if ((*(byte *)(unaff_x19 + 0x220) != 0x1a) && (0x18 < *(byte *)(unaff_x19 + 0x220))) {
        lVar9 = **(long **)(unaff_x19 + 0x228);
        **(long **)(unaff_x19 + 0x228) = lVar9 + -1;
        LORelease();
        if (lVar9 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x228);
        }
      }
    }
  }
  unaff_x20[0xc] = in_stack_000005e8;
  unaff_x20[0xb] = in_stack_000005e0;
  unaff_x20[0xe] = in_stack_000005f8;
  unaff_x20[0xd] = in_stack_000005f0;
  unaff_x20[0x10] = in_stack_00000608;
  unaff_x20[0xf] = in_stack_00000600;
  unaff_x20[4] = in_stack_000005a8;
  unaff_x20[3] = in_stack_000005a0;
  unaff_x20[6] = in_stack_000005b8;
  unaff_x20[5] = in_stack_000005b0;
  unaff_x20[8] = in_stack_000005c8;
  unaff_x20[7] = in_stack_000005c0;
  *(undefined1 *)(unaff_x19 + 0x31b) = 0;
  *unaff_x20 = plVar22;
  unaff_x20[1] = plVar13;
  unaff_x20[2] = puVar19;
  unaff_x20[0x11] = in_stack_00000610;
  uVar14 = 1;
  unaff_x20[10] = in_stack_000005d8;
  unaff_x20[9] = in_stack_000005d0;
LAB_10075eb80:
  *(undefined1 *)(unaff_x19 + 0x318) = uVar14;
  return;
}

