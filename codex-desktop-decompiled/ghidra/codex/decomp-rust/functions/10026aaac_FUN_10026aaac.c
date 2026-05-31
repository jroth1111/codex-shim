
void FUN_10026aaac(undefined8 param_1)

{
  ulong uVar1;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  undefined1 *unaff_x22;
  long unaff_x24;
  long unaff_x25;
  ulong *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined1 *puStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined1 *puStack0000000000000040;
  undefined *puStack0000000000000048;
  char *pcStack0000000000000050;
  undefined1 *puStack0000000000000058;
  undefined8 uStack00000000000000a8;
  long lStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  undefined8 uStack00000000000000c0;
  long lStack00000000000000c8;
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000d8;
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  undefined4 uStack00000000000000f0;
  undefined4 uStack00000000000000f4;
  char *pcStack00000000000000f8;
  long lStack0000000000000100;
  
  puStack0000000000000058 = &stack0x00000060;
  pcStack0000000000000050 = s__HTTP_2_connecting_already_in_pr_108ab8c75;
  puStack0000000000000040 = (undefined1 *)&stack0x00000050;
  puStack0000000000000048 = &UNK_10b1f3630;
  puStack0000000000000028 = (undefined1 *)&stack0x00000040;
  uStack0000000000000020 = 1;
  uStack0000000000000030 = 1;
  lStack00000000000000c8 = *(long *)(unaff_x25 + 0x60);
  uStack00000000000000d0 = *(undefined8 *)(unaff_x25 + 0x68);
  lStack00000000000000b0 = *(long *)(unaff_x25 + 0x50);
  uStack00000000000000b8 = *(undefined8 *)(unaff_x25 + 0x58);
  uStack00000000000000a8 = 1;
  if (lStack00000000000000b0 == 0) {
    uStack00000000000000a8 = 2;
  }
  uStack00000000000000f0 = *(undefined4 *)(unaff_x25 + 8);
  uStack00000000000000f4 = *(undefined4 *)(unaff_x25 + 0xc);
  *(undefined8 **)(unaff_x29 + -0x78) = &stack0x00000020;
  *(undefined1 *)(unaff_x29 + -0x70) = 1;
  *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x78;
  *(undefined **)(unaff_x29 + -0x60) = &DAT_1061c2098;
  uStack00000000000000c0 = 1;
  if (lStack00000000000000c8 == 0) {
    uStack00000000000000c0 = 2;
  }
  uStack00000000000000e0 = in_stack_00000010;
  uStack00000000000000d8 = in_stack_00000008;
  uStack00000000000000e8 = in_stack_00000018;
  lStack0000000000000100 = unaff_x29 + -0x68;
  pcStack00000000000000f8 = s__108b39f4f;
  uStack0000000000000038 = param_1;
  (**(code **)(unaff_x24 + 0x20))();
  *unaff_x22 = 3;
  if ((((unaff_x20 & 1) == 0) && ((*unaff_x28 & 0x7fffffffffffffff) != 0)) &&
     (uVar1 = FUN_107c05e34(), (uVar1 & 1) == 0)) {
    *(undefined1 *)(unaff_x21 + 0x18) = 1;
  }
  _pthread_mutex_unlock(*unaff_x19);
  return;
}

