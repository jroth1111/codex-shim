
void FUN_10042d158(void)

{
  undefined8 uVar1;
  long unaff_x21;
  undefined8 *in_stack_00000010;
  long in_stack_00000038;
  char in_stack_00000040;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000002e8);
  *in_stack_00000010 = 0x800000000000006e;
  in_stack_00000010[1] = uVar1;
  if (in_stack_00000038 != -0x8000000000000000) {
    FUN_100e6da8c(&stack0x00000250);
  }
  if ((-0x7fffffffffffffff < unaff_x21) && (unaff_x21 != 0)) {
    _free();
  }
  FUN_100d34830(&stack0x00000060);
  if (in_stack_00000040 != '\x16') {
    FUN_100e077ec(&stack0x00000040);
  }
  return;
}

