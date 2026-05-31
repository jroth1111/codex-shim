
undefined1  [16] FUN_100a820e0(void)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x29;
  long in_stack_00000038;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0xb0,s_failed_to_connect_to_socket_at_108acf7ed,&stack0x00000120);
  *(undefined8 *)(unaff_x29 + -0x98) = unaff_x20;
  __ZN3std9backtrace9Backtrace7capture17h7a467701db5babacE(&stack0x00000120);
  *(undefined8 *)(unaff_x29 + -0x88) = in_stack_00000128;
  *(undefined8 *)(unaff_x29 + -0x90) = in_stack_00000120;
  *(undefined8 *)(unaff_x29 + -0x78) = in_stack_00000138;
  *(undefined8 *)(unaff_x29 + -0x80) = in_stack_00000130;
  *(undefined8 *)(unaff_x29 + -0x68) = in_stack_00000148;
  *(undefined8 *)(unaff_x29 + -0x70) = in_stack_00000140;
  in_stack_00000128 = *(undefined8 *)(unaff_x29 + -0xa8);
  in_stack_00000120 = *(undefined8 *)(unaff_x29 + -0xb0);
  in_stack_00000130 = *(undefined8 *)(unaff_x29 + -0xa0);
  uVar2 = FUN_108857510(&stack0x00000120,unaff_x29 + -0x90);
  *(undefined1 *)(in_stack_00000038 + 0x21) = 0;
  *(undefined1 *)(in_stack_00000038 + 0x22) = 1;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  return auVar1 << 0x40;
}

