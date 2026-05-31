
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100829e1c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  long lVar6;
  code *pcVar7;
  char cVar8;
  int iVar9;
  char *pcVar10;
  undefined8 *puVar11;
  long unaff_x29;
  char *pcStack0000000000000048;
  code *pcStack0000000000000050;
  undefined8 uStack0000000000000068;
  long lStack0000000000000070;
  undefined8 uStack0000000000000078;
  
  pcStack0000000000000050 = (code *)(unaff_x29 + -200);
  pcStack0000000000000048 = s_write_returned_zero__but_bytes_r_108ac89a5;
  *(char ***)(unaff_x29 + -0xe0) = &stack0x00000048;
  *(undefined **)(unaff_x29 + -0xd8) = &UNK_10b208fd0;
  lStack0000000000000070 = unaff_x29 + -0xe0;
  uStack0000000000000068 = 1;
  uStack0000000000000078 = 1;
  FUN_100814990(&stack0x00000068);
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
     (((bRam000000010b637920 - 1 < 2 ||
       ((bRam000000010b637920 != 0 &&
        (cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (&
                            __ZN14rama_http_core5proto2h18dispatch32Dispatcher_LT_D_C_Bs_C_I_C_T_GT_10poll_flush28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb8a8c201e4423acfE
                           ), cVar8 != '\0')))) &&
      (iVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (
                         ___ZN14rama_http_core5proto2h18dispatch32Dispatcher_LT_D_C_Bs_C_I_C_T_GT_10poll_flush28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb8a8c201e4423acfE
                         ),
      lVar6 = 
      ___ZN14rama_http_core5proto2h18dispatch32Dispatcher_LT_D_C_Bs_C_I_C_T_GT_10poll_flush28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb8a8c201e4423acfE
      , iVar9 != 0)))) {
    pcStack0000000000000048 = &stack0x00000468;
    pcStack0000000000000050 =
         __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
    *(char **)(unaff_x29 + -0xe0) = s_error_writing__108ac8d9c;
    *(char ***)(unaff_x29 + -0xd8) = &stack0x00000048;
    *(long *)(unaff_x29 + -0x100) = unaff_x29 + -0xe0;
    *(undefined **)(unaff_x29 + -0xf8) = &UNK_10b208fd0;
    lStack0000000000000070 = unaff_x29 + -0x100;
    uStack0000000000000068 = 1;
    uStack0000000000000078 = 1;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar6,&stack0x00000068);
    lVar6 = 
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
      iVar9 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -200);
      if (iVar9 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar6,puVar2,puVar1,unaff_x29 + -200,&stack0x00000068);
      }
    }
  }
  else {
    lVar6 = 
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
      iVar9 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -200);
      if (iVar9 != 0) {
        pcStack0000000000000048 = &stack0x00000468;
        pcStack0000000000000050 =
             __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
        ;
        *(char **)(unaff_x29 + -0xe0) = s_error_writing__108ac8d9c;
        *(char ***)(unaff_x29 + -0xd8) = &stack0x00000048;
        *(long *)(unaff_x29 + -0x100) = unaff_x29 + -0xe0;
        *(undefined **)(unaff_x29 + -0xf8) = &UNK_10b208fd0;
        lStack0000000000000070 = unaff_x29 + -0x100;
        uStack0000000000000068 = 1;
        uStack0000000000000078 = 1;
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar6,puVar2,puVar1,unaff_x29 + -200,&stack0x00000068);
      }
    }
  }
  *(undefined8 *)(unaff_x29 + -0xe0) = 0x1700000003;
  pcVar10 = (char *)_malloc(0x18);
  if (pcVar10 == (char *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
  else {
    pcVar10[0] = '\0';
    pcVar10[1] = '\0';
    pcVar10[2] = '\0';
    pcVar10[3] = '\0';
    pcVar10[4] = '\0';
    pcVar10[5] = '\0';
    pcVar10[6] = '\0';
    pcVar10[7] = '\0';
    pcVar10[0x10] = '\t';
    pcStack0000000000000048 = pcVar10;
    uStack0000000000000068 = 0x1700000003;
    puVar11 = (undefined8 *)_malloc(8);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = 0x1700000003;
      *(undefined8 **)pcVar10 = puVar11;
      *(undefined **)(pcVar10 + 8) = &UNK_10b212e38;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = pcVar10;
      return auVar5 << 0x40;
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10082a2dc);
  (*pcVar7)();
}

