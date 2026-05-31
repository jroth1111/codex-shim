
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1008298d8(ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *extraout_x1;
  long *extraout_x1_00;
  long *extraout_x1_01;
  long *extraout_x1_02;
  long *extraout_x1_03;
  long *extraout_x1_04;
  long *extraout_x1_05;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong unaff_x19;
  long lVar17;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined1 auVar18 [16];
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  code *in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000060;
  long *plStack0000000000000068;
  undefined *puStack0000000000000070;
  undefined *puStack0000000000000080;
  
code_r0x0001008298d8:
  *(char **)(unaff_x29 + -0x78) = s_flushed_bytes_108ac8993;
  *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x68;
  *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x78;
  *(undefined **)(unaff_x29 + -0x80) = &UNK_10b208fd0;
  puStack0000000000000070 = (undefined *)(unaff_x29 + -0x88);
  plStack0000000000000068 = (long *)0x1;
  puStack0000000000000080 = (undefined *)param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x00000068);
  lVar17 = 
  ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_20poll_flush_flattened10__CALLSITE17h82dbbe10aeb2f55cE
  ;
  plVar12 = extraout_x1_00;
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uVar3 = *(undefined8 *)
             (
             ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_20poll_flush_flattened10__CALLSITE17h82dbbe10aeb2f55cE
             + 0x20);
    uVar4 = *(undefined8 *)
             (
             ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_20poll_flush_flattened10__CALLSITE17h82dbbe10aeb2f55cE
             + 0x28);
    *(undefined8 *)(unaff_x29 + -200) = 4;
    *(undefined8 *)(unaff_x29 + -0xc0) = uVar3;
    *(undefined8 *)(unaff_x29 + -0xb8) = uVar4;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar8 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -200);
    plVar12 = extraout_x1_01;
    if (iVar8 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar17,puVar2,puVar1,unaff_x29 + -200,&stack0x00000068);
      plVar12 = extraout_x1_02;
    }
  }
LAB_100829b20:
  unaff_x24 = unaff_x24 + (long)unaff_x22;
  lVar17 = unaff_x23 - unaff_x24;
  *(ulong *)(unaff_x20 + 0x28) = unaff_x24;
  if (lVar17 == 0) {
    *unaff_x28 = 0;
    unaff_x28[1] = 0;
    FUN_10081c074(unaff_x20 + 0xa8,plVar12);
    FUN_100817084();
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
       (((bVar6 = bRam000000010b6373b0, bRam000000010b6373b0 - 1 < 2 ||
         ((bRam000000010b6373b0 != 0 &&
          (bVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_10poll_flush10__CALLSITE17h3020f4671b81e2cdE
                             ), bVar6 != 0)))) &&
        (iVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_10poll_flush10__CALLSITE17h3020f4671b81e2cdE
                            ,bVar6),
        lVar17 = 
        ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_10poll_flush10__CALLSITE17h3020f4671b81e2cdE
        , iVar8 != 0)))) {
      lVar9 = ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_10poll_flush10__CALLSITE17h3020f4671b81e2cdE
              + 0x30;
      plStack0000000000000068 = (long *)&UNK_10b223500;
      puStack0000000000000070 = &DAT_100c7b3a0;
      puStack0000000000000080 =
           &
           __ZN75__LT_rama_http_core__proto__h1__conn__State_u20_as_u20_core__fmt__Debug_GT_3fmt17h31544fb45b4b2b2dE
      ;
      *(char **)(unaff_x29 + -0xe0) = s_flushed_____108ac8a8d;
      *(long ***)(unaff_x29 + -0xd8) = &stack0x00000068;
      *(long *)(unaff_x29 + -0x100) = unaff_x29 + -0xe0;
      *(undefined **)(unaff_x29 + -0xf8) = &UNK_10b208fd0;
      *(undefined8 *)(unaff_x29 + -200) = 1;
      *(long *)(unaff_x29 + -0xc0) = unaff_x29 + -0x100;
      *(undefined8 *)(unaff_x29 + -0xb8) = 1;
      *(long *)(unaff_x29 + -0xb0) = lVar9;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar17,unaff_x29 + -200);
      lVar17 = 
      ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_10poll_flush10__CALLSITE17h3020f4671b81e2cdE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        in_stack_00000050 =
             *(code **)(
                       ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_10poll_flush10__CALLSITE17h3020f4671b81e2cdE
                       + 0x20);
        in_stack_00000058 =
             *(undefined8 *)
              (
              ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_10poll_flush10__CALLSITE17h3020f4671b81e2cdE
              + 0x28);
        in_stack_00000048 = (undefined8 *)0x5;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar8 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000048);
        if (iVar8 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar17,puVar2,puVar1,&stack0x00000048,unaff_x29 + -200);
        }
      }
    }
    else {
      lVar17 = 
      ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_10poll_flush10__CALLSITE17h3020f4671b81e2cdE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        in_stack_00000038 =
             *(undefined8 *)
              (
              ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_10poll_flush10__CALLSITE17h3020f4671b81e2cdE
              + 0x20);
        in_stack_00000040 =
             *(undefined8 *)
              (
              ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_10poll_flush10__CALLSITE17h3020f4671b81e2cdE
              + 0x28);
        in_stack_00000030 = 5;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar8 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000030);
        if (iVar8 != 0) {
          in_stack_00000060 =
               ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_10poll_flush10__CALLSITE17h3020f4671b81e2cdE
               + 0x30;
          *(undefined **)(unaff_x29 + -200) = &UNK_10b223500;
          *(undefined **)(unaff_x29 + -0xc0) = &DAT_100c7b3a0;
          *(long *)(unaff_x29 + -0xb8) = unaff_x20 + 0xa8;
          *(undefined **)(unaff_x29 + -0xb0) =
               &
               __ZN75__LT_rama_http_core__proto__h1__conn__State_u20_as_u20_core__fmt__Debug_GT_3fmt17h31544fb45b4b2b2dE
          ;
          *(undefined1 **)(unaff_x29 + -0x68) = &stack0x00000468;
          *(undefined **)(unaff_x29 + -0x60) = &UNK_10b208fd0;
          in_stack_00000050 = (code *)(unaff_x29 + -0x68);
          in_stack_00000048 = (undefined8 *)0x1;
          in_stack_00000058 = 1;
          lVar9 = *(long *)(lVar17 + 0x60);
          puStack0000000000000070 = *(undefined **)(lVar17 + 0x50);
          plStack0000000000000068 = (long *)0x1;
          if (puStack0000000000000070 == (undefined *)0x0) {
            plStack0000000000000068 = (long *)0x2;
          }
          *(undefined8 ***)(unaff_x29 + -0x100) = &stack0x00000048;
          *(undefined1 *)(unaff_x29 + -0xf8) = 1;
          *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -0x100;
          *(undefined **)(unaff_x29 + -0xd8) = &DAT_1061c2098;
          puStack0000000000000080 = (undefined *)0x1;
          if (lVar9 == 0) {
            puStack0000000000000080 = (undefined *)0x2;
          }
          (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000068);
        }
      }
    }
    return 0;
  }
  if (unaff_x22 == (long *)0x0) {
    if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
      unaff_x22 = (long *)&
                          __ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_20poll_flush_flattened10__CALLSITE17h40c476e6c93acb18E
      ;
      bVar6 = bRam000000010b637308;
      if (((bRam000000010b637308 - 1 < 2) ||
          ((bRam000000010b637308 != 0 &&
           (bVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&
                               __ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_20poll_flush_flattened10__CALLSITE17h40c476e6c93acb18E
                              ), bVar6 != 0)))) &&
         (iVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_20poll_flush_flattened10__CALLSITE17h40c476e6c93acb18E
                             ,bVar6), iVar8 != 0)) {
        unaff_x23 = ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_20poll_flush_flattened10__CALLSITE17h40c476e6c93acb18E
                    + 0x30;
        unaff_x21 = 
        ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_20poll_flush_flattened10__CALLSITE17h40c476e6c93acb18E
        ;
        if (unaff_x19 == 0) goto LAB_100829f1c;
        uVar16 = 0;
        if (unaff_x25 <= *(ulong *)(unaff_x20 + 0x40)) {
          uVar16 = unaff_x25;
        }
        lVar13 = *(ulong *)(unaff_x20 + 0x40) - uVar16;
        uVar14 = unaff_x25 - lVar13;
        lVar9 = unaff_x19 - uVar14;
        uVar16 = lVar13 + unaff_x19;
        if (uVar14 <= unaff_x19 && lVar9 != 0) {
          uVar16 = unaff_x25;
        }
        lVar15 = 0;
        if (uVar14 <= unaff_x19 && lVar9 != 0) {
          lVar15 = lVar9;
        }
        goto LAB_100829f28;
      }
    }
    lVar9 = 
    ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_20poll_flush_flattened10__CALLSITE17h40c476e6c93acb18E
    ;
    unaff_x22 = (long *)0x1700000003;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      in_stack_00000050 =
           *(code **)(
                     ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_20poll_flush_flattened10__CALLSITE17h40c476e6c93acb18E
                     + 0x20);
      in_stack_00000058 =
           *(undefined8 *)
            (
            ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_20poll_flush_flattened10__CALLSITE17h40c476e6c93acb18E
            + 0x28);
      in_stack_00000048 = (undefined8 *)0x5;
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar8 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000048);
      if (iVar8 != 0) {
        uVar16 = ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_20poll_flush_flattened10__CALLSITE17h40c476e6c93acb18E
                 + 0x30;
        FUN_100f3f428(&stack0x00000068,in_stack_00000028);
        lVar13 = FUN_1004d8568(&stack0x00000068);
        *(long *)(unaff_x29 + -0x88) = lVar17 + lVar13;
        *(long *)(unaff_x29 + -200) = unaff_x29 + -0x88;
        *(undefined **)(unaff_x29 + -0xc0) =
             &
             __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
        ;
        *(char **)(unaff_x29 + -0x68) = s_write_returned_zero__but_bytes_r_108ac89a5;
        *(long *)(unaff_x29 + -0x60) = unaff_x29 + -200;
        *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x68;
        *(undefined **)(unaff_x29 + -0x70) = &UNK_10b208fd0;
        puStack0000000000000070 = (undefined *)(unaff_x29 + -0x78);
        plStack0000000000000068 = (long *)0x1;
        puStack0000000000000080 = (undefined *)uVar16;
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar9,puVar2,puVar1,&stack0x00000048,&stack0x00000068);
      }
    }
LAB_10082a048:
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
        ((bRam000000010b637920 - 1 < 2 ||
         ((bRam000000010b637920 != 0 &&
          (cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN14rama_http_core5proto2h18dispatch32Dispatcher_LT_D_C_Bs_C_I_C_T_GT_10poll_flush28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb8a8c201e4423acfE
                             ), cVar7 != '\0')))))) &&
       (iVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (
                          ___ZN14rama_http_core5proto2h18dispatch32Dispatcher_LT_D_C_Bs_C_I_C_T_GT_10poll_flush28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb8a8c201e4423acfE
                          ),
       lVar17 = 
       ___ZN14rama_http_core5proto2h18dispatch32Dispatcher_LT_D_C_Bs_C_I_C_T_GT_10poll_flush28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb8a8c201e4423acfE
       , iVar8 != 0)) {
      puStack0000000000000080 =
           (undefined *)
           (
           ___ZN14rama_http_core5proto2h18dispatch32Dispatcher_LT_D_C_Bs_C_I_C_T_GT_10poll_flush28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb8a8c201e4423acfE
           + 0x30);
      in_stack_00000048 = (undefined8 *)&stack0x00000468;
      in_stack_00000050 =
           __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
      ;
      *(char **)(unaff_x29 + -0xe0) = s_error_writing__108ac8d9c;
      *(undefined8 ***)(unaff_x29 + -0xd8) = &stack0x00000048;
      *(long *)(unaff_x29 + -0x100) = unaff_x29 + -0xe0;
      *(undefined **)(unaff_x29 + -0xf8) = &UNK_10b208fd0;
      puStack0000000000000070 = (undefined *)(unaff_x29 + -0x100);
      plStack0000000000000068 = (long *)0x1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar17,&stack0x00000068);
      lVar17 = 
      ___ZN14rama_http_core5proto2h18dispatch32Dispatcher_LT_D_C_Bs_C_I_C_T_GT_10poll_flush28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb8a8c201e4423acfE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uVar3 = *(undefined8 *)
                 (
                 ___ZN14rama_http_core5proto2h18dispatch32Dispatcher_LT_D_C_Bs_C_I_C_T_GT_10poll_flush28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb8a8c201e4423acfE
                 + 0x20);
        uVar4 = *(undefined8 *)
                 (
                 ___ZN14rama_http_core5proto2h18dispatch32Dispatcher_LT_D_C_Bs_C_I_C_T_GT_10poll_flush28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb8a8c201e4423acfE
                 + 0x28);
        *(undefined8 *)(unaff_x29 + -200) = 4;
        *(undefined8 *)(unaff_x29 + -0xc0) = uVar3;
        *(undefined8 *)(unaff_x29 + -0xb8) = uVar4;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar8 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -200);
        if (iVar8 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar17,puVar2,puVar1,unaff_x29 + -200,&stack0x00000068);
        }
      }
    }
    else {
      lVar17 = 
      ___ZN14rama_http_core5proto2h18dispatch32Dispatcher_LT_D_C_Bs_C_I_C_T_GT_10poll_flush28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb8a8c201e4423acfE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uVar3 = *(undefined8 *)
                 (
                 ___ZN14rama_http_core5proto2h18dispatch32Dispatcher_LT_D_C_Bs_C_I_C_T_GT_10poll_flush28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb8a8c201e4423acfE
                 + 0x20);
        uVar4 = *(undefined8 *)
                 (
                 ___ZN14rama_http_core5proto2h18dispatch32Dispatcher_LT_D_C_Bs_C_I_C_T_GT_10poll_flush28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb8a8c201e4423acfE
                 + 0x28);
        *(undefined8 *)(unaff_x29 + -200) = 4;
        *(undefined8 *)(unaff_x29 + -0xc0) = uVar3;
        *(undefined8 *)(unaff_x29 + -0xb8) = uVar4;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar8 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -200);
        if (iVar8 != 0) {
          puStack0000000000000080 =
               (undefined *)
               (
               ___ZN14rama_http_core5proto2h18dispatch32Dispatcher_LT_D_C_Bs_C_I_C_T_GT_10poll_flush28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb8a8c201e4423acfE
               + 0x30);
          in_stack_00000048 = (undefined8 *)&stack0x00000468;
          in_stack_00000050 =
               __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
          ;
          *(char **)(unaff_x29 + -0xe0) = s_error_writing__108ac8d9c;
          *(undefined8 ***)(unaff_x29 + -0xd8) = &stack0x00000048;
          *(long *)(unaff_x29 + -0x100) = unaff_x29 + -0xe0;
          *(undefined **)(unaff_x29 + -0xf8) = &UNK_10b208fd0;
          puStack0000000000000070 = (undefined *)(unaff_x29 + -0x100);
          plStack0000000000000068 = (long *)0x1;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar17,puVar2,puVar1,unaff_x29 + -200,&stack0x00000068);
        }
      }
    }
    *(long **)(unaff_x29 + -0xe0) = unaff_x22;
    puVar10 = (undefined8 *)_malloc(0x18);
    if (puVar10 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
    }
    else {
      *puVar10 = 0;
      *(undefined1 *)(puVar10 + 2) = 9;
      in_stack_00000048 = puVar10;
      plStack0000000000000068 = unaff_x22;
      puVar11 = (undefined8 *)_malloc(8);
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = unaff_x22;
        *puVar10 = puVar11;
        puVar10[1] = &UNK_10b212e38;
        return 0;
      }
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10082a2dc);
    (*pcVar5)();
  }
  if (unaff_x23 < unaff_x24) {
    __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(unaff_x24);
LAB_100829f1c:
    lVar13 = 0;
    uVar16 = 0;
    lVar15 = 0;
LAB_100829f28:
    plStack0000000000000068 = (long *)(unaff_x26 + lVar13 * 0x50);
    puStack0000000000000070 = (undefined *)(unaff_x26 + uVar16 * 0x50);
    puStack0000000000000080 = (undefined *)(unaff_x26 + lVar15 * 0x50);
    lVar9 = FUN_1004d8568(&stack0x00000068);
    *(long *)(unaff_x29 + -0x98) = lVar17 + lVar9;
    *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x98;
    *(undefined **)(unaff_x29 + -0x60) =
         &
         __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    *(char **)(unaff_x29 + -0x78) = s_write_returned_zero__but_bytes_r_108ac89a5;
    *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x68;
    *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x78;
    *(undefined **)(unaff_x29 + -0x80) = &UNK_10b208fd0;
    puStack0000000000000070 = (undefined *)(unaff_x29 + -0x88);
    plStack0000000000000068 = (long *)0x1;
    puStack0000000000000080 = (undefined *)unaff_x23;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(unaff_x21,&stack0x00000068);
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      lVar17 = *unaff_x22;
      uVar3 = *(undefined8 *)(lVar17 + 0x20);
      uVar4 = *(undefined8 *)(lVar17 + 0x28);
      *(undefined8 *)(unaff_x29 + -200) = 5;
      *(undefined8 *)(unaff_x29 + -0xc0) = uVar3;
      *(undefined8 *)(unaff_x29 + -0xb8) = uVar4;
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar8 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -200);
      if (iVar8 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar17,puVar2,puVar1,unaff_x29 + -200,&stack0x00000068);
      }
    }
    unaff_x22 = (long *)0x1700000003;
    goto LAB_10082a048;
  }
  auVar18 = func_0x0001060f8f1c(in_stack_00000018);
  unaff_x22 = auVar18._8_8_;
  if (auVar18._0_8_ == 2) {
    return 1;
  }
  if ((auVar18._0_8_ & 1) != 0) goto LAB_10082a048;
  *(long **)(unaff_x29 + -0xe8) = unaff_x22;
  plVar12 = unaff_x22;
  if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) {
    plVar12 = (long *)(ulong)bRam000000010b637320;
    if (bRam000000010b637320 - 1 < 2) {
      iVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                        (
                        ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_20poll_flush_flattened10__CALLSITE17h82dbbe10aeb2f55cE
                        );
      plVar12 = extraout_x1;
      param_2 = 
      ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_20poll_flush_flattened10__CALLSITE17h82dbbe10aeb2f55cE
      ;
joined_r0x000100829b64:
      ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_20poll_flush_flattened10__CALLSITE17h82dbbe10aeb2f55cE
           = param_2;
      if (iVar8 != 0) goto LAB_1008298b4;
    }
    else if (bRam000000010b637320 != 0) {
      bVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                        (&
                         __ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_20poll_flush_flattened10__CALLSITE17h82dbbe10aeb2f55cE
                        );
      plVar12 = (long *)(ulong)bVar6;
      if (bVar6 != 0) {
        iVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (
                          ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_20poll_flush_flattened10__CALLSITE17h82dbbe10aeb2f55cE
                          );
        plVar12 = extraout_x1_05;
        param_2 = 
        ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_20poll_flush_flattened10__CALLSITE17h82dbbe10aeb2f55cE
        ;
        goto joined_r0x000100829b64;
      }
    }
  }
  lVar17 = 
  ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_20poll_flush_flattened10__CALLSITE17h82dbbe10aeb2f55cE
  ;
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uVar3 = *(undefined8 *)
             (
             ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_20poll_flush_flattened10__CALLSITE17h82dbbe10aeb2f55cE
             + 0x20);
    uVar4 = *(undefined8 *)
             (
             ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_20poll_flush_flattened10__CALLSITE17h82dbbe10aeb2f55cE
             + 0x28);
    *(undefined8 *)(unaff_x29 + -0xe0) = 4;
    *(undefined8 *)(unaff_x29 + -0xd8) = uVar3;
    *(undefined8 *)(unaff_x29 + -0xd0) = uVar4;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar8 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -0xe0);
    plVar12 = extraout_x1_03;
    if (iVar8 != 0) {
      lVar9 = ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_20poll_flush_flattened10__CALLSITE17h82dbbe10aeb2f55cE
              + 0x30;
      *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0xe8;
      *(undefined **)(unaff_x29 + -0x80) =
           &
           __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      *(char **)(unaff_x29 + -0x98) = s_flushed_bytes_108ac8993;
      *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0x88;
      *(long *)(unaff_x29 + -0xb0) = lVar9;
      *(long *)(unaff_x29 + -0xa8) = unaff_x29 + -0x98;
      *(undefined **)(unaff_x29 + -0xa0) = &UNK_10b208fd0;
      *(undefined8 *)(unaff_x29 + -200) = 1;
      *(long *)(unaff_x29 + -0xc0) = unaff_x29 + -0xa8;
      *(undefined8 *)(unaff_x29 + -0xb8) = 1;
      lVar9 = *(long *)(lVar17 + 0x60);
      puStack0000000000000070 = *(undefined **)(lVar17 + 0x50);
      plStack0000000000000068 = (long *)0x1;
      if (puStack0000000000000070 == (undefined *)0x0) {
        plStack0000000000000068 = (long *)0x2;
      }
      *(long *)(unaff_x29 + -0x78) = unaff_x29 + -200;
      *(undefined1 *)(unaff_x29 + -0x70) = 1;
      *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x78;
      *(undefined **)(unaff_x29 + -0x60) = &DAT_1061c2098;
      puStack0000000000000080 = (undefined *)0x1;
      if (lVar9 == 0) {
        puStack0000000000000080 = (undefined *)0x2;
      }
      (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000068);
      plVar12 = extraout_x1_04;
    }
  }
  goto LAB_100829b20;
LAB_1008298b4:
  param_1 = param_2 + 0x30;
  *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0xe8;
  *(undefined **)(unaff_x29 + -0x60) =
       &
       __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
  ;
  goto code_r0x0001008298d8;
}

