
void FUN_101c7a680(void)

{
  undefined8 uVar1;
  uint unaff_w19;
  undefined8 *unaff_x21;
  long unaff_x22;
  long unaff_x29;
  undefined8 in_stack_00000028;
  char in_stack_00000040;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -200);
  *unaff_x21 = 0x8000000000000000;
  unaff_x21[1] = uVar1;
  if (unaff_x22 != 0) {
    _free(in_stack_00000028);
  }
  FUN_102033488(&stack0x00000060);
  if (in_stack_00000040 != '\x16') {
    FUN_1020378e0(&stack0x00000040);
  }
  if ((unaff_w19 & 0x1e) != 0x14) {
    FUN_1020378e0();
  }
  return;
}

