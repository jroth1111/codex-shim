
void FUN_101c82160(void)

{
  undefined8 uVar1;
  ulong unaff_x27;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000048;
  char in_stack_00000050;
  long in_stack_000000a8;
  undefined8 in_stack_000000b0;
  long in_stack_000000c0;
  undefined8 in_stack_000000c8;

  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0xf0);
  *in_stack_00000028 = 2;
  in_stack_00000028[1] = uVar1;
  if (in_stack_00000048 != 2) {
    if (in_stack_000000a8 != 0) {
      _free(in_stack_000000b0);
    }
    if (in_stack_000000c0 != 0) {
      _free(in_stack_000000c8);
    }
  }
  if ((unaff_x28 != 0x8000000000000001) && ((unaff_x28 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000010);
  }
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000020);
  }
  FUN_102033488(&stack0x00000070);
  if (in_stack_00000050 != '\x16') {
    FUN_1020378e0(&stack0x00000050);
  }
  if ((in_stack_00000030._4_4_ & 0x1e) != 0x14) {
    FUN_1020378e0(in_stack_00000038);
  }
  return;
}
