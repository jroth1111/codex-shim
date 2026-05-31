
undefined8 FUN_1016ba080(void)

{
  long unaff_x19;
  undefined1 *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00001258;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000020,s_Failed_to_save_memory_settings__108adb447,unaff_x29 + -0xc0);
  __ZN9codex_tui10chatwidget10ChatWidget17add_error_message17hc02ae70319960b9eE();
  (**(code **)*in_stack_00001258)();
  *(undefined1 *)(unaff_x19 + 0xb2) = 0;
  if ((*(ulong *)(unaff_x19 + 0x30) & 0x7fffffffffffffff) == 0) {
    *unaff_x28 = 1;
  }
  else {
    _free(*(undefined8 *)(unaff_x19 + 0x38));
    *(undefined1 *)(unaff_x19 + 0xb3) = 1;
  }
  *(undefined1 *)(unaff_x19 + 0x22) = 1;
  return 0;
}

