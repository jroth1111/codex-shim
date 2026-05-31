
void FUN_101c68498(void)

{
  ulong uVar1;
  long unaff_x21;
  ulong *unaff_x23;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  ulong in_stack_00000058;
  char in_stack_00000060;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x88);
  *unaff_x23 = unaff_x28;
  unaff_x23[1] = uVar1;
  if (in_stack_00000050 != -0x8000000000000000) {
    FUN_102030bc4(unaff_x29 + -0xb8);
  }
  if ((in_stack_00000058 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000020);
  }
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  FUN_102033488(unaff_x21 + 0x20);
  if (in_stack_00000060 != '\x16') {
    FUN_1020378e0(&stack0x00000060);
  }
  if ((in_stack_00000048._4_4_ & 0x1e) != 0x14) {
    FUN_1020378e0();
  }
  return;
}

