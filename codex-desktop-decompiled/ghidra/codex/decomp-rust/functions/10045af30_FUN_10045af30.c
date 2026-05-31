
void FUN_10045af30(void)

{
  undefined8 uVar1;
  long unaff_x22;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  char in_stack_00000030;
  long in_stack_00000250;
  undefined8 in_stack_00000258;
  long in_stack_00000268;
  undefined8 in_stack_00000270;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -200);
  *in_stack_00000008 = 0x800000000000006e;
  in_stack_00000008[1] = uVar1;
  if (in_stack_00000250 != 0) {
    _free(in_stack_00000258);
  }
  if ((in_stack_00000268 != -0x8000000000000000) && (in_stack_00000268 != 0)) {
    _free(in_stack_00000270);
  }
  if ((-0x7fffffffffffffff < unaff_x22) && (unaff_x22 != 0)) {
    _free();
  }
  FUN_100d34830(&stack0x00000050);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  return;
}

