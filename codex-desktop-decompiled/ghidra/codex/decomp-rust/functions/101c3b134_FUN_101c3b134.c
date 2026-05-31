
/* WARNING: Removing unreachable block (ram,0x000101c3b508) */
/* WARNING: Removing unreachable block (ram,0x000101c3b510) */

void FUN_101c3b134(void)

{
  undefined8 uVar1;
  ulong unaff_x19;
  long unaff_x25;
  ulong unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x29;
  char in_stack_00000050;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x88);
  *unaff_x27 = 0x8000000000000006;
  unaff_x27[1] = uVar1;
  if (unaff_x25 != 0) {
    _free();
  }
  if (((unaff_x26 & 0x7fffffffffffffff) != 0) && ((unaff_x19 & 1) != 0)) {
    _free();
  }
  FUN_102033488(&stack0x00000070);
  if (in_stack_00000050 != '\x16') {
    FUN_1020378e0(&stack0x00000050);
  }
  return;
}

