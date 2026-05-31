
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100987314(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 uVar10;
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 *in_stack_00000020;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_00000110;
  undefined8 uStack0000000000000130;
  long lStack0000000000000138;
  undefined8 uStack0000000000000140;
  undefined8 uStack0000000000000148;
  long in_stack_000001b0;
  long in_stack_000001b8;
  undefined8 in_stack_000001c0;
  long in_stack_000001c8;
  
  *(char **)(unaff_x29 + -0x70) = s__request_failed_with_client_erro_108ac9cbd;
  *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x90;
  *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0x70;
  *(undefined **)(unaff_x29 + -0x98) = &UNK_10b208fd0;
  lStack0000000000000138 = unaff_x29 + -0xa0;
  uStack0000000000000130 = 1;
  uStack0000000000000140 = 1;
  uVar8 = *(undefined8 *)(unaff_x28 + 0x50);
  unaff_x27[0x17] = *(undefined8 *)(unaff_x28 + 0x58);
  unaff_x27[0x16] = uVar8;
  *(undefined8 *)(unaff_x29 + -0xc0) = in_stack_00000110;
  uStack0000000000000148 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  *(undefined1 *)(unaff_x19 + 0x1ff) = 1;
  if (in_stack_000001c8 != unaff_x26) {
    FUN_100de6690(&stack0x000001c8);
  }
  if (in_stack_000001b0 != 0) {
    _free(in_stack_000001b8);
  }
  *(long *)(unaff_x19 + 0x200) = unaff_x26 + 6;
  *(undefined8 *)(unaff_x19 + 0x210) = *(undefined8 *)(unaff_x19 + 0x128);
  *(undefined8 *)(unaff_x19 + 0x208) = *(undefined8 *)(unaff_x19 + 0x120);
  *(undefined2 *)(unaff_x19 + 0x1fe) = 0;
  *(undefined8 *)(unaff_x19 + 0x218) = *(undefined8 *)(unaff_x19 + 0x130);
  *(undefined8 *)(unaff_x19 + 0x228) = in_stack_00000098;
  *(long *)(unaff_x19 + 0x220) = unaff_x26 + -1;
  *(undefined8 *)(unaff_x19 + 0x238) = in_stack_000000a8;
  *(undefined8 *)(unaff_x19 + 0x230) = in_stack_000000a0;
  *(long *)(unaff_x19 + 1000) = *(long *)(unaff_x19 + 0x138) + 0x10;
  *(undefined1 *)(unaff_x19 + 0xed8) = 0;
  lVar5 = unaff_x19 + 0x200;
  FUN_1004f3438(&stack0x000001b0,lVar5,*unaff_x21);
  uVar8 = in_stack_000001c0;
  lVar4 = in_stack_000001b8;
  lVar1 = in_stack_000001b0;
  if (in_stack_000001b0 == unaff_x26 + 0x1c) {
    *in_stack_00000020 = 5;
    uVar10 = 3;
    uVar8 = 1;
    goto LAB_100987694;
  }
  uVar14 = unaff_x27[0xc];
  uVar11 = unaff_x27[0xb];
  uVar20 = unaff_x27[0xe];
  uVar17 = unaff_x27[0xd];
  uVar15 = unaff_x27[0x10];
  uVar12 = unaff_x27[0xf];
  uVar21 = unaff_x27[0x12];
  uVar18 = unaff_x27[0x11];
  lStack0000000000000138 = unaff_x27[4];
  uStack0000000000000130 = unaff_x27[3];
  uStack0000000000000148 = unaff_x27[6];
  uStack0000000000000140 = unaff_x27[5];
  uVar16 = unaff_x27[8];
  uVar13 = unaff_x27[7];
  uVar22 = unaff_x27[10];
  uVar19 = unaff_x27[9];
  if (*(char *)(unaff_x19 + 0xed8) == '\0') {
LAB_100987710:
    FUN_100def028(lVar5);
  }
  else if (*(char *)(unaff_x19 + 0xed8) == '\x03') {
    if (*(char *)(unaff_x19 + 0xed0) == '\x03') {
      FUN_100e7ab5c(unaff_x19 + 0x5e0);
    }
    else if (*(char *)(unaff_x19 + 0xed0) == '\0') {
      lVar5 = unaff_x19 + 0x3f0;
      goto LAB_100987710;
    }
  }
  if (lVar1 == unaff_x26 + 0x1b) {
    if (lVar4 != 0) {
      _free(uVar8);
    }
  }
  else {
    unaff_x27[0xc] = uVar14;
    unaff_x27[0xb] = uVar11;
    unaff_x27[0xe] = uVar20;
    unaff_x27[0xd] = uVar17;
    unaff_x27[0x10] = uVar15;
    unaff_x27[0xf] = uVar12;
    unaff_x27[0x12] = uVar21;
    unaff_x27[0x11] = uVar18;
    unaff_x27[4] = lStack0000000000000138;
    unaff_x27[3] = uStack0000000000000130;
    unaff_x27[6] = uStack0000000000000148;
    unaff_x27[5] = uStack0000000000000140;
    unaff_x27[8] = uVar16;
    unaff_x27[7] = uVar13;
    unaff_x27[10] = uVar22;
    unaff_x27[9] = uVar19;
    in_stack_000001b0 = lVar1;
    in_stack_000001b8 = lVar4;
    in_stack_000001c0 = uVar8;
    if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) {
      if (1 < bRam000000010b628080 - 1) {
        if (bRam000000010b628080 != 0) {
          cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN16codex_app_server22bespoke_event_handling40on_file_change_request_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb8d58898be748836E
                            );
          unaff_x27 = &stack0x000001b0;
          if (cVar6 != '\0') goto LAB_100987798;
        }
        goto LAB_100987808;
      }
LAB_100987798:
      uVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                        (
                        ___ZN16codex_app_server22bespoke_event_handling40on_file_change_request_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb8d58898be748836E
                        );
      if ((uVar9 & 1) == 0) goto LAB_100987808;
      lVar5 = ___ZN16codex_app_server22bespoke_event_handling40on_file_change_request_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb8d58898be748836E
              + 0x30;
      *(long **)(unaff_x29 + -0x90) = &stack0x000001b0;
      *(code **)(unaff_x29 + -0x88) =
           __ZN70__LT_codex_protocol__error__CodexErr_u20_as_u20_core__fmt__Display_GT_3fmt17h845996580fb769aeE
      ;
      *(char **)(unaff_x29 + -0x70) = s_failed_to_submit_PatchApproval__108acc5da;
      *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x90;
      *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0x70;
      *(undefined **)(unaff_x29 + -0x98) = &UNK_10b208fd0;
      *(undefined8 *)(unaff_x29 + -0xd0) = 1;
      *(long *)(unaff_x29 + -200) = unaff_x29 + -0xa0;
      *(undefined8 *)(unaff_x29 + -0xc0) = 1;
      *(long *)(unaff_x29 + -0xb8) = lVar5;
      FUN_100990ed8(unaff_x29 + -0xd0);
    }
    else {
LAB_100987808:
      lVar5 = 
      ___ZN16codex_app_server22bespoke_event_handling40on_file_change_request_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb8d58898be748836E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
        uVar8 = *(undefined8 *)
                 (
                 ___ZN16codex_app_server22bespoke_event_handling40on_file_change_request_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb8d58898be748836E
                 + 0x20);
        uVar11 = *(undefined8 *)
                  (
                  ___ZN16codex_app_server22bespoke_event_handling40on_file_change_request_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb8d58898be748836E
                  + 0x28);
        *(undefined8 *)(unaff_x29 + -0xe8) = 1;
        *(undefined8 *)(unaff_x29 + -0xe0) = uVar8;
        *(undefined8 *)(unaff_x29 + -0xd8) = uVar11;
        puVar2 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_10b3c24c8;
        }
        puVar3 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_109adfc03;
        }
        iVar7 = (**(code **)(puVar2 + 0x18))(puVar3,unaff_x29 + -0xe8);
        if (iVar7 != 0) {
          lVar1 = ___ZN16codex_app_server22bespoke_event_handling40on_file_change_request_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb8d58898be748836E
                  + 0x30;
          *(long **)(unaff_x29 + -0x70) = &stack0x000001b0;
          *(code **)(unaff_x29 + -0x68) =
               __ZN70__LT_codex_protocol__error__CodexErr_u20_as_u20_core__fmt__Display_GT_3fmt17h845996580fb769aeE
          ;
          *(char **)(unaff_x29 + -0xa0) = s_failed_to_submit_PatchApproval__108acc5da;
          *(long *)(unaff_x29 + -0x98) = unaff_x29 + -0x70;
          *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xa0;
          *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b208fd0;
          *(undefined8 *)(unaff_x29 + -0xd0) = 1;
          *(long *)(unaff_x29 + -200) = unaff_x29 + -0xb0;
          *(undefined8 *)(unaff_x29 + -0xc0) = 1;
          *(long *)(unaff_x29 + -0xb8) = lVar1;
          uVar8 = *(undefined8 *)(unaff_x29 + -0xe8);
          unaff_x27[0x1f] = *(undefined8 *)(unaff_x29 + -0xe0);
          unaff_x27[0x1e] = uVar8;
          *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0xd8);
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar5,puVar3,puVar2,unaff_x29 + -0x90,unaff_x29 + -0xd0);
        }
      }
    }
    FUN_100df5738(&stack0x000001b0);
  }
  *(undefined1 *)(unaff_x19 + 0x1ff) = 0;
  if (*(long *)(unaff_x19 + 400) != -0x7fffffffffffffff) {
    *(undefined1 *)(unaff_x19 + 0x1f9) = 0;
  }
  *(undefined4 *)(unaff_x19 + 0x1f9) = 0;
  lVar5 = **(long **)(unaff_x19 + 0x140);
  **(long **)(unaff_x19 + 0x140) = lVar5 + -1;
  LORelease();
  if (lVar5 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7cbe8e2c0817b69fE(unaff_x19 + 0x140);
  }
  lVar5 = **(long **)(unaff_x19 + 0x138);
  **(long **)(unaff_x19 + 0x138) = lVar5 + -1;
  LORelease();
  if (lVar5 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(unaff_x19 + 0x138);
  }
  *(undefined1 *)(unaff_x19 + 0x1fd) = 0;
  *(undefined1 *)(unaff_x19 + 0x1fe) = 0;
  *(undefined1 *)(unaff_x19 + 0x1f8) = 1;
  FUN_100d0b648();
  lVar5 = **(long **)(unaff_x19 + 0x80);
  **(long **)(unaff_x19 + 0x80) = lVar5 + -1;
  LORelease();
  if (lVar5 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7cbe8e2c0817b69fE();
  }
  uVar8 = 0;
  uVar10 = 1;
LAB_100987694:
  *(undefined1 *)(unaff_x19 + 0xee0) = uVar10;
  return uVar8;
}

