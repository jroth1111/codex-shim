
void FUN_101c60200(void)

{
  undefined8 uVar1;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000030;
  ulong in_stack_00000038;
  char in_stack_00000040;
  
  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
  *in_stack_00000030 = 0x8000000000000000;
  in_stack_00000030[1] = uVar1;
  if ((in_stack_00000038 != 0x8000000000000001) && ((in_stack_00000038 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000020);
  }
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  FUN_102033488(&stack0x00000060);
  if (in_stack_00000040 != '\x16') {
    FUN_1020378e0(&stack0x00000040);
  }
  if ((in_stack_00000000._4_4_ & 0x1e) != 0x14) {
    FUN_1020378e0(in_stack_00000008);
  }
  return;
}

