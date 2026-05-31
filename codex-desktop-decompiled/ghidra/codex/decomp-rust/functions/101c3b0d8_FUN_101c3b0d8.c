
void FUN_101c3b0d8(void)

{
  undefined8 uVar1;
  long unaff_x21;
  ulong unaff_x25;
  ulong unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x29;
  char in_stack_00000050;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x88);
  *unaff_x27 = 0x8000000000000006;
  unaff_x27[1] = uVar1;
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_102033488(unaff_x21 + 0x20);
  if (in_stack_00000050 != '\x16') {
    FUN_1020378e0(&stack0x00000050);
  }
  return;
}

