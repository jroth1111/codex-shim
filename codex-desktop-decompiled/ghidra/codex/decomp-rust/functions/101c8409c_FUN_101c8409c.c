
void FUN_101c8409c(void)

{
  undefined8 uVar1;
  long unaff_x24;
  long unaff_x29;
  undefined8 *in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  char in_stack_00000020;

  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
  *in_stack_00000000 = 0x8000000000000001;
  in_stack_00000000[1] = uVar1;
  if ((-0x7fffffffffffffff < unaff_x24) && (unaff_x24 != 0)) {
    _free(in_stack_00000018);
  }
  FUN_102033488(&stack0x00000040);
  if (in_stack_00000020 != '\x16') {
    FUN_1020378e0(&stack0x00000020);
  }
  if ((in_stack_00000008._4_4_ & 0x1e) != 0x14) {
    FUN_1020378e0();
  }
  return;
}
