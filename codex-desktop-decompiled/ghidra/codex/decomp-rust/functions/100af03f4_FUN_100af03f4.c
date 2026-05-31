
void FUN_100af03f4(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x26;
  long unaff_x28;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000640;
  undefined8 in_stack_000006c8;
  
  FUN_100af4058(&stack0x00000390);
  __ZN19codex_network_proxy10http_proxy12json_blocked17haca16de30d5cd662E
            (&stack0x00000640,*(undefined8 *)(unaff_x19 + 0x2d0),*(undefined8 *)(unaff_x19 + 0x2d8),
             *(undefined8 *)(unaff_x19 + 0x3a8),*(undefined8 *)(unaff_x19 + 0x3b0),unaff_x19 + 0x3b8
            );
  uVar6 = *(undefined8 *)(unaff_x28 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x28 + 0x70);
  uVar8 = *(undefined8 *)(unaff_x28 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x28 + 0x80);
  uVar13 = *(undefined8 *)(unaff_x28 + 0x58);
  uVar12 = *(undefined8 *)(unaff_x28 + 0x50);
  uVar9 = *(undefined8 *)(unaff_x28 + 0x60);
  *(undefined8 *)(unaff_x26 + 0x1b8) = *(undefined8 *)(unaff_x28 + 0x68);
  *(undefined8 *)(unaff_x26 + 0x1b0) = uVar9;
  *(undefined8 *)(unaff_x26 + 0x1c8) = uVar6;
  *(undefined8 *)(unaff_x26 + 0x1c0) = uVar4;
  *(undefined8 *)(unaff_x26 + 0x1d8) = uVar8;
  *(undefined8 *)(unaff_x26 + 0x1d0) = uVar7;
  uVar8 = *(undefined8 *)(unaff_x28 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x28 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x28 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x28 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x28 + 0x30);
  uVar11 = *(undefined8 *)(unaff_x28 + 0x48);
  uVar10 = *(undefined8 *)(unaff_x28 + 0x40);
  *(undefined8 *)(unaff_x26 + 0x178) = *(undefined8 *)(unaff_x28 + 0x28);
  *(undefined8 *)(unaff_x26 + 0x170) = uVar4;
  *(undefined8 *)(unaff_x26 + 0x188) = uVar9;
  *(undefined8 *)(unaff_x26 + 0x180) = uVar7;
  *(undefined8 *)(unaff_x26 + 0x198) = uVar11;
  *(undefined8 *)(unaff_x26 + 400) = uVar10;
  *(undefined8 *)(unaff_x26 + 0x1a8) = uVar13;
  *(undefined8 *)(unaff_x26 + 0x1a0) = uVar12;
  if (*(long *)(unaff_x19 + 0x3a0) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x3a8));
  }
  if (*(long *)(unaff_x19 + 0x360) != -0x7fffffffffffffff) {
    *(undefined1 *)(unaff_x19 + 0x39c) = 0;
  }
  *(undefined1 *)(unaff_x19 + 0x39c) = 0;
  FUN_100e43948(unaff_x19 + 0x2e0);
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
  unaff_x20[2] = uVar8;
  unaff_x20[1] = uVar6;
  uVar4 = *(undefined8 *)(unaff_x26 + 0x1b0);
  uVar7 = *(undefined8 *)(unaff_x26 + 0x1c8);
  uVar6 = *(undefined8 *)(unaff_x26 + 0x1c0);
  unaff_x20[0xc] = *(undefined8 *)(unaff_x26 + 0x1b8);
  unaff_x20[0xb] = uVar4;
  unaff_x20[0xe] = uVar7;
  unaff_x20[0xd] = uVar6;
  uVar4 = *(undefined8 *)(unaff_x26 + 0x1d0);
  unaff_x20[0x10] = *(undefined8 *)(unaff_x26 + 0x1d8);
  unaff_x20[0xf] = uVar4;
  uVar4 = *(undefined8 *)(unaff_x26 + 0x170);
  uVar7 = *(undefined8 *)(unaff_x26 + 0x188);
  uVar6 = *(undefined8 *)(unaff_x26 + 0x180);
  unaff_x20[4] = *(undefined8 *)(unaff_x26 + 0x178);
  unaff_x20[3] = uVar4;
  unaff_x20[6] = uVar7;
  unaff_x20[5] = uVar6;
  uVar4 = *(undefined8 *)(unaff_x26 + 400);
  uVar7 = *(undefined8 *)(unaff_x26 + 0x1a8);
  uVar6 = *(undefined8 *)(unaff_x26 + 0x1a0);
  unaff_x20[8] = *(undefined8 *)(unaff_x26 + 0x198);
  unaff_x20[7] = uVar4;
  *unaff_x20 = in_stack_00000640;
  unaff_x20[0x11] = in_stack_000006c8;
  unaff_x20[10] = uVar7;
  unaff_x20[9] = uVar6;
  *(undefined1 *)(unaff_x19 + 0x39a) = 1;
  return;
}

