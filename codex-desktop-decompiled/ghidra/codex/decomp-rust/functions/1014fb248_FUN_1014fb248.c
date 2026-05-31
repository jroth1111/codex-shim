
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1014fb248(undefined1 *param_1)

{
  long lVar1;
  ulong *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  char cVar8;
  int iVar9;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  ulong extraout_x1_05;
  ulong extraout_x1_06;
  undefined1 uVar10;
  code *pcVar11;
  ulong uVar12;
  ulong *unaff_x19;
  undefined8 uVar13;
  char *pcVar14;
  ulong *puVar15;
  char *unaff_x25;
  long unaff_x26;
  ulong *unaff_x27;
  long unaff_x29;
  ulong in_xzr;
  ulong uVar16;
  undefined1 auVar17 [16];
  ulong *in_stack_00000000;
  undefined8 *in_stack_00000008;
  ulong *in_stack_00000010;
  undefined1 *puStack0000000000000018;
  undefined *puStack0000000000000020;
  ulong in_stack_00000028;
  ulong in_stack_00000030;
  ulong in_stack_00000038;
  ulong in_stack_00000040;
  ulong in_stack_00000048;
  char *pcStack0000000000000050;
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
  ulong *puStack0000000000000110;
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
  long in_stack_000001a8;
  undefined *in_stack_000001b0;
  undefined8 in_stack_000001b8;
  
  puStack0000000000000058 = &stack0x00000150;
  pcStack0000000000000050 = s_________tcp_connect_attempt_to_108ad87e2;
  puStack0000000000000018 = (undefined1 *)&stack0x00000050;
  puStack0000000000000020 = &UNK_10b208fd0;
  puStack00000000000000a8 = &stack0x00000018;
  puStack00000000000000a0 = (ulong *)0x1;
  puStack00000000000000b0 = (ulong *)0x1;
  puStack0000000000000108 = in_stack_00000008;
  pcStack0000000000000100 = (char *)in_stack_00000000;
  puStack0000000000000110 = in_stack_00000010;
  puStack00000000000000b8 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  uVar12 = *unaff_x27;
  uVar16 = unaff_x27[3];
  uVar7 = unaff_x27[2];
  unaff_x19[0x1a] = unaff_x27[1];
  unaff_x19[0x19] = uVar12;
  unaff_x19[0x1c] = uVar16;
  unaff_x19[0x1b] = uVar7;
  unaff_x19[0x1d] = (ulong)(unaff_x19 + 9);
  *(undefined1 *)(unaff_x19 + 0x22) = 0;
  puVar15 = unaff_x19 + 0x19;
  FUN_100755cfc(&stack0x00000018,puVar15);
  if (puStack0000000000000018 == (undefined1 *)0x3) {
    uVar13 = 1;
    uVar10 = 4;
    goto LAB_1014fbd68;
  }
  unaff_x19[0x12] = (ulong)puStack0000000000000020;
  unaff_x19[0x11] = (ulong)puStack0000000000000018;
  unaff_x19[0x14] = in_stack_00000030;
  unaff_x19[0x13] = in_stack_00000028;
  unaff_x19[0x16] = in_stack_00000040;
  unaff_x19[0x15] = in_stack_00000038;
  unaff_x19[0x17] = in_stack_00000048;
  FUN_100d89118(puVar15);
  if (unaff_x19[0x11] == 2) {
    uVar12 = unaff_x19[0x12];
    *(ulong *)(unaff_x29 + -0x78) = unaff_x19[0x13];
    *(ulong *)(unaff_x29 + -0x80) = uVar12;
    uVar12 = extraout_x1;
    if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
      uVar12 = (ulong)bRam000000010b639aa8;
      if (1 < bRam000000010b639aa8 - 1) {
        if (bRam000000010b639aa8 != 0) {
          cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he38d81af059e1421E
                            );
          if (cVar8 != '\0') goto LAB_1014fb85c;
          uVar12 = 0;
        }
        goto LAB_1014fb5e4;
      }
LAB_1014fb85c:
      auVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (
                          ___ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he38d81af059e1421E
                          );
      uVar12 = auVar17._8_8_;
      if ((auVar17._0_8_ & 1) == 0) goto LAB_1014fb5e4;
      puStack00000000000000b8 =
           (undefined1 *)
           (
           ___ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he38d81af059e1421E
           + 0x30);
      in_stack_00000150 = unaff_x19 + 0x18;
      in_stack_00000158 = (undefined8 *)&DAT_10118b758;
      in_stack_00000160 = unaff_x19 + 0xe;
      in_stack_00000168 =
           &
           __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      in_stack_00000170 = unaff_x29 - 0x80;
      puStack0000000000000108 = &stack0x00000150;
      pcStack0000000000000100 = s__________tcp_connector_failed_to_108ad88ab;
      pcStack0000000000000050 = (char *)&stack0x00000100;
      puStack0000000000000058 = (undefined8 *)&UNK_10b208fd0;
      puStack00000000000000a8 = &stack0x00000050;
      puStack00000000000000a0 = (ulong *)0x1;
      puStack00000000000000b0 = (ulong *)0x1;
      FUN_1014a16d8(&stack0x000000a0);
      uVar12 = extraout_x1_02;
    }
    else {
LAB_1014fb5e4:
      lVar6 = 
      ___ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he38d81af059e1421E
      ;
      if ((*unaff_x25 == '\0') && (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
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
        pcStack0000000000000050 = (char *)0x5;
        puVar3 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_10b3c24c8;
        }
        puVar4 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_109adfc03;
        }
        iVar9 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x00000050);
        uVar12 = extraout_x1_00;
        if (iVar9 != 0) {
          puStack00000000000000b8 =
               (undefined1 *)
               (
               ___ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he38d81af059e1421E
               + 0x30);
          in_stack_00000150 = unaff_x19 + 0x18;
          in_stack_00000160 = unaff_x19 + 0xe;
          in_stack_00000158 = (undefined8 *)&DAT_10118b758;
          in_stack_00000168 =
               &
               __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          in_stack_00000170 = unaff_x29 - 0x80;
          *(char **)(unaff_x29 + -0xb0) = s__________tcp_connector_failed_to_108ad88ab;
          *(ulong ***)(unaff_x29 + -0xa8) = &stack0x00000150;
          *(long *)(unaff_x29 + -0xf0) = unaff_x29 + -0xb0;
          *(undefined **)(unaff_x29 + -0xe8) = &UNK_10b208fd0;
          puStack00000000000000a8 = (undefined8 *)(unaff_x29 + -0xf0);
          puStack00000000000000a0 = (ulong *)0x1;
          puStack00000000000000b0 = (ulong *)0x1;
          puStack0000000000000108 = puStack0000000000000058;
          pcStack0000000000000100 = pcStack0000000000000050;
          puStack0000000000000110 = in_stack_00000060;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar6,puVar4,puVar3,&stack0x00000100,&stack0x000000a0);
          uVar12 = extraout_x1_01;
        }
      }
    }
    uVar13 = *(undefined8 *)(unaff_x29 + -0x80);
    puVar5 = *(undefined8 **)(unaff_x29 + -0x78);
    pcVar11 = (code *)*puVar5;
    if (pcVar11 != (code *)0x0) {
      (*pcVar11)(uVar13);
      uVar12 = extraout_x1_03;
    }
    if (puVar5[1] != 0) {
      _free(uVar13);
      uVar12 = extraout_x1_04;
    }
    iVar9 = (int)unaff_x19[0x10];
  }
  else {
    *(undefined1 *)((long)unaff_x19 + 0xc2) = 1;
    puStack0000000000000058 = (undefined8 *)unaff_x19[0x12];
    pcStack0000000000000050 = (char *)unaff_x19[0x11];
    in_stack_00000068 = (undefined1 *)unaff_x19[0x14];
    in_stack_00000060 = (ulong *)unaff_x19[0x13];
    in_stack_00000078 = unaff_x19[0x16];
    in_stack_00000070 = unaff_x19[0x15];
    in_stack_00000080 = unaff_x19[0x17];
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
       (((bRam000000010b639a48 - 1 < 2 ||
         ((bRam000000010b639a48 != 0 &&
          (cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0588ee151b3e1b6fE
                             ), cVar8 != '\0')))) &&
        (uVar12 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (
                            ___ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0588ee151b3e1b6fE
                            ), (uVar12 & 1) != 0)))) {
      puStack00000000000000b8 =
           (undefined1 *)
           (
           ___ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0588ee151b3e1b6fE
           + 0x30);
      in_stack_00000150 = unaff_x19 + 0x18;
      in_stack_00000160 = unaff_x19 + 0xe;
      in_stack_00000158 = (undefined8 *)&DAT_10118b758;
      in_stack_00000168 =
           &
           __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      puStack0000000000000108 = &stack0x00000150;
      pcStack0000000000000100 = s_________tcp_connection_stablishe_108ad8881;
      *(char ***)(unaff_x29 + -0xb0) = &stack0x00000100;
      *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b208fd0;
      puStack00000000000000a8 = (undefined8 *)(unaff_x29 + -0xb0);
      puStack00000000000000a0 = (ulong *)0x1;
      puStack00000000000000b0 = (ulong *)0x1;
      FUN_1014a1814(&stack0x000000a0);
    }
    else {
      lVar6 = 
      ___ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0588ee151b3e1b6fE
      ;
      if ((*unaff_x25 == '\0') && (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
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
        iVar9 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x00000088);
        if (iVar9 != 0) {
          puStack00000000000000b8 =
               (undefined1 *)
               (
               ___ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0588ee151b3e1b6fE
               + 0x30);
          in_stack_00000150 = unaff_x19 + 0x18;
          in_stack_00000160 = unaff_x19 + 0xe;
          in_stack_00000158 = (undefined8 *)&DAT_10118b758;
          in_stack_00000168 =
               &
               __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          *(char **)(unaff_x29 + -0xb0) = s_________tcp_connection_stablishe_108ad8881;
          *(ulong ***)(unaff_x29 + -0xa8) = &stack0x00000150;
          *(long *)(unaff_x29 + -0xf0) = unaff_x29 + -0xb0;
          *(undefined **)(unaff_x29 + -0xe8) = &UNK_10b208fd0;
          puStack00000000000000a8 = (undefined8 *)(unaff_x29 + -0xf0);
          puStack00000000000000a0 = (ulong *)0x1;
          puStack00000000000000b0 = (ulong *)0x1;
          puStack0000000000000108 = in_stack_00000090;
          pcStack0000000000000100 = (char *)in_stack_00000088;
          puStack0000000000000110 = in_stack_00000098;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar6,puVar4,puVar3,&stack0x00000100,&stack0x000000a0);
        }
      }
    }
    *(undefined1 *)((long)unaff_x19 + 0xc2) = 0;
    in_stack_00000158 = puStack0000000000000058;
    in_stack_00000150 = (ulong *)pcStack0000000000000050;
    in_stack_00000168 = in_stack_00000068;
    in_stack_00000160 = in_stack_00000060;
    uVar12 = *unaff_x27;
    uVar16 = unaff_x27[3];
    uVar7 = unaff_x27[2];
    *(ulong *)(unaff_x26 + 0x40) = unaff_x27[1];
    *(ulong *)(unaff_x26 + 0x38) = uVar12;
    in_stack_00000170 = in_stack_00000070;
    *(ulong *)(unaff_x26 + 0x50) = uVar16;
    *(ulong *)(unaff_x26 + 0x48) = uVar7;
    puStack00000000000000a8 = puStack0000000000000058;
    puStack00000000000000a0 = (ulong *)pcStack0000000000000050;
    puStack00000000000000b8 = in_stack_00000068;
    puStack00000000000000b0 = in_stack_00000060;
    in_stack_000000f0 = in_stack_000001a0;
    in_stack_000000d8 = in_stack_00000188;
    in_stack_000000d0 = in_stack_00000080;
    in_stack_000000e8 = in_stack_00000198;
    in_stack_000000e0 = in_stack_00000190;
    in_stack_000000c8 = in_stack_00000078;
    in_stack_000000c0 = in_stack_00000070;
    unaff_x19[0x1e] = in_stack_00000078;
    unaff_x19[0x1d] = in_stack_00000070;
    unaff_x19[0x20] = in_stack_00000188;
    unaff_x19[0x1f] = in_stack_00000080;
    unaff_x19[0x22] = in_stack_00000198;
    unaff_x19[0x21] = in_stack_00000190;
    unaff_x19[0x23] = in_stack_000001a0;
    unaff_x19[0x1a] = (ulong)puStack0000000000000058;
    *puVar15 = (ulong)pcStack0000000000000050;
    unaff_x19[0x1c] = (ulong)in_stack_00000068;
    unaff_x19[0x1b] = (ulong)in_stack_00000060;
    unaff_x19[0x24] = (ulong)(unaff_x19 + 0xd);
    *(undefined1 *)(unaff_x19 + 0x40) = 0;
    FUN_100fd00b8(&stack0x00000150,unaff_x19 + 0x19);
    puVar15 = in_stack_00000150;
    if (in_stack_00000150 == (ulong *)0x3) {
      uVar13 = 1;
      uVar10 = 5;
      goto LAB_1014fbd68;
    }
    in_stack_00000118 = *(undefined8 *)(unaff_x26 + 0x20);
    puStack0000000000000110 = *(ulong **)(unaff_x26 + 0x18);
    in_stack_00000128 = *(undefined8 *)(unaff_x26 + 0x30);
    in_stack_00000120 = *(undefined8 *)(unaff_x26 + 0x28);
    in_stack_00000138 = *(undefined8 *)(unaff_x26 + 0x40);
    in_stack_00000130 = *(undefined8 *)(unaff_x26 + 0x38);
    in_stack_00000148 = *(undefined8 *)(unaff_x26 + 0x50);
    in_stack_00000140 = *(undefined8 *)(unaff_x26 + 0x48);
    puStack0000000000000108 = *(undefined8 **)(unaff_x26 + 0x10);
    pcStack0000000000000100 = *(char **)(unaff_x26 + 8);
    FUN_100d78898(unaff_x19 + 0x19);
    uVar12 = extraout_x1_05;
    if (puVar15 != (ulong *)0x2) {
      *(undefined8 *)(unaff_x26 + 0x20) = in_stack_00000118;
      *(ulong **)(unaff_x26 + 0x18) = puStack0000000000000110;
      *(undefined8 *)(unaff_x26 + 0x30) = in_stack_00000128;
      *(undefined8 *)(unaff_x26 + 0x28) = in_stack_00000120;
      *(undefined8 *)(unaff_x26 + 0x40) = in_stack_00000138;
      *(undefined8 *)(unaff_x26 + 0x38) = in_stack_00000130;
      *(undefined8 *)(unaff_x26 + 0x50) = in_stack_00000148;
      *(undefined8 *)(unaff_x26 + 0x48) = in_stack_00000140;
      *(undefined8 **)(unaff_x26 + 0x10) = puStack0000000000000108;
      *(char **)(unaff_x26 + 8) = pcStack0000000000000100;
      in_stack_00000150 = puVar15;
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
          ((bRam000000010b639a90 - 1 < 2 ||
           ((bRam000000010b639a90 != 0 &&
            (cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha7fd441dcdc9b0b5E
                               ), cVar8 != '\0')))))) &&
         (uVar12 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha7fd441dcdc9b0b5E
                             ), (uVar12 & 1) != 0)) {
        lVar6 = ___ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha7fd441dcdc9b0b5E
                + 0x30;
        *(ulong **)(unaff_x29 + -0xb0) = unaff_x19 + 0x18;
        *(undefined **)(unaff_x29 + -0xa8) = &DAT_10118b758;
        *(ulong **)(unaff_x29 + -0xa0) = unaff_x19 + 0xe;
        *(undefined1 **)(unaff_x29 + -0x98) =
             &
             __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
        ;
        *(ulong ***)(unaff_x29 + -0x90) = &stack0x00000150;
        *(undefined **)(unaff_x29 + -0x88) = &DAT_1011e1858;
        *(char **)(unaff_x29 + -0x80) = s__________failed_to_send_resolved_108ad88d9;
        *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0xb0;
        in_stack_000001a8 = unaff_x29 + -0x80;
        in_stack_000001b0 = &UNK_10b208fd0;
        *(undefined8 *)(unaff_x29 + -0xf0) = 1;
        *(long **)(unaff_x29 + -0xe8) = &stack0x000001a8;
        *(undefined8 *)(unaff_x29 + -0xe0) = 1;
        *(long *)(unaff_x29 + -0xd8) = lVar6;
        FUN_1014a11e8(unaff_x29 + -0xf0);
      }
      else {
        lVar6 = 
        ___ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha7fd441dcdc9b0b5E
        ;
        if ((*unaff_x25 == '\0') && (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          in_stack_000001b0 =
               *(undefined **)
                (
                ___ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha7fd441dcdc9b0b5E
                + 0x20);
          in_stack_000001b8 =
               *(undefined8 *)
                (
                ___ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha7fd441dcdc9b0b5E
                + 0x28);
          in_stack_000001a8 = 5;
          puVar3 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_10b3c24c8;
          }
          puVar4 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar4 = &UNK_109adfc03;
          }
          iVar9 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x000001a8);
          if (iVar9 != 0) {
            lVar1 = ___ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha7fd441dcdc9b0b5E
                    + 0x30;
            *(ulong **)(unaff_x29 + -0xb0) = unaff_x19 + 0x18;
            *(undefined **)(unaff_x29 + -0xa8) = &DAT_10118b758;
            *(ulong **)(unaff_x29 + -0xa0) = unaff_x19 + 0xe;
            *(undefined1 **)(unaff_x29 + -0x98) =
                 &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
            ;
            *(ulong ***)(unaff_x29 + -0x90) = &stack0x00000150;
            *(undefined **)(unaff_x29 + -0x88) = &DAT_1011e1858;
            *(char **)(unaff_x29 + -0xc0) = s__________failed_to_send_resolved_108ad88d9;
            *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0xb0;
            *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0xc0;
            *(undefined **)(unaff_x29 + -200) = &UNK_10b208fd0;
            *(undefined8 *)(unaff_x29 + -0xf0) = 1;
            *(long *)(unaff_x29 + -0xe8) = unaff_x29 + -0xd0;
            *(undefined8 *)(unaff_x29 + -0xe0) = 1;
            *(long *)(unaff_x29 + -0xd8) = lVar1;
            uVar13 = *(undefined8 *)(unaff_x26 + 0x58);
            *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x26 + 0x60);
            *(undefined8 *)(unaff_x29 + -0x80) = uVar13;
            *(undefined8 *)(unaff_x29 + -0x70) = in_stack_000001b8;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar6,puVar4,puVar3,unaff_x29 + -0x80,unaff_x29 + -0xf0);
          }
        }
      }
      FUN_100deb62c(&stack0x00000150);
      func_0x000100e3c8d4(&stack0x00000170);
      uVar12 = extraout_x1_06;
    }
    *(undefined1 *)((long)unaff_x19 + 0xc2) = 0;
    iVar9 = (int)unaff_x19[0x10];
  }
  if (iVar9 != 0) {
    pcVar14 = (char *)unaff_x19[0xf];
    if (*pcVar14 == '\0') {
      *pcVar14 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar14,uVar12,1000000000);
    }
    FUN_1060fa678(pcVar14,iVar9,pcVar14);
  }
  lVar6 = *(long *)unaff_x19[0xb];
  *(long *)unaff_x19[0xb] = lVar6 + -1;
  LORelease();
  if (lVar6 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE();
  }
  lVar6 = *(long *)unaff_x19[0xc];
  *(long *)unaff_x19[0xc] = lVar6 + -1;
  LORelease();
  if (lVar6 == 1) {
    DataMemoryBarrier(2,1);
    func_0x0001060e2224();
  }
  if ((char)unaff_x19[9] != '\0') {
    lVar6 = *(long *)unaff_x19[10];
    *(long *)unaff_x19[10] = lVar6 + -1;
    LORelease();
    if (lVar6 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h10f445fb86fd931aE();
    }
  }
  puVar15 = unaff_x19 + 0xd;
  uVar12 = *puVar15;
  LOAcquire();
  lVar6 = *(long *)(uVar12 + 0x1f0);
  *(long *)(uVar12 + 0x1f0) = lVar6 + -1;
  LORelease();
  if (lVar6 == 1) {
    LOAcquire();
    lVar6 = *(long *)(uVar12 + 0x88);
    *(long *)(uVar12 + 0x88) = lVar6 + 1;
    lVar6 = func_0x000100fcbaa8(uVar12 + 0x80,lVar6);
    *(ulong *)(lVar6 + 0xb10) = *(ulong *)(lVar6 + 0xb10) | 0x200000000;
    LORelease();
    puVar2 = (ulong *)(uVar12 + 0x110);
    LOAcquire();
    uVar7 = *puVar2;
    *puVar2 = uVar7 | 2;
    LORelease();
    if (uVar7 == 0) {
      lVar6 = *(long *)(uVar12 + 0x100);
      *(undefined8 *)(uVar12 + 0x100) = 0;
      *puVar2 = in_xzr;
      LORelease();
      if (lVar6 != 0) {
        (**(code **)(lVar6 + 8))(*(undefined8 *)(uVar12 + 0x108));
      }
    }
  }
  lVar6 = *(long *)*puVar15;
  *(long *)*puVar15 = lVar6 + -1;
  LORelease();
  if (lVar6 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h49f814765505db59E(puVar15);
  }
  uVar13 = 0;
  uVar10 = 1;
LAB_1014fbd68:
  *(undefined1 *)((long)unaff_x19 + 0xc1) = uVar10;
  if (*unaff_x19 != 2) {
    uVar12 = unaff_x19[1];
    if ((*unaff_x19 & 1) != 0) {
      uVar12 = uVar12 + (*(long *)(unaff_x19[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(unaff_x19[2] + 0x68))(uVar12,unaff_x19 + 3);
  }
  if ((*unaff_x25 == '\0') && (uVar12 = unaff_x19[4], uVar12 != 0)) {
    puStack00000000000000a0 = *(ulong **)(uVar12 + 0x10);
    puStack00000000000000a8 = *(undefined8 **)(uVar12 + 0x18);
    in_stack_00000150 = (ulong *)&stack0x000000a0;
    in_stack_00000158 = (undefined8 *)&DAT_100c7b3a0;
    FUN_1011d7d74();
  }
  return uVar13;
}

