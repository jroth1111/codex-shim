
void FUN_101c4cd10(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  ulong unaff_x25;
  ulong unaff_x27;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  char in_stack_00000040;
  
  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,&stack0x000001e0);
  *unaff_x19 = 0x11;
  unaff_x19[1] = uVar1;
  FUN_1020394f0(&stack0x00000158);
  if ((unaff_x27 != 0x8000000000000001) && ((unaff_x27 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000028);
  }
  if ((unaff_x25 != 0x8000000000000001) && ((unaff_x25 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000020);
  }
  FUN_102033488(&stack0x00000060);
  if (in_stack_00000040 != '\x16') {
    FUN_1020378e0(&stack0x00000040);
  }
  return;
}

