
void FUN_101a0b4c8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  long unaff_x29;
  undefined8 *in_stack_00000030;
  char in_stack_00000080;
  
  uVar1 = FUN_1088bbbb8(s_duplicate_field_____108ac2973,unaff_x29 + -0xe0);
  *in_stack_00000030 = 0x8000000000000007;
  in_stack_00000030[1] = uVar1;
  if (unaff_x22 != 0) {
    _free();
  }
  FUN_101942570(&stack0x000000a0);
  if (in_stack_00000080 != '\x16') {
    func_0x0001019551a0(&stack0x00000080);
  }
  return;
}

