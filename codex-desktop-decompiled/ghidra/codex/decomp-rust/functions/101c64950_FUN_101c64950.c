
void FUN_101c64950(void)

{
  undefined8 uVar1;
  ulong unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000030;
  uint in_stack_00000038;
  undefined8 *in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  ulong in_stack_00000070;
  long in_stack_00000078;
  ulong in_stack_00000080;
  ulong in_stack_00000088;
  char in_stack_00000090;
  
  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
  *in_stack_00000040 = 0x8000000000000000;
  in_stack_00000040[1] = uVar1;
  if ((in_stack_00000078 != -0x8000000000000000) && (in_stack_00000078 != 0)) {
    _free(in_stack_00000030);
  }
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  if ((in_stack_00000080 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000050);
  }
  if ((in_stack_00000070 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000058);
  }
  if ((in_stack_00000088 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000060);
  }
  FUN_102033488(&stack0x000000b0);
  if (in_stack_00000090 != '\x16') {
    FUN_1020378e0(&stack0x00000090);
  }
  if ((in_stack_00000038 & 0x1e) != 0x14) {
    FUN_1020378e0(in_stack_00000068);
  }
  return;
}

