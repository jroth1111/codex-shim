
/* WARNING: Removing unreachable block (ram,0x000101c510ac) */

void FUN_101c50f28(void)

{
  undefined8 uVar1;
  ulong unaff_x19;
  undefined8 *unaff_x23;
  ulong unaff_x24;
  long unaff_x26;
  long unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  char in_stack_00000050;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x78);
  *unaff_x23 = 0x8000000000000000;
  unaff_x23[1] = uVar1;
  if (unaff_x24 != 0) {
    _free(in_stack_00000040);
  }
  if (unaff_x26 != 0) {
    _free();
  }
  if ((unaff_x27 != -0x8000000000000000) && (unaff_x27 != 0)) {
    _free(in_stack_00000038);
  }
  if (((unaff_x24 & 0x7fffffffffffffff) != 0) && ((unaff_x19 & 1) != 0)) {
    _free(in_stack_00000040);
  }
  FUN_102033488(&stack0x00000070);
  if (in_stack_00000050 != '\x16') {
    FUN_1020378e0(&stack0x00000050);
  }
  if ((in_stack_00000028._4_4_ & 0x1e) != 0x14) {
    FUN_1020378e0(in_stack_00000030);
  }
  return;
}

