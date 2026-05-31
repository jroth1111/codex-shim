
void FUN_101c59f0c(void)

{
  undefined8 uVar1;
  uint unaff_w22;
  long unaff_x25;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000038;
  char in_stack_00000040;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x78);
  *in_stack_00000008 = 0x8000000000000000;
  in_stack_00000008[1] = uVar1;
  if (unaff_x25 != 0) {
    _free(in_stack_00000038);
  }
  FUN_102033488(&stack0x00000060);
  if (in_stack_00000040 != '\x16') {
    FUN_1020378e0(&stack0x00000040);
  }
  if ((unaff_w22 & 0x1e) != 0x14) {
    FUN_1020378e0();
  }
  return;
}

