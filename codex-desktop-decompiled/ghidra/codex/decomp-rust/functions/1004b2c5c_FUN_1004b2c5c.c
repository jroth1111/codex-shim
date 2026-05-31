
void FUN_1004b2c5c(void)

{
  undefined8 uVar1;
  undefined8 *in_stack_00000008;
  long in_stack_00000038;
  char in_stack_00000040;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000338);
  *in_stack_00000008 = 0x800000000000006e;
  in_stack_00000008[1] = uVar1;
  FUN_100e7d87c(&stack0x00000250);
  if ((-0x7fffffffffffffff < in_stack_00000038) && (in_stack_00000038 != 0)) {
    _free();
  }
  FUN_100d34830(&stack0x00000060);
  if (in_stack_00000040 != '\x16') {
    FUN_100e077ec(&stack0x00000040);
  }
  return;
}

