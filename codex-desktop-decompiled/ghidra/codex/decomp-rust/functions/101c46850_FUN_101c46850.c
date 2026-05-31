
void FUN_101c46850(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  ulong unaff_x25;
  long unaff_x29;
  undefined8 in_stack_00000018;
  ulong in_stack_00000050;
  long in_stack_00000058;
  char in_stack_00000060;
  
  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0x100);
  *unaff_x19 = 0x12;
  unaff_x19[1] = uVar1;
  if (-0x7fffffffffffffff < in_stack_00000058) {
    FUN_10203d530(&stack0x000001b0);
  }
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000018);
  }
  if ((in_stack_00000050 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_102033488(&stack0x00000080);
  if (in_stack_00000060 != '\x16') {
    FUN_1020378e0(&stack0x00000060);
  }
  return;
}

