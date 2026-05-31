
/* WARNING: Removing unreachable block (ram,0x000101c82c28) */
/* WARNING: Removing unreachable block (ram,0x000101c82c3c) */

void FUN_101c82cc0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  long unaff_x24;
  undefined8 *unaff_x25;
  uint unaff_w28;
  long unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  ulong in_stack_00000078;
  char in_stack_00000080;

  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *unaff_x25 = 0x8000000000000000;
  unaff_x25[1] = uVar1;
  if (unaff_x22 != 0) {
    _free(in_stack_00000030);
  }
  if (unaff_x24 != 0) {
    _free(in_stack_00000040);
  }
  if ((in_stack_00000078 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  FUN_102033488(&stack0x000000a0);
  if (in_stack_00000080 != '\x16') {
    FUN_1020378e0(&stack0x00000080);
  }
  if ((unaff_w28 & 0x1e) != 0x14) {
    FUN_1020378e0();
  }
  return;
}
