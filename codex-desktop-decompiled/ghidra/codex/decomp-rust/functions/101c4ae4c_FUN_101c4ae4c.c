
void FUN_101c4ae4c(void)

{
  undefined8 uVar1;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x25;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000020;
  char in_stack_00000030;
  
  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
  *in_stack_00000008 = 0x12;
  in_stack_00000008[1] = uVar1;
  for (; unaff_x25 != 0; unaff_x25 = unaff_x25 + -1) {
    FUN_102037434(unaff_x21);
    unaff_x21 = unaff_x21 + 0x38;
  }
  if (unaff_x22 != 0) {
    _free();
  }
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000020);
  }
  FUN_102033488(&stack0x00000050);
  if (in_stack_00000030 != '\x16') {
    FUN_1020378e0(&stack0x00000030);
  }
  return;
}

