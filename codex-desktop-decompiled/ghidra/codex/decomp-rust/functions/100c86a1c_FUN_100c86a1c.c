
undefined8 FUN_100c86a1c(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long unaff_x19;
  undefined1 *unaff_x22;
  long unaff_x29;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x58,s_exec_server_websocket_108ace5e8,unaff_x29 + -0x40);
  *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x29 + -0x50);
  *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0x58);
  *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x29 + -0x48);
  __ZN17codex_exec_server10connection17JsonRpcConnection19from_axum_websocket17h909d1b378372246fE
            (unaff_x29 + -0xb0,&stack0x00000bf0,unaff_x29 + -0x70);
  uVar3 = *(undefined8 *)(unaff_x29 + -0xb0);
  uVar6 = *(undefined8 *)(unaff_x29 + -0x98);
  uVar5 = *(undefined8 *)(unaff_x29 + -0xa0);
  *(undefined8 *)(unaff_x29 + -0xe8) = *(undefined8 *)(unaff_x29 + -0xa8);
  *(undefined8 *)(unaff_x29 + -0xf0) = uVar3;
  *(undefined8 *)(unaff_x29 + -0xd8) = uVar6;
  *(undefined8 *)(unaff_x29 + -0xe0) = uVar5;
  uVar8 = *(undefined8 *)(unaff_x29 + -0x88);
  uVar7 = *(undefined8 *)(unaff_x29 + -0x90);
  uVar10 = *(undefined8 *)(unaff_x29 + -0x78);
  uVar9 = *(undefined8 *)(unaff_x29 + -0x80);
  *(undefined8 *)(unaff_x29 + -200) = uVar8;
  *(undefined8 *)(unaff_x29 + -0xd0) = uVar7;
  *(undefined8 *)(unaff_x29 + -0xb8) = uVar10;
  *(undefined8 *)(unaff_x29 + -0xc0) = uVar9;
  *(undefined8 *)(unaff_x19 + 0x2f8) = *(undefined8 *)(unaff_x29 + -0xa8);
  *(undefined8 *)(unaff_x19 + 0x2f0) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x308) = uVar6;
  *(undefined8 *)(unaff_x19 + 0x300) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x318) = uVar8;
  *(undefined8 *)(unaff_x19 + 0x310) = uVar7;
  *(undefined8 *)(unaff_x19 + 0x328) = uVar10;
  *(undefined8 *)(unaff_x19 + 800) = uVar9;
  *(long *)(unaff_x19 + 0x330) = unaff_x19 + 0x298;
  *(undefined1 *)(unaff_x19 + 0x910) = 0;
  uVar2 = FUN_100a252bc(unaff_x19 + 0x2f0);
  if ((uVar2 & 1) == 0) {
    if (*(char *)(unaff_x19 + 0x910) == '\x03') {
      FUN_100ca25a4(unaff_x19 + 0x338);
    }
    else if (*(char *)(unaff_x19 + 0x910) == '\0') {
      FUN_100e26770(unaff_x19 + 0x2f0);
    }
    lVar1 = **(long **)(unaff_x19 + 0x2c8);
    **(long **)(unaff_x19 + 0x2c8) = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hbf03dd8539bb07a4E(unaff_x19 + 0x2c8);
    }
    if (*(long *)(unaff_x19 + 0x298) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x2a0));
    }
    if ((*(ulong *)(unaff_x19 + 0x2b0) & 0x7fffffffffffffff) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x2b8));
    }
    *unaff_x22 = 1;
    FUN_100d78fd4();
    uVar3 = 0;
    *(undefined1 *)(unaff_x19 + 0xd3) = 0;
    uVar4 = 1;
  }
  else {
    *unaff_x22 = 3;
    uVar3 = 1;
    uVar4 = 5;
  }
  *(undefined1 *)(unaff_x19 + 0xd0) = uVar4;
  return uVar3;
}

