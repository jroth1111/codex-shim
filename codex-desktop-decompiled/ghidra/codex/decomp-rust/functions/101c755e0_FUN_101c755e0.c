
/* WARNING: Removing unreachable block (ram,0x000101c75258) */

void FUN_101c755e0(void)

{
  uint uVar1;
  undefined8 uVar2;
  ulong unaff_x20;
  undefined8 *unaff_x23;
  uint unaff_w24;
  ulong unaff_x25;
  ulong unaff_x27;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000068;
  ulong in_stack_00000070;
  long in_stack_00000078;
  char in_stack_00000080;
  
  uVar2 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *unaff_x23 = 0x8000000000000000;
  unaff_x23[1] = uVar2;
  if (unaff_x28 != 0) {
    _free(in_stack_00000048);
  }
  if (unaff_x27 != 0) {
    _free(in_stack_00000038);
  }
  if (in_stack_00000070 != 0) {
    _free(in_stack_00000040);
  }
  if (in_stack_00000078 != 0) {
    _free(in_stack_00000050);
  }
  if (((unaff_x28 & 0x7fffffffffffffff) != 0) && ((unaff_x20 & 1) != 0)) {
    _free(in_stack_00000048);
  }
  if (((unaff_x27 & 0x7fffffffffffffff) != 0) && ((unaff_x25 & 1) != 0)) {
    _free(in_stack_00000038);
  }
  uVar1 = 0;
  if ((in_stack_00000070 & 0x7fffffffffffffff) != 0) {
    uVar1 = unaff_w24;
  }
  if ((uVar1 & 1) != 0) {
    _free(in_stack_00000040);
  }
  FUN_102033488(&stack0x000000a0);
  if (in_stack_00000080 != '\x16') {
    FUN_1020378e0(&stack0x00000080);
  }
  if ((in_stack_00000068._4_4_ & 0x1e) != 0x14) {
    FUN_1020378e0();
  }
  return;
}

