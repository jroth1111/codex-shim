
void FUN_101c43274(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  ulong unaff_x21;
  long unaff_x25;
  long unaff_x29;
  undefined8 in_stack_00000008;
  char in_stack_00000020;
  
  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0xd0);
  *unaff_x19 = 0x8000000000000006;
  unaff_x19[1] = uVar1;
  if (1 < unaff_x25 + 0x7fffffffffffffffU) {
    FUN_10202ff3c(&stack0x000000e8);
  }
  if ((unaff_x21 != 0x8000000000000001) && ((unaff_x21 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000008);
  }
  FUN_102033488(&stack0x00000040);
  if (in_stack_00000020 != '\x16') {
    FUN_1020378e0(&stack0x00000020);
  }
  return;
}

