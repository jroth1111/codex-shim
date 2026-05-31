
/* WARNING: Removing unreachable block (ram,0x000101c73b10) */
/* WARNING: Removing unreachable block (ram,0x000101c73b18) */

void FUN_101c73ba0(void)

{
  undefined8 uVar1;
  ulong unaff_x19;
  ulong unaff_x27;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  char in_stack_00000060;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0xe8);
  *in_stack_00000010 = 2;
  in_stack_00000010[1] = uVar1;
  if (in_stack_00000058 != 0) {
    _free(in_stack_00000040);
  }
  if (((unaff_x27 & 0x7fffffffffffffff) != 0) && ((unaff_x19 & 1) != 0)) {
    _free(in_stack_00000038);
  }
  FUN_102033488(&stack0x00000080);
  if (in_stack_00000060 != '\x16') {
    FUN_1020378e0(&stack0x00000060);
  }
  if ((in_stack_00000018._4_4_ & 0x1e) != 0x14) {
    FUN_1020378e0(in_stack_00000050);
  }
  return;
}

