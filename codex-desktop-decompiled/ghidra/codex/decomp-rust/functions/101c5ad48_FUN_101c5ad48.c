
void FUN_101c5ad48(void)

{
  undefined8 uVar1;
  ulong unaff_x23;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  char in_stack_00000050;
  
  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,&stack0x000001f8);
  *in_stack_00000010 = 2;
  in_stack_00000010[1] = uVar1;
  FUN_10203cab8(&stack0x00000158);
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  FUN_102033488(&stack0x00000070);
  if (in_stack_00000050 != '\x16') {
    FUN_1020378e0(&stack0x00000050);
  }
  if ((in_stack_00000018._4_4_ & 0x1e) != 0x14) {
    FUN_1020378e0(in_stack_00000020);
  }
  return;
}

