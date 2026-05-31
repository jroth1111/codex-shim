
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1014e4230(undefined1 *param_1)

{
  long lVar1;
  ulong *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  char cVar9;
  int iVar10;
  long *plVar11;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  ulong extraout_x1_05;
  undefined1 uVar12;
  code *pcVar13;
  ulong uVar14;
  ulong *unaff_x19;
  undefined8 uVar15;
  ulong *puVar16;
  char *pcVar17;
  char *unaff_x24;
  long unaff_x25;
  ulong *unaff_x26;
  long unaff_x29;
  ulong in_xzr;
  ulong uVar18;
  undefined1 auVar19 [16];
  ulong in_stack_00000018;
  ulong in_stack_00000020;
  ulong in_stack_00000028;
  ulong in_stack_00000030;
  ulong in_stack_00000038;
  ulong in_stack_00000040;
  ulong in_stack_00000048;
  ulong *puStack0000000000000050;
  undefined8 *puStack0000000000000058;
  ulong *in_stack_00000060;
  undefined1 *in_stack_00000068;
  ulong in_stack_00000070;
  ulong in_stack_00000078;
  ulong in_stack_00000080;
  ulong *in_stack_00000088;
  undefined8 *in_stack_00000090;
  ulong *in_stack_00000098;
  ulong *puStack00000000000000a0;
  undefined8 *puStack00000000000000a8;
  ulong *puStack00000000000000b0;
  undefined1 *puStack00000000000000b8;
  ulong in_stack_000000c0;
  ulong in_stack_000000c8;
  ulong in_stack_000000d0;
  ulong in_stack_000000d8;
  ulong in_stack_000000e0;
  ulong in_stack_000000e8;
  ulong in_stack_000000f0;
  char *pcStack0000000000000100;
  undefined8 *puStack0000000000000108;
  ulong *in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  ulong *in_stack_00000150;
  undefined8 *in_stack_00000158;
  ulong *in_stack_00000160;
  undefined1 *in_stack_00000168;
  ulong in_stack_00000170;
  ulong in_stack_00000188;
  ulong in_stack_00000190;
  ulong in_stack_00000198;
  ulong in_stack_000001a0;
  
  puStack0000000000000108 = &stack0x00000150;
  pcStack0000000000000100 = s_________tcp_connect_attempt_to_108ad87e2;
  puStack0000000000000050 = (ulong *)&stack0x00000100;
  puStack0000000000000058 = (undefined8 *)&UNK_10b208fd0;
  puStack00000000000000a8 = &stack0x00000050;
  puStack00000000000000a0 = (ulong *)0x1;
  puStack00000000000000b0 = (ulong *)0x1;
  puStack00000000000000b8 = param_1;
  FUN_1014a1460(&stack0x000000a0);
  uVar14 = *unaff_x26;
  uVar18 = unaff_x26[3];
  uVar8 = unaff_x26[2];
  unaff_x19[0x18] = unaff_x26[1];
  unaff_x19[0x17] = uVar14;
  unaff_x19[0x1a] = uVar18;
  unaff_x19[0x19] = uVar8;
  unaff_x19[0x1b] = (long)unaff_x19 + 0xb2;
  *(undefined1 *)(unaff_x19 + 0x31) = 0;
  FUN_1011a2e70(&stack0x00000018,unaff_x19 + 0x17);
  if (in_stack_00000018 == 3) {
    uVar15 = 1;
    uVar12 = 4;
    goto LAB_1014e4a80;
  }
  unaff_x19[0x10] = in_stack_00000020;
  unaff_x19[0xf] = in_stack_00000018;
  unaff_x19[0x12] = in_stack_00000030;
  unaff_x19[0x11] = in_stack_00000028;
  unaff_x19[0x14] = in_stack_00000040;
  unaff_x19[0x13] = in_stack_00000038;
  unaff_x19[0x15] = in_stack_00000048;
  if ((char)unaff_x19[0x31] == '\x03') {
    func_0x000100d19160(unaff_x19 + 0x1c);
  }
  if (unaff_x19[0xf] == 2) {
    puVar16 = (ulong *)unaff_x19[0x10];
    in_stack_00000150 = puVar16;
    auVar19 = _malloc(8);
    uVar14 = auVar19._8_8_;
    plVar11 = auVar19._0_8_;
    if (plVar11 == (long *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x1014e4c2c);
      (*pcVar13)();
    }
    *plVar11 = (long)puVar16;
    *(long **)(unaff_x29 + -0x70) = plVar11;
    *(undefined **)(unaff_x29 + -0x68) = &UNK_10b212e38;
    if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
      uVar14 = (ulong)bRam000000010b639aa8;
      if (1 < bRam000000010b639aa8 - 1) {
        if (bRam000000010b639aa8 != 0) {
          cVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he38d81af059e1421E
                            );
          if (cVar9 != '\0') goto LAB_1014e4834;
          uVar14 = 0;
        }
        goto LAB_1014e431c;
      }
LAB_1014e4834:
      auVar19 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (
                          ___ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he38d81af059e1421E
                          );
      uVar14 = auVar19._8_8_;
      if ((auVar19._0_8_ & 1) == 0) goto LAB_1014e431c;
      puStack00000000000000b8 =
           (undefined1 *)
           (
           ___ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he38d81af059e1421E
           + 0x30);
      in_stack_00000150 = unaff_x19 + 0x16;
      in_stack_00000158 = (undefined8 *)&DAT_10118b758;
      in_stack_00000160 = unaff_x19 + 0xc;
      in_stack_00000168 =
           &
           __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      in_stack_00000170 = unaff_x29 - 0x70;
      puStack0000000000000108 = &stack0x00000150;
      pcStack0000000000000100 = s__________tcp_connector_failed_to_108ad88ab;
      puStack0000000000000050 = (ulong *)&stack0x00000100;
      puStack0000000000000058 = (undefined8 *)&UNK_10b208fd0;
      puStack00000000000000a8 = &stack0x00000050;
      puStack00000000000000a0 = (ulong *)0x1;
      puStack00000000000000b0 = (ulong *)0x1;
      FUN_1014a16d8(&stack0x000000a0);
      uVar14 = extraout_x1_02;
    }
    else {
LAB_1014e431c:
      lVar7 = 
      ___ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he38d81af059e1421E
      ;
      if ((*unaff_x24 == '\0') && (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puStack0000000000000058 =
             *(undefined8 **)
              (
              ___ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he38d81af059e1421E
              + 0x20);
        in_stack_00000060 =
             *(ulong **)
              (
              ___ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he38d81af059e1421E
              + 0x28);
        puStack0000000000000050 = (ulong *)0x5;
        puVar3 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_10b3c24c8;
        }
        puVar4 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_109adfc03;
        }
        iVar10 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x00000050);
        uVar14 = extraout_x1;
        if (iVar10 != 0) {
          puStack00000000000000b8 =
               (undefined1 *)
               (
               ___ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he38d81af059e1421E
               + 0x30);
          in_stack_00000150 = unaff_x19 + 0x16;
          in_stack_00000160 = unaff_x19 + 0xc;
          in_stack_00000158 = (undefined8 *)&DAT_10118b758;
          in_stack_00000168 =
               &
               __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          in_stack_00000170 = unaff_x29 - 0x70;
          *(char **)(unaff_x29 + -0xa0) = s__________tcp_connector_failed_to_108ad88ab;
          *(ulong ***)(unaff_x29 + -0x98) = &stack0x00000150;
          *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -0xa0;
          *(undefined **)(unaff_x29 + -0xd8) = &UNK_10b208fd0;
          puStack00000000000000a8 = (undefined8 *)(unaff_x29 + -0xe0);
          puStack00000000000000a0 = (ulong *)0x1;
          puStack00000000000000b0 = (ulong *)0x1;
          puStack0000000000000108 = puStack0000000000000058;
          pcStack0000000000000100 = (char *)puStack0000000000000050;
          in_stack_00000110 = in_stack_00000060;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar7,puVar4,puVar3,&stack0x00000100,&stack0x000000a0);
          uVar14 = extraout_x1_00;
        }
      }
    }
    uVar15 = *(undefined8 *)(unaff_x29 + -0x70);
    puVar6 = *(undefined8 **)(unaff_x29 + -0x68);
    pcVar13 = (code *)*puVar6;
    if (pcVar13 != (code *)0x0) {
      (*pcVar13)(uVar15);
      uVar14 = extraout_x1_03;
    }
    if (puVar6[1] != 0) {
      _free(uVar15);
      uVar14 = extraout_x1_04;
    }
    iVar10 = (int)unaff_x19[0xe];
  }
  else {
    *(undefined1 *)((long)unaff_x19 + 0xb2) = 1;
    puStack0000000000000058 = (undefined8 *)unaff_x19[0x10];
    puStack0000000000000050 = (ulong *)unaff_x19[0xf];
    in_stack_00000068 = (undefined1 *)unaff_x19[0x12];
    in_stack_00000060 = (ulong *)unaff_x19[0x11];
    in_stack_00000078 = unaff_x19[0x14];
    in_stack_00000070 = unaff_x19[0x13];
    in_stack_00000080 = unaff_x19[0x15];
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
       (((bRam000000010b639a48 - 1 < 2 ||
         ((bRam000000010b639a48 != 0 &&
          (cVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0588ee151b3e1b6fE
                             ), cVar9 != '\0')))) &&
        (uVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (
                            ___ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0588ee151b3e1b6fE
                            ), (uVar14 & 1) != 0)))) {
      puStack00000000000000b8 =
           (undefined1 *)
           (
           ___ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0588ee151b3e1b6fE
           + 0x30);
      in_stack_00000150 = unaff_x19 + 0x16;
      in_stack_00000160 = unaff_x19 + 0xc;
      in_stack_00000158 = (undefined8 *)&DAT_10118b758;
      in_stack_00000168 =
           &
           __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      puStack0000000000000108 = &stack0x00000150;
      pcStack0000000000000100 = s_________tcp_connection_stablishe_108ad8881;
      *(char ***)(unaff_x29 + -0xa0) = &stack0x00000100;
      *(undefined **)(unaff_x29 + -0x98) = &UNK_10b208fd0;
      puStack00000000000000a8 = (undefined8 *)(unaff_x29 + -0xa0);
      puStack00000000000000a0 = (ulong *)0x1;
      puStack00000000000000b0 = (ulong *)0x1;
      FUN_1014a1814(&stack0x000000a0);
    }
    else {
      lVar7 = 
      ___ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0588ee151b3e1b6fE
      ;
      if ((*unaff_x24 == '\0') && (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        in_stack_00000090 =
             *(undefined8 **)
              (
              ___ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0588ee151b3e1b6fE
              + 0x20);
        in_stack_00000098 =
             *(ulong **)
              (
              ___ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0588ee151b3e1b6fE
              + 0x28);
        in_stack_00000088 = (ulong *)0x5;
        puVar3 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_10b3c24c8;
        }
        puVar4 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_109adfc03;
        }
        iVar10 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x00000088);
        if (iVar10 != 0) {
          puStack00000000000000b8 =
               (undefined1 *)
               (
               ___ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0588ee151b3e1b6fE
               + 0x30);
          in_stack_00000150 = unaff_x19 + 0x16;
          in_stack_00000160 = unaff_x19 + 0xc;
          in_stack_00000158 = (undefined8 *)&DAT_10118b758;
          in_stack_00000168 =
               &
               __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          *(char **)(unaff_x29 + -0xa0) = s_________tcp_connection_stablishe_108ad8881;
          *(ulong ***)(unaff_x29 + -0x98) = &stack0x00000150;
          *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -0xa0;
          *(undefined **)(unaff_x29 + -0xd8) = &UNK_10b208fd0;
          puStack00000000000000a8 = (undefined8 *)(unaff_x29 + -0xe0);
          puStack00000000000000a0 = (ulong *)0x1;
          puStack00000000000000b0 = (ulong *)0x1;
          puStack0000000000000108 = in_stack_00000090;
          pcStack0000000000000100 = (char *)in_stack_00000088;
          in_stack_00000110 = in_stack_00000098;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar7,puVar4,puVar3,&stack0x00000100,&stack0x000000a0);
        }
      }
    }
    *(undefined1 *)((long)unaff_x19 + 0xb2) = 0;
    in_stack_00000158 = puStack0000000000000058;
    in_stack_00000150 = puStack0000000000000050;
    in_stack_00000168 = in_stack_00000068;
    in_stack_00000160 = in_stack_00000060;
    uVar14 = *unaff_x26;
    uVar18 = unaff_x26[3];
    uVar8 = unaff_x26[2];
    *(ulong *)(unaff_x25 + 0x40) = unaff_x26[1];
    *(ulong *)(unaff_x25 + 0x38) = uVar14;
    in_stack_00000170 = in_stack_00000070;
    *(ulong *)(unaff_x25 + 0x50) = uVar18;
    *(ulong *)(unaff_x25 + 0x48) = uVar8;
    puStack00000000000000a8 = puStack0000000000000058;
    puStack00000000000000a0 = puStack0000000000000050;
    puStack00000000000000b8 = in_stack_00000068;
    puStack00000000000000b0 = in_stack_00000060;
    in_stack_000000f0 = in_stack_000001a0;
    in_stack_000000d8 = in_stack_00000188;
    in_stack_000000d0 = in_stack_00000080;
    in_stack_000000e8 = in_stack_00000198;
    in_stack_000000e0 = in_stack_00000190;
    in_stack_000000c8 = in_stack_00000078;
    in_stack_000000c0 = in_stack_00000070;
    unaff_x19[0x1c] = in_stack_00000078;
    unaff_x19[0x1b] = in_stack_00000070;
    unaff_x19[0x1e] = in_stack_00000188;
    unaff_x19[0x1d] = in_stack_00000080;
    unaff_x19[0x20] = in_stack_00000198;
    unaff_x19[0x1f] = in_stack_00000190;
    unaff_x19[0x18] = (ulong)puStack0000000000000058;
    unaff_x19[0x17] = (ulong)puStack0000000000000050;
    unaff_x19[0x1a] = (ulong)in_stack_00000068;
    unaff_x19[0x19] = (ulong)in_stack_00000060;
    unaff_x19[0x21] = in_stack_000001a0;
    unaff_x19[0x22] = (ulong)(unaff_x19 + 0xb);
    *(undefined1 *)(unaff_x19 + 0x3e) = 0;
    FUN_100fd00b8(&stack0x00000150,unaff_x19 + 0x17);
    puVar16 = in_stack_00000150;
    if (in_stack_00000150 == (ulong *)0x3) {
      uVar15 = 1;
      uVar12 = 5;
      goto LAB_1014e4a80;
    }
    in_stack_00000118 = *(undefined8 *)(unaff_x25 + 0x20);
    in_stack_00000110 = *(ulong **)(unaff_x25 + 0x18);
    in_stack_00000128 = *(undefined8 *)(unaff_x25 + 0x30);
    in_stack_00000120 = *(undefined8 *)(unaff_x25 + 0x28);
    in_stack_00000138 = *(undefined8 *)(unaff_x25 + 0x40);
    in_stack_00000130 = *(undefined8 *)(unaff_x25 + 0x38);
    in_stack_00000148 = *(undefined8 *)(unaff_x25 + 0x50);
    in_stack_00000140 = *(undefined8 *)(unaff_x25 + 0x48);
    puStack0000000000000108 = *(undefined8 **)(unaff_x25 + 0x10);
    pcStack0000000000000100 = *(char **)(unaff_x25 + 8);
    FUN_100d78898(unaff_x19 + 0x17);
    uVar14 = extraout_x1_01;
    if (puVar16 != (ulong *)0x2) {
      *(undefined8 *)(unaff_x25 + 0x20) = in_stack_00000118;
      *(ulong **)(unaff_x25 + 0x18) = in_stack_00000110;
      *(undefined8 *)(unaff_x25 + 0x30) = in_stack_00000128;
      *(undefined8 *)(unaff_x25 + 0x28) = in_stack_00000120;
      *(undefined8 *)(unaff_x25 + 0x40) = in_stack_00000138;
      *(undefined8 *)(unaff_x25 + 0x38) = in_stack_00000130;
      *(undefined8 *)(unaff_x25 + 0x50) = in_stack_00000148;
      *(undefined8 *)(unaff_x25 + 0x48) = in_stack_00000140;
      *(undefined8 **)(unaff_x25 + 0x10) = puStack0000000000000108;
      *(char **)(unaff_x25 + 8) = pcStack0000000000000100;
      in_stack_00000150 = puVar16;
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
          ((bRam000000010b639a90 - 1 < 2 ||
           ((bRam000000010b639a90 != 0 &&
            (cVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha7fd441dcdc9b0b5E
                               ), cVar9 != '\0')))))) &&
         (uVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha7fd441dcdc9b0b5E
                             ), (uVar14 & 1) != 0)) {
        lVar7 = ___ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha7fd441dcdc9b0b5E
                + 0x30;
        *(ulong **)(unaff_x29 + -0xa0) = unaff_x19 + 0x16;
        *(undefined **)(unaff_x29 + -0x98) = &DAT_10118b758;
        *(ulong **)(unaff_x29 + -0x90) = unaff_x19 + 0xc;
        *(undefined1 **)(unaff_x29 + -0x88) =
             &
             __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
        ;
        *(ulong ***)(unaff_x29 + -0x80) = &stack0x00000150;
        *(undefined **)(unaff_x29 + -0x78) = &DAT_1011e1858;
        *(char **)(unaff_x29 + -0x70) = s__________failed_to_send_resolved_108ad88d9;
        *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0xa0;
        *(long *)(unaff_x29 + -0xf8) = unaff_x29 + -0x70;
        *(undefined **)(unaff_x29 + -0xf0) = &UNK_10b208fd0;
        *(undefined8 *)(unaff_x29 + -0xe0) = 1;
        *(long *)(unaff_x29 + -0xd8) = unaff_x29 + -0xf8;
        *(undefined8 *)(unaff_x29 + -0xd0) = 1;
        *(long *)(unaff_x29 + -200) = lVar7;
        FUN_1014a11e8(unaff_x29 + -0xe0);
      }
      else {
        lVar7 = 
        ___ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha7fd441dcdc9b0b5E
        ;
        if ((*unaff_x24 == '\0') && (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uVar15 = *(undefined8 *)
                    (
                    ___ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha7fd441dcdc9b0b5E
                    + 0x20);
          uVar5 = *(undefined8 *)
                   (
                   ___ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha7fd441dcdc9b0b5E
                   + 0x28);
          *(undefined8 *)(unaff_x29 + -0xf8) = 5;
          *(undefined8 *)(unaff_x29 + -0xf0) = uVar15;
          *(undefined8 *)(unaff_x29 + -0xe8) = uVar5;
          puVar3 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_10b3c24c8;
          }
          puVar4 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar4 = &UNK_109adfc03;
          }
          iVar10 = (**(code **)(puVar3 + 0x18))(puVar4,unaff_x29 + -0xf8);
          if (iVar10 != 0) {
            lVar1 = ___ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha7fd441dcdc9b0b5E
                    + 0x30;
            *(ulong **)(unaff_x29 + -0xa0) = unaff_x19 + 0x16;
            *(undefined **)(unaff_x29 + -0x98) = &DAT_10118b758;
            *(ulong **)(unaff_x29 + -0x90) = unaff_x19 + 0xc;
            *(undefined1 **)(unaff_x29 + -0x88) =
                 &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
            ;
            *(ulong ***)(unaff_x29 + -0x80) = &stack0x00000150;
            *(undefined **)(unaff_x29 + -0x78) = &DAT_1011e1858;
            *(char **)(unaff_x29 + -0xb0) = s__________failed_to_send_resolved_108ad88d9;
            *(long *)(unaff_x29 + -0xa8) = unaff_x29 + -0xa0;
            *(long *)(unaff_x29 + -0xc0) = unaff_x29 + -0xb0;
            *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b208fd0;
            *(undefined8 *)(unaff_x29 + -0xe0) = 1;
            *(long *)(unaff_x29 + -0xd8) = unaff_x29 + -0xc0;
            *(undefined8 *)(unaff_x29 + -0xd0) = 1;
            *(long *)(unaff_x29 + -200) = lVar1;
            uVar15 = *(undefined8 *)(unaff_x25 + 0x58);
            *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x25 + 0x60);
            *(undefined8 *)(unaff_x29 + -0x70) = uVar15;
            *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x29 + -0xe8);
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar7,puVar4,puVar3,unaff_x29 + -0x70,unaff_x29 + -0xe0);
          }
        }
      }
      FUN_100deb62c(&stack0x00000150);
      func_0x000100e3c8d4(&stack0x00000170);
      uVar14 = extraout_x1_05;
    }
    *(undefined1 *)((long)unaff_x19 + 0xb2) = 0;
    iVar10 = (int)unaff_x19[0xe];
  }
  if (iVar10 != 0) {
    pcVar17 = (char *)unaff_x19[0xd];
    if (*pcVar17 == '\0') {
      *pcVar17 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar17,uVar14,1000000000);
    }
    FUN_1060fa678(pcVar17,iVar10,pcVar17);
  }
  lVar7 = *(long *)unaff_x19[9];
  *(long *)unaff_x19[9] = lVar7 + -1;
  LORelease();
  if (lVar7 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE();
  }
  lVar7 = *(long *)unaff_x19[10];
  *(long *)unaff_x19[10] = lVar7 + -1;
  LORelease();
  if (lVar7 == 1) {
    DataMemoryBarrier(2,1);
    func_0x0001060e2224();
  }
  puVar16 = unaff_x19 + 0xb;
  uVar14 = *puVar16;
  LOAcquire();
  lVar7 = *(long *)(uVar14 + 0x1f0);
  *(long *)(uVar14 + 0x1f0) = lVar7 + -1;
  LORelease();
  if (lVar7 == 1) {
    LOAcquire();
    lVar7 = *(long *)(uVar14 + 0x88);
    *(long *)(uVar14 + 0x88) = lVar7 + 1;
    lVar7 = func_0x000100fcbaa8(uVar14 + 0x80,lVar7);
    *(ulong *)(lVar7 + 0xb10) = *(ulong *)(lVar7 + 0xb10) | 0x200000000;
    LORelease();
    puVar2 = (ulong *)(uVar14 + 0x110);
    LOAcquire();
    uVar8 = *puVar2;
    *puVar2 = uVar8 | 2;
    LORelease();
    if (uVar8 == 0) {
      lVar7 = *(long *)(uVar14 + 0x100);
      *(undefined8 *)(uVar14 + 0x100) = 0;
      *puVar2 = in_xzr;
      LORelease();
      if (lVar7 != 0) {
        (**(code **)(lVar7 + 8))(*(undefined8 *)(uVar14 + 0x108));
      }
    }
  }
  lVar7 = *(long *)*puVar16;
  *(long *)*puVar16 = lVar7 + -1;
  LORelease();
  if (lVar7 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h49f814765505db59E(puVar16);
  }
  uVar15 = 0;
  uVar12 = 1;
LAB_1014e4a80:
  *(undefined1 *)((long)unaff_x19 + 0xb1) = uVar12;
  if (*unaff_x19 != 2) {
    uVar14 = unaff_x19[1];
    if ((*unaff_x19 & 1) != 0) {
      uVar14 = uVar14 + (*(long *)(unaff_x19[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(unaff_x19[2] + 0x68))(uVar14,unaff_x19 + 3);
  }
  if ((*unaff_x24 == '\0') && (uVar14 = unaff_x19[4], uVar14 != 0)) {
    puStack00000000000000a0 = *(ulong **)(uVar14 + 0x10);
    puStack00000000000000a8 = *(undefined8 **)(uVar14 + 0x18);
    in_stack_00000150 = (ulong *)&stack0x000000a0;
    in_stack_00000158 = (undefined8 *)&DAT_100c7b3a0;
    FUN_1011d7d74();
  }
  return uVar15;
}

