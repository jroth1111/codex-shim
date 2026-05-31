
void FUN_101c799ec(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x21;
  uint unaff_w22;
  ulong unaff_x25;
  undefined8 *unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  char in_stack_00000040;
  ulong in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0xb8);
  *unaff_x27 = 0x8000000000000000;
  unaff_x27[1] = uVar1;
  if (unaff_x21 != -0x8000000000000000) {
    if (unaff_x21 != 0) {
      _free(in_stack_00000038);
    }
    if ((in_stack_000000a0 & 0x7fffffffffffffff) != 0) {
      _free(in_stack_000000a8);
    }
  }
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  FUN_102033488(unaff_x19 + 0x20);
  if (in_stack_00000040 != '\x16') {
    FUN_1020378e0(&stack0x00000040);
  }
  if ((unaff_w22 & 0x1e) != 0x14) {
    FUN_1020378e0();
  }
  return;
}

