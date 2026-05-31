
void FUN_101c65c24(void)

{
  undefined8 uVar1;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000058;
  char in_stack_00000060;
  long in_stack_000000a8;
  undefined8 in_stack_000000b0;
  ulong in_stack_000000c0;
  undefined8 in_stack_000000c8;
  
  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0xc0);
  *in_stack_00000018 = 0x8000000000000000;
  in_stack_00000018[1] = uVar1;
  if ((in_stack_00000058 != -0x8000000000000000) && (in_stack_00000058 != 0)) {
    _free(in_stack_00000040);
  }
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  if (in_stack_000000a8 != -0x8000000000000000) {
    if (in_stack_000000a8 != 0) {
      _free(in_stack_000000b0);
    }
    if ((in_stack_000000c0 & 0x7fffffffffffffff) != 0) {
      _free(in_stack_000000c8);
    }
  }
  FUN_102033488(&stack0x00000080);
  if (in_stack_00000060 != '\x16') {
    FUN_1020378e0(&stack0x00000060);
  }
  if ((in_stack_00000020._4_4_ & 0x1e) != 0x14) {
    FUN_1020378e0(in_stack_00000048);
  }
  return;
}

