
/* WARNING: Removing unreachable block (ram,0x000101c77ce0) */
/* WARNING: Removing unreachable block (ram,0x000101c77cec) */
/* WARNING: Removing unreachable block (ram,0x000101c77cf4) */

void FUN_101c77d84(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  char in_stack_00000050;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *unaff_x19 = 0x8000000000000000;
  unaff_x19[1] = uVar1;
  if (unaff_x22 != 0) {
    _free(in_stack_00000020);
  }
  if (unaff_x28 != 0) {
    _free(in_stack_00000028);
  }
  FUN_102033488(unaff_x21 + 0x20);
  if (in_stack_00000050 != '\x16') {
    FUN_1020378e0(&stack0x00000050);
  }
  if ((in_stack_00000030._4_4_ & 0x1e) != 0x14) {
    FUN_1020378e0(in_stack_00000038);
  }
  return;
}

