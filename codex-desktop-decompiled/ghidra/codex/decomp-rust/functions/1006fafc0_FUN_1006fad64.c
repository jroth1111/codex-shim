
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006fad64(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined2 uVar8;
  code *pcVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  undefined1 uVar16;
  ulong uVar17;
  undefined *extraout_x8;
  undefined *extraout_x8_00;
  undefined *extraout_x8_01;
  undefined *extraout_x8_02;
  undefined *extraout_x8_03;
  undefined *puVar18;
  undefined *extraout_x8_04;
  long lVar19;
  undefined8 uVar20;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x22;
  long lVar21;
  undefined8 *unaff_x25;
  undefined8 unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  ulong in_stack_00000050;
  undefined6 uStack0000000000000058;
  undefined2 uStack000000000000005e;
  undefined *in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  undefined1 *puStack0000000000000078;
  undefined *puStack0000000000000080;
  undefined8 *puStack0000000000000088;
  undefined *puStack0000000000000090;
  undefined1 *puStack0000000000000098;
  undefined *puStack00000000000000a0;
  undefined1 *puStack00000000000000a8;
  undefined *puStack00000000000000b0;
  undefined1 *puStack00000000000000b8;
  undefined *puStack00000000000000c0;
  undefined8 in_stack_000000c8;
  long lStack00000000000000d0;
  long lStack00000000000000d8;
  long lStack00000000000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined4 uStack0000000000000100;
  undefined2 uStack0000000000000104;
  undefined2 uStack0000000000000106;
  undefined *puStack0000000000000108;
  undefined8 *puStack0000000000000110;
  undefined *puStack0000000000000118;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  char *pcStack0000000000000160;
  undefined1 *puStack0000000000000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  
  puStack0000000000000168 = (undefined1 *)(unaff_x29 + -0xe0);
  pcStack0000000000000160 = s__send_packet_south__data_from_in_108ac46c1;
  lStack00000000000000d0 = *(long *)(unaff_x19 + 0x40) + 0xb2;
  lStack00000000000000d8 = *(long *)(unaff_x19 + 0x40) + 0xb0;
  lStack00000000000000e0 = unaff_x19 + 0x52;
  puStack0000000000000078 = (undefined1 *)&stack0x00000160;
  puStack0000000000000080 = &UNK_10b208fd0;
  puStack0000000000000088 = &stack0x000000d0;
  puStack0000000000000090 = &UNK_10b21ec18;
  puStack0000000000000098 = (undefined1 *)&stack0x000000d8;
  puStack00000000000000a0 = &UNK_10b21ec38;
  puStack00000000000000a8 = (undefined1 *)&stack0x000000e0;
  puStack00000000000000b0 = &UNK_10b21ec18;
  puStack00000000000000b8 = &stack0x00000158;
  puStack00000000000000c0 = &UNK_10b21ec38;
  puStack0000000000000108 = (undefined *)&stack0x00000078;
  _uStack0000000000000100 = (char *)0x1;
  puStack0000000000000110 = (undefined8 *)0x5;
  puStack0000000000000118 = (undefined *)param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x00000100);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == 0) &&
     ((undefined *)0x4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar21 = *unaff_x22;
    in_stack_00000060 = *(undefined **)(lVar21 + 0x20);
    in_stack_00000068 = *(undefined8 *)(lVar21 + 0x28);
    _uStack0000000000000058 = (char *)0x5;
    puVar18 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar18 = &UNK_10b3c24c8;
    }
    puVar4 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar4 = &UNK_109adfc03;
    }
    iVar11 = (**(code **)(puVar18 + 0x18))(puVar4,&stack0x00000058);
    if (iVar11 != 0) {
      lVar19 = *(long *)(lVar21 + 0x60);
      uVar23 = *(undefined8 *)(lVar21 + 0x68);
      lVar7 = *(long *)(lVar21 + 0x50);
      uVar24 = *(undefined8 *)(lVar21 + 0x58);
      uVar20 = 1;
      if (lVar7 == 0) {
        uVar20 = 2;
      }
      uVar5 = *(undefined4 *)(lVar21 + 8);
      uVar6 = *(undefined4 *)(lVar21 + 0xc);
      *(undefined4 **)(unaff_x29 + -0xd0) = &stack0x00000100;
      *(undefined1 *)(unaff_x29 + -200) = 1;
      *(long *)(unaff_x29 + -0xf8) = unaff_x29 + -0xd0;
      *(undefined **)(unaff_x29 + -0xf0) = &DAT_1061c2098;
      uVar2 = 1;
      if (lVar19 == 0) {
        uVar2 = 2;
      }
      unaff_x25[0x1f] = in_stack_00000060;
      unaff_x25[0x1e] = _uStack0000000000000058;
      *(undefined8 *)(unaff_x29 + -0x80) = in_stack_00000068;
      *(char **)(unaff_x29 + -0x70) = s__108b39f4f;
      *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0xf8;
      *(undefined8 *)(unaff_x29 + -0xc0) = uVar20;
      *(long *)(unaff_x29 + -0xb8) = lVar7;
      *(undefined8 *)(unaff_x29 + -0xb0) = uVar24;
      *(undefined8 *)(unaff_x29 + -0xa8) = uVar2;
      *(long *)(unaff_x29 + -0xa0) = lVar19;
      *(undefined8 *)(unaff_x29 + -0x98) = uVar23;
      *(undefined4 *)(unaff_x29 + -0x78) = uVar5;
      *(undefined4 *)(unaff_x29 + -0x74) = uVar6;
      (**(code **)(puVar18 + 0x20))(puVar4,unaff_x29 + -0xc0);
    }
  }
  uVar17 = *(ulong *)(unaff_x19 + 0x240);
  lVar21 = *(long *)(unaff_x19 + 0x40);
  if (*(ulong *)(lVar21 + 0xa8) < uVar17) {
    if (((*unaff_x27 == 0) &&
        ((bRam000000010b6395b0 - 1 < 2 ||
         ((bRam000000010b6395b0 != 0 &&
          (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&
                               __ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7dc2f960216ef1bfE
                              ), cVar10 != '\0')))))) &&
       (uVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7dc2f960216ef1bfE
                           ), (uVar17 & 1) != 0)) {
      puStack0000000000000118 =
           (undefined *)
           (
           ___ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7dc2f960216ef1bfE
           + 0x30);
      lVar21 = *(long *)(unaff_x19 + 0x40);
      puStack0000000000000088 = (undefined8 *)(lVar21 + 0xa8);
      puStack0000000000000078 = &stack0x00000158;
      puStack0000000000000080 =
           &
           __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      puStack0000000000000090 =
           &
           __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      in_stack_00000060 = (undefined *)&stack0x00000078;
      _uStack0000000000000058 = s__drop_packet_south__length_is_to_108ac46f0;
      pcStack0000000000000160 = (char *)(lVar21 + 0xb2);
      *(long *)(unaff_x29 + -0xe0) = lVar21 + 0xb0;
      *(long *)(unaff_x29 + -0xd0) = unaff_x19 + 0x52;
      *(undefined8 *)(unaff_x29 + -0xf8) = unaff_x26;
      *(undefined6 **)(unaff_x29 + -0xc0) = &stack0x00000058;
      *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b208fd0;
      *(char ***)(unaff_x29 + -0xb0) = &stack0x00000160;
      *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b21ec18;
      *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0xe0;
      *(undefined **)(unaff_x29 + -0x98) = &UNK_10b21ec38;
      *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0xd0;
      *(undefined **)(unaff_x29 + -0x88) = &UNK_10b21ec18;
      *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xf8;
      *(undefined **)(unaff_x29 + -0x78) = &UNK_10b21ec38;
      puStack0000000000000108 = (undefined *)(unaff_x29 + -0xc0);
      _uStack0000000000000100 = (char *)0x1;
      puStack0000000000000110 = (undefined8 *)0x5;
      FUN_1006fc1ac(&stack0x00000100);
    }
    else {
      lVar21 = 
      ___ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7dc2f960216ef1bfE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == 0) &&
         ((undefined *)0x4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        in_stack_00000028 =
             *(undefined8 *)
              (
              ___ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7dc2f960216ef1bfE
              + 0x20);
        in_stack_00000030 =
             *(undefined8 *)
              (
              ___ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7dc2f960216ef1bfE
              + 0x28);
        in_stack_00000020 = 5;
        puVar18 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar18 = &UNK_10b3c24c8;
        }
        puVar4 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_109adfc03;
        }
        iVar11 = (**(code **)(puVar18 + 0x18))(puVar4,&stack0x00000020);
        if (iVar11 != 0) {
          puStack0000000000000118 =
               (undefined *)
               (
               ___ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7dc2f960216ef1bfE
               + 0x30);
          lVar19 = *(long *)(unaff_x19 + 0x40);
          puStack0000000000000088 = (undefined8 *)(lVar19 + 0xa8);
          puStack0000000000000078 = &stack0x00000158;
          puStack0000000000000080 =
               &
               __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          puStack0000000000000090 =
               &
               __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          in_stack_00000060 = (undefined *)&stack0x00000078;
          _uStack0000000000000058 = s__drop_packet_south__length_is_to_108ac46f0;
          pcStack0000000000000160 = (char *)(lVar19 + 0xb2);
          *(long *)(unaff_x29 + -0xe0) = lVar19 + 0xb0;
          *(long *)(unaff_x29 + -0xd0) = unaff_x19 + 0x52;
          *(undefined8 *)(unaff_x29 + -0xf8) = unaff_x26;
          *(undefined6 **)(unaff_x29 + -0xc0) = &stack0x00000058;
          *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b208fd0;
          *(char ***)(unaff_x29 + -0xb0) = &stack0x00000160;
          *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b21ec18;
          *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0xe0;
          *(undefined **)(unaff_x29 + -0x98) = &UNK_10b21ec38;
          *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0xd0;
          *(undefined **)(unaff_x29 + -0x88) = &UNK_10b21ec18;
          *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xf8;
          *(undefined **)(unaff_x29 + -0x78) = &UNK_10b21ec38;
          puStack0000000000000108 = (undefined *)(unaff_x29 + -0xc0);
          _uStack0000000000000100 = (char *)0x1;
          puStack0000000000000110 = (undefined8 *)0x5;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar21,puVar4,puVar18,&stack0x00000020,&stack0x00000100);
        }
      }
    }
    (**(code **)(*(long *)(unaff_x19 + 0x230) + 0x20))
              (unaff_x19 + 0x248,*(undefined8 *)(unaff_x19 + 0x238),
               *(undefined8 *)(unaff_x19 + 0x240));
    puVar18 = extraout_x8_03;
LAB_1006fb9f8:
    puVar14 = (undefined8 *)0x0;
  }
  else {
    uVar20 = *(undefined8 *)(unaff_x19 + 0x238);
    uVar8 = *(undefined2 *)(unaff_x19 + 0x50);
    uVar5 = *(undefined4 *)(unaff_x19 + 0x53);
    bVar1 = (*(byte *)(unaff_x19 + 0x52) & 1) == 0;
    if (bVar1) {
      _uStack0000000000000100 = CONCAT24(uVar8,uVar5);
    }
    else {
      *(undefined8 *)(unaff_x29 + -0xc0) = *(undefined8 *)(unaff_x19 + 0x57);
      *(undefined4 *)(unaff_x29 + -0xb8) = *(undefined4 *)(unaff_x19 + 0x5f);
      *(undefined4 *)((long)unaff_x25 + 2) = uVar5;
    }
    uStack0000000000000058 = SUB86(_uStack0000000000000100,0);
    puStack0000000000000078 = *(undefined1 **)(unaff_x29 + -0xc0);
    uVar5 = *(undefined4 *)(unaff_x29 + -0xb8);
    puStack0000000000000080 = (undefined *)CONCAT44(puStack0000000000000080._4_4_,uVar5);
    *(ushort *)(unaff_x19 + 0x80) = (ushort)!bVar1;
    *(undefined4 *)(unaff_x19 + 0x82) = uStack0000000000000100;
    *(undefined2 *)(unaff_x19 + 0x86) = uStack0000000000000104;
    *(undefined1 **)(unaff_x19 + 0x88) = puStack0000000000000078;
    *(undefined4 *)(unaff_x19 + 0x94) = 0;
    *(undefined4 *)(unaff_x19 + 0x98) = 0;
    *(undefined4 *)(unaff_x19 + 0x90) = uVar5;
    *(undefined2 *)(unaff_x19 + 0x9c) = uVar8;
    *(long *)(unaff_x19 + 0xa0) = lVar21 + 0x20;
    *(undefined8 *)(unaff_x19 + 0xa8) = uVar20;
    *(ulong *)(unaff_x19 + 0xb0) = uVar17;
    *(undefined1 *)(unaff_x19 + 0xd0) = 0;
    auVar25 = FUN_100fc5310(unaff_x19 + 0x80);
    uVar17 = auVar25._8_8_;
    if (auVar25._0_8_ == 2) {
      *unaff_x20 = 1;
      uVar16 = 3;
      goto LAB_1006fbb4c;
    }
    FUN_100cfe158(unaff_x19 + 0x80);
    (**(code **)(*(long *)(unaff_x19 + 0x230) + 0x20))
              (unaff_x19 + 0x248,*(undefined8 *)(unaff_x19 + 0x238),
               *(undefined8 *)(unaff_x19 + 0x240));
    if ((auVar25._0_8_ & 1) == 0) {
      in_stack_00000050 = uVar17;
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
         (((bRam000000010b639610 - 1 < 2 ||
           ((bRam000000010b639610 != 0 &&
            (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf514f2b5a0224be2E
                                ), cVar10 != '\0')))) &&
          (uVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (
                              ___ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf514f2b5a0224be2E
                              ), (uVar17 & 1) != 0)))) {
        in_stack_00000070 =
             ___ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf514f2b5a0224be2E
             + 0x30;
        lStack00000000000000d8 = *(long *)(unaff_x19 + 0x40);
        in_stack_000000c8 = *(undefined8 *)(lStack00000000000000d8 + 0x48);
        _uStack0000000000000100 = (char *)&stack0x000000c8;
        puStack0000000000000108 =
             &
             __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
        ;
        puStack0000000000000110 = &stack0x00000050;
        puStack0000000000000118 =
             &
             __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
        ;
        puStack0000000000000168 = (undefined1 *)&stack0x00000100;
        pcStack0000000000000160 = s__send_packet_south__complete__le_108ac47ee;
        lStack00000000000000d0 = lStack00000000000000d8 + 0xb2;
        lStack00000000000000d8 = lStack00000000000000d8 + 0xb0;
        lStack00000000000000e0 = unaff_x19 + 0x52;
        puStack0000000000000078 = (undefined1 *)&stack0x00000160;
        puStack0000000000000080 = &UNK_10b208fd0;
        puStack0000000000000088 = &stack0x000000d0;
        puStack0000000000000090 = &UNK_10b21ec18;
        puStack0000000000000098 = (undefined1 *)&stack0x000000d8;
        puStack00000000000000a0 = &UNK_10b21ec38;
        puStack00000000000000a8 = (undefined1 *)&stack0x000000e0;
        puStack00000000000000b0 = &UNK_10b21ec18;
        puStack00000000000000b8 = &stack0x00000158;
        puStack00000000000000c0 = &UNK_10b21ec38;
        in_stack_00000060 = (undefined *)&stack0x00000078;
        _uStack0000000000000058 = (char *)0x1;
        in_stack_00000068 = 5;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf514f2b5a0224be2E
                   ,&stack0x00000058);
        lVar21 = 
        ___ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf514f2b5a0224be2E
        ;
        puVar18 = (undefined *)(ulong)__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == 0) &&
           (puVar18 = ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E,
           (undefined *)0x4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uVar20 = *(undefined8 *)
                    (
                    ___ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf514f2b5a0224be2E
                    + 0x20);
          uVar23 = *(undefined8 *)
                    (
                    ___ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf514f2b5a0224be2E
                    + 0x28);
          *(undefined8 *)(unaff_x29 + -0xf8) = 5;
          *(undefined8 *)(unaff_x29 + -0xf0) = uVar20;
          *(undefined8 *)(unaff_x29 + -0xe8) = uVar23;
          puVar4 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar4 = &UNK_10b3c24c8;
          }
          puVar3 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_109adfc03;
          }
          iVar11 = (**(code **)(puVar4 + 0x18))(puVar3,unaff_x29 + -0xf8);
          puVar18 = extraout_x8_01;
          if (iVar11 != 0) {
            lVar19 = *(long *)(lVar21 + 0x60);
            uVar23 = *(undefined8 *)(lVar21 + 0x68);
            lVar7 = *(long *)(lVar21 + 0x50);
            uVar24 = *(undefined8 *)(lVar21 + 0x58);
            uVar20 = 1;
            if (lVar7 == 0) {
              uVar20 = 2;
            }
            uVar5 = *(undefined4 *)(lVar21 + 8);
            uVar6 = *(undefined4 *)(lVar21 + 0xc);
            *(undefined6 **)(unaff_x29 + -0xe0) = &stack0x00000058;
            *(undefined1 *)(unaff_x29 + -0xd8) = 1;
            *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0xe0;
            *(undefined **)(unaff_x29 + -200) = &DAT_1061c2098;
            uVar2 = 1;
            if (lVar19 == 0) {
              uVar2 = 2;
            }
            uVar22 = *(undefined8 *)(unaff_x29 + -0xf8);
            unaff_x25[0x1f] = *(undefined8 *)(unaff_x29 + -0xf0);
            unaff_x25[0x1e] = uVar22;
            *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0xe8);
            *(char **)(unaff_x29 + -0x70) = s__108b39f4f;
            *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0xd0;
            *(undefined8 *)(unaff_x29 + -0xc0) = uVar20;
            *(long *)(unaff_x29 + -0xb8) = lVar7;
            *(undefined8 *)(unaff_x29 + -0xb0) = uVar24;
            *(undefined8 *)(unaff_x29 + -0xa8) = uVar2;
            *(long *)(unaff_x29 + -0xa0) = lVar19;
            *(undefined8 *)(unaff_x29 + -0x98) = uVar23;
            *(undefined4 *)(unaff_x29 + -0x78) = uVar5;
            *(undefined4 *)(unaff_x29 + -0x74) = uVar6;
            (**(code **)(puVar4 + 0x20))(puVar3,unaff_x29 + -0xc0);
            puVar18 = extraout_x8_02;
          }
        }
      }
      else {
        lVar21 = 
        ___ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf514f2b5a0224be2E
        ;
        puVar18 = (undefined *)(ulong)__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == 0) &&
           (puVar18 = ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E,
           (undefined *)0x4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          in_stack_000000f0 =
               *(undefined8 *)
                (
                ___ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf514f2b5a0224be2E
                + 0x20);
          in_stack_000000f8 =
               *(undefined8 *)
                (
                ___ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf514f2b5a0224be2E
                + 0x28);
          in_stack_000000e8 = 5;
          puVar4 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar4 = &UNK_10b3c24c8;
          }
          puVar3 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_109adfc03;
          }
          iVar11 = (**(code **)(puVar4 + 0x18))(puVar3,&stack0x000000e8);
          puVar18 = extraout_x8;
          if (iVar11 != 0) {
            puStack0000000000000118 =
                 (undefined *)
                 (
                 ___ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf514f2b5a0224be2E
                 + 0x30);
            puStack0000000000000078 = &stack0x00000158;
            puStack0000000000000080 =
                 &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
            ;
            puStack0000000000000088 = &stack0x00000050;
            puStack0000000000000090 =
                 &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
            ;
            in_stack_00000060 = (undefined *)&stack0x00000078;
            _uStack0000000000000058 = s__send_packet_south__complete__le_108ac47ee;
            pcStack0000000000000160 = (char *)(*(long *)(unaff_x19 + 0x40) + 0xb2);
            *(long *)(unaff_x29 + -0xe0) = *(long *)(unaff_x19 + 0x40) + 0xb0;
            *(long *)(unaff_x29 + -0xd0) = unaff_x19 + 0x52;
            *(long *)(unaff_x29 + -0xf8) = unaff_x19 + 0x50;
            *(undefined6 **)(unaff_x29 + -0xc0) = &stack0x00000058;
            *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b208fd0;
            *(char ***)(unaff_x29 + -0xb0) = &stack0x00000160;
            *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b21ec18;
            *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0xe0;
            *(undefined **)(unaff_x29 + -0x98) = &UNK_10b21ec38;
            *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0xd0;
            *(undefined **)(unaff_x29 + -0x88) = &UNK_10b21ec18;
            *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xf8;
            *(undefined **)(unaff_x29 + -0x78) = &UNK_10b21ec38;
            puStack0000000000000108 = (undefined *)(unaff_x29 + -0xc0);
            _uStack0000000000000100 = (char *)0x1;
            puStack0000000000000110 = (undefined8 *)0x5;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar21,puVar3,puVar4,&stack0x000000e8,&stack0x00000100);
            puVar18 = extraout_x8_00;
          }
        }
      }
      goto LAB_1006fb9f8;
    }
    if ((uVar17 & 3) == 1) {
      (**(code **)(*(long *)(uVar17 + 7) + 0x38))(unaff_x29 + -0xc0,*(undefined8 *)(uVar17 - 1));
      if (*(long *)(unaff_x29 + -0xb8) == 0x1d72b7326784f392 &&
          *(long *)(unaff_x29 + -0xc0) == 0x5214e5a8c66b30ef) {
        puVar14 = *(undefined8 **)(uVar17 - 1);
        lVar21 = *(long *)(uVar17 + 7);
        (**(code **)(lVar21 + 0x38))(unaff_x29 + -0xc0,puVar14);
        if (*(long *)(unaff_x29 + -0xb8) != 0x1d72b7326784f392 ||
            *(long *)(unaff_x29 + -0xc0) != 0x5214e5a8c66b30ef) {
          FUN_100d8e778(puVar14,lVar21);
          goto LAB_1006fbf90;
        }
        uVar20 = *puVar14;
        _free(puVar14);
        _free((undefined8 *)(uVar17 - 1));
        uVar12 = FUN_105af21e4(uVar20);
        if (((uVar12 & 0xff) < 0x29) &&
           ((1L << ((ulong)(uVar12 & 0xff) & 0x3f) & 0x1080040220aU) != 0)) {
          *(undefined8 *)(unaff_x29 + -0xd0) = uVar20;
          if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
              ((bRam000000010b6395e0 - 1 < 2 ||
               ((bRam000000010b6395e0 != 0 &&
                (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                    (&
                                     __ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha2c237627d7ea0d0E
                                    ), cVar10 != '\0')))))) &&
             (uVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (
                                 ___ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha2c237627d7ea0d0E
                                 ), (uVar17 & 1) != 0)) {
            puStack0000000000000090 =
                 (undefined *)
                 (
                 ___ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha2c237627d7ea0d0E
                 + 0x30);
            _uStack0000000000000100 = (char *)(unaff_x29 + -0xd0);
            puStack0000000000000108 =
                 &
                 __ZN58__LT_std__io__error__Error_u20_as_u20_core__fmt__Debug_GT_3fmt17heced06dcf81bbc5fE
            ;
            in_stack_00000060 = (undefined *)&stack0x00000100;
            _uStack0000000000000058 = s__south_socket__fatal_I_O_write_e_108ac4865;
            *(char **)(unaff_x29 + -0xf8) = _uStack0000000000000100;
            *(undefined6 **)(unaff_x29 + -0xc0) = &stack0x00000058;
            *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b208fd0;
            *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xf8;
            *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b21ec70;
            puStack0000000000000080 = (undefined *)(unaff_x29 + -0xc0);
            puStack0000000000000078 = (undefined1 *)0x1;
            puStack0000000000000088 = (undefined8 *)0x2;
            FUN_1006fc424(&stack0x00000078);
          }
          else {
            lVar21 = 
            ___ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha2c237627d7ea0d0E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == 0) &&
               ((undefined *)0x3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              in_stack_00000130 =
                   *(undefined8 *)
                    (
                    ___ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha2c237627d7ea0d0E
                    + 0x20);
              in_stack_00000138 =
                   *(undefined8 *)
                    (
                    ___ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha2c237627d7ea0d0E
                    + 0x28);
              in_stack_00000128 = 4;
              puVar18 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar18 = &UNK_10b3c24c8;
              }
              puVar4 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar4 = &UNK_109adfc03;
              }
              iVar11 = (**(code **)(puVar18 + 0x18))(puVar4,&stack0x00000128);
              if (iVar11 != 0) {
                puStack0000000000000090 =
                     (undefined *)
                     (
                     ___ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha2c237627d7ea0d0E
                     + 0x30);
                _uStack0000000000000100 = (char *)(unaff_x29 + -0xd0);
                puStack0000000000000108 =
                     &
                     __ZN58__LT_std__io__error__Error_u20_as_u20_core__fmt__Debug_GT_3fmt17heced06dcf81bbc5fE
                ;
                in_stack_00000060 = (undefined *)&stack0x00000100;
                _uStack0000000000000058 = s__south_socket__fatal_I_O_write_e_108ac4865;
                *(char **)(unaff_x29 + -0xf8) = _uStack0000000000000100;
                *(undefined6 **)(unaff_x29 + -0xc0) = &stack0x00000058;
                *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b208fd0;
                *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xf8;
                *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b21ec70;
                puStack0000000000000080 = (undefined *)(unaff_x29 + -0xc0);
                puStack0000000000000078 = (undefined1 *)0x1;
                puStack0000000000000088 = (undefined8 *)0x2;
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar21,puVar4,puVar18,&stack0x00000128,&stack0x00000078);
              }
            }
          }
          *(undefined **)(unaff_x29 + -0xc0) = &UNK_108caa7b6;
          *(undefined8 *)(unaff_x29 + -0xb8) = 0x22;
          *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0xd0);
          puVar14 = (undefined8 *)_malloc(0x18);
          if (puVar14 == (undefined8 *)0x0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
            goto LAB_1006fbf90;
          }
          uVar20 = unaff_x25[0x18];
          puVar14[1] = unaff_x25[0x19];
          *puVar14 = uVar20;
          puVar14[2] = *(undefined8 *)(unaff_x29 + -0xb0);
          puVar18 = &UNK_10b2372e8;
        }
        else {
          *(undefined8 *)(unaff_x29 + -0xf8) = uVar20;
          if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
              ((bRam000000010b639598 - 1 < 2 ||
               ((bRam000000010b639598 != 0 &&
                (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                    (&
                                     __ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h238bfb78d468a13aE
                                    ), cVar10 != '\0')))))) &&
             (uVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (
                                 ___ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h238bfb78d468a13aE
                                 ), (uVar17 & 1) != 0)) {
            lVar21 = ___ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h238bfb78d468a13aE
                     + 0x30;
            puStack0000000000000078 = (undefined1 *)(unaff_x29 + -0xf8);
            puStack0000000000000080 =
                 &
                 __ZN58__LT_std__io__error__Error_u20_as_u20_core__fmt__Debug_GT_3fmt17heced06dcf81bbc5fE
            ;
            puStack0000000000000108 = (undefined *)&stack0x00000078;
            _uStack0000000000000100 = s_<south_socket:_write_error:_pack_108ac4826;
            _uStack0000000000000058 = (char *)&stack0x00000100;
            in_stack_00000060 = &UNK_10b208fd0;
            *(undefined8 *)(unaff_x29 + -0xc0) = 1;
            *(undefined6 **)(unaff_x29 + -0xb8) = &stack0x00000058;
            *(undefined8 *)(unaff_x29 + -0xb0) = 1;
            *(long *)(unaff_x29 + -0xa8) = lVar21;
            FUN_1006fc560(unaff_x29 + -0xc0);
          }
          else {
            lVar21 = 
            ___ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h238bfb78d468a13aE
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == 0) &&
               ((undefined *)0x3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              in_stack_00000148 =
                   *(undefined8 *)
                    (
                    ___ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h238bfb78d468a13aE
                    + 0x20);
              in_stack_00000150 =
                   *(undefined8 *)
                    (
                    ___ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h238bfb78d468a13aE
                    + 0x28);
              in_stack_00000140 = 4;
              puVar18 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar18 = &UNK_10b3c24c8;
              }
              puVar4 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar4 = &UNK_109adfc03;
              }
              iVar11 = (**(code **)(puVar18 + 0x18))(puVar4,&stack0x00000140);
              if (iVar11 != 0) {
                lVar19 = ___ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h238bfb78d468a13aE
                         + 0x30;
                puStack0000000000000078 = (undefined1 *)(unaff_x29 + -0xf8);
                puStack0000000000000080 =
                     &
                     __ZN58__LT_std__io__error__Error_u20_as_u20_core__fmt__Debug_GT_3fmt17heced06dcf81bbc5fE
                ;
                puStack0000000000000108 = (undefined *)&stack0x00000078;
                _uStack0000000000000100 = s_<south_socket:_write_error:_pack_108ac4826;
                _uStack0000000000000058 = (char *)&stack0x00000100;
                in_stack_00000060 = &UNK_10b208fd0;
                *(undefined8 *)(unaff_x29 + -0xc0) = 1;
                *(undefined6 **)(unaff_x29 + -0xb8) = &stack0x00000058;
                *(undefined8 *)(unaff_x29 + -0xb0) = 1;
                *(long *)(unaff_x29 + -0xa8) = lVar19;
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar21,puVar4,puVar18,&stack0x00000140,unaff_x29 + -0xc0);
              }
            }
          }
          uVar17 = *(ulong *)(unaff_x29 + -0xf8);
          puVar18 = (undefined *)(uVar17 & 3);
          if ((undefined *)(uVar17 & 3) != (undefined *)0x1) goto LAB_1006fb9f8;
          uVar20 = *(undefined8 *)(uVar17 - 1);
          puVar14 = *(undefined8 **)(uVar17 + 7);
          pcVar9 = (code *)*puVar14;
          if (pcVar9 != (code *)0x0) {
            (*pcVar9)(uVar20);
          }
          if (puVar14[1] != 0) {
            _free(uVar20);
          }
          _free((undefined8 *)(uVar17 - 1));
          puVar14 = (undefined8 *)0x0;
          puVar18 = extraout_x8_04;
        }
        goto LAB_1006fbb40;
      }
    }
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
       (((bRam000000010b6395c8 - 1 < 2 ||
         ((bRam000000010b6395c8 != 0 &&
          (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&
                               __ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8e3730a849d51c76E
                              ), cVar10 != '\0')))) &&
        (uVar13 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (
                            ___ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8e3730a849d51c76E
                            ),
        lVar21 = 
        ___ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8e3730a849d51c76E
        , (uVar13 & 1) != 0)))) {
      puStack0000000000000090 =
           (undefined *)
           (
           ___ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8e3730a849d51c76E
           + 0x30);
      *(undefined1 **)(unaff_x29 + -0xd0) = &stack0x00000158;
      *(undefined **)(unaff_x29 + -200) =
           &__ZN58__LT_std__io__error__Error_u20_as_u20_core__fmt__Debug_GT_3fmt17heced06dcf81bbc5fE
      ;
      *(char **)(unaff_x29 + -0xe0) = s__south_socket__fatal_unknown_wri_108ac488d;
      *(long *)(unaff_x29 + -0xd8) = unaff_x29 + -0xd0;
      pcStack0000000000000160 = (char *)(unaff_x29 + -0xe0);
      puStack0000000000000168 = &UNK_10b208fd0;
      puStack0000000000000080 = (undefined *)&stack0x00000160;
      puStack0000000000000078 = (undefined1 *)0x1;
      puStack0000000000000088 = (undefined8 *)0x1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar21,&stack0x00000078);
      lVar21 = 
      ___ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8e3730a849d51c76E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == 0) &&
         ((undefined *)0x3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puStack0000000000000108 =
             *(undefined **)
              (
              ___ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8e3730a849d51c76E
              + 0x20);
        puStack0000000000000110 =
             *(undefined8 **)
              (
              ___ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8e3730a849d51c76E
              + 0x28);
        _uStack0000000000000100 = (char *)0x4;
        puVar18 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar18 = &UNK_10b3c24c8;
        }
        puVar4 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_109adfc03;
        }
        iVar11 = (**(code **)(puVar18 + 0x18))(puVar4,&stack0x00000100);
        if (iVar11 != 0) {
          lVar19 = *(long *)(lVar21 + 0x60);
          uVar23 = *(undefined8 *)(lVar21 + 0x68);
          lVar7 = *(long *)(lVar21 + 0x50);
          uVar24 = *(undefined8 *)(lVar21 + 0x58);
          uVar20 = 1;
          if (lVar7 == 0) {
            uVar20 = 2;
          }
          uVar5 = *(undefined4 *)(lVar21 + 8);
          uVar6 = *(undefined4 *)(lVar21 + 0xc);
          *(undefined1 ***)(unaff_x29 + -0xf8) = &stack0x00000078;
          *(undefined1 *)(unaff_x29 + -0xf0) = 1;
          _uStack0000000000000058 = (char *)(unaff_x29 + -0xf8);
          in_stack_00000060 = &DAT_1061c2098;
          uVar2 = 1;
          if (lVar19 == 0) {
            uVar2 = 2;
          }
          unaff_x25[0x1f] = unaff_x25[1];
          unaff_x25[0x1e] = *unaff_x25;
          *(undefined8 **)(unaff_x29 + -0x80) = puStack0000000000000110;
          *(char **)(unaff_x29 + -0x70) = s__108b39f4f;
          *(undefined6 **)(unaff_x29 + -0x68) = &stack0x00000058;
          *(undefined8 *)(unaff_x29 + -0xc0) = uVar20;
          *(long *)(unaff_x29 + -0xb8) = lVar7;
          *(undefined8 *)(unaff_x29 + -0xb0) = uVar24;
          *(undefined8 *)(unaff_x29 + -0xa8) = uVar2;
          *(long *)(unaff_x29 + -0xa0) = lVar19;
          *(undefined8 *)(unaff_x29 + -0x98) = uVar23;
          *(undefined4 *)(unaff_x29 + -0x78) = uVar5;
          *(undefined4 *)(unaff_x29 + -0x74) = uVar6;
          (**(code **)(puVar18 + 0x20))(puVar4,unaff_x29 + -0xc0);
        }
      }
    }
    else {
      lVar21 = 
      ___ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8e3730a849d51c76E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == 0) &&
         ((undefined *)0x3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        in_stack_00000178 =
             *(undefined8 *)
              (
              ___ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8e3730a849d51c76E
              + 0x20);
        in_stack_00000180 =
             *(undefined8 *)
              (
              ___ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8e3730a849d51c76E
              + 0x28);
        in_stack_00000170 = 4;
        puVar18 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar18 = &UNK_10b3c24c8;
        }
        puVar4 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_109adfc03;
        }
        iVar11 = (**(code **)(puVar18 + 0x18))(puVar4,&stack0x00000170);
        if (iVar11 != 0) {
          lVar19 = ___ZN11rama_socks56server3udp5relay14UdpSocketRelay13send_to_south28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8e3730a849d51c76E
                   + 0x30;
          puStack0000000000000078 = &stack0x00000158;
          puStack0000000000000080 =
               &
               __ZN58__LT_std__io__error__Error_u20_as_u20_core__fmt__Debug_GT_3fmt17heced06dcf81bbc5fE
          ;
          puStack0000000000000108 = (undefined *)&stack0x00000078;
          _uStack0000000000000100 = s__south_socket__fatal_unknown_wri_108ac488d;
          _uStack0000000000000058 = (char *)&stack0x00000100;
          in_stack_00000060 = &UNK_10b208fd0;
          *(undefined8 *)(unaff_x29 + -0xc0) = 1;
          *(undefined6 **)(unaff_x29 + -0xb8) = &stack0x00000058;
          *(undefined8 *)(unaff_x29 + -0xb0) = 1;
          *(long *)(unaff_x29 + -0xa8) = lVar19;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar21,puVar4,puVar18,&stack0x00000170,unaff_x29 + -0xc0);
        }
      }
    }
    *(ulong *)(unaff_x29 + -0xc0) = uVar17;
    puVar15 = (ulong *)_malloc(8);
    if (puVar15 == (ulong *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
LAB_1006fbf90:
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1006fbf94);
      (*pcVar9)();
    }
    *puVar15 = uVar17;
    *(undefined **)(unaff_x29 + -0xc0) = &UNK_108caa7d8;
    *(undefined8 *)(unaff_x29 + -0xb8) = 0x26;
    *(ulong **)(unaff_x29 + -0xb0) = puVar15;
    *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b212e38;
    puVar14 = (undefined8 *)_malloc(0x20);
    if (puVar14 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x20);
      goto LAB_1006fbf90;
    }
    uVar20 = unaff_x25[0x18];
    uVar24 = unaff_x25[0x1b];
    uVar23 = unaff_x25[0x1a];
    puVar14[1] = unaff_x25[0x19];
    *puVar14 = uVar20;
    puVar14[3] = uVar24;
    puVar14[2] = uVar23;
    puVar18 = &UNK_10b21f338;
  }
LAB_1006fbb40:
  unaff_x20[1] = puVar14;
  unaff_x20[2] = puVar18;
  uVar16 = 1;
  *unaff_x20 = 0;
LAB_1006fbb4c:
  *(undefined1 *)(unaff_x19 + 0x78) = uVar16;
  return;
}

