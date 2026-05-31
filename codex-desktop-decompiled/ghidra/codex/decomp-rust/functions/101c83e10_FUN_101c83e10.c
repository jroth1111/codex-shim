
void FUN_101c83e10(void)

{
  undefined8 uVar1;
  long unaff_x21;
  long unaff_x24;
  uint unaff_w26;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000018;
  char in_stack_00000020;

  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *unaff_x28 = 0x8000000000000001;
  unaff_x28[1] = uVar1;
  if ((-0x7fffffffffffffff < unaff_x24) && (unaff_x24 != 0)) {
    _free(in_stack_00000018);
  }
  FUN_102033488(unaff_x21 + 0x20);
  if (in_stack_00000020 != '\x16') {
    FUN_1020378e0(&stack0x00000020);
  }
  if ((unaff_w26 & 0x1e) != 0x14) {
    FUN_1020378e0();
  }
  return;
}
