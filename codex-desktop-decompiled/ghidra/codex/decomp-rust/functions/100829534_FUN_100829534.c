
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100829534(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong *puVar15;
  long *extraout_x1;
  long *extraout_x1_00;
  long *extraout_x1_01;
  long *extraout_x1_02;
  long *extraout_x1_03;
  long *extraout_x1_04;
  long *extraout_x1_05;
  long *extraout_x1_06;
  long *plVar16;
  long lVar17;
  long unaff_x20;
  long *unaff_x22;
  undefined8 unaff_x24;
  undefined *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined1 auVar18 [16];
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  char *in_stack_00000048;
  code *in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000060;
  undefined8 in_stack_00000088;
  
code_r0x000100829534:
  *(char **)(unaff_x29 + -0xe0) = s_flushed_bytes_108ac8993;
  *(char ***)(unaff_x29 + -0xd8) = &stack0x00000048;
  *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0xe0;
  *(undefined **)(unaff_x29 + -0x60) = &UNK_10b208fd0;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x00000068);
  puVar4 = 
  ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_10poll_flush10__CALLSITE17hebab565ef9b33177E
  ;
  plVar14 = extraout_x1_01;
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uVar5 = *(undefined8 *)
             (
             ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_10poll_flush10__CALLSITE17hebab565ef9b33177E
             + 0x20);
    uVar6 = *(undefined8 *)
             (
             ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_10poll_flush10__CALLSITE17hebab565ef9b33177E
             + 0x28);
    *(undefined8 *)(unaff_x29 + -200) = 4;
    *(undefined8 *)(unaff_x29 + -0xc0) = uVar5;
    *(undefined8 *)(unaff_x29 + -0xb8) = uVar6;
    puVar2 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_10b3c24c8;
    }
    unaff_x27 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      unaff_x27 = &UNK_109adfc03;
    }
    iVar10 = (**(code **)(puVar2 + 0x18))(unaff_x27,unaff_x29 + -200);
    plVar14 = extraout_x1_02;
    if (iVar10 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (puVar4,unaff_x27,puVar2,unaff_x29 + -200,&stack0x00000068);
      plVar14 = extraout_x1_03;
    }
  }
LAB_100829780:
  lVar17 = *(long *)(unaff_x20 + 0x20) - *(long *)(unaff_x20 + 0x28);
  lVar12 = FUN_1004d8568(&stack0x00000068,plVar14);
  if (lVar17 + lVar12 == 0) {
    FUN_10081c074(unaff_x20 + 0xa8);
    FUN_100817084();
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
       (((bVar8 = bRam000000010b6373b0, bRam000000010b6373b0 - 1 < 2 ||
         ((bRam000000010b6373b0 != 0 &&
          (bVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_10poll_flush10__CALLSITE17h3020f4671b81e2cdE
                             ), bVar8 != 0)))) &&
        (iVar10 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_10poll_flush10__CALLSITE17h3020f4671b81e2cdE
                             ,bVar8),
        lVar12 = 
        ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_10poll_flush10__CALLSITE17h3020f4671b81e2cdE
        , iVar10 != 0)))) {
      lVar17 = ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_10poll_flush10__CALLSITE17h3020f4671b81e2cdE
               + 0x30;
      *(char **)(unaff_x29 + -0xe0) = s_flushed_____108ac8a8d;
      *(undefined1 **)(unaff_x29 + -0xd8) = &stack0x00000068;
      *(long *)(unaff_x29 + -0x100) = unaff_x29 + -0xe0;
      *(undefined **)(unaff_x29 + -0xf8) = &UNK_10b208fd0;
      *(undefined8 *)(unaff_x29 + -200) = 1;
      *(long *)(unaff_x29 + -0xc0) = unaff_x29 + -0x100;
      *(undefined8 *)(unaff_x29 + -0xb8) = 1;
      *(long *)(unaff_x29 + -0xb0) = lVar17;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar12,unaff_x29 + -200);
      lVar12 = 
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
        in_stack_00000048 = (char *)0x5;
        puVar4 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar10 = (**(code **)(puVar4 + 0x18))(puVar2,&stack0x00000048);
        if (iVar10 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar12,puVar2,puVar4,&stack0x00000048,unaff_x29 + -200);
        }
      }
    }
    else {
      lVar12 = 
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
        puVar4 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar10 = (**(code **)(puVar4 + 0x18))(puVar2,&stack0x00000030);
        if (iVar10 != 0) {
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
          in_stack_00000048 = (char *)0x1;
          in_stack_00000058 = 1;
          in_stack_00000088 = *(undefined8 *)(lVar12 + 0x60);
          *(char ***)(unaff_x29 + -0x100) = &stack0x00000048;
          *(undefined1 *)(unaff_x29 + -0xf8) = 1;
          *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -0x100;
          *(undefined **)(unaff_x29 + -0xd8) = &DAT_1061c2098;
          (**(code **)(puVar4 + 0x20))(puVar2,&stack0x00000068);
        }
      }
    }
    return 0;
  }
  if (unaff_x22 == (long *)0x0) {
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E != 0) ||
        ((bVar8 = bRam000000010b6372c0, 1 < bRam000000010b6372c0 - 1 &&
         ((bRam000000010b6372c0 == 0 ||
          (bVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_10poll_flush10__CALLSITE17he113f89c23b3aaceE
                             ), bVar8 == 0)))))) ||
       (iVar10 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_10poll_flush10__CALLSITE17he113f89c23b3aaceE
                            ,bVar8), iVar10 == 0)) {
      lVar12 = 
      ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_10poll_flush10__CALLSITE17he113f89c23b3aaceE
      ;
      unaff_x22 = (long *)0x1700000003;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uVar5 = *(undefined8 *)
                 (
                 ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_10poll_flush10__CALLSITE17he113f89c23b3aaceE
                 + 0x20);
        uVar6 = *(undefined8 *)
                 (
                 ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_10poll_flush10__CALLSITE17he113f89c23b3aaceE
                 + 0x28);
        *(undefined8 *)(unaff_x29 + -0x100) = 5;
        *(undefined8 *)(unaff_x29 + -0xf8) = uVar5;
        *(undefined8 *)(unaff_x29 + -0xf0) = uVar6;
        puVar4 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar10 = (**(code **)(puVar4 + 0x18))(puVar2,unaff_x29 + -0x100);
        if (iVar10 != 0) {
          FUN_100f3f428(&stack0x00000068,in_stack_00000028);
          lVar13 = FUN_1004d8568(&stack0x00000068);
          *(long *)(unaff_x29 + -0x68) = lVar13 + lVar17;
          *(long *)(unaff_x29 + -200) = unaff_x29 + -0x68;
          *(undefined **)(unaff_x29 + -0xc0) =
               &
               __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          in_stack_00000050 = (code *)(unaff_x29 + -200);
          in_stack_00000048 = s_write_returned_zero__but_bytes_r_108ac89a5;
          *(char ***)(unaff_x29 + -0xe0) = &stack0x00000048;
          *(undefined **)(unaff_x29 + -0xd8) = &UNK_10b208fd0;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar12,puVar2,puVar4,unaff_x29 + -0x100,&stack0x00000068);
        }
      }
      goto LAB_10082a048;
    }
    FUN_100f3f428(&stack0x00000068,in_stack_00000028);
    lVar12 = FUN_1004d8568(&stack0x00000068);
    *(long *)(unaff_x29 + -0x68) = lVar12 + lVar17;
    *(long *)(unaff_x29 + -200) = unaff_x29 + -0x68;
    *(undefined **)(unaff_x29 + -0xc0) =
         &
         __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    in_stack_00000050 = (code *)(unaff_x29 + -200);
    in_stack_00000048 = s_write_returned_zero__but_bytes_r_108ac89a5;
    *(char ***)(unaff_x29 + -0xe0) = &stack0x00000048;
    *(undefined **)(unaff_x29 + -0xd8) = &UNK_10b208fd0;
    FUN_100814990(&stack0x00000068);
LAB_10082a040:
    unaff_x22 = (long *)0x1700000003;
LAB_10082a048:
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
        ((bRam000000010b637920 - 1 < 2 ||
         ((bRam000000010b637920 != 0 &&
          (cVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN14rama_http_core5proto2h18dispatch32Dispatcher_LT_D_C_Bs_C_I_C_T_GT_10poll_flush28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb8a8c201e4423acfE
                             ), cVar9 != '\0')))))) &&
       (iVar10 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN14rama_http_core5proto2h18dispatch32Dispatcher_LT_D_C_Bs_C_I_C_T_GT_10poll_flush28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb8a8c201e4423acfE
                           ),
       lVar12 = 
       ___ZN14rama_http_core5proto2h18dispatch32Dispatcher_LT_D_C_Bs_C_I_C_T_GT_10poll_flush28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb8a8c201e4423acfE
       , iVar10 != 0)) {
      in_stack_00000048 = &stack0x00000468;
      in_stack_00000050 =
           __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
      ;
      *(char **)(unaff_x29 + -0xe0) = s_error_writing__108ac8d9c;
      *(char ***)(unaff_x29 + -0xd8) = &stack0x00000048;
      *(long *)(unaff_x29 + -0x100) = unaff_x29 + -0xe0;
      *(undefined **)(unaff_x29 + -0xf8) = &UNK_10b208fd0;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar12,&stack0x00000068);
      lVar12 = 
      ___ZN14rama_http_core5proto2h18dispatch32Dispatcher_LT_D_C_Bs_C_I_C_T_GT_10poll_flush28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb8a8c201e4423acfE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uVar5 = *(undefined8 *)
                 (
                 ___ZN14rama_http_core5proto2h18dispatch32Dispatcher_LT_D_C_Bs_C_I_C_T_GT_10poll_flush28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb8a8c201e4423acfE
                 + 0x20);
        uVar6 = *(undefined8 *)
                 (
                 ___ZN14rama_http_core5proto2h18dispatch32Dispatcher_LT_D_C_Bs_C_I_C_T_GT_10poll_flush28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb8a8c201e4423acfE
                 + 0x28);
        *(undefined8 *)(unaff_x29 + -200) = 4;
        *(undefined8 *)(unaff_x29 + -0xc0) = uVar5;
        *(undefined8 *)(unaff_x29 + -0xb8) = uVar6;
        puVar4 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar10 = (**(code **)(puVar4 + 0x18))(puVar2,unaff_x29 + -200);
        if (iVar10 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar12,puVar2,puVar4,unaff_x29 + -200,&stack0x00000068);
        }
      }
    }
    else {
      lVar12 = 
      ___ZN14rama_http_core5proto2h18dispatch32Dispatcher_LT_D_C_Bs_C_I_C_T_GT_10poll_flush28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb8a8c201e4423acfE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uVar5 = *(undefined8 *)
                 (
                 ___ZN14rama_http_core5proto2h18dispatch32Dispatcher_LT_D_C_Bs_C_I_C_T_GT_10poll_flush28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb8a8c201e4423acfE
                 + 0x20);
        uVar6 = *(undefined8 *)
                 (
                 ___ZN14rama_http_core5proto2h18dispatch32Dispatcher_LT_D_C_Bs_C_I_C_T_GT_10poll_flush28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb8a8c201e4423acfE
                 + 0x28);
        *(undefined8 *)(unaff_x29 + -200) = 4;
        *(undefined8 *)(unaff_x29 + -0xc0) = uVar5;
        *(undefined8 *)(unaff_x29 + -0xb8) = uVar6;
        puVar4 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar10 = (**(code **)(puVar4 + 0x18))(puVar2,unaff_x29 + -200);
        if (iVar10 != 0) {
          in_stack_00000048 = &stack0x00000468;
          in_stack_00000050 =
               __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
          ;
          *(char **)(unaff_x29 + -0xe0) = s_error_writing__108ac8d9c;
          *(char ***)(unaff_x29 + -0xd8) = &stack0x00000048;
          *(long *)(unaff_x29 + -0x100) = unaff_x29 + -0xe0;
          *(undefined **)(unaff_x29 + -0xf8) = &UNK_10b208fd0;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar12,puVar2,puVar4,unaff_x29 + -200,&stack0x00000068);
        }
      }
    }
    *(long **)(unaff_x29 + -0xe0) = unaff_x22;
    plVar14 = (long *)_malloc(0x18);
    if (plVar14 == (long *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
    }
    else {
      *plVar14 = 0;
      *(undefined1 *)(plVar14 + 2) = 9;
      in_stack_00000048 = (char *)plVar14;
      puVar15 = (ulong *)_malloc(8);
      if (puVar15 != (ulong *)0x0) {
        *puVar15 = (ulong)unaff_x22;
        *plVar14 = (long)puVar15;
        plVar14[1] = (long)&UNK_10b212e38;
        return 0;
      }
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
    }
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10082a2dc);
    (*pcVar7)();
  }
  in_stack_00000088 = unaff_x24;
  uVar11 = FUN_101506ffc();
  if (0x40 < uVar11) {
    __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(0,uVar11,0x40,&UNK_10b2234c0);
    __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E();
    lVar12 = FUN_1004d8568(&stack0x00000068);
    *(undefined **)(unaff_x29 + -0x98) = unaff_x27 + lVar12;
    *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x98;
    *(undefined **)(unaff_x29 + -0x60) =
         &
         __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    *(char **)(unaff_x29 + -0x78) = s_write_returned_zero__but_bytes_r_108ac89a5;
    *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x68;
    *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x78;
    *(undefined **)(unaff_x29 + -0x80) = &UNK_10b208fd0;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE();
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      lVar12 = *unaff_x22;
      uVar5 = *(undefined8 *)(lVar12 + 0x20);
      uVar6 = *(undefined8 *)(lVar12 + 0x28);
      *(undefined8 *)(unaff_x29 + -200) = 5;
      *(undefined8 *)(unaff_x29 + -0xc0) = uVar5;
      *(undefined8 *)(unaff_x29 + -0xb8) = uVar6;
      puVar4 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar4 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar10 = (**(code **)(puVar4 + 0x18))(puVar2,unaff_x29 + -200);
      if (iVar10 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar12,puVar2,puVar4,unaff_x29 + -200,&stack0x00000068);
      }
    }
    goto LAB_10082a040;
  }
  auVar18 = func_0x0001060f90f4(*(undefined8 *)(unaff_x20 + 0x78));
  unaff_x22 = auVar18._8_8_;
  if (auVar18._0_8_ == 2) {
    return 1;
  }
  if ((auVar18._0_8_ & 1) != 0) goto LAB_10082a048;
  *(long **)(unaff_x29 + -0x98) = unaff_x22;
  plVar16 = (long *)(*(long *)(unaff_x20 + 0x20) - *(long *)(unaff_x20 + 0x28));
  cVar9 = unaff_x22 < plVar16;
  if (plVar16 < unaff_x22) {
    cVar9 = -1;
  }
  plVar14 = unaff_x22;
  if (cVar9 == '\0') {
    *unaff_x28 = 0;
    unaff_x28[1] = 0;
  }
  else if (cVar9 == '\x01') {
    *(long *)(unaff_x20 + 0x28) = *(long *)(unaff_x20 + 0x28) + (long)unaff_x22;
  }
  else {
    *unaff_x28 = 0;
    unaff_x28[1] = 0;
    FUN_1014ac5e0(in_stack_00000028,(long)unaff_x22 - (long)plVar16);
    plVar14 = extraout_x1;
  }
  if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) {
    plVar14 = (long *)(ulong)bRam000000010b6372d8;
    if (bRam000000010b6372d8 - 1 < 2) {
      iVar10 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (
                         ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_10poll_flush10__CALLSITE17hebab565ef9b33177E
                         );
      plVar14 = extraout_x1_00;
      param_1 = 
      ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_10poll_flush10__CALLSITE17hebab565ef9b33177E
      ;
joined_r0x00010082981c:
      ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_10poll_flush10__CALLSITE17hebab565ef9b33177E
           = param_1;
      if (iVar10 != 0) goto LAB_100829510;
    }
    else if (bRam000000010b6372d8 != 0) {
      bVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                        (&
                         __ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_10poll_flush10__CALLSITE17hebab565ef9b33177E
                        );
      plVar14 = (long *)(ulong)bVar8;
      if (bVar8 != 0) {
        iVar10 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_10poll_flush10__CALLSITE17hebab565ef9b33177E
                           );
        plVar14 = extraout_x1_06;
        param_1 = 
        ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_10poll_flush10__CALLSITE17hebab565ef9b33177E
        ;
        goto joined_r0x00010082981c;
      }
    }
  }
  puVar4 = 
  ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_10poll_flush10__CALLSITE17hebab565ef9b33177E
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
    iVar10 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000468);
    plVar14 = extraout_x1_04;
    unaff_x27 = puVar4;
    if (iVar10 != 0) {
      puVar1 = ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_10poll_flush10__CALLSITE17hebab565ef9b33177E
               + 0x30;
      *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x98;
      *(undefined **)(unaff_x29 + -0x60) =
           &
           __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      *(char **)(unaff_x29 + -0x78) = s_flushed_bytes_108ac8993;
      *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x68;
      *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x78;
      *(undefined **)(unaff_x29 + -0x80) = &UNK_10b208fd0;
      *(undefined8 *)(unaff_x29 + -200) = unaff_x24;
      *(long *)(unaff_x29 + -0xc0) = unaff_x29 + -0x88;
      *(undefined8 *)(unaff_x29 + -0xb8) = unaff_x24;
      *(undefined **)(unaff_x29 + -0xb0) = puVar1;
      in_stack_00000088 = *(undefined8 *)(puVar4 + 0x60);
      *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -200;
      *(char *)(unaff_x29 + -0xd8) = (char)unaff_x24;
      in_stack_00000048 = (char *)(unaff_x29 + -0xe0);
      in_stack_00000050 = (code *)&DAT_1061c2098;
      (**(code **)(puVar2 + 0x20))(puVar3,&stack0x00000068);
      plVar14 = extraout_x1_05;
    }
  }
  goto LAB_100829780;
LAB_100829510:
  in_stack_00000048 = (char *)(unaff_x29 + -0x98);
  in_stack_00000050 =
       (code *)&
               __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
  ;
  goto code_r0x000100829534;
}

