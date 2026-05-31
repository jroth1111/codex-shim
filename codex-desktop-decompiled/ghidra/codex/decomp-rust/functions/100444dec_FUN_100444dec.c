
void FUN_100444dec(void)

{
  undefined8 uVar1;
  long unaff_x21;
  long unaff_x23;
  undefined8 *in_stack_00000008;
  char in_stack_00000030;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000003e8);
  *in_stack_00000008 = 0x800000000000006e;
  in_stack_00000008[1] = uVar1;
  if (unaff_x23 != -0x8000000000000000) {
    FUN_100e4f2ec(&stack0x00000240);
  }
  if ((-0x7fffffffffffffff < unaff_x21) && (unaff_x21 != 0)) {
    _free();
  }
  FUN_100d34830(&stack0x00000050);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  return;
}

