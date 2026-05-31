
/* WARNING: Removing unreachable block (ram,0x000101c7f72c) */

void FUN_101c7f7b4(void)

{
  undefined8 uVar1;
  ulong unaff_x19;
  ulong unaff_x22;
  long unaff_x24;
  long unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  uint in_stack_00000050;
  long in_stack_00000058;
  char in_stack_00000060;

  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *in_stack_00000048 = 0x8000000000000000;
  in_stack_00000048[1] = uVar1;
  if (in_stack_00000058 != 0) {
    _free(in_stack_00000040);
  }
  if ((unaff_x24 != -0x8000000000000000) && (unaff_x24 != 0)) {
    _free(in_stack_00000018);
  }
  if (((unaff_x22 & 0x7fffffffffffffff) != 0) && ((unaff_x19 & 1) != 0)) {
    _free(in_stack_00000038);
  }
  FUN_102033488(&stack0x00000080);
  if (in_stack_00000060 != '\x16') {
    FUN_1020378e0(&stack0x00000060);
  }
  if ((in_stack_00000050 & 0x1e) != 0x14) {
    FUN_1020378e0();
  }
  return;
}
