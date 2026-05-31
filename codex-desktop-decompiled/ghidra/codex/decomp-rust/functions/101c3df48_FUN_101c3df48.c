
void FUN_101c3df48(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  ulong unaff_x24;
  ulong unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000048;
  long in_stack_00000058;
  ulong in_stack_00000060;
  ulong in_stack_00000068;
  char in_stack_00000070;
  
  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0xd0);
  *unaff_x19 = 0x11;
  unaff_x19[1] = uVar1;
  if (in_stack_00000058 != -0x7ffffffffffffffb) {
    func_0x00010203527c(&stack0x00000188);
  }
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  if ((unaff_x24 != 0x8000000000000001) && ((unaff_x24 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000020);
  }
  if ((in_stack_00000060 != 0x8000000000000001) && ((in_stack_00000060 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000028);
  }
  if ((in_stack_00000068 != 0x8000000000000001) && ((in_stack_00000068 & 0x7fffffffffffffff) != 0))
  {
    _free();
  }
  FUN_102033488(&stack0x00000090);
  if (in_stack_00000070 != '\x16') {
    FUN_1020378e0(&stack0x00000070);
  }
  return;
}

