
void FUN_101c53cb4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  uint unaff_w24;
  undefined8 *unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000020;
  char in_stack_00000040;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x88);
  *unaff_x27 = 0x8000000000000000;
  unaff_x27[1] = uVar1;
  FUN_102033488(unaff_x20 + 0x20);
  if (in_stack_00000040 != '\x16') {
    FUN_1020378e0(&stack0x00000040);
  }
  if ((unaff_w24 & 0x1e) != 0x14) {
    FUN_1020378e0(in_stack_00000020);
  }
  return;
}

