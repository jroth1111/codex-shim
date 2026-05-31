
void FUN_101c77024(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x23;
  ulong unaff_x25;
  uint unaff_w26;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000028;
  char in_stack_00000030;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *in_stack_00000010 = 0x8000000000000000;
  in_stack_00000010[1] = uVar1;
  if ((-0x7fffffffffffffff < unaff_x23) && (unaff_x23 != 0)) {
    _free();
  }
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  FUN_102033488(unaff_x19 + 0x20);
  if (in_stack_00000030 != '\x16') {
    FUN_1020378e0(&stack0x00000030);
  }
  if ((unaff_w26 & 0x1e) != 0x14) {
    FUN_1020378e0();
  }
  return;
}

