
void FUN_100af0cb0(void)

{
  long lVar1;
  undefined1 uVar2;
  code *pcVar3;
  long *plVar4;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x26;
  long unaff_x28;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  long in_stack_00000640;
  undefined8 in_stack_00000650;
  long in_stack_000006c8;
  
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  lVar9 = *(long *)(unaff_x19 + 0x220);
  *(undefined1 *)(unaff_x19 + 0x39e) = 0;
  uVar7 = *(undefined8 *)(unaff_x19 + 0x240);
  uVar5 = *(undefined8 *)(unaff_x19 + 0x248);
  uVar8 = *(undefined8 *)(unaff_x19 + 0x250);
  FUN_100aed2f0(&stack0x00000390,*(undefined8 *)(unaff_x19 + 0x188),*(undefined8 *)(unaff_x19 + 400)
               );
  auVar22 = FUN_100ea3bf8(unaff_x19 + 0x1f0);
  FUN_100c7c1c0(&stack0x00000640,auVar22._0_8_,auVar22._8_8_);
  uVar11 = *(undefined8 *)(unaff_x28 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x28 + 8);
  *(undefined8 *)(unaff_x19 + 0x3b0) = uVar7;
  *(undefined8 *)(unaff_x19 + 0x3b8) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x3c0) = uVar8;
  *(undefined1 **)(unaff_x19 + 0x3d0) = &stack0x00000740;
  *(undefined8 *)(unaff_x19 + 0x3c8) = 1;
  *(undefined8 *)(unaff_x19 + 0x3d8) = 1;
  *(undefined8 *)(unaff_x19 + 1000) = uVar11;
  *(undefined8 *)(unaff_x19 + 0x3e0) = uVar10;
  *(undefined8 *)(unaff_x19 + 0x3f0) = in_stack_00000650;
  *(long *)(unaff_x19 + 0x3f8) = lVar9 + 0x10;
  *(undefined **)(unaff_x19 + 0x400) = &UNK_108cb8363;
  *(undefined8 *)(unaff_x19 + 0x408) = 0xb;
  *(undefined2 *)(unaff_x19 + 0x410) = 0;
  *(undefined2 *)(unaff_x19 + 0xc80) = 0;
  *(undefined2 *)(unaff_x19 + 0xc84) = 0;
  FUN_100afdc64(&stack0x00000640,unaff_x19 + 0x3b0);
  if (in_stack_00000640 == 3) {
    *unaff_x20 = 3;
    uVar2 = 5;
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x28 + 0x78);
    uVar5 = *(undefined8 *)(unaff_x28 + 0x70);
    uVar13 = *(undefined8 *)(unaff_x28 + 0x88);
    uVar11 = *(undefined8 *)(unaff_x28 + 0x80);
    uVar21 = *(undefined8 *)(unaff_x28 + 0x58);
    uVar20 = *(undefined8 *)(unaff_x28 + 0x50);
    uVar18 = *(undefined8 *)(unaff_x28 + 0x68);
    uVar16 = *(undefined8 *)(unaff_x28 + 0x60);
    lVar14 = *(long *)(unaff_x28 + 0x18);
    lVar9 = *(long *)(unaff_x28 + 0x10);
    uVar10 = *(undefined8 *)(unaff_x28 + 0x28);
    uVar7 = *(undefined8 *)(unaff_x28 + 0x20);
    uVar15 = *(undefined8 *)(unaff_x28 + 0x38);
    uVar12 = *(undefined8 *)(unaff_x28 + 0x30);
    uVar19 = *(undefined8 *)(unaff_x28 + 0x48);
    uVar17 = *(undefined8 *)(unaff_x28 + 0x40);
    FUN_100cb4c6c(unaff_x19 + 0x3b0);
    *(undefined8 *)(unaff_x26 + 0x1b8) = uVar18;
    *(undefined8 *)(unaff_x26 + 0x1b0) = uVar16;
    *(undefined8 *)(unaff_x26 + 0x1c8) = uVar8;
    *(undefined8 *)(unaff_x26 + 0x1c0) = uVar5;
    *(undefined8 *)(unaff_x26 + 0x1d8) = uVar13;
    *(undefined8 *)(unaff_x26 + 0x1d0) = uVar11;
    *(undefined8 *)(unaff_x26 + 0x178) = uVar10;
    *(undefined8 *)(unaff_x26 + 0x170) = uVar7;
    *(undefined8 *)(unaff_x26 + 0x188) = uVar15;
    *(undefined8 *)(unaff_x26 + 0x180) = uVar12;
    *(undefined8 *)(unaff_x26 + 0x198) = uVar19;
    *(undefined8 *)(unaff_x26 + 400) = uVar17;
    *(undefined8 *)(unaff_x26 + 0x1a8) = uVar21;
    *(undefined8 *)(unaff_x26 + 0x1a0) = uVar20;
    if (((*(byte *)(unaff_x19 + 0x39e) & 1) == 0) || (*(long *)(unaff_x19 + 0x240) == 0)) {
      *(undefined1 *)(unaff_x19 + 0x39e) = 0;
    }
    else {
      _free(*(undefined8 *)(unaff_x19 + 0x248));
      *(undefined1 *)(unaff_x19 + 0x39e) = 0;
    }
    if ((*(long *)(unaff_x19 + 0x228) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x228) != 0)
       ) {
      _free(*(undefined8 *)(unaff_x19 + 0x230));
    }
    lVar1 = **(long **)(unaff_x19 + 0x220);
    **(long **)(unaff_x19 + 0x220) = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h10f445fb86fd931aE(unaff_x19 + 0x220);
    }
    if ((*(byte *)(unaff_x19 + 0x39f) & 1) != 0) {
      FUN_100df6754(unaff_x19 + 0x120);
      uVar5 = *(undefined8 *)(unaff_x19 + 0x210);
      puVar6 = *(undefined8 **)(unaff_x19 + 0x218);
      pcVar3 = (code *)*puVar6;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(uVar5);
      }
      if (puVar6[1] != 0) {
        _free(uVar5);
      }
    }
    *(undefined1 *)(unaff_x19 + 0x39f) = 0;
    plVar4 = *(long **)(unaff_x19 + 0x110);
    if (plVar4 != (long *)0x0) {
      lVar1 = *plVar4;
      *plVar4 = lVar1 + -1;
      LORelease();
      if (lVar1 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1eab458e7200fb96E(unaff_x19 + 0x110);
      }
    }
    unaff_x20[2] = lVar14;
    unaff_x20[1] = lVar9;
    lVar9 = *(long *)(unaff_x26 + 0x1b0);
    lVar1 = *(long *)(unaff_x26 + 0x1c8);
    lVar14 = *(long *)(unaff_x26 + 0x1c0);
    unaff_x20[0xc] = *(long *)(unaff_x26 + 0x1b8);
    unaff_x20[0xb] = lVar9;
    unaff_x20[0xe] = lVar1;
    unaff_x20[0xd] = lVar14;
    lVar9 = *(long *)(unaff_x26 + 0x1d0);
    unaff_x20[0x10] = *(long *)(unaff_x26 + 0x1d8);
    unaff_x20[0xf] = lVar9;
    lVar9 = *(long *)(unaff_x26 + 0x170);
    lVar1 = *(long *)(unaff_x26 + 0x188);
    lVar14 = *(long *)(unaff_x26 + 0x180);
    unaff_x20[4] = *(long *)(unaff_x26 + 0x178);
    unaff_x20[3] = lVar9;
    unaff_x20[6] = lVar1;
    unaff_x20[5] = lVar14;
    lVar9 = *(long *)(unaff_x26 + 400);
    lVar1 = *(long *)(unaff_x26 + 0x1a8);
    lVar14 = *(long *)(unaff_x26 + 0x1a0);
    unaff_x20[8] = *(long *)(unaff_x26 + 0x198);
    unaff_x20[7] = lVar9;
    *unaff_x20 = in_stack_00000640;
    unaff_x20[0x11] = in_stack_000006c8;
    uVar2 = 1;
    unaff_x20[10] = lVar1;
    unaff_x20[9] = lVar14;
  }
  *(undefined1 *)(unaff_x19 + 0x39a) = uVar2;
  return;
}

