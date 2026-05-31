
void FUN_101c7cfb8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  long unaff_x29;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  ulong in_stack_00000058;
  char in_stack_00000060;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *unaff_x19 = 0x8000000000000000;
  unaff_x19[1] = uVar1;
  if ((in_stack_00000058 != 0x8000000000000001) && ((in_stack_00000058 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000020);
  }
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  FUN_102033488(unaff_x21 + 0x20);
  if (in_stack_00000060 != '\x16') {
    FUN_1020378e0(&stack0x00000060);
  }
  if ((unaff_w20 & 0x1e) != 0x14) {
    FUN_1020378e0();
  }
  return;
}

