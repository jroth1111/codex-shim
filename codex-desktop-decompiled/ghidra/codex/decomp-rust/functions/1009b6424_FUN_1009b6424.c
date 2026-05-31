
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1009b6424(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  code *pcVar8;
  ulong uVar9;
  long unaff_x19;
  undefined1 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong unaff_x23;
  undefined8 *puVar13;
  long unaff_x25;
  ulong unaff_x26;
  long unaff_x29;
  long lVar14;
  long lVar15;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  ulong in_stack_00000020;
  undefined1 *in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000100;
  undefined *in_stack_00000108;
  long in_stack_00000110;
  long in_stack_00000118;
  long in_stack_00000120;
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
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  long in_stack_000001a0;
  long in_stack_000001a8;
  undefined8 in_stack_000001b0;
  long in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  in_stack_00000108 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000120);
  in_stack_00000100 = -0x7ffffffffffffff9;
  uVar9 = unaff_x26 ^ 0x8000000000000000;
  if (-1 < (long)unaff_x26) {
    uVar9 = 3;
  }
  if (uVar9 == 3) {
joined_r0x0001009b63f0:
    if (unaff_x26 != 0) {
      _free();
    }
  }
  else if (uVar9 == 1) {
    lVar4 = *(long *)(unaff_x29 + -0x90);
    unaff_x26 = unaff_x23;
    if (lVar4 != 0) {
      puVar11 = (undefined8 *)(*(long *)(unaff_x29 + -0x98) + 8);
      do {
        if (puVar11[-1] != 0) {
          _free(*puVar11);
        }
        puVar11 = puVar11 + 3;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    goto joined_r0x0001009b63f0;
  }
  FUN_100de8910(unaff_x25 + 0x48);
  if (in_stack_000001a0 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x000001a0);
  }
  if (((long)in_stack_00000020 < 0) &&
     ((in_stack_00000020 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    FUN_100de6690(&stack0x00000080);
  }
  if (in_stack_00000100 == -0x7ffffffffffffff9) {
    *(undefined **)(unaff_x29 + -0x68) = in_stack_00000108;
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
       (((bRam000000010b62da90 - 1 < 2 ||
         ((bRam000000010b62da90 != 0 &&
          (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN16codex_mcp_server14patch_approval26on_patch_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h644704c483a678f7E
                             ), cVar5 != '\0')))) &&
        (iVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN16codex_mcp_server14patch_approval26on_patch_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h644704c483a678f7E
                           ),
        lVar4 = 
        ___ZN16codex_mcp_server14patch_approval26on_patch_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h644704c483a678f7E
        , iVar6 != 0)))) {
      in_stack_000001b8 =
           ___ZN16codex_mcp_server14patch_approval26on_patch_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h644704c483a678f7E
           + 0x30;
      *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x68;
      *(code **)(unaff_x29 + -0x80) =
           __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E
      ;
      *(char **)(unaff_x29 + -0xa8) = s__failed_to_deserialize_PatchAppr_108accdce;
      *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0x88;
      *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0xa8;
      *(undefined **)(unaff_x29 + -200) = &UNK_10b208fd0;
      in_stack_000001a8 = unaff_x29 + -0xd0;
      in_stack_000001a0 = 1;
      in_stack_000001b0 = 1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar4,&stack0x000001a0);
      lVar4 = 
      ___ZN16codex_mcp_server14patch_approval26on_patch_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h644704c483a678f7E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
        in_stack_00000128 =
             *(undefined8 *)
              (
              ___ZN16codex_mcp_server14patch_approval26on_patch_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h644704c483a678f7E
              + 0x20);
        in_stack_00000130 =
             *(undefined8 *)
              (
              ___ZN16codex_mcp_server14patch_approval26on_patch_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h644704c483a678f7E
              + 0x28);
        in_stack_00000120 = 1;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000120);
        if (iVar6 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar4,puVar2,puVar1,&stack0x00000120,&stack0x000001a0);
        }
      }
    }
    else {
      lVar4 = 
      ___ZN16codex_mcp_server14patch_approval26on_patch_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h644704c483a678f7E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
        in_stack_00000128 =
             *(undefined8 *)
              (
              ___ZN16codex_mcp_server14patch_approval26on_patch_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h644704c483a678f7E
              + 0x20);
        in_stack_00000130 =
             *(undefined8 *)
              (
              ___ZN16codex_mcp_server14patch_approval26on_patch_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h644704c483a678f7E
              + 0x28);
        in_stack_00000120 = 1;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000120);
        if (iVar6 != 0) {
          in_stack_000001b8 =
               ___ZN16codex_mcp_server14patch_approval26on_patch_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h644704c483a678f7E
               + 0x30;
          *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x68;
          *(code **)(unaff_x29 + -0x80) =
               __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E
          ;
          *(char **)(unaff_x29 + -0xa8) = s__failed_to_deserialize_PatchAppr_108accdce;
          *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0x88;
          *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0xa8;
          *(undefined **)(unaff_x29 + -200) = &UNK_10b208fd0;
          in_stack_000001a8 = unaff_x29 + -0xd0;
          in_stack_000001a0 = 1;
          in_stack_000001b0 = 1;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar4,puVar2,puVar1,&stack0x00000120,&stack0x000001a0);
        }
      }
    }
    *in_stack_00000018 = -0x7ffffffffffffffc;
    plVar12 = *(long **)(unaff_x29 + -0x68);
    if (*plVar12 == 1) {
      uVar9 = plVar12[1];
      if ((uVar9 & 3) == 1) {
        puVar13 = (undefined8 *)(uVar9 - 1);
        uVar7 = *puVar13;
        puVar11 = *(undefined8 **)(uVar9 + 7);
        pcVar8 = (code *)*puVar11;
        if (pcVar8 != (code *)0x0) {
          (*pcVar8)(uVar7);
        }
        if (puVar11[1] != 0) {
          _free(uVar7);
        }
        goto LAB_1009b5dc8;
      }
    }
    else if ((*plVar12 == 0) && (plVar12[2] != 0)) {
      puVar13 = (undefined8 *)plVar12[1];
LAB_1009b5dc8:
      _free(puVar13);
    }
    _free(plVar12);
  }
  else {
    in_stack_00000018[1] = (long)in_stack_00000108;
    *in_stack_00000018 = in_stack_00000100;
    in_stack_00000018[3] = in_stack_00000118;
    in_stack_00000018[2] = in_stack_00000110;
  }
  *(undefined8 *)(unaff_x19 + 0xe0) = 0x800000000000000b;
  *(undefined2 *)(unaff_x19 + 0xb9) = 0;
  *(undefined8 *)(unaff_x19 + 0xf0) = *(undefined8 *)(unaff_x19 + 0x58);
  *(undefined8 *)(unaff_x19 + 0xe8) = *(undefined8 *)(unaff_x19 + 0x50);
  *(undefined8 *)(unaff_x19 + 0xf8) = *(undefined8 *)(unaff_x19 + 0x60);
  lVar4 = *in_stack_00000018;
  lVar15 = in_stack_00000018[3];
  lVar14 = in_stack_00000018[2];
  *(long *)(unaff_x19 + 0x108) = in_stack_00000018[1];
  *(long *)(unaff_x19 + 0x100) = lVar4;
  *(long *)(unaff_x19 + 0x118) = lVar15;
  *(long *)(unaff_x19 + 0x110) = lVar14;
  *(long *)(unaff_x19 + 0x2c8) = *(long *)(unaff_x19 + 0x68) + 0x10;
  *(undefined1 *)(unaff_x19 + 0xdb8) = 0;
  lVar4 = unaff_x19 + 0xe0;
  FUN_1004f3438(&stack0x000001a0,lVar4,in_stack_00000030);
  uVar7 = in_stack_000001b0;
  lVar15 = in_stack_000001a8;
  lVar14 = in_stack_000001a0;
  if (in_stack_000001a0 == -0x7fffffffffffffdf) {
    *in_stack_00000028 = 5;
    uVar10 = 3;
    uVar7 = 1;
    goto LAB_1009b6214;
  }
  in_stack_00000128 = in_stack_000001c0;
  in_stack_00000120 = in_stack_000001b8;
  in_stack_00000138 = in_stack_000001d0;
  in_stack_00000130 = in_stack_000001c8;
  in_stack_00000148 = in_stack_000001e0;
  in_stack_00000140 = in_stack_000001d8;
  in_stack_00000150 = in_stack_000001e8;
  if (*(char *)(unaff_x19 + 0xdb8) == '\0') {
LAB_1009b5eb0:
    FUN_100def028(lVar4);
  }
  else if (*(char *)(unaff_x19 + 0xdb8) == '\x03') {
    if (*(char *)(unaff_x19 + 0xdb0) == '\x03') {
      FUN_100e7ab5c(unaff_x19 + 0x4c0);
    }
    else if (*(char *)(unaff_x19 + 0xdb0) == '\0') {
      lVar4 = unaff_x19 + 0x2d0;
      goto LAB_1009b5eb0;
    }
  }
  if (lVar14 == -0x7fffffffffffffe0) {
    if (lVar15 != 0) {
      _free(uVar7);
    }
  }
  else {
    in_stack_000001c0 = in_stack_00000128;
    in_stack_000001b8 = in_stack_00000120;
    in_stack_000001d0 = in_stack_00000138;
    in_stack_000001c8 = in_stack_00000130;
    in_stack_000001e0 = in_stack_00000148;
    in_stack_000001d8 = in_stack_00000140;
    in_stack_000001e8 = in_stack_00000150;
    in_stack_000001a0 = lVar14;
    in_stack_000001a8 = lVar15;
    in_stack_000001b0 = uVar7;
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
        ((bRam000000010b62da48 - 1 < 2 ||
         ((bRam000000010b62da48 != 0 &&
          (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN16codex_mcp_server14patch_approval26on_patch_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h32d10c90dbc52b66E
                             ), cVar5 != '\0')))))) &&
       (uVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (
                          ___ZN16codex_mcp_server14patch_approval26on_patch_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h32d10c90dbc52b66E
                          ), (uVar9 & 1) != 0)) {
      lVar4 = ___ZN16codex_mcp_server14patch_approval26on_patch_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h32d10c90dbc52b66E
              + 0x30;
      *(long **)(unaff_x29 + -0xa8) = &stack0x000001a0;
      *(code **)(unaff_x29 + -0xa0) =
           __ZN70__LT_codex_protocol__error__CodexErr_u20_as_u20_core__fmt__Display_GT_3fmt17h845996580fb769aeE
      ;
      *(char **)(unaff_x29 + -0xd0) = s_failed_to_submit_PatchApproval__108acc5da;
      *(long *)(unaff_x29 + -200) = unaff_x29 + -0xa8;
      in_stack_00000100 = unaff_x29 + -0xd0;
      in_stack_00000108 = &UNK_10b208fd0;
      *(undefined8 *)(unaff_x29 + -0x88) = 1;
      *(long **)(unaff_x29 + -0x80) = &stack0x00000100;
      *(undefined8 *)(unaff_x29 + -0x78) = 1;
      *(long *)(unaff_x29 + -0x70) = lVar4;
      FUN_1009b5188(unaff_x29 + -0x88);
    }
    else {
      lVar4 = 
      ___ZN16codex_mcp_server14patch_approval26on_patch_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h32d10c90dbc52b66E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
        uVar7 = *(undefined8 *)
                 (
                 ___ZN16codex_mcp_server14patch_approval26on_patch_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h32d10c90dbc52b66E
                 + 0x20);
        uVar3 = *(undefined8 *)
                 (
                 ___ZN16codex_mcp_server14patch_approval26on_patch_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h32d10c90dbc52b66E
                 + 0x28);
        *(undefined8 *)(unaff_x29 + -0xe8) = 1;
        *(undefined8 *)(unaff_x29 + -0xe0) = uVar7;
        *(undefined8 *)(unaff_x29 + -0xd8) = uVar3;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -0xe8);
        if (iVar6 != 0) {
          lVar14 = ___ZN16codex_mcp_server14patch_approval26on_patch_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h32d10c90dbc52b66E
                   + 0x30;
          *(long **)(unaff_x29 + -0xa8) = &stack0x000001a0;
          *(code **)(unaff_x29 + -0xa0) =
               __ZN70__LT_codex_protocol__error__CodexErr_u20_as_u20_core__fmt__Display_GT_3fmt17h845996580fb769aeE
          ;
          *(char **)(unaff_x29 + -0xd0) = s_failed_to_submit_PatchApproval__108acc5da;
          *(long *)(unaff_x29 + -200) = unaff_x29 + -0xa8;
          in_stack_00000100 = unaff_x29 + -0xd0;
          in_stack_00000108 = &UNK_10b208fd0;
          *(undefined8 *)(unaff_x29 + -0x88) = 1;
          *(long **)(unaff_x29 + -0x80) = &stack0x00000100;
          *(undefined8 *)(unaff_x29 + -0x78) = 1;
          *(long *)(unaff_x29 + -0x70) = lVar14;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar4,puVar2,puVar1,unaff_x29 + -0xe8,unaff_x29 + -0x88);
        }
      }
    }
    FUN_100df5738(&stack0x000001a0);
  }
  *(undefined1 *)(unaff_x19 + 0xba) = 0;
  lVar4 = **(long **)(unaff_x19 + 0x68);
  **(long **)(unaff_x19 + 0x68) = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E();
  }
  uVar10 = 1;
  *(undefined2 *)(unaff_x19 + 0xb8) = 1;
  FUN_100cc5b38(in_stack_00000010);
  uVar7 = 0;
LAB_1009b6214:
  *(undefined1 *)(unaff_x19 + 0xdc0) = uVar10;
  return uVar7;
}

