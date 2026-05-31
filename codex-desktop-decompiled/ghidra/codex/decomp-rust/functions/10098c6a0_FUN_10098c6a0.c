
/* WARNING: Removing unreachable block (ram,0x00010098c70c) */
/* WARNING: Removing unreachable block (ram,0x00010098c738) */
/* WARNING: Removing unreachable block (ram,0x00010098c73c) */
/* WARNING: Removing unreachable block (ram,0x00010098c740) */
/* WARNING: Removing unreachable block (ram,0x00010098c744) */
/* WARNING: Removing unreachable block (ram,0x00010098d160) */
/* WARNING: Removing unreachable block (ram,0x00010098cc7c) */
/* WARNING: Removing unreachable block (ram,0x00010098cca0) */
/* WARNING: Removing unreachable block (ram,0x00010098cca4) */
/* WARNING: Removing unreachable block (ram,0x00010098ccbc) */
/* WARNING: Removing unreachable block (ram,0x00010098cce8) */
/* WARNING: Removing unreachable block (ram,0x00010098cd34) */
/* WARNING: Removing unreachable block (ram,0x00010098cd3c) */
/* WARNING: Removing unreachable block (ram,0x00010098cd50) */
/* WARNING: Removing unreachable block (ram,0x00010098cd58) */
/* WARNING: Removing unreachable block (ram,0x00010098cd44) */
/* WARNING: Removing unreachable block (ram,0x00010098cd64) */
/* WARNING: Removing unreachable block (ram,0x00010098cd70) */
/* WARNING: Removing unreachable block (ram,0x00010098cc98) */
/* WARNING: Removing unreachable block (ram,0x00010098cd7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10098c6a0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  long extraout_x11;
  undefined8 extraout_x12;
  long unaff_x19;
  undefined1 uVar10;
  long unaff_x24;
  long unaff_x25;
  undefined1 *unaff_x28;
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
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  ulong in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined1 *in_stack_00000028;
  long in_stack_00000340;
  
  uVar6 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x000002c0);
  FUN_100de8910(unaff_x24 + 0x48);
  if (in_stack_00000340 != unaff_x25) {
    FUN_100de6690(&stack0x00000340);
  }
  if (((long)in_stack_00000010 < 0) && ((in_stack_00000010 & 0xfffffffffffffffe) != unaff_x25 - 1U))
  {
    FUN_100de6690(&stack0x00000110);
  }
  *(undefined8 *)(unaff_x29 + -0x78) = uVar6;
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
     (((bRam000000010b628008 - 1 < 2 ||
       ((bRam000000010b628008 != 0 &&
        (cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (&
                            __ZN16codex_app_server22bespoke_event_handling30on_request_user_input_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h113aef3aa494a890E
                           ), cVar4 != '\0')))) &&
      (iVar5 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (
                         ___ZN16codex_app_server22bespoke_event_handling30on_request_user_input_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h113aef3aa494a890E
                         ),
      uVar6 = 
      ___ZN16codex_app_server22bespoke_event_handling30on_request_user_input_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h113aef3aa494a890E
      , iVar5 != 0)))) {
    *(char **)(unaff_x29 + -0xb0) = s_4failed_to_deserialize_ToolReque_108acc573;
    *(undefined1 **)(unaff_x29 + -0xa8) = &stack0x00000280;
    *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -0xb0;
    *(undefined **)(unaff_x29 + -0xd8) = &UNK_10b208fd0;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(uVar6,&stack0x00000340);
    uVar6 = 
    ___ZN16codex_app_server22bespoke_event_handling30on_request_user_input_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h113aef3aa494a890E
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x000002c0);
      if (iVar5 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (uVar6,puVar2,puVar1,&stack0x000002c0,&stack0x00000340);
      }
    }
  }
  else {
    uVar6 = 
    ___ZN16codex_app_server22bespoke_event_handling30on_request_user_input_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h113aef3aa494a890E
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x000002c0);
      if (iVar5 != 0) {
        *(char **)(unaff_x29 + -0xb0) = s_4failed_to_deserialize_ToolReque_108acc573;
        *(undefined1 **)(unaff_x29 + -0xa8) = &stack0x00000280;
        *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -0xb0;
        *(undefined **)(unaff_x29 + -0xd8) = &UNK_10b208fd0;
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (uVar6,puVar2,puVar1,&stack0x000002c0,&stack0x00000340);
      }
    }
  }
  plVar7 = (long *)(*
                   ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                   )();
  if ((char)plVar7[2] == '\x01') {
    *plVar7 = *plVar7 + 1;
    plVar7 = *(long **)(unaff_x29 + -0x78);
    lVar3 = *plVar7;
    if (lVar3 == 1) goto LAB_10098cba8;
LAB_10098c8d8:
    if ((lVar3 == 0) && (plVar7[2] != 0)) {
      _free(plVar7[1]);
    }
  }
  else {
    auVar26 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(undefined1 *)(plVar7 + 2) = 1;
    *plVar7 = auVar26._0_8_ + 1;
    plVar7[1] = auVar26._8_8_;
    plVar7 = *(long **)(unaff_x29 + -0x78);
    lVar3 = *plVar7;
    if (lVar3 != 1) goto LAB_10098c8d8;
LAB_10098cba8:
    FUN_100de21d4(plVar7 + 1);
  }
  _free(plVar7);
  pauVar8 = (undefined1 (*) [16])
            (*
            ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
            )();
  if (pauVar8[1][0] == '\x01') {
    auVar26 = *pauVar8;
  }
  else {
    auVar26 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar8 + 8) = auVar26._8_8_;
    pauVar8[1][0] = 1;
    unaff_x28 = &stack0x00000340;
  }
  *(long *)*pauVar8 = auVar26._0_8_ + 1;
  *(undefined8 *)(unaff_x29 + -0xd8) = 0;
  *(undefined **)(unaff_x29 + -0xe0) = &UNK_108c56c70;
  *(undefined8 *)(unaff_x29 + -200) = 0;
  *(undefined8 *)(unaff_x29 + -0xd0) = 0;
  *(undefined1 (*) [16])(unaff_x29 + -0xc0) = auVar26;
  FUN_100d66b9c(&stack0x00000340);
  uVar12 = *(undefined8 *)(unaff_x29 + -0xd8);
  uVar6 = *(undefined8 *)(unaff_x29 + -0xe0);
  uVar15 = *(undefined8 *)(unaff_x29 + -200);
  uVar14 = *(undefined8 *)(unaff_x29 + -0xd0);
  uVar13 = *(undefined8 *)(unaff_x29 + -0xb8);
  uVar11 = *(undefined8 *)(unaff_x29 + -0xc0);
  *(long *)(unaff_x19 + 0x208) = unaff_x25 + 8;
  *(undefined1 *)(unaff_x19 + 0x1fa) = 0;
  *(undefined1 *)(unaff_x19 + 0x1ff) = 0;
  *(undefined8 *)(unaff_x19 + 0x218) = *(undefined8 *)(unaff_x19 + 0x128);
  *(undefined8 *)(unaff_x19 + 0x210) = *(undefined8 *)(unaff_x19 + 0x120);
  *(undefined8 *)(unaff_x19 + 0x220) = *(undefined8 *)(unaff_x19 + 0x130);
  *(undefined8 *)(unaff_x19 + 0x230) = uVar12;
  *(undefined8 *)(unaff_x19 + 0x228) = uVar6;
  *(undefined8 *)(unaff_x19 + 0x240) = uVar15;
  *(undefined8 *)(unaff_x19 + 0x238) = uVar14;
  *(undefined8 *)(unaff_x19 + 0x250) = uVar13;
  *(undefined8 *)(unaff_x19 + 0x248) = uVar11;
  *(long *)(unaff_x19 + 0x3f0) = *(long *)(unaff_x19 + 0x138) + 0x10;
  *(undefined1 *)(unaff_x19 + 0xee0) = 0;
  lVar3 = unaff_x19 + 0x208;
  FUN_1004f3438(&stack0x00000340,lVar3,*in_stack_00000018);
  if (unaff_x25 == -0x1c) {
    *in_stack_00000028 = 7;
    uVar10 = 3;
    uVar6 = 1;
    goto LAB_10098d028;
  }
  uVar14 = *(undefined8 *)(unaff_x28 + 0x60);
  uVar6 = *(undefined8 *)(unaff_x28 + 0x58);
  uVar22 = *(undefined8 *)(unaff_x28 + 0x70);
  uVar18 = *(undefined8 *)(unaff_x28 + 0x68);
  uVar15 = *(undefined8 *)(unaff_x28 + 0x80);
  uVar11 = *(undefined8 *)(unaff_x28 + 0x78);
  uVar23 = *(undefined8 *)(unaff_x28 + 0x90);
  uVar19 = *(undefined8 *)(unaff_x28 + 0x88);
  uVar16 = *(undefined8 *)(unaff_x28 + 0x20);
  uVar12 = *(undefined8 *)(unaff_x28 + 0x18);
  uVar24 = *(undefined8 *)(unaff_x28 + 0x30);
  uVar20 = *(undefined8 *)(unaff_x28 + 0x28);
  uVar17 = *(undefined8 *)(unaff_x28 + 0x40);
  uVar13 = *(undefined8 *)(unaff_x28 + 0x38);
  uVar25 = *(undefined8 *)(unaff_x28 + 0x50);
  uVar21 = *(undefined8 *)(unaff_x28 + 0x48);
  if (*(char *)(unaff_x19 + 0xee0) == '\0') {
LAB_10098ce88:
    FUN_100def028(lVar3);
  }
  else if (*(char *)(unaff_x19 + 0xee0) == '\x03') {
    if (*(char *)(unaff_x19 + 0xed8) == '\x03') {
      FUN_100e7ab5c(unaff_x19 + 0x5e8);
    }
    else if (*(char *)(unaff_x19 + 0xed8) == '\0') {
      lVar3 = unaff_x19 + 0x3f8;
      goto LAB_10098ce88;
    }
  }
  if (unaff_x25 == -0x1b) {
    if (extraout_x11 != 0) {
      _free(extraout_x12);
    }
  }
  else {
    *(undefined8 *)(unaff_x28 + 0x60) = uVar14;
    *(undefined8 *)(unaff_x28 + 0x58) = uVar6;
    *(undefined8 *)(unaff_x28 + 0x70) = uVar22;
    *(undefined8 *)(unaff_x28 + 0x68) = uVar18;
    *(undefined8 *)(unaff_x28 + 0x80) = uVar15;
    *(undefined8 *)(unaff_x28 + 0x78) = uVar11;
    *(undefined8 *)(unaff_x28 + 0x90) = uVar23;
    *(undefined8 *)(unaff_x28 + 0x88) = uVar19;
    *(undefined8 *)(unaff_x28 + 0x20) = uVar16;
    *(undefined8 *)(unaff_x28 + 0x18) = uVar12;
    *(undefined8 *)(unaff_x28 + 0x30) = uVar24;
    *(undefined8 *)(unaff_x28 + 0x28) = uVar20;
    *(undefined8 *)(unaff_x28 + 0x40) = uVar17;
    *(undefined8 *)(unaff_x28 + 0x38) = uVar13;
    *(undefined8 *)(unaff_x28 + 0x50) = uVar25;
    *(undefined8 *)(unaff_x28 + 0x48) = uVar21;
    if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) {
      if (1 < bRam000000010b627f90 - 1) {
        if (bRam000000010b627f90 != 0) {
          cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN16codex_app_server22bespoke_event_handling30on_request_user_input_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0f7cca482d1e7043E
                            );
          unaff_x28 = &stack0x00000340;
          if (cVar4 != '\0') goto LAB_10098cf14;
        }
        goto LAB_10098cf90;
      }
LAB_10098cf14:
      uVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                        (
                        ___ZN16codex_app_server22bespoke_event_handling30on_request_user_input_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0f7cca482d1e7043E
                        );
      if ((uVar9 & 1) == 0) goto LAB_10098cf90;
      *(undefined1 **)(unaff_x29 + -0xb0) = &stack0x00000340;
      *(code **)(unaff_x29 + -0xa8) =
           __ZN70__LT_codex_protocol__error__CodexErr_u20_as_u20_core__fmt__Display_GT_3fmt17h845996580fb769aeE
      ;
      *(char **)(unaff_x29 + -0xe0) = s__failed_to_submit_UserInputAnswe_108acc54e;
      *(long *)(unaff_x29 + -0xd8) = unaff_x29 + -0xb0;
      FUN_10098f790(&stack0x00000280);
    }
    else {
LAB_10098cf90:
      lVar3 = 
      ___ZN16codex_app_server22bespoke_event_handling30on_request_user_input_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0f7cca482d1e7043E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
        uVar6 = *(undefined8 *)
                 (
                 ___ZN16codex_app_server22bespoke_event_handling30on_request_user_input_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0f7cca482d1e7043E
                 + 0x20);
        uVar11 = *(undefined8 *)
                  (
                  ___ZN16codex_app_server22bespoke_event_handling30on_request_user_input_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0f7cca482d1e7043E
                  + 0x28);
        *(undefined8 *)(unaff_x29 + -0xf8) = 1;
        *(undefined8 *)(unaff_x29 + -0xf0) = uVar6;
        *(undefined8 *)(unaff_x29 + -0xe8) = uVar11;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -0xf8);
        if (iVar5 != 0) {
          *(undefined1 **)(unaff_x29 + -0xe0) = &stack0x00000340;
          *(code **)(unaff_x29 + -0xd8) =
               __ZN70__LT_codex_protocol__error__CodexErr_u20_as_u20_core__fmt__Display_GT_3fmt17h845996580fb769aeE
          ;
          *(undefined1 **)(unaff_x29 + -0x78) = &stack0x00000220;
          *(undefined **)(unaff_x29 + -0x70) = &UNK_10b208fd0;
          uVar6 = *(undefined8 *)(unaff_x28 + 0x98);
          *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x28 + 0xa0);
          *(undefined8 *)(unaff_x29 + -0xb0) = uVar6;
          *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0xe8);
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar3,puVar2,puVar1,unaff_x29 + -0xb0,&stack0x00000280);
        }
      }
    }
    FUN_100df5738(&stack0x00000340);
  }
  *(undefined1 *)(unaff_x19 + 0x1ff) = 0;
  if (*(long *)(unaff_x19 + 400) != -0x7fffffffffffffff) {
    *(undefined1 *)(unaff_x19 + 0x1f9) = 0;
  }
  *(undefined1 *)(unaff_x19 + 0x1f9) = 0;
  *(undefined2 *)(unaff_x19 + 0x1fb) = 0;
  *(undefined1 *)(unaff_x19 + 0x1fd) = 0;
  lVar3 = **(long **)(unaff_x19 + 0x140);
  **(long **)(unaff_x19 + 0x140) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7cbe8e2c0817b69fE(unaff_x19 + 0x140);
  }
  lVar3 = **(long **)(unaff_x19 + 0x138);
  **(long **)(unaff_x19 + 0x138) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(unaff_x19 + 0x138);
  }
  *(undefined1 *)(unaff_x19 + 0x1fe) = 0;
  *(undefined1 *)(unaff_x19 + 0x1fa) = 0;
  uVar10 = 1;
  *in_stack_00000028 = 1;
  FUN_100cecd1c(in_stack_00000020);
  uVar6 = 0;
LAB_10098d028:
  *(undefined1 *)(unaff_x19 + 0xf50) = uVar10;
  return uVar6;
}

