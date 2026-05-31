
void FUN_101c7fb08(void)

{
  undefined8 uVar1;
  ulong unaff_x22;
  long unaff_x24;
  long unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  uint in_stack_00000050;
  ulong in_stack_00000058;
  char in_stack_00000060;

  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
  *in_stack_00000048 = 0x8000000000000000;
  in_stack_00000048[1] = uVar1;
  if ((unaff_x24 != -0x8000000000000000) && (unaff_x24 != 0)) {
    _free(in_stack_00000018);
  }
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if ((in_stack_00000058 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  FUN_102033488(&stack0x00000080);
  if (in_stack_00000060 != '\x16') {
    FUN_1020378e0(&stack0x00000060);
  }
  if ((in_stack_00000050 & 0x1e) != 0x14) {
    FUN_1020378e0(in_stack_00000010);
  }
  return;
}
