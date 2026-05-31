
/* WARNING: Removing unreachable block (ram,0x00010075a2f0) */
/* WARNING: Removing unreachable block (ram,0x00010075a7cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007570a4(void)

{
  byte *pbVar1;
  ulong *puVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  char cVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  char *pcVar14;
  uint uVar15;
  ulong extraout_x1;
  long *plVar16;
  undefined1 uVar17;
  undefined2 uVar18;
  short sVar19;
  undefined4 uVar20;
  ulong uVar21;
  code *pcVar22;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  byte bVar23;
  long lVar24;
  long lVar25;
  undefined8 extraout_x12;
  undefined8 extraout_x12_00;
  undefined8 extraout_x12_01;
  undefined8 extraout_x12_02;
  undefined8 extraout_x12_03;
  undefined8 extraout_x12_04;
  undefined8 extraout_x12_05;
  undefined8 extraout_x12_06;
  undefined8 extraout_x12_07;
  undefined8 extraout_x12_08;
  undefined8 extraout_x12_09;
  undefined8 extraout_x12_10;
  undefined8 extraout_x12_11;
  undefined8 extraout_x12_12;
  undefined8 extraout_x12_13;
  undefined8 extraout_x12_14;
  undefined8 extraout_x12_15;
  undefined8 *puVar26;
  long unaff_x19;
  undefined8 *puVar27;
  long *plVar28;
  long lVar29;
  long *unaff_x22;
  char *pcVar30;
  ushort uVar31;
  ulong uVar32;
  undefined8 uVar33;
  undefined2 *puVar34;
  long *plVar35;
  undefined8 uVar36;
  undefined *unaff_x26;
  long *plVar37;
  long *unaff_x28;
  long unaff_x29;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  ulong in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined2 uStack0000000000000034;
  ulong in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  ulong in_stack_00000050;
  undefined8 *in_stack_00000058;
  long *in_stack_00000068;
  undefined8 *in_stack_00000078;
  ulong in_stack_00000080;
  undefined1 *in_stack_00000088;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  long in_stack_000001d0;
  long in_stack_000001d8;
  undefined4 in_stack_000001e0;
  ulong *puVar45;
  char *pcVar46;
  long *plVar47;
  undefined *puVar48;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  char *in_stack_00000380;
  undefined *in_stack_00000388;
  undefined7 uVar49;
  undefined8 in_stack_00000390;
  undefined8 in_stack_00000398;
  undefined8 in_stack_000003a0;
  char *pcVar50;
  long *in_stack_00000478;
  char *in_stack_000004c0;
  undefined8 in_stack_000004d0;
  undefined8 in_stack_000004d8;
  undefined4 in_stack_000005b1;
  
code_r0x0001007570a4:
  pcVar50 = s__south_socket__non_fatal_error__r_108ac4992;
  pcVar46 = &stack0x000003e0;
  puVar45 = (ulong *)0x1;
  plVar47 = (long *)0x1;
  FUN_1006fc69c(&stack0x000002d0);
LAB_100757bd4:
  if (((ulong)in_stack_00000478 & 3) == 1) {
    uVar33 = *(undefined8 *)((long)in_stack_00000478 + -1);
    puVar27 = *(undefined8 **)((long)in_stack_00000478 + 7);
    pcVar22 = (code *)*puVar27;
    if (pcVar22 != (code *)0x0) {
      (*pcVar22)(uVar33);
    }
    if (puVar27[1] != 0) {
      _free(uVar33);
    }
    _free((undefined8 *)((long)in_stack_00000478 + -1));
  }
LAB_10075921c:
  bVar3 = false;
  uVar31 = 2;
LAB_100759220:
  puVar27 = *(undefined8 **)(unaff_x29 + -0x100);
  puVar48 = *(undefined **)(unaff_x29 + -0xf8);
  *in_stack_00000088 = 1;
  FUN_100ca8c00(unaff_x22);
  if (bVar3) {
    *(undefined8 *)(unaff_x19 + 0x158) = 3;
    *(undefined2 *)(unaff_x19 + 0x160) = uStack0000000000000034;
    *(undefined4 *)unaff_x28 = uStack0000000000000030;
    *(undefined8 **)((long)unaff_x28 + 4) = in_stack_00000028;
    *(undefined8 **)(unaff_x19 + 0x188) = puVar27;
    *(undefined **)(unaff_x19 + 400) = puVar48;
    *(short *)(unaff_x19 + 0x16e) = (short)in_stack_00000020._4_4_;
    *(undefined1 *)(unaff_x19 + 0x170) = 0;
    *(int *)((long)unaff_x28 + 0xf) = (int)in_stack_00000080;
    *(char *)((long)unaff_x28 + 0x13) = (char)(in_stack_00000080 >> 0x20);
    in_stack_00000038 = *(ulong *)(unaff_x19 + 0x160);
    in_stack_00000010 =
         in_stack_00000080 & 0xffffffff | (ulong)*(uint3 *)((long)unaff_x28 + 0x13) << 0x20;
    puVar26 = puVar27;
    in_stack_00000040 = *(undefined8 *)(unaff_x19 + 0x168);
    in_stack_00000370 = *(undefined8 *)(unaff_x19 + 0x178);
    in_stack_00000378 = *(undefined8 *)(unaff_x19 + 0x180);
    goto LAB_10075ac60;
  }
  *(ushort *)(unaff_x19 + 0x160) = uVar31;
  *(int *)unaff_x28 = (int)unaff_x26;
  in_stack_00000080 = (ulong)puVar48 >> 0x18;
  *(undefined8 **)((long)unaff_x28 + 4) = puVar27;
  *(undefined8 *)(unaff_x19 + 0x158) = 4;
  in_stack_00000020._4_4_ = SUB84(puVar48,0);
  *(short *)(unaff_x19 + 0x16e) = (short)puVar48;
  *(char *)(unaff_x19 + 0x170) = (char)((ulong)puVar48 >> 0x10);
  *(char *)((long)unaff_x28 + 0x13) = (char)((ulong)puVar48 >> 0x38);
  *(int *)((long)unaff_x28 + 0xf) = (int)((ulong)puVar48 >> 0x18);
  uVar49 = (undefined7)((ulong)in_stack_00000388 >> 8);
  if (uVar31 != 2) {
    if ((uVar31 & 1) == 0) {
      lVar29 = *unaff_x28;
      *(long *)(unaff_x19 + 0x1b4) = unaff_x28[1];
      *(long *)(unaff_x19 + 0x1ac) = lVar29;
      *(int *)(unaff_x19 + 0x1bc) = (int)unaff_x28[2];
      uVar33 = extraout_x12;
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
         (((bRam000000010b6397c0 - 1 < 2 ||
           ((bRam000000010b6397c0 != 0 &&
            (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h00d9c3ccc0e13238E
                                ), uVar33 = extraout_x12_15, cVar10 != '\0')))) &&
          (uVar13 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (
                              ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h00d9c3ccc0e13238E
                              ),
          lVar29 = 
          ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h00d9c3ccc0e13238E
          , uVar33 = extraout_x12_09, (uVar13 & 1) != 0)))) {
        lVar25 = ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h00d9c3ccc0e13238E
                 + 0x30;
        in_stack_00000388 = &stack0x00000410;
        in_stack_00000380 = s_relay_request__north__>_south___108ac649d;
        *(undefined8 *)(unaff_x29 + -0xc0) = 1;
        *(undefined1 **)(unaff_x29 + -0xb8) = &stack0x00000510;
        *(undefined8 *)(unaff_x29 + -0xb0) = 1;
        *(long *)(unaff_x29 + -0xa8) = lVar25;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar29,unaff_x29 + -0xc0);
        lVar29 = 
        ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h00d9c3ccc0e13238E
        ;
        uVar33 = extraout_x12_10;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pcVar46 = *(char **)(
                              ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h00d9c3ccc0e13238E
                              + 0x20);
          puVar45 = (ulong *)0x5;
          puVar48 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar48 = &UNK_10b3c24c8;
          }
          puVar7 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar7 = &UNK_109adfc03;
          }
          iVar12 = (**(code **)(puVar48 + 0x18))(puVar7,&stack0x000002d0);
          uVar33 = extraout_x12_11;
          if (iVar12 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar29,puVar7,puVar48,&stack0x000002d0,unaff_x29 + -0xc0);
            uVar33 = extraout_x12_12;
          }
        }
      }
      else {
        lVar29 = 
        ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h00d9c3ccc0e13238E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          in_stack_000001c0 =
               *(undefined8 *)
                (
                ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h00d9c3ccc0e13238E
                + 0x20);
          in_stack_000001c8 =
               *(undefined8 *)
                (
                ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h00d9c3ccc0e13238E
                + 0x28);
          in_stack_000001b8 = 5;
          puVar48 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar48 = &UNK_10b3c24c8;
          }
          puVar7 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar7 = &UNK_109adfc03;
          }
          iVar12 = (**(code **)(puVar48 + 0x18))(puVar7,&stack0x000001b8);
          uVar33 = extraout_x12_02;
          if (iVar12 != 0) {
            pcVar50 = s_relay_request__north__>_south___108ac649d;
            pcVar46 = &stack0x000003e0;
            puVar45 = (ulong *)0x1;
            *(undefined8 *)(unaff_x29 + -0x88) = in_stack_000001c0;
            *(undefined8 *)(unaff_x29 + -0x90) = in_stack_000001b8;
            *(undefined8 *)(unaff_x29 + -0x80) = in_stack_000001c8;
            lVar25 = *(long *)(lVar29 + 0x60);
            uVar36 = *(undefined8 *)(lVar29 + 0x68);
            lVar24 = *(long *)(lVar29 + 0x50);
            uVar42 = *(undefined8 *)(lVar29 + 0x58);
            uVar33 = 1;
            if (lVar24 == 0) {
              uVar33 = 2;
            }
            uVar20 = *(undefined4 *)(lVar29 + 8);
            uVar8 = *(undefined4 *)(lVar29 + 0xc);
            in_stack_00000380 = &stack0x000002d0;
            in_stack_00000388 = (undefined *)CONCAT71(uVar49,1);
            uVar43 = 1;
            if (lVar25 == 0) {
              uVar43 = 2;
            }
            *(char **)(unaff_x29 + -0x70) = s__108b39f4f;
            *(undefined1 **)(unaff_x29 + -0x68) = &stack0x00000410;
            *(undefined8 *)(unaff_x29 + -0xc0) = uVar33;
            *(long *)(unaff_x29 + -0xb8) = lVar24;
            *(undefined8 *)(unaff_x29 + -0xb0) = uVar42;
            *(undefined8 *)(unaff_x29 + -0xa8) = uVar43;
            *(long *)(unaff_x29 + -0xa0) = lVar25;
            *(undefined8 *)(unaff_x29 + -0x98) = uVar36;
            *(undefined4 *)(unaff_x29 + -0x78) = uVar20;
            *(undefined4 *)(unaff_x29 + -0x74) = uVar8;
            (**(code **)(puVar48 + 0x20))(puVar7,unaff_x29 + -0xc0);
            uVar33 = extraout_x12_03;
          }
        }
      }
      lVar29 = *(long *)(unaff_x19 + 0xd8);
      uVar21 = 1;
      uVar13 = 0;
      puVar48 = &UNK_10b205a90;
      if (lVar29 != 0) {
        uVar33 = *(undefined8 *)(unaff_x19 + 0xd0);
        uVar21 = _malloc(lVar29);
        if (uVar21 == 0) {
          FUN_107c03c64(1,lVar29);
          goto LAB_10075ae84;
        }
        _memcpy(uVar21,uVar33,lVar29);
        uVar13 = uVar21;
        puVar48 = &__ZN5bytes5bytes21PROMOTABLE_ODD_VTABLE17h3bbe6c2b6e01dcc1E;
        uVar33 = extraout_x12_13;
        if ((uVar21 & 1) == 0) {
          uVar13 = uVar21 | 1;
          puVar48 = &__ZN5bytes5bytes22PROMOTABLE_EVEN_VTABLE17ha50ac4583b900c48E;
        }
      }
      *(undefined1 *)(unaff_x19 + 0x1d5) = 0;
      lVar39 = *(long *)(unaff_x19 + 0x80);
      lVar38 = *(long *)(unaff_x19 + 0x78);
      lVar24 = *(long *)(unaff_x19 + 0x88);
      in_stack_000001d8 = *(long *)(unaff_x19 + 0x1b4);
      in_stack_000001d0 = *(long *)(unaff_x19 + 0x1ac);
      in_stack_000001e0 = *(undefined4 *)(unaff_x19 + 0x1bc);
      puVar26 = *(undefined8 **)(unaff_x19 + 0x70);
      plVar47 = (long *)*puVar26;
      lVar25 = *plVar47;
      *plVar47 = lVar25 + 1;
      if (lVar25 < 0) goto LAB_10075ae84;
      plVar35 = (long *)puVar26[1];
      if (plVar35 != (long *)0x0) {
        lVar25 = *plVar35;
        *plVar35 = lVar25 + 1;
        if (lVar25 < 0) goto LAB_10075ae84;
        uVar33 = puVar26[2];
      }
      unaff_x22[1] = lVar39;
      *unaff_x22 = lVar38;
      unaff_x22[2] = lVar24;
      unaff_x22[3] = (long)puVar48;
      unaff_x22[4] = uVar21;
      unaff_x22[5] = lVar29;
      unaff_x22[6] = uVar13;
      unaff_x22[8] = in_stack_000001d8;
      unaff_x22[7] = in_stack_000001d0;
      *(undefined4 *)(unaff_x22 + 9) = in_stack_000001e0;
      *(undefined1 *)(unaff_x19 + 0x22c) = 1;
      *(long **)(unaff_x19 + 0x230) = plVar47;
      *(long **)(unaff_x19 + 0x238) = plVar35;
      *(undefined8 *)(unaff_x19 + 0x240) = uVar33;
      *(undefined1 *)(unaff_x19 + 0xc70) = 0;
      FUN_100b1047c(unaff_x29 + -0xc0,unaff_x19 + 0x1e0,in_stack_00000078);
      uVar13 = *(ulong *)(unaff_x29 + -0xc0);
      if (uVar13 == 0x8000000000000001) {
        *in_stack_00000058 = 5;
        uVar17 = 4;
        goto LAB_10075acb4;
      }
      uVar36 = *(undefined8 *)(unaff_x29 + -0xb8);
      uVar42 = *(undefined8 *)(unaff_x29 + -0xa8);
      plVar47 = *(long **)(unaff_x29 + -0xb0);
      uVar44 = *(undefined8 *)(unaff_x29 + -0x98);
      uVar43 = *(undefined8 *)(unaff_x29 + -0xa0);
      uVar33 = *(undefined8 *)(unaff_x29 + -0x90);
      FUN_100d663b4(unaff_x19 + 0x1e0);
      if (uVar13 != 0x8000000000000000) {
        in_stack_00000050 = unaff_x19 + 0x1ac;
        uVar21 = (ulong)plVar47 >> 8;
        *(ulong *)(unaff_x19 + 0x1e0) = uVar13;
        *(undefined8 *)(unaff_x19 + 0x1e8) = uVar36;
        *(char *)(unaff_x19 + 0x1f0) = (char)plVar47;
        *(char *)((long)in_stack_00000068 + 0x95) = (char)((ulong)plVar47 >> 0x38);
        *(short *)((long)in_stack_00000068 + 0x93) = (short)((ulong)plVar47 >> 0x28);
        *(int *)((long)in_stack_00000068 + 0x8f) = (int)((ulong)plVar47 >> 8);
        *(undefined8 *)(unaff_x19 + 0x200) = uVar43;
        *(undefined8 *)(unaff_x19 + 0x1f8) = uVar42;
        *(undefined8 *)((long)in_stack_00000068 + 0xae) = uVar33;
        *(undefined8 *)((long)in_stack_00000068 + 0xa6) = uVar44;
        *(undefined2 *)(unaff_x19 + 0x1d8) = 0;
        *(undefined1 *)(unaff_x19 + 0x1d5) = 1;
        *(undefined8 *)(unaff_x19 + 0x80) = *(undefined8 *)(unaff_x19 + 0x1e8);
        *(undefined8 *)(unaff_x19 + 0x78) = *(undefined8 *)(unaff_x19 + 0x1e0);
        *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x19 + 0x1f0);
        *(undefined8 *)(unaff_x19 + 0x470) = uVar43;
        *(undefined8 *)(unaff_x19 + 0x468) = uVar42;
        *(undefined8 *)(unaff_x19 + 0x480) = *(undefined8 *)(unaff_x19 + 0x210);
        *(undefined8 *)(unaff_x19 + 0x478) = *(undefined8 *)(unaff_x19 + 0x208);
        in_stack_00000048 = uVar36;
        if (*(long *)(unaff_x19 + 0x468) == 0) {
          if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
              ((bRam000000010b6397d8 - 1 < 2 ||
               ((bRam000000010b6397d8 != 0 &&
                (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                    (&
                                     __ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5f2ecd6d6a82415fE
                                    ), cVar10 != '\0')))))) &&
             (uVar32 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (
                                 ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5f2ecd6d6a82415fE
                                 ),
             lVar29 = 
             ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5f2ecd6d6a82415fE
             , (uVar32 & 1) != 0)) {
            lVar25 = ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5f2ecd6d6a82415fE
                     + 0x30;
            in_stack_00000388 = &stack0x00000410;
            in_stack_00000380 = s_block_request__north__>_south_____108ac64c0;
            *(undefined8 *)(unaff_x29 + -0xc0) = 1;
            *(undefined1 **)(unaff_x29 + -0xb8) = &stack0x00000510;
            *(undefined8 *)(unaff_x29 + -0xb0) = 1;
            *(long *)(unaff_x29 + -0xa8) = lVar25;
            __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar29,unaff_x29 + -0xc0);
            lVar29 = 
            ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5f2ecd6d6a82415fE
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              pcVar46 = *(char **)(
                                  ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5f2ecd6d6a82415fE
                                  + 0x20);
              plVar47 = *(long **)(
                                  ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5f2ecd6d6a82415fE
                                  + 0x28);
              puVar45 = (ulong *)0x5;
              puVar48 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar48 = &UNK_10b3c24c8;
              }
              puVar7 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar7 = &UNK_109adfc03;
              }
              iVar12 = (**(code **)(puVar48 + 0x18))(puVar7,&stack0x000002d0);
              if (iVar12 != 0) {
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar29,puVar7,puVar48,&stack0x000002d0,unaff_x29 + -0xc0);
              }
            }
          }
          else {
            lVar29 = 
            ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5f2ecd6d6a82415fE
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              pcVar14 = *(char **)(
                                  ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5f2ecd6d6a82415fE
                                  + 0x20);
              plVar35 = *(long **)(
                                  ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5f2ecd6d6a82415fE
                                  + 0x28);
              puVar48 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar48 = &UNK_10b3c24c8;
              }
              puVar7 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar7 = &UNK_109adfc03;
              }
              iVar12 = (**(code **)(puVar48 + 0x18))(puVar7,&stack0x00000250);
              if (iVar12 != 0) {
                lVar25 = ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5f2ecd6d6a82415fE
                         + 0x30;
                in_stack_00000388 = &stack0x00000410;
                in_stack_00000380 = s_block_request__north__>_south_____108ac64c0;
                *(undefined8 *)(unaff_x29 + -0xc0) = 1;
                *(undefined1 **)(unaff_x29 + -0xb8) = &stack0x00000510;
                *(undefined8 *)(unaff_x29 + -0xb0) = 1;
                *(long *)(unaff_x29 + -0xa8) = lVar25;
                puVar45 = (ulong *)0x5;
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar29,puVar7,puVar48,&stack0x000002d0,unaff_x29 + -0xc0);
                pcVar46 = pcVar14;
                plVar47 = plVar35;
              }
              unaff_x26 = (undefined *)((ulong)unaff_x26 & 0xffffffff);
            }
          }
        }
        else {
          *(undefined4 *)(unaff_x29 + -0x9c) = *(undefined4 *)(unaff_x19 + 0x1bc);
          pcVar46 = *(char **)(unaff_x29 + -0xb8);
          puVar45 = *(ulong **)(unaff_x29 + -0xc0);
          uVar36 = *(undefined8 *)(unaff_x29 + -0xa8);
          plVar47 = *(long **)(unaff_x29 + -0xb0);
          uVar33 = *(undefined8 *)(unaff_x29 + -0xa0);
          *(undefined8 *)(unaff_x19 + 0x220) = *(undefined8 *)(unaff_x19 + 0x200);
          *(undefined8 *)(unaff_x19 + 0x218) = *(undefined8 *)(unaff_x19 + 0x1f8);
          *(undefined8 *)(unaff_x19 + 0x230) = *(undefined8 *)(unaff_x19 + 0x210);
          *(undefined8 *)(unaff_x19 + 0x228) = *(undefined8 *)(unaff_x19 + 0x208);
          *(long *)(unaff_x19 + 0x260) = unaff_x19 + 0x90;
          *(char **)(unaff_x19 + 0x270) = pcVar46;
          *(ulong **)(unaff_x19 + 0x268) = puVar45;
          *(undefined8 *)(unaff_x19 + 0x280) = uVar36;
          *(long **)(unaff_x19 + 0x278) = plVar47;
          *(undefined8 *)(unaff_x19 + 0x288) = uVar33;
          *(undefined1 *)(unaff_x19 + 0x290) = 0;
          FUN_1006fa9d0(unaff_x29 + -0xc0,unaff_x19 + 0x218,in_stack_00000078);
          if (*(int *)(unaff_x29 + -0xc0) == 1) {
            uVar17 = 5;
            *in_stack_00000058 = 5;
            goto LAB_10075acb4;
          }
          puVar26 = *(undefined8 **)(unaff_x29 + -0xb8);
          puVar48 = *(undefined **)(unaff_x29 + -0xb0);
          FUN_100ccccd0(unaff_x19 + 0x218);
          in_stack_00000018 = uVar13;
          if (puVar26 != (undefined8 *)0x0) goto LAB_10075ac38;
        }
        uStack0000000000000034 = 0;
        *(undefined2 *)(unaff_x19 + 0x1d8) = 0;
        unaff_x28 = in_stack_00000068;
        in_stack_00000018 = uVar21;
        in_stack_00000050 = uVar13;
        goto LAB_100756d30;
      }
      *(undefined8 *)(unaff_x29 + -0xc0) = uVar36;
      puVar26 = (undefined8 *)_malloc(8);
      if (puVar26 == (undefined8 *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
        goto LAB_10075ae84;
      }
      *puVar26 = uVar36;
      puVar48 = &UNK_10b212e38;
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
          ((bRam000000010b639850 - 1 < 2 ||
           ((bRam000000010b639850 != 0 &&
            (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h386da8feb04277c1E
                                ), cVar10 != '\0')))))) &&
         (iVar12 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h386da8feb04277c1E
                             ),
         lVar29 = 
         ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h386da8feb04277c1E
         , iVar12 != 0)) {
        *(long *)(unaff_x29 + -0xc0) = unaff_x19 + 0x1ac;
        *(undefined **)(unaff_x29 + -0xb8) =
             &
             __ZN87__LT_rama_net__address__socket_address__SocketAddress_u20_as_u20_core__fmt__Display_GT_3fmt17hb17146d198026cb6E
        ;
        *(undefined1 **)(unaff_x29 + -0xb0) = &stack0x000004a8;
        *(undefined **)(unaff_x29 + -0xa8) = &DAT_100c670d8;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar29,&stack0x00000410);
        lVar29 = 
        ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h386da8feb04277c1E
        ;
        in_stack_00000370 = in_stack_000004d0;
        in_stack_00000378 = in_stack_000004d8;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          puVar7 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar7 = &UNK_10b3c24c8;
          }
          puVar6 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar6 = &UNK_109adfc03;
          }
          iVar12 = (**(code **)(puVar7 + 0x18))(puVar6,&stack0x00000380);
          if (iVar12 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar29,puVar6,puVar7,&stack0x00000380,&stack0x00000410);
          }
        }
      }
      else {
        lVar29 = 
        ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h386da8feb04277c1E
        ;
        in_stack_00000370 = in_stack_000004d0;
        in_stack_00000378 = in_stack_000004d8;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uVar33 = *(undefined8 *)
                    (
                    ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h386da8feb04277c1E
                    + 0x20);
          uVar36 = *(undefined8 *)
                    (
                    ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h386da8feb04277c1E
                    + 0x28);
          puVar7 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar7 = &UNK_10b3c24c8;
          }
          puVar6 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar6 = &UNK_109adfc03;
          }
          iVar12 = (**(code **)(puVar7 + 0x18))(puVar6,&stack0x00000510);
          if (iVar12 != 0) {
            lVar25 = *(long *)(lVar29 + 0x60);
            uVar43 = *(undefined8 *)(lVar29 + 0x68);
            lVar24 = *(long *)(lVar29 + 0x50);
            uVar44 = *(undefined8 *)(lVar29 + 0x58);
            uVar42 = 1;
            if (lVar24 == 0) {
              uVar42 = 2;
            }
            uVar20 = *(undefined4 *)(lVar29 + 8);
            uVar8 = *(undefined4 *)(lVar29 + 0xc);
            uVar5 = 1;
            if (lVar25 == 0) {
              uVar5 = 2;
            }
            *(undefined8 *)(unaff_x29 + -0x88) = uVar33;
            *(undefined8 *)(unaff_x29 + -0x90) = 4;
            *(undefined8 *)(unaff_x29 + -0x80) = uVar36;
            *(char **)(unaff_x29 + -0x70) = s__108b39f4f;
            *(undefined1 **)(unaff_x29 + -0x68) = &stack0x00000458;
            *(undefined8 *)(unaff_x29 + -0xc0) = uVar42;
            *(long *)(unaff_x29 + -0xb8) = lVar24;
            *(undefined8 *)(unaff_x29 + -0xb0) = uVar44;
            *(undefined8 *)(unaff_x29 + -0xa8) = uVar5;
            *(long *)(unaff_x29 + -0xa0) = lVar25;
            *(undefined8 *)(unaff_x29 + -0x98) = uVar43;
            *(undefined4 *)(unaff_x29 + -0x78) = uVar20;
            *(undefined4 *)(unaff_x29 + -0x74) = uVar8;
            (**(code **)(puVar7 + 0x20))(puVar6,unaff_x29 + -0xc0);
          }
        }
      }
LAB_10075ac38:
      *(undefined2 *)(unaff_x19 + 0x1d8) = 0;
      in_stack_00000010 = in_stack_00000018;
      in_stack_00000038 = in_stack_00000050;
      in_stack_00000040 = in_stack_00000048;
    }
    else {
      lVar29 = *unaff_x28;
      *(long *)(unaff_x19 + 0x1c8) = unaff_x28[1];
      *(long *)(unaff_x19 + 0x1c0) = lVar29;
      *(int *)(unaff_x19 + 0x1d0) = (int)unaff_x28[2];
      uVar33 = extraout_x12;
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
         (((bRam000000010b639808 - 1 < 2 ||
           ((bRam000000010b639808 != 0 &&
            (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdc66eaf085c52fa5E
                                ), uVar33 = extraout_x12_14, cVar10 != '\0')))) &&
          (uVar13 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (
                              ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdc66eaf085c52fa5E
                              ),
          lVar29 = 
          ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdc66eaf085c52fa5E
          , uVar33 = extraout_x12_04, (uVar13 & 1) != 0)))) {
        lVar25 = ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdc66eaf085c52fa5E
                 + 0x30;
        in_stack_00000388 = &stack0x00000410;
        in_stack_00000380 = s_relay_request__south____>_north_108ac64f7;
        *(undefined8 *)(unaff_x29 + -0xc0) = 1;
        *(undefined1 **)(unaff_x29 + -0xb8) = &stack0x00000510;
        *(undefined8 *)(unaff_x29 + -0xb0) = 1;
        *(long *)(unaff_x29 + -0xa8) = lVar25;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar29,unaff_x29 + -0xc0);
        lVar29 = 
        ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdc66eaf085c52fa5E
        ;
        uVar33 = extraout_x12_05;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pcVar46 = *(char **)(
                              ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdc66eaf085c52fa5E
                              + 0x20);
          puVar45 = (ulong *)0x5;
          puVar48 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar48 = &UNK_10b3c24c8;
          }
          puVar7 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar7 = &UNK_109adfc03;
          }
          iVar12 = (**(code **)(puVar48 + 0x18))(puVar7,&stack0x000002d0);
          uVar33 = extraout_x12_06;
          if (iVar12 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar29,puVar7,puVar48,&stack0x000002d0,unaff_x29 + -0xc0);
            uVar33 = extraout_x12_07;
          }
        }
      }
      else {
        lVar29 = 
        ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdc66eaf085c52fa5E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uVar36 = *(undefined8 *)
                    (
                    ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdc66eaf085c52fa5E
                    + 0x20);
          uVar42 = *(undefined8 *)
                    (
                    ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdc66eaf085c52fa5E
                    + 0x28);
          puVar48 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar48 = &UNK_10b3c24c8;
          }
          puVar7 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar7 = &UNK_109adfc03;
          }
          iVar12 = (**(code **)(puVar48 + 0x18))(puVar7,&stack0x00000268);
          uVar33 = extraout_x12_00;
          if (iVar12 != 0) {
            pcVar50 = s_relay_request__south____>_north_108ac64f7;
            pcVar46 = &stack0x000003e0;
            puVar45 = (ulong *)0x1;
            *(undefined8 *)(unaff_x29 + -0x88) = uVar36;
            *(undefined8 *)(unaff_x29 + -0x90) = 5;
            *(undefined8 *)(unaff_x29 + -0x80) = uVar42;
            lVar25 = *(long *)(lVar29 + 0x60);
            uVar36 = *(undefined8 *)(lVar29 + 0x68);
            lVar24 = *(long *)(lVar29 + 0x50);
            uVar42 = *(undefined8 *)(lVar29 + 0x58);
            uVar33 = 1;
            if (lVar24 == 0) {
              uVar33 = 2;
            }
            uVar20 = *(undefined4 *)(lVar29 + 8);
            uVar8 = *(undefined4 *)(lVar29 + 0xc);
            in_stack_00000380 = &stack0x000002d0;
            in_stack_00000388 = (undefined *)CONCAT71(uVar49,1);
            uVar43 = 1;
            if (lVar25 == 0) {
              uVar43 = 2;
            }
            *(char **)(unaff_x29 + -0x70) = s__108b39f4f;
            *(undefined1 **)(unaff_x29 + -0x68) = &stack0x00000410;
            *(undefined8 *)(unaff_x29 + -0xc0) = uVar33;
            *(long *)(unaff_x29 + -0xb8) = lVar24;
            *(undefined8 *)(unaff_x29 + -0xb0) = uVar42;
            *(undefined8 *)(unaff_x29 + -0xa8) = uVar43;
            *(long *)(unaff_x29 + -0xa0) = lVar25;
            *(undefined8 *)(unaff_x29 + -0x98) = uVar36;
            *(undefined4 *)(unaff_x29 + -0x78) = uVar20;
            *(undefined4 *)(unaff_x29 + -0x74) = uVar8;
            (**(code **)(puVar48 + 0x20))(puVar7,unaff_x29 + -0xc0);
            uVar33 = extraout_x12_01;
          }
        }
      }
      lVar29 = *(long *)(unaff_x19 + 0xf8);
      uVar21 = 1;
      uVar13 = 0;
      puVar48 = &UNK_10b205a90;
      if (lVar29 != 0) {
        uVar33 = *(undefined8 *)(unaff_x19 + 0xf0);
        uVar21 = _malloc(lVar29);
        if (uVar21 == 0) {
          FUN_107c03c64(1,lVar29);
          goto LAB_10075ae84;
        }
        _memcpy(uVar21,uVar33,lVar29);
        uVar13 = uVar21;
        puVar48 = &__ZN5bytes5bytes21PROMOTABLE_ODD_VTABLE17h3bbe6c2b6e01dcc1E;
        uVar33 = extraout_x12_08;
        if ((uVar21 & 1) == 0) {
          uVar13 = uVar21 | 1;
          puVar48 = &__ZN5bytes5bytes22PROMOTABLE_EVEN_VTABLE17ha50ac4583b900c48E;
        }
      }
      *(undefined1 *)(unaff_x19 + 0x1d5) = 0;
      lVar40 = *(long *)(unaff_x19 + 0x80);
      lVar38 = *(long *)(unaff_x19 + 0x78);
      lVar24 = *(long *)(unaff_x19 + 0x88);
      lVar41 = *(long *)(unaff_x19 + 0x1c8);
      lVar39 = *(long *)(unaff_x19 + 0x1c0);
      uVar20 = *(undefined4 *)(unaff_x19 + 0x1d0);
      puVar26 = *(undefined8 **)(unaff_x19 + 0x70);
      plVar47 = (long *)*puVar26;
      lVar25 = *plVar47;
      *plVar47 = lVar25 + 1;
      if (lVar25 < 0) goto LAB_10075ae84;
      plVar35 = (long *)puVar26[1];
      if (plVar35 != (long *)0x0) {
        lVar25 = *plVar35;
        *plVar35 = lVar25 + 1;
        if (lVar25 < 0) goto LAB_10075ae84;
        uVar33 = puVar26[2];
      }
      unaff_x22[1] = lVar40;
      *unaff_x22 = lVar38;
      unaff_x22[2] = lVar24;
      unaff_x22[3] = (long)puVar48;
      unaff_x22[4] = uVar21;
      unaff_x22[5] = lVar29;
      unaff_x22[6] = uVar13;
      unaff_x22[8] = lVar41;
      unaff_x22[7] = lVar39;
      *(undefined4 *)(unaff_x22 + 9) = uVar20;
      *(undefined1 *)(unaff_x19 + 0x22c) = 0;
      *(long **)(unaff_x19 + 0x230) = plVar47;
      *(long **)(unaff_x19 + 0x238) = plVar35;
      *(undefined8 *)(unaff_x19 + 0x240) = uVar33;
      *(undefined1 *)(unaff_x19 + 0xc70) = 0;
      FUN_100b1047c(unaff_x29 + -0xc0,unaff_x19 + 0x1e0,in_stack_00000078);
      uVar13 = *(ulong *)(unaff_x29 + -0xc0);
      if (uVar13 == 0x8000000000000001) {
        *in_stack_00000058 = 5;
        uVar17 = 6;
        goto LAB_10075acb4;
      }
      uVar36 = *(undefined8 *)(unaff_x29 + -0xb8);
      uVar42 = *(undefined8 *)(unaff_x29 + -0xa8);
      plVar47 = *(long **)(unaff_x29 + -0xb0);
      uVar44 = *(undefined8 *)(unaff_x29 + -0x98);
      uVar43 = *(undefined8 *)(unaff_x29 + -0xa0);
      uVar33 = *(undefined8 *)(unaff_x29 + -0x90);
      FUN_100d663b4(unaff_x19 + 0x1e0);
      if (uVar13 != 0x8000000000000000) {
        in_stack_00000038 = unaff_x19 + 0x1c0;
        in_stack_00000010 = (ulong)plVar47 >> 8;
        *(ulong *)(unaff_x19 + 0x1e0) = uVar13;
        *(undefined8 *)(unaff_x19 + 0x1e8) = uVar36;
        *(char *)(unaff_x19 + 0x1f0) = (char)plVar47;
        *(char *)((long)in_stack_00000068 + 0x95) = (char)((ulong)plVar47 >> 0x38);
        *(short *)((long)in_stack_00000068 + 0x93) = (short)((ulong)plVar47 >> 0x28);
        *(int *)((long)in_stack_00000068 + 0x8f) = (int)((ulong)plVar47 >> 8);
        *(undefined8 *)(unaff_x19 + 0x200) = uVar43;
        *(undefined8 *)(unaff_x19 + 0x1f8) = uVar42;
        *(undefined8 *)((long)in_stack_00000068 + 0xae) = uVar33;
        *(undefined8 *)((long)in_stack_00000068 + 0xa6) = uVar44;
        *(undefined1 *)(unaff_x19 + 0x1d7) = 0;
        *(undefined2 *)(unaff_x19 + 0x1d5) = 1;
        *(undefined8 *)(unaff_x19 + 0x80) = *(undefined8 *)(unaff_x19 + 0x1e8);
        *(undefined8 *)(unaff_x19 + 0x78) = *(undefined8 *)(unaff_x19 + 0x1e0);
        *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x19 + 0x1f0);
        *(undefined8 *)(unaff_x19 + 0x470) = uVar43;
        *(undefined8 *)(unaff_x19 + 0x468) = uVar42;
        *(undefined8 *)(unaff_x19 + 0x480) = *(undefined8 *)(unaff_x19 + 0x210);
        *(undefined8 *)(unaff_x19 + 0x478) = *(undefined8 *)(unaff_x19 + 0x208);
        in_stack_00000040 = uVar36;
        if (*(long *)(unaff_x19 + 0x468) == 0) {
          if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
              ((bRam000000010b6397f0 - 1 < 2 ||
               ((bRam000000010b6397f0 != 0 &&
                (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                    (&
                                     __ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb479d2b0d1a31f81E
                                    ), cVar10 != '\0')))))) &&
             (uVar21 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (
                                 ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb479d2b0d1a31f81E
                                 ),
             lVar29 = 
             ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb479d2b0d1a31f81E
             , (uVar21 & 1) != 0)) {
            lVar25 = ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb479d2b0d1a31f81E
                     + 0x30;
            in_stack_00000388 = &stack0x00000410;
            in_stack_00000380 = s_block_request__north__>_south_____108ac64c0;
            *(undefined8 *)(unaff_x29 + -0xc0) = 1;
            *(undefined1 **)(unaff_x29 + -0xb8) = &stack0x00000510;
            *(undefined8 *)(unaff_x29 + -0xb0) = 1;
            *(long *)(unaff_x29 + -0xa8) = lVar25;
            __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar29,unaff_x29 + -0xc0);
            lVar29 = 
            ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb479d2b0d1a31f81E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              pcVar46 = *(char **)(
                                  ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb479d2b0d1a31f81E
                                  + 0x20);
              plVar47 = *(long **)(
                                  ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb479d2b0d1a31f81E
                                  + 0x28);
              puVar45 = (ulong *)0x5;
              puVar48 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar48 = &UNK_10b3c24c8;
              }
              puVar7 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar7 = &UNK_109adfc03;
              }
              iVar12 = (**(code **)(puVar48 + 0x18))(puVar7,&stack0x000002d0);
              if (iVar12 != 0) {
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar29,puVar7,puVar48,&stack0x000002d0,unaff_x29 + -0xc0);
              }
            }
          }
          else {
            lVar29 = 
            ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb479d2b0d1a31f81E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              pcVar14 = *(char **)(
                                  ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb479d2b0d1a31f81E
                                  + 0x20);
              plVar35 = *(long **)(
                                  ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb479d2b0d1a31f81E
                                  + 0x28);
              puVar48 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar48 = &UNK_10b3c24c8;
              }
              puVar7 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar7 = &UNK_109adfc03;
              }
              iVar12 = (**(code **)(puVar48 + 0x18))(puVar7,&stack0x00000340);
              if (iVar12 != 0) {
                lVar25 = ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb479d2b0d1a31f81E
                         + 0x30;
                in_stack_00000388 = &stack0x00000410;
                in_stack_00000380 = s_block_request__north__>_south_____108ac64c0;
                *(undefined8 *)(unaff_x29 + -0xc0) = 1;
                *(undefined1 **)(unaff_x29 + -0xb8) = &stack0x00000510;
                *(undefined8 *)(unaff_x29 + -0xb0) = 1;
                *(long *)(unaff_x29 + -0xa8) = lVar25;
                puVar45 = (ulong *)0x5;
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar29,puVar7,puVar48,&stack0x000002d0,unaff_x29 + -0xc0);
                pcVar46 = pcVar14;
                plVar47 = plVar35;
              }
              unaff_x26 = (undefined *)((ulong)unaff_x26 & 0xffffffff);
            }
          }
        }
        else {
          *(undefined4 *)(unaff_x29 + -0x9c) = *(undefined4 *)(unaff_x19 + 0x1d0);
          pcVar46 = *(char **)(unaff_x29 + -0xb8);
          puVar45 = *(ulong **)(unaff_x29 + -0xc0);
          uVar36 = *(undefined8 *)(unaff_x29 + -0xa8);
          plVar47 = *(long **)(unaff_x29 + -0xb0);
          uVar33 = *(undefined8 *)(unaff_x29 + -0xa0);
          *(undefined8 *)(unaff_x19 + 0x220) = *(undefined8 *)(unaff_x19 + 0x200);
          *(undefined8 *)(unaff_x19 + 0x218) = *(undefined8 *)(unaff_x19 + 0x1f8);
          *(undefined8 *)(unaff_x19 + 0x230) = *(undefined8 *)(unaff_x19 + 0x210);
          *(undefined8 *)(unaff_x19 + 0x228) = *(undefined8 *)(unaff_x19 + 0x208);
          *(long *)(unaff_x19 + 0x260) = unaff_x19 + 0x90;
          *(char **)(unaff_x19 + 0x270) = pcVar46;
          *(ulong **)(unaff_x19 + 0x268) = puVar45;
          *(undefined8 *)(unaff_x19 + 0x280) = uVar36;
          *(long **)(unaff_x19 + 0x278) = plVar47;
          *(undefined8 *)(unaff_x19 + 0x288) = uVar33;
          *(undefined1 *)(unaff_x19 + 0x290) = 0;
          FUN_1006fa9d0(unaff_x29 + -0xc0,unaff_x19 + 0x218,in_stack_00000078);
          if ((*(uint *)(unaff_x29 + -0xc0) & 1) != 0) {
            *in_stack_00000058 = 5;
            uVar17 = 7;
            goto LAB_10075acb4;
          }
          puVar26 = *(undefined8 **)(unaff_x29 + -0xb8);
          puVar48 = *(undefined **)(unaff_x29 + -0xb0);
          FUN_100ccccd0(unaff_x19 + 0x218);
          if (puVar26 != (undefined8 *)0x0) {
            *(undefined2 *)(unaff_x19 + 0x1d6) = 0;
            in_stack_00000010 = uVar13;
            goto LAB_10075ac60;
          }
        }
        *(undefined2 *)(unaff_x19 + 0x1d6) = 0;
        uStack0000000000000034 = 1;
        unaff_x28 = in_stack_00000068;
        in_stack_00000038 = uVar13;
        goto LAB_100756d30;
      }
      *(undefined8 *)(unaff_x29 + -0xc0) = uVar36;
      puVar26 = (undefined8 *)_malloc(8);
      if (puVar26 == (undefined8 *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
        goto LAB_10075ae84;
      }
      *puVar26 = uVar36;
      puVar48 = &UNK_10b212e38;
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
          ((bRam000000010b639838 - 1 < 2 ||
           ((bRam000000010b639838 != 0 &&
            (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2522ce746188c7ecE
                                ), cVar10 != '\0')))))) &&
         (iVar12 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2522ce746188c7ecE
                             ),
         lVar29 = 
         ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2522ce746188c7ecE
         , iVar12 != 0)) {
        *(long *)(unaff_x29 + -0xc0) = unaff_x19 + 0x1c0;
        *(undefined **)(unaff_x29 + -0xb8) =
             &
             __ZN87__LT_rama_net__address__socket_address__SocketAddress_u20_as_u20_core__fmt__Display_GT_3fmt17hb17146d198026cb6E
        ;
        *(undefined1 **)(unaff_x29 + -0xb0) = &stack0x000004a8;
        *(undefined **)(unaff_x29 + -0xa8) = &DAT_100c670d8;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar29,&stack0x00000410);
        lVar29 = 
        ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2522ce746188c7ecE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          puVar7 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar7 = &UNK_10b3c24c8;
          }
          puVar6 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar6 = &UNK_109adfc03;
          }
          iVar12 = (**(code **)(puVar7 + 0x18))(puVar6,&stack0x00000380);
          if (iVar12 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar29,puVar6,puVar7,&stack0x00000380,&stack0x00000410);
          }
        }
      }
      else {
        lVar29 = 
        ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2522ce746188c7ecE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uVar33 = *(undefined8 *)
                    (
                    ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2522ce746188c7ecE
                    + 0x20);
          uVar36 = *(undefined8 *)
                    (
                    ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2522ce746188c7ecE
                    + 0x28);
          puVar7 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar7 = &UNK_10b3c24c8;
          }
          puVar6 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar6 = &UNK_109adfc03;
          }
          iVar12 = (**(code **)(puVar7 + 0x18))(puVar6,&stack0x00000510);
          if (iVar12 != 0) {
            lVar25 = *(long *)(lVar29 + 0x60);
            uVar43 = *(undefined8 *)(lVar29 + 0x68);
            lVar24 = *(long *)(lVar29 + 0x50);
            uVar44 = *(undefined8 *)(lVar29 + 0x58);
            uVar42 = 1;
            if (lVar24 == 0) {
              uVar42 = 2;
            }
            uVar20 = *(undefined4 *)(lVar29 + 8);
            uVar8 = *(undefined4 *)(lVar29 + 0xc);
            uVar5 = 1;
            if (lVar25 == 0) {
              uVar5 = 2;
            }
            *(undefined8 *)(unaff_x29 + -0x88) = uVar33;
            *(undefined8 *)(unaff_x29 + -0x90) = 4;
            *(undefined8 *)(unaff_x29 + -0x80) = uVar36;
            *(char **)(unaff_x29 + -0x70) = s__108b39f4f;
            *(undefined1 **)(unaff_x29 + -0x68) = &stack0x00000458;
            *(undefined8 *)(unaff_x29 + -0xc0) = uVar42;
            *(long *)(unaff_x29 + -0xb8) = lVar24;
            *(undefined8 *)(unaff_x29 + -0xb0) = uVar44;
            *(undefined8 *)(unaff_x29 + -0xa8) = uVar5;
            *(long *)(unaff_x29 + -0xa0) = lVar25;
            *(undefined8 *)(unaff_x29 + -0x98) = uVar43;
            *(undefined4 *)(unaff_x29 + -0x78) = uVar20;
            *(undefined4 *)(unaff_x29 + -0x74) = uVar8;
            (**(code **)(puVar7 + 0x20))(puVar6,unaff_x29 + -0xc0);
          }
        }
      }
      *(undefined2 *)(unaff_x19 + 0x1d6) = 0;
      in_stack_00000370 = in_stack_000004d0;
      in_stack_00000378 = in_stack_000004d8;
    }
LAB_10075ac60:
    FUN_100e25544(unaff_x19 + 0x90);
    if ((*(byte *)(unaff_x19 + 0x1d5) & 1) != 0) {
      func_0x000100e3c8d4(unaff_x19 + 0x78);
    }
    *(undefined1 *)(unaff_x19 + 0x1d5) = 0;
    *in_stack_00000058 = 3;
    in_stack_00000058[1] = in_stack_00000038;
    in_stack_00000058[2] = in_stack_00000040;
    *(undefined1 *)(in_stack_00000058 + 3) = 0;
    *(int *)((long)in_stack_00000058 + 0x19) = (int)in_stack_00000010;
    *(char *)((long)in_stack_00000058 + 0x1f) = (char)(in_stack_00000010 >> 0x30);
    *(short *)((long)in_stack_00000058 + 0x1d) = (short)(in_stack_00000010 >> 0x20);
    in_stack_00000058[5] = in_stack_00000378;
    in_stack_00000058[4] = in_stack_00000370;
    uVar17 = 1;
    in_stack_00000058[6] = puVar26;
    in_stack_00000058[7] = puVar48;
    goto LAB_10075acb4;
  }
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
     (((bRam000000010b639820 - 1 < 2 ||
       ((bRam000000010b639820 != 0 &&
        (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hde4873e1a32a0a4eE
                            ), cVar10 != '\0')))) &&
      (uVar13 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (
                          ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hde4873e1a32a0a4eE
                          ), (uVar13 & 1) != 0)))) {
    pcVar50 = 
    "ignore dropped packet: nothing to inspect or relay<skill>internal error: entered unreachable code: ToValues State::Tmp<environment_context></environment_context>"
    ;
    pcVar46 = &stack0x000003e0;
    puVar45 = (ulong *)0x1;
    plVar47 = (long *)0x1;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
              (___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hde4873e1a32a0a4eE
               ,&stack0x000002d0);
    lVar29 = 
    ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hde4873e1a32a0a4eE
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      uVar33 = *(undefined8 *)
                (
                ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hde4873e1a32a0a4eE
                + 0x20);
      uVar36 = *(undefined8 *)
                (
                ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hde4873e1a32a0a4eE
                + 0x28);
      puVar48 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar48 = &UNK_10b3c24c8;
      }
      puVar7 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar7 = &UNK_109adfc03;
      }
      iVar12 = (**(code **)(puVar48 + 0x18))(puVar7,&stack0x00000410);
      if (iVar12 != 0) {
        lVar25 = *(long *)(lVar29 + 0x60);
        uVar43 = *(undefined8 *)(lVar29 + 0x68);
        lVar24 = *(long *)(lVar29 + 0x50);
        uVar44 = *(undefined8 *)(lVar29 + 0x58);
        uVar42 = 1;
        if (lVar24 == 0) {
          uVar42 = 2;
        }
        uVar20 = *(undefined4 *)(lVar29 + 8);
        uVar8 = *(undefined4 *)(lVar29 + 0xc);
        in_stack_00000380 = &stack0x00000510;
        in_stack_00000388 = &DAT_1061c2098;
        uVar5 = 1;
        if (lVar25 == 0) {
          uVar5 = 2;
        }
        *(undefined8 *)(unaff_x29 + -0x88) = uVar33;
        *(undefined8 *)(unaff_x29 + -0x90) = 5;
        *(undefined8 *)(unaff_x29 + -0x80) = uVar36;
        *(char **)(unaff_x29 + -0x70) = s__108b39f4f;
        *(undefined1 **)(unaff_x29 + -0x68) = &stack0x00000380;
        *(undefined8 *)(unaff_x29 + -0xc0) = uVar42;
        *(long *)(unaff_x29 + -0xb8) = lVar24;
        *(undefined8 *)(unaff_x29 + -0xb0) = uVar44;
        *(undefined8 *)(unaff_x29 + -0xa8) = uVar5;
        *(long *)(unaff_x29 + -0xa0) = lVar25;
        *(undefined8 *)(unaff_x29 + -0x98) = uVar43;
        *(undefined4 *)(unaff_x29 + -0x78) = uVar20;
        *(undefined4 *)(unaff_x29 + -0x74) = uVar8;
        (**(code **)(puVar48 + 0x20))(puVar7,unaff_x29 + -0xc0);
      }
    }
LAB_100759888:
    uStack0000000000000034 = 2;
  }
  else {
    lVar29 = 
    ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hde4873e1a32a0a4eE
    ;
    uStack0000000000000034 = 2;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      uVar33 = *(undefined8 *)
                (
                ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hde4873e1a32a0a4eE
                + 0x20);
      uVar36 = *(undefined8 *)
                (
                ___ZN131__LT_rama_socks5__server__udp__inspect__AsyncUdpInspector_LT_S_GT__u20_as_u20_rama_socks5__server__udp__inspect__UdpPacketProxy_GT_17proxy_udp_packets28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hde4873e1a32a0a4eE
                + 0x28);
      puVar48 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar48 = &UNK_10b3c24c8;
      }
      puVar7 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar7 = &UNK_109adfc03;
      }
      iVar12 = (**(code **)(puVar48 + 0x18))(puVar7,&stack0x00000358);
      if (iVar12 != 0) {
        pcVar50 = &stack0x00000510;
        pcVar46 = &stack0x00000458;
        puVar45 = (ulong *)0x1;
        plVar47 = (long *)0x1;
        *(undefined8 *)(unaff_x29 + -0x88) = uVar33;
        *(undefined8 *)(unaff_x29 + -0x90) = 5;
        *(undefined8 *)(unaff_x29 + -0x80) = uVar36;
        lVar25 = *(long *)(lVar29 + 0x60);
        uVar36 = *(undefined8 *)(lVar29 + 0x68);
        lVar24 = *(long *)(lVar29 + 0x50);
        uVar42 = *(undefined8 *)(lVar29 + 0x58);
        uVar33 = 1;
        if (lVar24 == 0) {
          uVar33 = 2;
        }
        uVar20 = *(undefined4 *)(lVar29 + 8);
        uVar8 = *(undefined4 *)(lVar29 + 0xc);
        in_stack_00000380 = &stack0x000002d0;
        in_stack_00000388 = (undefined *)CONCAT71(uVar49,1);
        uVar43 = 1;
        if (lVar25 == 0) {
          uVar43 = 2;
        }
        *(char **)(unaff_x29 + -0x70) = s__108b39f4f;
        *(undefined1 **)(unaff_x29 + -0x68) = &stack0x00000410;
        *(undefined8 *)(unaff_x29 + -0xc0) = uVar33;
        *(long *)(unaff_x29 + -0xb8) = lVar24;
        *(undefined8 *)(unaff_x29 + -0xb0) = uVar42;
        *(undefined8 *)(unaff_x29 + -0xa8) = uVar43;
        *(long *)(unaff_x29 + -0xa0) = lVar25;
        *(undefined8 *)(unaff_x29 + -0x98) = uVar36;
        *(undefined4 *)(unaff_x29 + -0x78) = uVar20;
        *(undefined4 *)(unaff_x29 + -0x74) = uVar8;
        (**(code **)(puVar48 + 0x20))(puVar7,unaff_x29 + -0xc0);
      }
      goto LAB_100759888;
    }
  }
LAB_100756d30:
  *(long *)(unaff_x19 + 0x278) = unaff_x19 + 0x90;
  in_stack_00000088 = (undefined1 *)(unaff_x19 + 0x283);
  unaff_x22 = (long *)(unaff_x19 + 0x1e0);
  *(undefined1 *)(unaff_x19 + 0x283) = 0;
  puVar34 = (undefined2 *)&stack0x00000414;
  uStack0000000000000030 = SUB84(unaff_x26,0);
  *(undefined2 *)(unaff_x19 + 0x281) = 0;
  *(long *)(unaff_x19 + 0x240) = unaff_x19 + 0x90;
  *(undefined8 *)(unaff_x19 + 0xd8) = 0;
  lVar29 = *(long *)(unaff_x19 + 0x240);
  uVar32 = *(ulong *)(lVar29 + 0xa0);
  uVar21 = *(ulong *)(lVar29 + 0x48);
  uVar13 = uVar32 - uVar21;
  if (uVar32 < uVar21) {
LAB_100756d9c:
    *(ulong *)(lVar29 + 0x48) = uVar32;
    lVar29 = *(long *)(unaff_x19 + 0x240);
  }
  else if (uVar13 != 0) {
    if (*(long *)(lVar29 + 0x50) - uVar21 < uVar13) {
      __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(lVar29 + 0x40,uVar13,1);
      uVar21 = *(ulong *)(lVar29 + 0x48);
    }
    _bzero(*(long *)(lVar29 + 0x40) + uVar21,uVar13);
    goto LAB_100756d9c;
  }
  *(undefined8 *)(lVar29 + 0x68) = 0;
  lVar29 = *(long *)(unaff_x19 + 0x240);
  uVar32 = *(ulong *)(lVar29 + 0xa8);
  uVar21 = *(ulong *)(lVar29 + 0x68);
  uVar13 = uVar32 - uVar21;
  if (uVar32 < uVar21) {
LAB_100756df4:
    *(ulong *)(lVar29 + 0x68) = uVar32;
    lVar29 = *(long *)(unaff_x19 + 0x240);
  }
  else if (uVar13 != 0) {
    if (*(long *)(lVar29 + 0x70) - uVar21 < uVar13) {
      __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(lVar29 + 0x60,uVar13,1);
      uVar21 = *(ulong *)(lVar29 + 0x68);
    }
    _bzero(*(long *)(lVar29 + 0x60) + uVar21,uVar13);
    goto LAB_100756df4;
  }
  pbVar1 = (byte *)(unaff_x19 + 0x280);
  *(undefined1 *)(unaff_x19 + 0x280) = 0;
  uVar33 = *(undefined8 *)(lVar29 + 0x40);
  uVar42 = *(undefined8 *)(lVar29 + 0x48);
  uVar36 = *(undefined8 *)(lVar29 + 0x60);
  uVar43 = *(undefined8 *)(lVar29 + 0x68);
  lVar25 = unaff_x19 + 0x288;
  *(long *)(unaff_x19 + 0x288) = lVar29;
  *(undefined8 *)(unaff_x19 + 0x290) = uVar33;
  *(undefined8 *)(unaff_x19 + 0x298) = uVar42;
  *(undefined1 *)(unaff_x19 + 0x368) = 0;
  *(long *)(unaff_x19 + 0x370) = lVar29 + 0x20;
  *(undefined8 *)(unaff_x19 + 0x378) = uVar36;
  *(undefined8 *)(unaff_x19 + 0x380) = uVar43;
  *(undefined1 *)(unaff_x19 + 0x450) = 0;
  *(byte **)(unaff_x19 + 0x458) = pbVar1;
  *(long *)(unaff_x19 + 0x460) = lVar25;
  lVar29 = (*
           ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
           )();
  if (*(char *)(lVar29 + 0x48) != '\x01') {
    if (*(char *)(lVar29 + 0x48) == '\x02') {
      FUN_107c05e20(&UNK_10b4cce20);
      goto LAB_10075ae84;
    }
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE(lVar29,&DAT_100c35d48)
    ;
    *(undefined1 *)(lVar29 + 0x48) = 1;
  }
  if (*(char *)(lVar29 + 0x44) == '\x01' && *(char *)(lVar29 + 0x45) == '\0') {
    FUN_10610bbb4(*(undefined8 *)*in_stack_00000078,((undefined8 *)*in_stack_00000078)[1]);
LAB_100757d78:
    sVar19 = 3;
LAB_10075ab70:
    *in_stack_00000088 = (char)sVar19;
    *in_stack_00000058 = 5;
    uVar17 = 3;
LAB_10075acb4:
    *(undefined1 *)(unaff_x19 + 0x1d4) = uVar17;
    return;
  }
  if ((*(uint *)(lVar29 + 0x38) & 1) == 0) {
    uVar11 = FUN_1060fcce0();
    uVar13 = extraout_x1;
  }
  else {
    uVar11 = *(uint *)(lVar29 + 0x3c);
    uVar13 = (ulong)*(uint *)(lVar29 + 0x40);
  }
  uVar11 = uVar11 ^ uVar11 << 0x11;
  uVar15 = (uint)uVar13;
  uVar11 = (uint)(uVar13 >> 0x10) & 0xffff ^ uVar11 >> 7 ^ uVar15 ^ uVar11;
  *(undefined4 *)(lVar29 + 0x38) = 1;
  *(uint *)(lVar29 + 0x3c) = uVar15;
  *(uint *)(lVar29 + 0x40) = uVar11;
  bVar23 = *pbVar1;
  if (-1 < (int)(uVar11 + uVar15)) {
    uVar31 = (ushort)((bVar23 & 1) == 0);
    if ((bVar23 & 1) == 0) {
      FUN_100fc5a70(unaff_x29 + -0xc0,lVar25,in_stack_00000078);
      if (*(short *)(unaff_x29 + -0xb8) == 3) {
        bVar23 = *pbVar1;
        goto LAB_100756f5c;
      }
LAB_100756fa4:
      uVar33 = 0;
      in_stack_00000388 = *(undefined **)(unaff_x29 + -0xb8);
      in_stack_00000380 = *(char **)(unaff_x29 + -0xc0);
      in_stack_00000398 = *(undefined8 *)(unaff_x29 + -0xa8);
      in_stack_00000390 = *(undefined8 *)(unaff_x29 + -0xb0);
      in_stack_000003a0 = *(undefined8 *)(unaff_x29 + -0xa0);
      bVar23 = 1;
      goto LAB_100756fbc;
    }
LAB_100756f5c:
    if ((bVar23 >> 1 & 1) != 0) goto LAB_100756f98;
    FUN_100fc5a70(unaff_x29 + -0xc0,unaff_x19 + 0x370,in_stack_00000078);
    sVar19 = *(short *)(unaff_x29 + -0xb8);
    if (sVar19 != 3) goto LAB_100756f7c;
    goto LAB_10075ab70;
  }
  uVar31 = (ushort)((bVar23 & 2) == 0);
  if ((bVar23 >> 1 & 1) == 0) {
    FUN_100fc5a70(unaff_x29 + -0xc0,unaff_x19 + 0x370,in_stack_00000078);
    if (*(short *)(unaff_x29 + -0xb8) == 3) {
      bVar23 = *pbVar1;
      goto LAB_100756f0c;
    }
LAB_100756f7c:
    in_stack_00000388 = *(undefined **)(unaff_x29 + -0xb8);
    in_stack_00000380 = *(char **)(unaff_x29 + -0xc0);
    in_stack_00000398 = *(undefined8 *)(unaff_x29 + -0xa8);
    in_stack_00000390 = *(undefined8 *)(unaff_x29 + -0xb0);
    in_stack_000003a0 = *(undefined8 *)(unaff_x29 + -0xa0);
    bVar23 = 2;
    uVar33 = 1;
LAB_100756fbc:
    *pbVar1 = *pbVar1 | bVar23;
  }
  else {
LAB_100756f0c:
    if ((bVar23 & 1) == 0) {
      FUN_100fc5a70(unaff_x29 + -0xc0,lVar25,in_stack_00000078);
      if (*(short *)(unaff_x29 + -0xb8) == 3) {
        sVar19 = 3;
        goto LAB_10075ab70;
      }
      goto LAB_100756fa4;
    }
LAB_100756f98:
    uVar33 = 2;
    bVar3 = uVar31 != 0;
    uVar31 = 0;
    if (bVar3) goto LAB_100757d78;
  }
  *(undefined8 *)(unaff_x19 + 0x200) = uVar33;
  puVar2 = (ulong *)(unaff_x19 + 0x208);
  *(undefined8 *)(unaff_x19 + 0x228) = in_stack_000003a0;
  *(undefined **)(unaff_x19 + 0x210) = in_stack_00000388;
  *puVar2 = (ulong)in_stack_00000380;
  *(undefined8 *)(unaff_x19 + 0x220) = in_stack_00000398;
  *(undefined8 *)(unaff_x19 + 0x218) = in_stack_00000390;
  func_0x000100d6c378();
  in_stack_00000028 = puVar27;
  if (*(long *)(unaff_x19 + 0x200) != 0) {
    if (*(long *)(unaff_x19 + 0x200) != 1) {
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108ca2bde,0x6b,&UNK_10b21ecd8);
      goto LAB_10075ae84;
    }
    uVar13 = *puVar2;
    uVar36 = *(undefined8 *)(unaff_x19 + 0x220);
    uVar33 = *(undefined8 *)(unaff_x19 + 0x218);
    *(undefined8 *)(unaff_x29 + -0xb8) = *(undefined8 *)(unaff_x19 + 0x210);
    *(ulong *)(unaff_x29 + -0xc0) = uVar13;
    *(undefined8 *)(unaff_x29 + -0xa8) = uVar36;
    *(undefined8 *)(unaff_x29 + -0xb0) = uVar33;
    *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x19 + 0x228);
    if (*(short *)(unaff_x29 + -0xb8) != 2) goto LAB_10075732c;
    in_stack_00000478 = *(long **)(unaff_x29 + -0xc0);
    uVar11 = FUN_105af21e4(in_stack_00000478);
    if (((uVar11 & 0xff) < 0x29) && ((1L << ((ulong)(uVar11 & 0xff) & 0x3f) & 0x1080040220aU) != 0))
    {
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
          ((bRam000000010b639670 - 1 < 2 ||
           ((bRam000000010b639670 != 0 &&
            (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7a44784ada8ac39aE
                                ), unaff_x28 = in_stack_00000068, cVar10 != '\0')))))) &&
         (uVar13 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7a44784ada8ac39aE
                             ), (uVar13 & 1) != 0)) goto code_r0x0001007570a4;
      uVar33 = 
      ___ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7a44784ada8ac39aE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puVar48 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar48 = &UNK_10b3c24c8;
        }
        puVar7 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar7 = &UNK_109adfc03;
        }
        iVar12 = (**(code **)(puVar48 + 0x18))(puVar7,&stack0x00000558);
        if (iVar12 != 0) {
          pcVar50 = s__south_socket__non_fatal_error__r_108ac4992;
          pcVar46 = &stack0x000003e0;
          puVar45 = (ulong *)0x1;
          plVar47 = (long *)0x1;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (uVar33,puVar7,puVar48,&stack0x00000558,&stack0x000002d0);
        }
      }
      goto LAB_100757bd4;
    }
    puVar45 = (ulong *)&UNK_108caa84f;
    pcVar46 = (char *)0x19;
    puVar27 = (undefined8 *)_malloc(0x18);
    if (puVar27 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
      goto LAB_10075ae84;
    }
    puVar27[1] = 0x19;
    *puVar27 = &UNK_108caa84f;
    puVar27[2] = in_stack_00000478;
    *(undefined8 **)(unaff_x29 + -0x100) = puVar27;
    *(undefined **)(unaff_x29 + -0xf8) = &UNK_10b2372e8;
    bVar3 = true;
    plVar47 = in_stack_00000478;
    goto LAB_100759220;
  }
  *(undefined1 *)(unaff_x19 + 0x282) = 1;
  *(undefined8 *)(unaff_x19 + 0x250) = *(undefined8 *)(unaff_x19 + 0x210);
  *(ulong *)(unaff_x19 + 0x248) = *puVar2;
  *(undefined8 *)(unaff_x19 + 0x260) = *(undefined8 *)(unaff_x19 + 0x220);
  *(undefined8 *)(unaff_x19 + 600) = *(undefined8 *)(unaff_x19 + 0x218);
  *(undefined8 *)(unaff_x19 + 0x268) = *(undefined8 *)(unaff_x19 + 0x228);
  if (*(short *)(unaff_x19 + 0x250) == 2) {
    uVar13 = *(ulong *)(unaff_x19 + 0x248);
    uVar11 = FUN_105af21e4(uVar13);
    if (((uVar11 & 0xff) < 0x29) && ((1L << ((ulong)(uVar11 & 0xff) & 0x3f) & 0x1080040220aU) != 0))
    {
      *(undefined1 *)(unaff_x19 + 0x282) = 0;
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
         (((bRam000000010b639658 - 1 < 2 ||
           ((bRam000000010b639658 != 0 &&
            (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h33543d5c60750628E
                                ), unaff_x28 = in_stack_00000068, cVar10 != '\0')))) &&
          (uVar21 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (
                              ___ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h33543d5c60750628E
                              ), (uVar21 & 1) != 0)))) {
        lVar29 = ___ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h33543d5c60750628E
                 + 0x30;
        puVar45 = (ulong *)&stack0x000003e0;
        pcVar46 = &
                  __ZN58__LT_std__io__error__Error_u20_as_u20_core__fmt__Debug_GT_3fmt17heced06dcf81bbc5fE
        ;
        pcVar50 = &stack0x00000410;
        *(undefined8 *)(unaff_x29 + -0xc0) = 1;
        *(undefined1 **)(unaff_x29 + -0xb8) = &stack0x00000458;
        *(undefined8 *)(unaff_x29 + -0xb0) = 1;
        *(long *)(unaff_x29 + -0xa8) = lVar29;
        FUN_1006fc7d8(unaff_x29 + -0xc0);
      }
      else {
        lVar29 = 
        ___ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h33543d5c60750628E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          puVar48 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar48 = &UNK_10b3c24c8;
          }
          puVar7 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar7 = &UNK_109adfc03;
          }
          iVar12 = (**(code **)(puVar48 + 0x18))(puVar7,&stack0x000004f0);
          if (iVar12 != 0) {
            lVar25 = ___ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h33543d5c60750628E
                     + 0x30;
            puVar45 = (ulong *)&stack0x000003e0;
            pcVar46 = &
                      __ZN58__LT_std__io__error__Error_u20_as_u20_core__fmt__Debug_GT_3fmt17heced06dcf81bbc5fE
            ;
            pcVar50 = &stack0x00000410;
            *(undefined8 *)(unaff_x29 + -0xc0) = 1;
            *(undefined1 **)(unaff_x29 + -0xb8) = &stack0x00000458;
            *(undefined8 *)(unaff_x29 + -0xb0) = 1;
            *(long *)(unaff_x29 + -0xa8) = lVar25;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar29,puVar7,puVar48,&stack0x000004f0,unaff_x29 + -0xc0);
          }
        }
      }
      if ((uVar13 & 3) == 1) {
        uVar33 = *(undefined8 *)(uVar13 - 1);
        puVar27 = *(undefined8 **)(uVar13 + 7);
        pcVar22 = (code *)*puVar27;
        if (pcVar22 != (code *)0x0) {
          (*pcVar22)(uVar33);
        }
        if (puVar27[1] != 0) {
          _free(uVar33);
        }
        _free((undefined8 *)(uVar13 - 1));
      }
      bVar3 = false;
      uVar31 = 2;
      *(undefined1 *)(unaff_x19 + 0x282) = 0;
    }
    else {
      *(undefined1 *)(unaff_x19 + 0x282) = 0;
      *(undefined **)(unaff_x29 + -0xc0) = &UNK_108caa836;
      *(undefined8 *)(unaff_x29 + -0xb8) = 0x19;
      *(ulong *)(unaff_x29 + -0xb0) = uVar13;
      puVar27 = (undefined8 *)_malloc(0x18);
      if (puVar27 == (undefined8 *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
        goto LAB_10075ae84;
      }
      uVar33 = *(undefined8 *)(unaff_x29 + -0xc0);
      puVar27[1] = *(undefined8 *)(unaff_x29 + -0xb8);
      *puVar27 = uVar33;
      puVar27[2] = *(undefined8 *)(unaff_x29 + -0xb0);
      *(undefined8 **)(unaff_x29 + -0x100) = puVar27;
      *(undefined **)(unaff_x29 + -0xf8) = &UNK_10b2372e8;
      bVar3 = true;
      *(undefined1 *)(unaff_x19 + 0x282) = 0;
    }
    goto LAB_100759220;
  }
  puVar2 = (ulong *)(unaff_x19 + 0x270);
  *(undefined8 *)(unaff_x19 + 0x270) = *(undefined8 *)(unaff_x19 + 0x248);
  *(undefined8 *)(unaff_x19 + 0x1e8) = *(undefined8 *)(unaff_x19 + 0x218);
  *unaff_x22 = *(long *)(unaff_x19 + 0x210);
  *(undefined8 *)(unaff_x19 + 0x1f8) = *(undefined8 *)(unaff_x19 + 0x228);
  *(undefined8 *)(unaff_x19 + 0x1f0) = *(undefined8 *)(unaff_x19 + 0x220);
  if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
      ((bRam000000010b639628 - 1 < 2 ||
       ((bRam000000010b639628 != 0 &&
        (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1ef093e85981e20cE
                            ), unaff_x28 = in_stack_00000068, cVar10 != '\0')))))) &&
     (uVar13 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (
                         ___ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1ef093e85981e20cE
                         ),
     uVar33 = 
     ___ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1ef093e85981e20cE
     , (uVar13 & 1) != 0)) {
    *(ulong **)(unaff_x29 + -0xc0) = puVar2;
    *(undefined **)(unaff_x29 + -0xb8) =
         &
         __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    *(long **)(unaff_x29 + -0xb0) = unaff_x22;
    *(undefined **)(unaff_x29 + -0xa8) =
         &
         __ZN73__LT_core__net__socket_addr__SocketAddr_u20_as_u20_core__fmt__Display_GT_3fmt17hc1fbb8184c06862cE
    ;
    pcVar50 = s__north_socket__received_packet___108ac48b9;
    pcVar46 = &stack0x000003e0;
    puVar45 = (ulong *)0x1;
    plVar47 = (long *)0x1;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(uVar33,&stack0x000002d0);
    uVar33 = 
    ___ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1ef093e85981e20cE
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      puVar48 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar48 = &UNK_10b3c24c8;
      }
      unaff_x26 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        unaff_x26 = &UNK_109adfc03;
      }
      iVar12 = (**(code **)(puVar48 + 0x18))(unaff_x26,&stack0x00000410);
      if (iVar12 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (uVar33,unaff_x26,puVar48,&stack0x00000410,&stack0x000002d0);
      }
    }
  }
  else {
    uVar33 = 
    ___ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1ef093e85981e20cE
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      puVar48 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar48 = &UNK_10b3c24c8;
      }
      unaff_x26 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        unaff_x26 = &UNK_109adfc03;
      }
      iVar12 = (**(code **)(puVar48 + 0x18))(unaff_x26,&stack0x000003b0);
      if (iVar12 != 0) {
        *(ulong **)(unaff_x29 + -0xc0) = puVar2;
        *(undefined **)(unaff_x29 + -0xb8) =
             &
             __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
        ;
        *(long **)(unaff_x29 + -0xb0) = unaff_x22;
        *(undefined **)(unaff_x29 + -0xa8) =
             &
             __ZN73__LT_core__net__socket_addr__SocketAddr_u20_as_u20_core__fmt__Display_GT_3fmt17hc1fbb8184c06862cE
        ;
        pcVar50 = s__north_socket__received_packet___108ac48b9;
        pcVar46 = &stack0x000003e0;
        puVar45 = (ulong *)0x1;
        plVar47 = (long *)0x1;
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (uVar33,unaff_x26,puVar48,&stack0x00000410,&stack0x000002d0);
      }
    }
  }
  lVar29 = *(long *)(unaff_x19 + 0x240);
  if (*(ushort *)(unaff_x19 + 0x1e0) != 1) {
    if (*(short *)(lVar29 + 0xb0) == *(short *)(unaff_x19 + 0x1e6)) {
      lVar25 = 0;
      uVar13 = (ulong)*(uint *)(unaff_x28 + 0x10);
      bVar23 = *(byte *)(lVar29 + 0xb2);
      if ((ushort)bVar23 == *(ushort *)(unaff_x19 + 0x1e0)) goto LAB_1007575f0;
    }
LAB_100757608:
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
        ((bRam000000010b6396b8 - 1 < 2 ||
         ((bRam000000010b6396b8 != 0 &&
          (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&
                               __ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he2a5703304214e9cE
                              ), unaff_x28 = in_stack_00000068, cVar10 != '\0')))))) &&
       (uVar13 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he2a5703304214e9cE
                           ),
       uVar33 = 
       ___ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he2a5703304214e9cE
       , (uVar13 & 1) != 0)) {
      pcVar46 = &
                __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      *(long *)(unaff_x29 + -0xd0) = *(long *)(unaff_x19 + 0x240) + 0xb2;
      *(undefined1 **)(unaff_x29 + -0xc0) = &stack0x000003e0;
      *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b208fd0;
      *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xd0;
      *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b21ec18;
      *(undefined1 **)(unaff_x29 + -0xa0) = &stack0x00000478;
      *(undefined **)(unaff_x29 + -0x98) = &UNK_10b21ec38;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(uVar33,&stack0x00000410);
      uVar33 = 
      ___ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he2a5703304214e9cE
      ;
      puVar45 = puVar2;
      plVar47 = unaff_x22;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pcVar50 = (char *)0x4;
        puVar48 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar48 = &UNK_10b3c24c8;
        }
        puVar7 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar7 = &UNK_109adfc03;
        }
        iVar12 = (**(code **)(puVar48 + 0x18))(puVar7,&stack0x00000458);
        if (iVar12 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (uVar33,puVar7,puVar48,&stack0x00000458,&stack0x00000410);
        }
      }
    }
    else {
      uVar33 = 
      ___ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he2a5703304214e9cE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        unaff_x26 = &
                    __ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he2a5703304214e9cE
        ;
        puVar48 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar48 = &UNK_10b3c24c8;
        }
        puVar7 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar7 = &UNK_109adfc03;
        }
        iVar12 = (**(code **)(puVar48 + 0x18))(puVar7,&stack0x000003c8);
        if (iVar12 != 0) {
          pcVar46 = &
                    __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          pcVar50 = s_3north_socket__drop_packet_non_c_108ac48ed;
          *(undefined1 **)(unaff_x29 + -0xc0) = &stack0x00000458;
          *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b208fd0;
          *(undefined1 **)(unaff_x29 + -0xb0) = &stack0x00000478;
          *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b21ec18;
          *(undefined1 **)(unaff_x29 + -0xa0) = &stack0x000003e0;
          *(undefined **)(unaff_x29 + -0x98) = &UNK_10b21ec38;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (uVar33,puVar7,puVar48,&stack0x000003c8,&stack0x00000410);
          puVar45 = puVar2;
          plVar47 = unaff_x22;
        }
      }
    }
    goto LAB_100759214;
  }
  if (*(short *)(lVar29 + 0xb0) != *(short *)(unaff_x19 + 0x1fc)) goto LAB_100757608;
  lVar25 = *(long *)((long)unaff_x28 + 0x8a);
  uVar13 = *(ulong *)((long)unaff_x28 + 0x82);
  bVar23 = 1;
  if (*(char *)(lVar29 + 0xb2) != '\x01') goto LAB_100757608;
LAB_1007575f0:
  if (bVar23 == 0) {
    if (*(int *)(lVar29 + 0xb3) != (int)uVar13) goto LAB_100757608;
  }
  else if (*(long *)(lVar29 + 0xbb) != lVar25 || *(ulong *)(lVar29 + 0xb3) != uVar13)
  goto LAB_100757608;
  uVar13 = *puVar2;
  if (*(ulong *)(lVar29 + 0x48) < uVar13) {
    __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
              (0,uVar13,*(ulong *)(lVar29 + 0x48),&UNK_10b21ecc0);
    goto LAB_10075ae84;
  }
  lVar25 = unaff_x19 + 0x230;
  *(undefined8 *)(unaff_x19 + 0x230) = *(undefined8 *)(lVar29 + 0x40);
  *(ulong *)(unaff_x19 + 0x238) = uVar13;
  *(long *)(unaff_x19 + 0x288) = lVar25;
  *(undefined1 *)(unaff_x19 + 0x298) = 0;
  uVar13 = 0;
  *(long *)(unaff_x19 + 0x290) = lVar25;
  *(long *)(unaff_x19 + 0x2a0) = lVar25;
  *(undefined2 *)(unaff_x19 + 0x2a8) = 0;
  *(undefined1 *)(unaff_x19 + 0x2aa) = 0;
  do {
    puVar27 = *(undefined8 **)(unaff_x19 + 0x2a0);
    plVar35 = (long *)*puVar27;
    uVar32 = puVar27[1];
    uVar21 = 2 - (uVar13 & 0xff);
    if (uVar32 <= uVar21) {
      uVar21 = uVar32;
    }
    _memcpy(unaff_x19 + 0x2a8 + (uVar13 & 0xff),plVar35,uVar21);
    uVar32 = uVar32 - uVar21;
    *puVar27 = (undefined *)((long)plVar35 + uVar21);
    puVar27[1] = uVar32;
    if (uVar21 == 0) {
      unaff_x26 = (undefined *)0x0;
      cVar10 = '\0';
      bVar23 = 0x1b;
      pcVar14 = (char *)0x2500000003;
      goto LAB_100758560;
    }
    uVar11 = (uint)*(byte *)(unaff_x19 + 0x2aa) + (int)uVar21;
    uVar13 = (ulong)uVar11;
    *(char *)(unaff_x19 + 0x2aa) = (char)uVar11;
  } while ((uVar11 & 0xff) < 2);
  plVar35 = *(long **)(unaff_x19 + 0x290);
  *(long **)(unaff_x19 + 0x2a0) = plVar35;
  *(undefined1 *)(unaff_x29 + -0xc0) = 0;
  lVar25 = *plVar35;
  lVar24 = plVar35[1];
  uVar32 = (ulong)(lVar24 != 0);
  lVar29 = lVar25;
  if (lVar24 != 0) {
    lVar29 = lVar25 + 1;
  }
  _memcpy(unaff_x29 + -0xc0,lVar25,uVar32);
  uVar32 = lVar24 - uVar32;
  *plVar35 = lVar29;
  plVar35[1] = uVar32;
  if (lVar24 == 0) {
    unaff_x26 = (undefined *)0x0;
    cVar10 = '\0';
    bVar23 = 0x1b;
    pcVar14 = (char *)0x2500000003;
    goto LAB_100758560;
  }
  *(undefined1 *)(unaff_x19 + 0x2a0) = *(undefined1 *)(unaff_x29 + -0xc0);
  plVar37 = *(long **)(unaff_x19 + 0x290);
  *(long **)(unaff_x19 + 0x2c8) = plVar37;
  *(undefined1 *)(unaff_x19 + 0x2d2) = 0;
  *(undefined2 *)(unaff_x19 + 0x2d0) = 0;
  *(long **)(unaff_x19 + 0x2a8) = plVar37;
  *(long **)(unaff_x19 + 0x2d8) = plVar37;
  *(undefined1 *)(unaff_x29 + -0xc0) = 0;
  lVar25 = *plVar37;
  lVar24 = plVar37[1];
  plVar35 = (long *)(ulong)(lVar24 != 0);
  lVar29 = lVar25;
  if (lVar24 != 0) {
    lVar29 = lVar25 + 1;
  }
  _memcpy(unaff_x29 + -0xc0,lVar25,plVar35);
  uVar32 = lVar24 - (long)plVar35;
  *plVar37 = lVar29;
  plVar37[1] = uVar32;
  if (lVar24 == 0) {
    unaff_x26 = (undefined *)0x0;
    pcVar14 = (char *)0x2500000003;
    goto LAB_10075854c;
  }
  bVar23 = *(byte *)(unaff_x29 + -0xc0);
  uVar32 = (ulong)bVar23;
  if (bVar23 == 4) {
    *(undefined8 *)(unaff_x19 + 0x2d8) = *(undefined8 *)(unaff_x19 + 0x2a8);
    *(long *)(unaff_x19 + 0x2e0) = unaff_x19 + 0x300;
    plVar16 = (long *)0x10;
    *(undefined8 *)(unaff_x19 + 0x2e8) = 0x10;
    *(undefined8 *)(unaff_x19 + 0x2f8) = 0x10;
    *(undefined8 *)(unaff_x19 + 0x2f0) = 0;
    *(undefined8 *)(unaff_x19 + 0x308) = 0;
    *(undefined8 *)(unaff_x19 + 0x300) = 0;
    plVar37 = (long *)0x0;
    do {
      uVar13 = (long)plVar16 - (long)plVar37;
      if (uVar13 == 0) {
        *(undefined8 *)(unaff_x19 + 0x2ba) = *(undefined8 *)(unaff_x19 + 0x308);
        *(undefined8 *)(unaff_x19 + 0x2b2) = *(undefined8 *)(unaff_x19 + 0x300);
        uVar18 = 0x11a;
        goto LAB_100758394;
      }
      plVar28 = *(long **)(unaff_x19 + 0x2d8);
      uVar32 = plVar28[1];
      uVar21 = uVar13;
      if (uVar32 <= uVar13) {
        uVar21 = uVar32;
      }
      plVar35 = (long *)(uVar21 + (long)plVar37);
      if (plVar35 < plVar37 || plVar16 < plVar35) {
        __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                  (plVar37,plVar35,plVar16,&UNK_10b4ce760);
        goto LAB_10075ae84;
      }
      lVar29 = *plVar28;
      _memcpy((undefined *)(*(long *)(unaff_x19 + 0x2e0) + (long)plVar37),lVar29,uVar21);
      if (*(long **)(unaff_x19 + 0x2f8) < plVar35) {
        *(long **)(unaff_x19 + 0x2f8) = plVar35;
      }
      *(long **)(unaff_x19 + 0x2f0) = plVar35;
      *plVar28 = lVar29 + uVar21;
      plVar28[1] = uVar32 - uVar21;
      plVar16 = *(long **)(unaff_x19 + 0x2e8);
      plVar37 = plVar35;
    } while ((long)plVar16 - (long)plVar35 != uVar13);
    pcVar14 = (char *)__ZN3std2io5error5Error3new17h949302c01fe11b24E(0x25,&UNK_109beb3ae,9);
    uVar32 = extraout_x8_01;
    goto LAB_1007584f8;
  }
  if (bVar23 == 3) {
    plVar37 = *(long **)(unaff_x19 + 0x2a8);
    *(undefined8 *)(unaff_x19 + 0x2d8) = plVar37;
    *(undefined1 *)(unaff_x29 + -0xc0) = 0;
    lVar25 = *plVar37;
    lVar24 = plVar37[1];
    plVar35 = (long *)(ulong)(lVar24 != 0);
    lVar29 = lVar25;
    if (lVar24 != 0) {
      lVar29 = lVar25 + 1;
    }
    _memcpy(unaff_x29 + -0xc0,lVar25,plVar35);
    uVar32 = lVar24 - (long)plVar35;
    *plVar37 = lVar29;
    plVar37[1] = uVar32;
    if (lVar24 != 0) {
      plVar35 = (long *)(ulong)*(byte *)(unaff_x29 + -0xc0);
      unaff_x26 = (undefined *)0x1;
      pcVar14 = (char *)0x4;
      if (plVar35 == (long *)0x0) {
        uVar32 = 0;
        plVar35 = (long *)0x0;
        goto LAB_100758548;
      }
      lVar29 = _calloc(plVar35,1);
      if (lVar29 != 0) {
        *(long **)(unaff_x19 + 0x2d8) = plVar35;
        *(long *)(unaff_x19 + 0x2e0) = lVar29;
        *(long **)(unaff_x19 + 0x2e8) = plVar35;
        *(undefined1 *)(unaff_x19 + 0x2d0) = 1;
        *(undefined8 *)(unaff_x19 + 0x2f0) = *(undefined8 *)(unaff_x19 + 0x2a8);
        *(long *)(unaff_x19 + 0x2f8) = lVar29;
        *(long **)(unaff_x19 + 0x300) = plVar35;
        *(undefined8 *)(unaff_x19 + 0x308) = 0;
        *(long **)(unaff_x19 + 0x310) = plVar35;
        plVar37 = (long *)0x0;
LAB_1007581a4:
        uVar13 = (long)plVar35 - (long)plVar37;
        if (uVar13 != 0) {
          plVar16 = *(long **)(unaff_x19 + 0x2f0);
          uVar32 = plVar16[1];
          uVar21 = uVar13;
          if (uVar32 <= uVar13) {
            uVar21 = uVar32;
          }
          plVar28 = (long *)(uVar21 + (long)plVar37);
          if (plVar37 <= plVar28 && plVar28 <= plVar35) goto code_r0x0001007581cc;
          __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                    (plVar37,plVar28,plVar35,&UNK_10b4ce760);
          goto LAB_10075ae84;
        }
        *(undefined1 *)(unaff_x19 + 0x2d0) = 0;
        uVar33 = *(undefined8 *)(unaff_x19 + 0x2d8);
        *(undefined8 *)(unaff_x29 + -0xb8) = *(undefined8 *)(unaff_x19 + 0x2e0);
        *(undefined8 *)(unaff_x29 + -0xc0) = uVar33;
        *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x19 + 0x2e8);
        __ZN109__LT_rama_net__address__domain__Domain_u20_as_u20_core__convert__TryFrom_LT_alloc__vec__Vec_LT_u8_GT__GT__GT_8try_from17heababb7f9c4311bfE
                  (&stack0x000002d0,unaff_x29 + -0xc0);
        if ((char)puVar45 != '\x1a') {
          uVar20 = (undefined4)((ulong)puVar45 >> 8);
          *(char *)(unaff_x19 + 0x2b0) = (char)puVar45;
          *(undefined4 *)(unaff_x19 + 0x2b1) = uVar20;
          *(int *)(unaff_x19 + 0x2b4) =
               (int)(CONCAT44((uint)((ulong)puVar45 >> 0x28),uVar20) >> 0x18);
          *(long **)((long)unaff_x28 + 0x15e) = plVar47;
          *(char **)((long)unaff_x28 + 0x156) = pcVar46;
          *(undefined2 *)(unaff_x19 + 0x2d0) = 0x100;
LAB_1007583a0:
          uVar13 = 0;
          *(undefined8 *)(unaff_x19 + 0x2d8) = *(undefined8 *)(unaff_x19 + 0x2a8);
          *(undefined2 *)(unaff_x19 + 0x2e0) = 0;
          *(undefined1 *)(unaff_x19 + 0x2e2) = 0;
          do {
            plVar35 = *(long **)(unaff_x19 + 0x2d8);
            lVar29 = *plVar35;
            uVar32 = plVar35[1];
            uVar21 = 2 - (uVar13 & 0xff);
            if (uVar32 <= uVar21) {
              uVar21 = uVar32;
            }
            _memcpy(unaff_x19 + 0x2e0 + (uVar13 & 0xff),lVar29,uVar21);
            *plVar35 = lVar29 + uVar21;
            plVar35[1] = uVar32 - uVar21;
            if (uVar21 == 0) {
              bVar23 = *(byte *)(unaff_x19 + 0x2b0);
              uVar32 = (ulong)bVar23;
              plVar35 = (long *)0x0;
              if (bVar23 != 0x1a) {
                if (0x18 < bVar23) {
                  uVar32 = **(ulong **)(unaff_x19 + 0x2b8);
                  **(ulong **)(unaff_x19 + 0x2b8) = uVar32 - 1;
                  LORelease();
                  if (uVar32 == 1) {
                    DataMemoryBarrier(2,1);
                    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE
                              (unaff_x19 + 0x2b8);
                    uVar32 = extraout_x8_02;
                  }
                }
                goto LAB_100758540;
              }
              unaff_x26 = (undefined *)0x0;
              pcVar14 = (char *)0x2500000003;
              goto LAB_100758548;
            }
            uVar11 = (uint)*(byte *)(unaff_x19 + 0x2e2) + (int)uVar21;
            uVar13 = (ulong)uVar11;
            *(char *)(unaff_x19 + 0x2e2) = (char)uVar11;
          } while ((uVar11 & 0xff) < 2);
          uVar31 = *(ushort *)(unaff_x19 + 0x2e0);
          bVar23 = *(byte *)(unaff_x19 + 0x2b0);
          unaff_x26 = (undefined *)(ulong)*(byte *)(unaff_x19 + 0x2b8);
          uVar32 = (ulong)*(byte *)(unaff_x19 + 0x2b9);
          pcVar14 = *(char **)(unaff_x19 + 0x2c0);
          *(undefined2 *)(unaff_x19 + 0x2d1) = 0x100;
          uVar20 = *(undefined4 *)(unaff_x19 + 0x2b4);
          *(undefined4 *)(unaff_x29 + -0xd0) = *(undefined4 *)(unaff_x19 + 0x2b1);
          if (bVar23 == 0x1c) {
            *(undefined1 *)(unaff_x19 + 0x298) = 5;
            sVar19 = 4;
            goto LAB_10075ab70;
          }
          plVar35 = (long *)(ulong)((uint)(uVar31 >> 8) | (uVar31 & 0xff00ff) << 8);
          if (bVar23 == 0x1b) goto LAB_100758558;
          pcVar50 = (char *)(ulong)CONCAT43(uVar20,(int3)*(undefined4 *)(unaff_x29 + -0xd0));
          in_stack_000004c0 = (char *)(ulong)*(uint6 *)(unaff_x19 + 0x2ba);
          cVar10 = *(char *)(unaff_x19 + 0x2a0);
          goto LAB_100758560;
        }
        unaff_x26 = (undefined *)0x2;
        pcVar14 = pcVar46;
        plVar35 = plVar47;
        goto LAB_100758258;
      }
      FUN_107c03c64(1,plVar35);
      goto LAB_10075ae84;
    }
LAB_100758540:
    unaff_x26 = (undefined *)0x0;
    pcVar14 = (char *)0x2500000003;
  }
  else {
    unaff_x26 = (undefined *)0x1;
    pcVar14 = (char *)0x3;
    if (bVar23 == 1) {
      *(undefined4 *)(unaff_x19 + 0x2d8) = 0;
      *(undefined8 *)(unaff_x19 + 0x2e0) = *(undefined8 *)(unaff_x19 + 0x2a8);
      *(undefined8 **)(unaff_x19 + 0x2e8) = (undefined8 *)(unaff_x19 + 0x2d8);
      *(undefined8 *)(unaff_x19 + 0x2f8) = 0;
      *(undefined8 *)(unaff_x19 + 0x2f0) = 4;
      plVar16 = (long *)0x4;
      *(undefined8 *)(unaff_x19 + 0x300) = 4;
      plVar37 = (long *)0x0;
LAB_100758020:
      uVar13 = (long)plVar16 - (long)plVar37;
      if (uVar13 == 0) {
        *(undefined4 *)(unaff_x28 + 0x2a) = *(undefined4 *)(unaff_x19 + 0x2d8);
        uVar18 = 0x1a;
LAB_100758394:
        *(undefined2 *)(unaff_x19 + 0x2b0) = uVar18;
        *(undefined1 *)(unaff_x19 + 0x2d1) = 1;
        goto LAB_1007583a0;
      }
      plVar28 = *(long **)(unaff_x19 + 0x2e0);
      uVar32 = plVar28[1];
      uVar21 = uVar13;
      if (uVar32 <= uVar13) {
        uVar21 = uVar32;
      }
      plVar35 = (long *)(uVar21 + (long)plVar37);
      if (plVar37 <= plVar35 && plVar35 <= plVar16) goto code_r0x000100758048;
      __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                (plVar37,plVar35,plVar16,&UNK_10b4ce760);
      goto LAB_10075ae84;
    }
  }
  goto LAB_100758548;
LAB_10075732c:
  uVar13 = *(ulong *)(unaff_x29 + -0xc0);
  uVar33 = *(undefined8 *)(unaff_x19 + 0x218);
  uVar21 = *(ulong *)(unaff_x19 + 0x210);
  uVar42 = *(undefined8 *)(unaff_x19 + 0x228);
  uVar36 = *(undefined8 *)(unaff_x19 + 0x220);
  if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
      ((bRam000000010b6396d0 - 1 < 2 ||
       ((bRam000000010b6396d0 != 0 &&
        (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfea30bd3993516e3E
                            ), unaff_x28 = in_stack_00000068, cVar10 != '\0')))))) &&
     (uVar32 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (
                         ___ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfea30bd3993516e3E
                         ), (uVar32 & 1) != 0)) {
    puVar45 = (ulong *)&stack0x00000508;
    pcVar46 = &
              __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    plVar47 = (long *)&stack0x00000510;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
              (___ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfea30bd3993516e3E
               ,&stack0x00000410);
    uVar43 = 
    ___ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfea30bd3993516e3E
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      pcVar50 = (char *)0x0;
      puVar48 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar48 = &UNK_10b3c24c8;
      }
      puVar7 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar7 = &UNK_109adfc03;
      }
      iVar12 = (**(code **)(puVar48 + 0x18))(puVar7,&stack0x00000458);
      if (iVar12 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (uVar43,puVar7,puVar48,&stack0x00000458,&stack0x00000410);
      }
    }
  }
  else {
    uVar43 = 
    ___ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfea30bd3993516e3E
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      puVar48 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar48 = &UNK_10b3c24c8;
      }
      puVar7 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar7 = &UNK_109adfc03;
      }
      iVar12 = (**(code **)(puVar48 + 0x18))(puVar7,&stack0x00000530);
      if (iVar12 != 0) {
        puVar45 = (ulong *)&stack0x00000508;
        pcVar46 = &
                  __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
        ;
        plVar47 = (long *)&stack0x00000510;
        pcVar50 = s__south_socket__received_packet___108ac495e;
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (uVar43,puVar7,puVar48,&stack0x00000530,&stack0x00000410);
      }
    }
  }
  if (uVar13 <= *(ulong *)(*(long *)(unaff_x19 + 0x240) + 0x68)) {
    *(ulong *)(*(long *)(unaff_x19 + 0x240) + 0x68) = uVar13;
  }
  uVar20 = (undefined4)(uVar21 >> 0x10);
  pcVar50 = (char *)CONCAT62((int6)((ulong)pcVar50 >> 0x10),(short)((ulong)uVar42 >> 0x20));
  bVar4 = (uVar21 & 1) != 0;
  if (bVar4) {
    uVar20 = (undefined4)(uVar21 >> 0x20);
    *(undefined8 *)(unaff_x29 + -0xf0) = uVar33;
    *(int *)(unaff_x29 + -0xe8) = (int)uVar36;
    puVar34 = (undefined2 *)&stack0x00000458;
  }
  bVar3 = false;
  puVar45 = (ulong *)CONCAT62(CONCAT15((char)((ulong)puVar45 >> 0x38),CONCAT41(uVar20,bVar4)),
                              *puVar34);
  unaff_x26 = (undefined *)((ulong)puVar45 & 0xffffffff);
  *(ulong *)(unaff_x29 + -0x100) =
       CONCAT17((char)((ulong)*(undefined8 *)(unaff_x29 + -0xf0) >> 0x20),
                CONCAT43((int)*(undefined8 *)(unaff_x29 + -0xf0),(int3)((uint)uVar20 >> 8)));
  uVar31 = 1;
  goto LAB_100759220;
code_r0x000100758048:
  lVar29 = *plVar28;
  _memcpy((undefined *)(*(long *)(unaff_x19 + 0x2e8) + (long)plVar37),lVar29,uVar21);
  if (*(long **)(unaff_x19 + 0x300) < plVar35) {
    *(long **)(unaff_x19 + 0x300) = plVar35;
  }
  *(long **)(unaff_x19 + 0x2f8) = plVar35;
  *plVar28 = lVar29 + uVar21;
  plVar28[1] = uVar32 - uVar21;
  plVar16 = *(long **)(unaff_x19 + 0x2f0);
  plVar37 = plVar35;
  if ((long)plVar16 - (long)plVar35 == uVar13) goto LAB_1007580a8;
  goto LAB_100758020;
code_r0x0001007581cc:
  lVar29 = *plVar16;
  _memcpy((undefined *)(*(long *)(unaff_x19 + 0x2f8) + (long)plVar37),lVar29,uVar21);
  if (*(long **)(unaff_x19 + 0x310) < plVar28) {
    *(long **)(unaff_x19 + 0x310) = plVar28;
  }
  *(long **)(unaff_x19 + 0x308) = plVar28;
  *plVar16 = lVar29 + uVar21;
  plVar16[1] = uVar32 - uVar21;
  plVar35 = *(long **)(unaff_x19 + 0x300);
  plVar37 = plVar28;
  if ((long)plVar35 - (long)plVar28 == uVar13) goto LAB_10075823c;
  goto LAB_1007581a4;
LAB_10075823c:
  pcVar14 = (char *)__ZN3std2io5error5Error3new17h949302c01fe11b24E(0x25,&UNK_109beb3ae,9);
  unaff_x26 = (undefined *)0x0;
LAB_100758258:
  uVar32 = (ulong)*(byte *)(unaff_x19 + 0x2d0);
  if (((*(byte *)(unaff_x19 + 0x2d0) & 1) != 0) && (uVar32 = 0, *(long *)(unaff_x19 + 0x2d8) != 0))
  {
    _free(*(undefined8 *)(unaff_x19 + 0x2e0));
    uVar32 = extraout_x8_00;
  }
  *(undefined2 *)(unaff_x19 + 0x2d0) = 0;
  goto LAB_10075854c;
LAB_1007580a8:
  pcVar14 = (char *)__ZN3std2io5error5Error3new17h949302c01fe11b24E(0x25,&UNK_109beb3ae,9);
  uVar32 = extraout_x8;
LAB_1007584f8:
  unaff_x26 = (undefined *)0x0;
LAB_100758548:
  *(undefined1 *)(unaff_x19 + 0x2d1) = 0;
LAB_10075854c:
  *(undefined1 *)(unaff_x19 + 0x2d2) = 1;
LAB_100758558:
  cVar10 = '\0';
  bVar23 = 0x1b;
LAB_100758560:
  *(int *)(unaff_x29 + -0xe0) = (int)pcVar50;
  *(undefined1 *)(unaff_x19 + 0x298) = 1;
  uVar20 = *(undefined4 *)(unaff_x29 + -0xe0);
  cVar9 = (char)unaff_x26;
  if (bVar23 == 0x1b) {
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
       (((bRam000000010b639640 - 1 < 2 ||
         ((bRam000000010b639640 != 0 &&
          (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&
                               __ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h291ed721b989cb46E
                              ), cVar10 != '\0')))) &&
        (uVar13 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (
                            ___ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h291ed721b989cb46E
                            ), (uVar13 & 1) != 0)))) {
      in_stack_000004c0 = &stack0x00000478;
      puVar45 = (ulong *)&stack0x00000490;
      pcVar46 = "";
      plVar47 = (long *)&stack0x000004a0;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h291ed721b989cb46E
                 ,&stack0x00000410);
      lVar29 = 
      ___ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h291ed721b989cb46E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uVar33 = *(undefined8 *)
                  (
                  ___ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h291ed721b989cb46E
                  + 0x20);
        uVar36 = *(undefined8 *)
                  (
                  ___ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h291ed721b989cb46E
                  + 0x28);
        pcVar50 = (char *)0x4;
        puVar48 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar48 = &UNK_10b3c24c8;
        }
        puVar7 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar7 = &UNK_109adfc03;
        }
        iVar12 = (**(code **)(puVar48 + 0x18))(puVar7,&stack0x00000458);
        if (iVar12 != 0) {
          lVar25 = *(long *)(lVar29 + 0x60);
          uVar43 = *(undefined8 *)(lVar29 + 0x68);
          lVar24 = *(long *)(lVar29 + 0x50);
          uVar44 = *(undefined8 *)(lVar29 + 0x58);
          uVar42 = 1;
          if (lVar24 == 0) {
            uVar42 = 2;
          }
          uVar20 = *(undefined4 *)(lVar29 + 8);
          uVar8 = *(undefined4 *)(lVar29 + 0xc);
          *(undefined1 **)(unaff_x29 + -0xe0) = &stack0x00000410;
          *(undefined1 *)(unaff_x29 + -0xd8) = 1;
          *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0xe0;
          *(undefined **)(unaff_x29 + -200) = &DAT_1061c2098;
          uVar5 = 1;
          if (lVar25 == 0) {
            uVar5 = 2;
          }
          *(undefined8 *)(unaff_x29 + -0x88) = uVar33;
          *(undefined8 *)(unaff_x29 + -0x90) = 4;
          *(undefined8 *)(unaff_x29 + -0x80) = uVar36;
          *(char **)(unaff_x29 + -0x70) = s__108b39f4f;
          *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0xd0;
          *(undefined8 *)(unaff_x29 + -0xc0) = uVar42;
          *(long *)(unaff_x29 + -0xb8) = lVar24;
          *(undefined8 *)(unaff_x29 + -0xb0) = uVar44;
          *(undefined8 *)(unaff_x29 + -0xa8) = uVar5;
          *(long *)(unaff_x29 + -0xa0) = lVar25;
          *(undefined8 *)(unaff_x29 + -0x98) = uVar43;
          *(undefined4 *)(unaff_x29 + -0x78) = uVar20;
          *(undefined4 *)(unaff_x29 + -0x74) = uVar8;
          (**(code **)(puVar48 + 0x20))(puVar7,unaff_x29 + -0xc0);
        }
      }
    }
    else {
      lVar29 = 
      ___ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h291ed721b989cb46E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uVar33 = *(undefined8 *)
                  (
                  ___ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h291ed721b989cb46E
                  + 0x20);
        uVar36 = *(undefined8 *)
                  (
                  ___ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h291ed721b989cb46E
                  + 0x28);
        puVar48 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar48 = &UNK_10b3c24c8;
        }
        puVar7 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar7 = &UNK_109adfc03;
        }
        iVar12 = (**(code **)(puVar48 + 0x18))(puVar7,&stack0x000004a8);
        if (iVar12 != 0) {
          *(undefined1 **)(unaff_x29 + -0xe0) = &stack0x00000478;
          *(undefined **)(unaff_x29 + -0xd8) = &DAT_1011c66f0;
          in_stack_000004c0 = s__received_invalid_north_packet__d_108ac4a02;
          puVar45 = (ulong *)&stack0x000004c0;
          pcVar46 = "";
          plVar47 = (long *)&stack0x000004e8;
          *(undefined8 *)(unaff_x29 + -0x88) = uVar33;
          *(undefined8 *)(unaff_x29 + -0x90) = 4;
          *(undefined8 *)(unaff_x29 + -0x80) = uVar36;
          lVar25 = *(long *)(lVar29 + 0x60);
          uVar36 = *(undefined8 *)(lVar29 + 0x68);
          lVar24 = *(long *)(lVar29 + 0x50);
          uVar42 = *(undefined8 *)(lVar29 + 0x58);
          uVar33 = 1;
          if (lVar24 == 0) {
            uVar33 = 2;
          }
          uVar20 = *(undefined4 *)(lVar29 + 8);
          uVar8 = *(undefined4 *)(lVar29 + 0xc);
          *(undefined1 **)(unaff_x29 + -0xd0) = &stack0x00000410;
          *(undefined1 *)(unaff_x29 + -200) = 1;
          pcVar50 = (char *)(unaff_x29 + -0xd0);
          uVar43 = 1;
          if (lVar25 == 0) {
            uVar43 = 2;
          }
          *(char **)(unaff_x29 + -0x70) = s__108b39f4f;
          *(undefined1 **)(unaff_x29 + -0x68) = &stack0x00000458;
          *(undefined8 *)(unaff_x29 + -0xc0) = uVar33;
          *(long *)(unaff_x29 + -0xb8) = lVar24;
          *(undefined8 *)(unaff_x29 + -0xb0) = uVar42;
          *(undefined8 *)(unaff_x29 + -0xa8) = uVar43;
          *(long *)(unaff_x29 + -0xa0) = lVar25;
          *(undefined8 *)(unaff_x29 + -0x98) = uVar36;
          *(undefined4 *)(unaff_x29 + -0x78) = uVar20;
          *(undefined4 *)(unaff_x29 + -0x74) = uVar8;
          (**(code **)(puVar48 + 0x20))(puVar7,unaff_x29 + -0xc0);
        }
      }
    }
    if (cVar9 == '\x02') {
      if ((code *)*plVar35 != (code *)0x0) {
        (*(code *)*plVar35)(pcVar14);
      }
      goto LAB_100759200;
    }
    if ((cVar9 != '\0') || (((ulong)pcVar14 & 3) != 1)) goto LAB_100759210;
    pcVar30 = pcVar14 + -1;
    uVar33 = *(undefined8 *)pcVar30;
    puVar27 = *(undefined8 **)(pcVar14 + 7);
    pcVar22 = (code *)*puVar27;
    if (pcVar22 != (code *)0x0) {
      (*pcVar22)(uVar33);
    }
    pcVar14 = pcVar30;
    if (puVar27[1] != 0) {
      _free(uVar33);
    }
    goto LAB_100759208;
  }
  plVar37 = (long *)CONCAT26((short)((ulong)in_stack_000004c0 >> 0x20),
                             CONCAT42((int)in_stack_000004c0,CONCAT11((char)uVar32,cVar9)));
  if (cVar10 != '\0') {
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
        ((bRam000000010b639688 - 1 < 2 ||
         ((bRam000000010b639688 != 0 &&
          (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&
                               __ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7c3b5d0db3725bf3E
                              ), cVar10 != '\0')))))) &&
       (uVar13 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7c3b5d0db3725bf3E
                           ),
       puVar48 = 
       ___ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7c3b5d0db3725bf3E
       , (uVar13 & 1) != 0)) {
      *(char **)(unaff_x29 + -0xd0) = s_4received_north_packet_with_non__108ac49c1;
      *(undefined1 **)(unaff_x29 + -200) = &stack0x00000478;
      in_stack_000004c0 = (char *)(*(long *)(unaff_x19 + 0x240) + 0xb2);
      *(long *)(unaff_x29 + -0xe0) = *(long *)(unaff_x19 + 0x240) + 0xb0;
      *(long *)(unaff_x29 + -0xc0) = unaff_x29 + -0xd0;
      *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b208fd0;
      *(undefined1 **)(unaff_x29 + -0xb0) = &stack0x000004c0;
      *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b21ec18;
      *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0xe0;
      *(undefined **)(unaff_x29 + -0x98) = &UNK_10b21ec38;
      pcVar46 = (char *)(unaff_x29 + -0xc0);
      puVar45 = (ulong *)0x1;
      plVar47 = (long *)0x3;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(puVar48,&stack0x000002d0);
      puVar48 = 
      ___ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7c3b5d0db3725bf3E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pcVar50 = (char *)0x4;
        puVar7 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar7 = &UNK_10b3c24c8;
        }
        puVar6 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar6 = &UNK_109adfc03;
        }
        iVar12 = (**(code **)(puVar7 + 0x18))(puVar6,&stack0x00000458);
        if (iVar12 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (puVar48,puVar6,puVar7,&stack0x00000458,&stack0x000002d0);
        }
      }
    }
    else {
      puVar48 = 
      ___ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7c3b5d0db3725bf3E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uVar33 = *(undefined8 *)
                  (
                  ___ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7c3b5d0db3725bf3E
                  + 0x20);
        uVar36 = *(undefined8 *)
                  (
                  ___ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7c3b5d0db3725bf3E
                  + 0x28);
        puVar7 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar7 = &UNK_10b3c24c8;
        }
        puVar6 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar6 = &UNK_109adfc03;
        }
        iVar12 = (**(code **)(puVar7 + 0x18))(puVar6,&stack0x00000440);
        unaff_x26 = puVar48;
        if (iVar12 != 0) {
          *(undefined1 **)(unaff_x29 + -0xe0) = &stack0x00000430;
          *(undefined **)(unaff_x29 + -0xd8) =
               &
               __ZN4core3fmt3num3imp51__LT_impl_u20_core__fmt__Display_u20_for_u20_u8_GT_3fmt17haf97c475cbbdc210E
          ;
          in_stack_000004c0 = s_4received_north_packet_with_non__108ac49c1;
          puVar45 = (ulong *)&stack0x000004c0;
          pcVar46 = "";
          plVar47 = (long *)&stack0x000004e8;
          pcVar50 = (char *)0x1;
          lVar29 = *(long *)(puVar48 + 0x60);
          uVar43 = *(undefined8 *)(puVar48 + 0x68);
          lVar25 = *(long *)(puVar48 + 0x50);
          uVar44 = *(undefined8 *)(puVar48 + 0x58);
          uVar42 = 1;
          if (lVar25 == 0) {
            uVar42 = 2;
          }
          uVar20 = *(undefined4 *)(puVar48 + 8);
          uVar8 = *(undefined4 *)(puVar48 + 0xc);
          *(undefined1 **)(unaff_x29 + -0xd0) = &stack0x00000458;
          *(undefined1 *)(unaff_x29 + -200) = 1;
          uVar5 = 1;
          if (lVar29 == 0) {
            uVar5 = 2;
          }
          *(undefined8 *)(unaff_x29 + -0x88) = uVar33;
          *(undefined8 *)(unaff_x29 + -0x90) = 4;
          *(undefined8 *)(unaff_x29 + -0x80) = uVar36;
          *(char **)(unaff_x29 + -0x70) = s__108b39f4f;
          *(undefined1 **)(unaff_x29 + -0x68) = &stack0x00000478;
          *(undefined8 *)(unaff_x29 + -0xc0) = uVar42;
          *(long *)(unaff_x29 + -0xb8) = lVar25;
          *(undefined8 *)(unaff_x29 + -0xb0) = uVar44;
          *(undefined8 *)(unaff_x29 + -0xa8) = uVar5;
          *(long *)(unaff_x29 + -0xa0) = lVar29;
          *(undefined8 *)(unaff_x29 + -0x98) = uVar43;
          *(undefined4 *)(unaff_x29 + -0x78) = uVar20;
          *(undefined4 *)(unaff_x29 + -0x74) = uVar8;
          (**(code **)(puVar7 + 0x20))(puVar6,unaff_x29 + -0xc0);
        }
      }
    }
    if ((bVar23 != 0x1a) && (0x18 < bVar23)) {
      lVar29 = *plVar37;
      *plVar37 = lVar29 + -1;
      LORelease();
      if (lVar29 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(&stack0x00000418);
      }
    }
    goto LAB_100759210;
  }
  *(undefined1 *)(unaff_x19 + 0x281) = 0;
  *(long **)(unaff_x19 + 0x290) = plVar37;
  *(ulong *)(unaff_x19 + 0x288) =
       CONCAT44((int)((ulong)pcVar50 >> 0x18),(int)CONCAT41(uVar20,bVar23));
  *(long **)(unaff_x19 + 0x2a0) = plVar35;
  *(char **)(unaff_x19 + 0x298) = pcVar14;
  *(undefined8 *)(unaff_x19 + 0x2a8) = *(undefined8 *)(unaff_x19 + 0x240);
  *(undefined1 *)(unaff_x19 + 0x2b0) = 0;
  uVar33 = *(undefined8 *)(unaff_x19 + 0x288);
  *(undefined8 *)(unaff_x29 + -0xb8) = *(undefined8 *)(unaff_x19 + 0x290);
  *(undefined8 *)(unaff_x29 + -0xc0) = uVar33;
  *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x19 + 0x298);
  bVar23 = *(byte *)(unaff_x29 + -0xc0);
  if (bVar23 == 0x1a) {
    bVar23 = *(byte *)(unaff_x29 + -0xaf);
    *(undefined1 *)(unaff_x19 + 0x2b0) = 1;
    uVar13 = *(ulong *)(*(long *)(unaff_x19 + 0x240) + 0x48);
    uVar21 = *(long *)(unaff_x19 + 0x270) - *(long *)(unaff_x19 + 0x238);
    if (uVar13 < uVar21) {
      __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                (uVar21,uVar13,uVar13,&UNK_10b21ecf0);
      goto LAB_10075ae84;
    }
    unaff_x26 = (undefined *)
                ((ulong)CONCAT42(in_stack_000005b1,*(undefined2 *)(unaff_x19 + 0x2a0)) & 0xffffffff)
    ;
    lVar29 = *(long *)(*(long *)(unaff_x19 + 0x240) + 0x40);
    _memmove(lVar29,lVar29 + uVar21,uVar13 - uVar21);
    uVar21 = *(long *)(unaff_x19 + 0x270) - uVar21;
    if (uVar21 <= *(ulong *)(*(long *)(unaff_x19 + 0x240) + 0x48)) {
      *(ulong *)(*(long *)(unaff_x19 + 0x240) + 0x48) = uVar21;
    }
    bVar3 = false;
    uVar31 = 0;
    *(short *)(unaff_x29 + -0x100) = (short)((uint)in_stack_000005b1 >> 0x10);
    *(ushort *)(unaff_x29 + -0xf2) = (ushort)bVar23;
    *(undefined1 *)(unaff_x19 + 0x281) = 0;
    *(undefined1 *)(unaff_x19 + 0x282) = 0;
    goto LAB_100759220;
  }
  puVar45 = (ulong *)_malloc(0x10);
  if (puVar45 == (ulong *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x10);
  }
  else {
    *puVar45 = (ulong)&UNK_108caa7fe;
    puVar45[1] = 0x38;
    pcVar46 = "";
    pcVar14 = (char *)_malloc(0x10);
    if (pcVar14 != (char *)0x0) {
      *(ulong **)pcVar14 = puVar45;
      *(undefined **)(pcVar14 + 8) = &UNK_10b209930;
      if (0x18 < bVar23) {
        lVar29 = **(long **)(unaff_x29 + -0xb8);
        **(long **)(unaff_x29 + -0xb8) = lVar29 + -1;
        LORelease();
        if (lVar29 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x29 - 0xc0U | 8);
        }
      }
      *(undefined1 *)(unaff_x19 + 0x2b0) = 1;
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
          ((bRam000000010b6396a0 - 1 < 2 ||
           ((bRam000000010b6396a0 != 0 &&
            (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha5ee7427efc338f3E
                                ), unaff_x28 = in_stack_00000068, cVar10 != '\0')))))) &&
         (uVar13 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha5ee7427efc338f3E
                             ),
         lVar29 = 
         ___ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha5ee7427efc338f3E
         , (uVar13 & 1) != 0)) {
        pcVar50 = &stack0x000004c0;
        lVar25 = *(long *)(unaff_x19 + 0x240);
        *(long *)(unaff_x29 + -0xe0) = lVar25 + 0xb2;
        *(long *)(unaff_x29 + -0xd0) = lVar25 + 0xb0;
        *(undefined1 **)(unaff_x29 + -0xc0) = &stack0x00000478;
        *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b208fd0;
        *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xe0;
        *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b21ec18;
        *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0xd0;
        *(undefined **)(unaff_x29 + -0x98) = &UNK_10b21ec38;
        pcVar46 = (char *)(unaff_x29 + -0xc0);
        puVar45 = (ulong *)0x1;
        plVar47 = (long *)0x3;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar29,&stack0x000002d0);
        lVar29 = 
        ___ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha5ee7427efc338f3E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          puVar48 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar48 = &UNK_10b3c24c8;
          }
          puVar7 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar7 = &UNK_109adfc03;
          }
          iVar12 = (**(code **)(puVar48 + 0x18))(puVar7,&stack0x00000410);
          if (iVar12 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar29,puVar7,puVar48,&stack0x00000410,&stack0x000002d0);
          }
        }
      }
      else {
        lVar29 = 
        ___ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha5ee7427efc338f3E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          in_stack_000004d8 =
               *(undefined8 *)
                (
                ___ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha5ee7427efc338f3E
                + 0x20);
          uVar33 = *(undefined8 *)
                    (
                    ___ZN11rama_socks56server3udp5relay14UdpSocketRelay4recv28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha5ee7427efc338f3E
                    + 0x28);
          in_stack_000004d0 = 4;
          puVar48 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar48 = &UNK_10b3c24c8;
          }
          puVar7 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar7 = &UNK_109adfc03;
          }
          iVar12 = (**(code **)(puVar48 + 0x18))(puVar7,&stack0x000004d0);
          if (iVar12 != 0) {
            *(undefined1 **)(unaff_x29 + -0xd0) = &stack0x000004c0;
            *(undefined **)(unaff_x29 + -200) = &DAT_101144e0c;
            *(char **)(unaff_x29 + -0xe0) = s_>north_packet_s_destination_auth_108ac4a33;
            *(long *)(unaff_x29 + -0xd8) = unaff_x29 + -0xd0;
            puVar45 = (ulong *)(unaff_x29 + -0xe0);
            pcVar46 = "";
            plVar47 = (long *)&stack0x000004e8;
            lVar25 = *(long *)(lVar29 + 0x60);
            uVar42 = *(undefined8 *)(lVar29 + 0x68);
            lVar24 = *(long *)(lVar29 + 0x50);
            uVar43 = *(undefined8 *)(lVar29 + 0x58);
            uVar36 = 1;
            if (lVar24 == 0) {
              uVar36 = 2;
            }
            uVar20 = *(undefined4 *)(lVar29 + 8);
            uVar8 = *(undefined4 *)(lVar29 + 0xc);
            pcVar50 = &stack0x00000478;
            uVar44 = 1;
            if (lVar25 == 0) {
              uVar44 = 2;
            }
            *(undefined8 *)(unaff_x29 + -0x88) = in_stack_000004d8;
            *(undefined8 *)(unaff_x29 + -0x90) = 4;
            *(undefined8 *)(unaff_x29 + -0x80) = uVar33;
            *(char **)(unaff_x29 + -0x70) = s__108b39f4f;
            *(undefined1 **)(unaff_x29 + -0x68) = &stack0x00000458;
            *(undefined8 *)(unaff_x29 + -0xc0) = uVar36;
            *(long *)(unaff_x29 + -0xb8) = lVar24;
            *(undefined8 *)(unaff_x29 + -0xb0) = uVar43;
            *(undefined8 *)(unaff_x29 + -0xa8) = uVar44;
            *(long *)(unaff_x29 + -0xa0) = lVar25;
            *(undefined8 *)(unaff_x29 + -0x98) = uVar42;
            *(undefined4 *)(unaff_x29 + -0x78) = uVar20;
            *(undefined4 *)(unaff_x29 + -0x74) = uVar8;
            (**(code **)(puVar48 + 0x20))(puVar7,unaff_x29 + -0xc0);
          }
        }
      }
      plVar35 = (long *)&UNK_10b2099a8;
      (*(code *)&DAT_100de4f54)(pcVar14);
      in_stack_000004c0 = pcVar14;
LAB_100759200:
      if (plVar35[1] != 0) {
LAB_100759208:
        _free(pcVar14);
      }
LAB_100759210:
      *(undefined1 *)(unaff_x19 + 0x281) = 0;
LAB_100759214:
      *(undefined1 *)(unaff_x19 + 0x282) = 0;
      goto LAB_10075921c;
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x10);
  }
LAB_10075ae84:
                    /* WARNING: Does not return */
  pcVar22 = (code *)SoftwareBreakpoint(1,0x10075ae88);
  (*pcVar22)();
}

