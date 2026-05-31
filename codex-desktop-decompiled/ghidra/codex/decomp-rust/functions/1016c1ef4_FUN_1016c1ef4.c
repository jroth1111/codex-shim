
undefined8 FUN_1016c1ef4(void)

{
  long unaff_x19;
  long unaff_x29;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 *in_stack_000000b0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000048,s_Failed_to_read_thread_goal__108adb700,unaff_x29 + -0xa0);
  *(undefined8 *)(unaff_x29 + -0x78) = in_stack_00000050;
  *(undefined8 *)(unaff_x29 + -0x80) = in_stack_00000048;
  *(undefined8 *)(unaff_x29 + -0x70) = in_stack_00000058;
  __ZN9codex_tui10chatwidget10ChatWidget17add_error_message17hc02ae70319960b9eE();
  (**(code **)*in_stack_000000b0)();
  if (((*(byte *)(unaff_x19 + 0xa2) & 1) != 0) && (*(long *)(unaff_x19 + 0x70) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x78));
  }
  *(undefined1 *)(unaff_x19 + 0xa2) = 0;
  *(undefined1 *)(unaff_x19 + 0xa0) = 1;
  return 0;
}

