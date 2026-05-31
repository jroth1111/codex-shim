
void FUN_100af1100(void)

{
  undefined2 uVar1;
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
  undefined1 auVar10 [16];
  long in_stack_00000640;
  long in_stack_00000648;
  long in_stack_00000650;
  long in_stack_00000658;
  long in_stack_00000660;
  long in_stack_00000668;
  long in_stack_00000670;
  long in_stack_00000678;
  long in_stack_00000680;
  long in_stack_00000688;
  long in_stack_00000690;
  long in_stack_00000698;
  long in_stack_000006a0;
  long in_stack_000006a8;
  long in_stack_000006b0;
  long in_stack_000006b8;
  long in_stack_000006c0;
  long in_stack_000006c8;
  
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  lVar9 = *(long *)(unaff_x19 + 0x220);
  *(undefined1 *)(unaff_x19 + 0x39d) = 0;
  uVar7 = *(undefined8 *)(unaff_x19 + 0x2c8);
  uVar5 = *(undefined8 *)(unaff_x19 + 0x2d0);
  uVar8 = *(undefined8 *)(unaff_x19 + 0x2d8);
  uVar1 = *(undefined2 *)(unaff_x19 + 0x398);
  FUN_100aed2f0(&stack0x00000390,*(undefined8 *)(unaff_x19 + 0x188),*(undefined8 *)(unaff_x19 + 400)
               );
  auVar10 = FUN_100ea3bf8();
  FUN_100c7c1c0(&stack0x00000640,auVar10._0_8_,auVar10._8_8_);
  *(undefined8 *)(unaff_x19 + 0x3b8) = uVar7;
  *(undefined8 *)(unaff_x19 + 0x3c0) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x3c8) = uVar8;
  *(undefined1 **)(unaff_x19 + 0x3d8) = &stack0x00000740;
  *(undefined8 *)(unaff_x19 + 0x3d0) = 1;
  *(undefined8 *)(unaff_x19 + 0x3e0) = 1;
  *(long *)(unaff_x19 + 0x3f0) = in_stack_00000648;
  *(long *)(unaff_x19 + 1000) = in_stack_00000640;
  *(long *)(unaff_x19 + 0x3f8) = in_stack_00000650;
  *(long *)(unaff_x19 + 0x400) = lVar9 + 0x10;
  *(undefined8 *)(unaff_x19 + 0x408) = 0;
  *(undefined2 *)(unaff_x19 + 0xc88) = uVar1;
  *(undefined2 *)(unaff_x19 + 0xc8c) = 0;
  FUN_100afdc64(&stack0x00000640,unaff_x19 + 0x3b8);
  if (in_stack_00000640 == 3) {
    *unaff_x20 = 3;
    uVar2 = 9;
  }
  else {
    FUN_100cb4c6c(unaff_x19 + 0x3b8);
    if (((*(byte *)(unaff_x19 + 0x39d) & 1) != 0) && (*(long *)(unaff_x19 + 0x2c8) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x2d0));
    }
    *(undefined1 *)(unaff_x19 + 0x39d) = 0;
    if ((*(byte *)(unaff_x19 + 0x2a8) != 0x1a) && (0x18 < *(byte *)(unaff_x19 + 0x2a8))) {
      lVar9 = **(long **)(unaff_x19 + 0x2b0);
      **(long **)(unaff_x19 + 0x2b0) = lVar9 + -1;
      LORelease();
      if (lVar9 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x2b0);
      }
    }
    if ((5 < *(byte *)(unaff_x19 + 0x268) - 0x1a) && (0x18 < *(byte *)(unaff_x19 + 0x268))) {
      lVar9 = **(long **)(unaff_x19 + 0x270);
      **(long **)(unaff_x19 + 0x270) = lVar9 + -1;
      LORelease();
      if (lVar9 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x270);
      }
    }
    if ((*(byte *)(unaff_x19 + 0x280) != 0x1a) && (0x18 < *(byte *)(unaff_x19 + 0x280))) {
      lVar9 = **(long **)(unaff_x19 + 0x288);
      **(long **)(unaff_x19 + 0x288) = lVar9 + -1;
      LORelease();
      if (lVar9 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x288);
      }
    }
    if ((*(long *)(unaff_x19 + 0x228) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x228) != 0)
       ) {
      _free(*(undefined8 *)(unaff_x19 + 0x230));
    }
    lVar9 = **(long **)(unaff_x19 + 0x220);
    **(long **)(unaff_x19 + 0x220) = lVar9 + -1;
    LORelease();
    if (lVar9 == 1) {
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
      lVar9 = *plVar4;
      *plVar4 = lVar9 + -1;
      LORelease();
      if (lVar9 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1eab458e7200fb96E(unaff_x19 + 0x110);
      }
    }
    unaff_x20[2] = in_stack_00000650;
    unaff_x20[1] = in_stack_00000648;
    unaff_x20[0xc] = in_stack_000006a0;
    unaff_x20[0xb] = in_stack_00000698;
    unaff_x20[0xe] = in_stack_000006b0;
    unaff_x20[0xd] = in_stack_000006a8;
    unaff_x20[0x10] = in_stack_000006c0;
    unaff_x20[0xf] = in_stack_000006b8;
    unaff_x20[4] = in_stack_00000660;
    unaff_x20[3] = in_stack_00000658;
    unaff_x20[6] = in_stack_00000670;
    unaff_x20[5] = in_stack_00000668;
    unaff_x20[8] = in_stack_00000680;
    unaff_x20[7] = in_stack_00000678;
    *unaff_x20 = in_stack_00000640;
    unaff_x20[0x11] = in_stack_000006c8;
    uVar2 = 1;
    unaff_x20[10] = in_stack_00000690;
    unaff_x20[9] = in_stack_00000688;
  }
  *(undefined1 *)(unaff_x19 + 0x39a) = uVar2;
  return;
}

