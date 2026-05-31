
void FUN_1017cf404(undefined1 param_1 [16])

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  ushort uVar5;
  undefined8 uVar6;
  bool bVar7;
  char cVar8;
  long lVar9;
  undefined1 uVar10;
  long lVar11;
  undefined8 *puVar12;
  code *pcVar13;
  ulong uVar14;
  undefined8 extraout_x8;
  undefined1 uVar15;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  bool bVar16;
  undefined8 uVar17;
  long lVar18;
  long unaff_x24;
  long *plVar19;
  bool bVar20;
  long lVar21;
  long unaff_x26;
  bool bVar22;
  ulong *unaff_x28;
  ulong *puVar23;
  long unaff_x29;
  long in_xzr;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined8 *puStack0000000000000010;
  undefined8 *in_stack_00000060;
  byte bStack0000000000000068;
  undefined7 uStack0000000000000069;
  undefined1 uStack0000000000000070;
  undefined7 uStack0000000000000071;
  undefined1 uStack0000000000000078;
  undefined7 uStack0000000000000079;
  undefined8 *in_stack_00000080;
  undefined8 *in_stack_00000088;
  undefined1 uStack0000000000000090;
  undefined7 uStack0000000000000091;
  undefined1 uStack0000000000000098;
  undefined7 uStack0000000000000099;
  undefined1 uStack00000000000000a0;
  undefined7 uStack00000000000000a1;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 *in_stack_00000100;
  code *in_stack_00000108;
  ulong in_stack_00000110;
  ulong in_stack_00000118;
  ulong in_stack_00000120;
  undefined8 in_stack_00000128;
  
  *(long *)(unaff_x29 + -0xa8) = param_1._8_8_;
  *(long *)(unaff_x29 + -0xb0) = param_1._0_8_;
  *(char **)(unaff_x29 + -0xa0) =
       "/Users/runner/.cargo/git/checkouts/tokio-tungstenite-ea4445d9acecae62/132f5b3/src/lib.rs";
  *(undefined8 *)(unaff_x26 + 0x30) = 5;
  *(undefined8 *)(unaff_x26 + 0x28) = 0x58;
  *(undefined8 *)(unaff_x29 + -0x78) = 0xf500000001;
  puVar2 = puRam000000010b634c20;
  if (lRam000000010b66fd20 != 2) {
    puVar2 = &UNK_10b3c24c8;
  }
  puVar3 = puRam000000010b634c18;
  if (lRam000000010b66fd20 != 2) {
    puVar3 = &UNK_109adfc03;
  }
  (**(code **)(puVar2 + 0x20))(puVar3,unaff_x29 + -0xc0);
  uVar17 = CONCAT71(uStack0000000000000091,uStack0000000000000090);
  *(undefined8 **)(unaff_x29 + -0xb8) = in_stack_00000088;
  *(undefined8 **)(unaff_x29 + -0xc0) = in_stack_00000080;
  *(ulong *)(unaff_x29 + -0xa8) = CONCAT71(uStack0000000000000099,uStack0000000000000098);
  *(undefined8 *)(unaff_x29 + -0xb0) = uVar17;
  *(undefined8 *)(unaff_x29 + -0x98) = in_stack_000000a8;
  *(ulong *)(unaff_x29 + -0xa0) = CONCAT71(uStack00000000000000a1,uStack00000000000000a0);
  *(undefined8 *)(unaff_x29 + -0x90) = in_stack_000000b0;
  if (*(char *)(unaff_x20 + 0x14a) != '\0') {
    if (*(char *)(unaff_x20 + 0x14a) == '\x04') {
      in_stack_00000060 = (undefined8 *)0xa;
    }
    else {
      bStack0000000000000068 = 0x11;
      uStack0000000000000069 = 0;
      in_stack_00000060 = (undefined8 *)0xe;
    }
    lVar11 = *(long *)(unaff_x29 + -0xc0);
LAB_1017cf614:
    if (lVar11 != 4) goto LAB_1017cf628;
LAB_1017cf61c:
    puVar23 = unaff_x28;
    if (*(short *)(unaff_x29 + -0x98) != 0x12) goto LAB_1017cf628;
    goto LAB_1017cf640;
  }
  lVar11 = *(long *)(unaff_x29 + -0xc0);
  if (2 < lVar11) {
    if (lVar11 == 3) {
      in_stack_00000108 = (code *)CONCAT71(uStack0000000000000091,uStack0000000000000090);
      in_stack_00000118 = CONCAT71(uStack00000000000000a1,uStack00000000000000a0);
      in_stack_00000110 = CONCAT71(uStack0000000000000099,uStack0000000000000098);
      in_stack_00000100 = in_stack_00000088;
      in_stack_00000120 = CONCAT26(in_stack_00000120._6_2_,0x20100000001);
      in_stack_00000120 = in_stack_00000120 & 0xffffffffffffff;
      __ZN11tungstenite8protocol16WebSocketContext14set_additional17h7e8257f43b851f36E();
      in_stack_00000120 = CONCAT71(in_stack_00000120._1_7_,2);
      unaff_x22 = (undefined8 *)0x0;
      FUN_10177d4f8(unaff_x29 + -0xe0);
      if (*(long *)(unaff_x29 + -0xe0) == 0x15) {
        in_stack_00000060 = (undefined8 *)0x15;
      }
      else {
        in_stack_00000060 = *(undefined8 **)(unaff_x29 + -0xe0);
        bStack0000000000000068 = (byte)*(undefined8 *)(unaff_x29 + -0xd8);
        uStack0000000000000069 = (undefined7)((ulong)*(undefined8 *)(unaff_x29 + -0xd8) >> 8);
        uStack0000000000000078 = (undefined1)*(undefined8 *)(unaff_x29 + -200);
        uStack0000000000000079 = (undefined7)((ulong)*(undefined8 *)(unaff_x29 + -200) >> 8);
        uStack0000000000000070 = (undefined1)*(undefined8 *)(unaff_x29 + -0xd0);
        uStack0000000000000071 = (undefined7)((ulong)*(undefined8 *)(unaff_x29 + -0xd0) >> 8);
      }
      lVar11 = *(long *)(unaff_x29 + -0xc0);
      if (2 < lVar11) {
        puVar23 = unaff_x28;
        if (lVar11 != 3) goto LAB_1017cf614;
        goto LAB_1017cf640;
      }
    }
    else {
      if (lVar11 != 4) {
        bVar7 = false;
        in_stack_00000100 = *(undefined8 **)(unaff_x29 + -0xb8);
        uVar15 = *(undefined1 *)(unaff_x29 + -0xb0);
        in_stack_000000e8 = CONCAT17(uStack00000000000000a0,uStack0000000000000099);
        in_stack_000000e0 = CONCAT17(uStack0000000000000098,uStack0000000000000091);
        *(ulong *)(unaff_x24 + 0x6f) = CONCAT71(uStack00000000000000a1,uStack00000000000000a0);
        bVar22 = true;
        in_stack_00000120 = *(ulong *)(unaff_x29 + -0x98);
        uVar17 = *(undefined8 *)(unaff_x29 + -0x90);
        bVar20 = true;
        bVar16 = true;
        goto LAB_1017cffac;
      }
      uVar5 = *(ushort *)(unaff_x29 + -0x98);
      *(undefined1 *)(unaff_x20 + 0x14a) = 1;
      if (uVar5 != 0x12) {
        *(ulong *)(unaff_x29 + -0xd8) = CONCAT71(uStack0000000000000091,uStack0000000000000090);
        *(undefined8 **)(unaff_x29 + -0xe0) = in_stack_00000088;
        *(ulong *)(unaff_x29 + -200) = CONCAT71(uStack00000000000000a1,uStack00000000000000a0);
        *(ulong *)(unaff_x29 + -0xd0) = CONCAT71(uStack0000000000000099,uStack0000000000000098);
        uVar1 = *(long *)(unaff_x29 + -0xd0) + 2;
        if ((long)uVar1 < 0) {
          uVar17 = 0;
        }
        else {
          if (uVar1 == 0) {
            lVar11 = 1;
LAB_1017d0160:
            uVar14 = 0x40 - LZCOUNT(uVar1 >> 10);
            if (6 < uVar14) {
              uVar14 = 7;
            }
            in_stack_00000108 = (code *)0x0;
            in_stack_00000118 = uVar14 << 2 | 1;
            in_stack_00000100 = (undefined8 *)lVar11;
            in_stack_00000110 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0001017d01a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&UNK_1017d01a8 + (ulong)(byte)(&UNK_108ce2dc2)[uVar5] * 4))();
            return;
          }
          uVar17 = 1;
          lVar11 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(uVar1,1);
          if (lVar11 != 0) goto LAB_1017d0160;
        }
        func_0x0001087c9084(uVar17,uVar1);
        goto LAB_1017d03c8;
      }
      *(undefined8 *)(unaff_x29 + -0x100) = 1;
      *(undefined8 *)(unaff_x29 + -0xf8) = 0;
      *(undefined8 *)(unaff_x29 + -0xf0) = 0;
      *(undefined8 *)(unaff_x29 + -0xe8) = 1;
      unaff_x26 = unaff_x29 + -0xc0;
      unaff_x22 = (undefined8 *)0x1;
      FUN_10038f8b4(&stack0x00000100,unaff_x29 + -0x100);
      in_stack_00000120 = CONCAT26(in_stack_00000120._6_2_,0x100000001);
      in_stack_00000120 = in_stack_00000120 & 0xffffffffffffff;
      FUN_10177d4f8(unaff_x29 + -0xe0);
      if (*(undefined8 **)(unaff_x29 + -0xe0) == (undefined8 *)0x15) {
        FUN_10177d188(&stack0x00000060);
      }
      else {
        bStack0000000000000068 = *(byte *)(unaff_x29 + -0xd8);
        uStack0000000000000071 = (undefined7)*(undefined8 *)(unaff_x24 + 0xe1);
        uStack0000000000000069 = (undefined7)*(undefined8 *)(unaff_x24 + 0xd9);
        uStack0000000000000070 = (undefined1)((ulong)*(undefined8 *)(unaff_x24 + 0xd9) >> 0x38);
        uStack0000000000000078 = (undefined1)*(undefined8 *)(unaff_x29 + -200);
        uStack0000000000000079 = (undefined7)((ulong)*(undefined8 *)(unaff_x29 + -200) >> 8);
        in_stack_00000060 = *(undefined8 **)(unaff_x29 + -0xe0);
      }
      unaff_x28 = (ulong *)&__ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E;
      puVar23 = (ulong *)&__ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E;
      if (*(long *)(unaff_x29 + -0xc0) == 4) goto LAB_1017cf640;
    }
    goto LAB_1017cf628;
  }
  in_stack_00000100 = in_stack_00000088;
  uVar15 = uStack0000000000000090;
  if (lVar11 == 0) {
    pcVar13 = (code *)CONCAT71(uStack0000000000000091,uStack0000000000000090);
    in_stack_00000118 = CONCAT71(uStack00000000000000a1,uStack00000000000000a0);
    uVar6 = CONCAT71(uStack0000000000000099,uStack0000000000000098);
    in_stack_00000120 = CONCAT71(in_stack_00000120._1_7_,1);
    uVar17 = uVar6;
    in_stack_00000108 = pcVar13;
    in_stack_00000110 = uVar6;
    if (*(char *)(unaff_x20 + 0x140) == '\x02') {
      uVar10 = 0;
      *(ulong *)(unaff_x29 + -0xf8) = CONCAT17(uStack00000000000000a0,uStack0000000000000099);
      *(ulong *)(unaff_x29 + -0x100) = CONCAT17(uStack0000000000000098,uStack0000000000000091);
      *(ulong *)(unaff_x24 + 0xbf) = CONCAT71(uStack00000000000000a1,uStack00000000000000a0);
    }
    else {
      __ZN11tungstenite10extensions11compression7deflate14DeflateContext8compress17h63db49d0aa28d5dfE
                (unaff_x29 + -0xe0,unaff_x20 + 0x108,pcVar13,uVar6);
      puVar12 = *(undefined8 **)(unaff_x29 + -0xe0);
      if (puVar12 == (undefined8 *)0x0) {
        puStack0000000000000010 = (undefined8 *)0x21;
      }
      else {
        uVar24 = *(undefined8 *)(unaff_x24 + 0xd9);
        *(undefined8 *)(unaff_x29 + -0xf8) = *(undefined8 *)(unaff_x24 + 0xe1);
        *(undefined8 *)(unaff_x29 + -0x100) = uVar24;
        *(undefined8 *)(unaff_x24 + 0xbf) = *(undefined8 *)(unaff_x29 + -200);
        puStack0000000000000010 = puVar12;
      }
      uVar15 = *(undefined1 *)(unaff_x29 + -0xd8);
      unaff_x22 = (undefined8 *)0x0;
      (*(code *)in_stack_00000100[4])(&stack0x00000118,pcVar13,uVar6);
      if (puVar12 == (undefined8 *)0x0) {
        in_stack_000000c0 = *(undefined8 *)(unaff_x29 + -0x100);
        *(undefined8 *)(unaff_x24 + 0x47) = *(undefined8 *)(unaff_x24 + 0xb7);
        uStack0000000000000071 = (undefined7)in_stack_000000c0;
        uStack0000000000000078 = (undefined1)*(undefined8 *)(unaff_x24 + 0x47);
        uStack0000000000000079 = (undefined7)((ulong)*(undefined8 *)(unaff_x24 + 0x47) >> 8);
        in_stack_00000060 = (undefined8 *)0xe;
        bStack0000000000000068 = (byte)puStack0000000000000010;
        uStack0000000000000069 = (undefined7)((ulong)puStack0000000000000010 >> 8);
        lVar11 = *(long *)(unaff_x29 + -0xc0);
        uStack0000000000000070 = uVar15;
        if (lVar11 < 4) {
          unaff_x28 = (ulong *)&__ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E;
          puVar23 = unaff_x28;
          if (2 < lVar11 - 1U) goto LAB_1017cf640;
        }
        else {
          unaff_x28 = (ulong *)&__ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E;
          if (lVar11 == 4) goto LAB_1017cf61c;
        }
        goto LAB_1017cf628;
      }
      uVar10 = 1;
      in_stack_00000100 = puStack0000000000000010;
    }
    bVar16 = false;
    in_stack_000000c8 = *(undefined8 *)(unaff_x29 + -0xf8);
    in_stack_000000c0 = *(undefined8 *)(unaff_x29 + -0x100);
    *(undefined8 *)(unaff_x24 + 0x4f) = *(undefined8 *)(unaff_x24 + 0xbf);
    *(undefined8 *)(unaff_x24 + 0x6f) = *(undefined8 *)(unaff_x24 + 0xbf);
    bVar7 = true;
    in_stack_00000120 = (ulong)CONCAT15(1,(uint5)CONCAT11(uVar10,1));
    bVar22 = true;
    bVar20 = true;
    in_stack_000000e0 = in_stack_000000c0;
    in_stack_000000e8 = in_stack_000000c8;
  }
  else {
    if (lVar11 == 1) {
      pcVar13 = (code *)CONCAT71(uStack0000000000000091,uStack0000000000000090);
      in_stack_00000118 = CONCAT71(uStack00000000000000a1,uStack00000000000000a0);
      uVar6 = CONCAT71(uStack0000000000000099,uStack0000000000000098);
      in_stack_00000120 = CONCAT71(in_stack_00000120._1_7_,2);
      uVar17 = uVar6;
      in_stack_00000108 = pcVar13;
      in_stack_00000110 = uVar6;
      if (*(char *)(unaff_x20 + 0x140) == '\x02') {
        uVar10 = 0;
        *(ulong *)(unaff_x29 + -0xf8) = CONCAT17(uStack00000000000000a0,uStack0000000000000099);
        *(ulong *)(unaff_x29 + -0x100) = CONCAT17(uStack0000000000000098,uStack0000000000000091);
        *(ulong *)(unaff_x24 + 0xbf) = CONCAT71(uStack00000000000000a1,uStack00000000000000a0);
      }
      else {
        __ZN11tungstenite10extensions11compression7deflate14DeflateContext8compress17h63db49d0aa28d5dfE
                  (unaff_x29 + -0xe0,unaff_x20 + 0x108,pcVar13,uVar6);
        puVar12 = *(undefined8 **)(unaff_x29 + -0xe0);
        if (puVar12 == (undefined8 *)0x0) {
          puStack0000000000000010 = (undefined8 *)0x21;
        }
        else {
          uVar24 = *(undefined8 *)(unaff_x24 + 0xd9);
          *(undefined8 *)(unaff_x29 + -0xf8) = *(undefined8 *)(unaff_x24 + 0xe1);
          *(undefined8 *)(unaff_x29 + -0x100) = uVar24;
          *(undefined8 *)(unaff_x24 + 0xbf) = *(undefined8 *)(unaff_x29 + -200);
          puStack0000000000000010 = puVar12;
        }
        uVar15 = *(undefined1 *)(unaff_x29 + -0xd8);
        unaff_x22 = (undefined8 *)0x0;
        (*(code *)in_stack_00000100[4])(&stack0x00000118,pcVar13,uVar6);
        if (puVar12 == (undefined8 *)0x0) {
          in_stack_000000c0 = *(undefined8 *)(unaff_x29 + -0x100);
          *(undefined8 *)(unaff_x24 + 0x47) = *(undefined8 *)(unaff_x24 + 0xb7);
          uStack0000000000000071 = (undefined7)in_stack_000000c0;
          uStack0000000000000078 = (undefined1)*(undefined8 *)(unaff_x24 + 0x47);
          uStack0000000000000079 = (undefined7)((ulong)*(undefined8 *)(unaff_x24 + 0x47) >> 8);
          in_stack_00000060 = (undefined8 *)0xe;
          bStack0000000000000068 = (byte)puStack0000000000000010;
          uStack0000000000000069 = (undefined7)((ulong)puStack0000000000000010 >> 8);
          unaff_x28 = (ulong *)&__ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E;
          uStack0000000000000070 = uVar15;
          if ((1L << (*(ulong *)(unaff_x29 + -0xc0) & 0x3f) & 0x2dU) == 0) {
            puVar23 = unaff_x28;
            if (*(ulong *)(unaff_x29 + -0xc0) != 1) goto LAB_1017cf61c;
            goto LAB_1017cf640;
          }
          goto LAB_1017cf628;
        }
        uVar10 = 1;
        in_stack_00000100 = puStack0000000000000010;
      }
      bVar20 = false;
      in_stack_000000c8 = *(undefined8 *)(unaff_x29 + -0xf8);
      in_stack_000000c0 = *(undefined8 *)(unaff_x29 + -0x100);
      *(undefined8 *)(unaff_x24 + 0x4f) = *(undefined8 *)(unaff_x24 + 0xbf);
      *(undefined8 *)(unaff_x24 + 0x6f) = *(undefined8 *)(unaff_x24 + 0xbf);
      in_stack_00000120 = (ulong)CONCAT15(2,(uint5)CONCAT11(uVar10,1));
      bVar22 = true;
      in_stack_000000e0 = in_stack_000000c0;
      in_stack_000000e8 = in_stack_000000c8;
    }
    else {
      bVar22 = false;
      in_stack_00000100 = *(undefined8 **)(unaff_x29 + -0xb8);
      uVar15 = *(undefined1 *)(unaff_x29 + -0xb0);
      in_stack_000000e8 = CONCAT17(uStack00000000000000a0,uStack0000000000000099);
      in_stack_000000e0 = CONCAT17(uStack0000000000000098,uStack0000000000000091);
      *(ulong *)(unaff_x24 + 0x6f) = CONCAT71(uStack00000000000000a1,uStack00000000000000a0);
      in_stack_00000120 = 0x10100000001;
      bVar20 = true;
    }
    bVar7 = true;
    bVar16 = true;
  }
LAB_1017cffac:
  in_stack_00000108 = (code *)CONCAT71(in_stack_00000108._1_7_,uVar15);
  *(undefined8 *)(unaff_x24 + 0x91) = in_stack_000000e8;
  *(undefined8 *)(unaff_x24 + 0x89) = in_stack_000000e0;
  in_stack_00000118 = *(undefined8 *)(unaff_x24 + 0x6f);
  in_stack_00000128 = uVar17;
  FUN_10177d4f8(unaff_x29 + -0xe0);
  puVar12 = *(undefined8 **)(unaff_x29 + -0xe0);
  bVar4 = *(byte *)(unaff_x29 + -0xd8);
  if (puVar12 == (undefined8 *)0x15) {
    if (((bVar4 & 1) != 0) &&
       (FUN_10177d188(&stack0x00000100), in_stack_00000100 != (undefined8 *)0x15)) {
      bStack0000000000000068 = (byte)in_stack_00000108;
      uStack0000000000000069 = (undefined7)((ulong)in_stack_00000108 >> 8);
      in_stack_00000060 = in_stack_00000100;
      uStack0000000000000078 = (undefined1)in_stack_00000118;
      uStack0000000000000079 = (undefined7)(in_stack_00000118 >> 8);
      uStack0000000000000070 = (undefined1)in_stack_00000110;
      uStack0000000000000071 = (undefined7)(in_stack_00000110 >> 8);
      lVar11 = *(long *)(unaff_x29 + -0xc0);
      if (lVar11 < 3) goto LAB_1017d0050;
LAB_1017d0080:
      unaff_x28 = (ulong *)&__ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E;
      unaff_x22 = (undefined8 *)0x0;
      if (lVar11 != 3) {
        if (lVar11 == 4) goto LAB_1017cf61c;
        puVar23 = unaff_x28;
        if (!bVar7) goto LAB_1017cf640;
      }
LAB_1017cf628:
      (**(code **)(*(long *)(unaff_x29 + -0xb8) + 0x20))
                (unaff_x29 + -0xa0,*(undefined8 *)(unaff_x29 + -0xb0),
                 *(undefined8 *)(unaff_x29 + -0xa8));
      puVar23 = unaff_x28;
      goto LAB_1017cf640;
    }
    unaff_x22 = (undefined8 *)0x0;
    puVar23 = (ulong *)&__ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E;
LAB_1017cf64c:
    *(undefined1 *)(unaff_x20 + 0x5aa) = 1;
LAB_1017cf79c:
    if (4 < *puVar23) {
      *(undefined **)(unaff_x29 + -0x88) = &UNK_108ce30dc;
      *(undefined8 *)(unaff_x29 + -0x80) = 0x11;
      *(undefined **)(unaff_x29 + -0x70) = &UNK_108ce347c;
      *(undefined8 *)(unaff_x29 + -0x68) = 0xf3;
      *(undefined8 *)(unaff_x29 + -0xc0) = 0;
      *(undefined **)(unaff_x29 + -0xb8) = &UNK_108ce30dc;
      *(undefined8 *)(unaff_x29 + -0xa8) = 0;
      *(undefined8 *)(unaff_x29 + -0xb0) = 0x11;
      *(char **)(unaff_x29 + -0xa0) =
           "/Users/runner/.cargo/git/checkouts/tokio-tungstenite-ea4445d9acecae62/132f5b3/src/lib.rs"
      ;
      *(undefined8 *)(unaff_x26 + 0x30) = 5;
      *(undefined8 *)(unaff_x26 + 0x28) = 0x58;
      *(undefined8 *)(unaff_x29 + -0x78) = 0xf500000001;
      puVar2 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_10b3c24c8;
      }
      puVar3 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar3 = &UNK_109adfc03;
      }
      (**(code **)(puVar2 + 0x20))(puVar3,unaff_x29 + -0xc0);
    }
    plVar19 = (long *)*unaff_x21;
    lVar21 = *(long *)(unaff_x20 + 0x598);
    lVar18 = *(long *)(unaff_x20 + 0x5a0);
    lVar11 = *(long *)(lVar21 + 0x38);
    if (lVar11 == 0) {
      *(long *)(lVar21 + 0x38) = 1;
    }
    if (lVar11 != 2) {
      if (lVar11 != 0) goto LAB_1017cf90c;
      puVar12 = (undefined8 *)*plVar19;
      if (*(undefined8 **)(lVar21 + 0x28) == (undefined8 *)0x0) {
        auVar25 = (*(code *)*puVar12)(plVar19[1]);
        lVar11 = *(long *)(lVar21 + 0x28);
joined_r0x0001017cf8c8:
        if (lVar11 != 0) {
          (**(code **)(lVar11 + 0x18))(*(undefined8 *)(lVar21 + 0x30));
        }
        unaff_x22 = auVar25._0_8_;
        *(undefined1 (*) [16])(lVar21 + 0x28) = auVar25;
      }
      else if (*(undefined8 **)(lVar21 + 0x28) != puVar12 || *(long *)(lVar21 + 0x30) != plVar19[1])
      {
        auVar25 = (*(code *)*puVar12)();
        lVar11 = *(long *)(lVar21 + 0x28);
        goto joined_r0x0001017cf8c8;
      }
      if (*(long *)(lVar21 + 0x38) == 1) {
        *(long *)(lVar21 + 0x38) = in_xzr;
        goto LAB_1017cf90c;
      }
      lVar11 = *(long *)(lVar21 + 0x28);
      lVar9 = *(long *)(lVar21 + 0x30);
      *(undefined8 *)(lVar21 + 0x28) = 0;
      if (lVar11 != 0) {
        LOAcquire();
        *(long *)(lVar21 + 0x38) = in_xzr;
        LORelease();
        pcVar13 = *(code **)(lVar11 + 8);
        goto LAB_1017cf908;
      }
LAB_1017d03b0:
      func_0x000108a07a20(&UNK_10b398268);
      *(undefined8 **)(unaff_x29 + -0x100) = unaff_x22;
      *(undefined8 *)(unaff_x29 + -0xf8) = extraout_x8;
      __ZN5bytes13panic_advance17h894eeb3b0f978370E(unaff_x29 + -0x100);
LAB_1017d03c8:
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x1017d03cc);
      (*pcVar13)();
    }
    lVar9 = plVar19[1];
    pcVar13 = *(code **)(*plVar19 + 0x10);
LAB_1017cf908:
    (*pcVar13)(lVar9);
LAB_1017cf90c:
    lVar11 = *(long *)(lVar18 + 0x38);
    if (lVar11 == 0) {
      *(long *)(lVar18 + 0x38) = 1;
    }
    if (lVar11 == 2) {
      lVar11 = plVar19[1];
      pcVar13 = *(code **)(*plVar19 + 0x10);
LAB_1017cf9c8:
      (*pcVar13)(lVar11);
    }
    else if (lVar11 == 0) {
      puVar12 = (undefined8 *)*plVar19;
      if (*(undefined8 **)(lVar18 + 0x28) == (undefined8 *)0x0) {
        auVar25 = (*(code *)*puVar12)(plVar19[1]);
        lVar11 = *(long *)(lVar18 + 0x28);
joined_r0x0001017cf988:
        if (lVar11 != 0) {
          (**(code **)(lVar11 + 0x18))(*(undefined8 *)(lVar18 + 0x30));
        }
        unaff_x22 = auVar25._0_8_;
        *(undefined1 (*) [16])(lVar18 + 0x28) = auVar25;
      }
      else if (*(undefined8 **)(lVar18 + 0x28) != puVar12 || *(long *)(lVar18 + 0x30) != plVar19[1])
      {
        auVar25 = (*(code *)*puVar12)();
        lVar11 = *(long *)(lVar18 + 0x28);
        goto joined_r0x0001017cf988;
      }
      if (*(long *)(lVar18 + 0x38) != 1) {
        lVar21 = *(long *)(lVar18 + 0x28);
        lVar11 = *(long *)(lVar18 + 0x30);
        *(undefined8 *)(lVar18 + 0x28) = 0;
        if (lVar21 == 0) goto LAB_1017d03b0;
        LOAcquire();
        *(long *)(lVar18 + 0x38) = in_xzr;
        LORelease();
        pcVar13 = *(code **)(lVar21 + 8);
        goto LAB_1017cf9c8;
      }
      *(long *)(lVar18 + 0x38) = in_xzr;
    }
    FUN_10177d188(unaff_x29 + -0xc0);
    FUN_10179466c(&stack0x00000080,unaff_x29 + -0xc0);
    if (in_stack_00000080 == (undefined8 *)0x16) goto LAB_1017cfc14;
    *(undefined1 *)(unaff_x20 + 0x5aa) = 1;
    if (in_stack_00000080 != (undefined8 *)0x15) {
      if (in_stack_00000080 != (undefined8 *)0x9) {
        unaff_x19[2] = CONCAT71(uStack0000000000000091,uStack0000000000000090);
        unaff_x19[1] = in_stack_00000088;
        uVar17 = CONCAT71(uStack0000000000000099,uStack0000000000000098);
        goto LAB_1017cfc10;
      }
      FUN_1017a49cc(&stack0x00000080);
    }
    in_stack_00000080 = (undefined8 *)0x15;
  }
  else {
    uStack0000000000000071 = (undefined7)*(undefined8 *)(unaff_x24 + 0xe1);
    uStack0000000000000069 = (undefined7)*(undefined8 *)(unaff_x24 + 0xd9);
    uStack0000000000000070 = (undefined1)((ulong)*(undefined8 *)(unaff_x24 + 0xd9) >> 0x38);
    uStack0000000000000078 = (undefined1)*(undefined8 *)(unaff_x29 + -200);
    uStack0000000000000079 = (undefined7)((ulong)*(undefined8 *)(unaff_x29 + -200) >> 8);
    lVar11 = *(long *)(unaff_x29 + -0xc0);
    in_stack_00000060 = puVar12;
    bStack0000000000000068 = bVar4;
    if (2 < lVar11) goto LAB_1017d0080;
LAB_1017d0050:
    unaff_x28 = (ulong *)&__ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E;
    unaff_x22 = (undefined8 *)0x0;
    puVar23 = unaff_x28;
    if (lVar11 == 0) {
      if (bVar16) goto LAB_1017cf628;
    }
    else if (lVar11 == 1) {
      if (bVar20) goto LAB_1017cf628;
    }
    else if (bVar22) goto LAB_1017cf628;
LAB_1017cf640:
    bVar4 = bStack0000000000000068;
    if (in_stack_00000060 == (undefined8 *)0x15) goto LAB_1017cf64c;
    if (in_stack_00000060 == (undefined8 *)0xb) {
      puVar12 = (undefined8 *)CONCAT71(uStack0000000000000069,bStack0000000000000068);
      cVar8 = FUN_101798024(puVar12);
      unaff_x22 = puVar12;
      if (cVar8 != '\r') goto LAB_1017cf6bc;
      *(undefined1 *)(unaff_x20 + 0x5aa) = 0;
      if ((bVar4 & 3) == 1) {
        unaff_x22 = (undefined8 *)((long)puVar12 + -1);
        uVar17 = *unaff_x22;
        puVar12 = *(undefined8 **)((long)puVar12 + 7);
        pcVar13 = (code *)*puVar12;
        if (pcVar13 != (code *)0x0) {
          (*pcVar13)(uVar17);
        }
        if (puVar12[1] != 0) {
          _free(uVar17);
        }
        _free(unaff_x22);
      }
      goto LAB_1017cf79c;
    }
LAB_1017cf6bc:
    in_stack_00000088 = (undefined8 *)CONCAT71(uStack0000000000000069,bStack0000000000000068);
    in_stack_00000080 = in_stack_00000060;
    uStack0000000000000098 = uStack0000000000000078;
    uStack0000000000000099 = uStack0000000000000079;
    uStack0000000000000090 = uStack0000000000000070;
    uStack0000000000000091 = uStack0000000000000071;
    *(undefined1 *)(unaff_x20 + 0x5aa) = 1;
    if (3 < *puVar23) {
      in_stack_00000100 = &stack0x00000080;
      in_stack_00000108 =
           __ZN64__LT_tungstenite__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h3070f71c62fe5785E
      ;
      *(undefined **)(unaff_x29 + -0x88) = &UNK_108ce30dc;
      *(undefined8 *)(unaff_x29 + -0x80) = 0x11;
      *(char **)(unaff_x29 + -0x70) = s_websocket_start_send_error__108ac570a;
      *(undefined8 ***)(unaff_x29 + -0x68) = &stack0x00000100;
      *(undefined8 *)(unaff_x29 + -0xc0) = 0;
      *(undefined **)(unaff_x29 + -0xb8) = &UNK_108ce30dc;
      *(undefined8 *)(unaff_x29 + -0xa8) = 0;
      *(undefined8 *)(unaff_x29 + -0xb0) = 0x11;
      *(char **)(unaff_x29 + -0xa0) =
           "/Users/runner/.cargo/git/checkouts/tokio-tungstenite-ea4445d9acecae62/132f5b3/src/lib.rs"
      ;
      *(undefined8 *)(unaff_x26 + 0x30) = 4;
      *(undefined8 *)(unaff_x26 + 0x28) = 0x58;
      *(undefined8 *)(unaff_x29 + -0x78) = 0x16900000001;
      puVar2 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_10b3c24c8;
      }
      puVar3 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar3 = &UNK_109adfc03;
      }
      (**(code **)(puVar2 + 0x20))(puVar3,unaff_x29 + -0xc0);
    }
    uVar17 = CONCAT71(uStack0000000000000099,uStack0000000000000098);
    if (in_stack_00000080 == (undefined8 *)0x15) goto LAB_1017cf79c;
    if (in_stack_00000080 == (undefined8 *)0x16) goto LAB_1017cfc14;
    unaff_x19[2] = CONCAT71(uStack0000000000000091,uStack0000000000000090);
    unaff_x19[1] = in_stack_00000088;
LAB_1017cfc10:
    unaff_x19[3] = uVar17;
  }
LAB_1017cfc14:
  *unaff_x19 = in_stack_00000080;
  return;
}

