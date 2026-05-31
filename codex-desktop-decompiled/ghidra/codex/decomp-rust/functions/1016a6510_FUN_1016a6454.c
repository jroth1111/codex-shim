
undefined8 FUN_1016a6454(undefined8 param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 uStack0000000000000030;
  long lStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  long lStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  char *pcStack0000000000000080;
  long lStack0000000000000088;
  undefined8 uStack0000000000000120;
  undefined1 *puStack0000000000000128;
  undefined8 uStack0000000000000130;
  undefined8 uStack0000000000000138;
  undefined8 *in_stack_00000378;
  
  puStack0000000000000128 = &stack0x00000200;
  uStack0000000000000120 = 1;
  uStack0000000000000130 = 1;
  lStack0000000000000050 = *(long *)(unaff_x23 + 0x60);
  uStack0000000000000058 = *(undefined8 *)(unaff_x23 + 0x68);
  lStack0000000000000038 = *(long *)(unaff_x23 + 0x50);
  uStack0000000000000040 = *(undefined8 *)(unaff_x23 + 0x58);
  uStack0000000000000030 = 1;
  if (lStack0000000000000038 == 0) {
    uStack0000000000000030 = 2;
  }
  uStack0000000000000078 = *(undefined4 *)(unaff_x23 + 8);
  uStack000000000000007c = *(undefined4 *)(unaff_x23 + 0xc);
  *(undefined1 **)(unaff_x29 + -0xd0) = &stack0x000002c0;
  *(undefined **)(unaff_x29 + -200) = &DAT_1061c2098;
  uStack0000000000000048 = 1;
  if (lStack0000000000000050 == 0) {
    uStack0000000000000048 = 2;
  }
  uStack0000000000000068 = in_stack_00000020;
  uStack0000000000000060 = in_stack_00000018;
  uStack0000000000000070 = in_stack_00000028;
  lStack0000000000000088 = unaff_x29 + -0xd0;
  pcStack0000000000000080 = s__108b39f4f;
  uStack0000000000000138 = param_1;
  (**(code **)(unaff_x22 + 0x20))();
  uVar1 = *(undefined8 *)(unaff_x19 + 0xf8);
  *(undefined1 **)(unaff_x29 + -0xd0) = &stack0x00000378;
  *(undefined8 *)(unaff_x29 + -200) = unaff_x21;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000030,s__Failed_to_update_thread_setting_108adaf8b,unaff_x29 + -0xd0);
  unaff_x27[1] = lStack0000000000000038;
  *unaff_x27 = uStack0000000000000030;
  uStack0000000000000130 = uStack0000000000000040;
  __ZN9codex_tui10chatwidget10ChatWidget17add_error_message17hc02ae70319960b9eE
            (uVar1,&stack0x00000120);
  (**(code **)*in_stack_00000378)();
  *(undefined1 *)(unaff_x19 + 0xbd9) = 0;
  *(undefined1 *)(unaff_x19 + 0xbd8) = 1;
  return 0;
}

