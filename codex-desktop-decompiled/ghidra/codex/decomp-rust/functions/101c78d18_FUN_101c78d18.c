
/* WARNING: Removing unreachable block (ram,0x000101c78d94) */

void FUN_101c78d18(void)

{
  undefined8 uVar1;
  ulong unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x29;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  uint in_stack_00000050;
  undefined8 in_stack_00000058;
  ulong in_stack_00000068;
  char in_stack_00000070;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *unaff_x23 = 0x8000000000000000;
  unaff_x23[1] = uVar1;
  if (unaff_x22 != 0) {
    _free(in_stack_00000038);
  }
  if (in_stack_00000068 != 0) {
    _free(in_stack_00000040);
  }
  if (unaff_x21 != 0) {
    _free(in_stack_00000048);
  }
  if (((unaff_x22 & 0x7fffffffffffffff) != 0) && ((unaff_x19 & 1) != 0)) {
    _free(in_stack_00000038);
  }
  if (((in_stack_00000068 & 0x7fffffffffffffff) != 0) && ((unaff_x20 & 1) != 0)) {
    _free(in_stack_00000040);
  }
  FUN_102033488(&stack0x00000090);
  if (in_stack_00000070 != '\x16') {
    FUN_1020378e0(&stack0x00000070);
  }
  if ((in_stack_00000050 & 0x1e) != 0x14) {
    FUN_1020378e0(in_stack_00000058);
  }
  return;
}

