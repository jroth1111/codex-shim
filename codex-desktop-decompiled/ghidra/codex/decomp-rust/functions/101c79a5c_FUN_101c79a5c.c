
void FUN_101c79a5c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  uint unaff_w22;
  long unaff_x25;
  long unaff_x29;
  undefined8 in_stack_00000028;
  char in_stack_00000040;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0xb8);
  *unaff_x20 = 0x8000000000000000;
  unaff_x20[1] = uVar1;
  if (unaff_x25 != 0) {
    _free(in_stack_00000028);
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

