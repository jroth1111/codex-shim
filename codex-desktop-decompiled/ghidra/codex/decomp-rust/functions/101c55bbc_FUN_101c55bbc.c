
void FUN_101c55bbc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  uint unaff_w26;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  char in_stack_00000060;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,&stack0x000002c8);
  *in_stack_00000028 = 0x8000000000000000;
  in_stack_00000028[1] = uVar1;
  if (unaff_x20 != 0) {
    _free();
  }
  FUN_102033488(&stack0x00000080);
  if (in_stack_00000060 != '\x16') {
    FUN_1020378e0(&stack0x00000060);
  }
  if ((unaff_w26 & 0x1e) != 0x14) {
    FUN_1020378e0(in_stack_00000020);
  }
  return;
}

