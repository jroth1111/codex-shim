
/* WARNING: Removing unreachable block (ram,0x000101c47354) */
/* WARNING: Removing unreachable block (ram,0x000101c4735c) */

void FUN_101c472a4(void)

{
  uint uVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 *unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong unaff_x27;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  uint in_stack_00000050;
  long in_stack_00000068;
  char in_stack_00000070;
  
  uVar2 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x90);
  *unaff_x23 = 0x11;
  unaff_x23[1] = uVar2;
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if ((in_stack_00000068 != -0x8000000000000000) && (in_stack_00000068 != 0)) {
    _free(in_stack_00000030);
  }
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if ((unaff_x27 != 0x8000000000000001) && ((unaff_x27 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000028);
  }
  uVar1 = 0;
  if (unaff_x25 != 0x8000000000000001) {
    uVar1 = in_stack_00000050;
  }
  if (((uVar1 & 1) != 0) && ((unaff_x25 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000038);
  }
  FUN_102033488(unaff_x19 + 0x20);
  if (in_stack_00000070 != '\x16') {
    FUN_1020378e0(&stack0x00000070);
  }
  return;
}

