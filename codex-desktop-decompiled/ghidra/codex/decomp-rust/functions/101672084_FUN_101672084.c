
void FUN_101672084(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x29;
  undefined8 uVar1;
  undefined8 *in_stack_00000000;
  
  *(char **)(unaff_x29 + -0x80) = s_5Failed_to_read_fork_parent_meta_108ada513;
  *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0xf8;
  *(long *)(unaff_x29 + -0x50) = unaff_x29 + -0x80;
  *(undefined **)(unaff_x29 + -0x48) = &UNK_10b208fd0;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  (**(code **)*in_stack_00000000)();
  *unaff_x20 = 0x8000000000000000;
  uVar1 = *(undefined8 *)(unaff_x29 + -0x90);
  unaff_x20[2] = *(undefined8 *)(unaff_x29 + -0x88);
  unaff_x20[1] = uVar1;
  *(undefined1 *)(unaff_x19 + 0x938) = 1;
  return;
}

