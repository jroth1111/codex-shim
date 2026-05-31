
/* WARNING: Removing unreachable block (ram,0x00010098758c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100987408(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 uVar11;
  long unaff_x19;
  undefined8 *unaff_x21;
  long *plVar12;
  long unaff_x24;
  long unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x29;
  ulong in_stack_00000010;
  undefined4 uStack000000000000001c;
  undefined1 *in_stack_00000020;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
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
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  long in_stack_000001b0;
  long in_stack_000001b8;
  undefined8 in_stack_000001c0;
  long in_stack_000001c8;
  
  uVar9 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000130);
  FUN_100de8910(unaff_x24 + 0x48);
  if (in_stack_000001b0 != unaff_x26) {
    FUN_100de6690(&stack0x000001b0);
  }
  uStack000000000000001c = 0;
  if (((long)in_stack_00000010 < 0) && ((in_stack_00000010 & 0xfffffffffffffffe) != unaff_x26 - 1U))
  {
    FUN_100de6690(&stack0x000000b0);
  }
  *(undefined8 *)(unaff_x29 + -0xa0) = uVar9;
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
     (((bRam000000010b628098 - 1 < 2 ||
       ((bRam000000010b628098 != 0 &&
        (cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (&
                            __ZN16codex_app_server22bespoke_event_handling40on_file_change_request_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h84455e7626b3ed69E
                           ), cVar7 != '\0')))) &&
      (iVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (
                         ___ZN16codex_app_server22bespoke_event_handling40on_file_change_request_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h84455e7626b3ed69E
                         ),
      lVar6 = 
      ___ZN16codex_app_server22bespoke_event_handling40on_file_change_request_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h84455e7626b3ed69E
      , iVar8 != 0)))) {
    in_stack_000001c8 =
         ___ZN16codex_app_server22bespoke_event_handling40on_file_change_request_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h84455e7626b3ed69E
         + 0x30;
    *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0xa0;
    *(code **)(unaff_x29 + -200) =
         __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E
    ;
    *(char **)(unaff_x29 + -0x90) = s_9failed_to_deserialize_FileChang_108acc5fd;
    *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0xd0;
    *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x90;
    *(undefined **)(unaff_x29 + -0x68) = &UNK_10b208fd0;
    in_stack_000001b8 = unaff_x29 + -0x70;
    in_stack_000001b0 = 1;
    in_stack_000001c0 = 1;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar6,&stack0x000001b0);
    lVar6 = 
    ___ZN16codex_app_server22bespoke_event_handling40on_file_change_request_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h84455e7626b3ed69E
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
      in_stack_00000138 =
           *(undefined8 *)
            (
            ___ZN16codex_app_server22bespoke_event_handling40on_file_change_request_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h84455e7626b3ed69E
            + 0x20);
      in_stack_00000140 =
           *(undefined8 *)
            (
            ___ZN16codex_app_server22bespoke_event_handling40on_file_change_request_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h84455e7626b3ed69E
            + 0x28);
      in_stack_00000130 = 1;
      puVar2 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_10b3c24c8;
      }
      puVar3 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar3 = &UNK_109adfc03;
      }
      iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000130);
      if (iVar8 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar6,puVar3,puVar2,&stack0x00000130,&stack0x000001b0);
      }
    }
  }
  else {
    lVar6 = 
    ___ZN16codex_app_server22bespoke_event_handling40on_file_change_request_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h84455e7626b3ed69E
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
      in_stack_00000138 =
           *(undefined8 *)
            (
            ___ZN16codex_app_server22bespoke_event_handling40on_file_change_request_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h84455e7626b3ed69E
            + 0x20);
      in_stack_00000140 =
           *(undefined8 *)
            (
            ___ZN16codex_app_server22bespoke_event_handling40on_file_change_request_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h84455e7626b3ed69E
            + 0x28);
      in_stack_00000130 = 1;
      puVar2 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_10b3c24c8;
      }
      puVar3 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar3 = &UNK_109adfc03;
      }
      iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000130);
      if (iVar8 != 0) {
        in_stack_000001c8 =
             ___ZN16codex_app_server22bespoke_event_handling40on_file_change_request_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h84455e7626b3ed69E
             + 0x30;
        *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0xa0;
        *(code **)(unaff_x29 + -200) =
             __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E
        ;
        *(char **)(unaff_x29 + -0x90) = s_9failed_to_deserialize_FileChang_108acc5fd;
        *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0xd0;
        *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x90;
        *(undefined **)(unaff_x29 + -0x68) = &UNK_10b208fd0;
        in_stack_000001b8 = unaff_x29 + -0x70;
        in_stack_000001b0 = 1;
        in_stack_000001c0 = 1;
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar6,puVar3,puVar2,&stack0x00000130,&stack0x000001b0);
      }
    }
  }
  plVar12 = *(long **)(unaff_x29 + -0xa0);
  if (*plVar12 == 1) {
    FUN_100de21d4(plVar12 + 1);
  }
  else if ((*plVar12 == 0) && (plVar12[2] != 0)) {
    _free(plVar12[1]);
  }
  _free(plVar12);
  *(undefined1 *)(unaff_x19 + 0x1ff) = 1;
  *(undefined8 *)(unaff_x19 + 0x200) = 0x800000000000000b;
  *(undefined8 *)(unaff_x19 + 0x210) = *(undefined8 *)(unaff_x19 + 0x128);
  *(undefined8 *)(unaff_x19 + 0x208) = *(undefined8 *)(unaff_x19 + 0x120);
  *(undefined2 *)(unaff_x19 + 0x1fe) = 0;
  *(undefined8 *)(unaff_x19 + 0x218) = *(undefined8 *)(unaff_x19 + 0x130);
  *(undefined8 *)(unaff_x19 + 0x228) = in_stack_00000098;
  *(ulong *)(unaff_x19 + 0x220) = unaff_x26 - 1U;
  *(undefined8 *)(unaff_x19 + 0x238) = in_stack_000000a8;
  *(undefined8 *)(unaff_x19 + 0x230) = in_stack_000000a0;
  *(long *)(unaff_x19 + 1000) = *(long *)(unaff_x19 + 0x138) + 0x10;
  *(undefined1 *)(unaff_x19 + 0xed8) = 0;
  lVar6 = unaff_x19 + 0x200;
  FUN_1004f3438(&stack0x000001b0,lVar6,*unaff_x21);
  uVar9 = in_stack_000001c0;
  lVar5 = in_stack_000001b8;
  lVar1 = in_stack_000001b0;
  if (in_stack_000001b0 == -0x7fffffffffffffdf) {
    *in_stack_00000020 = 5;
    uVar11 = 3;
    uVar9 = 1;
    goto LAB_100987694;
  }
  in_stack_00000178 = unaff_x27[0xc];
  in_stack_00000170 = unaff_x27[0xb];
  in_stack_00000188 = unaff_x27[0xe];
  in_stack_00000180 = unaff_x27[0xd];
  in_stack_00000198 = unaff_x27[0x10];
  in_stack_00000190 = unaff_x27[0xf];
  in_stack_000001a8 = unaff_x27[0x12];
  in_stack_000001a0 = unaff_x27[0x11];
  in_stack_00000138 = unaff_x27[4];
  in_stack_00000130 = unaff_x27[3];
  in_stack_00000148 = unaff_x27[6];
  in_stack_00000140 = unaff_x27[5];
  in_stack_00000158 = unaff_x27[8];
  in_stack_00000150 = unaff_x27[7];
  in_stack_00000168 = unaff_x27[10];
  in_stack_00000160 = unaff_x27[9];
  if (*(char *)(unaff_x19 + 0xed8) == '\0') {
LAB_100987710:
    FUN_100def028(lVar6);
  }
  else if (*(char *)(unaff_x19 + 0xed8) == '\x03') {
    if (*(char *)(unaff_x19 + 0xed0) == '\x03') {
      FUN_100e7ab5c(unaff_x19 + 0x5e0);
    }
    else if (*(char *)(unaff_x19 + 0xed0) == '\0') {
      lVar6 = unaff_x19 + 0x3f0;
      goto LAB_100987710;
    }
  }
  if (lVar1 == -0x7fffffffffffffe0) {
    if (lVar5 != 0) {
      _free(uVar9);
    }
  }
  else {
    unaff_x27[0xc] = in_stack_00000178;
    unaff_x27[0xb] = in_stack_00000170;
    unaff_x27[0xe] = in_stack_00000188;
    unaff_x27[0xd] = in_stack_00000180;
    unaff_x27[0x10] = in_stack_00000198;
    unaff_x27[0xf] = in_stack_00000190;
    unaff_x27[0x12] = in_stack_000001a8;
    unaff_x27[0x11] = in_stack_000001a0;
    unaff_x27[4] = in_stack_00000138;
    unaff_x27[3] = in_stack_00000130;
    unaff_x27[6] = in_stack_00000148;
    unaff_x27[5] = in_stack_00000140;
    unaff_x27[8] = in_stack_00000158;
    unaff_x27[7] = in_stack_00000150;
    unaff_x27[10] = in_stack_00000168;
    unaff_x27[9] = in_stack_00000160;
    in_stack_000001b0 = lVar1;
    in_stack_000001b8 = lVar5;
    in_stack_000001c0 = uVar9;
    if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) {
      if (1 < bRam000000010b628080 - 1) {
        if (bRam000000010b628080 != 0) {
          cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN16codex_app_server22bespoke_event_handling40on_file_change_request_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb8d58898be748836E
                            );
          unaff_x27 = &stack0x000001b0;
          if (cVar7 != '\0') goto LAB_100987798;
        }
        goto LAB_100987808;
      }
LAB_100987798:
      uVar10 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (
                         ___ZN16codex_app_server22bespoke_event_handling40on_file_change_request_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb8d58898be748836E
                         );
      if ((uVar10 & 1) == 0) goto LAB_100987808;
      lVar6 = ___ZN16codex_app_server22bespoke_event_handling40on_file_change_request_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb8d58898be748836E
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
      *(long *)(unaff_x29 + -0xb8) = lVar6;
      FUN_100990ed8(unaff_x29 + -0xd0);
    }
    else {
LAB_100987808:
      lVar6 = 
      ___ZN16codex_app_server22bespoke_event_handling40on_file_change_request_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb8d58898be748836E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
        uVar9 = *(undefined8 *)
                 (
                 ___ZN16codex_app_server22bespoke_event_handling40on_file_change_request_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb8d58898be748836E
                 + 0x20);
        uVar4 = *(undefined8 *)
                 (
                 ___ZN16codex_app_server22bespoke_event_handling40on_file_change_request_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb8d58898be748836E
                 + 0x28);
        *(undefined8 *)(unaff_x29 + -0xe8) = 1;
        *(undefined8 *)(unaff_x29 + -0xe0) = uVar9;
        *(undefined8 *)(unaff_x29 + -0xd8) = uVar4;
        puVar2 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_10b3c24c8;
        }
        puVar3 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_109adfc03;
        }
        iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,unaff_x29 + -0xe8);
        if (iVar8 != 0) {
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
          uVar9 = *(undefined8 *)(unaff_x29 + -0xe8);
          unaff_x27[0x1f] = *(undefined8 *)(unaff_x29 + -0xe0);
          unaff_x27[0x1e] = uVar9;
          *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0xd8);
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar6,puVar3,puVar2,unaff_x29 + -0x90,unaff_x29 + -0xd0);
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
  lVar6 = **(long **)(unaff_x19 + 0x140);
  **(long **)(unaff_x19 + 0x140) = lVar6 + -1;
  LORelease();
  if (lVar6 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7cbe8e2c0817b69fE(unaff_x19 + 0x140);
  }
  lVar6 = **(long **)(unaff_x19 + 0x138);
  **(long **)(unaff_x19 + 0x138) = lVar6 + -1;
  LORelease();
  if (lVar6 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(unaff_x19 + 0x138);
  }
  *(undefined1 *)(unaff_x19 + 0x1fd) = 0;
  *(undefined1 *)(unaff_x19 + 0x1fe) = 0;
  *(undefined1 *)(unaff_x19 + 0x1f8) = 1;
  FUN_100d0b648();
  lVar6 = **(long **)(unaff_x19 + 0x80);
  **(long **)(unaff_x19 + 0x80) = lVar6 + -1;
  LORelease();
  if (lVar6 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7cbe8e2c0817b69fE();
  }
  uVar9 = 0;
  uVar11 = 1;
LAB_100987694:
  *(undefined1 *)(unaff_x19 + 0xee0) = uVar11;
  return uVar9;
}

