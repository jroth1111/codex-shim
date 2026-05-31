
void FUN_100aef7a4(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 in_stack_00000640;
  undefined8 in_stack_00000648;
  undefined8 in_stack_00000650;
  undefined8 in_stack_00000658;
  undefined8 in_stack_00000660;
  undefined8 in_stack_00000668;
  undefined8 in_stack_00000670;
  undefined8 in_stack_00000678;
  undefined8 in_stack_00000680;
  undefined8 in_stack_00000688;
  undefined8 in_stack_00000690;
  undefined8 in_stack_00000698;
  undefined8 in_stack_000006a0;
  undefined8 in_stack_000006a8;
  undefined8 in_stack_000006b0;
  undefined8 in_stack_000006b8;
  undefined8 in_stack_000006c0;
  undefined8 in_stack_000006c8;
  
  FUN_100af37b0(&stack0x00000390);
  __ZN19codex_network_proxy9responses13text_response17hb12ec00a07c01d4aE(&stack0x00000640,400);
  if (((*(byte *)(unaff_x19 + 0x39d) & 1) != 0) && (*(long *)(unaff_x19 + 0x2c8) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x2d0));
  }
  *(undefined1 *)(unaff_x19 + 0x39d) = 0;
  if ((*(byte *)(unaff_x19 + 0x2a8) != 0x1a) && (0x18 < *(byte *)(unaff_x19 + 0x2a8))) {
    lVar1 = **(long **)(unaff_x19 + 0x2b0);
    **(long **)(unaff_x19 + 0x2b0) = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x2b0);
    }
  }
  if ((5 < *(byte *)(unaff_x19 + 0x268) - 0x1a) && (0x18 < *(byte *)(unaff_x19 + 0x268))) {
    lVar1 = **(long **)(unaff_x19 + 0x270);
    **(long **)(unaff_x19 + 0x270) = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x270);
    }
  }
  if ((*(byte *)(unaff_x19 + 0x280) != 0x1a) && (0x18 < *(byte *)(unaff_x19 + 0x280))) {
    lVar1 = **(long **)(unaff_x19 + 0x288);
    **(long **)(unaff_x19 + 0x288) = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x288);
    }
  }
  if ((*(long *)(unaff_x19 + 0x228) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x228) != 0))
  {
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
    uVar4 = *(undefined8 *)(unaff_x19 + 0x210);
    puVar5 = *(undefined8 **)(unaff_x19 + 0x218);
    pcVar2 = (code *)*puVar5;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar4);
    }
    if (puVar5[1] != 0) {
      _free(uVar4);
    }
  }
  *(undefined1 *)(unaff_x19 + 0x39f) = 0;
  plVar3 = *(long **)(unaff_x19 + 0x110);
  if (plVar3 != (long *)0x0) {
    lVar1 = *plVar3;
    *plVar3 = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
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
  unaff_x20[10] = in_stack_00000690;
  unaff_x20[9] = in_stack_00000688;
  *(undefined1 *)(unaff_x19 + 0x39a) = 1;
  return;
}

