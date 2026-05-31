
undefined8 FUN_1016c229c(void)

{
  long unaff_x19;
  long unaff_x24;
  long unaff_x26;
  long unaff_x29;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x80,s_Goal_108adb71f,unaff_x29 + -0xa0);
  in_stack_000000b8 = *(undefined8 *)(unaff_x29 + -0x78);
  in_stack_000000b0 = *(undefined8 *)(unaff_x29 + -0x80);
  in_stack_000000c0 = *(undefined8 *)(unaff_x29 + -0x70);
  __ZN9codex_tui12goal_display18goal_usage_summary17hb8b638be75e68350E
            (unaff_x29 + -0x80,&stack0x00000048);
  *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -0x78);
  *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0x80);
  *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x70);
  __ZN9codex_tui10chatwidget10ChatWidget16add_info_message17h49887c2279bddcacE();
  if (unaff_x26 != 0) {
    _free();
  }
  if (unaff_x24 != 0) {
    _free();
  }
  *(undefined1 *)(unaff_x19 + 0xa2) = 0;
  *(undefined1 *)(unaff_x19 + 0xa0) = 1;
  return 0;
}

