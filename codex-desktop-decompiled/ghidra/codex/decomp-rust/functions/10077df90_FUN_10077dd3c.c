
void FUN_10077dd3c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long lVar4;
  long lVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined1 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  long unaff_x19;
  short *unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  undefined2 *puVar13;
  long unaff_x23;
  short sVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  long lVar17;
  undefined8 unaff_x27;
  long unaff_x29;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined2 *in_stack_00000038;
  long in_stack_00000040;
  undefined2 *in_stack_00000048;
  undefined2 *in_stack_00000050;
  undefined2 *in_stack_00000058;
  undefined8 in_stack_00000060;
  ushort uStack0000000000000068;
  undefined8 *in_stack_00000070;
  ulong uStack0000000000000080;
  short sStack00000000000000b0;
  undefined2 uStack00000000000000b6;
  short sStack00000000000000b8;
  undefined2 uStack00000000000000be;
  undefined2 *in_stack_000000c0;
  undefined2 *in_stack_000000c8;
  undefined2 *in_stack_000000d0;
  undefined2 *in_stack_000000d8;
  long in_stack_000000e0;
  undefined2 *in_stack_000000e8;
  undefined8 *in_stack_000000f0;
  undefined8 in_stack_000000f8;
  ulong in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 *in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined1 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined4 uStack0000000000000198;
  undefined2 uStack000000000000019c;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000038,s_Bearer_108ac7639,&stack0x00000028);
  *(long *)(unaff_x29 + -0x78) = in_stack_00000040;
  *(undefined2 **)(unaff_x29 + -0x80) = in_stack_00000038;
  *(undefined2 **)(unaff_x29 + -0x70) = in_stack_00000048;
  FUN_100a3c8fc(&stack0x000000b0,unaff_x19 + 0xa8,&stack0x00000070,unaff_x29 + -0x80);
  puVar15 = in_stack_000000c8;
  puVar13 = in_stack_000000c0;
  puVar7 = _sStack00000000000000b8;
  sVar14 = sStack00000000000000b0;
  if (sStack00000000000000b0 == 0x1f) {
    if (in_stack_00000010 != 0) {
      _free(in_stack_00000018);
    }
    lVar5 = *(long *)(unaff_x21 + 0x60);
    lVar1 = *(long *)(unaff_x21 + 0x68);
    lVar17 = *(long *)(lVar1 + 0x10);
    puVar7 = (undefined2 *)_malloc(3);
    if (puVar7 == (undefined2 *)0x0) {
      FUN_107c03c64(1,3);
LAB_10077e138:
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10077e13c);
      (*pcVar11)();
    }
    *(undefined1 *)(puVar7 + 1) = 0x54;
    *puVar7 = 0x4547;
    in_stack_00000038 = (undefined2 *)0x0;
    in_stack_00000040 = 1;
    in_stack_00000048 = (undefined2 *)0x0;
    uStack0000000000000080 = (ulong)unaff_w22;
    in_stack_00000070 = &stack0x00000038;
    iVar6 = func_0x0001055b8dfc(&stack0x00000070,*(long *)(unaff_x19 + 0x58) + 0x10,
                                *(undefined8 *)(unaff_x19 + 0x60));
    puVar15 = in_stack_00000048;
    lVar4 = in_stack_00000040;
    puVar13 = in_stack_00000038;
    if (iVar6 != 0) {
      FUN_107c05cb4(&UNK_108cc3daa,0x37,&stack0x00000028,&UNK_10b235000,&UNK_10b2346c0);
      goto LAB_10077e138;
    }
    __ZN17codex_rmcp_client19http_client_adapter16protocol_headers17h8b5bdf7715e33dedE
              (&stack0x00000070,unaff_x19 + 0xa8);
    puVar8 = (undefined8 *)_malloc(0x10);
    if (puVar8 == (undefined8 *)0x0) {
      FUN_107c03c64(1,0x10);
      goto LAB_10077e138;
    }
    puVar8[1] = 0x747365757165722d;
    *puVar8 = 0x6465726566667562;
    in_stack_000000d0 = (undefined2 *)0x3;
    in_stack_000000d8 = puVar13;
    in_stack_000000e0 = lVar4;
    in_stack_000000e8 = puVar15;
    in_stack_000000f0 = in_stack_00000070;
    in_stack_000000c0 = (undefined2 *)0x3;
    _sStack00000000000000b0 = (undefined8 *)0x0;
    in_stack_00000100 = uStack0000000000000080;
    in_stack_00000108 = 0x10;
    *(undefined8 *)(unaff_x23 + 0x70) = 0x8000000000000000;
    *(undefined8 *)(unaff_x23 + 0x68) = 0x10;
    in_stack_00000138 = 1;
    in_stack_000000c8 = puVar7;
    in_stack_000000f8 = unaff_x27;
    in_stack_00000110 = puVar8;
    auVar24 = (**(code **)(lVar1 + 0x20))
                        (lVar5 + (lVar17 - 1U & 0xfffffffffffffff0) + 0x10,&stack0x000000b0);
    *(undefined1 (*) [16])(unaff_x19 + 0x108) = auVar24;
    (**(code **)(auVar24._8_8_ + 0x18))(&stack0x000000b0,auVar24._0_8_,in_stack_00000008);
    puVar15 = in_stack_000000d0;
    puVar13 = in_stack_000000c8;
    puVar7 = in_stack_000000c0;
    puVar16 = (undefined2 *)_sStack00000000000000b0;
    if (_sStack00000000000000b0 == (undefined8 *)0x8000000000000001) {
      *unaff_x20 = 0x20;
      uVar10 = 3;
      goto LAB_10077df58;
    }
    sVar14 = sStack00000000000000b8;
    uStack0000000000000198 = *(undefined4 *)(unaff_x23 + 10);
    uStack000000000000019c = uStack00000000000000be;
    in_stack_00000178 = *(undefined8 *)(unaff_x23 + 0x30);
    in_stack_00000170 = *(undefined8 *)(unaff_x23 + 0x28);
    in_stack_00000188 = *(undefined8 *)(unaff_x23 + 0x40);
    in_stack_00000180 = *(undefined8 *)(unaff_x23 + 0x38);
    in_stack_00000148 = *(undefined8 *)(unaff_x23 + 0x50);
    in_stack_00000140 = *(undefined8 *)(unaff_x23 + 0x48);
    in_stack_00000158 = *(undefined8 *)(unaff_x23 + 0x60);
    in_stack_00000150 = *(undefined8 *)(unaff_x23 + 0x58);
    in_stack_00000160 = in_stack_00000118;
    uVar19 = *(undefined8 *)(unaff_x19 + 0x108);
    puVar8 = *(undefined8 **)(unaff_x19 + 0x110);
    pcVar11 = (code *)*puVar8;
    if (pcVar11 != (code *)0x0) {
      (*pcVar11)(uVar19);
    }
    if (puVar8[1] != 0) {
      _free(uVar19);
    }
    if (puVar16 == (undefined2 *)0x8000000000000000) {
      *(undefined4 *)(unaff_x29 + -0x88) = uStack0000000000000198;
      *(undefined2 *)(unaff_x29 + -0x84) = uStack000000000000019c;
      *(undefined8 *)(unaff_x29 + -0xa8) = in_stack_00000178;
      *(undefined8 *)(unaff_x29 + -0xb0) = in_stack_00000170;
      *(undefined8 *)(unaff_x29 + -0x98) = in_stack_00000188;
      *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_00000180;
      goto LAB_10077dea0;
    }
    *(undefined8 *)(unaff_x29 + -0xd8) = in_stack_00000148;
    *(undefined8 *)(unaff_x29 + -0xe0) = in_stack_00000140;
    *(undefined8 *)(unaff_x29 + -200) = in_stack_00000158;
    *(undefined8 *)(unaff_x29 + -0xd0) = in_stack_00000150;
    *(undefined8 *)(unaff_x29 + -0xc0) = in_stack_00000160;
    *(undefined8 *)(unaff_x29 + -0xf8) = in_stack_00000178;
    *(undefined8 *)(unaff_x29 + -0x100) = in_stack_00000170;
    *(undefined8 *)(unaff_x29 + -0xe8) = in_stack_00000188;
    *(undefined8 *)(unaff_x29 + -0xf0) = in_stack_00000180;
    in_stack_00000038 = puVar16;
    in_stack_00000040 = CONCAT62(CONCAT24(uStack000000000000019c,uStack0000000000000198),sVar14);
    in_stack_00000048 = puVar7;
    in_stack_00000050 = puVar13;
    in_stack_00000058 = puVar15;
    uVar20 = *(undefined8 *)(unaff_x29 + -0xe8);
    in_stack_00000070 = *(undefined8 **)(unaff_x29 + -0xf0);
    uVar23 = *(undefined8 *)(unaff_x29 + -0xd8);
    uVar22 = *(undefined8 *)(unaff_x29 + -0xe0);
    _uStack0000000000000068 = in_stack_00000178;
    uVar19 = _uStack0000000000000068;
    in_stack_00000060 = in_stack_00000170;
    uVar21 = *(undefined8 *)(unaff_x29 + -200);
    uVar18 = *(undefined8 *)(unaff_x29 + -0xd0);
    uVar12 = *(undefined8 *)(unaff_x29 + -0xc0);
    uStack0000000000000068 = (ushort)in_stack_00000178;
    _uStack0000000000000068 = uVar19;
    if (uStack0000000000000068 == 0x194) {
      sVar14 = 0xe;
LAB_10077dc08:
      __ZN126__LT_codex_exec_server__client__http_client__response_body_stream__HttpResponseBodyStream_u20_as_u20_core__ops__drop__Drop_GT_4drop17h68c8fe47f604dae9E
                (&stack0x00000070);
      FUN_100cc570c(&stack0x00000070);
      lVar5 = in_stack_00000040;
      if (in_stack_00000048 != (undefined2 *)0x0) {
        puVar8 = (undefined8 *)(in_stack_00000040 + 0x20);
        puVar16 = in_stack_00000048;
        do {
          if (puVar8[-4] != 0) {
            _free(puVar8[-3]);
          }
          if (puVar8[-1] != 0) {
            _free(*puVar8);
          }
          puVar8 = puVar8 + 6;
          puVar16 = (undefined2 *)((long)puVar16 + -1);
        } while (puVar16 != (undefined2 *)0x0);
      }
      if (in_stack_00000038 != (undefined2 *)0x0) {
        _free(lVar5);
      }
      if (in_stack_00000050 != (undefined2 *)0x0) {
        _free(in_stack_00000058);
      }
      goto LAB_10077dea0;
    }
    if (uStack0000000000000068 == 0x195) {
      sVar14 = 0x17;
      goto LAB_10077dc08;
    }
    if (99 < uStack0000000000000068 - 200) {
      *(ushort **)(unaff_x29 + -0x80) = &stack0x00000068;
      *(undefined **)(unaff_x29 + -0x78) =
           &
           __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h0a78be7af221127fE
      ;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x000000b0,s_GET_returned_HTTP_108ac7643,unaff_x29 + -0x80);
      sVar14 = 0x15;
      puVar7 = (undefined2 *)_sStack00000000000000b0;
      puVar13 = _sStack00000000000000b8;
      puVar15 = in_stack_000000c0;
      goto LAB_10077dc08;
    }
    _sStack00000000000000b8 = (undefined2 *)0x1d;
    _sStack00000000000000b0 = (undefined8 *)0x0;
    in_stack_000000c8 = (undefined2 *)0x0;
    in_stack_000000c0 = (undefined2 *)0x0;
    FUN_100a3cd74(unaff_x29 + -0x80,in_stack_00000040,puVar7,&stack0x000000b0);
    lVar5 = *(long *)(unaff_x29 + -0x80);
    if (lVar5 == -0x8000000000000000) {
      sVar14 = 0x16;
      puVar7 = (undefined2 *)0x8000000000000000;
      goto LAB_10077dc08;
    }
    uVar19 = *(undefined8 *)(unaff_x29 + -0x78);
    uVar2 = *(undefined8 *)(unaff_x29 + -0x70);
    uVar9 = __ZN17codex_rmcp_client19http_client_adapter31is_streamable_http_content_type17h9e54ed8fb83f714eE
                      (uVar19,uVar2);
    if ((uVar9 & 1) == 0) {
      FUN_100c7c1c0(&stack0x000000b0,uVar19,uVar2);
      puVar15 = in_stack_000000c0;
      puVar13 = _sStack00000000000000b8;
      puVar7 = (undefined2 *)_sStack00000000000000b0;
      if (lVar5 != 0) {
        _free(uVar19);
      }
      sVar14 = 0x16;
      goto LAB_10077dc08;
    }
    if (lVar5 != 0) {
      _free(uVar19);
    }
    _sStack00000000000000b0 = in_stack_00000070;
    _sStack00000000000000b8 = (undefined2 *)uVar20;
    in_stack_000000c0 = (undefined2 *)uVar22;
    in_stack_000000c8 = (undefined2 *)uVar23;
    in_stack_000000d0 = (undefined2 *)uVar18;
    in_stack_000000d8 = (undefined2 *)uVar21;
    in_stack_000000e0 = uVar12;
    auVar24 = __ZN17codex_rmcp_client19http_client_adapter20sse_stream_from_body17he074a3a93a298d88E
                        (&stack0x000000b0);
    FUN_100e26a4c(&stack0x00000038);
    FUN_100def764(unaff_x19 + 0xa8);
    *(undefined2 *)(unaff_x19 + 0x119) = 0;
    lVar5 = **(long **)(unaff_x19 + 0x68);
    **(long **)(unaff_x19 + 0x68) = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
    }
    lVar5 = **(long **)(unaff_x19 + 0x58);
    **(long **)(unaff_x19 + 0x58) = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
    }
    sVar14 = 0x1f;
  }
  else {
    *(undefined4 *)(unaff_x29 + -0x88) = *(undefined4 *)(unaff_x23 + 2);
    *(undefined2 *)(unaff_x29 + -0x84) = uStack00000000000000b6;
    *(undefined2 **)(unaff_x29 + -0xa8) = in_stack_000000d8;
    *(undefined2 **)(unaff_x29 + -0xb0) = in_stack_000000d0;
    *(undefined2 **)(unaff_x29 + -0x98) = in_stack_000000e8;
    *(long *)(unaff_x29 + -0xa0) = in_stack_000000e0;
    if (in_stack_00000010 != 0) {
      _free(in_stack_00000018);
    }
LAB_10077dea0:
    auVar3._8_8_ = puVar13;
    auVar3._0_8_ = puVar7;
    auVar24._8_8_ = puVar13;
    auVar24._0_8_ = puVar7;
    FUN_100def764(unaff_x19 + 0xa8);
    if (((*(long *)(unaff_x19 + 0x90) != -0x8000000000000000) &&
        ((*(byte *)(unaff_x19 + 0x119) & 1) != 0)) && (*(long *)(unaff_x19 + 0x90) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x98));
    }
    *(undefined1 *)(unaff_x19 + 0x119) = 0;
    if (((*(long *)(unaff_x19 + 0x78) != -0x8000000000000000) &&
        ((*(byte *)(unaff_x19 + 0x11a) & 1) != 0)) && (*(long *)(unaff_x19 + 0x78) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x80));
    }
    *(undefined1 *)(unaff_x19 + 0x11a) = 0;
    lVar5 = **(long **)(unaff_x19 + 0x68);
    **(long **)(unaff_x19 + 0x68) = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
    }
    lVar5 = **(long **)(unaff_x19 + 0x58);
    **(long **)(unaff_x19 + 0x58) = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
      auVar24 = auVar3;
    }
  }
  *unaff_x20 = sVar14;
  *(undefined4 *)(unaff_x20 + 1) = *(undefined4 *)(unaff_x29 + -0x88);
  unaff_x20[3] = *(short *)(unaff_x29 + -0x84);
  *(undefined1 (*) [16])(unaff_x20 + 4) = auVar24;
  *(undefined2 **)(unaff_x20 + 0xc) = puVar15;
  uVar19 = *(undefined8 *)(unaff_x29 + -0xb0);
  uVar18 = *(undefined8 *)(unaff_x29 + -0x98);
  uVar12 = *(undefined8 *)(unaff_x29 + -0xa0);
  uVar10 = 1;
  *(undefined8 *)(unaff_x20 + 0x14) = *(undefined8 *)(unaff_x29 + -0xa8);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar19;
  *(undefined8 *)(unaff_x20 + 0x1c) = uVar18;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar12;
LAB_10077df58:
  *(undefined1 *)(unaff_x19 + 0x118) = uVar10;
  return;
}

