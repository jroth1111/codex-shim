
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006f5eb4(long *param_1)

{
  undefined8 *puVar1;
  short *psVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  code *pcVar11;
  byte bVar12;
  long lVar13;
  char cVar14;
  int iVar15;
  undefined *puVar16;
  undefined8 extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  char cVar20;
  undefined1 uVar21;
  undefined4 uVar22;
  uint uVar23;
  undefined8 uVar24;
  undefined2 uVar25;
  long *plVar26;
  undefined8 uVar27;
  long *plVar28;
  long *unaff_x19;
  ulong uVar29;
  undefined8 *puVar30;
  undefined8 *unaff_x21;
  undefined8 *puVar31;
  long *unaff_x22;
  long *plVar32;
  ulong uVar33;
  long lVar34;
  undefined2 *puVar35;
  undefined8 *puVar36;
  long *unaff_x26;
  undefined1 *unaff_x27;
  ulong uVar37;
  ulong *puVar38;
  long unaff_x29;
  undefined8 uVar39;
  long lVar40;
  long lVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined8 in_stack_00000010;
  byte *pbStack0000000000000020;
  undefined1 uStack0000000000000028;
  undefined8 *in_stack_00000030;
  undefined1 uStack0000000000000038;
  long in_stack_00000060;
  undefined1 uStack000000000000007c;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined4 uStack0000000000000098;
  undefined1 uStack000000000000009c;
  undefined4 uStack00000000000000a0;
  undefined1 uStack00000000000000a4;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined5 uStack00000000000000c0;
  undefined3 uStack00000000000000c5;
  undefined1 *in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  long in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  long in_stack_000000f8;
  long in_stack_00000100;
  long in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined4 uStack0000000000000120;
  undefined1 uStack0000000000000124;
  undefined4 uStack0000000000000128;
  undefined1 uStack000000000000012c;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  long in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined1 *puStack00000000000001c8;
  undefined *puStack00000000000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined2 uVar46;
  long *plVar45;
  long *plVar47;
  byte *pbVar48;
  byte bVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  ushort uVar52;
  ulong in_stack_00000220;
  undefined8 *in_stack_00000228;
  long *in_stack_00000230;
  undefined8 *in_stack_00000238;
  undefined8 in_stack_00000250;
  uint7 uVar53;
  undefined5 uVar54;
  undefined8 in_stack_00000f70;
  undefined8 in_stack_00000f78;
  
  puStack00000000000001c8 = &stack0x00000f10;
  puStack00000000000001d0 = &UNK_10b208fd0;
  plVar45 = (long *)0x1;
  FUN_1006f4fcc(&stack0x00000200);
  *(undefined1 *)((long)unaff_x21 + 2) = 1;
  *(undefined2 *)unaff_x21 = 0;
  *(undefined8 **)(in_stack_00000060 + 0x158) = unaff_x21;
  *(undefined8 *)(in_stack_00000060 + 0x160) = *(undefined8 *)(in_stack_00000060 + 0xf8);
  *(undefined1 *)(in_stack_00000060 + 0x182) = 0;
  auVar42 = FUN_1006f2eb0(in_stack_00000060 + 0x158);
  lVar34 = auVar42._8_8_;
  if ((auVar42._0_8_ & 1) != 0) {
    *unaff_x27 = 7;
    *unaff_x22 = 5;
    uVar21 = 4;
    goto LAB_1006f993c;
  }
  if (lVar34 == 0) {
    pbStack0000000000000020 = (byte *)0x26;
    plVar26 = (long *)0x2;
    plVar47 = (long *)&UNK_108caa573;
    *(undefined2 *)(in_stack_00000060 + 0x148) = 0;
    *(undefined1 *)(in_stack_00000060 + 0x14a) = 0;
    in_stack_00000230 = (long *)0x0;
    uVar54 = *(undefined5 *)(unaff_x29 + -0xc0);
    *unaff_x27 = 1;
    puVar31 = unaff_x21;
    puVar36 = unaff_x21;
    plVar32 = unaff_x26;
  }
  else {
    __ZN11rama_socks56server5Error2io17hf582f67700c49f33E(&stack0x00000200,lVar34);
    plVar26 = (long *)0x1;
    _uStack0000000000000038 = (undefined8 *)((ulong)param_1 >> 8 & 0xff);
    _uStack0000000000000028 = (ulong)param_1 >> 0x10 & 0xff;
    uVar21 = (undefined1)((ulong)param_1 >> 0x38);
    uStack00000000000000c0 = CONCAT14(uVar21,*(undefined4 *)((long)unaff_x19 + 0x1b));
    *(undefined4 *)(unaff_x29 + -0xc0) = *(undefined4 *)((long)unaff_x19 + 0x1b);
    *(undefined1 *)(unaff_x29 + -0xbc) = uVar21;
    *(undefined2 *)(in_stack_00000060 + 0x148) = 0;
    *(undefined1 *)(in_stack_00000060 + 0x14a) = 0;
    uVar54 = *(undefined5 *)(unaff_x29 + -0xc0);
    *unaff_x27 = 1;
    pbStack0000000000000020 = (byte *)0x1;
    puVar31 = (undefined8 *)0x108caa6;
    puVar36 = (undefined8 *)0x3e;
    plVar32 = (long *)&UNK_108caa601;
    plVar47 = (long *)&stack0x000001c8;
    in_stack_00000030 = in_stack_00000238;
  }
  uVar21 = lVar34 != 0;
  uVar50 = SUB81(plVar32,0);
  uStack000000000000007c = (undefined1)((uint5)uVar54 >> 0x20);
  FUN_100d57548(in_stack_00000010);
  if (plVar26 == (long *)0x4) {
    plVar32 = (long *)(in_stack_00000060 + 0xe0);
    *(char *)plVar32 = (char)plVar47;
    *(char *)(in_stack_00000060 + 0xe1) = (char)((ulong)plVar47 >> 8);
    *(undefined1 *)(in_stack_00000060 + 0xe5) = 1;
    *(byte **)(in_stack_00000060 + 0xa0) = pbStack0000000000000020;
    *(undefined1 *)(in_stack_00000060 + 0xa8) = uVar21;
    *(undefined1 *)(in_stack_00000060 + 0xa9) = uStack0000000000000038;
    *(undefined1 *)(in_stack_00000060 + 0xaa) = uStack0000000000000028;
    *(int *)(in_stack_00000060 + 0xab) = (int)uVar54;
    *(undefined1 *)(in_stack_00000060 + 0xaf) = uStack000000000000007c;
    *(undefined1 *)(in_stack_00000060 + 0xb0) = uVar50;
    *(char *)(in_stack_00000060 + 0xb7) = (char)((ulong)puVar31 >> 0x30);
    *(short *)(in_stack_00000060 + 0xb5) = (short)((ulong)puVar31 >> 0x20);
    *(int *)(in_stack_00000060 + 0xb1) = (int)puVar31;
    plVar47 = (long *)&stack0x000001c8;
    pbVar48 = (byte *)0x1;
    if (pbStack0000000000000020 != (byte *)0x8000000000000000) {
      *(undefined1 *)(in_stack_00000060 + 0xe5) = 0;
      plVar45 = *(long **)(in_stack_00000060 + 0xa8);
      uVar33 = *(ulong *)(in_stack_00000060 + 0xb0);
      lVar34 = *(long *)(in_stack_00000060 + 0x78);
      if ((ulong)(*(long *)(in_stack_00000060 + 0x68) - lVar34) < uVar33) {
        thunk_FUN_108a2e538((long *)(in_stack_00000060 + 0x68),lVar34,uVar33);
        lVar34 = *(long *)(in_stack_00000060 + 0x78);
      }
      _memcpy(*(long *)(in_stack_00000060 + 0x70) + lVar34 * 0x20,plVar45,uVar33 << 5);
      *(ulong *)(in_stack_00000060 + 0x78) = lVar34 + uVar33;
      FUN_105a20ad0(&stack0x00000200);
      unaff_x19 = (long *)&stack0x00000200;
      plVar47 = plVar45;
      pbVar48 = pbStack0000000000000020;
      param_1 = plVar45;
    }
    if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
      if (1 < bRam000000010b639550 - 1) {
        if (bRam000000010b639550 != 0) {
          cVar14 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8935f99fb2b86894E
                             );
          unaff_x19 = (long *)&stack0x00000200;
          if (cVar14 != '\0') goto LAB_1006f75a8;
        }
        goto LAB_1006f744c;
      }
LAB_1006f75a8:
      uVar33 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (
                         ___ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8935f99fb2b86894E
                         );
      if ((uVar33 & 1) == 0) goto LAB_1006f744c;
      in_stack_000000d8 =
           ___ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8935f99fb2b86894E
           + 0x30;
      pbVar48 = (byte *)(in_stack_00000060 + 0x80);
      plVar47 = (long *)&DAT_1011b7060;
      param_1 = (long *)&DAT_10112ca84;
      *(char **)(unaff_x29 + -0xa0) = s_5socks5_server__headers_exchange_108ac4582;
      *(undefined1 **)(unaff_x29 + -0x98) = &stack0x00000200;
      in_stack_000000c8 = &stack0x00000e80;
      _uStack00000000000000c0 = 1;
      in_stack_000000d0 = 1;
      FUN_1006fa894(&stack0x000000c0);
      plVar45 = plVar32;
    }
    else {
LAB_1006f744c:
      lVar34 = 
      ___ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8935f99fb2b86894E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        in_stack_00000088 =
             *(undefined8 *)
              (
              ___ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8935f99fb2b86894E
              + 0x20);
        in_stack_00000090 =
             *(undefined8 *)
              (
              ___ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8935f99fb2b86894E
              + 0x28);
        in_stack_00000080 = 5;
        puVar16 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar16 = &UNK_10b3c24c8;
        }
        puVar4 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_109adfc03;
        }
        iVar15 = (**(code **)(puVar16 + 0x18))(puVar4,&stack0x00000080);
        if (iVar15 != 0) {
          in_stack_000000d8 =
               ___ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8935f99fb2b86894E
               + 0x30;
          pbVar48 = (byte *)(in_stack_00000060 + 0x80);
          plVar47 = (long *)&DAT_1011b7060;
          param_1 = (long *)&DAT_10112ca84;
          in_stack_000000c8 = &stack0x00000f10;
          _uStack00000000000000c0 = 1;
          in_stack_000000d0 = 1;
          *(undefined8 *)(unaff_x29 + -0x90) = in_stack_00000090;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar34,puVar4,puVar16,unaff_x29 + -0xa0,&stack0x000000c0);
          plVar45 = plVar32;
        }
      }
    }
    *(long *)(in_stack_00000060 + 0xe8) = in_stack_00000060 + 0x48;
    *(undefined1 *)(in_stack_00000060 + 0xfc) = 0;
    plVar32 = (long *)(in_stack_00000060 + 0xe8);
    FUN_1006f2524(&stack0x00000200,plVar32,unaff_x26);
    cVar14 = (char)(in_stack_00000220 >> 0x10);
    if (cVar14 == '\x03') {
      uVar21 = 5;
      *unaff_x22 = 5;
      goto LAB_1006f993c;
    }
    uStack00000000000000a0 = *(undefined4 *)((long)unaff_x19 + 0x13);
    uStack00000000000000a4 = (undefined1)((ulong)pbVar48 >> 0x38);
    bVar49 = (byte)param_1;
    uVar25 = *(undefined2 *)((long)unaff_x19 + 0x1d);
    uVar7 = *(uint *)((long)unaff_x19 + 0x19);
    uVar52 = (ushort)in_stack_00000220;
    bVar12 = (byte)(in_stack_00000220 >> 0x38);
    uVar22 = *(undefined4 *)((long)unaff_x19 + 0x23);
    if (*(char *)(in_stack_00000060 + 0xfc) == '\x06') {
      uVar23 = (uint)*(byte *)(in_stack_00000060 + 0x12a);
      if (*(byte *)(in_stack_00000060 + 0x12a) < 7) {
        if (1 < uVar23 - 4) {
          if (uVar23 != 6) goto LAB_1006f7784;
          if (*(long *)(in_stack_00000060 + 0x130) != 0) {
            _uStack0000000000000038 = (undefined8 *)(ulong)(uint)bVar49;
            in_stack_00000030 = (undefined8 *)CONCAT44(in_stack_00000030._4_4_,(uint)uVar52);
            _free(*(undefined8 *)(in_stack_00000060 + 0x138));
            pbStack0000000000000020 = (byte *)(ulong)bVar12;
            _uStack0000000000000028 = (ulong)uVar7;
          }
          *(undefined1 *)(in_stack_00000060 + 0x128) = 0;
          unaff_x19 = (long *)&stack0x00000200;
        }
      }
      else if (uVar23 != 7) {
        if (uVar23 != 8) goto LAB_1006f7784;
        if ((*(byte *)(in_stack_00000060 + 0x108) != 0x1a) &&
           (0x18 < *(byte *)(in_stack_00000060 + 0x108))) {
          lVar34 = **(long **)(in_stack_00000060 + 0x110);
          **(long **)(in_stack_00000060 + 0x110) = lVar34 + -1;
          LORelease();
          if (lVar34 == 1) {
            DataMemoryBarrier(2,1);
            _uStack0000000000000038 = (undefined8 *)(ulong)(uint)bVar49;
            in_stack_00000030 = (undefined8 *)CONCAT44(in_stack_00000030._4_4_,(uint)uVar52);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE
                      (in_stack_00000060 + 0x110);
            pbStack0000000000000020 = (byte *)(ulong)bVar12;
            _uStack0000000000000028 = (ulong)uVar7;
          }
        }
      }
      *(undefined1 *)(in_stack_00000060 + 0x129) = 0;
    }
LAB_1006f7784:
    if (cVar14 == '\x02') {
      *(undefined4 *)((long)unaff_x19 + 0x13) = uStack00000000000000a0;
      lVar34 = CONCAT17(uStack00000000000000a4,(int7)pbVar48);
      in_stack_00000230 = (long *)_malloc(0x18);
      if (in_stack_00000230 == (long *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
        goto LAB_1006f9d04;
      }
      lVar13 = *unaff_x19;
      in_stack_00000230[1] = unaff_x19[1];
      *in_stack_00000230 = lVar13;
      in_stack_00000230[2] = lVar34;
      uStack0000000000000128 = uStack0000000000000098;
      puVar16 = &UNK_108caa791;
      uStack000000000000012c = uStack000000000000009c;
      puVar36 = (undefined8 *)0x13;
      in_stack_00000030 = (undefined8 *)&UNK_10b40db80;
      plVar26 = (long *)0x1;
      plVar28 = plVar45;
LAB_1006f8ae8:
      uVar50 = SUB81(puVar16,0);
      uVar33 = 0;
      uVar37 = 0;
      puVar31 = (undefined8 *)((ulong)puVar16 >> 8);
      *(undefined1 *)(in_stack_00000060 + 0xe3) = 0;
      *(undefined1 *)(in_stack_00000060 + 0xe5) = 0;
      uVar21 = true;
      plVar47 = plVar28;
      goto LAB_1006f8b04;
    }
    uStack0000000000000098 = uStack00000000000000a0;
    uStack000000000000009c = uStack00000000000000a4;
    *(ushort *)(in_stack_00000060 + 0xd8) = uVar52;
    *(undefined1 *)(in_stack_00000060 + 0xe3) = 1;
    plVar28 = (long *)(in_stack_00000060 + 0xb8);
    *plVar28 = (long)plVar45;
    *(long **)(in_stack_00000060 + 0xc0) = plVar47;
    *(char *)(in_stack_00000060 + 200) = (char)pbVar48;
    *(char *)(in_stack_00000060 + 0xc9) = (char)((ulong)pbVar48 >> 8);
    *(char *)(in_stack_00000060 + 0xca) = (char)((ulong)pbVar48 >> 0x10);
    *(undefined4 *)(in_stack_00000060 + 0xcb) = uStack00000000000000a0;
    *(undefined1 *)(in_stack_00000060 + 0xcf) = uStack00000000000000a4;
    *(byte *)(in_stack_00000060 + 0xd0) = bVar49;
    *(uint *)(in_stack_00000060 + 0xd1) = uVar7;
    *(char *)(in_stack_00000060 + 0xd7) = (char)((ulong)param_1 >> 0x38);
    *(undefined2 *)(in_stack_00000060 + 0xd5) = uVar25;
    *(char *)(in_stack_00000060 + 0xda) = cVar14;
    *(undefined4 *)(in_stack_00000060 + 0xdb) = uVar22;
    *(byte *)(in_stack_00000060 + 0xdf) = bVar12;
    if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
      if (1 < bRam000000010b639538 - 1) {
        if (bRam000000010b639538 != 0) {
          cVar14 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3eb022a97d47cb9fE
                             );
          unaff_x19 = (long *)&stack0x00000200;
          if (cVar14 != '\0') goto LAB_1006f79f8;
        }
        goto LAB_1006f7894;
      }
LAB_1006f79f8:
      uVar33 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (
                         ___ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3eb022a97d47cb9fE
                         );
      if ((uVar33 & 1) == 0) goto LAB_1006f7894;
      in_stack_000000d8 =
           ___ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3eb022a97d47cb9fE
           + 0x30;
      in_stack_00000220 = in_stack_00000060 + 0x80;
      pbVar48 = (byte *)(in_stack_00000060 + 0xe0);
      plVar47 = (long *)&
                        __ZN86__LT_rama_net__address__host_with_port__HostWithPort_u20_as_u20_core__fmt__Display_GT_3fmt17h2d971d6c0a5f333cE
      ;
      param_1 = (long *)&DAT_1011b7060;
      puVar36 = (undefined8 *)&DAT_10112ca84;
      in_stack_00000238 = (undefined8 *)&DAT_10118f66c;
      *(char **)(unaff_x29 + -0xa0) = s_socks5_server_w__destination_and_108ac45d2;
      *(undefined1 **)(unaff_x29 + -0x98) = &stack0x00000200;
      in_stack_000000c8 = &stack0x00000e80;
      _uStack00000000000000c0 = 1;
      in_stack_000000d0 = 1;
      FUN_1006fa758(&stack0x000000c0);
      plVar26 = plVar28;
    }
    else {
LAB_1006f7894:
      lVar34 = 
      ___ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3eb022a97d47cb9fE
      ;
      plVar26 = plVar45;
      puVar36 = in_stack_00000228;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        in_stack_000000b0 =
             *(undefined8 *)
              (
              ___ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3eb022a97d47cb9fE
              + 0x20);
        in_stack_000000b8 =
             *(undefined8 *)
              (
              ___ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3eb022a97d47cb9fE
              + 0x28);
        in_stack_000000a8 = 5;
        puVar16 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar16 = &UNK_10b3c24c8;
        }
        puVar4 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_109adfc03;
        }
        iVar15 = (**(code **)(puVar16 + 0x18))(puVar4,&stack0x000000a8);
        if (iVar15 != 0) {
          in_stack_000000d8 =
               ___ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3eb022a97d47cb9fE
               + 0x30;
          in_stack_00000220 = in_stack_00000060 + 0x80;
          pbVar48 = (byte *)(in_stack_00000060 + 0xe0);
          plVar47 = (long *)&
                            __ZN86__LT_rama_net__address__host_with_port__HostWithPort_u20_as_u20_core__fmt__Display_GT_3fmt17h2d971d6c0a5f333cE
          ;
          param_1 = (long *)&DAT_1011b7060;
          puVar36 = (undefined8 *)&DAT_10112ca84;
          in_stack_00000238 = (undefined8 *)&DAT_10118f66c;
          in_stack_000000c8 = &stack0x00000f10;
          _uStack00000000000000c0 = 1;
          in_stack_000000d0 = 1;
          *(undefined8 *)(unaff_x29 + -0x90) = in_stack_000000b8;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar34,puVar4,puVar16,unaff_x29 + -0xa0,&stack0x000000c0);
          plVar26 = plVar28;
        }
      }
    }
    bVar49 = *(byte *)(in_stack_00000060 + 0xd8);
    if (bVar49 < 2) {
      uVar21 = SUB81(param_1,0);
      uStack000000000000012c = (undefined1)((ulong)param_1 >> 0x38);
      if (bVar49 == 0) {
        uVar24 = *(undefined8 *)(in_stack_00000060 + 0x40);
        in_stack_00000230 = *(long **)(in_stack_00000060 + 0x78);
        in_stack_000000c8 = *(undefined1 **)(in_stack_00000060 + 0x50);
        _uStack00000000000000c0 = *(long *)(in_stack_00000060 + 0x48);
        in_stack_000000d8 = *(long *)(in_stack_00000060 + 0x60);
        in_stack_000000d0 = *(long *)(in_stack_00000060 + 0x58);
        unaff_x19[1] = (long)in_stack_000000c8;
        *unaff_x19 = _uStack00000000000000c0;
        unaff_x19[3] = in_stack_000000d8;
        unaff_x19[2] = in_stack_000000d0;
        lVar34 = *plVar28;
        lVar40 = *(long *)(in_stack_00000060 + 0xd0);
        lVar13 = *(long *)(in_stack_00000060 + 200);
        unaff_x19[8] = *(long *)(in_stack_00000060 + 0xc0);
        unaff_x19[7] = lVar34;
        in_stack_000000e8 = *(long *)(in_stack_00000060 + 0x70);
        in_stack_000000e0 = *(long *)(in_stack_00000060 + 0x68);
        unaff_x19[5] = in_stack_000000e8;
        unaff_x19[4] = in_stack_000000e0;
        *(undefined2 *)(in_stack_00000060 + 0xe3) = 0;
        unaff_x19[10] = lVar40;
        unaff_x19[9] = lVar13;
        in_stack_000000f8 = unaff_x19[7];
        in_stack_000000f0 = unaff_x19[6];
        in_stack_00000108 = unaff_x19[9];
        in_stack_00000100 = unaff_x19[8];
        *(long *)(in_stack_00000060 + 0x110) = in_stack_000000e8;
        *(long *)(in_stack_00000060 + 0x108) = in_stack_000000e0;
        *(long *)(in_stack_00000060 + 0x120) = in_stack_000000f8;
        *(long *)(in_stack_00000060 + 0x118) = in_stack_000000f0;
        *(long *)(in_stack_00000060 + 0x130) = in_stack_00000108;
        *(long *)(in_stack_00000060 + 0x128) = in_stack_00000100;
        *(undefined8 *)(in_stack_00000060 + 0x138) = in_stack_00000250;
        *(undefined1 **)(in_stack_00000060 + 0xf0) = in_stack_000000c8;
        *plVar32 = _uStack00000000000000c0;
        *(long *)(in_stack_00000060 + 0x100) = in_stack_000000d8;
        *(long *)(in_stack_00000060 + 0xf8) = in_stack_000000d0;
        *(undefined8 *)(in_stack_00000060 + 0x140) = uVar24;
        *(undefined1 *)(in_stack_00000060 + 0x340) = 0;
        in_stack_00000110 = in_stack_00000250;
        FUN_100853e00(&stack0x00000200,in_stack_00000060 + 0xe8,unaff_x26);
        if (plVar26 == (long *)0x5) {
          *unaff_x22 = 5;
          uVar21 = 6;
          goto LAB_1006f993c;
        }
        uStack0000000000000128 = *(undefined4 *)((long)unaff_x19 + 0x1b);
        uVar25 = *(undefined2 *)((long)unaff_x19 + 0x25);
        uVar22 = *(undefined4 *)((long)unaff_x19 + 0x21);
        FUN_100e50eac(in_stack_00000060 + 0xe8);
      }
      else {
        lVar34 = *(long *)(in_stack_00000060 + 0x40);
        in_stack_00000230 = *(long **)(in_stack_00000060 + 0x78);
        in_stack_000000c8 = *(undefined1 **)(in_stack_00000060 + 0x50);
        _uStack00000000000000c0 = *(long *)(in_stack_00000060 + 0x48);
        in_stack_000000d8 = *(long *)(in_stack_00000060 + 0x60);
        in_stack_000000d0 = *(long *)(in_stack_00000060 + 0x58);
        unaff_x19[1] = (long)in_stack_000000c8;
        *unaff_x19 = _uStack00000000000000c0;
        unaff_x19[3] = in_stack_000000d8;
        unaff_x19[2] = in_stack_000000d0;
        lVar13 = *plVar28;
        lVar41 = *(long *)(in_stack_00000060 + 0xd0);
        lVar40 = *(long *)(in_stack_00000060 + 200);
        unaff_x19[8] = *(long *)(in_stack_00000060 + 0xc0);
        unaff_x19[7] = lVar13;
        in_stack_000000e8 = *(long *)(in_stack_00000060 + 0x70);
        in_stack_000000e0 = *(long *)(in_stack_00000060 + 0x68);
        unaff_x19[5] = in_stack_000000e8;
        unaff_x19[4] = in_stack_000000e0;
        *(undefined2 *)(in_stack_00000060 + 0xe3) = 0;
        unaff_x19[10] = lVar41;
        unaff_x19[9] = lVar40;
        in_stack_000000f8 = unaff_x19[7];
        in_stack_000000f0 = unaff_x19[6];
        in_stack_00000108 = unaff_x19[9];
        in_stack_00000100 = unaff_x19[8];
        *(long *)(in_stack_00000060 + 0x110) = in_stack_000000e8;
        *(long *)(in_stack_00000060 + 0x108) = in_stack_000000e0;
        *(long *)(in_stack_00000060 + 0x120) = in_stack_000000f8;
        *(long *)(in_stack_00000060 + 0x118) = in_stack_000000f0;
        *(long *)(in_stack_00000060 + 0x130) = in_stack_00000108;
        *(long *)(in_stack_00000060 + 0x128) = in_stack_00000100;
        *(undefined8 *)(in_stack_00000060 + 0x138) = in_stack_00000250;
        *(undefined1 **)(in_stack_00000060 + 0xf0) = in_stack_000000c8;
        *plVar32 = _uStack00000000000000c0;
        *(long *)(in_stack_00000060 + 0x100) = in_stack_000000d8;
        *(long *)(in_stack_00000060 + 0xf8) = in_stack_000000d0;
        *(long *)(in_stack_00000060 + 0x140) = lVar34 + 0xc2;
        *(undefined1 *)(in_stack_00000060 + 0x248) = 0;
        in_stack_00000110 = in_stack_00000250;
        FUN_1011deaa8(&stack0x00000200,in_stack_00000060 + 0xe8,unaff_x26);
        if (plVar26 == (long *)0x5) {
          *unaff_x22 = 5;
          uVar21 = 7;
          goto LAB_1006f993c;
        }
        uStack0000000000000128 = *(undefined4 *)((long)unaff_x19 + 0x1b);
        uVar25 = *(undefined2 *)((long)unaff_x19 + 0x25);
        uVar22 = *(undefined4 *)((long)unaff_x19 + 0x21);
        FUN_100d75328(in_stack_00000060 + 0xe8);
      }
      uStack0000000000000038 = (undefined1)((ulong)param_1 >> 8);
      uStack0000000000000028 = (undefined1)((ulong)param_1 >> 0x10);
      puVar31 = (undefined8 *)
                (ulong)CONCAT34(CONCAT12((char)(in_stack_00000220 >> 0x38),uVar25),uVar22);
      uVar37 = (ulong)puVar36 >> 0x18;
      uVar33 = (ulong)puVar36 >> 0x10;
      unaff_x26 = (long *)(in_stack_00000220 & 0xff);
      pbStack0000000000000020 = pbVar48;
      in_stack_00000030 = in_stack_00000238;
    }
    else if (bVar49 == 2) {
      lVar34 = *(long *)(in_stack_00000060 + 0x40) + 0x38;
      in_stack_00000230 = *(long **)(in_stack_00000060 + 0x78);
      in_stack_000000c8 = *(undefined1 **)(in_stack_00000060 + 0x50);
      _uStack00000000000000c0 = *(long *)(in_stack_00000060 + 0x48);
      in_stack_000000d8 = *(long *)(in_stack_00000060 + 0x60);
      in_stack_000000d0 = *(long *)(in_stack_00000060 + 0x58);
      unaff_x19[1] = (long)in_stack_000000c8;
      *unaff_x19 = _uStack00000000000000c0;
      unaff_x19[3] = in_stack_000000d8;
      unaff_x19[2] = in_stack_000000d0;
      lVar13 = *plVar28;
      lVar41 = *(long *)(in_stack_00000060 + 0xd0);
      lVar40 = *(long *)(in_stack_00000060 + 200);
      unaff_x19[8] = *(long *)(in_stack_00000060 + 0xc0);
      unaff_x19[7] = lVar13;
      in_stack_000000e8 = *(long *)(in_stack_00000060 + 0x70);
      in_stack_000000e0 = *(long *)(in_stack_00000060 + 0x68);
      unaff_x19[5] = in_stack_000000e8;
      unaff_x19[4] = in_stack_000000e0;
      *(undefined2 *)(in_stack_00000060 + 0xe3) = 0;
      unaff_x19[10] = lVar41;
      unaff_x19[9] = lVar40;
      in_stack_000000f8 = unaff_x19[7];
      in_stack_000000f0 = unaff_x19[6];
      in_stack_00000108 = unaff_x19[9];
      in_stack_00000100 = unaff_x19[8];
      *(long *)(in_stack_00000060 + 0x110) = in_stack_000000e8;
      *(long *)(in_stack_00000060 + 0x108) = in_stack_000000e0;
      *(long *)(in_stack_00000060 + 0x120) = in_stack_000000f8;
      *(long *)(in_stack_00000060 + 0x118) = in_stack_000000f0;
      *(long *)(in_stack_00000060 + 0x130) = in_stack_00000108;
      *(long *)(in_stack_00000060 + 0x128) = in_stack_00000100;
      *(undefined8 *)(in_stack_00000060 + 0x138) = in_stack_00000250;
      *(undefined1 **)(in_stack_00000060 + 0xf0) = in_stack_000000c8;
      *plVar32 = _uStack00000000000000c0;
      *(long *)(in_stack_00000060 + 0x100) = in_stack_000000d8;
      *(long *)(in_stack_00000060 + 0xf8) = in_stack_000000d0;
      *(long *)(in_stack_00000060 + 0x140) = lVar34;
      puVar1 = (undefined8 *)(in_stack_00000060 + 0x364);
      puVar35 = (undefined2 *)(unaff_x29 + -0x9c);
      *(undefined1 *)(in_stack_00000060 + 0x364) = 0;
      *(undefined2 *)(in_stack_00000060 + 0x369) = 0;
      *(undefined4 *)(in_stack_00000060 + 0x365) = 0;
      *(long *)(in_stack_00000060 + 0x148) = lVar34;
      *(undefined8 *)(in_stack_00000060 + 0x158) = *(undefined8 *)(in_stack_00000060 + 0xf0);
      *(long *)(in_stack_00000060 + 0x150) = *plVar32;
      *(undefined8 *)(in_stack_00000060 + 0x168) = *(undefined8 *)(in_stack_00000060 + 0x100);
      *(undefined8 *)(in_stack_00000060 + 0x160) = *(undefined8 *)(in_stack_00000060 + 0xf8);
      *(undefined8 *)(in_stack_00000060 + 0x178) = *(undefined8 *)(in_stack_00000060 + 0x110);
      *(undefined8 *)(in_stack_00000060 + 0x170) = *(undefined8 *)(in_stack_00000060 + 0x108);
      *(undefined8 *)(in_stack_00000060 + 0x180) = *(undefined8 *)(in_stack_00000060 + 0x118);
      *(undefined1 *)(in_stack_00000060 + 0x36b) = 1;
      puVar36 = (undefined8 *)(in_stack_00000060 + 0x188);
      *(undefined8 *)(in_stack_00000060 + 400) = *(undefined8 *)(in_stack_00000060 + 0x128);
      *puVar36 = *(undefined8 *)(in_stack_00000060 + 0x120);
      *(undefined8 *)(in_stack_00000060 + 0x1a0) = *(undefined8 *)(in_stack_00000060 + 0x138);
      *(undefined8 *)(in_stack_00000060 + 0x198) = *(undefined8 *)(in_stack_00000060 + 0x130);
      in_stack_00000110 = in_stack_00000250;
      if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
        if (1 < bRam000000010b639700 - 1) {
          if (bRam000000010b639700 != 0) {
            cVar14 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h43d1a8190b748fa1E
                               );
            unaff_x19 = (long *)&stack0x00000200;
            if (cVar14 != '\0') goto LAB_1006f801c;
          }
          goto LAB_1006f7c98;
        }
LAB_1006f801c:
        uVar33 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h43d1a8190b748fa1E
                           );
        if ((uVar33 & 1) == 0) goto LAB_1006f7c98;
        param_1 = (long *)(
                          ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h43d1a8190b748fa1E
                          + 0x30);
        *(undefined8 **)(unaff_x29 + -0xa0) = puVar36;
        *(undefined **)(unaff_x29 + -0x98) =
             &
             __ZN86__LT_rama_net__address__host_with_port__HostWithPort_u20_as_u20_core__fmt__Display_GT_3fmt17h2d971d6c0a5f333cE
        ;
        pbStack0000000000000020 = (byte *)0x1;
        FUN_1007142e0(&stack0x00000200);
      }
      else {
LAB_1006f7c98:
        lVar34 = 
        ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h43d1a8190b748fa1E
        ;
        pbStack0000000000000020 = pbVar48;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          in_stack_00000150 =
               *(undefined8 *)
                (
                ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h43d1a8190b748fa1E
                + 0x20);
          in_stack_00000158 =
               *(undefined8 *)
                (
                ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h43d1a8190b748fa1E
                + 0x28);
          in_stack_00000148 = 5;
          puVar16 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar16 = &UNK_10b3c24c8;
          }
          puVar4 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar4 = &UNK_109adfc03;
          }
          iVar15 = (**(code **)(puVar16 + 0x18))(puVar4,&stack0x00000148);
          if (iVar15 != 0) {
            param_1 = (long *)(
                              ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h43d1a8190b748fa1E
                              + 0x30);
            *(undefined1 **)(unaff_x29 + -0xc0) = &stack0x00000f10;
            *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b208fd0;
            pbStack0000000000000020 = (byte *)0x1;
            *(undefined8 *)(unaff_x29 + -0x90) = in_stack_00000158;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar34,puVar4,puVar16,unaff_x29 + -0xa0,&stack0x00000200);
          }
        }
      }
      plVar45 = *(long **)(in_stack_00000060 + 0x180);
      if (plVar45 == (long *)0x0) {
        puVar16 = (undefined *)0x8;
        plVar26 = (long *)0x0;
      }
      else {
        puVar31 = *(undefined8 **)(in_stack_00000060 + 0x178);
        lVar34 = (long)plVar45 << 5;
        puVar16 = (undefined *)_malloc(lVar34);
        if (puVar16 == (undefined *)0x0) {
          FUN_107c03c64(8,lVar34);
          goto LAB_1006f9d04;
        }
        plVar47 = (long *)0x0;
        puVar30 = (undefined8 *)(puVar16 + 0x10);
        do {
          plVar26 = plVar45;
          if (lVar34 == 0) break;
          auVar42 = (**(code **)(puVar31[1] + 0x30))(*puVar31);
          plVar47 = (long *)((long)plVar47 + 1);
          *(undefined1 (*) [16])(puVar30 + -2) = auVar42;
          puVar8 = puVar31 + 3;
          uVar24 = puVar31[2];
          puVar31 = puVar31 + 4;
          puVar30[1] = *puVar8;
          *puVar30 = uVar24;
          lVar34 = lVar34 + -0x20;
          puVar30 = puVar30 + 4;
        } while (plVar45 != plVar47);
      }
      lVar34 = *unaff_x19;
      *(long *)(in_stack_00000060 + 0x1b0) = unaff_x19[1];
      *(long *)(in_stack_00000060 + 0x1a8) = lVar34;
      *(long **)(in_stack_00000060 + 0x1b8) = plVar45;
      *(undefined1 *)(in_stack_00000060 + 0x369) = 1;
      *(undefined1 *)(in_stack_00000060 + 0x36b) = 0;
      *(undefined8 *)(in_stack_00000060 + 0x1c8) = *(undefined8 *)(in_stack_00000060 + 400);
      *(undefined8 *)(in_stack_00000060 + 0x1c0) = *puVar36;
      *(undefined8 *)(in_stack_00000060 + 0x1d0) = *(undefined8 *)(in_stack_00000060 + 0x198);
      puVar31 = puVar1;
      if (*(char *)(in_stack_00000060 + 0x1c0) == '\x1a') {
        *(undefined1 *)(in_stack_00000060 + 0x362) = *(undefined1 *)(in_stack_00000060 + 0x199);
        *(undefined8 *)(in_stack_00000060 + 0x35a) = *(undefined8 *)(in_stack_00000060 + 0x191);
        *(undefined8 *)(in_stack_00000060 + 0x352) = *(undefined8 *)(in_stack_00000060 + 0x189);
        *(undefined2 *)(in_stack_00000060 + 0x350) = *(undefined2 *)(in_stack_00000060 + 0x1a0);
        lVar34 = *(long *)(in_stack_00000060 + 0x148);
        if (*(short *)(lVar34 + 0x28) == 1) {
          plVar45 = *(long **)(lVar34 + 0x30);
          uVar25 = 1;
          lVar13 = *plVar45;
          *plVar45 = lVar13 + 1;
          if (lVar13 < 0) goto LAB_1006f9d04;
        }
        else {
          uVar25 = 0;
          plVar26 = (long *)CONCAT26((short)((ulong)plVar26 >> 0x30),*(undefined6 *)(lVar34 + 0x2a))
          ;
          plVar45 = *(long **)(lVar34 + 0x30);
          lVar13 = *(long *)(lVar34 + 0x38);
        }
        *(int *)(unaff_x29 + -0x100) = (int)plVar26;
        uVar46 = (undefined2)((ulong)plVar26 >> 0x20);
        *(undefined2 *)(unaff_x29 + -0xfc) = uVar46;
        *(undefined2 *)(in_stack_00000060 + 0x370) = uVar25;
        *(int *)(in_stack_00000060 + 0x372) = (int)plVar26;
        *(undefined2 *)(in_stack_00000060 + 0x376) = uVar46;
        *(long **)(in_stack_00000060 + 0x378) = plVar45;
        *(long *)(in_stack_00000060 + 0x380) = lVar13;
        *(long *)(in_stack_00000060 + 0x388) = lVar34 + 0x58;
        *(undefined1 *)(in_stack_00000060 + 0x398) = 0;
        FUN_100692d10(&stack0x00000178,in_stack_00000060 + 0x370,unaff_x26);
        if (in_stack_00000178 == 3) {
          *(undefined1 *)puVar1 = 4;
          goto LAB_1006f992c;
        }
        plVar45 = (long *)(in_stack_00000060 + 0x1f8);
        *(undefined8 *)(in_stack_00000060 + 0x200) = in_stack_00000180;
        *plVar45 = in_stack_00000178;
        *(undefined8 *)(in_stack_00000060 + 0x210) = in_stack_00000190;
        *(undefined8 *)(in_stack_00000060 + 0x208) = in_stack_00000188;
        FUN_100dd101c(in_stack_00000060 + 0x370);
        if (*plVar45 == 2) {
          *(undefined8 *)(in_stack_00000060 + 0x3a8) = *(undefined8 *)(in_stack_00000060 + 0x208);
          *(undefined8 *)(in_stack_00000060 + 0x3a0) = *(undefined8 *)(in_stack_00000060 + 0x200);
          *(undefined1 *)(in_stack_00000060 + 0x368) = 1;
          if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) {
            if (1 < bRam000000010b639730 - 1) {
              if (bRam000000010b639730 != 0) {
                cVar14 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                   (&
                                    __ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5e9a86d47b7370fdE
                                   );
                unaff_x19 = (long *)&stack0x00000200;
                if (cVar14 != '\0') goto LAB_1006f8328;
              }
              goto LAB_1006f8c58;
            }
LAB_1006f8328:
            uVar33 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (
                               ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5e9a86d47b7370fdE
                               );
            if ((uVar33 & 1) == 0) goto LAB_1006f8c58;
            param_1 = (long *)(
                              ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5e9a86d47b7370fdE
                              + 0x30);
            *(long *)(unaff_x29 + -0xa0) = in_stack_00000060 + 0x3a0;
            *(undefined **)(unaff_x29 + -0x98) = &DAT_101144e0c;
            puVar16 = &stack0x00000f10;
            plVar26 = (long *)0x1;
            pbStack0000000000000020 = (byte *)0x1;
            FUN_100714068(&stack0x00000200);
          }
          else {
LAB_1006f8c58:
            lVar34 = 
            ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5e9a86d47b7370fdE
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              in_stack_000001a0 =
                   *(undefined8 *)
                    (
                    ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5e9a86d47b7370fdE
                    + 0x20);
              in_stack_000001a8 =
                   *(undefined8 *)
                    (
                    ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5e9a86d47b7370fdE
                    + 0x28);
              in_stack_00000198 = 4;
              puVar4 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar4 = &UNK_10b3c24c8;
              }
              puVar5 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar5 = &UNK_109adfc03;
              }
              iVar15 = (**(code **)(puVar4 + 0x18))(puVar5,&stack0x00000198);
              if (iVar15 != 0) {
                param_1 = (long *)(
                                  ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5e9a86d47b7370fdE
                                  + 0x30);
                *(undefined1 **)(unaff_x29 + -0xc0) = &stack0x00000f10;
                *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b208fd0;
                puVar16 = (undefined *)(unaff_x29 + -0xc0);
                plVar26 = (long *)0x1;
                pbStack0000000000000020 = (byte *)0x1;
                *(undefined8 *)(unaff_x29 + -0x90) = in_stack_000001a8;
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar34,puVar5,puVar4,unaff_x29 + -0xa0,&stack0x00000200);
              }
            }
          }
          *(undefined1 *)(in_stack_00000060 + 0x370) = 1;
          *(undefined1 *)(in_stack_00000060 + 0x39a) = 0;
          *(undefined1 *)(in_stack_00000060 + 0x398) = 1;
          *(undefined1 *)(in_stack_00000060 + 0x399) = *(undefined1 *)(in_stack_00000060 + 0x371);
          *(undefined8 *)(in_stack_00000060 + 0x388) = 0;
          *(undefined8 *)(in_stack_00000060 + 0x380) = 0;
          *(undefined8 *)(in_stack_00000060 + 0x378) = 0x1a;
          *(undefined2 *)(in_stack_00000060 + 0x390) = 0;
          *(undefined8 **)(in_stack_00000060 + 0x3b0) = (undefined8 *)(in_stack_00000060 + 0x378);
          *(long *)(in_stack_00000060 + 0x3b8) = in_stack_00000060 + 0x150;
          *(undefined1 *)(in_stack_00000060 + 0x3c8) = 0;
          auVar42 = func_0x0001006f34b4(in_stack_00000060 + 0x3b0,unaff_x26);
          if ((auVar42._0_8_ & 1) != 0) {
            *(undefined1 *)puVar1 = 5;
            goto LAB_1006f992c;
          }
          if (*(char *)(in_stack_00000060 + 0x3c8) == '\x06') {
            __ZN68__LT_bytes__bytes_mut__BytesMut_u20_as_u20_core__ops__drop__Drop_GT_4drop17he79217772a577486E
                      (in_stack_00000060 + 1000);
          }
          if (auVar42._8_8_ == 0) {
LAB_1006f8e40:
            if ((*(byte *)(in_stack_00000060 + 0x378) != 0x1a) &&
               (0x18 < *(byte *)(in_stack_00000060 + 0x378))) {
              lVar34 = **(long **)(in_stack_00000060 + 0x380);
              **(long **)(in_stack_00000060 + 0x380) = lVar34 + -1;
              LORelease();
              if (lVar34 == 1) {
                DataMemoryBarrier(2,1);
                __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE
                          (in_stack_00000060 + 0x380);
              }
            }
            uStack0000000000000038 = *(undefined1 *)(in_stack_00000060 + 0x370);
            uStack0000000000000028 = *(undefined1 *)(in_stack_00000060 + 0x371);
            puVar16 = &UNK_108caacf8;
            *(undefined1 *)(in_stack_00000060 + 0x368) = 0;
            in_stack_00000230 = *(long **)(in_stack_00000060 + 0x3a0);
            uVar21 = 2;
            pbStack0000000000000020 = (byte *)0x1c;
            plVar26 = (long *)0x2;
            in_stack_00000030 = *(undefined8 **)(in_stack_00000060 + 0x3a8);
          }
          else {
            __ZN11rama_socks56server5Error2io17hf582f67700c49f33E(&stack0x00000200,auVar42._8_8_);
            uStack0000000000000038 = (undefined1)((ulong)param_1 >> 8);
            uStack0000000000000028 = (undefined1)((ulong)param_1 >> 0x10);
            *(undefined4 *)(unaff_x29 + -0xa0) = *(undefined4 *)((long)unaff_x19 + 0x1b);
            *(char *)(unaff_x29 + -0x9c) = (char)((ulong)param_1 >> 0x38);
            if (plVar26 == (long *)0x4) goto LAB_1006f8e40;
            *(undefined4 *)(unaff_x29 + -200) = *(undefined4 *)(unaff_x29 + -0xa0);
            *(undefined1 *)(unaff_x29 + -0xc4) = *(undefined1 *)(unaff_x29 + -0x9c);
            if ((*(byte *)(in_stack_00000060 + 0x378) != 0x1a) &&
               (0x18 < *(byte *)(in_stack_00000060 + 0x378))) {
              lVar34 = **(long **)(in_stack_00000060 + 0x380);
              **(long **)(in_stack_00000060 + 0x380) = lVar34 + -1;
              LORelease();
              if (lVar34 == 1) {
                DataMemoryBarrier(2,1);
                __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE
                          (in_stack_00000060 + 0x380);
              }
            }
            puVar31 = (undefined8 *)0x108caae;
            if ((*(byte *)(in_stack_00000060 + 0x368) & 1) == 0) {
              uVar21 = 1;
              in_stack_00000030 = in_stack_00000238;
            }
            else {
              puVar36 = *(undefined8 **)(in_stack_00000060 + 0x3a8);
              pcVar11 = (code *)*puVar36;
              uVar24 = *(undefined8 *)(in_stack_00000060 + 0x3a0);
              if (pcVar11 != (code *)0x0) {
                (*pcVar11)(uVar24);
              }
              if (puVar36[1] != 0) {
                _free(uVar24);
              }
              uVar21 = 1;
              in_stack_00000030 = in_stack_00000238;
            }
          }
          auVar42._8_8_ = pbStack0000000000000020;
          auVar42._0_8_ = puVar16;
          *(undefined1 *)(in_stack_00000060 + 0x368) = 0;
          plVar47 = (long *)&UNK_108caaeb1;
          puVar36 = (undefined8 *)0x30;
LAB_1006f98d8:
          *(undefined1 *)(in_stack_00000060 + 0x367) = 0;
          plVar45 = plVar47;
          goto LAB_1006f98e0;
        }
        *(undefined1 *)(in_stack_00000060 + 0x367) = 1;
        *(undefined8 *)(in_stack_00000060 + 0x1e0) = *(undefined8 *)(in_stack_00000060 + 0x200);
        *(long *)(in_stack_00000060 + 0x1d8) = *plVar45;
        *(undefined8 *)(in_stack_00000060 + 0x1f0) = *(undefined8 *)(in_stack_00000060 + 0x210);
        *(undefined8 *)(in_stack_00000060 + 0x1e8) = *(undefined8 *)(in_stack_00000060 + 0x208);
        psVar2 = (short *)(in_stack_00000060 + 0x3a8);
        func_0x0001060f9284(psVar2);
        if (*psVar2 == 2) {
          *(undefined8 *)(in_stack_00000060 + 0x378) = *(undefined8 *)(in_stack_00000060 + 0x3b0);
          if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) {
            if (1 < bRam000000010b639760 - 1) {
              if (bRam000000010b639760 != 0) {
                cVar14 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                   (&
                                    __ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h80fab299ebc74ae2E
                                   );
                unaff_x19 = (long *)&stack0x00000200;
                if (cVar14 != '\0') goto LAB_1006f8400;
              }
              goto LAB_1006f9670;
            }
LAB_1006f8400:
            uVar33 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (
                               ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h80fab299ebc74ae2E
                               );
            if ((uVar33 & 1) == 0) goto LAB_1006f9670;
            param_1 = (long *)(
                              ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h80fab299ebc74ae2E
                              + 0x30);
            *(long *)(unaff_x29 + -0xa0) = in_stack_00000060 + 0x378;
            *(undefined **)(unaff_x29 + -0x98) =
                 &
                 __ZN58__LT_std__io__error__Error_u20_as_u20_core__fmt__Debug_GT_3fmt17heced06dcf81bbc5fE
            ;
            puVar16 = &stack0x00000f10;
            plVar26 = (long *)0x1;
            pbStack0000000000000020 = (byte *)0x1;
            FUN_10071490c(&stack0x00000200);
          }
          else {
LAB_1006f9670:
            lVar34 = 
            ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h80fab299ebc74ae2E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              in_stack_000001b8 =
                   *(undefined8 *)
                    (
                    ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h80fab299ebc74ae2E
                    + 0x20);
              in_stack_000001c0 =
                   *(undefined8 *)
                    (
                    ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h80fab299ebc74ae2E
                    + 0x28);
              in_stack_000001b0 = 4;
              puVar4 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar4 = &UNK_10b3c24c8;
              }
              puVar5 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar5 = &UNK_109adfc03;
              }
              iVar15 = (**(code **)(puVar4 + 0x18))(puVar5,&stack0x000001b0);
              if (iVar15 != 0) {
                param_1 = (long *)(
                                  ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h80fab299ebc74ae2E
                                  + 0x30);
                *(undefined1 **)(unaff_x29 + -0xc0) = &stack0x00000f10;
                *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b208fd0;
                puVar16 = (undefined *)(unaff_x29 + -0xc0);
                plVar26 = (long *)0x1;
                pbStack0000000000000020 = (byte *)0x1;
                *(undefined8 *)(unaff_x29 + -0x90) = in_stack_000001c0;
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar34,puVar5,puVar4,unaff_x29 + -0xa0,&stack0x00000200);
              }
            }
          }
          *(undefined1 *)(in_stack_00000060 + 0x370) = 1;
          *(undefined1 *)(in_stack_00000060 + 0x3a2) = 0;
          *(undefined1 *)(in_stack_00000060 + 0x3a0) = 1;
          *(undefined1 *)(in_stack_00000060 + 0x3a1) = *(undefined1 *)(in_stack_00000060 + 0x371);
          *(undefined8 *)(in_stack_00000060 + 0x390) = 0;
          *(undefined8 *)(in_stack_00000060 + 0x388) = 0;
          *(undefined8 *)(in_stack_00000060 + 0x380) = 0x1a;
          *(undefined2 *)(in_stack_00000060 + 0x398) = 0;
          *(long *)(in_stack_00000060 + 0x3c8) = in_stack_00000060 + 0x380;
          *(long *)(in_stack_00000060 + 0x3d0) = in_stack_00000060 + 0x150;
          *(undefined1 *)(in_stack_00000060 + 0x3e0) = 0;
          auVar42 = func_0x0001006f34b4(in_stack_00000060 + 0x3c8,unaff_x26);
          if ((auVar42._0_8_ & 1) != 0) {
            *(undefined1 *)puVar1 = 6;
            goto LAB_1006f992c;
          }
          if (*(char *)(in_stack_00000060 + 0x3e0) == '\x06') {
            __ZN68__LT_bytes__bytes_mut__BytesMut_u20_as_u20_core__ops__drop__Drop_GT_4drop17he79217772a577486E
                      (in_stack_00000060 + 0x400);
          }
          if (auVar42._8_8_ == 0) {
LAB_1006f984c:
            if ((*(byte *)(in_stack_00000060 + 0x380) != 0x1a) &&
               (0x18 < *(byte *)(in_stack_00000060 + 0x380))) {
              lVar34 = **(long **)(in_stack_00000060 + 0x388);
              **(long **)(in_stack_00000060 + 0x388) = lVar34 + -1;
              LORelease();
              if (lVar34 == 1) {
                DataMemoryBarrier(2,1);
                __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE
                          (in_stack_00000060 + 0x388);
              }
            }
            in_stack_00000230 = (long *)0x0;
            uStack0000000000000038 = *(undefined1 *)(in_stack_00000060 + 0x370);
            uStack0000000000000028 = *(undefined1 *)(in_stack_00000060 + 0x371);
            plVar26 = (long *)0x2;
            puVar16 = &UNK_108caad14;
            pbStack0000000000000020 = (byte *)0x21;
            uVar21 = 2;
          }
          else {
            __ZN11rama_socks56server5Error2io17hf582f67700c49f33E(&stack0x00000200,auVar42._8_8_);
            uStack0000000000000038 = (undefined1)((ulong)param_1 >> 8);
            uStack0000000000000028 = (undefined1)((ulong)param_1 >> 0x10);
            *(undefined4 *)(unaff_x29 + -0xa0) = *(undefined4 *)((long)unaff_x19 + 0x1b);
            *(char *)(unaff_x29 + -0x9c) = (char)((ulong)param_1 >> 0x38);
            if (plVar26 == (long *)0x4) goto LAB_1006f984c;
            puVar31 = (undefined8 *)0x108caae;
            *(undefined4 *)(unaff_x29 + -200) = *(undefined4 *)(unaff_x29 + -0xa0);
            *(undefined1 *)(unaff_x29 + -0xc4) = *(undefined1 *)(unaff_x29 + -0x9c);
            if (*(byte *)(in_stack_00000060 + 0x380) == 0x1a) {
              uVar21 = 1;
              in_stack_00000030 = in_stack_00000238;
            }
            else {
              if (0x18 < *(byte *)(in_stack_00000060 + 0x380)) {
                lVar34 = **(long **)(in_stack_00000060 + 0x388);
                **(long **)(in_stack_00000060 + 0x388) = lVar34 + -1;
                LORelease();
                if (lVar34 == 1) {
                  DataMemoryBarrier(2,1);
                  __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE
                            (in_stack_00000060 + 0x388);
                }
              }
              uVar21 = 1;
              in_stack_00000030 = in_stack_00000238;
            }
          }
          auVar42._8_8_ = pbStack0000000000000020;
          auVar42._0_8_ = puVar16;
          FUN_100de21d4(in_stack_00000060 + 0x378);
          plVar47 = (long *)&UNK_108caaee1;
          puVar36 = (undefined8 *)0x35;
LAB_1006f98c8:
          if ((*(byte *)(in_stack_00000060 + 0x367) & 1) != 0) {
            FUN_100deb62c(in_stack_00000060 + 0x1d8);
          }
          goto LAB_1006f98d8;
        }
        *(undefined8 *)(in_stack_00000060 + 0x220) = *(undefined8 *)(in_stack_00000060 + 0x3b0);
        *(undefined8 *)(in_stack_00000060 + 0x218) = *(undefined8 *)psVar2;
        *(undefined8 *)(in_stack_00000060 + 0x230) = *(undefined8 *)(in_stack_00000060 + 0x3c0);
        *(undefined8 *)(in_stack_00000060 + 0x228) = *(undefined8 *)(in_stack_00000060 + 0x3b8);
        lVar34 = *(long *)(in_stack_00000060 + 0x148);
        if (*(short *)(lVar34 + 0x40) == 1) {
          plVar45 = *(long **)(lVar34 + 0x48);
          uVar25 = 1;
          lVar13 = *plVar45;
          *plVar45 = lVar13 + 1;
          if (lVar13 < 0) goto LAB_1006f9d04;
        }
        else {
          uVar25 = 0;
          plVar26 = (long *)CONCAT26((short)((ulong)plVar26 >> 0x30),*(undefined6 *)(lVar34 + 0x42))
          ;
          plVar45 = *(long **)(lVar34 + 0x48);
          lVar13 = *(long *)(lVar34 + 0x50);
        }
        *(int *)(unaff_x29 + -0x100) = (int)plVar26;
        uVar46 = (undefined2)((ulong)plVar26 >> 0x20);
        *(undefined2 *)(unaff_x29 + -0xfc) = uVar46;
        *(undefined2 *)(in_stack_00000060 + 0x370) = uVar25;
        *(int *)(in_stack_00000060 + 0x372) = (int)plVar26;
        *(undefined2 *)(in_stack_00000060 + 0x376) = uVar46;
        *(long **)(in_stack_00000060 + 0x378) = plVar45;
        *(long *)(in_stack_00000060 + 0x380) = lVar13;
        *(long *)(in_stack_00000060 + 0x388) = lVar34 + 0x58;
        *(undefined1 *)(in_stack_00000060 + 0x398) = 0;
        lVar34 = in_stack_00000060 + 0x370;
        FUN_100692d10(&stack0x000001c8,lVar34,unaff_x26);
        if (puStack00000000000001c8 == (undefined1 *)0x3) {
          uVar21 = 7;
LAB_1006f6bf4:
          *(undefined1 *)puVar1 = uVar21;
          goto LAB_1006f992c;
        }
        plVar45 = (long *)(in_stack_00000060 + 600);
        *(undefined **)(in_stack_00000060 + 0x260) = puStack00000000000001d0;
        *plVar45 = (long)puStack00000000000001c8;
        *(undefined8 *)(in_stack_00000060 + 0x270) = in_stack_000001e0;
        *(undefined8 *)(in_stack_00000060 + 0x268) = in_stack_000001d8;
        FUN_100dd101c(lVar34);
        if (*plVar45 == 2) {
          *(undefined8 *)(in_stack_00000060 + 0x3a8) = *(undefined8 *)(in_stack_00000060 + 0x268);
          *(undefined8 *)(in_stack_00000060 + 0x3a0) = *(undefined8 *)(in_stack_00000060 + 0x260);
          *(undefined1 *)(in_stack_00000060 + 0x366) = 1;
          if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) {
            if (1 < bRam000000010b639718 - 1) {
              if (bRam000000010b639718 != 0) {
                cVar14 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                   (&
                                    __ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4b6b2d06e421a3eaE
                                   );
                unaff_x19 = (long *)&stack0x00000200;
                if (cVar14 != '\0') goto LAB_1006f5a54;
              }
              goto LAB_1006f8f78;
            }
LAB_1006f5a54:
            uVar33 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (
                               ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4b6b2d06e421a3eaE
                               );
            if ((uVar33 & 1) == 0) goto LAB_1006f8f78;
            param_1 = (long *)(
                              ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4b6b2d06e421a3eaE
                              + 0x30);
            *(long *)(unaff_x29 + -0xa0) = in_stack_00000060 + 0x3a0;
            *(undefined **)(unaff_x29 + -0x98) = &DAT_101144e0c;
            puVar16 = &stack0x00000f10;
            plVar26 = (long *)0x1;
            pbStack0000000000000020 = (byte *)0x1;
            FUN_1007141a4(&stack0x00000200);
          }
          else {
LAB_1006f8f78:
            lVar34 = 
            ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4b6b2d06e421a3eaE
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              uVar24 = *(undefined8 *)
                        (
                        ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4b6b2d06e421a3eaE
                        + 0x20);
              uVar39 = *(undefined8 *)
                        (
                        ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4b6b2d06e421a3eaE
                        + 0x28);
              in_stack_000001e8 = 4;
              puVar4 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar4 = &UNK_10b3c24c8;
              }
              puVar5 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar5 = &UNK_109adfc03;
              }
              iVar15 = (**(code **)(puVar4 + 0x18))(puVar5,&stack0x000001e8);
              if (iVar15 != 0) {
                param_1 = (long *)(
                                  ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4b6b2d06e421a3eaE
                                  + 0x30);
                *(undefined1 **)(unaff_x29 + -0xc0) = &stack0x00000f10;
                *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b208fd0;
                puVar16 = (undefined *)(unaff_x29 + -0xc0);
                plVar26 = (long *)0x1;
                pbStack0000000000000020 = (byte *)0x1;
                *(undefined8 *)(unaff_x29 + -0x98) = uVar24;
                *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_000001e8;
                *(undefined8 *)(unaff_x29 + -0x90) = uVar39;
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar34,puVar5,puVar4,unaff_x29 + -0xa0,&stack0x00000200);
              }
            }
          }
          *(undefined1 *)(in_stack_00000060 + 0x370) = 1;
          *(undefined1 *)(in_stack_00000060 + 0x39a) = 0;
          *(undefined1 *)(in_stack_00000060 + 0x398) = 1;
          *(undefined1 *)(in_stack_00000060 + 0x399) = *(undefined1 *)(in_stack_00000060 + 0x371);
          *(undefined8 *)(in_stack_00000060 + 0x388) = 0;
          *(undefined8 *)(in_stack_00000060 + 0x380) = 0;
          *(undefined8 *)(in_stack_00000060 + 0x378) = 0x1a;
          *(undefined2 *)(in_stack_00000060 + 0x390) = 0;
          *(undefined8 **)(in_stack_00000060 + 0x3b0) = (undefined8 *)(in_stack_00000060 + 0x378);
          *(long *)(in_stack_00000060 + 0x3b8) = in_stack_00000060 + 0x150;
          *(undefined1 *)(in_stack_00000060 + 0x3c8) = 0;
          auVar42 = func_0x0001006f34b4(in_stack_00000060 + 0x3b0,unaff_x26);
          if ((auVar42._0_8_ & 1) != 0) {
            *(undefined1 *)puVar1 = 8;
            goto LAB_1006f992c;
          }
          if (*(char *)(in_stack_00000060 + 0x3c8) == '\x06') {
            __ZN68__LT_bytes__bytes_mut__BytesMut_u20_as_u20_core__ops__drop__Drop_GT_4drop17he79217772a577486E
                      (in_stack_00000060 + 1000);
          }
          if (auVar42._8_8_ == 0) {
LAB_1006f9154:
            if ((*(byte *)(in_stack_00000060 + 0x378) != 0x1a) &&
               (0x18 < *(byte *)(in_stack_00000060 + 0x378))) {
              lVar34 = **(long **)(in_stack_00000060 + 0x380);
              **(long **)(in_stack_00000060 + 0x380) = lVar34 + -1;
              LORelease();
              if (lVar34 == 1) {
                DataMemoryBarrier(2,1);
                __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE
                          (in_stack_00000060 + 0x380);
              }
            }
            uStack0000000000000038 = *(undefined1 *)(in_stack_00000060 + 0x370);
            uStack0000000000000028 = *(undefined1 *)(in_stack_00000060 + 0x371);
            puVar16 = &UNK_108caad35;
            *(undefined1 *)(in_stack_00000060 + 0x366) = 0;
            in_stack_00000230 = *(long **)(in_stack_00000060 + 0x3a0);
            uVar21 = 2;
            pbStack0000000000000020 = (byte *)0x1c;
            plVar26 = (long *)0x2;
            in_stack_00000030 = *(undefined8 **)(in_stack_00000060 + 0x3a8);
          }
          else {
            __ZN11rama_socks56server5Error2io17hf582f67700c49f33E(&stack0x00000200,auVar42._8_8_);
            uStack0000000000000038 = (undefined1)((ulong)param_1 >> 8);
            uStack0000000000000028 = (undefined1)((ulong)param_1 >> 0x10);
            *(undefined4 *)(unaff_x29 + -0xa0) = *(undefined4 *)((long)unaff_x19 + 0x1b);
            *(char *)(unaff_x29 + -0x9c) = (char)((ulong)param_1 >> 0x38);
            if (plVar26 == (long *)0x4) goto LAB_1006f9154;
            *(undefined4 *)(unaff_x29 + -200) = *(undefined4 *)(unaff_x29 + -0xa0);
            *(undefined1 *)(unaff_x29 + -0xc4) = *(undefined1 *)(unaff_x29 + -0x9c);
            if ((*(byte *)(in_stack_00000060 + 0x378) != 0x1a) &&
               (0x18 < *(byte *)(in_stack_00000060 + 0x378))) {
              lVar34 = **(long **)(in_stack_00000060 + 0x380);
              **(long **)(in_stack_00000060 + 0x380) = lVar34 + -1;
              LORelease();
              if (lVar34 == 1) {
                DataMemoryBarrier(2,1);
                __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE
                          (in_stack_00000060 + 0x380);
              }
            }
            puVar31 = (undefined8 *)0x108caaf;
            if ((*(byte *)(in_stack_00000060 + 0x366) & 1) == 0) {
              uVar21 = 1;
              in_stack_00000030 = in_stack_00000238;
            }
            else {
              puVar36 = *(undefined8 **)(in_stack_00000060 + 0x3a8);
              pcVar11 = (code *)*puVar36;
              uVar24 = *(undefined8 *)(in_stack_00000060 + 0x3a0);
              if (pcVar11 != (code *)0x0) {
                (*pcVar11)(uVar24);
              }
              if (puVar36[1] != 0) {
                _free(uVar24);
              }
              uVar21 = 1;
              in_stack_00000030 = in_stack_00000238;
            }
          }
          auVar42._8_8_ = pbStack0000000000000020;
          auVar42._0_8_ = puVar16;
          *(undefined1 *)(in_stack_00000060 + 0x366) = 0;
          plVar47 = (long *)&UNK_108caaf16;
          puVar36 = (undefined8 *)0x30;
LAB_1006f961c:
          *(undefined1 *)(in_stack_00000060 + 0x365) = 0;
          goto LAB_1006f98c8;
        }
        *(undefined1 *)(in_stack_00000060 + 0x365) = 1;
        *(undefined8 *)(in_stack_00000060 + 0x240) = *(undefined8 *)(in_stack_00000060 + 0x260);
        *(long *)(in_stack_00000060 + 0x238) = *plVar45;
        *(undefined8 *)(in_stack_00000060 + 0x250) = *(undefined8 *)(in_stack_00000060 + 0x270);
        *(undefined8 *)(in_stack_00000060 + 0x248) = *(undefined8 *)(in_stack_00000060 + 0x268);
        uVar52 = *(ushort *)(in_stack_00000060 + 0x218);
        *(undefined4 *)(unaff_x29 + -0xa0) = *(undefined4 *)(in_stack_00000060 + 0x21a);
        *(undefined2 *)(unaff_x29 + -0x9c) = *(undefined2 *)(in_stack_00000060 + 0x21e);
        bVar3 = (uVar52 & 1) == 0;
        if (bVar3) {
          uVar22 = *(undefined4 *)(unaff_x29 + -0xa0);
        }
        else {
          uVar22 = *(undefined4 *)(unaff_x29 + -0x9e);
          plVar26 = *(long **)(in_stack_00000060 + 0x220);
          puVar16 = (undefined *)
                    CONCAT44((int)((ulong)puVar16 >> 0x20),
                             *(undefined4 *)(in_stack_00000060 + 0x228));
          puVar35 = (undefined2 *)&stack0x00000f10;
        }
        auVar42._8_8_ = pbStack0000000000000020;
        auVar42._0_8_ = puVar16;
        auVar10._8_8_ = pbStack0000000000000020;
        auVar10._0_8_ = puVar16;
        uVar25 = *puVar35;
        *(undefined1 *)(in_stack_00000060 + 0x392) = 0;
        *(undefined1 *)(in_stack_00000060 + 0x390) = 0;
        *(undefined1 *)(in_stack_00000060 + 0x370) = 0x1a;
        *(bool *)(in_stack_00000060 + 0x371) = !bVar3;
        *(undefined4 *)((long)unaff_x21 + 0x222) = uVar22;
        *(long **)(in_stack_00000060 + 0x376) = plVar26;
        *(int *)(in_stack_00000060 + 0x37e) = (int)puVar16;
        *(undefined2 *)(in_stack_00000060 + 0x388) = uVar25;
        *(long *)(in_stack_00000060 + 0x398) = lVar34;
        *(long *)(in_stack_00000060 + 0x3a0) = in_stack_00000060 + 0x150;
        *(undefined1 *)(in_stack_00000060 + 0x3b0) = 0;
        auVar43 = func_0x0001006f34b4(in_stack_00000060 + 0x398,unaff_x26);
        if ((auVar43._0_8_ & 1) != 0) {
          *(undefined1 *)puVar1 = 9;
          goto LAB_1006f992c;
        }
        if (*(char *)(in_stack_00000060 + 0x3b0) == '\x06') {
          __ZN68__LT_bytes__bytes_mut__BytesMut_u20_as_u20_core__ops__drop__Drop_GT_4drop17he79217772a577486E
                    (in_stack_00000060 + 0x3d0);
        }
        if (auVar43._8_8_ != 0) {
          __ZN11rama_socks56server5Error2io17hf582f67700c49f33E(&stack0x00000200,auVar43._8_8_);
          uVar50 = (undefined1)((ulong)param_1 >> 8);
          uVar51 = (undefined1)((ulong)param_1 >> 0x10);
          if (plVar26 == (long *)0x4) goto LAB_1006f6230;
          plVar47 = (long *)&UNK_108caaf46;
          puVar31 = (undefined8 *)0x108caaf;
          *(undefined4 *)(unaff_x29 + -200) = *(undefined4 *)((long)unaff_x19 + 0x1b);
          *(char *)(unaff_x29 + -0xc4) = (char)((ulong)param_1 >> 0x38);
          if (*(byte *)(in_stack_00000060 + 0x370) == 0x1a) {
            uVar21 = 1;
            puVar36 = (undefined8 *)0x3c;
            in_stack_00000030 = in_stack_00000238;
            auVar42 = auVar10;
          }
          else {
            if (0x18 < *(byte *)(in_stack_00000060 + 0x370)) {
              lVar34 = **(long **)(in_stack_00000060 + 0x378);
              **(long **)(in_stack_00000060 + 0x378) = lVar34 + -1;
              LORelease();
              if (lVar34 == 1) {
                DataMemoryBarrier(2,1);
                __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE
                          (in_stack_00000060 + 0x378);
              }
            }
            uVar21 = 1;
            puVar36 = (undefined8 *)0x3c;
            in_stack_00000030 = in_stack_00000238;
          }
LAB_1006f9600:
          uStack0000000000000038 = uVar50;
          uStack0000000000000028 = uVar51;
          if ((*(byte *)(in_stack_00000060 + 0x365) & 1) != 0) {
            FUN_100deb62c(in_stack_00000060 + 0x238);
          }
          goto LAB_1006f961c;
        }
LAB_1006f6230:
        if ((*(byte *)(in_stack_00000060 + 0x370) != 0x1a) &&
           (0x18 < *(byte *)(in_stack_00000060 + 0x370))) {
          lVar34 = **(long **)(in_stack_00000060 + 0x378);
          **(long **)(in_stack_00000060 + 0x378) = lVar34 + -1;
          LORelease();
          if (lVar34 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE
                      (in_stack_00000060 + 0x378);
          }
        }
        *(long *)(in_stack_00000060 + 0x280) = in_stack_00000060 + 0x150;
        *(long *)(in_stack_00000060 + 0x288) = in_stack_00000060 + 0x365;
        *(undefined1 *)(in_stack_00000060 + 0x2d0) = 0;
        *(long *)(in_stack_00000060 + 0x278) = in_stack_00000060 + 0x280;
        iVar15 = *(int *)(*(long *)(in_stack_00000060 + 0x148) + 0x80);
        if (iVar15 == 1000000000) {
          *(undefined8 *)(in_stack_00000060 + 0x2e0) = 2;
        }
        else {
          __ZN5tokio4time5sleep5sleep17h2755eaf31c7f2ee9E
                    (&stack0x00000200,*(undefined8 *)(*(long *)(in_stack_00000060 + 0x148) + 0x78),
                     iVar15,&UNK_10b21f4e0);
          lVar34 = unaff_x19[8];
          lVar40 = unaff_x19[0xb];
          lVar13 = unaff_x19[10];
          *(long *)(in_stack_00000060 + 0x328) = unaff_x19[9];
          *(long *)(in_stack_00000060 + 800) = lVar34;
          *(long *)(in_stack_00000060 + 0x338) = lVar40;
          *(long *)(in_stack_00000060 + 0x330) = lVar13;
          lVar34 = unaff_x19[0xc];
          *(long *)(in_stack_00000060 + 0x348) = unaff_x19[0xd];
          *(long *)(in_stack_00000060 + 0x340) = lVar34;
          lVar34 = *unaff_x19;
          lVar40 = unaff_x19[3];
          lVar13 = unaff_x19[2];
          *(long *)(in_stack_00000060 + 0x2e8) = unaff_x19[1];
          *(long *)(in_stack_00000060 + 0x2e0) = lVar34;
          *(long *)(in_stack_00000060 + 0x2f8) = lVar40;
          *(long *)(in_stack_00000060 + 0x2f0) = lVar13;
          lVar40 = unaff_x19[4];
          lVar13 = unaff_x19[7];
          lVar34 = unaff_x19[6];
          *(long *)(in_stack_00000060 + 0x308) = unaff_x19[5];
          *(long *)(in_stack_00000060 + 0x300) = lVar40;
          *(long *)(in_stack_00000060 + 0x318) = lVar13;
          *(long *)(in_stack_00000060 + 0x310) = lVar34;
        }
        *(long *)(in_stack_00000060 + 0x2d8) = in_stack_00000060 + 0x2e0;
        pbStack0000000000000020 = (byte *)(in_stack_00000060 + 0x370);
        *(undefined1 *)(in_stack_00000060 + 0x369) = 0;
        lVar34 = *(long *)(in_stack_00000060 + 0x1a8);
        unaff_x19[9] = *(long *)(in_stack_00000060 + 0x1b0);
        unaff_x19[8] = lVar34;
        *(undefined1 *)(in_stack_00000060 + 0x367) = 0;
        lVar34 = *(long *)(in_stack_00000060 + 0x1d8);
        lVar40 = *(long *)(in_stack_00000060 + 0x1f0);
        lVar13 = *(long *)(in_stack_00000060 + 0x1e8);
        unaff_x19[1] = *(long *)(in_stack_00000060 + 0x1e0);
        *unaff_x19 = lVar34;
        unaff_x19[3] = lVar40;
        unaff_x19[2] = lVar13;
        *(undefined1 *)(in_stack_00000060 + 0x365) = 0;
        lVar40 = *(long *)(in_stack_00000060 + 0x238);
        lVar13 = *(long *)(in_stack_00000060 + 0x250);
        lVar34 = *(long *)(in_stack_00000060 + 0x248);
        unaff_x19[5] = *(long *)(in_stack_00000060 + 0x240);
        unaff_x19[4] = lVar40;
        unaff_x19[7] = lVar13;
        unaff_x19[6] = lVar34;
        *(undefined1 *)(in_stack_00000060 + 0x370) = 0;
        *(undefined1 *)(in_stack_00000060 + 0x36a) = 0;
        *(long *)(in_stack_00000060 + 0x378) = in_stack_00000060 + 0x278;
        *(long *)(in_stack_00000060 + 0x380) = in_stack_00000060 + 0x2d8;
        _memcpy(in_stack_00000060 + 0x388,&stack0x00000200,0xc78);
        *(byte **)(in_stack_00000060 + 0x1000) = pbStack0000000000000020;
        *(undefined8 **)(in_stack_00000060 + 0x1008) = (undefined8 *)(in_stack_00000060 + 0x378);
        in_stack_00000030 =
             (undefined8 *)
             (*
             ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
             )();
        if (*(char *)(in_stack_00000030 + 9) == '\x01') {
LAB_1006f63dc:
          if (*(char *)((long)in_stack_00000030 + 0x44) != '\x01' ||
              *(char *)((long)in_stack_00000030 + 0x45) != '\0') goto LAB_1006f63f0;
          FUN_10610bbb4(*(undefined8 *)*unaff_x26,((undefined8 *)*unaff_x26)[1]);
LAB_1006f6bf0:
          uVar21 = 10;
          goto LAB_1006f6bf4;
        }
        if (*(char *)(in_stack_00000030 + 9) != '\x02') {
          __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                    (in_stack_00000030,&DAT_100c35d48);
          *(undefined1 *)(in_stack_00000030 + 9) = 1;
          goto LAB_1006f63dc;
        }
LAB_1006f63f0:
        auVar44 = __ZN5tokio6macros7support12thread_rng_n17hfdc3db06a90f42f3E(3);
        uVar33 = auVar44._0_8_;
        puVar36 = (undefined8 *)0x0;
        puVar16 = (undefined *)0x0;
        do {
          uVar24 = auVar44._8_8_;
          uVar39 = auVar44._0_8_;
          uVar7 = (uint)((int)puVar16 + auVar44._0_4_) % 3;
          if (uVar7 == 2) {
            if ((*pbStack0000000000000020 >> 2 & 1) == 0) {
              FUN_1007569d8(unaff_x29 + -0xa0,in_stack_00000060 + 0x388,unaff_x26);
              auVar44._8_8_ = extraout_x1;
              auVar44._0_8_ = uVar39;
              auVar9._8_8_ = extraout_x1;
              auVar9._0_8_ = uVar39;
              plVar45 = *(long **)(unaff_x29 + -0xa0);
              if (plVar45 == (long *)0x5) {
                puVar36 = (undefined8 *)0x1;
                auVar44 = auVar9;
              }
              else {
                auVar42 = *(undefined1 (*) [16])(unaff_x29 + -0x98);
                uVar39 = *(undefined8 *)(unaff_x29 + -0x80);
                uVar24 = *(undefined8 *)(unaff_x29 + -0x88);
                uVar27 = *(undefined8 *)(unaff_x29 + -0x78);
                in_stack_00000230 = *(long **)(unaff_x29 + -0x70);
                puVar31 = *(undefined8 **)(unaff_x29 + -0x68);
                *pbStack0000000000000020 = *pbStack0000000000000020 | 4;
                if (plVar45 != (long *)0x4) {
                  *(undefined8 *)(unaff_x29 + -0xb0) = uVar27;
                  goto LAB_1006f6a44;
                }
              }
            }
          }
          else if (uVar7 == 1) {
            if ((*pbStack0000000000000020 >> 1 & 1) == 0) {
              if (*(long *)**(undefined8 **)(in_stack_00000060 + 0x380) != 2) {
                auVar42 = func_0x000106114748((long *)**(undefined8 **)(in_stack_00000060 + 0x380),
                                              unaff_x26);
                uVar24 = auVar42._8_8_;
                auVar44._8_8_ = uVar24;
                auVar44._0_8_ = uVar39;
                if ((auVar42._0_8_ & 1) == 0) {
                  *pbStack0000000000000020 = *pbStack0000000000000020 | 2;
                  plVar45 = (long *)0x6;
                  puVar31 = puVar36;
                  goto LAB_1006f69f0;
                }
              }
              auVar44._8_8_ = uVar24;
              auVar44._0_8_ = uVar39;
              puVar36 = (undefined8 *)0x1;
            }
          }
          else if ((*pbStack0000000000000020 & 1) == 0) {
            puVar31 = (undefined8 *)**(undefined8 **)(in_stack_00000060 + 0x378);
            bVar49 = *(byte *)(puVar31 + 10);
            if (bVar49 < 2) {
              if (bVar49 != 0) {
                FUN_107c05cc0(&UNK_10b23a538);
                goto LAB_1006f9d04;
              }
              uVar39 = puVar31[1];
              uVar24 = *puVar31;
              lVar34 = _calloc(0x2000,1);
              if (lVar34 == 0) {
                FUN_107c03c64(1,0x2000);
                goto LAB_1006f9d04;
              }
              puVar31[3] = uVar39;
              puVar31[2] = uVar24;
              puVar31[4] = lVar34;
              puVar31[5] = 0x2000;
              puVar31[7] = 0;
              puVar31[8] = 0;
              puVar31[6] = 0;
              *(undefined2 *)(puVar31 + 9) = 0;
            }
            else {
              if (bVar49 != 3) {
                FUN_107c05cc4(&UNK_10b23a538);
                goto LAB_1006f9d04;
              }
              uVar24 = puVar31[2];
            }
            _uStack0000000000000038 = puVar31;
            if (*(char *)(in_stack_00000030 + 9) != '\x01') {
              if (*(char *)(in_stack_00000030 + 9) != '\x02') {
                __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                          (in_stack_00000030,&DAT_100c35d48);
                *(undefined1 *)(in_stack_00000030 + 9) = 1;
                goto LAB_1006f65a4;
              }
              bVar49 = 0;
              cVar14 = '\0';
LAB_1006f65cc:
              puVar38 = puVar31 + 6;
              uVar29 = *puVar38;
              uVar39 = puVar31[4];
              uVar6 = puVar31[5];
              uVar17 = puVar31[7];
              _uStack0000000000000028 = puVar31[8];
              bVar12 = *(byte *)(puVar31 + 9);
              uVar37 = _uStack0000000000000028;
              if ((uVar17 < uVar6) && ((bVar12 & 1) == 0)) {
                *(undefined8 *)(unaff_x29 + -0xa0) = uVar39;
                *(ulong *)(unaff_x29 + -0x98) = uVar6;
                *(ulong *)(unaff_x29 + -0x90) = uVar17;
                *(ulong *)(unaff_x29 + -0x88) = uVar6;
                auVar42 = func_0x0001060f8cbc(uVar24,unaff_x26,unaff_x29 + -0xa0);
                uVar18 = auVar42._8_8_;
                if (((auVar42._0_8_ & 1) != 0) || (uVar18 != 0)) {
                  if ((auVar42._0_8_ & 1) == 0) {
                    if (uVar18 == 0) {
                      bVar12 = false;
                      goto LAB_1006f666c;
                    }
                    uVar24 = 1;
                    goto LAB_1006f6a04;
                  }
                  if (uVar29 != uVar17) {
                    bVar12 = 0;
                    lVar34 = uVar17 - uVar29;
                    uVar18 = uVar17;
                    if (uVar29 <= uVar17 && lVar34 != 0) goto LAB_1006f667c;
                    goto LAB_1006f6748;
                  }
LAB_1006f6858:
                  uVar17 = uVar18;
                  if (*(char *)((long)puVar31 + 0x49) == '\x01') {
                    auVar42 = __ZN5tokio2io4util30poll_proceed_and_make_progress17h3937a0c2fc43f741E
                                        (unaff_x26);
                    uVar18 = auVar42._8_8_;
                    uVar17 = uVar18;
                    if ((auVar42._0_8_ & 1) == 0) {
                      *(undefined1 *)((long)puVar31 + 0x49) = 0;
                      goto LAB_1006f69a8;
                    }
                  }
                  goto LAB_1006f6948;
                }
                uVar19 = *(ulong *)(unaff_x29 + -0x98);
                uVar18 = *(ulong *)(unaff_x29 + -0x90);
                if (uVar18 <= uVar19) {
                  bVar12 = uVar17 == uVar18;
                  *(byte *)(puVar31 + 9) = bVar12;
                  puVar31[7] = uVar18;
                  uVar17 = uVar18;
LAB_1006f666c:
                  bVar49 = 0;
                  goto LAB_1006f6674;
                }
LAB_1006f9aac:
                __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                          (0,uVar18,uVar19,&UNK_10b209248);
                goto LAB_1006f9d04;
              }
LAB_1006f6674:
              lVar34 = uVar17 - uVar29;
              uVar18 = uVar17;
              if (uVar17 < uVar29 || lVar34 == 0) {
LAB_1006f6748:
                *puVar38 = 0;
                puVar31[7] = 0;
                uVar18 = uVar37;
                if ((bVar12 & 1) == 0) {
                  if (uVar6 == 0) {
                    do {
                    /* WARNING: Do nothing block with infinite loop */
                    } while( true );
                  }
                  while( true ) {
                    *(undefined8 *)(unaff_x29 + -0xa0) = uVar39;
                    *(ulong *)(unaff_x29 + -0x98) = uVar6;
                    *(undefined8 *)(unaff_x29 + -0x90) = 0;
                    *(ulong *)(unaff_x29 + -0x88) = uVar6;
                    auVar42 = func_0x0001060f8cbc(uVar24,unaff_x26,unaff_x29 + -0xa0);
                    uVar18 = auVar42._8_8_;
                    if (((auVar42._0_8_ & 1) != 0) || (uVar18 != 0)) {
                      if ((auVar42._0_8_ & 1) != 0) goto LAB_1006f6858;
                      while( true ) {
                        if (uVar18 != 0) {
                          uVar24 = 1;
                          goto LAB_1006f6a04;
                        }
                        *puVar38 = 0;
                        puVar31[7] = 0;
                        *(undefined8 *)(unaff_x29 + -0xa0) = uVar39;
                        *(ulong *)(unaff_x29 + -0x98) = uVar6;
                        *(undefined8 *)(unaff_x29 + -0x90) = 0;
                        *(ulong *)(unaff_x29 + -0x88) = uVar6;
                        auVar42 = func_0x0001060f8cbc(uVar24,unaff_x26,unaff_x29 + -0xa0);
                        uVar18 = auVar42._8_8_;
                        if (((auVar42._0_8_ & 1) == 0) && (uVar18 == 0)) break;
                        if ((auVar42._0_8_ & 1) != 0) {
                          bVar49 = 0;
                          goto LAB_1006f6858;
                        }
                      }
                    }
                    uVar19 = *(ulong *)(unaff_x29 + -0x98);
                    uVar18 = *(ulong *)(unaff_x29 + -0x90);
                    if (uVar19 < uVar18) goto LAB_1006f9aac;
                    *(bool *)(puVar31 + 9) = uVar18 == 0;
                    puVar31[7] = uVar18;
                    if (uVar18 == 0) {
                      bVar49 = 0;
                      *puVar38 = 0;
                      puVar31[7] = 0;
                      uVar18 = uVar37;
                      goto LAB_1006f675c;
                    }
                    if (uVar6 < uVar18) {
                      uVar29 = 0;
                      goto LAB_1006f9ac8;
                    }
                    auVar42 = __ZN5tokio2io4util30poll_proceed_and_make_progress17h3937a0c2fc43f741E
                                        (unaff_x26);
                    uVar17 = auVar42._8_8_;
                    if ((auVar42._0_8_ & 1) != 0) break;
                    bVar49 = 0;
                    uVar37 = uVar18 + uVar37;
                    puVar31[8] = uVar37;
                    *(undefined1 *)((long)puVar31 + 0x49) = 1;
                    *puVar38 = 0;
                    puVar31[7] = 0;
                  }
                  bVar49 = 0;
                  bVar12 = 0;
                  uVar37 = uVar18;
                  goto LAB_1006f68b4;
                }
LAB_1006f675c:
                auVar42 = __ZN5tokio2io4util30poll_proceed_and_make_progress17h3937a0c2fc43f741E
                                    (unaff_x26);
                uVar17 = auVar42._8_8_;
                if ((auVar42._0_8_ & 1) != 0) goto LAB_1006f6948;
                uVar24 = 0;
              }
              else {
LAB_1006f667c:
                if (uVar6 < uVar18) {
LAB_1006f9ac8:
                  __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                            (uVar29,uVar18,uVar6,&UNK_10b23a520);
                  goto LAB_1006f9d04;
                }
                puVar36 = (undefined8 *)*unaff_x26;
                if (*(char *)(in_stack_00000030 + 9) != '\x01') {
                  if (*(char *)(in_stack_00000030 + 9) != '\x02') {
                    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                              (in_stack_00000030,&DAT_1060edbcc);
                    *(undefined1 *)(in_stack_00000030 + 9) = 1;
                    goto LAB_1006f66bc;
                  }
LAB_1006f66dc:
                  bVar49 = 0;
                  puVar31[6] = uVar18;
                  puVar31[8] = _uStack0000000000000028 + lVar34;
                  *(undefined1 *)((long)puVar31 + 0x49) = 1;
                  uVar37 = _uStack0000000000000028 + lVar34;
                  goto LAB_1006f6748;
                }
LAB_1006f66bc:
                cVar20 = *(char *)((long)in_stack_00000030 + 0x45);
                if (*(char *)((long)in_stack_00000030 + 0x44) != '\x01') {
LAB_1006f66d4:
                  *(char *)((long)in_stack_00000030 + 0x45) = cVar20;
                  goto LAB_1006f66dc;
                }
                if (cVar20 != '\0') {
                  cVar20 = cVar20 + -1;
                  goto LAB_1006f66d4;
                }
                FUN_10610bbb4(*puVar36,puVar36[1]);
                uVar17 = extraout_x1_01;
                uVar37 = uVar18;
LAB_1006f68b4:
                if (((bVar12 & 1) == 0) && (uVar37 < uVar6)) {
                  *(undefined8 *)(unaff_x29 + -0xa0) = uVar39;
                  *(ulong *)(unaff_x29 + -0x98) = uVar6;
                  *(ulong *)(unaff_x29 + -0x90) = uVar37;
                  *(ulong *)(unaff_x29 + -0x88) = uVar6;
                  auVar42 = func_0x0001060f8cbc(uVar24,unaff_x26,unaff_x29 + -0xa0);
                  uVar17 = auVar42._8_8_;
                  if (((auVar42._0_8_ & 1) == 0) && (uVar17 == 0)) {
                    uVar19 = *(ulong *)(unaff_x29 + -0x98);
                    uVar18 = *(ulong *)(unaff_x29 + -0x90);
                    if (uVar19 < uVar18) goto LAB_1006f9aac;
                    *(bool *)(puVar31 + 9) = uVar37 == uVar18;
                    puVar31[7] = uVar18;
                    uVar17 = uVar18;
                    goto LAB_1006f6948;
                  }
                  lVar34 = 1;
                  if ((auVar42._0_8_ & 1) != 0 || uVar17 == 0) {
                    lVar34 = 2;
                  }
                  uVar18 = uVar17;
                  if ((bVar49 & 1) != 0) goto LAB_1006f6954;
                }
                else {
LAB_1006f6948:
                  uVar18 = uVar17;
                  if ((bVar49 & 1) == 0) goto LAB_1006f69a8;
                  lVar34 = 2;
LAB_1006f6954:
                  uVar18 = uVar17;
                  if (*(char *)(in_stack_00000030 + 9) != '\x01') {
                    if (*(char *)(in_stack_00000030 + 9) == '\x02') goto LAB_1006f69a0;
                    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                              (in_stack_00000030,&DAT_1060edbcc);
                    *(undefined1 *)(in_stack_00000030 + 9) = 1;
                  }
                  *(undefined1 *)((long)in_stack_00000030 + 0x44) = 1;
                  *(char *)((long)in_stack_00000030 + 0x45) = cVar14;
                }
LAB_1006f69a0:
                uVar24 = 1;
                if (lVar34 == 2) goto LAB_1006f69a8;
              }
LAB_1006f6a04:
              auVar42._8_8_ = uVar18;
              auVar42._0_8_ = uVar24;
              in_stack_00000230 = (long *)0xaaaaaaab;
              if (puVar31[5] != 0) {
                _free(puVar31[4]);
              }
              *(undefined1 *)(puVar31 + 10) = 1;
              *pbStack0000000000000020 = *pbStack0000000000000020 | 1;
              plVar45 = (long *)0x5;
              uVar24 = in_stack_00000f70;
              uVar39 = in_stack_00000f78;
              goto LAB_1006f6a44;
            }
LAB_1006f65a4:
            bVar49 = *(byte *)((long)in_stack_00000030 + 0x44);
            cVar14 = *(char *)((long)in_stack_00000030 + 0x45);
            cVar20 = cVar14;
            if (bVar49 != 1) {
LAB_1006f65c4:
              *(char *)((long)in_stack_00000030 + 0x45) = cVar20;
              goto LAB_1006f65cc;
            }
            if (cVar14 != '\0') {
              cVar20 = cVar14 + -1;
              goto LAB_1006f65c4;
            }
            FUN_10610bbb4(*(undefined8 *)*unaff_x26,((undefined8 *)*unaff_x26)[1]);
            *(undefined1 *)(unaff_x29 + -0x9e) = 0;
            *(undefined2 *)(unaff_x29 + -0xa0) = 0;
            __ZN77__LT_tokio__task__coop__RestoreOnPending_u20_as_u20_core__ops__drop__Drop_GT_4drop17h13c7af1e56643a68E
                      (unaff_x29 - 0xa0U | 1);
            uVar18 = extraout_x1_00;
LAB_1006f69a8:
            *(undefined1 *)(puVar31 + 10) = 3;
            puVar36 = (undefined8 *)0x1;
            auVar44._8_8_ = uVar18;
            auVar44._0_8_ = uVar33 & 0xffffffff;
          }
          uVar7 = (int)puVar16 + 1;
          puVar16 = (undefined *)(ulong)uVar7;
        } while (uVar7 != 3);
        if ((int)puVar36 != 0) goto LAB_1006f6bf0;
        plVar45 = (long *)0x8;
        puVar31 = puVar36;
LAB_1006f69f0:
        in_stack_00000230 = (long *)0xaaaaaaab;
        uVar24 = in_stack_00000f70;
        uVar39 = in_stack_00000f78;
        auVar42 = auVar44;
LAB_1006f6a44:
        puVar36 = *(undefined8 **)(unaff_x29 + -0xb0);
        FUN_100e152ec(in_stack_00000060 + 0x388);
        lVar34 = (long)plVar45 + -5;
        if (plVar45 < (long *)0x5) {
          lVar34 = 2;
        }
        if (1 < lVar34) {
          if (lVar34 != 2) {
            __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108ca2bde,0x6b,&UNK_10b21f4f8);
LAB_1006f9d04:
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x1006f9d08);
            (*pcVar11)();
          }
          uVar21 = (undefined1)uVar24;
          uVar50 = (undefined1)((ulong)uVar24 >> 8);
          uVar51 = (undefined1)((ulong)uVar24 >> 0x10);
          bVar49 = (byte)uVar39;
          uVar53 = (uint7)((ulong)uVar39 >> 8);
          if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
             (((bRam000000010b6397a8 - 1 < 2 ||
               ((bRam000000010b6397a8 != 0 &&
                (cVar14 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                    (&
                                     __ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc84ef84c048e5a4cE
                                    ), cVar14 != '\0')))) &&
              (uVar33 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                  (
                                  ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc84ef84c048e5a4cE
                                  ), (uVar33 & 1) != 0)))) {
            *(undefined **)(unaff_x29 + -0xc0) = &UNK_108caae14;
            *(undefined8 *)(unaff_x29 + -0xb8) = 0x77;
            *(long *)(unaff_x29 + -0xd0) = in_stack_00000060 + 0x352;
            *(long *)(unaff_x29 + -0x100) = in_stack_00000060 + 0x350;
            *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0xc0;
            *(undefined **)(unaff_x29 + -0x98) = &UNK_10b208fd0;
            *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0xd0;
            *(undefined **)(unaff_x29 + -0x88) = &UNK_10b21ec18;
            *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x100;
            *(undefined **)(unaff_x29 + -0x78) = &UNK_10b21ec38;
            FUN_100714a48(&stack0x00000f10);
          }
          else {
            lVar34 = 
            ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc84ef84c048e5a4cE
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              uVar39 = *(undefined8 *)
                        (
                        ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc84ef84c048e5a4cE
                        + 0x28);
              puVar16 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar16 = &UNK_10b3c24c8;
              }
              puVar4 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar4 = &UNK_109adfc03;
              }
              iVar15 = (**(code **)(puVar16 + 0x18))(puVar4,&stack0x00000ef8);
              if (iVar15 != 0) {
                *(undefined **)(unaff_x29 + -0x100) = &UNK_108caae14;
                *(undefined8 *)(unaff_x29 + -0xf8) = 0x77;
                *(long *)(unaff_x29 + -0xf0) = in_stack_00000060 + 0x352;
                *(long *)(unaff_x29 + -0xd0) = in_stack_00000060 + 0x350;
                *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0x100;
                *(undefined **)(unaff_x29 + -0x98) = &UNK_10b208fd0;
                *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0xf0;
                *(undefined **)(unaff_x29 + -0x88) = &UNK_10b21ec18;
                *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xd0;
                *(undefined **)(unaff_x29 + -0x78) = &UNK_10b21ec38;
                *(undefined8 *)(unaff_x29 + -0xb0) = uVar39;
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar34,puVar4,puVar16,unaff_x29 + -0xc0,&stack0x00000f10);
              }
            }
          }
          *(int *)(unaff_x29 + -200) = (int)((ulong)uVar24 >> 0x18);
          *(char *)(unaff_x29 + -0xc4) = (char)((ulong)uVar24 >> 0x38);
          plVar26 = plVar45;
          in_stack_00000030 = puVar31;
LAB_1006f95b4:
          puVar31 = (undefined8 *)(ulong)uVar53;
          plVar47 = (long *)(ulong)bVar49;
          if ((long *)0x4 < plVar45) {
            FUN_100dd5fb0(&stack0x00000e80);
          }
          *(undefined1 *)(in_stack_00000060 + 0x36a) = 0;
          if (*(long *)(in_stack_00000060 + 0x2e0) != 2) {
            FUN_100de8a5c(in_stack_00000060 + 0x2e0);
          }
          if ((*(char *)(in_stack_00000060 + 0x2d0) == '\x03') &&
             (*(long *)(in_stack_00000060 + 0x2a8) != 0)) {
            _free(*(undefined8 *)(in_stack_00000060 + 0x2a0));
          }
          goto LAB_1006f9600;
        }
        if (lVar34 != 0) {
          if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
              ((bRam000000010b639790 - 1 < 2 ||
               ((bRam000000010b639790 != 0 &&
                (cVar14 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                    (&
                                     __ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbd472838aecf99d8E
                                    ), cVar14 != '\0')))))) &&
             (uVar33 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (
                                 ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbd472838aecf99d8E
                                 ), (uVar33 & 1) != 0)) {
            *(undefined **)(unaff_x29 + -0xc0) = &UNK_108caadc6;
            *(undefined8 *)(unaff_x29 + -0xb8) = 0x73;
            *(long *)(unaff_x29 + -0xd0) = in_stack_00000060 + 0x352;
            *(long *)(unaff_x29 + -0x100) = in_stack_00000060 + 0x350;
            *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0xc0;
            *(undefined **)(unaff_x29 + -0x98) = &UNK_10b208fd0;
            *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0xd0;
            *(undefined **)(unaff_x29 + -0x88) = &UNK_10b21ec18;
            *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x100;
            *(undefined **)(unaff_x29 + -0x78) = &UNK_10b21ec38;
            FUN_1007147d0(&stack0x00000f10);
          }
          else {
            lVar34 = 
            ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbd472838aecf99d8E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              uVar24 = *(undefined8 *)
                        (
                        ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbd472838aecf99d8E
                        + 0x28);
              puVar16 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar16 = &UNK_10b3c24c8;
              }
              puVar4 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar4 = &UNK_109adfc03;
              }
              iVar15 = (**(code **)(puVar16 + 0x18))(puVar4,&stack0x00000ed8);
              if (iVar15 != 0) {
                *(undefined **)(unaff_x29 + -0x100) = &UNK_108caadc6;
                *(undefined8 *)(unaff_x29 + -0xf8) = 0x73;
                *(long *)(unaff_x29 + -0xf0) = in_stack_00000060 + 0x352;
                *(long *)(unaff_x29 + -0xd0) = in_stack_00000060 + 0x350;
                *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0x100;
                *(undefined **)(unaff_x29 + -0x98) = &UNK_10b208fd0;
                *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0xf0;
                *(undefined **)(unaff_x29 + -0x88) = &UNK_10b21ec18;
                *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xd0;
                *(undefined **)(unaff_x29 + -0x78) = &UNK_10b21ec38;
                *(undefined8 *)(unaff_x29 + -0xb0) = uVar24;
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar34,puVar4,puVar16,unaff_x29 + -0xc0,&stack0x00000f10);
              }
            }
          }
          __ZN3std2io5error5Error3new17h949302c01fe11b24E(0x16,&UNK_108caadff,0x15);
          __ZN11rama_socks56server5Error2io17hf582f67700c49f33E(unaff_x29 + -0xa0);
          auVar42 = *(undefined1 (*) [16])(unaff_x29 + -0x98);
          uVar21 = *(undefined1 *)(unaff_x29 + -0x88);
          uVar50 = *(undefined1 *)(unaff_x29 + -0x87);
          uVar51 = *(undefined1 *)(unaff_x29 + -0x86);
          *(undefined4 *)(unaff_x29 + -200) = *(undefined4 *)(unaff_x29 + -0x85);
          *(undefined1 *)(unaff_x29 + -0xc4) = *(undefined1 *)(unaff_x29 + -0x81);
          bVar49 = *(byte *)(unaff_x29 + -0x80);
          uVar53 = *(uint7 *)(unaff_x29 + -0x7f);
          puVar36 = *(undefined8 **)(unaff_x29 + -0x78);
          in_stack_00000230 = *(long **)(unaff_x29 + -0x70);
          plVar26 = *(long **)(unaff_x29 + -0xa0);
          in_stack_00000030 = *(undefined8 **)(unaff_x29 + -0x68);
          goto LAB_1006f95b4;
        }
        puVar36 = auVar42._8_8_;
        if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
          puVar30 = (undefined8 *)
                    &
                    __ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7bb92bb3ad94e6a1E
          ;
          if (((1 < bRam000000010b639748 - 1) &&
              ((puVar36 = (undefined8 *)
                          &
                          __ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7bb92bb3ad94e6a1E
               , bRam000000010b639748 == 0 ||
               (cVar14 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                   (&
                                    __ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7bb92bb3ad94e6a1E
                                   ), puVar36 = puVar30, cVar14 == '\0')))) ||
             (uVar33 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (
                                 ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7bb92bb3ad94e6a1E
                                 ),
             puVar36 = (undefined8 *)
                       &
                       __ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7bb92bb3ad94e6a1E
             , (uVar33 & 1) == 0)) goto LAB_1006f6aa0;
          *(undefined **)(unaff_x29 + -0xc0) = &UNK_108caad51;
          *(undefined8 *)(unaff_x29 + -0xb8) = 0x91;
          *(long *)(unaff_x29 + -0xd0) = in_stack_00000060 + 0x352;
          *(long *)(unaff_x29 + -0x100) = in_stack_00000060 + 0x350;
          *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0xc0;
          *(undefined **)(unaff_x29 + -0x98) = &UNK_10b208fd0;
          *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0xd0;
          *(undefined **)(unaff_x29 + -0x88) = &UNK_10b21ec18;
          *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x100;
          *(undefined **)(unaff_x29 + -0x78) = &UNK_10b21ec38;
          FUN_100714694(&stack0x00000f10);
        }
        else {
LAB_1006f6aa0:
          puVar30 = puVar36;
          puVar36 = 
          ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7bb92bb3ad94e6a1E
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            puVar30 = (undefined8 *)
                      &
                      __ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7bb92bb3ad94e6a1E
            ;
            uVar24 = ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7bb92bb3ad94e6a1E
                     [5];
            puVar4 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar4 = &UNK_10b3c24c8;
            }
            puVar16 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar16 = &UNK_109adfc03;
            }
            iVar15 = (**(code **)(puVar4 + 0x18))(puVar16,&stack0x00000ec0);
            puVar31 = puVar36;
            if (iVar15 != 0) {
              *(undefined **)(unaff_x29 + -0x100) = &UNK_108caad51;
              *(undefined8 *)(unaff_x29 + -0xf8) = 0x91;
              *(long *)(unaff_x29 + -0xf0) = in_stack_00000060 + 0x352;
              *(long *)(unaff_x29 + -0xd0) = in_stack_00000060 + 0x350;
              *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0x100;
              *(undefined **)(unaff_x29 + -0x98) = &UNK_10b208fd0;
              *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0xf0;
              *(undefined **)(unaff_x29 + -0x88) = &UNK_10b21ec18;
              *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xd0;
              *(undefined **)(unaff_x29 + -0x78) = &UNK_10b21ec38;
              *(undefined8 *)(unaff_x29 + -0xb0) = uVar24;
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (puVar36,puVar16,puVar4,unaff_x29 + -0xc0,&stack0x00000f10);
            }
          }
        }
        if ((long *)0x4 < plVar45) {
          FUN_100dd5fb0(&stack0x00000e80);
        }
        if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
          puVar36 = (undefined8 *)
                    &
                    __ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha7e81d093f833529E
          ;
          puVar30 = (undefined8 *)
                    &
                    __ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha7e81d093f833529E
          ;
          if (((1 < bRam000000010b639778 - 1) &&
              ((bRam000000010b639778 == 0 ||
               (cVar14 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                   (&
                                    __ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha7e81d093f833529E
                                   ), cVar14 == '\0')))) ||
             (uVar33 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (
                                 ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha7e81d093f833529E
                                 ), (uVar33 & 1) == 0)) goto LAB_1006f6efc;
          *(long *)(unaff_x29 + -0x100) = in_stack_00000060 + 0x352;
          *(long *)(unaff_x29 + -0xc0) = in_stack_00000060 + 0x350;
          *(undefined1 **)(unaff_x29 + -0xa0) = &stack0x00000f10;
          *(undefined **)(unaff_x29 + -0x98) = &UNK_10b208fd0;
          *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0x100;
          *(undefined **)(unaff_x29 + -0x88) = &UNK_10b21ec18;
          *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xc0;
          *(undefined **)(unaff_x29 + -0x78) = &UNK_10b21ec38;
          FUN_10071441c(&stack0x00000e80);
        }
        else {
LAB_1006f6efc:
          puVar36 = puVar30;
          puVar30 = 
          ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha7e81d093f833529E
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            puVar36 = (undefined8 *)
                      &
                      __ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha7e81d093f833529E
            ;
            uVar24 = ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha7e81d093f833529E
                     [4];
            uVar39 = ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha7e81d093f833529E
                     [5];
            *(undefined8 *)(unaff_x29 + -0xe8) = 5;
            *(undefined8 *)(unaff_x29 + -0xe0) = uVar24;
            *(undefined8 *)(unaff_x29 + -0xd8) = uVar39;
            puVar4 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar4 = &UNK_10b3c24c8;
            }
            puVar16 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar16 = &UNK_109adfc03;
            }
            iVar15 = (**(code **)(puVar4 + 0x18))(puVar16,unaff_x29 + -0xe8);
            puVar31 = puVar30;
            if (iVar15 != 0) {
              *(undefined **)(unaff_x29 + -0xc0) = &UNK_108caad99;
              *(undefined8 *)(unaff_x29 + -0xb8) = 0x5b;
              *(long *)(unaff_x29 + -0xd0) = in_stack_00000060 + 0x352;
              *(long *)(unaff_x29 + -0x100) = in_stack_00000060 + 0x350;
              *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0xc0;
              *(undefined **)(unaff_x29 + -0x98) = &UNK_10b208fd0;
              *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0xd0;
              *(undefined **)(unaff_x29 + -0x88) = &UNK_10b21ec18;
              *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x100;
              *(undefined **)(unaff_x29 + -0x78) = &UNK_10b21ec38;
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (puVar30,puVar16,puVar4,&stack0x00000f10,&stack0x00000e80);
            }
          }
        }
        uVar21 = SUB81(puVar16,0);
        *(undefined1 *)(in_stack_00000060 + 0x36a) = 0;
        if (*(long *)(in_stack_00000060 + 0x2e0) != 2) {
          FUN_100de8a5c(in_stack_00000060 + 0x2e0);
        }
        if ((*(char *)(in_stack_00000060 + 0x2d0) == '\x03') &&
           (*(long *)(in_stack_00000060 + 0x2a8) != 0)) {
          _free(*(undefined8 *)(in_stack_00000060 + 0x2a0));
        }
        *(undefined1 *)(in_stack_00000060 + 0x365) = 0;
        *(undefined1 *)(in_stack_00000060 + 0x367) = 0;
        *(undefined1 *)(in_stack_00000060 + 0x369) = 0;
        *(undefined1 *)(in_stack_00000060 + 0x36b) = 0;
        FUN_100deb62c(in_stack_00000060 + 0x150);
        func_0x000100e3c8d4(in_stack_00000060 + 0x170);
        uStack0000000000000120 = *(undefined4 *)(unaff_x29 + -200);
        uStack0000000000000124 = *(undefined1 *)(unaff_x29 + -0xc4);
        *(undefined1 *)puVar1 = 1;
        plVar26 = (long *)0x4;
        in_stack_00000230 = unaff_x22;
        plVar47 = unaff_x22;
      }
      else {
        *(undefined8 *)(in_stack_00000060 + 0x380) = *(undefined8 *)(in_stack_00000060 + 400);
        *(undefined8 *)(in_stack_00000060 + 0x378) = *puVar36;
        *(undefined8 *)(in_stack_00000060 + 0x388) = *(undefined8 *)(in_stack_00000060 + 0x198);
        if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) {
          if (1 < bRam000000010b6396e8 - 1) {
            if (bRam000000010b6396e8 != 0) {
              cVar14 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0de88bbc7fbd1484E
                                 );
              unaff_x19 = (long *)&stack0x00000200;
              if (cVar14 != '\0') goto LAB_1006f81c8;
            }
            goto LAB_1006f8504;
          }
LAB_1006f81c8:
          uVar33 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0de88bbc7fbd1484E
                             );
          if ((uVar33 & 1) == 0) goto LAB_1006f8504;
          param_1 = (long *)(
                            ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0de88bbc7fbd1484E
                            + 0x30);
          *(undefined8 **)(unaff_x29 + -0xa0) = (undefined8 *)(in_stack_00000060 + 0x378);
          *(undefined **)(unaff_x29 + -0x98) =
               &
               __ZN72__LT_rama_net__address__domain__Domain_u20_as_u20_core__fmt__Display_GT_3fmt17hf58f7b8af32d5625E
          ;
          puVar16 = &stack0x00000f10;
          plVar26 = (long *)0x1;
          pbStack0000000000000020 = (byte *)0x1;
          FUN_100714558(&stack0x00000200);
        }
        else {
LAB_1006f8504:
          lVar34 = 
          ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0de88bbc7fbd1484E
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            in_stack_00000168 =
                 *(undefined8 *)
                  (
                  ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0de88bbc7fbd1484E
                  + 0x20);
            in_stack_00000170 =
                 *(undefined8 *)
                  (
                  ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0de88bbc7fbd1484E
                  + 0x28);
            in_stack_00000160 = 4;
            puVar4 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar4 = &UNK_10b3c24c8;
            }
            puVar5 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar5 = &UNK_109adfc03;
            }
            iVar15 = (**(code **)(puVar4 + 0x18))(puVar5,&stack0x00000160);
            if (iVar15 != 0) {
              param_1 = (long *)(
                                ___ZN126__LT_rama_socks5__server__udp__UdpRelay_LT_B_C_I_GT__u20_as_u20_rama_socks5__server__udp__Socks5UdpAssociatorSeal_LT_S_GT__GT_20accept_udp_associate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0de88bbc7fbd1484E
                                + 0x30);
              *(undefined1 **)(unaff_x29 + -0xc0) = &stack0x00000f10;
              *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b208fd0;
              puVar16 = (undefined *)(unaff_x29 + -0xc0);
              plVar26 = (long *)0x1;
              pbStack0000000000000020 = (byte *)0x1;
              *(undefined8 *)(unaff_x29 + -0x90) = in_stack_00000170;
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar34,puVar5,puVar4,unaff_x29 + -0xa0,&stack0x00000200);
            }
          }
        }
        *(undefined1 *)(in_stack_00000060 + 0x370) = 8;
        *(undefined1 *)(in_stack_00000060 + 0x3b2) = 0;
        *(undefined1 *)(in_stack_00000060 + 0x3b0) = 8;
        *(undefined1 *)(in_stack_00000060 + 0x3b1) = *(undefined1 *)(in_stack_00000060 + 0x371);
        *(undefined8 *)(in_stack_00000060 + 0x3a0) = 0;
        *(undefined8 *)(in_stack_00000060 + 0x398) = 0;
        *(undefined8 *)(in_stack_00000060 + 0x390) = 0x1a;
        *(undefined2 *)(in_stack_00000060 + 0x3a8) = 0;
        *(long *)(in_stack_00000060 + 0x3b8) = in_stack_00000060 + 0x390;
        *(long *)(in_stack_00000060 + 0x3c0) = in_stack_00000060 + 0x150;
        *(undefined1 *)(in_stack_00000060 + 0x3d0) = 0;
        auVar42 = func_0x0001006f34b4(in_stack_00000060 + 0x3b8,unaff_x26);
        if ((auVar42._0_8_ & 1) != 0) {
          *(undefined1 *)puVar1 = 3;
          goto LAB_1006f992c;
        }
        if (*(char *)(in_stack_00000060 + 0x3d0) == '\x06') {
          __ZN68__LT_bytes__bytes_mut__BytesMut_u20_as_u20_core__ops__drop__Drop_GT_4drop17he79217772a577486E
                    (in_stack_00000060 + 0x3f0);
        }
        if (auVar42._8_8_ == 0) {
LAB_1006f86dc:
          if ((*(byte *)(in_stack_00000060 + 0x390) != 0x1a) &&
             (0x18 < *(byte *)(in_stack_00000060 + 0x390))) {
            lVar34 = **(long **)(in_stack_00000060 + 0x398);
            **(long **)(in_stack_00000060 + 0x398) = lVar34 + -1;
            LORelease();
            if (lVar34 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE
                        (in_stack_00000060 + 0x398);
            }
          }
          in_stack_00000230 = (long *)0x0;
          uStack0000000000000038 = *(undefined1 *)(in_stack_00000060 + 0x370);
          uStack0000000000000028 = *(undefined1 *)(in_stack_00000060 + 0x371);
          plVar26 = (long *)0x2;
          pbStack0000000000000020 = (byte *)0x10;
          uVar21 = 2;
          puVar16 = &UNK_108cdc9e0;
        }
        else {
          __ZN11rama_socks56server5Error2io17hf582f67700c49f33E(&stack0x00000200,auVar42._8_8_);
          uStack0000000000000038 = (undefined1)((ulong)param_1 >> 8);
          uStack0000000000000028 = (undefined1)((ulong)param_1 >> 0x10);
          *(undefined4 *)(unaff_x29 + -0xa0) = *(undefined4 *)((long)unaff_x19 + 0x1b);
          *(char *)(unaff_x29 + -0x9c) = (char)((ulong)param_1 >> 0x38);
          if (plVar26 == (long *)0x4) goto LAB_1006f86dc;
          puVar31 = (undefined8 *)0x108caae;
          *(undefined4 *)(unaff_x29 + -200) = *(undefined4 *)(unaff_x29 + -0xa0);
          *(undefined1 *)(unaff_x29 + -0xc4) = *(undefined1 *)(unaff_x29 + -0x9c);
          if ((*(byte *)(in_stack_00000060 + 0x390) != 0x1a) &&
             (0x18 < *(byte *)(in_stack_00000060 + 0x390))) {
            lVar34 = **(long **)(in_stack_00000060 + 0x398);
            **(long **)(in_stack_00000060 + 0x398) = lVar34 + -1;
            LORelease();
            if (lVar34 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE
                        (in_stack_00000060 + 0x398);
            }
          }
          uVar21 = 1;
          in_stack_00000030 = in_stack_00000238;
        }
        auVar42._8_8_ = pbStack0000000000000020;
        auVar42._0_8_ = puVar16;
        auVar43._8_8_ = pbStack0000000000000020;
        auVar43._0_8_ = puVar16;
        if (0x18 < *(byte *)(in_stack_00000060 + 0x378)) {
          lVar34 = **(long **)(in_stack_00000060 + 0x380);
          **(long **)(in_stack_00000060 + 0x380) = lVar34 + -1;
          LORelease();
          if (lVar34 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE
                      (in_stack_00000060 + 0x380);
            plVar45 = (long *)&UNK_108caae8d;
            puVar36 = (undefined8 *)0x24;
            auVar42 = auVar43;
            goto LAB_1006f98e0;
          }
        }
        plVar45 = (long *)&UNK_108caae8d;
        puVar36 = (undefined8 *)0x24;
LAB_1006f98e0:
        pbStack0000000000000020 = auVar42._8_8_;
        if ((*(byte *)(in_stack_00000060 + 0x369) & 1) != 0) {
          func_0x000100e3c8d4(in_stack_00000060 + 0x1a8);
        }
        *(undefined1 *)(in_stack_00000060 + 0x369) = 0;
        *(undefined1 *)(in_stack_00000060 + 0x36b) = 0;
        FUN_100deb62c(in_stack_00000060 + 0x150);
        func_0x000100e3c8d4(in_stack_00000060 + 0x170);
        uStack0000000000000120 = *(undefined4 *)(unaff_x29 + -200);
        uStack0000000000000124 = *(undefined1 *)(unaff_x29 + -0xc4);
        *(undefined1 *)puVar1 = 1;
        plVar47 = auVar42._0_8_;
        if (plVar26 == (long *)0x5) {
LAB_1006f992c:
          *unaff_x22 = 5;
          uVar21 = 8;
          goto LAB_1006f993c;
        }
      }
      uStack0000000000000128 = uStack0000000000000120;
      uStack000000000000012c = uStack0000000000000124;
      FUN_100e63f8c(plVar32);
      uVar37 = (ulong)puVar36 >> 0x18;
      uVar33 = (ulong)puVar36 >> 0x10;
      unaff_x26 = plVar45;
    }
    else {
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
         (((bRam000000010b639568 - 1 < 2 ||
           ((bRam000000010b639568 != 0 &&
            (cVar14 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbd10110918de3ebdE
                                ), cVar14 != '\0')))) &&
          (uVar33 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (
                              ___ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbd10110918de3ebdE
                              ), (uVar33 & 1) != 0)))) {
        in_stack_000000d8 =
             ___ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbd10110918de3ebdE
             + 0x30;
        *(char **)(unaff_x29 + -0xa0) = s_socks5_server_w__destination_for_108ac4644;
        *(undefined1 **)(unaff_x29 + -0x98) = &stack0x00000200;
        in_stack_000000c8 = &stack0x00000e80;
        _uStack00000000000000c0 = 1;
        in_stack_000000d0 = 1;
        FUN_1006fa61c(&stack0x000000c0);
      }
      else {
        lVar34 = 
        ___ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbd10110918de3ebdE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          in_stack_00000138 =
               *(undefined8 *)
                (
                ___ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbd10110918de3ebdE
                + 0x20);
          in_stack_00000140 =
               *(undefined8 *)
                (
                ___ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbd10110918de3ebdE
                + 0x28);
          in_stack_00000130 = 4;
          puVar16 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar16 = &UNK_10b3c24c8;
          }
          puVar4 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar4 = &UNK_109adfc03;
          }
          iVar15 = (**(code **)(puVar16 + 0x18))(puVar4,&stack0x00000130);
          if (iVar15 != 0) {
            in_stack_000000d8 =
                 ___ZN11rama_socks56server35Socks5Acceptor_LT_C_C_B_C_U_C_A_GT_6accept28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbd10110918de3ebdE
                 + 0x30;
            in_stack_000000c8 = &stack0x00000f10;
            _uStack00000000000000c0 = 1;
            in_stack_000000d0 = 1;
            *(undefined8 *)(unaff_x29 + -0x90) = in_stack_00000140;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar34,puVar4,puVar16,unaff_x29 + -0xa0,&stack0x000000c0);
          }
        }
      }
      puVar36 = (undefined8 *)&stack0x000000c0;
      *(undefined1 *)(in_stack_00000060 + 0x10a) = 0;
      *(undefined1 *)(in_stack_00000060 + 0x108) = 7;
      *(undefined8 *)(in_stack_00000060 + 0xf8) = 0;
      *(undefined8 *)(in_stack_00000060 + 0xf0) = 0;
      *plVar32 = 0x1a;
      *(undefined2 *)(in_stack_00000060 + 0x100) = 0;
      *(long **)(in_stack_00000060 + 0x110) = plVar32;
      *(long *)(in_stack_00000060 + 0x118) = in_stack_00000060 + 0x48;
      *(undefined1 *)(in_stack_00000060 + 0x128) = 0;
      auVar42 = func_0x0001006f34b4(in_stack_00000060 + 0x110,unaff_x26);
      if ((auVar42._0_8_ & 1) != 0) {
        *unaff_x22 = 5;
        uVar21 = 9;
        goto LAB_1006f993c;
      }
      if (*(char *)(in_stack_00000060 + 0x128) == '\x06') {
        plVar45 = *(long **)(in_stack_00000060 + 0x160);
        if (((ulong)plVar45 & 1) == 0) {
          lVar34 = plVar45[4];
          plVar45[4] = lVar34 + -1;
          LORelease();
          if (lVar34 == 1) {
            if (*plVar45 != 0) {
              _free(plVar45[1]);
            }
            goto LAB_1006f8a0c;
          }
        }
        else if (*(long *)(in_stack_00000060 + 0x158) + ((ulong)plVar45 >> 5) != 0) {
          plVar45 = (long *)(*(long *)(in_stack_00000060 + 0x148) - ((ulong)plVar45 >> 5));
LAB_1006f8a0c:
          _free(plVar45);
        }
      }
      if (auVar42._8_8_ != 0) {
        in_stack_00000230 = (long *)_malloc(8);
        if (in_stack_00000230 == (long *)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
          goto LAB_1006f9d04;
        }
        *in_stack_00000230 = auVar42._8_8_;
        if ((*(byte *)(in_stack_00000060 + 0xe8) != 0x1a) &&
           (0x18 < *(byte *)(in_stack_00000060 + 0xe8))) {
          lVar34 = **(long **)(in_stack_00000060 + 0xf0);
          **(long **)(in_stack_00000060 + 0xf0) = lVar34 + -1;
          LORelease();
          if (lVar34 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
          }
        }
        if ((*(byte *)(in_stack_00000060 + 0xb8) != 0x1a) &&
           (0x18 < *(byte *)(in_stack_00000060 + 0xb8))) {
          lVar34 = **(long **)(in_stack_00000060 + 0xc0);
          **(long **)(in_stack_00000060 + 0xc0) = lVar34 + -1;
          LORelease();
          if (lVar34 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
            plVar26 = (long *)0x0;
            puVar16 = &UNK_108caa760;
            puVar36 = (undefined8 *)0x31;
            in_stack_00000030 = (undefined8 *)&UNK_10b40cd80;
            goto LAB_1006f8ae8;
          }
        }
        plVar26 = (long *)0x0;
        puVar36 = (undefined8 *)0x31;
        in_stack_00000030 = (undefined8 *)&UNK_10b40cd80;
        puVar16 = &UNK_108caa760;
        goto LAB_1006f8ae8;
      }
      if ((*(byte *)(in_stack_00000060 + 0xe8) != 0x1a) &&
         (0x18 < *(byte *)(in_stack_00000060 + 0xe8))) {
        lVar34 = **(long **)(in_stack_00000060 + 0xf0);
        **(long **)(in_stack_00000060 + 0xf0) = lVar34 + -1;
        LORelease();
        if (lVar34 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
        }
      }
      in_stack_00000230 = (long *)0x0;
      uVar33 = 0;
      uVar37 = 0;
      uStack0000000000000038 = 7;
      uVar21 = 2;
      pbStack0000000000000020 = (byte *)0x1d;
      plVar26 = (long *)0x2;
      plVar47 = (long *)&UNK_108caa743;
      puVar31 = (undefined8 *)0x0;
    }
    uVar50 = SUB81(unaff_x26,0);
    if ((((*(byte *)(in_stack_00000060 + 0xe3) & 1) != 0) &&
        (*(byte *)(in_stack_00000060 + 0xb8) != 0x1a)) &&
       (0x18 < *(byte *)(in_stack_00000060 + 0xb8))) {
      lVar34 = **(long **)(in_stack_00000060 + 0xc0);
      **(long **)(in_stack_00000060 + 0xc0) = lVar34 + -1;
      LORelease();
      if (lVar34 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
      }
    }
    *(undefined1 *)(in_stack_00000060 + 0xe3) = 0;
    *(undefined1 *)(in_stack_00000060 + 0xe5) = 0;
    if (2 < *(ulong *)(in_stack_00000060 + 0x90)) {
      _free(*(undefined8 *)(in_stack_00000060 + 0x80));
    }
    if ((*(byte *)(in_stack_00000060 + 0xe4) & 1) != 0) {
      FUN_100deb62c(in_stack_00000060 + 0x48);
      func_0x000100e3c8d4(in_stack_00000060 + 0x68);
    }
  }
  else {
    uStack000000000000012c = uStack000000000000007c;
    uVar33 = (ulong)puVar36 >> 0x10;
    uVar37 = (ulong)puVar36 >> 0x18;
    uStack0000000000000128 = (int)uVar54;
LAB_1006f8b04:
    if (2 < *(ulong *)(in_stack_00000060 + 0x90)) {
      _free(*(undefined8 *)(in_stack_00000060 + 0x80));
    }
    FUN_100deb62c(in_stack_00000060 + 0x48);
    func_0x000100e3c8d4(in_stack_00000060 + 0x68);
  }
  *(undefined1 *)(in_stack_00000060 + 0xe4) = 0;
  *unaff_x22 = (long)plVar26;
  unaff_x22[1] = (long)plVar47;
  unaff_x22[2] = (long)pbStack0000000000000020;
  *(undefined1 *)(unaff_x22 + 3) = uVar21;
  *(undefined1 *)((long)unaff_x22 + 0x19) = uStack0000000000000038;
  *(undefined1 *)((long)unaff_x22 + 0x1a) = uStack0000000000000028;
  *(undefined4 *)((long)unaff_x22 + 0x1b) = uStack0000000000000128;
  *(undefined1 *)((long)unaff_x22 + 0x1f) = uStack000000000000012c;
  *(undefined1 *)(unaff_x22 + 4) = uVar50;
  *(int *)((long)unaff_x22 + 0x21) = (int)puVar31;
  *(char *)((long)unaff_x22 + 0x27) = (char)((ulong)puVar31 >> 0x30);
  *(short *)((long)unaff_x22 + 0x25) = (short)((ulong)puVar31 >> 0x20);
  unaff_x22[5] = (uVar33 & 0xff) << 0x10 | uVar37 << 0x18 | (ulong)puVar36 & 0xffff;
  uVar21 = 1;
  unaff_x22[6] = (long)in_stack_00000230;
  unaff_x22[7] = (long)in_stack_00000030;
LAB_1006f993c:
  *(undefined1 *)(in_stack_00000060 + 0xe2) = uVar21;
  return;
}

