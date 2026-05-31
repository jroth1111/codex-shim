
void FUN_101c6f6f0(void)

{
  undefined8 uVar1;
  ulong unaff_x23;
  ulong unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 *in_stack_00000008;
  uint in_stack_00000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000028;
  char in_stack_00000030;
  
  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
  *in_stack_00000008 = 0x8000000000000000;
  in_stack_00000008[1] = uVar1;
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  uStack0000000000000014 = 1;
  if ((unaff_x23 != 0x8000000000000001) && ((unaff_x23 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000028);
  }
  FUN_102033488(&stack0x00000050);
  if (in_stack_00000030 != '\x16') {
    FUN_1020378e0(&stack0x00000030);
  }
  if ((in_stack_00000010 & 0x1e) != 0x14) {
    FUN_1020378e0(in_stack_00000000);
  }
  return;
}

