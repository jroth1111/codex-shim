
void FUN_101c74900(void)

{
  undefined8 uVar1;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  char in_stack_00000040;
  ulong in_stack_000000e0;
  undefined8 in_stack_000000e8;
  ulong in_stack_000000f8;
  undefined8 in_stack_00000100;
  long in_stack_00000110;
  undefined8 in_stack_00000118;
  
  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,&stack0x00000138);
  *in_stack_00000008 = 3;
  in_stack_00000008[1] = uVar1;
  if ((in_stack_000000e0 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000e8);
  }
  if ((in_stack_000000f8 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000100);
  }
  if ((-0x7fffffffffffffff < in_stack_00000110) && (in_stack_00000110 != 0)) {
    _free(in_stack_00000118);
  }
  FUN_102033488(&stack0x00000060);
  if (in_stack_00000040 != '\x16') {
    FUN_1020378e0(&stack0x00000040);
  }
  if ((in_stack_00000010._4_4_ & 0x1e) != 0x14) {
    FUN_1020378e0();
  }
  return;
}

