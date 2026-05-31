
void FUN_1007813f0(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined1 uVar10;
  code *pcVar11;
  long unaff_x19;
  short *unaff_x20;
  long unaff_x21;
  short sVar12;
  long unaff_x23;
  long lVar13;
  undefined8 *unaff_x25;
  undefined8 uVar14;
  long unaff_x29;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000020;
  undefined *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined *in_stack_00000040;
  undefined *in_stack_00000048;
  long in_stack_00000050;
  undefined8 *in_stack_00000058;
  undefined *in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  short sStack0000000000000080;
  undefined4 uStack0000000000000082;
  undefined2 uStack0000000000000086;
  undefined2 uStack0000000000000088;
  undefined4 uStack000000000000008a;
  undefined2 uStack000000000000008e;
  undefined2 uStack0000000000000090;
  undefined4 uStack0000000000000092;
  undefined2 uStack0000000000000096;
  undefined6 uStack0000000000000098;
  undefined2 uStack000000000000009e;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 *in_stack_000000e0;
  undefined1 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x78,s_Bearer_108ac7639,&stack0x00000010);
  uVar15 = *unaff_x25;
  *(undefined8 *)(unaff_x29 + -0x88) = unaff_x25[1];
  *(undefined8 *)(unaff_x29 + -0x90) = uVar15;
  *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x68);
  FUN_100a3c8fc(&stack0x00000080,unaff_x19 + 0x78,&stack0x00000040,unaff_x29 + -0x90);
  if (sStack0000000000000080 == 0x1f) {
    if (in_stack_00000020 != (undefined8 *)0x0) {
      _free(in_stack_00000028);
    }
    cVar6 = func_0x000105797d50(&UNK_108cad58c,0xe);
    if (cVar6 == 'Q') {
      in_stack_00000040 = &UNK_10b3b3638;
      in_stack_00000048 = &UNK_108cad58c;
      in_stack_00000058 = (undefined8 *)0x0;
      in_stack_00000050 = 0xe;
    }
    else {
      in_stack_00000040 = (undefined *)0x0;
      in_stack_00000048 = (undefined *)CONCAT71(in_stack_00000048._1_7_,cVar6);
    }
    lVar5 = *(long *)(unaff_x19 + 0x50);
    uVar15 = *(undefined8 *)(unaff_x19 + 0x58);
    *(undefined8 *)(unaff_x29 + -0x90) = 0;
    *(undefined8 *)(unaff_x29 + -0x88) = 1;
    *(undefined8 *)(unaff_x29 + -0x80) = 0;
    *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x90;
    *(undefined **)(unaff_x29 + -0x70) = &UNK_10b209290;
    *(undefined8 *)(unaff_x29 + -0x68) = 0x60000020;
    iVar7 = func_0x0001055b8dfc(unaff_x29 + -0x78,lVar5 + 0x10,uVar15);
    if (iVar7 != 0) {
      FUN_107c05cb4(&UNK_108cc3daa,0x37,&stack0x00000010,&UNK_10b235000,&UNK_10b2346c0);
      goto LAB_100781984;
    }
    in_stack_00000028 = *(undefined **)(unaff_x29 + -0x88);
    in_stack_00000020 = *(undefined8 **)(unaff_x29 + -0x90);
    in_stack_00000030 = *(undefined8 *)(unaff_x29 + -0x80);
    FUN_100a3c8fc(&stack0x00000080,unaff_x19 + 0x78,&stack0x00000040,&stack0x00000020);
    if (sStack0000000000000080 != 0x1f) {
      uVar17 = *(undefined8 *)(unaff_x23 + 0x1a);
      uVar15 = *(undefined8 *)(unaff_x23 + 0x12);
      *(ulong *)(unaff_x29 + -200) =
           CONCAT26(uStack0000000000000090,CONCAT24(uStack000000000000008e,uStack000000000000008a));
      *(ulong *)(unaff_x29 + -0xd0) =
           CONCAT26(uStack0000000000000088,CONCAT24(uStack0000000000000086,uStack0000000000000082));
      *(undefined8 *)(unaff_x29 + -0xb8) = uVar17;
      *(undefined8 *)(unaff_x29 + -0xc0) = uVar15;
      uVar15 = *(undefined8 *)(unaff_x23 + 0x22);
      *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x23 + 0x2a);
      *(undefined8 *)(unaff_x29 + -0xb0) = uVar15;
      *(undefined8 *)(unaff_x23 + 0x106) = in_stack_000000b8;
      *(undefined8 *)(unaff_x23 + 0xfe) = in_stack_000000b0;
      sVar12 = sStack0000000000000080;
      goto LAB_100781800;
    }
    lVar5 = *(long *)(unaff_x21 + 0x60);
    lVar3 = *(long *)(unaff_x21 + 0x68);
    lVar13 = *(long *)(lVar3 + 0x10);
    puVar8 = (undefined4 *)_malloc(6);
    if (puVar8 == (undefined4 *)0x0) {
      FUN_107c03c64(1,6);
LAB_100781984:
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x100781988);
      (*pcVar11)();
    }
    *(undefined2 *)(puVar8 + 1) = 0x4554;
    *puVar8 = 0x454c4544;
    lVar2 = *(long *)(unaff_x19 + 0x40);
    uVar15 = *(undefined8 *)(unaff_x19 + 0x48);
    *(undefined8 *)(unaff_x29 + -0x90) = 0;
    *(undefined8 *)(unaff_x29 + -0x88) = 1;
    *(undefined4 *)(unaff_x29 + -0x68) = 0x60000020;
    *(undefined4 *)(unaff_x29 + -100) = 0;
    *(undefined8 *)(unaff_x29 + -0x80) = 0;
    *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x90;
    *(undefined **)(unaff_x29 + -0x70) = &UNK_10b209290;
    iVar7 = func_0x0001055b8dfc(unaff_x29 + -0x78,lVar2 + 0x10,uVar15);
    if (iVar7 != 0) {
      FUN_107c05cb4(&UNK_108cc3daa,0x37,&stack0x00000010,&UNK_10b235000,&UNK_10b2346c0);
      goto LAB_100781984;
    }
    uVar15 = *(undefined8 *)(unaff_x29 + -0x90);
    uVar17 = *(undefined8 *)(unaff_x29 + -0x88);
    uVar14 = *(undefined8 *)(unaff_x29 + -0x80);
    __ZN17codex_rmcp_client19http_client_adapter16protocol_headers17h8b5bdf7715e33dedE
              (unaff_x29 + -0x78,unaff_x19 + 0x78);
    puVar9 = (undefined8 *)_malloc(0x10);
    if (puVar9 == (undefined8 *)0x0) {
      FUN_107c03c64(1,0x10);
      goto LAB_100781984;
    }
    puVar9[1] = 0x747365757165722d;
    *puVar9 = 0x6465726566667562;
    uStack0000000000000098 = SUB86(puVar8,0);
    uStack000000000000009e = (undefined2)((ulong)puVar8 >> 0x30);
    in_stack_000000a0 = 6;
    in_stack_000000c8 = *(undefined8 *)(unaff_x29 + -0x70);
    in_stack_000000c0 = *(undefined8 *)(unaff_x29 + -0x78);
    in_stack_000000d0 = *(undefined8 *)(unaff_x29 + -0x68);
    uStack0000000000000090 = 6;
    uStack0000000000000092 = 0;
    uStack0000000000000096 = 0;
    sStack0000000000000080 = 0;
    uStack0000000000000082 = 0;
    uStack0000000000000086 = 0;
    in_stack_000000d8 = 0x10;
    *(undefined8 *)(unaff_x23 + 0x70) = 0x8000000000000000;
    *(undefined8 *)(unaff_x23 + 0x68) = 0x10;
    in_stack_00000108 = 0;
    in_stack_000000a8 = uVar15;
    in_stack_000000b0 = uVar17;
    in_stack_000000b8 = uVar14;
    in_stack_000000e0 = puVar9;
    auVar18 = (**(code **)(lVar3 + 0x18))
                        (lVar5 + (lVar13 - 1U & 0xfffffffffffffff0) + 0x10,&stack0x00000080);
    *(undefined1 (*) [16])(unaff_x19 + 0xd8) = auVar18;
    (**(code **)(auVar18._8_8_ + 0x18))(&stack0x00000080,auVar18._0_8_,in_stack_00000008);
    sVar12 = sStack0000000000000080;
    if (sStack0000000000000080 == 0xf) {
      *unaff_x20 = 0x20;
      uVar10 = 3;
      goto LAB_10078186c;
    }
    in_stack_00000118 =
         CONCAT26(uStack0000000000000090,CONCAT24(uStack000000000000008e,uStack000000000000008a));
    in_stack_00000110 =
         CONCAT26(uStack0000000000000088,CONCAT24(uStack0000000000000086,uStack0000000000000082));
    in_stack_00000128 = *(undefined8 *)(unaff_x23 + 0x1a);
    in_stack_00000120 = *(undefined8 *)(unaff_x23 + 0x12);
    in_stack_00000138 = *(undefined8 *)(unaff_x23 + 0x2a);
    in_stack_00000130 = *(undefined8 *)(unaff_x23 + 0x22);
    *(undefined8 *)(unaff_x23 + 0xc6) = in_stack_000000b8;
    *(undefined8 *)(unaff_x23 + 0xbe) = in_stack_000000b0;
    uVar15 = *(undefined8 *)(unaff_x19 + 0xd8);
    puVar9 = *(undefined8 **)(unaff_x19 + 0xe0);
    pcVar11 = (code *)*puVar9;
    if (pcVar11 != (code *)0x0) {
      (*pcVar11)(uVar15);
    }
    if (puVar9[1] != 0) {
      _free(uVar15);
    }
    if (sVar12 != 0xe) {
      *(undefined8 *)(unaff_x29 + -200) = in_stack_00000118;
      *(undefined8 *)(unaff_x29 + -0xd0) = in_stack_00000110;
      *(undefined8 *)(unaff_x29 + -0xb8) = in_stack_00000128;
      *(undefined8 *)(unaff_x29 + -0xc0) = in_stack_00000120;
      *(undefined8 *)(unaff_x29 + -0xa8) = in_stack_00000138;
      *(undefined8 *)(unaff_x29 + -0xb0) = in_stack_00000130;
      *(undefined8 *)(unaff_x23 + 0x106) = *(undefined8 *)(unaff_x23 + 0xc6);
      *(undefined8 *)(unaff_x23 + 0xfe) = *(undefined8 *)(unaff_x23 + 0xbe);
      goto LAB_100781800;
    }
    puVar16 = *(undefined **)(unaff_x23 + 0x9e);
    in_stack_00000040 = *(undefined **)(unaff_x23 + 0x96);
    in_stack_00000058 = *(undefined8 **)(unaff_x23 + 0xae);
    lVar5 = *(long *)(unaff_x23 + 0xa6);
    in_stack_00000068 = *(undefined8 *)(unaff_x23 + 0xbe);
    in_stack_00000060 = *(undefined **)(unaff_x23 + 0xb6);
    in_stack_00000070 = *(undefined8 *)(unaff_x23 + 0xc6);
    uVar1 = (uint)in_stack_00000070 & 0xffff;
    if (uVar1 == 0x195) {
      sVar12 = 0x1f;
joined_r0x000100781698:
      in_stack_00000048 = puVar16;
      in_stack_00000050 = lVar5;
      if (lVar5 != 0) {
        puVar9 = (undefined8 *)(puVar16 + 0x20);
        do {
          if (puVar9[-4] != 0) {
            _free(puVar9[-3]);
          }
          if (puVar9[-1] != 0) {
            _free(*puVar9);
          }
          puVar9 = puVar9 + 6;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      puVar4 = in_stack_00000060;
      puVar9 = in_stack_00000058;
      if (in_stack_00000040 != (undefined *)0x0) {
        _free(puVar16);
        puVar4 = in_stack_00000060;
        puVar9 = in_stack_00000058;
      }
      goto joined_r0x0001007816fc;
    }
    in_stack_00000048 = puVar16;
    in_stack_00000050 = lVar5;
    if (99 < uVar1 - 200) {
      in_stack_00000020 = &stack0x00000070;
      in_stack_00000028 =
           &
           __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h0a78be7af221127fE
      ;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x78,s_DELETE_returned_HTTP_108ac7664,&stack0x00000020);
      uVar17 = *(undefined8 *)(unaff_x29 + -0x70);
      uVar15 = *(undefined8 *)(unaff_x29 + -0x78);
      uStack000000000000008e = (undefined2)uVar17;
      uStack0000000000000090 = (undefined2)((ulong)uVar17 >> 0x10);
      uStack0000000000000092 = (undefined4)((ulong)uVar17 >> 0x20);
      uStack0000000000000086 = (undefined2)uVar15;
      uStack0000000000000088 = (undefined2)((ulong)uVar15 >> 0x10);
      uStack000000000000008a = (undefined4)((ulong)uVar15 >> 0x20);
      *(undefined8 *)(unaff_x23 + 0x16) = *(undefined8 *)(unaff_x29 + -0x68);
      *(ulong *)(unaff_x29 + -200) = CONCAT26(uStack000000000000008e,(int6)((ulong)uVar15 >> 0x10));
      *(ulong *)(unaff_x29 + -0xd0) =
           CONCAT26(uStack0000000000000086,CONCAT42(uStack0000000000000082,sStack0000000000000080));
      *(ulong *)(unaff_x23 + 0xe6) = CONCAT62(uStack0000000000000098,uStack0000000000000096);
      *(undefined8 *)(unaff_x23 + 0xde) = uVar17;
      sVar12 = 0x15;
      puVar16 = in_stack_00000048;
      lVar5 = in_stack_00000050;
      goto joined_r0x000100781698;
    }
    if (lVar5 != 0) {
      puVar9 = (undefined8 *)(puVar16 + 0x20);
      do {
        if (puVar9[-4] != 0) {
          _free(puVar9[-3]);
        }
        if (puVar9[-1] != 0) {
          _free(*puVar9);
        }
        puVar9 = puVar9 + 6;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (in_stack_00000040 != (undefined *)0x0) {
      _free(puVar16);
    }
    if (in_stack_00000058 != (undefined8 *)0x0) {
      _free(in_stack_00000060);
    }
    FUN_100def764(unaff_x19 + 0x78);
    *(undefined1 *)(unaff_x19 + 0xe9) = 0;
    lVar5 = **(long **)(unaff_x19 + 0x50);
    **(long **)(unaff_x19 + 0x50) = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
    }
    lVar5 = **(long **)(unaff_x19 + 0x40);
    **(long **)(unaff_x19 + 0x40) = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
    }
    sVar12 = 0x1f;
  }
  else {
    uVar17 = *(undefined8 *)(unaff_x23 + 0x1a);
    uVar15 = *(undefined8 *)(unaff_x23 + 0x12);
    *(ulong *)(unaff_x29 + -200) =
         CONCAT26(uStack0000000000000090,CONCAT24(uStack000000000000008e,uStack000000000000008a));
    *(ulong *)(unaff_x29 + -0xd0) =
         CONCAT26(uStack0000000000000088,CONCAT24(uStack0000000000000086,uStack0000000000000082));
    *(undefined8 *)(unaff_x29 + -0xb8) = uVar17;
    *(undefined8 *)(unaff_x29 + -0xc0) = uVar15;
    uVar15 = *(undefined8 *)(unaff_x23 + 0x22);
    *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x23 + 0x2a);
    *(undefined8 *)(unaff_x29 + -0xb0) = uVar15;
    *(undefined8 *)(unaff_x23 + 0x106) = in_stack_000000b8;
    *(undefined8 *)(unaff_x23 + 0xfe) = in_stack_000000b0;
    puVar4 = in_stack_00000028;
    sVar12 = sStack0000000000000080;
    puVar9 = in_stack_00000020;
joined_r0x0001007816fc:
    if (puVar9 != (undefined8 *)0x0) {
      _free(puVar4);
    }
LAB_100781800:
    FUN_100def764(unaff_x19 + 0x78);
    *(undefined1 *)(unaff_x19 + 0xe9) = 0;
    lVar5 = **(long **)(unaff_x19 + 0x50);
    **(long **)(unaff_x19 + 0x50) = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
    }
    lVar5 = **(long **)(unaff_x19 + 0x40);
    **(long **)(unaff_x19 + 0x40) = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
    }
  }
  *unaff_x20 = sVar12;
  uVar15 = *(undefined8 *)(unaff_x29 + -0xd0);
  uVar14 = *(undefined8 *)(unaff_x29 + -0xb8);
  uVar17 = *(undefined8 *)(unaff_x29 + -0xc0);
  *(undefined8 *)(unaff_x20 + 5) = *(undefined8 *)(unaff_x29 + -200);
  *(undefined8 *)(unaff_x20 + 1) = uVar15;
  *(undefined8 *)(unaff_x20 + 0xd) = uVar14;
  *(undefined8 *)(unaff_x20 + 9) = uVar17;
  uVar15 = *(undefined8 *)(unaff_x29 + -0xb0);
  *(undefined8 *)(unaff_x20 + 0x15) = *(undefined8 *)(unaff_x29 + -0xa8);
  *(undefined8 *)(unaff_x20 + 0x11) = uVar15;
  uVar15 = *(undefined8 *)(unaff_x23 + 0xfe);
  *(undefined8 *)(unaff_x20 + 0x1c) = *(undefined8 *)(unaff_x23 + 0x106);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar15;
  uVar10 = 1;
LAB_10078186c:
  *(undefined1 *)(unaff_x19 + 0xe8) = uVar10;
  return;
}

