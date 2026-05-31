
void FUN_101c3cf44(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  ulong unaff_x22;
  ulong unaff_x24;
  long unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  char in_stack_00000030;
  
  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
  *unaff_x19 = 0x8000000000000006;
  unaff_x19[1] = uVar1;
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000018);
  }
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000020);
  }
  FUN_102033488(&stack0x00000050);
  if (in_stack_00000030 != '\x16') {
    FUN_1020378e0(&stack0x00000030);
  }
  return;
}

