
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1009b4c3c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  undefined8 uVar10;
  long unaff_x19;
  undefined1 uVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  long unaff_x23;
  undefined8 unaff_x25;
  undefined1 *unaff_x26;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  long in_stack_00000130;
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
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  in_stack_00000118 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000130);
  in_stack_00000110 = -0x7ffffffffffffff9;
  uVar9 = unaff_x28 ^ 0x8000000000000000;
  if (-1 < (long)unaff_x28) {
    uVar9 = 3;
  }
  if (uVar9 == 3) {
joined_r0x0001009b4c00:
    if (unaff_x28 != 0) {
      _free();
    }
  }
  else if (uVar9 == 1) {
    lVar7 = *(long *)(unaff_x29 + -0x88);
    unaff_x28 = in_stack_00000010;
    if (lVar7 != 0) {
      puVar12 = (undefined8 *)(*(long *)(unaff_x29 + -0x90) + 8);
      do {
        if (puVar12[-1] != 0) {
          _free(*puVar12);
        }
        puVar12 = puVar12 + 3;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    goto joined_r0x0001009b4c00;
  }
  FUN_100de8910(unaff_x23 + 0x48);
  if (in_stack_000001b0 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x000001b0);
  }
  if (((long)in_stack_00000018 < 0) &&
     ((in_stack_00000018 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    FUN_100de6690(&stack0x000000b0);
  }
  if (in_stack_00000110 == -0x7ffffffffffffff9) {
    *(undefined8 *)(unaff_x29 + -0xd0) = in_stack_00000118;
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
       (((bRam000000010b62da18 - 1 < 2 ||
         ((bRam000000010b62da18 != 0 &&
          (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN16codex_mcp_server13exec_approval25on_exec_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3d3dc144e2abf8d0E
                             ), cVar5 != '\0')))) &&
        (iVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN16codex_mcp_server13exec_approval25on_exec_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3d3dc144e2abf8d0E
                           ),
        lVar7 = 
        ___ZN16codex_mcp_server13exec_approval25on_exec_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3d3dc144e2abf8d0E
        , iVar6 != 0)))) {
      in_stack_000001c8 =
           ___ZN16codex_mcp_server13exec_approval25on_exec_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3d3dc144e2abf8d0E
           + 0x30;
      *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xd0;
      *(code **)(unaff_x29 + -0x78) =
           __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E
      ;
      *(char **)(unaff_x29 + -0xa0) = s__failed_to_deserialize_ExecAppro_108acccbc;
      *(long *)(unaff_x29 + -0x98) = unaff_x29 + -0x80;
      *(long *)(unaff_x29 + -0xc0) = unaff_x29 + -0xa0;
      *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b208fd0;
      in_stack_000001b8 = unaff_x29 + -0xc0;
      in_stack_000001b0 = 1;
      in_stack_000001c0 = 1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar7,&stack0x000001b0);
      lVar7 = 
      ___ZN16codex_mcp_server13exec_approval25on_exec_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3d3dc144e2abf8d0E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
        in_stack_00000138 =
             *(undefined8 *)
              (
              ___ZN16codex_mcp_server13exec_approval25on_exec_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3d3dc144e2abf8d0E
              + 0x20);
        in_stack_00000140 =
             *(undefined8 *)
              (
              ___ZN16codex_mcp_server13exec_approval25on_exec_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3d3dc144e2abf8d0E
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
        iVar6 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000130);
        if (iVar6 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar7,puVar3,puVar2,&stack0x00000130,&stack0x000001b0);
        }
      }
    }
    else {
      lVar7 = 
      ___ZN16codex_mcp_server13exec_approval25on_exec_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3d3dc144e2abf8d0E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
        in_stack_00000138 =
             *(undefined8 *)
              (
              ___ZN16codex_mcp_server13exec_approval25on_exec_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3d3dc144e2abf8d0E
              + 0x20);
        in_stack_00000140 =
             *(undefined8 *)
              (
              ___ZN16codex_mcp_server13exec_approval25on_exec_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3d3dc144e2abf8d0E
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
        iVar6 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000130);
        if (iVar6 != 0) {
          in_stack_000001c8 =
               ___ZN16codex_mcp_server13exec_approval25on_exec_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3d3dc144e2abf8d0E
               + 0x30;
          *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xd0;
          *(code **)(unaff_x29 + -0x78) =
               __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E
          ;
          *(char **)(unaff_x29 + -0xa0) = s__failed_to_deserialize_ExecAppro_108acccbc;
          *(long *)(unaff_x29 + -0x98) = unaff_x29 + -0x80;
          *(long *)(unaff_x29 + -0xc0) = unaff_x29 + -0xa0;
          *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b208fd0;
          in_stack_000001b8 = unaff_x29 + -0xc0;
          in_stack_000001b0 = 1;
          in_stack_000001c0 = 1;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar7,puVar3,puVar2,&stack0x00000130,&stack0x000001b0);
        }
      }
    }
    *(undefined8 *)(unaff_x19 + 0xd0) = 0x8000000000000004;
    plVar13 = *(long **)(unaff_x29 + -0xd0);
    if (*plVar13 == 1) {
      uVar9 = plVar13[1];
      if ((uVar9 & 3) == 1) {
        puVar14 = (undefined8 *)(uVar9 - 1);
        uVar10 = *puVar14;
        puVar12 = *(undefined8 **)(uVar9 + 7);
        pcVar8 = (code *)*puVar12;
        if (pcVar8 != (code *)0x0) {
          (*pcVar8)(uVar10);
        }
        if (puVar12[1] != 0) {
          _free(uVar10);
        }
        goto LAB_1009b4634;
      }
    }
    else if ((*plVar13 == 0) && (plVar13[2] != 0)) {
      puVar14 = (undefined8 *)plVar13[1];
LAB_1009b4634:
      _free(puVar14);
    }
    _free(plVar13);
  }
  else {
    *(undefined8 *)(unaff_x19 + 0xd8) = in_stack_00000118;
    *(long *)(unaff_x19 + 0xd0) = in_stack_00000110;
    *(undefined8 *)(unaff_x19 + 0xe8) = in_stack_00000128;
    *(undefined8 *)(unaff_x19 + 0xe0) = in_stack_00000120;
  }
  lVar7 = *(long *)(unaff_x19 + 0x80);
  uVar16 = *(undefined8 *)(unaff_x19 + 0x100);
  uVar15 = *(undefined8 *)(unaff_x19 + 0xf8);
  *(undefined8 *)(unaff_x29 + -0xb8) = uVar16;
  *(undefined8 *)(unaff_x29 + -0xc0) = uVar15;
  uVar10 = *(undefined8 *)(unaff_x19 + 0x108);
  *(undefined8 *)(unaff_x29 + -0xb0) = uVar10;
  *(undefined2 *)(unaff_x19 + 0xf1) = 0;
  in_stack_00000118 = *(undefined8 *)(unaff_x19 + 0x118);
  in_stack_00000110 = *(undefined8 *)(unaff_x19 + 0x110);
  in_stack_00000120 = *(undefined8 *)(unaff_x19 + 0x120);
  *(undefined1 *)(unaff_x19 + 0xf3) = 0;
  *(undefined8 *)(unaff_x19 + 0xf8) = 0x800000000000000a;
  *(undefined8 *)(unaff_x19 + 0x108) = uVar16;
  *(undefined8 *)(unaff_x19 + 0x100) = uVar15;
  *(undefined8 *)(unaff_x19 + 0x110) = uVar10;
  *(undefined8 *)(unaff_x19 + 0x120) = in_stack_00000118;
  *(long *)(unaff_x19 + 0x118) = in_stack_00000110;
  *(undefined8 *)(unaff_x19 + 0x128) = in_stack_00000120;
  *(undefined8 *)(unaff_x19 + 0x138) = *(undefined8 *)(unaff_x19 + 0xd8);
  *(undefined8 *)(unaff_x19 + 0x130) = *(undefined8 *)(unaff_x19 + 0xd0);
  *(undefined8 *)(unaff_x19 + 0x148) = *(undefined8 *)(unaff_x19 + 0xe8);
  *(undefined8 *)(unaff_x19 + 0x140) = *(undefined8 *)(unaff_x19 + 0xe0);
  *(long *)(unaff_x19 + 0x2e0) = lVar7 + 0x10;
  *(undefined1 *)(unaff_x19 + 0xdd0) = 0;
  lVar7 = unaff_x19 + 0xf8;
  FUN_1004f3438(&stack0x000001b0,lVar7,in_stack_00000020);
  uVar10 = in_stack_000001c0;
  lVar4 = in_stack_000001b8;
  lVar1 = in_stack_000001b0;
  if (in_stack_000001b0 == -0x7fffffffffffffdf) {
    *unaff_x26 = 4;
    uVar11 = 3;
    uVar10 = 1;
    goto LAB_1009b4a10;
  }
  in_stack_00000138 = in_stack_000001d0;
  in_stack_00000130 = in_stack_000001c8;
  in_stack_00000148 = in_stack_000001e0;
  in_stack_00000140 = in_stack_000001d8;
  in_stack_00000150 = in_stack_000001e8;
  if (*(char *)(unaff_x19 + 0xdd0) == '\0') {
LAB_1009b4748:
    FUN_100def028(lVar7);
  }
  else if (*(char *)(unaff_x19 + 0xdd0) == '\x03') {
    if (*(char *)(unaff_x19 + 0xdc8) == '\x03') {
      FUN_100e7ab5c(unaff_x19 + 0x4d8);
    }
    else if (*(char *)(unaff_x19 + 0xdc8) == '\0') {
      lVar7 = unaff_x19 + 0x2e8;
      goto LAB_1009b4748;
    }
  }
  if (lVar1 == -0x7fffffffffffffe0) {
    if (lVar4 != 0) {
      _free(uVar10);
    }
  }
  else {
    in_stack_000001d0 = in_stack_00000138;
    in_stack_000001c8 = in_stack_00000130;
    in_stack_000001e0 = in_stack_00000148;
    in_stack_000001d8 = in_stack_00000140;
    in_stack_000001e8 = in_stack_00000150;
    in_stack_000001b0 = lVar1;
    in_stack_000001b8 = lVar4;
    in_stack_000001c0 = uVar10;
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
        ((bRam000000010b62d9e8 - 1 < 2 ||
         ((bRam000000010b62d9e8 != 0 &&
          (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN16codex_mcp_server13exec_approval25on_exec_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2522edf8a3659a44E
                             ), cVar5 != '\0')))))) &&
       (uVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (
                          ___ZN16codex_mcp_server13exec_approval25on_exec_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2522edf8a3659a44E
                          ),
       lVar7 = 
       ___ZN16codex_mcp_server13exec_approval25on_exec_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2522edf8a3659a44E
       , (uVar9 & 1) != 0)) {
      lVar1 = ___ZN16codex_mcp_server13exec_approval25on_exec_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2522edf8a3659a44E
              + 0x30;
      *(long **)(unaff_x29 + -0xd0) = &stack0x000001b0;
      *(code **)(unaff_x29 + -200) =
           __ZN70__LT_codex_protocol__error__CodexErr_u20_as_u20_core__fmt__Display_GT_3fmt17h845996580fb769aeE
      ;
      *(char **)(unaff_x29 + -0xe0) = s_failed_to_submit_ExecApproval__108acc639;
      *(long *)(unaff_x29 + -0xd8) = unaff_x29 + -0xd0;
      *(undefined8 *)(unaff_x29 + -0x80) = 1;
      *(undefined1 **)(unaff_x29 + -0x78) = &stack0x00000248;
      *(undefined8 *)(unaff_x29 + -0x70) = 1;
      *(long *)(unaff_x29 + -0x68) = lVar1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar7,unaff_x29 + -0x80);
      lVar7 = 
      ___ZN16codex_mcp_server13exec_approval25on_exec_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2522edf8a3659a44E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
        uVar10 = *(undefined8 *)
                  (
                  ___ZN16codex_mcp_server13exec_approval25on_exec_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2522edf8a3659a44E
                  + 0x20);
        uVar15 = *(undefined8 *)
                  (
                  ___ZN16codex_mcp_server13exec_approval25on_exec_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2522edf8a3659a44E
                  + 0x28);
        *(undefined8 *)(unaff_x29 + -0xa0) = 1;
        *(undefined8 *)(unaff_x29 + -0x98) = uVar10;
        *(undefined8 *)(unaff_x29 + -0x90) = uVar15;
        puVar2 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_10b3c24c8;
        }
        puVar3 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_109adfc03;
        }
        iVar6 = (**(code **)(puVar2 + 0x18))(puVar3,unaff_x29 + -0xa0);
        if (iVar6 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar7,puVar3,puVar2,unaff_x29 + -0xa0,unaff_x29 + -0x80);
        }
      }
    }
    else {
      lVar7 = 
      ___ZN16codex_mcp_server13exec_approval25on_exec_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2522edf8a3659a44E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
        uVar10 = *(undefined8 *)
                  (
                  ___ZN16codex_mcp_server13exec_approval25on_exec_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2522edf8a3659a44E
                  + 0x20);
        uVar15 = *(undefined8 *)
                  (
                  ___ZN16codex_mcp_server13exec_approval25on_exec_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2522edf8a3659a44E
                  + 0x28);
        *(undefined8 *)(unaff_x29 + -0xf8) = 1;
        *(undefined8 *)(unaff_x29 + -0xf0) = uVar10;
        *(undefined8 *)(unaff_x29 + -0xe8) = uVar15;
        puVar2 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_10b3c24c8;
        }
        puVar3 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_109adfc03;
        }
        iVar6 = (**(code **)(puVar2 + 0x18))(puVar3,unaff_x29 + -0xf8);
        if (iVar6 != 0) {
          lVar1 = ___ZN16codex_mcp_server13exec_approval25on_exec_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2522edf8a3659a44E
                  + 0x30;
          *(long **)(unaff_x29 + -0xa0) = &stack0x000001b0;
          *(code **)(unaff_x29 + -0x98) =
               __ZN70__LT_codex_protocol__error__CodexErr_u20_as_u20_core__fmt__Display_GT_3fmt17h845996580fb769aeE
          ;
          *(char **)(unaff_x29 + -0xd0) = s_failed_to_submit_ExecApproval__108acc639;
          *(long *)(unaff_x29 + -200) = unaff_x29 + -0xa0;
          *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -0xd0;
          *(undefined **)(unaff_x29 + -0xd8) = &UNK_10b208fd0;
          *(undefined8 *)(unaff_x29 + -0x80) = 1;
          *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0xe0;
          *(undefined8 *)(unaff_x29 + -0x70) = 1;
          *(long *)(unaff_x29 + -0x68) = lVar1;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar7,puVar3,puVar2,unaff_x29 + -0xf8,unaff_x29 + -0x80);
        }
      }
    }
    FUN_100df5738(&stack0x000001b0);
  }
  *(undefined1 *)(unaff_x19 + 0xf3) = 0;
  lVar7 = **(long **)(unaff_x19 + 0x80);
  **(long **)(unaff_x19 + 0x80) = lVar7 + -1;
  LORelease();
  if (lVar7 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E();
  }
  *(undefined1 *)(unaff_x19 + 0xf1) = 0;
  *(undefined1 *)(unaff_x19 + 0xf2) = 0;
  uVar11 = 1;
  *(undefined1 *)(unaff_x19 + 0xf0) = 1;
  FUN_100cbd6ec(unaff_x25);
  uVar10 = 0;
LAB_1009b4a10:
  *(undefined1 *)(unaff_x19 + 0xdd8) = uVar11;
  return uVar10;
}

