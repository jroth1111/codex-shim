
/* WARNING: Removing unreachable block (ram,0x000101c81dbc) */

void FUN_101c81e5c(void)

{
  undefined8 uVar1;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined8 *unaff_x23;
  long unaff_x27;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  char in_stack_00000050;

  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0xf0);
  *unaff_x23 = 2;
  unaff_x23[1] = uVar1;
  if ((unaff_x21 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000010);
  }
  if (unaff_x27 != 0) {
    _free(in_stack_00000020);
  }
  if (((unaff_x28 != 0x8000000000000001) && ((unaff_x20 & 1) != 0)) &&
     ((unaff_x28 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000010);
  }
  FUN_102033488(&stack0x00000070);
  if (in_stack_00000050 != '\x16') {
    FUN_1020378e0(&stack0x00000050);
  }
  if ((in_stack_00000030._4_4_ & 0x1e) != 0x14) {
    FUN_1020378e0(in_stack_00000038);
  }
  return;
}
