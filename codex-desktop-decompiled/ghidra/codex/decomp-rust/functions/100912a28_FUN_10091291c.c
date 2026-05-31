
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10091291c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 uVar8;
  long unaff_x19;
  undefined8 unaff_x21;
  long unaff_x29;
  long lStack0000000000000000;
  undefined *puStack0000000000000008;
  undefined8 uStack0000000000000010;
  long in_stack_00000050;
  undefined *in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  char *in_stack_00000098;
  undefined8 uStack00000000000000b0;
  long lStack00000000000000b8;
  undefined8 uStack00000000000000c0;
  long lStack00000000000000c8;
  
  *(char **)(unaff_x29 + -0x50) = s_thread_was_active__shutting_down_108acb0bb;
  *(char ***)(unaff_x29 + -0x48) = &stack0x00000098;
  *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x50;
  *(undefined **)(unaff_x29 + -0x58) = &UNK_10b208fd0;
  lStack00000000000000b8 = unaff_x29 + -0x60;
  uStack00000000000000b0 = 1;
  uStack00000000000000c0 = 1;
  puStack0000000000000008 = in_stack_00000058;
  lStack0000000000000000 = in_stack_00000050;
  uStack0000000000000010 = in_stack_00000060;
  lStack00000000000000c8 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  *(undefined8 *)(unaff_x19 + 0x48) = unaff_x21;
  *(undefined1 *)(unaff_x19 + 0xbd8) = 0;
  cVar4 = FUN_1008e1a54(unaff_x19 + 0x48);
  if (cVar4 == '\x03') {
    uVar6 = 1;
    uVar8 = 4;
  }
  else {
    if (*(char *)(unaff_x19 + 0xbd8) == '\x03') {
      if (*(char *)(unaff_x19 + 0xbd0) == '\x03') {
        FUN_100e7aab8(unaff_x19 + 200);
      }
      FUN_100de8a5c(unaff_x19 + 0x50);
    }
    if (cVar4 == '\x02') {
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
         (((bRam000000010b627b10 - 1 < 2 ||
           ((bRam000000010b627b10 != 0 &&
            (cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfc6a628fa86bc1c1E
                               ), cVar4 != '\0')))) &&
          (uVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfc6a628fa86bc1c1E
                             ), (uVar7 & 1) != 0)))) {
        lStack00000000000000c8 =
             ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfc6a628fa86bc1c1E
             + 0x30;
        lStack0000000000000000 = unaff_x19 + 0x20;
        puStack0000000000000008 =
             &
             __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
        ;
        in_stack_00000098 = s_thread___shutdown_timed_out__pro_108acb121;
        *(char ***)(unaff_x29 + -0x50) = &stack0x00000098;
        *(undefined **)(unaff_x29 + -0x48) = &UNK_10b208fd0;
        lStack00000000000000b8 = unaff_x29 + -0x50;
        uStack00000000000000b0 = 1;
        uStack00000000000000c0 = 1;
        func_0x000100912e9c(&stack0x000000b0);
      }
      else {
        lVar3 = 
        ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfc6a628fa86bc1c1E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          in_stack_00000088 =
               *(undefined8 *)
                (
                ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfc6a628fa86bc1c1E
                + 0x20);
          in_stack_00000090 =
               *(undefined8 *)
                (
                ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfc6a628fa86bc1c1E
                + 0x28);
          in_stack_00000080 = 2;
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000080);
          if (iVar5 != 0) {
            lStack00000000000000c8 =
                 ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfc6a628fa86bc1c1E
                 + 0x30;
            lStack0000000000000000 = unaff_x19 + 0x20;
            puStack0000000000000008 =
                 &
                 __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
            ;
            in_stack_00000098 = s_thread___shutdown_timed_out__pro_108acb121;
            *(char ***)(unaff_x29 + -0x50) = &stack0x00000098;
            *(undefined **)(unaff_x29 + -0x48) = &UNK_10b208fd0;
            lStack00000000000000b8 = unaff_x29 + -0x50;
            uStack00000000000000b0 = 1;
            uStack00000000000000c0 = 1;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar3,puVar2,puVar1,&stack0x00000080,&stack0x000000b0);
          }
        }
      }
    }
    else if (cVar4 == '\x01') {
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
          ((bRam000000010b627ae0 - 1 < 2 ||
           ((bRam000000010b627ae0 != 0 &&
            (cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h20f82e2b414a200eE
                               ), cVar4 != '\0')))))) &&
         (uVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (
                            ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h20f82e2b414a200eE
                            ), (uVar7 & 1) != 0)) {
        lStack00000000000000c8 =
             ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h20f82e2b414a200eE
             + 0x30;
        lStack0000000000000000 = unaff_x19 + 0x20;
        puStack0000000000000008 =
             &
             __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
        ;
        in_stack_00000098 = s__failed_to_submit_Shutdown_to_th_108acb0e0;
        *(char ***)(unaff_x29 + -0x50) = &stack0x00000098;
        *(undefined **)(unaff_x29 + -0x48) = &UNK_10b208fd0;
        lStack00000000000000b8 = unaff_x29 + -0x50;
        uStack00000000000000b0 = 1;
        uStack00000000000000c0 = 1;
        FUN_100912fd8(&stack0x000000b0);
      }
      else {
        lVar3 = 
        ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h20f82e2b414a200eE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
          in_stack_00000070 =
               *(undefined8 *)
                (
                ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h20f82e2b414a200eE
                + 0x20);
          in_stack_00000078 =
               *(undefined8 *)
                (
                ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h20f82e2b414a200eE
                + 0x28);
          in_stack_00000068 = 1;
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000068);
          if (iVar5 != 0) {
            lStack00000000000000c8 =
                 ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h20f82e2b414a200eE
                 + 0x30;
            lStack0000000000000000 = unaff_x19 + 0x20;
            puStack0000000000000008 =
                 &
                 __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
            ;
            in_stack_00000098 = s__failed_to_submit_Shutdown_to_th_108acb0e0;
            *(char ***)(unaff_x29 + -0x50) = &stack0x00000098;
            *(undefined **)(unaff_x29 + -0x48) = &UNK_10b208fd0;
            lStack00000000000000b8 = unaff_x29 + -0x50;
            uStack00000000000000b0 = 1;
            uStack00000000000000c0 = 1;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar3,puVar2,puVar1,&stack0x00000068,&stack0x000000b0);
          }
        }
      }
    }
    lVar3 = **(long **)(unaff_x19 + 0x40);
    **(long **)(unaff_x19 + 0x40) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E();
    }
    *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x18);
    *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)(unaff_x19 + 0x28);
    *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)(unaff_x19 + 0x20);
    *(undefined1 *)(unaff_x19 + 0x70) = 0;
    uVar7 = FUN_100912194(unaff_x19 + 0x40);
    if ((uVar7 & 1) == 0) {
      func_0x000100d54f30(unaff_x19 + 0x40);
      uVar6 = 0;
      uVar8 = 1;
    }
    else {
      uVar6 = 1;
      uVar8 = 5;
    }
  }
  *(undefined1 *)(unaff_x19 + 0x38) = uVar8;
  return uVar6;
}

