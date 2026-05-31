
void FUN_101c55e88(void)

{
  undefined8 uVar1;
  ulong unaff_x20;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  char in_stack_00000060;
  
  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,&stack0x000002c8);
  *in_stack_00000028 = 0x8000000000000000;
  in_stack_00000028[1] = uVar1;
  FUN_10203e4dc(&stack0x000001c8);
  if ((unaff_x20 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_102033488(&stack0x00000080);
  if (in_stack_00000060 != '\x16') {
    FUN_1020378e0(&stack0x00000060);
  }
  if ((in_stack_00000010._4_4_ & 0x1e) != 0x14) {
    FUN_1020378e0(in_stack_00000020);
  }
  return;
}

