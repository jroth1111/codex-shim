
undefined1  [16] FUN_1016ad51c(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  long lVar5;
  long unaff_x29;
  undefined1 auVar6 [16];
  undefined8 *in_stack_00000000;
  undefined8 uStack0000000000000020;
  undefined1 *puStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined1 *puStack0000000000000040;
  undefined *puStack0000000000000048;
  undefined1 *puStack0000000000000050;
  undefined *puStack0000000000000058;
  long lStack0000000000000060;
  char *pcStack0000000000000070;
  long lStack0000000000000078;
  
  lStack0000000000000078 = unaff_x29 + -0x60;
  pcStack0000000000000070 = s__failed_to_unsubscribe_stale_sta_108adb278;
  lStack0000000000000060 = unaff_x19 + 0x570;
  puStack0000000000000040 = (undefined1 *)&stack0x00000070;
  puStack0000000000000048 = &UNK_10b208fd0;
  puStack0000000000000050 = (undefined1 *)&stack0x00000060;
  puStack0000000000000058 = &UNK_10b2163a8;
  puStack0000000000000028 = (undefined1 *)&stack0x00000040;
  uStack0000000000000020 = 1;
  uStack0000000000000030 = 2;
  uStack0000000000000038 = param_1;
  FUN_1016ad97c(&stack0x00000020);
  (**(code **)*in_stack_00000000)();
  *(undefined8 *)(unaff_x19 + 0x588) = *(undefined8 *)(unaff_x19 + 0x1d8);
  *(undefined8 *)(unaff_x19 + 0x598) = *(undefined8 *)(unaff_x19 + 0x578);
  *(undefined8 *)(unaff_x19 + 0x590) = *(undefined8 *)(unaff_x19 + 0x570);
  *(undefined1 *)(unaff_x19 + 0x5b8) = 0;
  iVar1 = FUN_1016d7eb0(unaff_x19 + 0x588);
  if (iVar1 == 0) {
    FUN_100d1b9a8(unaff_x19 + 0x588);
    FUN_100e1d37c(unaff_x19 + 0x3a8);
    lVar5 = *(long *)(unaff_x19 + 0x560);
    lVar4 = *(long *)(unaff_x19 + 0x568) + 1;
    lVar3 = lVar5;
    while (lVar4 = lVar4 + -1, lVar4 != 0) {
      FUN_100e4623c(lVar3);
      lVar3 = lVar3 + 0xa0;
    }
    if (*(long *)(unaff_x19 + 0x558) == 0) {
      lVar4 = *(long *)(unaff_x19 + 0x1e0);
    }
    else {
      _free(lVar5);
      lVar4 = *(long *)(unaff_x19 + 0x1e0);
    }
    if (((lVar4 == 2) && (*(char *)(unaff_x19 + 0x581) == '\x01')) &&
       (*(long *)(unaff_x19 + 0x1e8) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x1f0));
    }
    unaff_x20 = 0;
    uVar2 = 0;
    *(undefined1 *)(unaff_x19 + 0x582) = 0;
    *(undefined2 *)(unaff_x19 + 0x580) = 1;
  }
  else {
    *(undefined1 *)(unaff_x19 + 0x580) = 4;
    uVar2 = 1;
  }
  auVar6._8_8_ = unaff_x20;
  auVar6._0_8_ = uVar2;
  return auVar6;
}

