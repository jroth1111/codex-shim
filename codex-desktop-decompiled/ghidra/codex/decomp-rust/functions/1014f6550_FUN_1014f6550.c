
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1014f6550(ulong *param_1)

{
  ulong *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  ulong *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 uVar11;
  code *pcVar12;
  long lVar13;
  char cVar14;
  int iVar15;
  ulong *puVar16;
  undefined1 extraout_w8;
  undefined1 uVar17;
  uint uVar18;
  ulong uVar19;
  ulong *unaff_x19;
  long unaff_x20;
  undefined8 uVar20;
  undefined8 unaff_x21;
  ulong *puVar21;
  undefined2 uVar22;
  char *unaff_x23;
  ulong uVar23;
  ulong *puVar24;
  undefined2 *unaff_x26;
  undefined1 *puVar25;
  undefined8 *unaff_x28;
  undefined8 *puVar26;
  long unaff_x29;
  undefined1 auVar27 [16];
  undefined1 in_stack_00000018;
  undefined1 in_stack_00000020;
  undefined1 *in_stack_00000028;
  undefined1 uVar28;
  undefined8 in_stack_00000038;
  undefined1 *in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined4 uStack0000000000000068;
  undefined1 uStack000000000000006c;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined4 uStack0000000000000090;
  undefined1 uStack0000000000000094;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined5 uStack00000000000000b0;
  undefined3 uStack00000000000000b5;
  ulong *puStack00000000000000b8;
  ulong *puStack00000000000000c0;
  ulong *in_stack_000000c8;
  ulong *in_stack_000000d0;
  undefined *in_stack_000000d8;
  ulong *in_stack_000000e0;
  undefined8 *in_stack_000000e8;
  ulong in_stack_000000f0;
  ulong in_stack_000000f8;
  ulong in_stack_00000100;
  ulong *puStack0000000000000110;
  ulong *puStack0000000000000118;
  undefined1 uStack0000000000000120;
  undefined1 uStack0000000000000121;
  undefined1 uStack0000000000000122;
  undefined4 uStack0000000000000123;
  undefined1 uStack0000000000000127;
  undefined1 uStack0000000000000128;
  undefined1 uStack0000000000000129;
  undefined1 uStack000000000000012a;
  undefined4 uStack000000000000012b;
  undefined1 uStack000000000000012f;
  undefined2 uStack0000000000000130;
  char cStack0000000000000132;
  undefined4 uStack0000000000000133;
  undefined1 uStack0000000000000137;
  undefined *in_stack_00000138;
  ulong *in_stack_00000140;
  undefined8 *in_stack_00000148;
  ulong in_stack_00000150;
  ulong in_stack_00000158;
  ulong in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  ulong *in_stack_00000198;
  ulong *in_stack_000001a0;
  
  *(char **)(unaff_x29 + -0xa0) = s_2socks5_acceptor_s_authorizer_st_108ac454d;
  *(long *)(unaff_x29 + -0x98) = unaff_x29 + -0x90;
  *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xa0;
  *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b208fd0;
  puStack0000000000000118 = (ulong *)(unaff_x29 + -0xb0);
  puStack0000000000000110 = (ulong *)0x1;
  _uStack0000000000000120 = (ulong *)0x1;
  puStack00000000000000b8 = in_stack_000001a0;
  _uStack00000000000000b0 = in_stack_00000198;
  puStack00000000000000c0 = *(ulong **)(unaff_x29 + -0xb8);
  _uStack0000000000000128 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  *(undefined1 *)(unaff_x26 + 1) = 1;
  *unaff_x26 = 0;
  unaff_x19[0x47] = (ulong)unaff_x26;
  unaff_x19[0x48] = unaff_x19[0x3b];
  *(undefined1 *)((long)unaff_x19 + 0x262) = 0;
  auVar27 = FUN_1006f2eb0(unaff_x19 + 0x47,in_stack_00000058);
  if ((auVar27._0_8_ & 1) == 0) {
    uVar17 = extraout_w8;
    if (auVar27._8_8_ == 0) {
LAB_1014f690c:
      uVar28 = 0;
      uVar22 = 0xa573;
      *(undefined2 *)(unaff_x19 + 0x45) = 0;
      *(undefined1 *)((long)unaff_x19 + 0x22a) = 0;
      uStack0000000000000068 = *(undefined4 *)(unaff_x29 + -0xd0);
      uStack000000000000006c = *(undefined1 *)(unaff_x29 + -0xcc);
      *in_stack_00000028 = 1;
      puVar21 = (ulong *)0x26;
      puVar16 = (ulong *)0x0;
      puVar24 = (ulong *)0x2;
      puVar25 = in_stack_00000050;
      puVar26 = (undefined8 *)&UNK_10b40cd80;
    }
    else {
      __ZN11rama_socks56server5Error2io17hf582f67700c49f33E(&stack0x00000110,auVar27._8_8_);
      uStack00000000000000b0 = (undefined5)((ulong)_uStack0000000000000128 >> 0x18);
      in_stack_00000020 = uStack0000000000000129;
      in_stack_00000018 = uStack000000000000012a;
      uVar17 = uStack000000000000012f;
      if (puStack0000000000000110 == (ulong *)0x4) goto LAB_1014f690c;
      *(undefined4 *)(unaff_x29 + -0xd0) = uStack000000000000012b;
      *(undefined1 *)(unaff_x29 + -0xcc) = uStack000000000000012f;
      *(undefined2 *)(unaff_x19 + 0x45) = 0;
      uVar17 = 1;
      *(undefined1 *)((long)unaff_x19 + 0x22a) = 0;
      uStack0000000000000068 = *(undefined4 *)(unaff_x29 + -0xd0);
      uStack000000000000006c = *(undefined1 *)(unaff_x29 + -0xcc);
      uVar28 = 1;
      *in_stack_00000028 = 1;
      if (puStack0000000000000110 == (ulong *)0x5) {
        uVar17 = 4;
        goto LAB_1014f79b0;
      }
      puVar25 = (undefined1 *)0x108caa6;
      uVar22 = SUB82(puStack0000000000000118,0);
      puVar21 = _uStack0000000000000120;
      puVar16 = in_stack_00000140;
      puVar24 = puStack0000000000000110;
      puVar26 = in_stack_00000148;
    }
    FUN_100d57548(in_stack_00000038);
    if (puVar24 == (ulong *)0x4) {
      *(char *)(unaff_x19 + 0x38) = (char)uVar22;
      *(char *)((long)unaff_x19 + 0x1c1) = (char)((ushort)uVar22 >> 8);
      *(undefined1 *)((long)unaff_x19 + 0x1c5) = 1;
      unaff_x19[0x30] = (ulong)puVar21;
      *(undefined1 *)(unaff_x19 + 0x31) = uVar28;
      *(undefined1 *)((long)unaff_x19 + 0x189) = in_stack_00000020;
      *(undefined1 *)((long)unaff_x19 + 0x18a) = in_stack_00000018;
      *(undefined1 *)((long)unaff_x19 + 399) = uStack000000000000006c;
      *(undefined4 *)((long)unaff_x19 + 0x18b) = uStack0000000000000068;
      *(undefined1 *)(unaff_x19 + 0x32) = uVar17;
      *(int *)(unaff_x20 + 0x18) = (int)puVar25;
      *(char *)(unaff_x20 + 0x1e) = (char)((ulong)puVar25 >> 0x30);
      *(short *)(unaff_x20 + 0x1c) = (short)((ulong)puVar25 >> 0x20);
      if (puVar21 != (ulong *)0x8000000000000000) {
        *(undefined1 *)((long)unaff_x19 + 0x1c5) = 0;
        puVar16 = (ulong *)unaff_x19[0x31];
        uVar19 = unaff_x19[0x32];
        _uStack0000000000000128 = puVar16 + uVar19 * 4;
        uVar23 = unaff_x19[0x2b];
        puStack0000000000000110 = puVar16;
        puStack0000000000000118 = puVar16;
        _uStack0000000000000120 = puVar21;
        if (unaff_x19[0x29] - uVar23 < uVar19) {
          FUN_108a2e538(unaff_x19 + 0x29,uVar23,uVar19);
          uVar23 = unaff_x19[0x2b];
        }
        _memcpy(unaff_x19[0x2a] + uVar23 * 0x20,puVar16,uVar19 << 5);
        unaff_x19[0x2b] = uVar23 + uVar19;
        _uStack0000000000000128 = puVar16;
        FUN_105a20ad0(&stack0x00000110);
      }
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
         (((bRam000000010b639550 - 1 < 2 ||
           ((bRam000000010b639550 != 0 &&
            (cVar14 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8935f99fb2b86894E
                                ), cVar14 != '\0')))) &&
          (uVar19 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (
                              ___ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8935f99fb2b86894E
                              ), (uVar19 & 1) != 0)))) {
        in_stack_000000c8 =
             (ulong *)(
                      ___ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8935f99fb2b86894E
                      + 0x30);
        _uStack0000000000000120 = unaff_x19 + 0x2c;
        puStack0000000000000118 = (ulong *)&DAT_1011b7060;
        _uStack0000000000000128 = (ulong *)&DAT_10112ca84;
        *(char **)(unaff_x29 + -0x80) = s_5socks5_server__headers_exchange_108ac4582;
        *(ulong ***)(unaff_x29 + -0x78) = &stack0x00000110;
        *(long *)(unaff_x29 + -200) = unaff_x29 + -0x80;
        *(undefined **)(unaff_x29 + -0xc0) = &UNK_10b208fd0;
        puStack00000000000000b8 = (ulong *)(unaff_x29 + -200);
        _uStack00000000000000b0 = (ulong *)0x1;
        puStack00000000000000c0 = (ulong *)0x1;
        puStack0000000000000110 = unaff_x19 + 0x38;
        FUN_1006fa894(&stack0x000000b0);
      }
      else {
        lVar13 = 
        ___ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8935f99fb2b86894E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          in_stack_00000080 =
               *(undefined8 *)
                (
                ___ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8935f99fb2b86894E
                + 0x20);
          in_stack_00000088 =
               *(undefined8 *)
                (
                ___ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8935f99fb2b86894E
                + 0x28);
          in_stack_00000078 = 5;
          puVar2 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_10b3c24c8;
          }
          puVar3 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_109adfc03;
          }
          iVar15 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000078);
          if (iVar15 != 0) {
            in_stack_000000c8 =
                 (ulong *)(
                          ___ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8935f99fb2b86894E
                          + 0x30);
            _uStack0000000000000120 = unaff_x19 + 0x2c;
            puStack0000000000000118 = (ulong *)&DAT_1011b7060;
            _uStack0000000000000128 = (ulong *)&DAT_10112ca84;
            *(char **)(unaff_x29 + -200) = s_5socks5_server__headers_exchange_108ac4582;
            *(ulong ***)(unaff_x29 + -0xc0) = &stack0x00000110;
            *(long *)(unaff_x29 + -0x90) = unaff_x29 + -200;
            *(undefined **)(unaff_x29 + -0x88) = &UNK_10b208fd0;
            puStack00000000000000b8 = (ulong *)(unaff_x29 + -0x90);
            _uStack00000000000000b0 = (ulong *)0x1;
            puStack00000000000000c0 = (ulong *)0x1;
            *(undefined8 *)(unaff_x29 + -0x78) = in_stack_00000080;
            *(undefined8 *)(unaff_x29 + -0x80) = in_stack_00000078;
            *(undefined8 *)(unaff_x29 + -0x70) = in_stack_00000088;
            puStack0000000000000110 = unaff_x19 + 0x38;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar13,puVar3,puVar2,unaff_x29 + -0x80,&stack0x000000b0);
          }
        }
      }
      unaff_x19[0x39] = (ulong)(unaff_x19 + 0x25);
      *(undefined1 *)((long)unaff_x19 + 0x1dc) = 0;
      unaff_x23 = &__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE;
      puVar21 = unaff_x19 + 0x39;
      FUN_1006f2524(&stack0x00000110,puVar21,in_stack_00000058);
      puVar8 = _uStack0000000000000128;
      puVar1 = _uStack0000000000000120;
      puVar24 = puStack0000000000000118;
      puVar16 = puStack0000000000000110;
      cVar14 = cStack0000000000000132;
      if (cStack0000000000000132 == '\x03') {
        uVar17 = 5;
      }
      else {
        uVar17 = uStack0000000000000120;
        uVar28 = uStack0000000000000121;
        uVar6 = uStack0000000000000122;
        uStack0000000000000090 = uStack0000000000000123;
        uStack0000000000000094 = uStack0000000000000127;
        uVar7 = uStack0000000000000128;
        uVar9 = _uStack0000000000000129;
        uVar22 = uStack0000000000000130;
        uVar11 = uStack0000000000000137;
        uVar10 = uStack0000000000000133;
        if (*(char *)((long)unaff_x19 + 0x1dc) == '\x06') {
          uVar18 = (uint)*(byte *)((long)unaff_x19 + 0x20a);
          if (*(byte *)((long)unaff_x19 + 0x20a) < 7) {
            if (1 < uVar18 - 4) {
              if (uVar18 != 6) goto LAB_1014f6d54;
              if (unaff_x19[0x42] != 0) {
                _free(unaff_x19[0x43]);
              }
              *(undefined1 *)(unaff_x19 + 0x41) = 0;
            }
          }
          else if (uVar18 != 7) {
            if (uVar18 != 8) goto LAB_1014f6d54;
            if (((byte)unaff_x19[0x3d] != 0x1a) && (0x18 < (byte)unaff_x19[0x3d])) {
              lVar13 = *(long *)unaff_x19[0x3e];
              *(long *)unaff_x19[0x3e] = lVar13 + -1;
              LORelease();
              if (lVar13 == 1) {
                DataMemoryBarrier(2,1);
                __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x3e);
              }
            }
          }
          *(undefined1 *)((long)unaff_x19 + 0x209) = 0;
        }
LAB_1014f6d54:
        if (cVar14 == '\x02') {
          _uStack0000000000000120 =
               (ulong *)CONCAT17(uStack0000000000000094,
                                 CONCAT43(uStack0000000000000090,(int3)puVar1));
          puStack0000000000000110 = puVar16;
          puStack0000000000000118 = puVar24;
          puVar16 = (ulong *)_malloc(0x18);
          if (puVar16 == (ulong *)0x0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x1014f7e48);
            (*pcVar12)();
          }
          puVar16[1] = (ulong)puStack0000000000000118;
          *puVar16 = (ulong)puStack0000000000000110;
          puVar16[2] = (ulong)_uStack0000000000000120;
          puVar26 = (undefined8 *)&UNK_10b40db80;
          puVar24 = (ulong *)0x1;
LAB_1014f6db8:
          *(undefined1 *)((long)unaff_x19 + 0x1c3) = 0;
          *(undefined1 *)((long)unaff_x19 + 0x1c5) = 0;
          uVar19 = unaff_x19[0x2e];
          unaff_x28 = puVar26;
          goto joined_r0x0001014f6b68;
        }
        *(undefined1 *)((long)unaff_x19 + 0x1c3) = 1;
        puVar1 = unaff_x19 + 0x33;
        unaff_x19[0x33] = (ulong)puVar16;
        unaff_x19[0x34] = (ulong)puVar24;
        *(undefined1 *)(unaff_x19 + 0x35) = uVar17;
        *(undefined1 *)((long)unaff_x19 + 0x1a9) = uVar28;
        *(undefined1 *)((long)unaff_x19 + 0x1aa) = uVar6;
        *(undefined1 *)((long)unaff_x19 + 0x1af) = uStack0000000000000094;
        *(undefined4 *)((long)unaff_x19 + 0x1ab) = uStack0000000000000090;
        *(undefined1 *)(unaff_x19 + 0x36) = uVar7;
        *(undefined4 *)(unaff_x20 + 0x38) = uVar9;
        *(char *)(unaff_x20 + 0x3e) = (char)((ulong)puVar8 >> 0x38);
        *(short *)(unaff_x20 + 0x3c) = (short)((ulong)puVar8 >> 0x28);
        puVar16 = unaff_x19 + 0x37;
        *(undefined2 *)(unaff_x19 + 0x37) = uVar22;
        *(char *)((long)unaff_x19 + 0x1ba) = cVar14;
        *(undefined4 *)(unaff_x20 + 0x42) = uVar10;
        *(undefined1 *)(unaff_x20 + 0x46) = uVar11;
        if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
            ((bRam000000010b639538 - 1 < 2 ||
             ((bRam000000010b639538 != 0 &&
              (cVar14 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                  (&
                                   __ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3eb022a97d47cb9fE
                                  ), cVar14 != '\0')))))) &&
           (uVar19 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (
                               ___ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3eb022a97d47cb9fE
                               ), (uVar19 & 1) != 0)) {
          in_stack_000000c8 =
               (ulong *)(
                        ___ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3eb022a97d47cb9fE
                        + 0x30);
          _uStack0000000000000130 = unaff_x19 + 0x2c;
          _uStack0000000000000120 = unaff_x19 + 0x38;
          puStack0000000000000118 =
               (ulong *)&
                        __ZN86__LT_rama_net__address__host_with_port__HostWithPort_u20_as_u20_core__fmt__Display_GT_3fmt17h2d971d6c0a5f333cE
          ;
          _uStack0000000000000128 = (ulong *)&DAT_1011b7060;
          in_stack_00000138 = &DAT_10112ca84;
          in_stack_00000148 = (undefined8 *)&DAT_10118f66c;
          *(char **)(unaff_x29 + -0x80) = s_socks5_server_w__destination_and_108ac45d2;
          *(ulong ***)(unaff_x29 + -0x78) = &stack0x00000110;
          *(long *)(unaff_x29 + -200) = unaff_x29 + -0x80;
          *(undefined **)(unaff_x29 + -0xc0) = &UNK_10b208fd0;
          puStack00000000000000b8 = (ulong *)(unaff_x29 + -200);
          _uStack00000000000000b0 = (ulong *)0x1;
          puStack00000000000000c0 = (ulong *)0x1;
          puStack0000000000000110 = puVar1;
          in_stack_00000140 = puVar16;
          FUN_1006fa758(&stack0x000000b0);
        }
        else {
          lVar13 = 
          ___ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3eb022a97d47cb9fE
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            in_stack_000000a0 =
                 *(undefined8 *)
                  (
                  ___ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3eb022a97d47cb9fE
                  + 0x20);
            in_stack_000000a8 =
                 *(undefined8 *)
                  (
                  ___ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3eb022a97d47cb9fE
                  + 0x28);
            in_stack_00000098 = 5;
            puVar2 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_10b3c24c8;
            }
            puVar3 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar3 = &UNK_109adfc03;
            }
            iVar15 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000098);
            if (iVar15 != 0) {
              in_stack_000000c8 =
                   (ulong *)(
                            ___ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3eb022a97d47cb9fE
                            + 0x30);
              _uStack0000000000000130 = unaff_x19 + 0x2c;
              _uStack0000000000000120 = unaff_x19 + 0x38;
              puStack0000000000000118 =
                   (ulong *)&
                            __ZN86__LT_rama_net__address__host_with_port__HostWithPort_u20_as_u20_core__fmt__Display_GT_3fmt17h2d971d6c0a5f333cE
              ;
              _uStack0000000000000128 = (ulong *)&DAT_1011b7060;
              in_stack_00000138 = &DAT_10112ca84;
              in_stack_00000148 = (undefined8 *)&DAT_10118f66c;
              *(char **)(unaff_x29 + -200) = s_socks5_server_w__destination_and_108ac45d2;
              *(ulong ***)(unaff_x29 + -0xc0) = &stack0x00000110;
              *(long *)(unaff_x29 + -0x90) = unaff_x29 + -200;
              *(undefined **)(unaff_x29 + -0x88) = &UNK_10b208fd0;
              puStack00000000000000b8 = (ulong *)(unaff_x29 + -0x90);
              _uStack00000000000000b0 = (ulong *)0x1;
              puStack00000000000000c0 = (ulong *)0x1;
              *(undefined8 *)(unaff_x29 + -0x78) = in_stack_000000a0;
              *(undefined8 *)(unaff_x29 + -0x80) = in_stack_00000098;
              *(undefined8 *)(unaff_x29 + -0x70) = in_stack_000000a8;
              puStack0000000000000110 = puVar1;
              in_stack_00000140 = puVar16;
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar13,puVar3,puVar2,unaff_x29 + -0x80,&stack0x000000b0);
            }
          }
        }
        bVar5 = (byte)*puVar16;
        if (1 < bVar5) {
          if (bVar5 != 2) {
            unaff_x23 = &__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE;
            if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
                ((bRam000000010b639568 - 1 < 2 ||
                 ((bRam000000010b639568 != 0 &&
                  (cVar14 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                      (&
                                       __ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbd10110918de3ebdE
                                      ), cVar14 != '\0')))))) &&
               (uVar19 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                   (
                                   ___ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbd10110918de3ebdE
                                   ), (uVar19 & 1) != 0)) {
              in_stack_000000c8 =
                   (ulong *)(
                            ___ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbd10110918de3ebdE
                            + 0x30);
              _uStack0000000000000130 = unaff_x19 + 0x2c;
              _uStack0000000000000120 = unaff_x19 + 0x38;
              puStack0000000000000118 =
                   (ulong *)&
                            __ZN86__LT_rama_net__address__host_with_port__HostWithPort_u20_as_u20_core__fmt__Display_GT_3fmt17h2d971d6c0a5f333cE
              ;
              _uStack0000000000000128 = (ulong *)&DAT_1011b7060;
              in_stack_00000138 = &DAT_10112ca84;
              in_stack_00000148 = (undefined8 *)&DAT_10118f66c;
              *(char **)(unaff_x29 + -0x80) = s_socks5_server_w__destination_for_108ac4644;
              *(ulong ***)(unaff_x29 + -0x78) = &stack0x00000110;
              *(long *)(unaff_x29 + -200) = unaff_x29 + -0x80;
              *(undefined **)(unaff_x29 + -0xc0) = &UNK_10b208fd0;
              puStack00000000000000b8 = (ulong *)(unaff_x29 + -200);
              _uStack00000000000000b0 = (ulong *)0x1;
              puStack00000000000000c0 = (ulong *)0x1;
              puStack0000000000000110 = puVar1;
              in_stack_00000140 = puVar16;
              FUN_1006fa61c(&stack0x000000b0);
            }
            else {
              lVar13 = 
              ___ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbd10110918de3ebdE
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                uVar20 = *(undefined8 *)
                          (
                          ___ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbd10110918de3ebdE
                          + 0x20);
                uVar4 = *(undefined8 *)
                         (
                         ___ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbd10110918de3ebdE
                         + 0x28);
                *(undefined8 *)(unaff_x29 + -0xf8) = 4;
                *(undefined8 *)(unaff_x29 + -0xf0) = uVar20;
                *(undefined8 *)(unaff_x29 + -0xe8) = uVar4;
                puVar2 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar2 = &UNK_10b3c24c8;
                }
                puVar3 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar3 = &UNK_109adfc03;
                }
                iVar15 = (**(code **)(puVar2 + 0x18))(puVar3,unaff_x29 + -0xf8);
                if (iVar15 != 0) {
                  in_stack_000000c8 =
                       (ulong *)(
                                ___ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbd10110918de3ebdE
                                + 0x30);
                  _uStack0000000000000130 = unaff_x19 + 0x2c;
                  _uStack0000000000000120 = unaff_x19 + 0x38;
                  puStack0000000000000118 =
                       (ulong *)&
                                __ZN86__LT_rama_net__address__host_with_port__HostWithPort_u20_as_u20_core__fmt__Display_GT_3fmt17h2d971d6c0a5f333cE
                  ;
                  _uStack0000000000000128 = (ulong *)&DAT_1011b7060;
                  in_stack_00000138 = &DAT_10112ca84;
                  in_stack_00000148 = (undefined8 *)&DAT_10118f66c;
                  *(char **)(unaff_x29 + -200) = s_socks5_server_w__destination_for_108ac4644;
                  *(ulong ***)(unaff_x29 + -0xc0) = &stack0x00000110;
                  *(long *)(unaff_x29 + -0x90) = unaff_x29 + -200;
                  *(undefined **)(unaff_x29 + -0x88) = &UNK_10b208fd0;
                  puStack00000000000000b8 = (ulong *)(unaff_x29 + -0x90);
                  _uStack00000000000000b0 = (ulong *)0x1;
                  puStack00000000000000c0 = (ulong *)0x1;
                  *(undefined8 *)(unaff_x29 + -0x78) = in_stack_00000170;
                  *(undefined8 *)(unaff_x29 + -0x80) = in_stack_00000168;
                  *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0xe8);
                  puStack0000000000000110 = puVar1;
                  in_stack_00000140 = puVar16;
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (lVar13,puVar3,puVar2,unaff_x29 + -0x80,&stack0x000000b0);
                }
              }
            }
            *(undefined1 *)((long)unaff_x19 + 0x1ea) = 0;
            *(undefined1 *)(unaff_x19 + 0x3d) = 7;
            unaff_x19[0x3b] = 0;
            unaff_x19[0x3a] = 0;
            *puVar21 = 0x1a;
            *(undefined2 *)(unaff_x19 + 0x3c) = 0;
            unaff_x19[0x3e] = (ulong)puVar21;
            unaff_x19[0x3f] = (ulong)(unaff_x19 + 0x25);
            *(undefined1 *)(unaff_x19 + 0x41) = 0;
            auVar27 = func_0x0001006f34b4(unaff_x19 + 0x3e,in_stack_00000058);
            if ((auVar27._0_8_ & 1) != 0) {
              uVar17 = 9;
              goto LAB_1014f79b0;
            }
            if ((char)unaff_x19[0x41] == '\x06') {
              __ZN68__LT_bytes__bytes_mut__BytesMut_u20_as_u20_core__ops__drop__Drop_GT_4drop17he79217772a577486E
                        (unaff_x19 + 0x45);
            }
            if ((auVar27._8_8_ == 0) ||
               (__ZN11rama_socks56server5Error2io17hf582f67700c49f33E
                          (&stack0x00000110,auVar27._8_8_), puVar26 = in_stack_00000148,
               puVar16 = in_stack_00000140, puVar24 = puStack0000000000000110,
               puStack0000000000000110 == (ulong *)0x4)) {
              if (((byte)unaff_x19[0x39] != 0x1a) && (0x18 < (byte)unaff_x19[0x39])) {
                lVar13 = *(long *)unaff_x19[0x3a];
                *(long *)unaff_x19[0x3a] = lVar13 + -1;
                LORelease();
                if (lVar13 == 1) {
                  DataMemoryBarrier(2,1);
                  __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x3a);
                }
              }
              puVar16 = (ulong *)0x0;
              puVar24 = (ulong *)0x2;
              goto LAB_1014f7a50;
            }
            if (((byte)unaff_x19[0x39] != 0x1a) && (0x18 < (byte)unaff_x19[0x39])) {
              lVar13 = *(long *)unaff_x19[0x3a];
              *(long *)unaff_x19[0x3a] = lVar13 + -1;
              LORelease();
              if (lVar13 == 1) {
                DataMemoryBarrier(2,1);
                __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x3a);
              }
            }
            if (((byte)unaff_x19[0x33] != 0x1a) && (0x18 < (byte)unaff_x19[0x33])) {
              lVar13 = *(long *)unaff_x19[0x34];
              *(long *)unaff_x19[0x34] = lVar13 + -1;
              LORelease();
              if (lVar13 == 1) {
                DataMemoryBarrier(2,1);
                __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x34);
              }
            }
            goto LAB_1014f6db8;
          }
          in_stack_000000e0 = (ulong *)unaff_x19[0x2b];
          puStack00000000000000b8 = (ulong *)unaff_x19[0x26];
          _uStack00000000000000b0 = (ulong *)unaff_x19[0x25];
          in_stack_000000c8 = (ulong *)unaff_x19[0x28];
          puStack00000000000000c0 = (ulong *)unaff_x19[0x27];
          in_stack_000000f0 = unaff_x19[0x34];
          in_stack_000000e8 = (undefined8 *)*puVar1;
          in_stack_00000100 = unaff_x19[0x36];
          in_stack_000000f8 = unaff_x19[0x35];
          in_stack_000000d8 = (undefined *)unaff_x19[0x2a];
          in_stack_000000d0 = (ulong *)unaff_x19[0x29];
          *(undefined2 *)((long)unaff_x19 + 0x1c3) = 0;
          unaff_x19[0x3e] = (ulong)in_stack_000000d8;
          unaff_x19[0x3d] = (ulong)in_stack_000000d0;
          unaff_x19[0x40] = (ulong)in_stack_000000e8;
          unaff_x19[0x3f] = (ulong)in_stack_000000e0;
          unaff_x19[0x42] = in_stack_000000f8;
          unaff_x19[0x41] = in_stack_000000f0;
          unaff_x19[0x43] = in_stack_00000100;
          unaff_x19[0x3a] = (ulong)puStack00000000000000b8;
          *puVar21 = (ulong)_uStack00000000000000b0;
          unaff_x19[0x3c] = (ulong)in_stack_000000c8;
          unaff_x19[0x3b] = (ulong)puStack00000000000000c0;
          unaff_x19[0x44] = unaff_x19[0x24] + 0x3a;
          puVar1 = unaff_x19 + 0x65;
          *(undefined1 *)(unaff_x19 + 0x65) = 0;
          unaff_x19[0x46] = unaff_x19[0x3a];
          unaff_x19[0x45] = *puVar21;
          unaff_x19[0x48] = unaff_x19[0x3c];
          unaff_x19[0x47] = unaff_x19[0x3b];
          unaff_x19[0x4a] = unaff_x19[0x3e];
          unaff_x19[0x49] = unaff_x19[0x3d];
          unaff_x19[0x4b] = unaff_x19[0x3f];
          unaff_x19[0x4d] = unaff_x19[0x41];
          unaff_x19[0x4c] = unaff_x19[0x40];
          unaff_x19[0x4f] = unaff_x19[0x43];
          unaff_x19[0x4e] = unaff_x19[0x42];
          puStack0000000000000110 = _uStack00000000000000b0;
          puStack0000000000000118 = puStack00000000000000b8;
          _uStack0000000000000120 = puStack00000000000000c0;
          _uStack0000000000000128 = in_stack_000000c8;
          _uStack0000000000000130 = in_stack_000000d0;
          in_stack_00000138 = in_stack_000000d8;
          in_stack_00000140 = in_stack_000000e0;
          in_stack_00000148 = in_stack_000000e8;
          in_stack_00000150 = in_stack_000000f0;
          in_stack_00000158 = in_stack_000000f8;
          in_stack_00000160 = in_stack_00000100;
          if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
             (((bRam000000010b639928 - 1 < 2 ||
               ((bRam000000010b639928 != 0 &&
                (cVar14 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                    (&
                                     __ZN87__LT__LP__RP__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7b4c8108d633d4aeE
                                    ), cVar14 != '\0')))) &&
              (uVar19 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                  (
                                  ___ZN87__LT__LP__RP__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7b4c8108d633d4aeE
                                  ),
              lVar13 = 
              ___ZN87__LT__LP__RP__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7b4c8108d633d4aeE
              , (uVar19 & 1) != 0)))) {
            _uStack0000000000000128 =
                 (ulong *)(
                          ___ZN87__LT__LP__RP__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7b4c8108d633d4aeE
                          + 0x30);
            *(ulong **)(unaff_x29 + -0x90) = unaff_x19 + 0x4c;
            *(undefined **)(unaff_x29 + -0x88) =
                 &
                 __ZN86__LT_rama_net__address__host_with_port__HostWithPort_u20_as_u20_core__fmt__Display_GT_3fmt17h2d971d6c0a5f333cE
            ;
            *(char **)(unaff_x29 + -0xa0) = s_socks5_server_w__destination____a_108ad8175;
            *(long *)(unaff_x29 + -0x98) = unaff_x29 + -0x90;
            *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xa0;
            *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b208fd0;
            puStack0000000000000118 = (ulong *)(unaff_x29 + -0xb0);
            puStack0000000000000110 = (ulong *)0x1;
            _uStack0000000000000120 = (ulong *)0x1;
            __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar13,&stack0x00000110);
            lVar13 = 
            ___ZN87__LT__LP__RP__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7b4c8108d633d4aeE
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              uVar20 = *(undefined8 *)
                        (
                        ___ZN87__LT__LP__RP__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7b4c8108d633d4aeE
                        + 0x20);
              uVar4 = *(undefined8 *)
                       (
                       ___ZN87__LT__LP__RP__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7b4c8108d633d4aeE
                       + 0x28);
              *(undefined8 *)(unaff_x29 + -0x80) = 4;
              *(undefined8 *)(unaff_x29 + -0x78) = uVar20;
              *(undefined8 *)(unaff_x29 + -0x70) = uVar4;
              puVar2 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar2 = &UNK_10b3c24c8;
              }
              puVar3 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar3 = &UNK_109adfc03;
              }
              iVar15 = (**(code **)(puVar2 + 0x18))(puVar3,unaff_x29 + -0x80);
              if (iVar15 != 0) {
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar13,puVar3,puVar2,unaff_x29 + -0x80,&stack0x00000110);
              }
            }
          }
          else {
            lVar13 = 
            ___ZN87__LT__LP__RP__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7b4c8108d633d4aeE
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              uVar20 = *(undefined8 *)
                        (
                        ___ZN87__LT__LP__RP__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7b4c8108d633d4aeE
                        + 0x20);
              uVar4 = *(undefined8 *)
                       (
                       ___ZN87__LT__LP__RP__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7b4c8108d633d4aeE
                       + 0x28);
              *(undefined8 *)(unaff_x29 + -200) = 4;
              *(undefined8 *)(unaff_x29 + -0xc0) = uVar20;
              *(undefined8 *)(unaff_x29 + -0xb8) = uVar4;
              puVar2 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar2 = &UNK_10b3c24c8;
              }
              puVar3 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar3 = &UNK_109adfc03;
              }
              iVar15 = (**(code **)(puVar2 + 0x18))(puVar3,unaff_x29 + -200);
              if (iVar15 != 0) {
                _uStack0000000000000128 =
                     (ulong *)(
                              ___ZN87__LT__LP__RP__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7b4c8108d633d4aeE
                              + 0x30);
                *(ulong **)(unaff_x29 + -0x90) = unaff_x19 + 0x4c;
                *(undefined **)(unaff_x29 + -0x88) =
                     &
                     __ZN86__LT_rama_net__address__host_with_port__HostWithPort_u20_as_u20_core__fmt__Display_GT_3fmt17h2d971d6c0a5f333cE
                ;
                *(char **)(unaff_x29 + -0xa0) = s_socks5_server_w__destination____a_108ad8175;
                *(long *)(unaff_x29 + -0x98) = unaff_x29 + -0x90;
                *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xa0;
                *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b208fd0;
                puStack0000000000000118 = (ulong *)(unaff_x29 + -0xb0);
                puStack0000000000000110 = (ulong *)0x1;
                _uStack0000000000000120 = (ulong *)0x1;
                *(ulong **)(unaff_x29 + -0x78) = in_stack_000001a0;
                *(ulong **)(unaff_x29 + -0x80) = in_stack_00000198;
                *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0xb8);
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar13,puVar3,puVar2,unaff_x29 + -0x80,&stack0x00000110);
              }
            }
          }
          *(undefined1 *)((long)unaff_x19 + 0x2a2) = 0;
          *(undefined1 *)(unaff_x19 + 0x54) = 7;
          unaff_x19[0x52] = 0;
          unaff_x19[0x51] = 0;
          unaff_x19[0x50] = 0x1a;
          *(undefined2 *)(unaff_x19 + 0x53) = 0;
          unaff_x19[0x55] = (ulong)(unaff_x19 + 0x50);
          unaff_x19[0x56] = (ulong)(unaff_x19 + 0x45);
          *(undefined1 *)(unaff_x19 + 0x58) = 0;
          unaff_x23 = &__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE;
          auVar27 = func_0x0001006f34b4(unaff_x19 + 0x55,in_stack_00000058);
          if ((auVar27._0_8_ & 1) == 0) {
            if ((char)unaff_x19[0x58] == '\x06') {
              __ZN68__LT_bytes__bytes_mut__BytesMut_u20_as_u20_core__ops__drop__Drop_GT_4drop17he79217772a577486E
                        (unaff_x19 + 0x5c);
            }
            if ((auVar27._8_8_ == 0) ||
               (__ZN11rama_socks56server5Error2io17hf582f67700c49f33E
                          (&stack0x00000110,auVar27._8_8_), puVar26 = in_stack_00000148,
               puVar16 = in_stack_00000140, puVar24 = puStack0000000000000110,
               puStack0000000000000110 == (ulong *)0x4)) {
              if (((byte)unaff_x19[0x50] != 0x1a) && (0x18 < (byte)unaff_x19[0x50])) {
                lVar13 = *(long *)unaff_x19[0x51];
                *(long *)unaff_x19[0x51] = lVar13 + -1;
                LORelease();
                if (lVar13 == 1) {
                  DataMemoryBarrier(2,1);
                  __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x51);
                }
              }
              if (((byte)unaff_x19[0x4c] != 0x1a) && (0x18 < (byte)unaff_x19[0x4c])) {
                lVar13 = *(long *)unaff_x19[0x4d];
                *(long *)unaff_x19[0x4d] = lVar13 + -1;
                LORelease();
                if (lVar13 == 1) {
                  DataMemoryBarrier(2,1);
                  __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x4d);
                }
              }
              FUN_100deb62c(unaff_x19 + 0x45);
              func_0x000100e3c8d4(unaff_x19 + 0x49);
              puVar16 = (ulong *)0x0;
              *(undefined1 *)puVar1 = 1;
              puVar24 = (ulong *)0x2;
              puVar26 = unaff_x28;
            }
            else {
              if (((byte)unaff_x19[0x50] != 0x1a) && (0x18 < (byte)unaff_x19[0x50])) {
                lVar13 = *(long *)unaff_x19[0x51];
                *(long *)unaff_x19[0x51] = lVar13 + -1;
                LORelease();
                if (lVar13 == 1) {
                  DataMemoryBarrier(2,1);
                  __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x51);
                }
              }
              if (((byte)unaff_x19[0x4c] != 0x1a) && (0x18 < (byte)unaff_x19[0x4c])) {
                lVar13 = *(long *)unaff_x19[0x4d];
                *(long *)unaff_x19[0x4d] = lVar13 + -1;
                LORelease();
                if (lVar13 == 1) {
                  DataMemoryBarrier(2,1);
                  __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x4d);
                }
              }
              FUN_100deb62c(unaff_x19 + 0x45);
              func_0x000100e3c8d4(unaff_x19 + 0x49);
              *(undefined1 *)puVar1 = 1;
              if (puVar24 == (ulong *)0x5) goto LAB_1014f75d0;
            }
            FUN_100d75328(puVar21);
            unaff_x28 = puVar26;
            goto LAB_1014f7a50;
          }
          *(undefined1 *)puVar1 = 3;
LAB_1014f75d0:
          *(undefined1 *)unaff_x28 = 8;
          goto LAB_1014f79b4;
        }
        if (bVar5 == 0) {
          in_stack_000000e0 = (ulong *)unaff_x19[0x2b];
          puStack00000000000000b8 = (ulong *)unaff_x19[0x26];
          _uStack00000000000000b0 = (ulong *)unaff_x19[0x25];
          in_stack_000000c8 = (ulong *)unaff_x19[0x28];
          puStack00000000000000c0 = (ulong *)unaff_x19[0x27];
          in_stack_000000f0 = unaff_x19[0x34];
          in_stack_000000e8 = (undefined8 *)*puVar1;
          in_stack_00000100 = unaff_x19[0x36];
          in_stack_000000f8 = unaff_x19[0x35];
          in_stack_000000d8 = (undefined *)unaff_x19[0x2a];
          in_stack_000000d0 = (ulong *)unaff_x19[0x29];
          *(undefined2 *)((long)unaff_x19 + 0x1c3) = 0;
          unaff_x19[0x3e] = (ulong)in_stack_000000d8;
          unaff_x19[0x3d] = (ulong)in_stack_000000d0;
          unaff_x19[0x40] = (ulong)in_stack_000000e8;
          unaff_x19[0x3f] = (ulong)in_stack_000000e0;
          unaff_x19[0x42] = in_stack_000000f8;
          unaff_x19[0x41] = in_stack_000000f0;
          unaff_x19[0x43] = in_stack_00000100;
          unaff_x19[0x3a] = (ulong)puStack00000000000000b8;
          *puVar21 = (ulong)_uStack00000000000000b0;
          unaff_x19[0x3c] = (ulong)in_stack_000000c8;
          unaff_x19[0x3b] = (ulong)puStack00000000000000c0;
          unaff_x19[0x44] = unaff_x19[0x24];
          *(undefined1 *)(unaff_x19 + 0x84) = 0;
          unaff_x23 = &__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE;
          puStack0000000000000110 = _uStack00000000000000b0;
          puStack0000000000000118 = puStack00000000000000b8;
          _uStack0000000000000120 = puStack00000000000000c0;
          _uStack0000000000000128 = in_stack_000000c8;
          _uStack0000000000000130 = in_stack_000000d0;
          in_stack_00000138 = in_stack_000000d8;
          in_stack_00000140 = in_stack_000000e0;
          in_stack_00000148 = in_stack_000000e8;
          in_stack_00000150 = in_stack_000000f0;
          in_stack_00000158 = in_stack_000000f8;
          in_stack_00000160 = in_stack_00000100;
          FUN_100853e00(&stack0x00000110,unaff_x19 + 0x39,in_stack_00000058);
          puVar26 = in_stack_00000148;
          puVar16 = in_stack_00000140;
          puVar24 = puStack0000000000000110;
          if (puStack0000000000000110 != (ulong *)0x5) {
            FUN_100e50eac(unaff_x19 + 0x39);
            unaff_x28 = puVar26;
LAB_1014f7a50:
            if ((((*(byte *)((long)unaff_x19 + 0x1c3) & 1) != 0) && ((byte)unaff_x19[0x33] != 0x1a))
               && (0x18 < (byte)unaff_x19[0x33])) {
              lVar13 = *(long *)unaff_x19[0x34];
              *(long *)unaff_x19[0x34] = lVar13 + -1;
              LORelease();
              if (lVar13 == 1) {
                DataMemoryBarrier(2,1);
                __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x34);
              }
            }
            *(undefined1 *)((long)unaff_x19 + 0x1c3) = 0;
            *(undefined1 *)((long)unaff_x19 + 0x1c5) = 0;
            if (2 < unaff_x19[0x2e]) {
              _free(unaff_x19[0x2c]);
            }
            if ((*(byte *)((long)unaff_x19 + 0x1c4) & 1) != 0) {
              FUN_100deb62c(unaff_x19 + 0x25);
              func_0x000100e3c8d4(unaff_x19 + 0x29);
            }
            *(undefined1 *)((long)unaff_x19 + 0x1c4) = 0;
            *(undefined1 *)((long)unaff_x19 + 0x1c2) = 1;
            goto LAB_1014f7acc;
          }
          uVar17 = 6;
        }
        else {
          in_stack_000000e0 = (ulong *)unaff_x19[0x2b];
          puStack00000000000000b8 = (ulong *)unaff_x19[0x26];
          _uStack00000000000000b0 = (ulong *)unaff_x19[0x25];
          in_stack_000000c8 = (ulong *)unaff_x19[0x28];
          puStack00000000000000c0 = (ulong *)unaff_x19[0x27];
          in_stack_000000f0 = unaff_x19[0x34];
          in_stack_000000e8 = (undefined8 *)*puVar1;
          in_stack_00000100 = unaff_x19[0x36];
          in_stack_000000f8 = unaff_x19[0x35];
          in_stack_000000d8 = (undefined *)unaff_x19[0x2a];
          in_stack_000000d0 = (ulong *)unaff_x19[0x29];
          *(undefined2 *)((long)unaff_x19 + 0x1c3) = 0;
          unaff_x19[0x3e] = (ulong)in_stack_000000d8;
          unaff_x19[0x3d] = (ulong)in_stack_000000d0;
          unaff_x19[0x40] = (ulong)in_stack_000000e8;
          unaff_x19[0x3f] = (ulong)in_stack_000000e0;
          unaff_x19[0x42] = in_stack_000000f8;
          unaff_x19[0x41] = in_stack_000000f0;
          unaff_x19[0x43] = in_stack_00000100;
          unaff_x19[0x3a] = (ulong)puStack00000000000000b8;
          *puVar21 = (ulong)_uStack00000000000000b0;
          unaff_x19[0x3c] = (ulong)in_stack_000000c8;
          unaff_x19[0x3b] = (ulong)puStack00000000000000c0;
          unaff_x19[0x44] = unaff_x19[0x24] + 0x3a;
          *(undefined1 *)(unaff_x19 + 0x65) = 0;
          unaff_x23 = &__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE;
          puStack0000000000000110 = _uStack00000000000000b0;
          puStack0000000000000118 = puStack00000000000000b8;
          _uStack0000000000000120 = puStack00000000000000c0;
          _uStack0000000000000128 = in_stack_000000c8;
          _uStack0000000000000130 = in_stack_000000d0;
          in_stack_00000138 = in_stack_000000d8;
          in_stack_00000140 = in_stack_000000e0;
          in_stack_00000148 = in_stack_000000e8;
          in_stack_00000150 = in_stack_000000f0;
          in_stack_00000158 = in_stack_000000f8;
          in_stack_00000160 = in_stack_00000100;
          FUN_1011deaa8(&stack0x00000110,unaff_x19 + 0x39,in_stack_00000058);
          puVar26 = in_stack_00000148;
          puVar16 = in_stack_00000140;
          puVar24 = puStack0000000000000110;
          if (puStack0000000000000110 != (ulong *)0x5) {
            FUN_100d75328(unaff_x19 + 0x39);
            unaff_x28 = puVar26;
            goto LAB_1014f7a50;
          }
          uVar17 = 7;
        }
      }
      goto LAB_1014f79b0;
    }
    uVar19 = unaff_x19[0x2e];
    unaff_x28 = puVar26;
joined_r0x0001014f6b68:
    if (2 < uVar19) {
      _free(unaff_x19[0x2c]);
    }
    unaff_x23 = &__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE;
    FUN_100deb62c(unaff_x19 + 0x25);
    func_0x000100e3c8d4(unaff_x19 + 0x29);
    *(undefined1 *)((long)unaff_x19 + 0x1c4) = 0;
    *(undefined1 *)((long)unaff_x19 + 0x1c2) = 1;
    if (puVar24 != (ulong *)0x5) {
LAB_1014f7acc:
      unaff_x23 = &__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE;
      FUN_100e472c8(unaff_x21);
      *(undefined2 *)(unaff_x19 + 0x1ef) = 1;
      if ((puVar24 != (ulong *)0x4) && (puVar16 != (ulong *)0x0)) {
        if ((code *)*unaff_x28 != (code *)0x0) {
          (*(code *)*unaff_x28)(puVar16);
        }
        if (unaff_x28[1] != 0) {
          _free(puVar16);
        }
      }
      lVar13 = *(long *)unaff_x19[0xc];
      *(long *)unaff_x19[0xc] = lVar13 + -1;
      LORelease();
      if (lVar13 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7142dccc984b9007E();
      }
      uVar20 = 0;
      *(undefined1 *)(unaff_x19 + 0x1f0) = 1;
      uVar19 = *unaff_x19;
      goto joined_r0x0001014f79cc;
    }
  }
  else {
    *in_stack_00000028 = 7;
    uVar17 = 4;
LAB_1014f79b0:
    *(undefined1 *)unaff_x28 = uVar17;
  }
LAB_1014f79b4:
  *in_stack_00000050 = 3;
  uVar20 = 1;
  *(undefined1 *)(unaff_x19 + 0x1f0) = 3;
  uVar19 = *unaff_x19;
joined_r0x0001014f79cc:
  if (uVar19 == 2) {
    cVar14 = *unaff_x23;
  }
  else {
    uVar23 = unaff_x19[1];
    if ((uVar19 & 1) != 0) {
      uVar23 = uVar23 + (*(long *)(unaff_x19[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(unaff_x19[2] + 0x68))(uVar23,unaff_x19 + 3);
    cVar14 = *unaff_x23;
  }
  if ((cVar14 == '\0') && (uVar19 = unaff_x19[4], uVar19 != 0)) {
    _uStack00000000000000b0 = *(ulong **)(uVar19 + 0x10);
    puStack00000000000000b8 = *(ulong **)(uVar19 + 0x18);
    puStack0000000000000110 = (ulong *)&stack0x000000b0;
    puStack0000000000000118 = (ulong *)&DAT_100c7b3a0;
    FUN_1011d7d74();
  }
  return uVar20;
}

