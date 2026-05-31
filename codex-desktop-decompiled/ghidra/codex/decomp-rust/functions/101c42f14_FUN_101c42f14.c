
void FUN_101c42f14(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong unaff_x23;
  long unaff_x24;
  undefined8 unaff_x25;
  long unaff_x29;
  undefined8 in_stack_00000008;
  char in_stack_00000020;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0xd0);
  *unaff_x19 = unaff_x25;
  unaff_x19[1] = uVar1;
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000008);
  }
  if (((unaff_x21 != 0x8000000000000001) && ((unaff_x20 & 1) != 0)) &&
     ((unaff_x21 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000008);
  }
  FUN_102033488(unaff_x24 + 0x20);
  if (in_stack_00000020 != '\x16') {
    FUN_1020378e0(&stack0x00000020);
  }
  return;
}

