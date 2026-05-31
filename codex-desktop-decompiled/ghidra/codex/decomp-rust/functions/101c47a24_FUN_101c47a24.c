
void FUN_101c47a24(void)

{
  undefined8 uVar1;
  ulong unaff_x19;
  ulong unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  ulong in_stack_00000058;
  ulong in_stack_00000060;
  long in_stack_00000068;
  char in_stack_00000070;
  
  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0x90);
  *unaff_x23 = 0x11;
  unaff_x23[1] = uVar1;
  if ((in_stack_00000068 != -0x8000000000000000) && (in_stack_00000068 != 0)) {
    _free(in_stack_00000030);
  }
  if ((in_stack_00000058 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if ((unaff_x22 != 0x8000000000000001) && ((unaff_x22 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000028);
  }
  if ((in_stack_00000060 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  if ((unaff_x19 != 0x8000000000000001) && ((unaff_x19 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000038);
  }
  FUN_102033488(&stack0x00000090);
  if (in_stack_00000070 != '\x16') {
    FUN_1020378e0(&stack0x00000070);
  }
  return;
}

