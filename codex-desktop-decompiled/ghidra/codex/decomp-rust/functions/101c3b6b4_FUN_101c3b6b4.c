
void FUN_101c3b6b4(void)

{
  undefined8 uVar1;
  ulong unaff_x25;
  ulong unaff_x26;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  char in_stack_00000050;
  
  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0x88);
  *in_stack_00000010 = 0x8000000000000006;
  in_stack_00000010[1] = uVar1;
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  FUN_102033488(&stack0x00000070);
  if (in_stack_00000050 != '\x16') {
    FUN_1020378e0(&stack0x00000050);
  }
  return;
}

