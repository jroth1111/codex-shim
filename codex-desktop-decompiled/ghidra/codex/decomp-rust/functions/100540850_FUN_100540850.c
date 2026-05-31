
undefined8 FUN_100540850(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 uVar14;
  long unaff_x19;
  long unaff_x20;
  long lVar15;
  undefined8 *unaff_x22;
  undefined8 uVar16;
  long unaff_x24;
  ulong uVar17;
  long lVar18;
  long unaff_x29;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined4 in_stack_000000a0;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  undefined4 uStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  undefined4 uStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  undefined4 uStack00000000000000d0;
  undefined4 uStack00000000000000d4;
  undefined4 uStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  undefined4 uStack00000000000000e0;
  undefined4 uStack00000000000000e4;
  undefined4 uStack00000000000000e8;
  undefined4 uStack00000000000000ec;
  undefined4 uStack00000000000000f0;
  undefined4 uStack00000000000000f4;
  undefined4 uStack00000000000000f8;
  undefined4 uStack00000000000000fc;
  undefined4 in_stack_00000100;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x80,s__108ac0bb6,&stack0x00000028);
  lVar15 = *(long *)(unaff_x29 + -0x80);
  uVar11 = *(undefined8 *)(unaff_x29 + -0x78);
  uVar17 = *(ulong *)(unaff_x29 + -0x70);
  if ((ulong)(in_stack_00000010 - unaff_x20) < uVar17) {
    thunk_FUN_108855060(&stack0x00000010);
    unaff_x20 = in_stack_00000020;
    unaff_x24 = in_stack_00000018;
  }
  _memcpy(unaff_x24 + unaff_x20,uVar11,uVar17);
  lVar18 = unaff_x20 + uVar17;
  in_stack_00000020 = lVar18;
  if (lVar15 != 0) {
    _free(uVar11);
  }
  if (*(long *)(unaff_x29 + -0xa0) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x98));
  }
  lVar15 = in_stack_00000018;
  if (lRam000000010b62a5d0 != 0) {
    *(undefined8 *)(unaff_x29 + -0xa0) = 0x10b62a5a0;
    *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xa0;
    __ZN3std3sys4sync4once5queue4Once4call17h3e41a5ec638e0eddE
              (0x10b62a5d0,1,unaff_x29 + -0x80,&UNK_10b2c0918,&UNK_10b2c0900);
  }
  *(undefined **)(unaff_x29 + -0x80) = &UNK_108d64f10;
  *(undefined8 *)(unaff_x29 + -0x78) = 7;
  *(long *)(unaff_x29 + -0x70) = lVar15;
  *(long *)(unaff_x29 + -0x68) = lVar18;
  FUN_103242274(unaff_x29 + -0xa0,0x10b62a5a0,unaff_x29 + -0x80);
  if (*(long *)(unaff_x29 + -0xa0) != 3) {
    *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x29 + -0x98);
    *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0xa0);
    *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x29 + -0x88);
    *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0x90);
    thunk_FUN_1089210f0(unaff_x29 + -0x80);
LAB_100540fd8:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100540fdc);
    (*pcVar6)();
  }
  uVar11 = *(undefined8 *)(unaff_x29 + -0x98);
  uVar2 = *(undefined8 *)(unaff_x29 + -0x90);
  uVar16 = *(undefined8 *)(unaff_x29 + -0x88);
  __ZN10codex_core13review_format25render_review_output_text17h7f6e2d4ab4454e2cE
            (&stack0x00000038,&stack0x000000b0);
  uVar5 = in_stack_00000048;
  uVar4 = in_stack_00000040;
  uVar3 = in_stack_00000038;
  if (in_stack_00000010 != 0) {
    _free(lVar15);
  }
  lVar18 = CONCAT44(uStack00000000000000bc,uStack00000000000000b8);
  lVar15 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
  if (lVar15 != 0) {
    puVar8 = (undefined8 *)(lVar18 + 0x20);
    do {
      if (puVar8[-4] != 0) {
        _free(puVar8[-3]);
      }
      if (puVar8[-1] != 0) {
        _free(*puVar8);
      }
      if (puVar8[2] != 0) {
        _free(puVar8[3]);
      }
      puVar8 = puVar8 + 0xb;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  if (CONCAT44(uStack00000000000000b4,uStack00000000000000b0) != 0) {
    _free(lVar18);
  }
  if (CONCAT44(uStack00000000000000cc,uStack00000000000000c8) != 0) {
    _free(CONCAT44(uStack00000000000000d4,uStack00000000000000d0));
  }
  if (CONCAT44(uStack00000000000000e4,uStack00000000000000e0) != 0) {
    _free(CONCAT44(uStack00000000000000ec,uStack00000000000000e8));
  }
  *(undefined1 *)(unaff_x19 + 0xdb) = 1;
  *(undefined1 *)(unaff_x19 + 0xd9) = 1;
  *(undefined8 *)(unaff_x19 + 0xc0) = uVar3;
  *(undefined8 *)(unaff_x19 + 200) = uVar4;
  *(undefined8 *)(unaff_x19 + 0xd0) = uVar5;
  lVar15 = *(long *)(unaff_x19 + 0x60);
  lVar18 = *(long *)(unaff_x19 + 0xb8);
  puVar8 = (undefined8 *)_malloc(0x13);
  if (puVar8 == (undefined8 *)0x0) {
    FUN_107c03c64(1,0x13);
    goto LAB_100540fd8;
  }
  *(undefined4 *)((long)puVar8 + 0xf) = 0x72657375;
  puVar8[1] = 0x755f74756f6c6c6f;
  *puVar8 = 0x725f776569766572;
  puVar9 = (undefined4 *)_malloc(4);
  if (puVar9 == (undefined4 *)0x0) {
    FUN_107c03c64(1,4);
    goto LAB_100540fd8;
  }
  *puVar9 = 0x72657375;
  puVar10 = (undefined8 *)_malloc(0x20);
  if (puVar10 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x20);
    goto LAB_100540fd8;
  }
  *(undefined8 *)(unaff_x19 + 0xe8) = 4;
  *(undefined8 *)(unaff_x19 + 0xe0) = 2;
  *(undefined1 *)(unaff_x19 + 0xdb) = 0;
  *puVar10 = 0x8000000000000000;
  puVar10[1] = uVar11;
  puVar10[2] = uVar2;
  puVar10[3] = uVar16;
  *(undefined4 **)(unaff_x19 + 0xf0) = puVar9;
  *(undefined8 *)(unaff_x19 + 0x100) = 1;
  *(undefined8 *)(unaff_x19 + 0xf8) = 4;
  *(undefined8 **)(unaff_x19 + 0x108) = puVar10;
  *(undefined8 *)(unaff_x19 + 0x118) = 0x13;
  *(undefined8 *)(unaff_x19 + 0x110) = 1;
  *(undefined8 **)(unaff_x19 + 0x120) = puVar8;
  *(undefined8 *)(unaff_x19 + 0x128) = 0x13;
  *(undefined1 *)(unaff_x19 + 0x130) = 2;
  *(long *)(unaff_x19 + 0x1a0) = lVar15 + 0x10;
  *(long *)(unaff_x19 + 0x1a8) = lVar18 + 0x10;
  *(undefined8 **)(unaff_x19 + 0x1b0) = (undefined8 *)(unaff_x19 + 0xe0);
  *(undefined8 *)(unaff_x19 + 0x1b8) = 1;
  *(undefined1 *)(unaff_x19 + 0x1e0) = 0;
  iVar7 = FUN_1005af7fc(unaff_x19 + 0x1a0);
  if (iVar7 != 0) {
    uVar11 = 1;
    uVar14 = 3;
    goto LAB_100540ea8;
  }
  func_0x000100d50dec(unaff_x19 + 0x1a0);
  FUN_100e02a24(unaff_x19 + 0xe0);
  *(undefined1 *)(unaff_x19 + 0xda) = 0;
  uStack00000000000000bc = (undefined4)*(undefined8 *)(unaff_x19 + 0x70);
  uStack00000000000000c0 = (undefined4)((ulong)*(undefined8 *)(unaff_x19 + 0x70) >> 0x20);
  uStack00000000000000b4 = (undefined4)*(undefined8 *)(unaff_x19 + 0x68);
  uStack00000000000000b8 = (undefined4)((ulong)*(undefined8 *)(unaff_x19 + 0x68) >> 0x20);
  uStack00000000000000cc = (undefined4)*(undefined8 *)(unaff_x19 + 0x80);
  uStack00000000000000d0 = (undefined4)((ulong)*(undefined8 *)(unaff_x19 + 0x80) >> 0x20);
  uStack00000000000000c4 = (undefined4)*(undefined8 *)(unaff_x19 + 0x78);
  uStack00000000000000c8 = (undefined4)((ulong)*(undefined8 *)(unaff_x19 + 0x78) >> 0x20);
  uStack00000000000000fc = (undefined4)*(undefined8 *)(unaff_x19 + 0xb0);
  in_stack_00000100 = (undefined4)((ulong)*(undefined8 *)(unaff_x19 + 0xb0) >> 0x20);
  uStack00000000000000f4 = (undefined4)*(undefined8 *)(unaff_x19 + 0xa8);
  uStack00000000000000f8 = (undefined4)((ulong)*(undefined8 *)(unaff_x19 + 0xa8) >> 0x20);
  uStack00000000000000ec = (undefined4)*(undefined8 *)(unaff_x19 + 0xa0);
  uStack00000000000000f0 = (undefined4)((ulong)*(undefined8 *)(unaff_x19 + 0xa0) >> 0x20);
  uStack00000000000000e4 = (undefined4)*(undefined8 *)(unaff_x19 + 0x98);
  uStack00000000000000e8 = (undefined4)((ulong)*(undefined8 *)(unaff_x19 + 0x98) >> 0x20);
  uStack00000000000000dc = (undefined4)*(undefined8 *)(unaff_x19 + 0x90);
  uStack00000000000000e0 = (undefined4)((ulong)*(undefined8 *)(unaff_x19 + 0x90) >> 0x20);
  uStack00000000000000d4 = (undefined4)*(undefined8 *)(unaff_x19 + 0x88);
  uStack00000000000000d8 = (undefined4)((ulong)*(undefined8 *)(unaff_x19 + 0x88) >> 0x20);
  in_stack_00000058 = CONCAT44(uStack00000000000000bc,uStack00000000000000b8);
  in_stack_00000050 = CONCAT44(uStack00000000000000b4,uStack00000000000000b0);
  in_stack_00000068 = CONCAT44(uStack00000000000000cc,uStack00000000000000c8);
  in_stack_00000060 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
  in_stack_00000078 = CONCAT44(uStack00000000000000dc,uStack00000000000000d8);
  in_stack_00000070 = CONCAT44(uStack00000000000000d4,uStack00000000000000d0);
  in_stack_00000088 = CONCAT44(uStack00000000000000ec,uStack00000000000000e8);
  in_stack_00000080 = CONCAT44(uStack00000000000000e4,uStack00000000000000e0);
  in_stack_00000098 = CONCAT44(uStack00000000000000fc,uStack00000000000000f8);
  in_stack_00000090 = CONCAT44(uStack00000000000000f4,uStack00000000000000f0);
  in_stack_000000a0 = in_stack_00000100;
  *(undefined4 *)(unaff_x19 + 0xe0) = 0x36;
  *(undefined8 *)(unaff_x19 + 0x10c) = in_stack_00000078;
  *(undefined8 *)(unaff_x19 + 0x104) = in_stack_00000070;
  *(undefined8 *)(unaff_x19 + 0x11c) = in_stack_00000088;
  *(undefined8 *)(unaff_x19 + 0x114) = in_stack_00000080;
  *(undefined8 *)(unaff_x19 + 300) = in_stack_00000098;
  *(undefined8 *)(unaff_x19 + 0x124) = in_stack_00000090;
  *(undefined4 *)(unaff_x19 + 0x134) = in_stack_00000100;
  *(undefined8 *)(unaff_x19 + 0xec) = in_stack_00000058;
  *(undefined8 *)(unaff_x19 + 0xe4) = in_stack_00000050;
  *(undefined8 *)(unaff_x19 + 0xfc) = in_stack_00000068;
  *(undefined8 *)(unaff_x19 + 0xf4) = in_stack_00000060;
  *(long *)(unaff_x19 + 0x2b8) = *(long *)(unaff_x19 + 0x60) + 0x10;
  *(long *)(unaff_x19 + 0x2c0) = *(long *)(unaff_x19 + 0xb8) + 0x10;
  *(undefined1 *)(unaff_x19 + 0x688) = 0;
  puVar8 = (undefined8 *)(unaff_x19 + 0xe0);
  iVar7 = FUN_10059e898(puVar8);
  if (iVar7 != 0) {
    uVar11 = 1;
    uVar14 = 4;
    goto LAB_100540ea8;
  }
  FUN_100d1ddbc(puVar8);
  lVar15 = *(long *)(unaff_x19 + 0x60);
  lVar18 = *(long *)(unaff_x19 + 0xb8);
  puVar10 = (undefined8 *)_malloc(0x18);
  if (puVar10 == (undefined8 *)0x0) {
    FUN_107c03c64(1,0x18);
    goto LAB_100540fd8;
  }
  puVar10[1] = 0x615f74756f6c6c6f;
  *puVar10 = 0x725f776569766572;
  puVar10[2] = 0x746e617473697373;
  puVar12 = (undefined8 *)_malloc(9);
  if (puVar12 == (undefined8 *)0x0) {
    FUN_107c03c64(1,9);
    goto LAB_100540fd8;
  }
  *(undefined1 *)(puVar12 + 1) = 0x74;
  *puVar12 = 0x6e61747369737361;
  puVar13 = (undefined8 *)_malloc(0x20);
  if (puVar13 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x20);
    goto LAB_100540fd8;
  }
  lVar15 = lVar15 + 0x10;
  *(undefined1 *)(unaff_x19 + 0xd9) = 0;
  lVar18 = lVar18 + 0x10;
  uVar11 = *(undefined8 *)(unaff_x19 + 0xc0);
  puVar13[2] = *(undefined8 *)(unaff_x19 + 200);
  puVar13[1] = uVar11;
  puVar13[3] = *(undefined8 *)(unaff_x19 + 0xd0);
  *puVar13 = 0x8000000000000002;
  *(undefined8 *)(unaff_x19 + 0xe8) = 9;
  *(undefined8 *)(unaff_x19 + 0xe0) = 2;
  *(undefined8 **)(unaff_x19 + 0xf0) = puVar12;
  *(undefined8 *)(unaff_x19 + 0x100) = 1;
  *(undefined8 *)(unaff_x19 + 0xf8) = 9;
  *(undefined8 **)(unaff_x19 + 0x108) = puVar13;
  *(undefined8 *)(unaff_x19 + 0x118) = 0x18;
  *(undefined8 *)(unaff_x19 + 0x110) = 1;
  *(undefined8 **)(unaff_x19 + 0x120) = puVar10;
  *(undefined8 *)(unaff_x19 + 0x128) = 0x18;
  *(undefined1 *)(unaff_x19 + 0x130) = 2;
  *(long *)(unaff_x19 + 0x1a0) = lVar15;
  *(long *)(unaff_x19 + 0x1a8) = lVar18;
  *(undefined1 *)(unaff_x19 + 0x5c0) = 0;
  *(undefined1 *)(unaff_x19 + 0x5c1) = 0;
  *(long *)(unaff_x19 + 0x1b0) = lVar15;
  *(long *)(unaff_x19 + 0x1b8) = lVar18;
  *(undefined8 *)(unaff_x19 + 0x248) = *(undefined8 *)(unaff_x19 + 0x168);
  *(undefined8 *)(unaff_x19 + 0x240) = *(undefined8 *)(unaff_x19 + 0x160);
  *(undefined8 *)(unaff_x19 + 600) = *(undefined8 *)(unaff_x19 + 0x178);
  *(undefined8 *)(unaff_x19 + 0x250) = *(undefined8 *)(unaff_x19 + 0x170);
  *(undefined8 *)(unaff_x19 + 0x268) = *(undefined8 *)(unaff_x19 + 0x188);
  *(undefined8 *)(unaff_x19 + 0x260) = *(undefined8 *)(unaff_x19 + 0x180);
  *(undefined8 *)(unaff_x19 + 0x278) = *(undefined8 *)(unaff_x19 + 0x198);
  *(undefined8 *)(unaff_x19 + 0x270) = *(undefined8 *)(unaff_x19 + 400);
  *(undefined8 *)(unaff_x19 + 0x208) = *(undefined8 *)(unaff_x19 + 0x128);
  *(undefined8 *)(unaff_x19 + 0x200) = *(undefined8 *)(unaff_x19 + 0x120);
  *(undefined8 *)(unaff_x19 + 0x218) = *(undefined8 *)(unaff_x19 + 0x138);
  *(undefined8 *)(unaff_x19 + 0x210) = *(undefined8 *)(unaff_x19 + 0x130);
  *(undefined8 *)(unaff_x19 + 0x228) = *(undefined8 *)(unaff_x19 + 0x148);
  *(undefined8 *)(unaff_x19 + 0x220) = *(undefined8 *)(unaff_x19 + 0x140);
  *(undefined8 *)(unaff_x19 + 0x238) = *(undefined8 *)(unaff_x19 + 0x158);
  *(undefined8 *)(unaff_x19 + 0x230) = *(undefined8 *)(unaff_x19 + 0x150);
  *(undefined8 *)(unaff_x19 + 0x1c8) = *(undefined8 *)(unaff_x19 + 0xe8);
  *(undefined8 *)(unaff_x19 + 0x1c0) = *puVar8;
  *(undefined8 *)(unaff_x19 + 0x1d8) = *(undefined8 *)(unaff_x19 + 0xf8);
  *(undefined8 *)(unaff_x19 + 0x1d0) = *(undefined8 *)(unaff_x19 + 0xf0);
  *(undefined8 *)(unaff_x19 + 0x1e8) = *(undefined8 *)(unaff_x19 + 0x108);
  *(undefined8 *)(unaff_x19 + 0x1e0) = *(undefined8 *)(unaff_x19 + 0x100);
  *(undefined8 *)(unaff_x19 + 0x1f8) = *(undefined8 *)(unaff_x19 + 0x118);
  *(undefined8 *)(unaff_x19 + 0x1f0) = *(undefined8 *)(unaff_x19 + 0x110);
  *(long *)(unaff_x19 + 0x5c8) = lVar15;
  *(long *)(unaff_x19 + 0x5d0) = lVar18;
  *(long *)(unaff_x19 + 0x5d8) = unaff_x19 + 0x1c0;
  *(undefined8 *)(unaff_x19 + 0x5e0) = 1;
  *(undefined1 *)(unaff_x19 + 0x608) = 0;
  uVar17 = FUN_1005af7fc();
  if ((uVar17 & 1) == 0) {
    func_0x000100d50dec();
    plVar1 = (long *)(unaff_x19 + 0x280);
    __ZN10codex_core13event_mapping15parse_turn_item17h72e5b9e25cfa0563E(plVar1,unaff_x19 + 0x1c0);
    if (*plVar1 == -0x7ffffffffffffff5) {
LAB_100540df4:
      FUN_100e02a24(unaff_x19 + 0x1c0);
      *(undefined1 *)(unaff_x19 + 0x5c0) = 1;
      FUN_100d713f4(puVar8);
      *(long *)(unaff_x19 + 0xe0) = *(long *)(unaff_x19 + 0x60) + 0x10;
      *(undefined1 *)(unaff_x19 + 0x8c0) = 0;
      uVar17 = FUN_1005b0e68(unaff_x19 + 0xe0);
      if ((uVar17 & 1) == 0) {
        if ((*(char *)(unaff_x19 + 0x8c0) == '\x03') && (*(char *)(unaff_x19 + 0x8b8) == '\x03')) {
          FUN_100c97ff8(unaff_x19 + 0xf0);
        }
        *(undefined1 *)(unaff_x19 + 0xd9) = 0;
        *(undefined1 *)(unaff_x19 + 0xdb) = 0;
        lVar15 = **(long **)(unaff_x19 + 0xb8);
        **(long **)(unaff_x19 + 0xb8) = lVar15 + -1;
        LORelease();
        if (lVar15 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E();
        }
        *(undefined1 *)(unaff_x19 + 0xda) = 0;
        lVar15 = **(long **)(unaff_x19 + 0x60);
        **(long **)(unaff_x19 + 0x60) = lVar15 + -1;
        LORelease();
        if (lVar15 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb65d9bdc952829e9E();
        }
        uVar11 = 0;
        uVar14 = 1;
      }
      else {
        uVar11 = 1;
        uVar14 = 6;
      }
      goto LAB_100540ea8;
    }
    *(undefined1 *)(unaff_x19 + 0x5c1) = 1;
    _memcpy(unaff_x19 + 0x420,plVar1,0x1a0);
    uVar11 = *(undefined8 *)(unaff_x19 + 0x1b0);
    unaff_x22[1] = *(undefined8 *)(unaff_x19 + 0x1b8);
    *unaff_x22 = uVar11;
    *(long *)(unaff_x19 + 0x5d8) = unaff_x19 + 0x420;
    *(undefined1 *)(unaff_x19 + 0x1ed0) = 0;
    uVar17 = func_0x0001005ad358(unaff_x19 + 0x5c8);
    if ((uVar17 & 1) == 0) {
      if (*(char *)(unaff_x19 + 0x1ed0) == '\x03') {
        FUN_100d1ddbc(unaff_x19 + 0x5e0);
      }
      *(undefined1 *)(unaff_x19 + 0x5c1) = 0;
      _memcpy(unaff_x19 + 0x5c8,unaff_x19 + 0x420,0x1a0);
      uVar11 = *(undefined8 *)(unaff_x19 + 0x1b0);
      unaff_x22[0x35] = *(undefined8 *)(unaff_x19 + 0x1b8);
      unaff_x22[0x34] = uVar11;
      *(undefined1 *)(unaff_x19 + 0x928) = 0;
      uVar17 = FUN_1005aedfc(unaff_x19 + 0x5c8);
      if ((uVar17 & 1) == 0) {
        FUN_100d4e420(unaff_x19 + 0x5c8);
        *(undefined1 *)(unaff_x19 + 0x5c1) = 0;
        goto LAB_100540df4;
      }
      uVar14 = 5;
    }
    else {
      uVar14 = 4;
    }
  }
  else {
    uVar14 = 3;
  }
  *(undefined1 *)(unaff_x19 + 0x5c0) = uVar14;
  uVar11 = 1;
  uVar14 = 5;
LAB_100540ea8:
  *(undefined1 *)(unaff_x19 + 0xd8) = uVar14;
  return uVar11;
}

