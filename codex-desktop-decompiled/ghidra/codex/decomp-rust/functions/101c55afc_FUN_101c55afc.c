
void FUN_101c55afc(void)

{
  undefined8 uVar1;
  ulong unaff_x20;
  long unaff_x23;
  uint unaff_w26;
  undefined8 *in_stack_00000028;
  long in_stack_00000058;
  char in_stack_00000060;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,&stack0x000002c8);
  *in_stack_00000028 = 0x8000000000000000;
  in_stack_00000028[1] = uVar1;
  if (in_stack_00000058 != -0x8000000000000000) {
    FUN_10203e4dc(&stack0x000001c8);
  }
  if ((unaff_x20 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_102033488(unaff_x23 + 0x20);
  if (in_stack_00000060 != '\x16') {
    FUN_1020378e0(&stack0x00000060);
  }
  if ((unaff_w26 & 0x1e) != 0x14) {
    FUN_1020378e0();
  }
  return;
}

