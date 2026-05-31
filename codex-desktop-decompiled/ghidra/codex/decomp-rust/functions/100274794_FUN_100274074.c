
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100274074(long param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  short sVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  code *pcVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined1 uVar17;
  long lVar18;
  short *psVar19;
  short *unaff_x19;
  byte bVar20;
  long *unaff_x21;
  short *unaff_x22;
  short sVar21;
  long *unaff_x23;
  long *unaff_x24;
  long *plVar22;
  char *unaff_x25;
  ulong *unaff_x26;
  undefined8 *puVar23;
  long lVar24;
  long *unaff_x28;
  long *plVar25;
  long unaff_x29;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [12];
  short *in_stack_00000008;
  undefined6 uStack0000000000000018;
  undefined2 uStack000000000000001e;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  long *in_stack_00000048;
  int iStack0000000000000050;
  short *in_stack_00000058;
  long *in_stack_00000060;
  long *in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  long in_stack_00000088;
  long *in_stack_00000090;
  long in_stack_00000098;
  char *in_stack_000000a0;
  short *in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_000001a0;
  long in_stack_000001a8;
  long in_stack_000001b0;
  undefined1 *in_stack_000001b8;
  undefined *in_stack_000001c0;
  undefined8 in_stack_000001c8;
  long in_stack_000001d0;
  long *in_stack_000001d8;
  char *pcStack00000000000001e0;
  undefined *puStack00000000000001e8;
  undefined6 in_stack_000001f0;
  undefined2 in_stack_000001f6;
  undefined6 in_stack_000001f8;
  undefined2 in_stack_000001fe;
  undefined6 in_stack_00000200;
  long *in_stack_00000206;
  undefined8 in_stack_00000348;
  undefined8 in_stack_00000350;
  long *in_stack_00000358;
  long *in_stack_00000360;
  long in_stack_00000368;
  long in_stack_00000370;
  undefined8 in_stack_00000378;
  long in_stack_00000380;
  long *in_stack_00000388;
  long in_stack_00000390;
  char *in_stack_00000398;
  short *in_stack_000003a0;
  undefined4 in_stack_000003a8;
  undefined4 in_stack_000003ac;
  undefined1 in_stack_000003b0;
  undefined7 in_stack_000003b1;
  undefined8 in_stack_000003b8;
  long in_stack_000003c0;
  
  auVar37._8_8_ = in_stack_00000350;
  auVar37._0_8_ = in_stack_00000348;
code_r0x000100274074:
  *(char **)(unaff_x29 + -0x80) = s_connecting_to_108ab909e;
  *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x70;
  pcStack00000000000001e0 = (char *)(unaff_x29 + -0x80);
  puStack00000000000001e8 = &UNK_10b1f3630;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x00000210);
  if ((*unaff_x25 == '\0') && (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar24 = *unaff_x23;
    lVar18 = *(long *)(lVar24 + 0x20);
    in_stack_00000358 = *(long **)(lVar24 + 0x28);
    auVar8._8_8_ = lVar18;
    auVar8._0_8_ = 4;
    auVar37._8_8_ = lVar18;
    auVar37._0_8_ = 4;
    unaff_x24 = plRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      unaff_x24 = (long *)&UNK_10b3c24c8;
    }
    unaff_x23 = plRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      unaff_x23 = (long *)&UNK_109adfc03;
    }
    iVar14 = (*(code *)unaff_x24[3])(unaff_x23,&stack0x00000348);
    if (iVar14 != 0) {
      in_stack_00000070 = *(long *)(lVar24 + 0x60);
      in_stack_00000078 = *(long *)(lVar24 + 0x68);
      in_stack_00000058 = *(short **)(lVar24 + 0x50);
      in_stack_00000060 = *(long **)(lVar24 + 0x58);
      _iStack0000000000000050 = 1;
      if (in_stack_00000058 == (short *)0x0) {
        _iStack0000000000000050 = 2;
      }
      in_stack_00000098 = *(long *)(lVar24 + 8);
      *(undefined1 **)(unaff_x29 + -0x98) = &stack0x00000210;
      *(undefined1 *)(unaff_x29 + -0x90) = 1;
      in_stack_00000068 = (long *)0x1;
      if (in_stack_00000070 == 0) {
        in_stack_00000068 = (long *)0x2;
      }
      in_stack_00000080 = 4;
      in_stack_000000a8 = (short *)&stack0x000002e0;
      in_stack_000000a0 = s__108b39f4f;
      in_stack_00000088 = lVar18;
      in_stack_00000090 = in_stack_00000358;
      (*(code *)unaff_x24[4])(unaff_x23,&stack0x00000050);
      auVar37 = auVar8;
    }
  }
LAB_100274318:
  __ZN10hyper_util6client6legacy7connect4http7connect17h6ae37eca367d7d5aE
            (&stack0x00000050,unaff_x22,*(undefined8 *)(unaff_x19 + 0xdc),
             *(undefined8 *)(*(long *)(unaff_x19 + 0xd8) + 0x20),
             *(undefined4 *)(*(long *)(unaff_x19 + 0xd8) + 0x28));
  if (iStack0000000000000050 == 1) {
    *(long **)(unaff_x19 + 0x38) = in_stack_00000060;
    *(short **)(unaff_x19 + 0x34) = in_stack_00000058;
    *(long *)(unaff_x19 + 0x40) = in_stack_00000070;
    *(long **)(unaff_x19 + 0x3c) = in_stack_00000068;
    *(undefined8 *)(unaff_x19 + 0x48) = in_stack_00000080;
    *(long *)(unaff_x19 + 0x44) = in_stack_00000078;
    *(long **)(unaff_x19 + 0x50) = in_stack_00000090;
    *(long *)(unaff_x19 + 0x4c) = in_stack_00000088;
    unaff_x19[0x30] = 1;
    unaff_x19[0x31] = 0;
    unaff_x19[0x32] = 0;
    unaff_x19[0x33] = 0;
    sVar21 = unaff_x19[0x34];
    in_stack_000001f8 = (undefined6)*(undefined8 *)(unaff_x19 + 0x39);
    in_stack_000001f0 = (undefined6)*(undefined8 *)(unaff_x19 + 0x35);
    in_stack_000001f6 = (undefined2)((ulong)*(undefined8 *)(unaff_x19 + 0x35) >> 0x30);
    in_stack_000001fe = (undefined2)*(undefined8 *)(unaff_x19 + 0x3c);
    in_stack_00000200 = (undefined6)((ulong)*(undefined8 *)(unaff_x19 + 0x3c) >> 0x10);
    unaff_x28 = *(long **)(unaff_x19 + 0x44);
    plVar22 = *(long **)(unaff_x19 + 0x48);
    unaff_x21 = *(long **)(unaff_x19 + 0x4c);
    unaff_x25 = *(char **)(unaff_x19 + 0x50);
    sVar4 = *unaff_x19;
    in_stack_00000206 = *(long **)(unaff_x19 + 0x40);
joined_r0x000100274cf8:
    if ((sVar4 != 3) && (lVar18 = *(long *)(unaff_x19 + 0x18), lVar18 != 0)) {
      puVar23 = *(undefined8 **)(unaff_x19 + 0x1c);
      pcVar11 = (code *)*puVar23;
      if (pcVar11 != (code *)0x0) {
        (*pcVar11)(lVar18);
      }
      if (puVar23[1] != 0) {
        _free(lVar18);
      }
    }
LAB_100274e60:
    *(undefined1 *)(unaff_x19 + 400) = 0;
    *in_stack_00000008 = sVar21;
    *(ulong *)(in_stack_00000008 + 5) = CONCAT26(in_stack_000001fe,in_stack_000001f8);
    *(ulong *)(in_stack_00000008 + 1) = CONCAT26(in_stack_000001f6,in_stack_000001f0);
    *(long **)(in_stack_00000008 + 0xc) = in_stack_00000206;
    *(ulong *)(in_stack_00000008 + 8) = CONCAT62(in_stack_00000200,in_stack_000001fe);
    *(long **)(in_stack_00000008 + 0x10) = unaff_x28;
    *(long **)(in_stack_00000008 + 0x14) = plVar22;
    *(long **)(in_stack_00000008 + 0x18) = unaff_x21;
    *(char **)(in_stack_00000008 + 0x1c) = unaff_x25;
    uVar17 = 1;
LAB_100274e8c:
    *(undefined1 *)((long)unaff_x19 + 0x321) = uVar17;
    return;
  }
  _memcpy(unaff_x19 + 0x34,&stack0x00000058,0x148);
  unaff_x19[0x30] = 0;
  unaff_x19[0x31] = 0;
  unaff_x19[0x32] = 0;
  unaff_x19[0x33] = 0;
  _memcpy(unaff_x19 + 0xe4,unaff_x19 + 0x34,0x148);
  bVar20 = *(byte *)(unaff_x19 + 0x11c);
  if (bVar20 < 3) {
    if (bVar20 != 0) {
      if (bVar20 == 1) {
        FUN_107c05cc0(&UNK_10b1f3a00);
      }
      else {
        FUN_107c05cc4(&UNK_10b1f3a00);
      }
      goto LAB_100274f40;
    }
    uVar3 = *(uint *)(unaff_x19 + 0xe8);
    unaff_x23 = (long *)(ulong)uVar3;
    if (uVar3 == 1000000000) {
      *(undefined8 *)(unaff_x19 + 0x134) = *(undefined8 *)(unaff_x19 + 0x100);
      *(undefined8 *)(unaff_x19 + 0x130) = *(undefined8 *)(unaff_x19 + 0xfc);
      *(undefined8 *)(unaff_x19 + 0x13c) = *(undefined8 *)(unaff_x19 + 0x108);
      *(undefined8 *)(unaff_x19 + 0x138) = *(undefined8 *)(unaff_x19 + 0x104);
      *(undefined8 *)(unaff_x19 + 0x144) = *(undefined8 *)(unaff_x19 + 0x110);
      *(undefined8 *)(unaff_x19 + 0x140) = *(undefined8 *)(unaff_x19 + 0x10c);
      *(undefined8 *)(unaff_x19 + 0x14c) = *(undefined8 *)(unaff_x19 + 0x118);
      *(undefined8 *)(unaff_x19 + 0x148) = *(undefined8 *)(unaff_x19 + 0x114);
      *(undefined8 *)(unaff_x19 + 0x124) = *(undefined8 *)(unaff_x19 + 0xf0);
      *(undefined8 *)(unaff_x19 + 0x120) = *(undefined8 *)(unaff_x19 + 0xec);
      *(undefined8 *)(unaff_x19 + 300) = *(undefined8 *)(unaff_x19 + 0xf8);
      *(undefined8 *)(unaff_x19 + 0x128) = *(undefined8 *)(unaff_x19 + 0xf4);
      goto LAB_1002743a4;
    }
    lVar18 = *(long *)(unaff_x19 + 0xe4);
    uVar28 = *(undefined8 *)(unaff_x19 + 0x100);
    uVar16 = *(undefined8 *)(unaff_x19 + 0xfc);
    uVar34 = *(undefined8 *)(unaff_x19 + 0x108);
    uVar31 = *(undefined8 *)(unaff_x19 + 0x104);
    uVar29 = *(undefined8 *)(unaff_x19 + 0x110);
    uVar26 = *(undefined8 *)(unaff_x19 + 0x10c);
    uVar35 = *(undefined8 *)(unaff_x19 + 0x118);
    uVar32 = *(undefined8 *)(unaff_x19 + 0x114);
    uVar30 = *(undefined8 *)(unaff_x19 + 0xf0);
    uVar27 = *(undefined8 *)(unaff_x19 + 0xec);
    uVar36 = *(undefined8 *)(unaff_x19 + 0xf8);
    uVar33 = *(undefined8 *)(unaff_x19 + 0xf4);
    auVar38 = __ZN5tokio4time7instant7Instant3now17h0933a405225fc2efE();
    unaff_x22 = (short *)(auVar38._0_8_ + lVar18);
    if (lVar18 < 0 == SCARRY8(auVar38._0_8_,lVar18)) {
      uVar3 = auVar38._8_4_ + uVar3;
      unaff_x23 = (long *)(ulong)uVar3;
      if ((999999999 < uVar3) &&
         ((bVar12 = SCARRY8((long)unaff_x22,1), unaff_x22 = (short *)((long)unaff_x22 + 1), bVar12
          || (unaff_x23 = (long *)(ulong)(uVar3 + 0xc4653600), uVar3 + 0xc4653600 == 1000000000))))
      goto LAB_100274468;
      auVar37 = __ZN5tokio7runtime9scheduler6Handle7current17hf4db12f69375e750E(&UNK_10b1f39e8);
      *(undefined1 (*) [16])(unaff_x29 + -0x98) = auVar37;
      lVar18 = 0x140;
      if ((auVar37._0_8_ & 1) == 0) {
        lVar18 = 0x200;
      }
      if (*(int *)(auVar37._8_8_ + lVar18 + 0xd8) == 1000000000) {
        FUN_107c05cac(&UNK_109bebb98,0x73,&UNK_10b1f39e8);
        goto LAB_100274f40;
      }
      in_stack_00000060 = (long *)0x0;
      in_stack_000003a8 = SUB84(unaff_x23,0);
      in_stack_000003b0 = 0;
      in_stack_000000a8 = unaff_x22;
    }
    else {
LAB_100274468:
      __ZN5tokio4time5sleep5Sleep10far_future17h6fe06e7f826507d5E(&stack0x00000348,0);
      in_stack_00000060 = in_stack_00000358;
      in_stack_000000a8 = in_stack_000003a0;
    }
    in_stack_000000b8 = CONCAT71(in_stack_000003b1,in_stack_000003b0);
    in_stack_000000b0 = CONCAT44(in_stack_000003ac,in_stack_000003a8);
    *(undefined8 *)(unaff_x19 + 0x174) = uVar34;
    *(undefined8 *)(unaff_x19 + 0x170) = uVar31;
    *(undefined8 *)(unaff_x19 + 0x17c) = uVar29;
    *(undefined8 *)(unaff_x19 + 0x178) = uVar26;
    *(undefined8 *)(unaff_x19 + 0x184) = uVar35;
    *(undefined8 *)(unaff_x19 + 0x180) = uVar32;
    *(undefined8 *)(unaff_x19 + 0x154) = in_stack_000000b8;
    *(undefined8 *)(unaff_x19 + 0x150) = in_stack_000000b0;
    *(undefined8 *)(unaff_x19 + 0x15c) = uVar30;
    *(undefined8 *)(unaff_x19 + 0x158) = uVar27;
    *(undefined8 *)(unaff_x19 + 0x164) = uVar36;
    *(undefined8 *)(unaff_x19 + 0x160) = uVar33;
    *(undefined8 *)(unaff_x19 + 0x16c) = uVar28;
    *(undefined8 *)(unaff_x19 + 0x168) = uVar16;
    *(long *)(unaff_x19 + 0x134) = in_stack_00000370;
    *(long *)(unaff_x19 + 0x130) = in_stack_00000368;
    *(long *)(unaff_x19 + 0x13c) = in_stack_00000380;
    *(undefined8 *)(unaff_x19 + 0x138) = in_stack_00000378;
    *(long *)(unaff_x19 + 0x144) = in_stack_00000390;
    *(long **)(unaff_x19 + 0x140) = in_stack_00000388;
    *(short **)(unaff_x19 + 0x14c) = in_stack_000000a8;
    *(char **)(unaff_x19 + 0x148) = in_stack_00000398;
    *(undefined1 (*) [16])(unaff_x19 + 0x120) = auVar37;
    *(long **)(unaff_x19 + 300) = in_stack_00000360;
    *(long **)(unaff_x19 + 0x128) = in_stack_00000060;
    in_stack_00000068 = in_stack_00000360;
    in_stack_00000070 = in_stack_00000368;
    in_stack_00000078 = in_stack_00000370;
    in_stack_00000080 = in_stack_00000378;
    in_stack_00000088 = in_stack_00000380;
    in_stack_00000090 = in_stack_00000388;
    in_stack_00000098 = in_stack_00000390;
    in_stack_000000a0 = in_stack_00000398;
    in_stack_000000c0 = uVar27;
    in_stack_000000c8 = uVar30;
    in_stack_000000d0 = uVar33;
    in_stack_000000d8 = uVar36;
    in_stack_000000e0 = uVar16;
    in_stack_000000e8 = uVar28;
    in_stack_000000f0 = uVar31;
    in_stack_000000f8 = uVar34;
    in_stack_00000100 = uVar26;
    in_stack_00000108 = uVar29;
    in_stack_00000110 = uVar32;
    in_stack_00000118 = uVar35;
    in_stack_00000358 = in_stack_00000060;
    in_stack_000003a0 = in_stack_000000a8;
    _iStack0000000000000050 = auVar37;
LAB_100274590:
    lVar18 = (*
             ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
             )();
    bVar20 = *(byte *)(lVar18 + 0x48);
    if (bVar20 == 1) {
LAB_1002745d0:
      bVar20 = *(char *)(lVar18 + 0x45) != '\0' | (*(byte *)(lVar18 + 0x44) ^ 0xff) & 1;
    }
    else if (bVar20 != 2) {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (lVar18,&DAT_1002aadd8);
      *(undefined1 *)(lVar18 + 0x48) = 1;
      goto LAB_1002745d0;
    }
    FUN_1002d3188(&stack0x00000050,unaff_x19 + 0x158);
    lVar18 = _iStack0000000000000050;
    psVar19 = in_stack_00000058;
    plVar22 = in_stack_00000060;
    plVar25 = in_stack_00000068;
    if (_iStack0000000000000050 == 3) {
      uVar15 = __ZN5tokio4time7timeout10poll_delay17hf2380a7a6975c730E
                         (bVar20 == 2 | bVar20 & 1,unaff_x19 + 0x120);
      psVar19 = unaff_x22;
      plVar22 = unaff_x24;
      plVar25 = unaff_x28;
      if ((uVar15 & 1) != 0) {
        uVar17 = 3;
LAB_100274d04:
        *(undefined1 *)(unaff_x19 + 0x11c) = uVar17;
        *in_stack_00000008 = 4;
        uVar17 = 3;
        goto LAB_100274e8c;
      }
    }
    auVar10._8_8_ = psVar19;
    auVar10._0_8_ = lVar18;
    auVar9._8_8_ = psVar19;
    auVar9._0_8_ = lVar18;
    FUN_1002b59d4(unaff_x19 + 0x120);
    if ((lVar18 != 2) && (auVar9 = auVar10, lVar18 == 3)) {
      uVar16 = __ZN3std2io5error5Error3new17h23e1f35c31fa8cedE(0x16);
      auVar9._8_8_ = uVar16;
      auVar9._0_8_ = 2;
    }
LAB_100274660:
    lVar18 = auVar9._0_8_;
    unaff_x28 = plVar25;
  }
  else {
    if (bVar20 == 3) goto LAB_100274590;
LAB_1002743a4:
    FUN_1002d3188(&stack0x00000050,unaff_x19 + 0x120);
    unaff_x28 = in_stack_00000068;
    plVar22 = in_stack_00000060;
    auVar9 = _iStack0000000000000050;
    lVar18 = _iStack0000000000000050;
    if (_iStack0000000000000050 == 3) {
      uVar17 = 4;
      goto LAB_100274d04;
    }
    if ((char)unaff_x19[0x14c] != '\x03') {
      plVar25 = in_stack_00000068;
      if ((char)unaff_x19[0x14c] == '\0') {
        _close(*(undefined4 *)(unaff_x19 + 0x148));
        goto joined_r0x000100274adc;
      }
      goto LAB_100274660;
    }
    if ((char)unaff_x19[0x146] == '\x03') {
      FUN_1002c0e80(unaff_x19 + 0x130);
    }
    else if ((char)unaff_x19[0x146] == '\0') {
      _close(*(undefined4 *)(unaff_x19 + 0x144));
    }
    *(undefined1 *)((long)unaff_x19 + 0x299) = 0;
  }
joined_r0x000100274adc:
  if (lVar18 == 2) {
    _iStack0000000000000050 = auVar9._8_8_;
    unaff_x23 = (long *)_malloc(8);
    if (unaff_x23 == (long *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
      goto LAB_100274f40;
    }
    *unaff_x23 = auVar9._8_8_;
    unaff_x28 = (long *)&UNK_108c74595;
  }
  *(undefined1 *)(unaff_x19 + 0x11c) = 1;
  FUN_1002b331c(unaff_x19 + 0xe4);
  if (auVar9._0_8_ != 2) {
    if (*unaff_x26 < 2) {
      if (1 < bRam000000010b634a68 - 1) {
        unaff_x21 = (long *)&
                            __ZN10hyper_util6client6legacy7connect4http19ConnectingTcpRemote7connect28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4e42fea94b155126E
        ;
        if (bRam000000010b634a68 != 0) {
          cVar13 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN10hyper_util6client6legacy7connect4http19ConnectingTcpRemote7connect28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4e42fea94b155126E
                             );
          unaff_x21 = (long *)&
                              __ZN10hyper_util6client6legacy7connect4http19ConnectingTcpRemote7connect28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4e42fea94b155126E
          ;
          if (cVar13 != '\0') goto LAB_100274b3c;
        }
        goto LAB_100274d20;
      }
LAB_100274b3c:
      uVar15 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (
                         ___ZN10hyper_util6client6legacy7connect4http19ConnectingTcpRemote7connect28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4e42fea94b155126E
                         );
      plVar25 = 
      ___ZN10hyper_util6client6legacy7connect4http19ConnectingTcpRemote7connect28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4e42fea94b155126E
      ;
      unaff_x21 = (long *)&
                          __ZN10hyper_util6client6legacy7connect4http19ConnectingTcpRemote7connect28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4e42fea94b155126E
      ;
      if ((uVar15 & 1) == 0) goto LAB_100274d20;
      *(short **)(unaff_x29 + -0x80) = unaff_x19 + 0x20;
      *(undefined **)(unaff_x29 + -0x78) =
           &
           __ZN73__LT_core__net__socket_addr__SocketAddr_u20_as_u20_core__fmt__Display_GT_3fmt17hc1fbb8184c06862cE
      ;
      puStack00000000000001e8 = (undefined *)(unaff_x29 + -0x80);
      pcStack00000000000001e0 = s_connected_to_108ab9075;
      in_stack_000001b8 = (undefined1 *)&stack0x000001e0;
      in_stack_000001c0 = &UNK_10b1f3630;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(plVar25,&stack0x00000210);
      plVar25 = 
      ___ZN10hyper_util6client6legacy7connect4http19ConnectingTcpRemote7connect28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4e42fea94b155126E
      ;
      if ((*unaff_x25 == '\0') && (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        lVar18 = ___ZN10hyper_util6client6legacy7connect4http19ConnectingTcpRemote7connect28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4e42fea94b155126E
                 [4];
        plVar2 = (long *)___ZN10hyper_util6client6legacy7connect4http19ConnectingTcpRemote7connect28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4e42fea94b155126E
                         [5];
        plVar1 = plRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          plVar1 = (long *)&UNK_10b3c24c8;
        }
        unaff_x21 = plRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          unaff_x21 = (long *)&UNK_109adfc03;
        }
        iVar14 = (*(code *)plVar1[3])(unaff_x21,&stack0x000002e0);
        if (iVar14 != 0) {
          in_stack_00000070 = plVar25[0xc];
          in_stack_00000078 = plVar25[0xd];
          in_stack_00000058 = (short *)plVar25[10];
          in_stack_00000060 = (long *)plVar25[0xb];
          _iStack0000000000000050 = 1;
          if (in_stack_00000058 == (short *)0x0) {
            _iStack0000000000000050 = 2;
          }
          in_stack_00000098 = plVar25[1];
          *(undefined1 **)(unaff_x29 + -0x70) = &stack0x00000210;
          *(undefined1 *)(unaff_x29 + -0x68) = 1;
          *(long *)(unaff_x29 + -0x98) = unaff_x29 + -0x70;
          *(undefined **)(unaff_x29 + -0x90) = &DAT_1061c2098;
          in_stack_00000068 = (long *)0x1;
          if (in_stack_00000070 == 0) {
            in_stack_00000068 = (long *)0x2;
          }
          in_stack_00000080 = 4;
          in_stack_000000a8 = (short *)(unaff_x29 + -0x98);
          in_stack_000000a0 = s__108b39f4f;
          in_stack_00000088 = lVar18;
          in_stack_00000090 = plVar2;
          (*(code *)plVar1[4])(unaff_x21,&stack0x00000050);
        }
      }
    }
    else {
LAB_100274d20:
      plVar25 = 
      ___ZN10hyper_util6client6legacy7connect4http19ConnectingTcpRemote7connect28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4e42fea94b155126E
      ;
      if ((*unaff_x25 == '\0') && (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        in_stack_000001a8 =
             ___ZN10hyper_util6client6legacy7connect4http19ConnectingTcpRemote7connect28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4e42fea94b155126E
             [4];
        in_stack_000001b0 =
             ___ZN10hyper_util6client6legacy7connect4http19ConnectingTcpRemote7connect28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4e42fea94b155126E
             [5];
        in_stack_000001a0 = 4;
        plVar1 = plRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          plVar1 = (long *)&UNK_10b3c24c8;
        }
        plVar2 = plRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          plVar2 = (long *)&UNK_109adfc03;
        }
        iVar14 = (*(code *)plVar1[3])(plVar2,&stack0x000001a0);
        unaff_x21 = plVar25;
        if (iVar14 != 0) {
          in_stack_00000068 =
               ___ZN10hyper_util6client6legacy7connect4http19ConnectingTcpRemote7connect28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4e42fea94b155126E
               + 6;
          *(undefined1 **)(unaff_x29 + -0x98) = &stack0x000002e0;
          *(undefined **)(unaff_x29 + -0x90) = &UNK_10b1f3630;
          in_stack_00000058 = (short *)(unaff_x29 + -0x98);
          _iStack0000000000000050 = 1;
          in_stack_00000060 = (long *)0x1;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (plVar25,plVar2,plVar1,&stack0x000001a0,&stack0x00000050);
        }
      }
    }
    in_stack_000001fe = auVar9._8_2_;
    in_stack_00000200 = auVar9._10_6_;
    in_stack_000001f6 = auVar9._0_2_;
    in_stack_000001f8 = auVar9._2_6_;
    sVar21 = 3;
    sVar4 = *unaff_x19;
    in_stack_00000206 = plVar22;
    goto joined_r0x000100274cf8;
  }
  unaff_x24 = plVar22;
  plVar22 = unaff_x23;
  if (*unaff_x26 == 0) {
    if (1 < bRam000000010b634a98 - 1) {
      if (bRam000000010b634a98 != 0) {
        cVar13 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (&
                            __ZN10hyper_util6client6legacy7connect4http19ConnectingTcpRemote7connect28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h61696ad6066be0e7E
                           );
        if (cVar13 != '\0') goto LAB_100274868;
      }
      goto LAB_1002746e0;
    }
LAB_100274868:
    uVar15 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                       (
                       ___ZN10hyper_util6client6legacy7connect4http19ConnectingTcpRemote7connect28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h61696ad6066be0e7E
                       );
    if ((uVar15 & 1) == 0) goto LAB_1002746e0;
    psVar19 = unaff_x19 + 0x20;
    auVar7._8_8_ = &
                   __ZN73__LT_core__net__socket_addr__SocketAddr_u20_as_u20_core__fmt__Display_GT_3fmt17hc1fbb8184c06862cE
    ;
    auVar7._0_8_ = psVar19;
    auVar6._8_8_ = &
                   __ZN73__LT_core__net__socket_addr__SocketAddr_u20_as_u20_core__fmt__Display_GT_3fmt17hc1fbb8184c06862cE
    ;
    auVar6._0_8_ = psVar19;
    auVar5._8_8_ = &
                   __ZN73__LT_core__net__socket_addr__SocketAddr_u20_as_u20_core__fmt__Display_GT_3fmt17hc1fbb8184c06862cE
    ;
    auVar5._0_8_ = psVar19;
    auVar37._8_8_ =
         &
         __ZN73__LT_core__net__socket_addr__SocketAddr_u20_as_u20_core__fmt__Display_GT_3fmt17hc1fbb8184c06862cE
    ;
    auVar37._0_8_ = psVar19;
    in_stack_00000358 = (long *)&stack0x00000210;
    in_stack_00000360 =
         (long *)&
                 __ZN92__LT_hyper_util__client__legacy__connect__http__ConnectError_u20_as_u20_core__fmt__Debug_GT_3fmt17h93ea76ff3b86a24bE
    ;
    puStack00000000000001e8 = &stack0x00000348;
    pcStack00000000000001e0 = s_connect_error_for___108ab9085;
    in_stack_000001b8 = (undefined1 *)&stack0x000001e0;
    in_stack_000001c0 = &UNK_10b1f3630;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
              (___ZN10hyper_util6client6legacy7connect4http19ConnectingTcpRemote7connect28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h61696ad6066be0e7E
               ,&stack0x000002e0);
    plVar25 = 
    ___ZN10hyper_util6client6legacy7connect4http19ConnectingTcpRemote7connect28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h61696ad6066be0e7E
    ;
    if ((*unaff_x25 == '\0') &&
       (auVar37 = auVar5, 4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      lVar18 = ___ZN10hyper_util6client6legacy7connect4http19ConnectingTcpRemote7connect28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h61696ad6066be0e7E
               [4];
      lVar24 = ___ZN10hyper_util6client6legacy7connect4http19ConnectingTcpRemote7connect28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h61696ad6066be0e7E
               [5];
      *(undefined8 *)(unaff_x29 + -0x98) = 5;
      *(long *)(unaff_x29 + -0x90) = lVar18;
      *(long *)(unaff_x29 + -0x88) = lVar24;
      plVar22 = plRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        plVar22 = (long *)&UNK_10b3c24c8;
      }
      plVar1 = plRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        plVar1 = (long *)&UNK_109adfc03;
      }
      iVar14 = (*(code *)plVar22[3])(plVar1,unaff_x29 + -0x98);
      unaff_x24 = plVar25;
      auVar37 = auVar6;
      if (iVar14 != 0) {
        in_stack_00000070 = plVar25[0xc];
        in_stack_00000078 = plVar25[0xd];
        in_stack_00000058 = (short *)plVar25[10];
        in_stack_00000060 = (long *)plVar25[0xb];
        _iStack0000000000000050 = 1;
        if (in_stack_00000058 == (short *)0x0) {
          _iStack0000000000000050 = 2;
        }
        in_stack_00000098 = plVar25[1];
        *(undefined1 **)(unaff_x29 + -0x80) = &stack0x000002e0;
        *(undefined1 *)(unaff_x29 + -0x78) = 1;
        *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x80;
        *(undefined **)(unaff_x29 + -0x68) = &DAT_1061c2098;
        in_stack_00000068 = (long *)0x1;
        if (in_stack_00000070 == 0) {
          in_stack_00000068 = (long *)0x2;
        }
        in_stack_00000090 = *(long **)(unaff_x29 + -0x88);
        in_stack_000000a8 = (short *)(unaff_x29 + -0x70);
        in_stack_000000a0 = s__108b39f4f;
        in_stack_00000080 = in_stack_000003b8;
        in_stack_00000088 = in_stack_000003c0;
        (*(code *)plVar22[4])(plVar1,&stack0x00000050);
        auVar37 = auVar7;
      }
    }
  }
  else {
LAB_1002746e0:
    plVar25 = 
    ___ZN10hyper_util6client6legacy7connect4http19ConnectingTcpRemote7connect28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h61696ad6066be0e7E
    ;
    if ((*unaff_x25 == '\0') && (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      in_stack_000001d0 =
           ___ZN10hyper_util6client6legacy7connect4http19ConnectingTcpRemote7connect28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h61696ad6066be0e7E
           [4];
      in_stack_000001d8 =
           (long *)___ZN10hyper_util6client6legacy7connect4http19ConnectingTcpRemote7connect28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h61696ad6066be0e7E
                   [5];
      in_stack_000001c8 = 5;
      plVar22 = plRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        plVar22 = (long *)&UNK_10b3c24c8;
      }
      plVar1 = plRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        plVar1 = (long *)&UNK_109adfc03;
      }
      iVar14 = (*(code *)plVar22[3])(plVar1,&stack0x000001c8);
      unaff_x24 = plVar25;
      if (iVar14 != 0) {
        auVar37._8_8_ =
             &
             __ZN73__LT_core__net__socket_addr__SocketAddr_u20_as_u20_core__fmt__Display_GT_3fmt17hc1fbb8184c06862cE
        ;
        auVar37._0_8_ = unaff_x19 + 0x20;
        in_stack_00000358 = (long *)&stack0x00000210;
        in_stack_00000360 =
             (long *)&
                     __ZN92__LT_hyper_util__client__legacy__connect__http__ConnectError_u20_as_u20_core__fmt__Debug_GT_3fmt17h93ea76ff3b86a24bE
        ;
        *(char **)(unaff_x29 + -0x80) = s_connect_error_for___108ab9085;
        *(undefined1 **)(unaff_x29 + -0x78) = &stack0x00000348;
        pcStack00000000000001e0 = (char *)(unaff_x29 + -0x80);
        puStack00000000000001e8 = &UNK_10b1f3630;
        in_stack_00000088 = in_stack_000001d0;
        in_stack_00000080 = in_stack_000001c8;
        in_stack_00000090 = in_stack_000001d8;
        in_stack_00000070 = plVar25[0xc];
        in_stack_00000078 = plVar25[0xd];
        in_stack_00000058 = (short *)plVar25[10];
        in_stack_00000060 = (long *)plVar25[0xb];
        _iStack0000000000000050 = 1;
        if (in_stack_00000058 == (short *)0x0) {
          _iStack0000000000000050 = 2;
        }
        in_stack_00000098 = plVar25[1];
        *(undefined1 **)(unaff_x29 + -0x70) = &stack0x000002e0;
        *(undefined1 *)(unaff_x29 + -0x68) = 1;
        *(long *)(unaff_x29 + -0x98) = unaff_x29 + -0x70;
        *(undefined **)(unaff_x29 + -0x90) = &DAT_1061c2098;
        in_stack_00000068 = (long *)0x1;
        if (in_stack_00000070 == 0) {
          in_stack_00000068 = (long *)0x2;
        }
        in_stack_000000a8 = (short *)(unaff_x29 + -0x98);
        in_stack_000000a0 = s__108b39f4f;
        (*(code *)plVar22[4])(plVar1,&stack0x00000050);
      }
    }
  }
  if (*unaff_x19 == 3) {
    *(undefined1 *)(unaff_x19 + 400) = 1;
    *(undefined8 *)(unaff_x19 + 4) = *(undefined8 *)(unaff_x19 + 0x24);
    *(undefined8 *)unaff_x19 = *(undefined8 *)(unaff_x19 + 0x20);
    *(undefined8 *)(unaff_x19 + 0xc) = *(undefined8 *)(unaff_x19 + 0x2c);
    *(undefined8 *)(unaff_x19 + 8) = *(undefined8 *)(unaff_x19 + 0x28);
    unaff_x19[0x14] = 0x11;
    unaff_x19[0x15] = 0;
    unaff_x19[0x16] = 0;
    unaff_x19[0x17] = 0;
    *(long **)(unaff_x19 + 0x10) = unaff_x28;
    *(undefined **)(unaff_x19 + 0x1c) = &UNK_10b1f5ee8;
    *(long **)(unaff_x19 + 0x18) = unaff_x23;
  }
  else if (unaff_x23 != (long *)0x0) {
    plVar22 = (long *)&UNK_10b1f5ee8;
    FUN_1002be84c(unaff_x23);
    _free(unaff_x23);
  }
  lVar18 = *(long *)(unaff_x19 + 0xe0);
  psVar19 = *(short **)(lVar18 + 8);
  if (psVar19 == *(short **)(lVar18 + 0x18)) {
LAB_100274a54:
    sVar21 = *unaff_x19;
    if (sVar21 == 3) {
      lVar18 = __ZN3std2io5error5Error3new17h949302c01fe11b24E(7,&UNK_108c74582,0x13);
      _iStack0000000000000050 = lVar18;
      unaff_x21 = (long *)_malloc(8);
      if (unaff_x21 == (long *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
LAB_100274f40:
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x100274f44);
        (*pcVar11)();
      }
      *unaff_x21 = lVar18;
      unaff_x25 = &UNK_10b1f5ee8;
      sVar21 = 2;
      plVar22 = (long *)0x11;
      unaff_x28 = (long *)&UNK_108c74595;
    }
    else {
      *(undefined1 *)(unaff_x19 + 400) = 0;
      in_stack_000001f8 = (undefined6)*(undefined8 *)(unaff_x19 + 5);
      in_stack_000001f0 = (undefined6)*(undefined8 *)(unaff_x19 + 1);
      in_stack_000001f6 = (undefined2)((ulong)*(undefined8 *)(unaff_x19 + 1) >> 0x30);
      in_stack_00000206 = *(long **)(unaff_x19 + 0xc);
      in_stack_000001fe = (undefined2)*(undefined8 *)(unaff_x19 + 8);
      in_stack_00000200 = (undefined6)((ulong)*(undefined8 *)(unaff_x19 + 8) >> 0x10);
      unaff_x28 = *(long **)(unaff_x19 + 0x10);
      plVar22 = *(long **)(unaff_x19 + 0x14);
      unaff_x21 = *(long **)(unaff_x19 + 0x18);
      unaff_x25 = *(char **)(unaff_x19 + 0x1c);
    }
    goto LAB_100274e60;
  }
  *(short **)(lVar18 + 8) = psVar19 + 0x10;
  uVar16 = *(undefined8 *)(psVar19 + 1);
  uStack0000000000000018 = (undefined6)*(undefined8 *)(psVar19 + 5);
  uVar27 = *(undefined8 *)(psVar19 + 0xc);
  uVar26 = *(undefined8 *)(psVar19 + 8);
  uStack000000000000001e = (undefined2)uVar26;
  if (*psVar19 == 2) goto LAB_100274a54;
  unaff_x22 = unaff_x19 + 0x20;
  *unaff_x22 = *psVar19;
  *(ulong *)(unaff_x19 + 0x25) = CONCAT26(uStack000000000000001e,uStack0000000000000018);
  *(undefined8 *)(unaff_x19 + 0x21) = uVar16;
  *(undefined8 *)(unaff_x19 + 0x2c) = uVar27;
  *(undefined8 *)(unaff_x19 + 0x28) = uVar26;
  if (*unaff_x26 < 2) {
    unaff_x23 = (long *)&
                        __ZN10hyper_util6client6legacy7connect4http19ConnectingTcpRemote7connect28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h51c42902d02c16f3E
    ;
    if (bRam000000010b634a80 - 1 < 2) {
LAB_100274050:
      uVar15 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (
                         ___ZN10hyper_util6client6legacy7connect4http19ConnectingTcpRemote7connect28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h51c42902d02c16f3E
                         );
      param_1 = 
      ___ZN10hyper_util6client6legacy7connect4http19ConnectingTcpRemote7connect28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h51c42902d02c16f3E
      ;
      plVar22 = unaff_x23;
      if ((uVar15 & 1) != 0) goto code_r0x00010027405c;
    }
    else {
      plVar22 = unaff_x23;
      if (bRam000000010b634a80 != 0) {
        cVar13 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (&
                            __ZN10hyper_util6client6legacy7connect4http19ConnectingTcpRemote7connect28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h51c42902d02c16f3E
                           );
        plVar22 = (long *)&
                          __ZN10hyper_util6client6legacy7connect4http19ConnectingTcpRemote7connect28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h51c42902d02c16f3E
        ;
        if (cVar13 != '\0') goto LAB_100274050;
      }
    }
  }
  unaff_x23 = plVar22;
  lVar18 = 
  ___ZN10hyper_util6client6legacy7connect4http19ConnectingTcpRemote7connect28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h51c42902d02c16f3E
  ;
  if ((*unaff_x25 == '\0') && (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    in_stack_00000040 =
         *(long *)(
                  ___ZN10hyper_util6client6legacy7connect4http19ConnectingTcpRemote7connect28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h51c42902d02c16f3E
                  + 0x20);
    in_stack_00000048 =
         *(long **)(
                   ___ZN10hyper_util6client6legacy7connect4http19ConnectingTcpRemote7connect28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h51c42902d02c16f3E
                   + 0x28);
    in_stack_00000038 = 4;
    unaff_x24 = plRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      unaff_x24 = (long *)&UNK_10b3c24c8;
    }
    unaff_x23 = plRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      unaff_x23 = (long *)&UNK_109adfc03;
    }
    iVar14 = (*(code *)unaff_x24[3])(unaff_x23,&stack0x00000038);
    if (iVar14 != 0) {
      *(short **)(unaff_x29 + -0x98) = unaff_x22;
      *(undefined **)(unaff_x29 + -0x90) =
           &
           __ZN73__LT_core__net__socket_addr__SocketAddr_u20_as_u20_core__fmt__Display_GT_3fmt17hc1fbb8184c06862cE
      ;
      *(char **)(unaff_x29 + -0x70) = s_connecting_to_108ab909e;
      *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x98;
      *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x70;
      *(undefined **)(unaff_x29 + -0x78) = &UNK_10b1f3630;
      in_stack_00000088 = in_stack_00000040;
      in_stack_00000080 = in_stack_00000038;
      in_stack_00000090 = in_stack_00000048;
      in_stack_00000070 = *(long *)(lVar18 + 0x60);
      in_stack_00000078 = *(long *)(lVar18 + 0x68);
      in_stack_00000058 = *(short **)(lVar18 + 0x50);
      in_stack_00000060 = *(long **)(lVar18 + 0x58);
      _iStack0000000000000050 = 1;
      if (in_stack_00000058 == (short *)0x0) {
        _iStack0000000000000050 = 2;
      }
      in_stack_00000098 = *(long *)(lVar18 + 8);
      auVar37._8_8_ = &DAT_1061c2098;
      auVar37._0_8_ = &stack0x000002e0;
      in_stack_00000068 = (long *)0x1;
      if (in_stack_00000070 == 0) {
        in_stack_00000068 = (long *)0x2;
      }
      in_stack_000000a8 = (short *)&stack0x00000348;
      in_stack_000000a0 = s__108b39f4f;
      (*(code *)unaff_x24[4])(unaff_x23,&stack0x00000050);
    }
  }
  goto LAB_100274318;
code_r0x00010027405c:
  *(short **)(unaff_x29 + -0x70) = unaff_x22;
  *(undefined **)(unaff_x29 + -0x68) =
       &
       __ZN73__LT_core__net__socket_addr__SocketAddr_u20_as_u20_core__fmt__Display_GT_3fmt17hc1fbb8184c06862cE
  ;
  goto code_r0x000100274074;
}

