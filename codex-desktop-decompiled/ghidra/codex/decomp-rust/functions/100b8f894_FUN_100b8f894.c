
void FUN_100b8f894(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x24;
  long unaff_x29;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000040,s_managed_Codex_binary_exited_with_108ad1463,&stack0x000003b0);
  *(undefined8 *)(unaff_x24 + 0x3c8) = in_stack_00000048;
  *(undefined8 *)(unaff_x24 + 0x3c0) = in_stack_00000040;
  *(undefined8 *)(unaff_x29 + -0x70) = in_stack_00000050;
  uVar1 = FUN_108856624(unaff_x29 + -0x80);
  if (in_stack_00000008 != 0) {
    _free(in_stack_00000010);
  }
  if (in_stack_00000020 != 0) {
    _free(in_stack_00000028);
  }
  *unaff_x20 = 0x8000000000000000;
  unaff_x20[1] = uVar1;
  unaff_x20[2] = 0x8000000000000000;
  *(undefined1 *)(unaff_x19 + 0x458) = 1;
  return;
}

