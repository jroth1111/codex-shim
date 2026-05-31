
void FUN_101c79cb8(void)

{
  undefined8 uVar1;
  long unaff_x21;
  ulong unaff_x25;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  char in_stack_00000040;
  ulong in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0xb8);
  *in_stack_00000018 = 0x8000000000000000;
  in_stack_00000018[1] = uVar1;
  if (unaff_x21 != 0) {
    _free(in_stack_00000038);
  }
  if ((in_stack_000000a0 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000a8);
  }
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  FUN_102033488(&stack0x00000060);
  if (in_stack_00000040 != '\x16') {
    FUN_1020378e0(&stack0x00000040);
  }
  if ((in_stack_00000008._4_4_ & 0x1e) != 0x14) {
    FUN_1020378e0(in_stack_00000010);
  }
  return;
}

