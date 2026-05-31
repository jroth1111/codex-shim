
/* WARNING: Possible PIC construction at 0x000100818eb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100819200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100819bfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100819204) */
/* WARNING: Removing unreachable block (ram,0x000100818ebc) */
/* WARNING: Removing unreachable block (ram,0x000100819c00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008189ac(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  undefined8 extraout_x1;
  long lVar16;
  long extraout_x1_00;
  long extraout_x1_01;
  undefined *puVar17;
  undefined *puVar18;
  ulong uVar19;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 extraout_x9_01;
  undefined8 extraout_x9_02;
  undefined *puVar20;
  uint uVar21;
  ulong extraout_x15;
  ulong extraout_x15_00;
  ulong extraout_x15_01;
  ulong extraout_x15_02;
  ulong extraout_x15_03;
  ulong extraout_x15_04;
  ulong extraout_x15_05;
  ulong extraout_x15_06;
  ulong extraout_x15_07;
  ulong extraout_x15_08;
  ulong extraout_x15_09;
  ulong extraout_x15_10;
  ulong extraout_x15_11;
  ulong extraout_x15_12;
  ulong extraout_x15_13;
  ulong extraout_x15_14;
  ulong extraout_x15_15;
  ulong extraout_x15_16;
  ulong extraout_x15_17;
  undefined8 uVar22;
  long lVar23;
  long unaff_x21;
  undefined *unaff_x22;
  long *plVar24;
  undefined *unaff_x23;
  long lVar25;
  undefined8 unaff_x25;
  undefined8 uVar26;
  undefined8 unaff_x26;
  ulong uVar27;
  long *unaff_x28;
  undefined1 *unaff_x29;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  long *in_stack_00000000;
  ulong in_stack_00000008;
  undefined *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_000001a0;
  
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E
            (s_Hinternal_error__entered_unreach_108ac8b8e,unaff_x29 + -0xe0,&UNK_10b223540);
  puVar17 = (undefined *)0x19;
  thunk_FUN_108855060(unaff_x21 + 0x10,extraout_x1,0x19,1,1);
  lVar16 = *(long *)(unaff_x21 + 0x20);
  puVar11 = (undefined8 *)(*(long *)(unaff_x21 + 0x18) + lVar16);
  puVar11[1] = 0x6e6f432030303120;
  *puVar11 = 0x312e312f50545448;
  *(undefined8 *)((long)puVar11 + 0x11) = 0xa0d0a0d65756e69;
  *(undefined8 *)((long)puVar11 + 9) = 0x746e6f4320303031;
  *(long *)(unaff_x21 + 0x20) = lVar16 + 0x19;
  uVar27 = *(ulong *)(unaff_x21 + 0xd0);
  lVar16 = uVar27 - 2;
  if (uVar27 < 2) {
    lVar16 = 1;
  }
  if ((lVar16 == 0) || (lVar16 != 1)) {
    uVar28 = *(undefined8 *)(unaff_x21 + 0xd8);
    uVar4 = *(undefined8 *)(unaff_x21 + 0xe0);
    uVar22 = *(undefined8 *)(unaff_x21 + 0xe8);
    uVar10 = *(undefined8 *)(unaff_x21 + 0xf0);
    puVar20 = *(undefined **)(unaff_x21 + 0xf8);
    lVar16 = *(long *)(unaff_x21 + 0x100);
    unaff_x22 = *(undefined **)(unaff_x21 + 0x108);
    puVar17 = *(undefined **)(unaff_x21 + 0x110);
    uVar19 = *(ulong *)(unaff_x21 + 0x118);
    uVar26 = *(undefined8 *)(unaff_x21 + 0x120);
    uVar21 = (uint)*(byte *)(unaff_x21 + 0x128);
    in_stack_000001a0._3_4_ = *(undefined4 *)(unaff_x21 + 300);
    *(undefined4 *)(unaff_x29 + -0x100) = *(undefined4 *)(unaff_x21 + 0x129);
    lVar25 = *unaff_x28;
    plVar24 = in_stack_00000000;
  }
  else {
    uVar21 = (uint)*(byte *)(unaff_x21 + 0x128);
    uVar10 = *(undefined8 *)(unaff_x21 + 0xf0);
    puVar20 = *(undefined **)(unaff_x21 + 0xf8);
    lVar25 = *(long *)(unaff_x21 + 0x100);
    if (lVar25 == 0) {
      lVar16 = 0;
      uVar19 = extraout_x15;
    }
    else {
      in_stack_00000018._4_4_ = (uint)*(byte *)(unaff_x21 + 0x128);
      unaff_x22 = *(undefined **)(unaff_x21 + 0x108);
      if (unaff_x22 == (undefined *)0x0) {
        lVar16 = 1;
      }
      else {
        lVar16 = _malloc(unaff_x22);
        if (lVar16 == 0) {
          uVar10 = func_0x0001087c9084(1,unaff_x22);
          FUN_100e2f01c(unaff_x29 + -0xe0);
          __Unwind_Resume(uVar10);
          uVar28 = 0x100818a70;
          auVar29 = FUN_107c05ccc();
          lVar16 = auVar29._8_8_;
          puVar11 = auVar29._0_8_;
          puVar5 = (undefined1 *)register0x00000008;
          uVar19 = extraout_x15_00;
          do {
            *(long **)(puVar5 + -0x60) = unaff_x28;
            *(ulong *)(puVar5 + -0x58) = uVar27;
            *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
            *(undefined8 *)(puVar5 + -0x48) = unaff_x25;
            *(long *)(puVar5 + -0x40) = lVar25;
            *(undefined **)(puVar5 + -0x38) = unaff_x23;
            *(undefined **)(puVar5 + -0x30) = unaff_x22;
            *(long *)(puVar5 + -0x28) = unaff_x21;
            *(undefined **)(puVar5 + -0x20) = puVar20;
            *(undefined8 *)(puVar5 + -0x18) = uVar10;
            *(undefined1 **)(puVar5 + -0x10) = unaff_x29;
            *(undefined8 *)(puVar5 + -8) = uVar28;
            unaff_x29 = puVar5 + -0x10;
            unaff_x28 = (long *)(lVar16 + 0xf8);
            lVar25 = *unaff_x28;
            if (lVar25 < 2) {
              if (lVar25 != 1) goto LAB_1008196e4;
              puVar18 = puVar17;
              puVar14 = unaff_x23;
              if (*(long *)(lVar16 + 0x178) == -0x7ffffffffffffffd) {
                if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
                    ((bVar8 = bRam000000010b637458, bRam000000010b637458 - 1 < 2 ||
                     ((bRam000000010b637458 != 0 &&
                      (bVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                         (&
                                          __ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h476d256546eea57cE
                                         ), uVar19 = extraout_x15_07, bVar8 != 0)))))) &&
                   (iVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                      (___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h476d256546eea57cE
                                       ,bVar8), uVar19 = extraout_x15_03, iVar9 != 0)) {
                  *(undefined **)(puVar5 + -0x1e8) = &UNK_108cb0cb7;
                  *(undefined8 *)(puVar5 + -0x1e0) = 0x45;
                  *(undefined1 **)(puVar5 + -0x108) = puVar5 + -0x1e8;
                  *(undefined **)(puVar5 + -0x100) = &UNK_10b208fd0;
                  *(undefined8 *)(puVar5 + -0xf0) = 1;
                  *(undefined1 **)(puVar5 + -0xe8) = puVar5 + -0x108;
                  *(undefined8 *)(puVar5 + -0xe0) = 1;
                  *(undefined **)(puVar5 + -0xd8) =
                       ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h476d256546eea57cE
                       + 0x30;
                  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                            (___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h476d256546eea57cE
                             ,puVar5 + -0xf0);
                  puVar20 = 
                  ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h476d256546eea57cE
                  ;
                  uVar19 = extraout_x15_04;
                  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                     (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                    uVar10 = *(undefined8 *)
                              (
                              ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h476d256546eea57cE
                              + 0x20);
                    uVar28 = *(undefined8 *)
                              (
                              ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h476d256546eea57cE
                              + 0x28);
                    *(undefined8 *)(puVar5 + -0x280) = 5;
                    *(undefined8 *)(puVar5 + -0x278) = uVar10;
                    *(undefined8 *)(puVar5 + -0x270) = uVar28;
                    unaff_x23 = puRam000000010b634c20;
                    if (lRam000000010b66fd20 != 2) {
                      unaff_x23 = &UNK_10b3c24c8;
                    }
                    puVar14 = puRam000000010b634c18;
                    if (lRam000000010b66fd20 != 2) {
                      puVar14 = &UNK_109adfc03;
                    }
                    iVar9 = (**(code **)(unaff_x23 + 0x18))(puVar14,puVar5 + -0x280);
                    uVar19 = extraout_x15_05;
                    unaff_x22 = puVar20;
                    if (iVar9 != 0) {
                      puVar18 = unaff_x23;
                      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                                (puVar20,puVar14,unaff_x23,puVar5 + -0x280,puVar5 + -0xf0);
                      uVar19 = extraout_x15_06;
                    }
                  }
                }
                else {
                  puVar20 = 
                  ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h476d256546eea57cE
                  ;
                  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                     (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                    unaff_x23 = &
                                __ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h476d256546eea57cE
                    ;
                    uVar10 = *(undefined8 *)
                              (
                              ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h476d256546eea57cE
                              + 0x20);
                    uVar28 = *(undefined8 *)
                              (
                              ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h476d256546eea57cE
                              + 0x28);
                    *(undefined8 *)(puVar5 + -0x128) = 5;
                    *(undefined8 *)(puVar5 + -0x120) = uVar10;
                    *(undefined8 *)(puVar5 + -0x118) = uVar28;
                    puVar14 = puRam000000010b634c20;
                    if (lRam000000010b66fd20 != 2) {
                      puVar14 = &UNK_10b3c24c8;
                    }
                    unaff_x22 = puRam000000010b634c18;
                    if (lRam000000010b66fd20 != 2) {
                      unaff_x22 = &UNK_109adfc03;
                    }
                    iVar9 = (**(code **)(puVar14 + 0x18))(unaff_x22,puVar5 + -0x128);
                    uVar19 = extraout_x15_01;
                    if (iVar9 != 0) {
                      *(undefined **)(puVar5 + -0x80) = &UNK_108cb0cb7;
                      *(undefined8 *)(puVar5 + -0x78) = 0x45;
                      *(undefined1 **)(puVar5 + -0x90) = puVar5 + -0x80;
                      *(undefined **)(puVar5 + -0x88) = &UNK_10b208fd0;
                      *(undefined8 *)(puVar5 + -0x280) = 1;
                      *(undefined1 **)(puVar5 + -0x278) = puVar5 + -0x90;
                      *(undefined8 *)(puVar5 + -0x270) = 1;
                      *(undefined **)(puVar5 + -0x268) =
                           ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h476d256546eea57cE
                           + 0x30;
                      lVar25 = *(long *)(puVar20 + 0x60);
                      uVar28 = *(undefined8 *)(puVar20 + 0x68);
                      lVar23 = *(long *)(puVar20 + 0x50);
                      uVar22 = *(undefined8 *)(puVar20 + 0x58);
                      uVar10 = 1;
                      if (lVar23 == 0) {
                        uVar10 = 2;
                      }
                      uVar1 = *(undefined4 *)(puVar20 + 8);
                      uVar2 = *(undefined4 *)(puVar20 + 0xc);
                      *(undefined1 **)(puVar5 + -0x108) = puVar5 + -0x280;
                      puVar5[-0x100] = 1;
                      *(undefined1 **)(puVar5 + -0x1e8) = puVar5 + -0x108;
                      *(undefined **)(puVar5 + -0x1e0) = &DAT_1061c2098;
                      uVar4 = 1;
                      if (lVar25 == 0) {
                        uVar4 = 2;
                      }
                      *(undefined8 *)(puVar5 + -0xb8) = *(undefined8 *)(puVar5 + -0x120);
                      *(undefined8 *)(puVar5 + -0xc0) = *(undefined8 *)(puVar5 + -0x128);
                      *(undefined8 *)(puVar5 + -0xb0) = *(undefined8 *)(puVar5 + -0x118);
                      *(char **)(puVar5 + -0xa0) = s__108b39f4f;
                      *(undefined1 **)(puVar5 + -0x98) = puVar5 + -0x1e8;
                      *(undefined8 *)(puVar5 + -0xf0) = uVar10;
                      *(long *)(puVar5 + -0xe8) = lVar23;
                      *(undefined8 *)(puVar5 + -0xe0) = uVar22;
                      *(undefined8 *)(puVar5 + -0xd8) = uVar4;
                      *(long *)(puVar5 + -0xd0) = lVar25;
                      *(undefined8 *)(puVar5 + -200) = uVar28;
                      *(undefined4 *)(puVar5 + -0xa8) = uVar1;
                      *(undefined4 *)(puVar5 + -0xa4) = uVar2;
                      (**(code **)(puVar14 + 0x20))(unaff_x22,puVar5 + -0xf0);
                      uVar19 = extraout_x15_02;
                    }
                  }
                }
                lVar25 = *(long *)(lVar16 + 0x58);
                if ((ulong)(*(long *)(lVar16 + 0x48) - lVar25) < 0x19) goto LAB_100819708;
                goto LAB_100818fdc;
              }
            }
            else {
              if (lVar25 == 2) {
                FUN_10081cd34(puVar5 + -0x280,lVar16 + 0x100,puVar17,lVar16);
                lVar25 = *(long *)(puVar5 + -0x280);
                if (lVar25 == 5) {
                  *puVar11 = 6;
                  return;
                }
                uVar10 = *(undefined8 *)(puVar5 + -0x278);
                if (lVar25 == 4) {
                  *(undefined8 *)(puVar5 + -0x1f0) = uVar10;
                  if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
                      ((bRam000000010b6374a0 - 1 < 2 ||
                       ((bRam000000010b6374a0 != 0 &&
                        (cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                           (&
                                            __ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hef14ebe7153b4668E
                                           ), cVar7 != '\0')))))) &&
                     (iVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                        (
                                        ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hef14ebe7153b4668E
                                        ), iVar9 != 0)) {
                    *(undefined1 **)(puVar5 + -0x1a8) = puVar5 + -0x1f0;
                    *(code **)(puVar5 + -0x1a0) =
                         __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
                    ;
                    *(char **)(puVar5 + -0x1b8) = s_incoming_body_decode_error__108ac8b6f;
                    *(undefined1 **)(puVar5 + -0x1b0) = puVar5 + -0x1a8;
                    *(undefined1 **)(puVar5 + -0x1c8) = puVar5 + -0x1b8;
                    *(undefined **)(puVar5 + -0x1c0) = &UNK_10b208fd0;
                    *(undefined8 *)(puVar5 + -0x1e8) = 1;
                    *(undefined1 **)(puVar5 + -0x1e0) = puVar5 + -0x1c8;
                    *(undefined8 *)(puVar5 + -0x1d8) = 1;
                    *(long *)(puVar5 + -0x1d0) =
                         ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hef14ebe7153b4668E
                         + 0x30;
                    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                              (___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hef14ebe7153b4668E
                               ,puVar5 + -0x1e8);
                    lVar25 = 
                    ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hef14ebe7153b4668E
                    ;
                    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                       (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                      uVar10 = *(undefined8 *)
                                (
                                ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hef14ebe7153b4668E
                                + 0x20);
                      uVar28 = *(undefined8 *)
                                (
                                ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hef14ebe7153b4668E
                                + 0x28);
                      *(undefined8 *)(puVar5 + -0x108) = 4;
                      *(undefined8 *)(puVar5 + -0x100) = uVar10;
                      *(undefined8 *)(puVar5 + -0xf8) = uVar28;
                      puVar20 = puRam000000010b634c20;
                      if (lRam000000010b66fd20 != 2) {
                        puVar20 = &UNK_10b3c24c8;
                      }
                      puVar18 = puRam000000010b634c18;
                      if (lRam000000010b66fd20 != 2) {
                        puVar18 = &UNK_109adfc03;
                      }
                      iVar9 = (**(code **)(puVar20 + 0x18))(puVar18,puVar5 + -0x108);
                      if (iVar9 != 0) {
                        lVar23 = *(long *)(lVar25 + 0x60);
                        uVar28 = *(undefined8 *)(lVar25 + 0x68);
                        lVar3 = *(long *)(lVar25 + 0x50);
                        uVar22 = *(undefined8 *)(lVar25 + 0x58);
                        uVar10 = 1;
                        if (lVar3 == 0) {
                          uVar10 = 2;
                        }
                        uVar1 = *(undefined4 *)(lVar25 + 8);
                        uVar2 = *(undefined4 *)(lVar25 + 0xc);
                        *(undefined1 **)(puVar5 + -0x90) = puVar5 + -0x1e8;
                        puVar5[-0x88] = 1;
                        *(undefined1 **)(puVar5 + -0x80) = puVar5 + -0x90;
                        *(undefined **)(puVar5 + -0x78) = &DAT_1061c2098;
                        uVar4 = 1;
                        if (lVar23 == 0) {
                          uVar4 = 2;
                        }
                        *(undefined8 *)(puVar5 + -0xb8) = *(undefined8 *)(puVar5 + -0x100);
                        *(undefined8 *)(puVar5 + -0xc0) = *(undefined8 *)(puVar5 + -0x108);
                        *(undefined8 *)(puVar5 + -0xb0) = *(undefined8 *)(puVar5 + -0xf8);
                        *(char **)(puVar5 + -0xa0) = s__108b39f4f;
                        *(undefined1 **)(puVar5 + -0x98) = puVar5 + -0x80;
                        *(undefined8 *)(puVar5 + -0xf0) = uVar10;
                        *(long *)(puVar5 + -0xe8) = lVar3;
                        *(undefined8 *)(puVar5 + -0xe0) = uVar22;
                        *(undefined8 *)(puVar5 + -0xd8) = uVar4;
                        *(long *)(puVar5 + -0xd0) = lVar23;
                        *(undefined8 *)(puVar5 + -200) = uVar28;
                        *(undefined4 *)(puVar5 + -0xa8) = uVar1;
                        *(undefined4 *)(puVar5 + -0xa4) = uVar2;
                        (**(code **)(puVar20 + 0x20))(puVar18,puVar5 + -0xf0);
                      }
                    }
                  }
                  else {
                    lVar25 = 
                    ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hef14ebe7153b4668E
                    ;
                    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                       (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                      uVar10 = *(undefined8 *)
                                (
                                ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hef14ebe7153b4668E
                                + 0x20);
                      uVar28 = *(undefined8 *)
                                (
                                ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hef14ebe7153b4668E
                                + 0x28);
                      *(undefined8 *)(puVar5 + -0x198) = 4;
                      *(undefined8 *)(puVar5 + -400) = uVar10;
                      *(undefined8 *)(puVar5 + -0x188) = uVar28;
                      puVar20 = puRam000000010b634c20;
                      if (lRam000000010b66fd20 != 2) {
                        puVar20 = &UNK_10b3c24c8;
                      }
                      puVar18 = puRam000000010b634c18;
                      if (lRam000000010b66fd20 != 2) {
                        puVar18 = &UNK_109adfc03;
                      }
                      iVar9 = (**(code **)(puVar20 + 0x18))(puVar18,puVar5 + -0x198);
                      if (iVar9 != 0) {
                        *(undefined1 **)(puVar5 + -0x1e8) = puVar5 + -0x1f0;
                        *(code **)(puVar5 + -0x1e0) =
                             __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
                        ;
                        *(char **)(puVar5 + -0x108) = s_incoming_body_decode_error__108ac8b6f;
                        *(undefined1 **)(puVar5 + -0x100) = puVar5 + -0x1e8;
                        *(undefined1 **)(puVar5 + -0x80) = puVar5 + -0x108;
                        *(undefined **)(puVar5 + -0x78) = &UNK_10b208fd0;
                        *(undefined8 *)(puVar5 + -0xf0) = 1;
                        *(undefined1 **)(puVar5 + -0xe8) = puVar5 + -0x80;
                        *(undefined8 *)(puVar5 + -0xe0) = 1;
                        *(long *)(puVar5 + -0xd8) =
                             ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hef14ebe7153b4668E
                             + 0x30;
                        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                                  (lVar25,puVar18,puVar20,puVar5 + -0x198,puVar5 + -0xf0);
                      }
                    }
                  }
                  uVar10 = *(undefined8 *)(puVar5 + -0x1f0);
                  lVar25 = 4;
LAB_100819320:
                  lVar23 = 4;
                }
                else {
                  *(long *)(puVar5 + -0xf0) = lVar25;
                  *(undefined8 *)(puVar5 + -0xe8) = uVar10;
                  *(undefined8 *)(puVar5 + -0xb8) = *(undefined8 *)(puVar5 + -0x248);
                  *(undefined8 *)(puVar5 + -0xc0) = *(undefined8 *)(puVar5 + -0x250);
                  *(undefined8 *)(puVar5 + -0xa8) = *(undefined8 *)(puVar5 + -0x238);
                  *(undefined8 *)(puVar5 + -0xb0) = *(undefined8 *)(puVar5 + -0x240);
                  *(undefined8 *)(puVar5 + -0x98) = *(undefined8 *)(puVar5 + -0x228);
                  *(undefined8 *)(puVar5 + -0xa0) = *(undefined8 *)(puVar5 + -0x230);
                  *(undefined8 *)(puVar5 + -0xd8) = *(undefined8 *)(puVar5 + -0x268);
                  *(undefined8 *)(puVar5 + -0xe0) = *(undefined8 *)(puVar5 + -0x270);
                  *(undefined8 *)(puVar5 + -200) = *(undefined8 *)(puVar5 + -600);
                  *(undefined8 *)(puVar5 + -0xd0) = *(undefined8 *)(puVar5 + -0x260);
                  if (lVar25 != 3) {
                    *(undefined8 *)(puVar5 + -0x158) = *(undefined8 *)(puVar5 + -0x248);
                    *(undefined8 *)(puVar5 + -0x160) = *(undefined8 *)(puVar5 + -0x250);
                    *(undefined8 *)(puVar5 + -0x148) = *(undefined8 *)(puVar5 + -0x238);
                    *(undefined8 *)(puVar5 + -0x150) = *(undefined8 *)(puVar5 + -0x240);
                    *(undefined8 *)(puVar5 + -0x138) = *(undefined8 *)(puVar5 + -0x228);
                    *(undefined8 *)(puVar5 + -0x140) = *(undefined8 *)(puVar5 + -0x230);
                    *(undefined8 *)(puVar5 + -0x178) = *(undefined8 *)(puVar5 + -0x268);
                    *(undefined8 *)(puVar5 + -0x180) = *(undefined8 *)(puVar5 + -0x270);
                    *(undefined8 *)(puVar5 + -0x168) = *(undefined8 *)(puVar5 + -600);
                    *(undefined8 *)(puVar5 + -0x170) = *(undefined8 *)(puVar5 + -0x260);
                    goto LAB_100819320;
                  }
                  lVar25 = *(ulong *)(lVar16 + 0x100) - 2;
                  if (*(ulong *)(lVar16 + 0x100) < 2) {
                    lVar25 = 1;
                  }
                  if (lVar25 == 2) {
                    if ((*(byte *)(lVar16 + 0x108) & 1) != 0) goto LAB_100818e44;
LAB_10081942c:
                    if (*(long *)(puVar5 + -0xd8) != 0) goto LAB_1008193e0;
                    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
                        ((bRam000000010b637470 - 1 < 2 ||
                         ((bRam000000010b637470 != 0 &&
                          (cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                             (&
                                              __ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h7186caed309e9af4E
                                             ), cVar7 != '\0')))))) &&
                       (iVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                          (
                                          ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h7186caed309e9af4E
                                          ), iVar9 != 0)) {
                      *(undefined **)(puVar5 + -0x108) = &UNK_108cb0cf2;
                      *(undefined8 *)(puVar5 + -0x100) = 0x41;
                      *(undefined1 **)(puVar5 + -0x80) = puVar5 + -0x108;
                      *(undefined **)(puVar5 + -0x78) = &UNK_10b208fd0;
                      *(undefined8 *)(puVar5 + -0x1e8) = 1;
                      *(undefined1 **)(puVar5 + -0x1e0) = puVar5 + -0x80;
                      *(undefined8 *)(puVar5 + -0x1d8) = 1;
                      *(long *)(puVar5 + -0x1d0) =
                           ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h7186caed309e9af4E
                           + 0x30;
                      FUN_10081a634(puVar5 + -0x1e8);
                    }
                    else {
                      lVar25 = 
                      ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h7186caed309e9af4E
                      ;
                      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                         (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
                        uVar10 = *(undefined8 *)
                                  (
                                  ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h7186caed309e9af4E
                                  + 0x20);
                        uVar28 = *(undefined8 *)
                                  (
                                  ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h7186caed309e9af4E
                                  + 0x28);
                        *(undefined8 *)(puVar5 + -0x208) = 1;
                        *(undefined8 *)(puVar5 + -0x200) = uVar10;
                        *(undefined8 *)(puVar5 + -0x1f8) = uVar28;
                        puVar20 = puRam000000010b634c20;
                        if (lRam000000010b66fd20 != 2) {
                          puVar20 = &UNK_10b3c24c8;
                        }
                        puVar18 = puRam000000010b634c18;
                        if (lRam000000010b66fd20 != 2) {
                          puVar18 = &UNK_109adfc03;
                        }
                        iVar9 = (**(code **)(puVar20 + 0x18))(puVar18,puVar5 + -0x208);
                        if (iVar9 != 0) {
                          *(undefined **)(puVar5 + -0x108) = &UNK_108cb0cf2;
                          *(undefined8 *)(puVar5 + -0x100) = 0x41;
                          *(undefined1 **)(puVar5 + -0x80) = puVar5 + -0x108;
                          *(undefined **)(puVar5 + -0x78) = &UNK_10b208fd0;
                          *(undefined8 *)(puVar5 + -0x1e8) = 1;
                          *(undefined1 **)(puVar5 + -0x1e0) = puVar5 + -0x80;
                          *(undefined8 *)(puVar5 + -0x1d8) = 1;
                          *(long *)(puVar5 + -0x1d0) =
                               ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h7186caed309e9af4E
                               + 0x30;
                          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                                    (lVar25,puVar18,puVar20,puVar5 + -0x208,puVar5 + -0x1e8);
                        }
                      }
                    }
                    lVar23 = 4;
LAB_1008195e0:
                    if (*(long *)(puVar5 + -0xf0) == 3) {
                      (**(code **)(*(long *)(puVar5 + -0xe8) + 0x20))
                                (puVar5 + -0xd0,*(undefined8 *)(puVar5 + -0xe0),
                                 *(undefined8 *)(puVar5 + -0xd8));
                      uVar10 = extraout_x9;
                    }
                    else {
                      FUN_100def764(puVar5 + -0xf0);
                      uVar10 = extraout_x9_00;
                    }
                    lVar25 = 5;
                  }
                  else {
                    if (lVar25 != 1) {
                      if (*(long *)(lVar16 + 0x108) == 0) goto LAB_100818e44;
                      goto LAB_10081942c;
                    }
                    if (*(char *)(lVar16 + 0x158) != '\f') goto LAB_10081942c;
LAB_100818e44:
                    if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) {
                      puVar14 = &
                                __ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hd23702855f830a5bE
                      ;
                      if (((bRam000000010b637488 - 1 < 2) ||
                          ((bRam000000010b637488 != 0 &&
                           (cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                              (&
                                               __ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hd23702855f830a5bE
                                              ), cVar7 != '\0')))) &&
                         (iVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                            (
                                            ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hd23702855f830a5bE
                                            ), iVar9 != 0)) {
                        *(undefined **)(puVar5 + -0x108) = &UNK_108cb0d12;
                        *(undefined8 *)(puVar5 + -0x100) = 0x2f;
                        *(undefined1 **)(puVar5 + -0x80) = puVar5 + -0x108;
                        *(undefined **)(puVar5 + -0x78) = &UNK_10b208fd0;
                        *(undefined8 *)(puVar5 + -0x1e8) = 1;
                        *(undefined1 **)(puVar5 + -0x1e0) = puVar5 + -0x80;
                        *(undefined8 *)(puVar5 + -0x1d8) = 1;
                        *(long *)(puVar5 + -0x1d0) =
                             ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hd23702855f830a5bE
                             + 0x30;
                        puVar15 = puVar5 + -0x1e8;
                        uVar10 = 0x100818ebc;
                        puVar6 = puVar5 + -0x2b0;
                        lVar25 = lVar16;
                        goto SUB_10081a4f8;
                      }
                    }
                    lVar25 = 
                    ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hd23702855f830a5bE
                    ;
                    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                       (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                      uVar10 = *(undefined8 *)
                                (
                                ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hd23702855f830a5bE
                                + 0x20);
                      uVar28 = *(undefined8 *)
                                (
                                ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hd23702855f830a5bE
                                + 0x28);
                      *(undefined8 *)(puVar5 + -0x220) = 4;
                      *(undefined8 *)(puVar5 + -0x218) = uVar10;
                      *(undefined8 *)(puVar5 + -0x210) = uVar28;
                      puVar20 = puRam000000010b634c20;
                      if (lRam000000010b66fd20 != 2) {
                        puVar20 = &UNK_10b3c24c8;
                      }
                      puVar18 = puRam000000010b634c18;
                      if (lRam000000010b66fd20 != 2) {
                        puVar18 = &UNK_109adfc03;
                      }
                      iVar9 = (**(code **)(puVar20 + 0x18))(puVar18,puVar5 + -0x220);
                      if (iVar9 != 0) {
                        *(undefined **)(puVar5 + -0x108) = &UNK_108cb0d12;
                        *(undefined8 *)(puVar5 + -0x100) = 0x2f;
                        *(undefined1 **)(puVar5 + -0x80) = puVar5 + -0x108;
                        *(undefined **)(puVar5 + -0x78) = &UNK_10b208fd0;
                        *(undefined8 *)(puVar5 + -0x1e8) = 1;
                        *(undefined1 **)(puVar5 + -0x1e0) = puVar5 + -0x80;
                        *(undefined8 *)(puVar5 + -0x1d8) = 1;
                        *(long *)(puVar5 + -0x1d0) =
                             ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hd23702855f830a5bE
                             + 0x30;
                        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                                  (lVar25,puVar18,puVar20,puVar5 + -0x220,puVar5 + -0x1e8);
                      }
                    }
                    if (*(long *)(puVar5 + -0xd8) == 0) {
                      lVar23 = 3;
                      goto LAB_1008195e0;
                    }
                    lVar25 = *(long *)(puVar5 + -0xf0);
                    uVar10 = *(undefined8 *)(puVar5 + -0xe8);
                    *(undefined8 *)(puVar5 + -0x158) = *(undefined8 *)(puVar5 + -0xb8);
                    *(undefined8 *)(puVar5 + -0x160) = *(undefined8 *)(puVar5 + -0xc0);
                    *(undefined8 *)(puVar5 + -0x148) = *(undefined8 *)(puVar5 + -0xa8);
                    *(undefined8 *)(puVar5 + -0x150) = *(undefined8 *)(puVar5 + -0xb0);
                    *(undefined8 *)(puVar5 + -0x138) = *(undefined8 *)(puVar5 + -0x98);
                    *(undefined8 *)(puVar5 + -0x140) = *(undefined8 *)(puVar5 + -0xa0);
                    *(undefined8 *)(puVar5 + -0x178) = *(undefined8 *)(puVar5 + -0xd8);
                    *(undefined8 *)(puVar5 + -0x180) = *(undefined8 *)(puVar5 + -0xe0);
                    *(undefined8 *)(puVar5 + -0x168) = *(undefined8 *)(puVar5 + -200);
                    *(undefined8 *)(puVar5 + -0x170) = *(undefined8 *)(puVar5 + -0xd0);
                    lVar23 = 3;
                  }
                }
                *(long *)(puVar5 + -0xf0) = lVar25;
                *(undefined8 *)(puVar5 + -0xe8) = uVar10;
                *(undefined8 *)(puVar5 + -0xb8) = *(undefined8 *)(puVar5 + -0x158);
                *(undefined8 *)(puVar5 + -0xc0) = *(undefined8 *)(puVar5 + -0x160);
                *(undefined8 *)(puVar5 + -0xa8) = *(undefined8 *)(puVar5 + -0x148);
                *(undefined8 *)(puVar5 + -0xb0) = *(undefined8 *)(puVar5 + -0x150);
                *(undefined8 *)(puVar5 + -0x98) = *(undefined8 *)(puVar5 + -0x138);
                *(undefined8 *)(puVar5 + -0xa0) = *(undefined8 *)(puVar5 + -0x140);
                *(undefined8 *)(puVar5 + -0xd8) = *(undefined8 *)(puVar5 + -0x178);
                *(undefined8 *)(puVar5 + -0xe0) = *(undefined8 *)(puVar5 + -0x180);
                *(undefined8 *)(puVar5 + -200) = *(undefined8 *)(puVar5 + -0x168);
                *(undefined8 *)(puVar5 + -0xd0) = *(undefined8 *)(puVar5 + -0x170);
                if ((((*unaff_x28 == 1) || (*unaff_x28 == 2)) && (*(ulong *)(lVar16 + 0x100) < 2))
                   && (*(long *)(lVar16 + 0x130) != 0)) {
                  plVar24 = *(long **)(lVar16 + 0x148);
                  if (((ulong)plVar24 & 1) == 0) {
                    lVar25 = plVar24[4];
                    plVar24[4] = lVar25 + -1;
                    LORelease();
                    if (lVar25 == 1) {
                      if (*plVar24 != 0) {
                        _free(plVar24[1]);
                      }
                      goto LAB_1008193c0;
                    }
                  }
                  else if (*(long *)(lVar16 + 0x140) + ((ulong)plVar24 >> 5) != 0) {
                    plVar24 = (long *)(*(long *)(lVar16 + 0x130) - ((ulong)plVar24 >> 5));
LAB_1008193c0:
                    _free(plVar24);
                  }
                }
                *unaff_x28 = lVar23;
                FUN_10081c3b8(lVar16 + 0xd8);
                FUN_1008164ac(lVar16,puVar17);
LAB_1008193e0:
                uVar10 = *(undefined8 *)(puVar5 + -0xd0);
                uVar22 = *(undefined8 *)(puVar5 + -0xb8);
                uVar28 = *(undefined8 *)(puVar5 + -0xc0);
                puVar11[5] = *(undefined8 *)(puVar5 + -200);
                puVar11[4] = uVar10;
                puVar11[7] = uVar22;
                puVar11[6] = uVar28;
                uVar10 = *(undefined8 *)(puVar5 + -0xb0);
                uVar22 = *(undefined8 *)(puVar5 + -0x98);
                uVar28 = *(undefined8 *)(puVar5 + -0xa0);
                puVar11[9] = *(undefined8 *)(puVar5 + -0xa8);
                puVar11[8] = uVar10;
                puVar11[0xb] = uVar22;
                puVar11[10] = uVar28;
                uVar10 = *(undefined8 *)(puVar5 + -0xf0);
                uVar22 = *(undefined8 *)(puVar5 + -0xd8);
                uVar28 = *(undefined8 *)(puVar5 + -0xe0);
                puVar11[1] = *(undefined8 *)(puVar5 + -0xe8);
                *puVar11 = uVar10;
                puVar11[3] = uVar22;
                puVar11[2] = uVar28;
                return;
              }
LAB_1008196e4:
              *(long **)(puVar5 + -0xf0) = unaff_x28;
              *(undefined **)(puVar5 + -0xe8) = &DAT_1011c6264;
              __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                        (s_Hinternal_error__entered_unreach_108ac8b8e,puVar5 + -0xf0,&UNK_10b223540)
              ;
              lVar25 = extraout_x1_00;
LAB_100819708:
              puVar18 = (undefined *)0x19;
              thunk_FUN_108855060(lVar16 + 0x48,lVar25,0x19,1,1);
              lVar25 = *(long *)(lVar16 + 0x58);
              uVar19 = extraout_x15_08;
LAB_100818fdc:
              puVar13 = (undefined8 *)(*(long *)(lVar16 + 0x50) + lVar25);
              puVar13[1] = 0x6e6f432030303120;
              *puVar13 = 0x312e312f50545448;
              *(undefined8 *)((long)puVar13 + 0x11) = 0xa0d0a0d65756e69;
              *(undefined8 *)((long)puVar13 + 9) = 0x746e6f4320303031;
              *(long *)(lVar16 + 0x58) = lVar25 + 0x19;
              puVar14 = unaff_x23;
            }
            uVar27 = *(ulong *)(lVar16 + 0x100);
            lVar25 = uVar27 - 2;
            if (uVar27 < 2) {
              lVar25 = 1;
            }
            *(undefined **)(puVar5 + -0x290) = puVar17;
            *(undefined8 **)(puVar5 + -0x288) = puVar11;
            if ((lVar25 == 0) || (lVar25 != 1)) {
              lVar25 = *(long *)(lVar16 + 0x108);
              unaff_x25 = *(undefined8 *)(lVar16 + 0x110);
              uVar10 = *(undefined8 *)(lVar16 + 0x118);
              plVar24 = *(long **)(lVar16 + 0x120);
              puVar20 = *(undefined **)(lVar16 + 0x128);
              unaff_x23 = *(undefined **)(lVar16 + 0x130);
              puVar18 = *(undefined **)(lVar16 + 0x138);
              unaff_x22 = *(undefined **)(lVar16 + 0x140);
              uVar19 = *(ulong *)(lVar16 + 0x148);
              unaff_x26 = *(undefined8 *)(lVar16 + 0x150);
              uVar21 = (uint)*(byte *)(lVar16 + 0x158);
              *(undefined4 *)(puVar5 + -0x10d) = *(undefined4 *)(lVar16 + 0x15c);
              *(undefined4 *)(puVar5 + -0x110) = *(undefined4 *)(lVar16 + 0x159);
              lVar23 = *unaff_x28;
              if (lVar23 != 1) goto LAB_100819124;
LAB_10081912c:
              if ((*(ulong *)(lVar16 + 0x100) < 2) &&
                 (lVar23 = *(long *)(lVar16 + 0x130), lVar23 != 0)) {
                plVar12 = *(long **)(lVar16 + 0x148);
                if (((ulong)plVar12 & 1) == 0) {
                  lVar23 = plVar12[4];
                  plVar12[4] = lVar23 + -1;
                  LORelease();
                  if (lVar23 == 1) {
                    *(ulong *)(puVar5 + -0x2a8) = uVar19;
                    *(undefined **)(puVar5 + -0x2a0) = puVar20;
                    *(uint *)(puVar5 + -0x294) = uVar21;
                    if (*plVar12 != 0) {
                      lVar23 = plVar12[1];
                      *(long **)(puVar5 + -0x2b0) = plVar12;
                      _free(lVar23);
                      plVar12 = *(long **)(puVar5 + -0x2b0);
                    }
                    goto LAB_1008191b0;
                  }
                }
                else if (*(long *)(lVar16 + 0x140) + ((ulong)plVar12 >> 5) != 0) {
                  *(ulong *)(puVar5 + -0x2a8) = uVar19;
                  *(undefined **)(puVar5 + -0x2a0) = puVar20;
                  *(uint *)(puVar5 + -0x294) = uVar21;
                  plVar12 = (long *)(lVar23 - ((ulong)plVar12 >> 5));
LAB_1008191b0:
                  _free(plVar12);
                  uVar19 = *(ulong *)(puVar5 + -0x2a8);
                  puVar20 = *(undefined **)(puVar5 + -0x2a0);
                  uVar21 = *(uint *)(puVar5 + -0x294);
                  unaff_x28 = plVar24;
                }
              }
            }
            else {
              uVar21 = (uint)*(byte *)(lVar16 + 0x158);
              plVar24 = *(long **)(lVar16 + 0x120);
              puVar20 = *(undefined **)(lVar16 + 0x128);
              lVar23 = *(long *)(lVar16 + 0x130);
              if (lVar23 == 0) {
                unaff_x23 = (undefined *)0x0;
              }
              else {
                *(uint *)(puVar5 + -0x294) = (uint)*(byte *)(lVar16 + 0x158);
                unaff_x22 = *(undefined **)(lVar16 + 0x138);
                if (unaff_x22 == (undefined *)0x0) {
                  unaff_x23 = (undefined *)0x1;
                }
                else {
                  unaff_x23 = (undefined *)_malloc(unaff_x22);
                  if (unaff_x23 == (undefined *)0x0) goto LAB_100819770;
                }
                _memcpy(unaff_x23,lVar23,unaff_x22);
                uVar19 = 0x40 - LZCOUNT((ulong)unaff_x22 >> 10);
                if (6 < uVar19) {
                  uVar19 = 7;
                }
                uVar19 = uVar19 << 2 | 1;
                uVar21 = *(uint *)(puVar5 + -0x294);
              }
              unaff_x26 = *(undefined8 *)(lVar16 + 0x150);
              uVar27 = uVar27 & 1;
              lVar25 = *(long *)(lVar16 + 0x108);
              unaff_x25 = *(undefined8 *)(lVar16 + 0x110);
              uVar10 = *(undefined8 *)(lVar16 + 0x118);
              lVar23 = *unaff_x28;
              puVar18 = unaff_x22;
              if (lVar23 == 1) goto LAB_10081912c;
LAB_100819124:
              if (lVar23 == 2) goto LAB_10081912c;
            }
            *(undefined8 *)(lVar16 + 0xf8) = 2;
            *(ulong *)(lVar16 + 0x100) = uVar27;
            *(long *)(lVar16 + 0x108) = lVar25;
            *(undefined8 *)(lVar16 + 0x110) = unaff_x25;
            *(undefined8 *)(lVar16 + 0x118) = uVar10;
            *(long **)(lVar16 + 0x120) = plVar24;
            *(undefined **)(lVar16 + 0x128) = puVar20;
            *(undefined **)(lVar16 + 0x130) = unaff_x23;
            *(undefined **)(lVar16 + 0x138) = puVar18;
            *(undefined **)(lVar16 + 0x140) = unaff_x22;
            *(ulong *)(lVar16 + 0x148) = uVar19;
            *(undefined8 *)(lVar16 + 0x150) = unaff_x26;
            *(char *)(lVar16 + 0x158) = (char)uVar21;
            *(undefined4 *)(lVar16 + 0x15c) = *(undefined4 *)(puVar5 + -0x10d);
            *(undefined4 *)(lVar16 + 0x159) = *(undefined4 *)(puVar5 + -0x110);
            puVar17 = *(undefined **)(puVar5 + -0x290);
            puVar11 = *(undefined8 **)(puVar5 + -0x288);
            uVar28 = 0x100819204;
            puVar5 = puVar5 + -0x2b0;
            puVar20 = unaff_x22;
            unaff_x21 = lVar16;
            unaff_x22 = puVar18;
          } while( true );
        }
      }
      _memcpy(lVar16,lVar25,unaff_x22);
      uVar19 = 0x40 - LZCOUNT((ulong)unaff_x22 >> 10);
      if (6 < uVar19) {
        uVar19 = 7;
      }
      uVar19 = uVar19 << 2 | 1;
      uVar21 = in_stack_00000018._4_4_;
    }
    uVar26 = *(undefined8 *)(unaff_x21 + 0x120);
    uVar27 = uVar27 & 1;
    uVar28 = *(undefined8 *)(unaff_x21 + 0xd8);
    uVar4 = *(undefined8 *)(unaff_x21 + 0xe0);
    uVar22 = *(undefined8 *)(unaff_x21 + 0xe8);
    lVar25 = *unaff_x28;
    puVar17 = unaff_x22;
    plVar24 = in_stack_00000000;
  }
  if (((lVar25 == 1) || (lVar25 == 2)) &&
     ((*(ulong *)(unaff_x21 + 0xd0) < 2 && (*(long *)(unaff_x21 + 0x100) != 0)))) {
    in_stack_00000000 = *(long **)(unaff_x21 + 0x118);
    if (((ulong)in_stack_00000000 & 1) == 0) {
      lVar25 = in_stack_00000000[4];
      in_stack_00000000[4] = lVar25 + -1;
      LORelease();
      if (lVar25 != 1) goto LAB_100818480;
      plVar12 = in_stack_00000000;
      in_stack_00000008 = uVar19;
      in_stack_00000010 = puVar20;
      in_stack_00000018._4_4_ = uVar21;
      if (*in_stack_00000000 != 0) {
        _free(in_stack_00000000[1]);
        plVar12 = in_stack_00000000;
        plVar24 = in_stack_00000000;
      }
    }
    else {
      if (*(long *)(unaff_x21 + 0x110) + ((ulong)in_stack_00000000 >> 5) == 0) goto LAB_100818480;
      plVar12 = (long *)(*(long *)(unaff_x21 + 0x100) - ((ulong)in_stack_00000000 >> 5));
      in_stack_00000008 = uVar19;
      in_stack_00000010 = puVar20;
      in_stack_00000018._4_4_ = uVar21;
    }
    in_stack_00000000 = plVar24;
    _free(plVar12);
    puVar20 = in_stack_00000010;
    uVar19 = in_stack_00000008;
    uVar21 = in_stack_00000018._4_4_;
    plVar24 = in_stack_00000000;
  }
LAB_100818480:
  in_stack_00000000 = plVar24;
  *(undefined8 *)(unaff_x21 + 200) = 2;
  *(ulong *)(unaff_x21 + 0xd0) = uVar27;
  *(undefined8 *)(unaff_x21 + 0xd8) = uVar28;
  *(undefined8 *)(unaff_x21 + 0xe0) = uVar4;
  *(undefined8 *)(unaff_x21 + 0xe8) = uVar22;
  *(undefined8 *)(unaff_x21 + 0xf0) = uVar10;
  *(undefined **)(unaff_x21 + 0xf8) = puVar20;
  *(long *)(unaff_x21 + 0x100) = lVar16;
  *(undefined **)(unaff_x21 + 0x108) = unaff_x22;
  *(undefined **)(unaff_x21 + 0x110) = puVar17;
  *(ulong *)(unaff_x21 + 0x118) = uVar19;
  *(undefined8 *)(unaff_x21 + 0x120) = uVar26;
  *(char *)(unaff_x21 + 0x128) = (char)uVar21;
  *(undefined4 *)(unaff_x21 + 300) = in_stack_000001a0._3_4_;
  *(undefined4 *)(unaff_x21 + 0x129) = *(undefined4 *)(unaff_x29 + -0x100);
  FUN_100817d2c(unaff_x25);
  return;
LAB_100819770:
  uVar10 = func_0x0001087c9084(1,unaff_x22);
  FUN_100e2f01c(puVar5 + -0xf0);
  __Unwind_Resume(uVar10);
  auVar29 = FUN_107c05ccc();
  lVar25 = auVar29._8_8_;
  puVar13 = auVar29._0_8_;
  *(long **)(puVar5 + -0x310) = unaff_x28;
  *(ulong *)(puVar5 + -0x308) = uVar27;
  *(undefined **)(puVar5 + -0x300) = puVar17;
  *(undefined8 **)(puVar5 + -0x2f8) = puVar11;
  *(long *)(puVar5 + -0x2f0) = lVar23;
  *(undefined **)(puVar5 + -0x2e8) = puVar14;
  *(undefined **)(puVar5 + -0x2e0) = unaff_x22;
  *(long *)(puVar5 + -0x2d8) = lVar16;
  *(undefined **)(puVar5 + -0x2d0) = puVar20;
  *(undefined8 *)(puVar5 + -0x2c8) = uVar10;
  *(undefined1 **)(puVar5 + -0x2c0) = unaff_x29;
  *(code **)(puVar5 + -0x2b8) = FUN_1008197b4;
  unaff_x29 = puVar5 + -0x2c0;
  puVar6 = puVar5 + -0x560;
  plVar24 = (long *)(lVar25 + 0xe8);
  lVar16 = *plVar24;
  if (lVar16 < 2) {
    if (lVar16 != 1) goto LAB_10081a428;
    uVar27 = extraout_x15_09;
    if (*(long *)(lVar25 + 0x168) == -0x7ffffffffffffffd) {
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
         (((bVar8 = bRam000000010b637458, bRam000000010b637458 - 1 < 2 ||
           ((bRam000000010b637458 != 0 &&
            (bVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h476d256546eea57cE
                               ), uVar27 = extraout_x15_16, bVar8 != 0)))) &&
          (iVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h476d256546eea57cE
                              ,bVar8), uVar27 = extraout_x15_12, iVar9 != 0)))) {
        *(undefined **)(puVar5 + -0x498) = &UNK_108cb0cb7;
        *(undefined8 *)(puVar5 + -0x490) = 0x45;
        *(undefined1 **)(puVar5 + -0x3b8) = puVar5 + -0x498;
        *(undefined **)(puVar5 + -0x3b0) = &UNK_10b208fd0;
        *(undefined8 *)(puVar5 + -0x3a0) = 1;
        *(undefined1 **)(puVar5 + -0x398) = puVar5 + -0x3b8;
        *(undefined8 *)(puVar5 + -0x390) = 1;
        *(undefined **)(puVar5 + -0x388) =
             ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h476d256546eea57cE
             + 0x30;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h476d256546eea57cE
                   ,puVar5 + -0x3a0);
        puVar17 = 
        ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h476d256546eea57cE
        ;
        uVar27 = extraout_x15_13;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uVar10 = *(undefined8 *)
                    (
                    ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h476d256546eea57cE
                    + 0x20);
          uVar28 = *(undefined8 *)
                    (
                    ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h476d256546eea57cE
                    + 0x28);
          *(undefined8 *)(puVar5 + -0x530) = 5;
          *(undefined8 *)(puVar5 + -0x528) = uVar10;
          *(undefined8 *)(puVar5 + -0x520) = uVar28;
          puVar20 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar20 = &UNK_10b3c24c8;
          }
          puVar14 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar14 = &UNK_109adfc03;
          }
          iVar9 = (**(code **)(puVar20 + 0x18))(puVar14,puVar5 + -0x530);
          uVar27 = extraout_x15_14;
          unaff_x22 = puVar17;
          if (iVar9 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (puVar17,puVar14,puVar20,puVar5 + -0x530,puVar5 + -0x3a0);
            uVar27 = extraout_x15_15;
          }
        }
      }
      else {
        puVar17 = 
        ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h476d256546eea57cE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uVar10 = *(undefined8 *)
                    (
                    ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h476d256546eea57cE
                    + 0x20);
          uVar28 = *(undefined8 *)
                    (
                    ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h476d256546eea57cE
                    + 0x28);
          *(undefined8 *)(puVar5 + -0x3d8) = 5;
          *(undefined8 *)(puVar5 + -0x3d0) = uVar10;
          *(undefined8 *)(puVar5 + -0x3c8) = uVar28;
          puVar20 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar20 = &UNK_10b3c24c8;
          }
          unaff_x22 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            unaff_x22 = &UNK_109adfc03;
          }
          iVar9 = (**(code **)(puVar20 + 0x18))(unaff_x22,puVar5 + -0x3d8);
          uVar27 = extraout_x15_10;
          if (iVar9 != 0) {
            *(undefined **)(puVar5 + -0x330) = &UNK_108cb0cb7;
            *(undefined8 *)(puVar5 + -0x328) = 0x45;
            *(undefined1 **)(puVar5 + -0x340) = puVar5 + -0x330;
            *(undefined **)(puVar5 + -0x338) = &UNK_10b208fd0;
            *(undefined8 *)(puVar5 + -0x530) = 1;
            *(undefined1 **)(puVar5 + -0x528) = puVar5 + -0x340;
            *(undefined8 *)(puVar5 + -0x520) = 1;
            *(undefined **)(puVar5 + -0x518) =
                 ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h476d256546eea57cE
                 + 0x30;
            lVar16 = *(long *)(puVar17 + 0x60);
            uVar28 = *(undefined8 *)(puVar17 + 0x68);
            lVar23 = *(long *)(puVar17 + 0x50);
            uVar22 = *(undefined8 *)(puVar17 + 0x58);
            uVar10 = 1;
            if (lVar23 == 0) {
              uVar10 = 2;
            }
            uVar1 = *(undefined4 *)(puVar17 + 8);
            uVar2 = *(undefined4 *)(puVar17 + 0xc);
            *(undefined1 **)(puVar5 + -0x3b8) = puVar5 + -0x530;
            puVar5[-0x3b0] = 1;
            *(undefined1 **)(puVar5 + -0x498) = puVar5 + -0x3b8;
            *(undefined **)(puVar5 + -0x490) = &DAT_1061c2098;
            uVar4 = 1;
            if (lVar16 == 0) {
              uVar4 = 2;
            }
            *(undefined8 *)(puVar5 + -0x368) = *(undefined8 *)(puVar5 + -0x3d0);
            *(undefined8 *)(puVar5 + -0x370) = *(undefined8 *)(puVar5 + -0x3d8);
            *(undefined8 *)(puVar5 + -0x360) = *(undefined8 *)(puVar5 + -0x3c8);
            *(char **)(puVar5 + -0x350) = s__108b39f4f;
            *(undefined1 **)(puVar5 + -0x348) = puVar5 + -0x498;
            *(undefined8 *)(puVar5 + -0x3a0) = uVar10;
            *(long *)(puVar5 + -0x398) = lVar23;
            *(undefined8 *)(puVar5 + -0x390) = uVar22;
            *(undefined8 *)(puVar5 + -0x388) = uVar4;
            *(long *)(puVar5 + -0x380) = lVar16;
            *(undefined8 *)(puVar5 + -0x378) = uVar28;
            *(undefined4 *)(puVar5 + -0x358) = uVar1;
            *(undefined4 *)(puVar5 + -0x354) = uVar2;
            (**(code **)(puVar20 + 0x20))(unaff_x22,puVar5 + -0x3a0);
            uVar27 = extraout_x15_11;
          }
        }
      }
      lVar16 = *(long *)(lVar25 + 0x20);
      if ((ulong)(*(long *)(lVar25 + 0x10) - lVar16) < 0x19) goto LAB_10081a44c;
      goto LAB_100819d20;
    }
  }
  else {
    if (lVar16 == 2) {
      FUN_10081f944(puVar5 + -0x530,lVar25 + 0xf0,puVar18,lVar25);
      lVar16 = *(long *)(puVar5 + -0x530);
      if (lVar16 == 5) {
        *puVar13 = 6;
        return;
      }
      uVar10 = *(undefined8 *)(puVar5 + -0x528);
      if (lVar16 == 4) {
        *(undefined8 *)(puVar5 + -0x4a0) = uVar10;
        if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
           (((bRam000000010b6374a0 - 1 < 2 ||
             ((bRam000000010b6374a0 != 0 &&
              (cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hef14ebe7153b4668E
                                 ), cVar7 != '\0')))) &&
            (iVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (
                               ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hef14ebe7153b4668E
                               ), iVar9 != 0)))) {
          *(undefined1 **)(puVar5 + -0x458) = puVar5 + -0x4a0;
          *(code **)(puVar5 + -0x450) =
               __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
          ;
          *(char **)(puVar5 + -0x468) = s_incoming_body_decode_error__108ac8b6f;
          *(undefined1 **)(puVar5 + -0x460) = puVar5 + -0x458;
          *(undefined1 **)(puVar5 + -0x478) = puVar5 + -0x468;
          *(undefined **)(puVar5 + -0x470) = &UNK_10b208fd0;
          *(undefined8 *)(puVar5 + -0x498) = 1;
          *(undefined1 **)(puVar5 + -0x490) = puVar5 + -0x478;
          *(undefined8 *)(puVar5 + -0x488) = 1;
          *(long *)(puVar5 + -0x480) =
               ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hef14ebe7153b4668E
               + 0x30;
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                    (___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hef14ebe7153b4668E
                     ,puVar5 + -0x498);
          lVar16 = 
          ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hef14ebe7153b4668E
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            uVar10 = *(undefined8 *)
                      (
                      ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hef14ebe7153b4668E
                      + 0x20);
            uVar28 = *(undefined8 *)
                      (
                      ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hef14ebe7153b4668E
                      + 0x28);
            *(undefined8 *)(puVar5 + -0x3b8) = 4;
            *(undefined8 *)(puVar5 + -0x3b0) = uVar10;
            *(undefined8 *)(puVar5 + -0x3a8) = uVar28;
            puVar17 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar17 = &UNK_10b3c24c8;
            }
            puVar20 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar20 = &UNK_109adfc03;
            }
            iVar9 = (**(code **)(puVar17 + 0x18))(puVar20,puVar5 + -0x3b8);
            if (iVar9 != 0) {
              lVar23 = *(long *)(lVar16 + 0x60);
              uVar28 = *(undefined8 *)(lVar16 + 0x68);
              lVar3 = *(long *)(lVar16 + 0x50);
              uVar22 = *(undefined8 *)(lVar16 + 0x58);
              uVar10 = 1;
              if (lVar3 == 0) {
                uVar10 = 2;
              }
              uVar1 = *(undefined4 *)(lVar16 + 8);
              uVar2 = *(undefined4 *)(lVar16 + 0xc);
              *(undefined1 **)(puVar5 + -0x340) = puVar5 + -0x498;
              puVar5[-0x338] = 1;
              *(undefined1 **)(puVar5 + -0x330) = puVar5 + -0x340;
              *(undefined **)(puVar5 + -0x328) = &DAT_1061c2098;
              uVar4 = 1;
              if (lVar23 == 0) {
                uVar4 = 2;
              }
              *(undefined8 *)(puVar5 + -0x368) = *(undefined8 *)(puVar5 + -0x3b0);
              *(undefined8 *)(puVar5 + -0x370) = *(undefined8 *)(puVar5 + -0x3b8);
              *(undefined8 *)(puVar5 + -0x360) = *(undefined8 *)(puVar5 + -0x3a8);
              *(char **)(puVar5 + -0x350) = s__108b39f4f;
              *(undefined1 **)(puVar5 + -0x348) = puVar5 + -0x330;
              *(undefined8 *)(puVar5 + -0x3a0) = uVar10;
              *(long *)(puVar5 + -0x398) = lVar3;
              *(undefined8 *)(puVar5 + -0x390) = uVar22;
              *(undefined8 *)(puVar5 + -0x388) = uVar4;
              *(long *)(puVar5 + -0x380) = lVar23;
              *(undefined8 *)(puVar5 + -0x378) = uVar28;
              *(undefined4 *)(puVar5 + -0x358) = uVar1;
              *(undefined4 *)(puVar5 + -0x354) = uVar2;
              (**(code **)(puVar17 + 0x20))(puVar20,puVar5 + -0x3a0);
            }
          }
        }
        else {
          lVar16 = 
          ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hef14ebe7153b4668E
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            uVar10 = *(undefined8 *)
                      (
                      ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hef14ebe7153b4668E
                      + 0x20);
            uVar28 = *(undefined8 *)
                      (
                      ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hef14ebe7153b4668E
                      + 0x28);
            *(undefined8 *)(puVar5 + -0x448) = 4;
            *(undefined8 *)(puVar5 + -0x440) = uVar10;
            *(undefined8 *)(puVar5 + -0x438) = uVar28;
            puVar17 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar17 = &UNK_10b3c24c8;
            }
            puVar20 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar20 = &UNK_109adfc03;
            }
            iVar9 = (**(code **)(puVar17 + 0x18))(puVar20,puVar5 + -0x448);
            if (iVar9 != 0) {
              *(undefined1 **)(puVar5 + -0x498) = puVar5 + -0x4a0;
              *(code **)(puVar5 + -0x490) =
                   __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
              ;
              *(char **)(puVar5 + -0x3b8) = s_incoming_body_decode_error__108ac8b6f;
              *(undefined1 **)(puVar5 + -0x3b0) = puVar5 + -0x498;
              *(undefined1 **)(puVar5 + -0x330) = puVar5 + -0x3b8;
              *(undefined **)(puVar5 + -0x328) = &UNK_10b208fd0;
              *(undefined8 *)(puVar5 + -0x3a0) = 1;
              *(undefined1 **)(puVar5 + -0x398) = puVar5 + -0x330;
              *(undefined8 *)(puVar5 + -0x390) = 1;
              *(long *)(puVar5 + -0x388) =
                   ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hef14ebe7153b4668E
                   + 0x30;
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar16,puVar20,puVar17,puVar5 + -0x448,puVar5 + -0x3a0);
            }
          }
        }
        uVar10 = *(undefined8 *)(puVar5 + -0x4a0);
        lVar16 = 4;
LAB_10081a064:
        lVar23 = 4;
      }
      else {
        *(long *)(puVar5 + -0x3a0) = lVar16;
        *(undefined8 *)(puVar5 + -0x398) = uVar10;
        *(undefined8 *)(puVar5 + -0x368) = *(undefined8 *)(puVar5 + -0x4f8);
        *(undefined8 *)(puVar5 + -0x370) = *(undefined8 *)(puVar5 + -0x500);
        *(undefined8 *)(puVar5 + -0x358) = *(undefined8 *)(puVar5 + -0x4e8);
        *(undefined8 *)(puVar5 + -0x360) = *(undefined8 *)(puVar5 + -0x4f0);
        *(undefined8 *)(puVar5 + -0x348) = *(undefined8 *)(puVar5 + -0x4d8);
        *(undefined8 *)(puVar5 + -0x350) = *(undefined8 *)(puVar5 + -0x4e0);
        *(undefined8 *)(puVar5 + -0x388) = *(undefined8 *)(puVar5 + -0x518);
        *(undefined8 *)(puVar5 + -0x390) = *(undefined8 *)(puVar5 + -0x520);
        *(undefined8 *)(puVar5 + -0x378) = *(undefined8 *)(puVar5 + -0x508);
        *(undefined8 *)(puVar5 + -0x380) = *(undefined8 *)(puVar5 + -0x510);
        if (lVar16 != 3) {
          *(undefined8 *)(puVar5 + -0x408) = *(undefined8 *)(puVar5 + -0x4f8);
          *(undefined8 *)(puVar5 + -0x410) = *(undefined8 *)(puVar5 + -0x500);
          *(undefined8 *)(puVar5 + -0x3f8) = *(undefined8 *)(puVar5 + -0x4e8);
          *(undefined8 *)(puVar5 + -0x400) = *(undefined8 *)(puVar5 + -0x4f0);
          *(undefined8 *)(puVar5 + -1000) = *(undefined8 *)(puVar5 + -0x4d8);
          *(undefined8 *)(puVar5 + -0x3f0) = *(undefined8 *)(puVar5 + -0x4e0);
          *(undefined8 *)(puVar5 + -0x428) = *(undefined8 *)(puVar5 + -0x518);
          *(undefined8 *)(puVar5 + -0x430) = *(undefined8 *)(puVar5 + -0x520);
          *(undefined8 *)(puVar5 + -0x418) = *(undefined8 *)(puVar5 + -0x508);
          *(undefined8 *)(puVar5 + -0x420) = *(undefined8 *)(puVar5 + -0x510);
          goto LAB_10081a064;
        }
        lVar16 = *(ulong *)(lVar25 + 0xf0) - 2;
        if (*(ulong *)(lVar25 + 0xf0) < 2) {
          lVar16 = 1;
        }
        if (lVar16 == 2) {
          if ((*(byte *)(lVar25 + 0xf8) & 1) != 0) goto LAB_100819b88;
LAB_10081a170:
          if (*(long *)(puVar5 + -0x388) != 0) goto LAB_10081a124;
          if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
              ((bRam000000010b637470 - 1 < 2 ||
               ((bRam000000010b637470 != 0 &&
                (cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                   (&
                                    __ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h7186caed309e9af4E
                                   ), cVar7 != '\0')))))) &&
             (iVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                (
                                ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h7186caed309e9af4E
                                ), iVar9 != 0)) {
            *(undefined **)(puVar5 + -0x3b8) = &UNK_108cb0cf2;
            *(undefined8 *)(puVar5 + -0x3b0) = 0x41;
            *(undefined1 **)(puVar5 + -0x330) = puVar5 + -0x3b8;
            *(undefined **)(puVar5 + -0x328) = &UNK_10b208fd0;
            *(undefined8 *)(puVar5 + -0x498) = 1;
            *(undefined1 **)(puVar5 + -0x490) = puVar5 + -0x330;
            *(undefined8 *)(puVar5 + -0x488) = 1;
            *(long *)(puVar5 + -0x480) =
                 ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h7186caed309e9af4E
                 + 0x30;
            FUN_10081a634(puVar5 + -0x498);
          }
          else {
            lVar16 = 
            ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h7186caed309e9af4E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
              uVar10 = *(undefined8 *)
                        (
                        ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h7186caed309e9af4E
                        + 0x20);
              uVar28 = *(undefined8 *)
                        (
                        ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h7186caed309e9af4E
                        + 0x28);
              *(undefined8 *)(puVar5 + -0x4b8) = 1;
              *(undefined8 *)(puVar5 + -0x4b0) = uVar10;
              *(undefined8 *)(puVar5 + -0x4a8) = uVar28;
              puVar17 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar17 = &UNK_10b3c24c8;
              }
              puVar20 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar20 = &UNK_109adfc03;
              }
              iVar9 = (**(code **)(puVar17 + 0x18))(puVar20,puVar5 + -0x4b8);
              if (iVar9 != 0) {
                *(undefined **)(puVar5 + -0x3b8) = &UNK_108cb0cf2;
                *(undefined8 *)(puVar5 + -0x3b0) = 0x41;
                *(undefined1 **)(puVar5 + -0x330) = puVar5 + -0x3b8;
                *(undefined **)(puVar5 + -0x328) = &UNK_10b208fd0;
                *(undefined8 *)(puVar5 + -0x498) = 1;
                *(undefined1 **)(puVar5 + -0x490) = puVar5 + -0x330;
                *(undefined8 *)(puVar5 + -0x488) = 1;
                *(long *)(puVar5 + -0x480) =
                     ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h7186caed309e9af4E
                     + 0x30;
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar16,puVar20,puVar17,puVar5 + -0x4b8,puVar5 + -0x498);
              }
            }
          }
          lVar23 = 4;
LAB_10081a324:
          if (*(long *)(puVar5 + -0x3a0) == 3) {
            (**(code **)(*(long *)(puVar5 + -0x398) + 0x20))
                      (puVar5 + -0x380,*(undefined8 *)(puVar5 + -0x390),
                       *(undefined8 *)(puVar5 + -0x388));
            uVar10 = extraout_x9_01;
          }
          else {
            FUN_100def764(puVar5 + -0x3a0);
            uVar10 = extraout_x9_02;
          }
          lVar16 = 5;
        }
        else {
          if (lVar16 != 1) {
            if (*(long *)(lVar25 + 0xf8) == 0) goto LAB_100819b88;
            goto LAB_10081a170;
          }
          if (*(char *)(lVar25 + 0x148) != '\f') goto LAB_10081a170;
LAB_100819b88:
          if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) {
            puVar14 = &
                      __ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hd23702855f830a5bE
            ;
            if (((bRam000000010b637488 - 1 < 2) ||
                ((bRam000000010b637488 != 0 &&
                 (cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                    (&
                                     __ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hd23702855f830a5bE
                                    ), cVar7 != '\0')))) &&
               (iVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                  (
                                  ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hd23702855f830a5bE
                                  ), iVar9 != 0)) {
              *(undefined **)(puVar5 + -0x3b8) = &UNK_108cb0d12;
              *(undefined8 *)(puVar5 + -0x3b0) = 0x2f;
              *(undefined1 **)(puVar5 + -0x330) = puVar5 + -0x3b8;
              *(undefined **)(puVar5 + -0x328) = &UNK_10b208fd0;
              *(undefined8 *)(puVar5 + -0x498) = 1;
              *(undefined1 **)(puVar5 + -0x490) = puVar5 + -0x330;
              *(undefined8 *)(puVar5 + -0x488) = 1;
              *(long *)(puVar5 + -0x480) =
                   ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hd23702855f830a5bE
                   + 0x30;
              puVar15 = puVar5 + -0x498;
              uVar10 = 0x100819c00;
              puVar6 = puVar5 + -0x560;
              goto SUB_10081a4f8;
            }
          }
          lVar16 = 
          ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hd23702855f830a5bE
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            uVar10 = *(undefined8 *)
                      (
                      ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hd23702855f830a5bE
                      + 0x20);
            uVar28 = *(undefined8 *)
                      (
                      ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hd23702855f830a5bE
                      + 0x28);
            *(undefined8 *)(puVar5 + -0x4d0) = 4;
            *(undefined8 *)(puVar5 + -0x4c8) = uVar10;
            *(undefined8 *)(puVar5 + -0x4c0) = uVar28;
            puVar17 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar17 = &UNK_10b3c24c8;
            }
            puVar20 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar20 = &UNK_109adfc03;
            }
            iVar9 = (**(code **)(puVar17 + 0x18))(puVar20,puVar5 + -0x4d0);
            if (iVar9 != 0) {
              *(undefined **)(puVar5 + -0x3b8) = &UNK_108cb0d12;
              *(undefined8 *)(puVar5 + -0x3b0) = 0x2f;
              *(undefined1 **)(puVar5 + -0x330) = puVar5 + -0x3b8;
              *(undefined **)(puVar5 + -0x328) = &UNK_10b208fd0;
              *(undefined8 *)(puVar5 + -0x498) = 1;
              *(undefined1 **)(puVar5 + -0x490) = puVar5 + -0x330;
              *(undefined8 *)(puVar5 + -0x488) = 1;
              *(long *)(puVar5 + -0x480) =
                   ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hd23702855f830a5bE
                   + 0x30;
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar16,puVar20,puVar17,puVar5 + -0x4d0,puVar5 + -0x498);
            }
          }
          if (*(long *)(puVar5 + -0x388) == 0) {
            lVar23 = 3;
            goto LAB_10081a324;
          }
          lVar16 = *(long *)(puVar5 + -0x3a0);
          uVar10 = *(undefined8 *)(puVar5 + -0x398);
          *(undefined8 *)(puVar5 + -0x408) = *(undefined8 *)(puVar5 + -0x368);
          *(undefined8 *)(puVar5 + -0x410) = *(undefined8 *)(puVar5 + -0x370);
          *(undefined8 *)(puVar5 + -0x3f8) = *(undefined8 *)(puVar5 + -0x358);
          *(undefined8 *)(puVar5 + -0x400) = *(undefined8 *)(puVar5 + -0x360);
          *(undefined8 *)(puVar5 + -1000) = *(undefined8 *)(puVar5 + -0x348);
          *(undefined8 *)(puVar5 + -0x3f0) = *(undefined8 *)(puVar5 + -0x350);
          *(undefined8 *)(puVar5 + -0x428) = *(undefined8 *)(puVar5 + -0x388);
          *(undefined8 *)(puVar5 + -0x430) = *(undefined8 *)(puVar5 + -0x390);
          *(undefined8 *)(puVar5 + -0x418) = *(undefined8 *)(puVar5 + -0x378);
          *(undefined8 *)(puVar5 + -0x420) = *(undefined8 *)(puVar5 + -0x380);
          lVar23 = 3;
        }
      }
      *(long *)(puVar5 + -0x3a0) = lVar16;
      *(undefined8 *)(puVar5 + -0x398) = uVar10;
      *(undefined8 *)(puVar5 + -0x368) = *(undefined8 *)(puVar5 + -0x408);
      *(undefined8 *)(puVar5 + -0x370) = *(undefined8 *)(puVar5 + -0x410);
      *(undefined8 *)(puVar5 + -0x358) = *(undefined8 *)(puVar5 + -0x3f8);
      *(undefined8 *)(puVar5 + -0x360) = *(undefined8 *)(puVar5 + -0x400);
      *(undefined8 *)(puVar5 + -0x348) = *(undefined8 *)(puVar5 + -1000);
      *(undefined8 *)(puVar5 + -0x350) = *(undefined8 *)(puVar5 + -0x3f0);
      *(undefined8 *)(puVar5 + -0x388) = *(undefined8 *)(puVar5 + -0x428);
      *(undefined8 *)(puVar5 + -0x390) = *(undefined8 *)(puVar5 + -0x430);
      *(undefined8 *)(puVar5 + -0x378) = *(undefined8 *)(puVar5 + -0x418);
      *(undefined8 *)(puVar5 + -0x380) = *(undefined8 *)(puVar5 + -0x420);
      if ((((*plVar24 == 1) || (*plVar24 == 2)) && (*(ulong *)(lVar25 + 0xf0) < 2)) &&
         (*(long *)(lVar25 + 0x120) != 0)) {
        plVar12 = *(long **)(lVar25 + 0x138);
        if (((ulong)plVar12 & 1) == 0) {
          lVar16 = plVar12[4];
          plVar12[4] = lVar16 + -1;
          LORelease();
          if (lVar16 == 1) {
            if (*plVar12 != 0) {
              _free(plVar12[1]);
            }
            goto LAB_10081a104;
          }
        }
        else if (*(long *)(lVar25 + 0x130) + ((ulong)plVar12 >> 5) != 0) {
          plVar12 = (long *)(*(long *)(lVar25 + 0x120) - ((ulong)plVar12 >> 5));
LAB_10081a104:
          _free(plVar12);
        }
      }
      *plVar24 = lVar23;
      FUN_10081c074(lVar25 + 200);
      FUN_100816a98(lVar25,puVar18);
LAB_10081a124:
      uVar10 = *(undefined8 *)(puVar5 + -0x380);
      uVar22 = *(undefined8 *)(puVar5 + -0x368);
      uVar28 = *(undefined8 *)(puVar5 + -0x370);
      puVar13[5] = *(undefined8 *)(puVar5 + -0x378);
      puVar13[4] = uVar10;
      puVar13[7] = uVar22;
      puVar13[6] = uVar28;
      uVar10 = *(undefined8 *)(puVar5 + -0x360);
      uVar22 = *(undefined8 *)(puVar5 + -0x348);
      uVar28 = *(undefined8 *)(puVar5 + -0x350);
      puVar13[9] = *(undefined8 *)(puVar5 + -0x358);
      puVar13[8] = uVar10;
      puVar13[0xb] = uVar22;
      puVar13[10] = uVar28;
      uVar10 = *(undefined8 *)(puVar5 + -0x3a0);
      uVar22 = *(undefined8 *)(puVar5 + -0x388);
      uVar28 = *(undefined8 *)(puVar5 + -0x390);
      puVar13[1] = *(undefined8 *)(puVar5 + -0x398);
      *puVar13 = uVar10;
      puVar13[3] = uVar22;
      puVar13[2] = uVar28;
      return;
    }
LAB_10081a428:
    *(long **)(puVar5 + -0x3a0) = plVar24;
    *(undefined **)(puVar5 + -0x398) = &DAT_1011c6264;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s_Hinternal_error__entered_unreach_108ac8b8e,puVar5 + -0x3a0,&UNK_10b223540);
    lVar16 = extraout_x1_01;
LAB_10081a44c:
    thunk_FUN_108855060(lVar25 + 0x10,lVar16,0x19,1,1);
    lVar16 = *(long *)(lVar25 + 0x20);
    uVar27 = extraout_x15_17;
LAB_100819d20:
    puVar11 = (undefined8 *)(*(long *)(lVar25 + 0x18) + lVar16);
    puVar11[1] = 0x6e6f432030303120;
    *puVar11 = 0x312e312f50545448;
    *(undefined8 *)((long)puVar11 + 0x11) = 0xa0d0a0d65756e69;
    *(undefined8 *)((long)puVar11 + 9) = 0x746e6f4320303031;
    *(long *)(lVar25 + 0x20) = lVar16 + 0x19;
  }
  uVar19 = *(ulong *)(lVar25 + 0xf0);
  lVar16 = uVar19 - 2;
  if (uVar19 < 2) {
    lVar16 = 1;
  }
  *(undefined **)(puVar5 + -0x540) = puVar18;
  *(undefined8 **)(puVar5 + -0x538) = puVar13;
  if ((lVar16 == 0) || (lVar16 != 1)) {
    uVar28 = *(undefined8 *)(lVar25 + 0xf8);
    uVar4 = *(undefined8 *)(lVar25 + 0x100);
    uVar22 = *(undefined8 *)(lVar25 + 0x108);
    uVar10 = *(undefined8 *)(lVar25 + 0x110);
    puVar20 = *(undefined **)(lVar25 + 0x118);
    lVar16 = *(long *)(lVar25 + 0x120);
    unaff_x22 = *(undefined **)(lVar25 + 0x128);
    puVar17 = *(undefined **)(lVar25 + 0x130);
    uVar27 = *(ulong *)(lVar25 + 0x138);
    uVar26 = *(undefined8 *)(lVar25 + 0x140);
    uVar21 = (uint)*(byte *)(lVar25 + 0x148);
    *(undefined4 *)(puVar5 + -0x3bd) = *(undefined4 *)(lVar25 + 0x14c);
    *(undefined4 *)(puVar5 + -0x3c0) = *(undefined4 *)(lVar25 + 0x149);
    lVar23 = *plVar24;
  }
  else {
    uVar21 = (uint)*(byte *)(lVar25 + 0x148);
    uVar10 = *(undefined8 *)(lVar25 + 0x110);
    puVar20 = *(undefined **)(lVar25 + 0x118);
    lVar23 = *(long *)(lVar25 + 0x120);
    if (lVar23 == 0) {
      lVar16 = 0;
    }
    else {
      *(uint *)(puVar5 + -0x544) = (uint)*(byte *)(lVar25 + 0x148);
      unaff_x22 = *(undefined **)(lVar25 + 0x128);
      if (unaff_x22 == (undefined *)0x0) {
        lVar16 = 1;
      }
      else {
        lVar16 = _malloc(unaff_x22);
        if (lVar16 == 0) {
          puVar14 = (undefined *)func_0x0001087c9084(1,unaff_x22);
          FUN_100e2f01c(puVar5 + -0x3a0);
          __Unwind_Resume(puVar14);
          uVar10 = 0x10081a4f8;
          puVar15 = (undefined1 *)FUN_107c05ccc();
SUB_10081a4f8:
          *(undefined **)(puVar6 + -0x30) = unaff_x22;
          *(long *)(puVar6 + -0x28) = lVar25;
          *(undefined **)(puVar6 + -0x20) = puVar20;
          *(undefined **)(puVar6 + -0x18) = puVar14;
          *(undefined1 **)(puVar6 + -0x10) = unaff_x29;
          *(undefined8 *)(puVar6 + -8) = uVar10;
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                    (___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hd23702855f830a5bE
                     ,puVar15);
          lVar16 = 
          ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hd23702855f830a5bE
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            uVar10 = *(undefined8 *)
                      (
                      ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hd23702855f830a5bE
                      + 0x20);
            uVar28 = *(undefined8 *)
                      (
                      ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hd23702855f830a5bE
                      + 0x28);
            *(undefined8 *)(puVar6 + -200) = 4;
            *(undefined8 *)(puVar6 + -0xc0) = uVar10;
            *(undefined8 *)(puVar6 + -0xb8) = uVar28;
            puVar17 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar17 = &UNK_10b3c24c8;
            }
            puVar20 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar20 = &UNK_109adfc03;
            }
            iVar9 = (**(code **)(puVar17 + 0x18))(puVar20,puVar6 + -200);
            if (iVar9 != 0) {
              lVar25 = *(long *)(lVar16 + 0x60);
              uVar28 = *(undefined8 *)(lVar16 + 0x68);
              lVar23 = *(long *)(lVar16 + 0x50);
              uVar22 = *(undefined8 *)(lVar16 + 0x58);
              uVar10 = 1;
              if (lVar23 == 0) {
                uVar10 = 2;
              }
              uVar1 = *(undefined4 *)(lVar16 + 8);
              uVar2 = *(undefined4 *)(lVar16 + 0xc);
              *(undefined1 **)(puVar6 + -0x50) = puVar15;
              puVar6[-0x48] = 1;
              *(undefined1 **)(puVar6 + -0x40) = puVar6 + -0x50;
              *(undefined **)(puVar6 + -0x38) = &DAT_1061c2098;
              uVar4 = 1;
              if (lVar25 == 0) {
                uVar4 = 2;
              }
              *(undefined8 *)(puVar6 + -0x78) = *(undefined8 *)(puVar6 + -0xc0);
              *(undefined8 *)(puVar6 + -0x80) = *(undefined8 *)(puVar6 + -200);
              *(undefined8 *)(puVar6 + -0x70) = *(undefined8 *)(puVar6 + -0xb8);
              *(char **)(puVar6 + -0x60) = s__108b39f4f;
              *(undefined1 **)(puVar6 + -0x58) = puVar6 + -0x40;
              *(undefined8 *)(puVar6 + -0xb0) = uVar10;
              *(long *)(puVar6 + -0xa8) = lVar23;
              *(undefined8 *)(puVar6 + -0xa0) = uVar22;
              *(undefined8 *)(puVar6 + -0x98) = uVar4;
              *(long *)(puVar6 + -0x90) = lVar25;
              *(undefined8 *)(puVar6 + -0x88) = uVar28;
              *(undefined4 *)(puVar6 + -0x68) = uVar1;
              *(undefined4 *)(puVar6 + -100) = uVar2;
              (**(code **)(puVar17 + 0x20))(puVar20,puVar6 + -0xb0);
            }
          }
          return;
        }
      }
      _memcpy(lVar16,lVar23,unaff_x22);
      uVar27 = 0x40 - LZCOUNT((ulong)unaff_x22 >> 10);
      if (6 < uVar27) {
        uVar27 = 7;
      }
      uVar27 = uVar27 << 2 | 1;
      uVar21 = *(uint *)(puVar5 + -0x544);
    }
    uVar26 = *(undefined8 *)(lVar25 + 0x140);
    uVar19 = uVar19 & 1;
    uVar28 = *(undefined8 *)(lVar25 + 0xf8);
    uVar4 = *(undefined8 *)(lVar25 + 0x100);
    uVar22 = *(undefined8 *)(lVar25 + 0x108);
    lVar23 = *plVar24;
    puVar17 = unaff_x22;
  }
  if ((((lVar23 == 1) || (lVar23 == 2)) && (*(ulong *)(lVar25 + 0xf0) < 2)) &&
     (lVar23 = *(long *)(lVar25 + 0x120), lVar23 != 0)) {
    plVar24 = *(long **)(lVar25 + 0x138);
    if (((ulong)plVar24 & 1) == 0) {
      lVar23 = plVar24[4];
      plVar24[4] = lVar23 + -1;
      LORelease();
      if (lVar23 != 1) goto LAB_100819f08;
      *(ulong *)(puVar5 + -0x558) = uVar27;
      *(undefined **)(puVar5 + -0x550) = puVar20;
      *(uint *)(puVar5 + -0x544) = uVar21;
      if (*plVar24 != 0) {
        lVar23 = plVar24[1];
        *(long **)(puVar5 + -0x560) = plVar24;
        _free(lVar23);
        plVar24 = *(long **)(puVar5 + -0x560);
      }
    }
    else {
      if (*(long *)(lVar25 + 0x130) + ((ulong)plVar24 >> 5) == 0) goto LAB_100819f08;
      *(ulong *)(puVar5 + -0x558) = uVar27;
      *(undefined **)(puVar5 + -0x550) = puVar20;
      *(uint *)(puVar5 + -0x544) = uVar21;
      plVar24 = (long *)(lVar23 - ((ulong)plVar24 >> 5));
    }
    _free(plVar24);
    uVar27 = *(ulong *)(puVar5 + -0x558);
    puVar20 = *(undefined **)(puVar5 + -0x550);
    uVar21 = *(uint *)(puVar5 + -0x544);
  }
LAB_100819f08:
  *(undefined8 *)(lVar25 + 0xe8) = 2;
  *(ulong *)(lVar25 + 0xf0) = uVar19;
  *(undefined8 *)(lVar25 + 0xf8) = uVar28;
  *(undefined8 *)(lVar25 + 0x100) = uVar4;
  *(undefined8 *)(lVar25 + 0x108) = uVar22;
  *(undefined8 *)(lVar25 + 0x110) = uVar10;
  *(undefined **)(lVar25 + 0x118) = puVar20;
  *(long *)(lVar25 + 0x120) = lVar16;
  *(undefined **)(lVar25 + 0x128) = unaff_x22;
  *(undefined **)(lVar25 + 0x130) = puVar17;
  *(ulong *)(lVar25 + 0x138) = uVar27;
  *(undefined8 *)(lVar25 + 0x140) = uVar26;
  *(char *)(lVar25 + 0x148) = (char)uVar21;
  *(undefined4 *)(lVar25 + 0x14c) = *(undefined4 *)(puVar5 + -0x3bd);
  *(undefined4 *)(lVar25 + 0x149) = *(undefined4 *)(puVar5 + -0x3c0);
  FUN_1008197b4(*(undefined8 *)(puVar5 + -0x538),lVar25,*(undefined8 *)(puVar5 + -0x540));
  return;
}

