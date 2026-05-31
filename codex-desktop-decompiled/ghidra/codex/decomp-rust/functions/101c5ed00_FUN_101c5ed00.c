
void FUN_101c5ed00(void)

{
  undefined8 uVar1;
  ulong in_x10;
  ulong unaff_x20;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000058;
  ulong in_stack_00000068;
  char in_stack_00000070;
  long in_stack_000001e8;
  
  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,&stack0x000003d0);
  *in_stack_00000020 = 0x12;
  in_stack_00000020[1] = uVar1;
  if (((in_x10 & 0x7fffffffffffffff) != 0) && ((unaff_x20 & 1) != 0)) {
    _free(in_stack_00000038);
  }
  if ((in_stack_00000068 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if (in_stack_000001e8 != 0x12) {
    FUN_10203bcb8(&stack0x000001e8);
  }
  FUN_102033488(&stack0x00000090);
  if (in_stack_00000070 != '\x16') {
    FUN_1020378e0(&stack0x00000070);
  }
  if ((in_stack_00000058._4_4_ & 0x1e) != 0x14) {
    FUN_1020378e0(in_stack_00000028);
  }
  return;
}

