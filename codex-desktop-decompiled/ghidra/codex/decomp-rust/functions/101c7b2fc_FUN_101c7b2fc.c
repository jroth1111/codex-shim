
/* WARNING: Removing unreachable block (ram,0x000101c7b36c) */
/* WARNING: Removing unreachable block (ram,0x000101c7b378) */

void FUN_101c7b2fc(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  ulong unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  uint in_stack_00000050;
  char in_stack_00000070;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *unaff_x28 = unaff_x19;
  unaff_x28[1] = uVar1;
  if ((unaff_x21 != -0x8000000000000000) && (unaff_x21 != 0)) {
    _free(in_stack_00000038);
  }
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  FUN_102033488(unaff_x22 + 0x20);
  if (in_stack_00000070 != '\x16') {
    FUN_1020378e0(&stack0x00000070);
  }
  if ((in_stack_00000050 & 0x1e) != 0x14) {
    FUN_1020378e0();
  }
  return;
}

