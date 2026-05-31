
void FUN_101c656a4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long unaff_x24;
  ulong unaff_x26;
  uint unaff_w27;
  long unaff_x29;
  undefined8 in_stack_00000048;
  long in_stack_00000058;
  char in_stack_00000060;
  long in_stack_000000a8;
  undefined8 in_stack_000000b0;
  ulong in_stack_000000c0;
  undefined8 in_stack_000000c8;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x88);
  *unaff_x19 = 0x8000000000000000;
  unaff_x19[1] = uVar1;
  if ((in_stack_00000058 != -0x8000000000000000) && (in_stack_00000058 != 0)) {
    _free();
  }
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  if (in_stack_000000a8 != -0x8000000000000000) {
    if (in_stack_000000a8 != 0) {
      _free(in_stack_000000b0);
    }
    if ((in_stack_000000c0 & 0x7fffffffffffffff) != 0) {
      _free(in_stack_000000c8);
    }
  }
  FUN_102033488(unaff_x24 + 0x20);
  if (in_stack_00000060 != '\x16') {
    FUN_1020378e0(&stack0x00000060);
  }
  if ((unaff_w27 & 0x1e) != 0x14) {
    FUN_1020378e0(in_stack_00000048);
  }
  return;
}

