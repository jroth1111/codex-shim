
void FUN_101c3a628(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  ulong unaff_x24;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  ulong in_stack_00000048;
  long in_stack_00000050;
  ulong in_stack_00000058;
  char in_stack_00000060;
  
  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0x90);
  *unaff_x19 = 0x11;
  unaff_x19[1] = uVar1;
  if ((in_stack_00000050 != -0x8000000000000000) && (in_stack_00000050 != 0)) {
    _free(in_stack_00000030);
  }
  if ((in_stack_00000058 != 0x8000000000000001) && ((in_stack_00000058 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000028);
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if ((in_stack_00000048 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  FUN_102033488(&stack0x00000080);
  if (in_stack_00000060 != '\x16') {
    FUN_1020378e0(&stack0x00000060);
  }
  return;
}

