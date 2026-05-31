
void FUN_10126d818(void)

{
  undefined8 uVar1;
  long unaff_x27;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000048;
  long in_stack_00000050;
  char in_stack_00000058;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000230);
  *in_stack_00000048 = 2;
  in_stack_00000048[1] = uVar1;
  FUN_100d5c778(&stack0x000001d8);
  if (((in_stack_00000050 != -0x7ffffffffffffffe) && (-0x7fffffffffffffff < in_stack_00000050)) &&
     (in_stack_00000050 != 0)) {
    _free(in_stack_00000030);
  }
  FUN_100d34830(unaff_x27 + 0x20);
  if (in_stack_00000058 != '\x16') {
    FUN_100e077ec(&stack0x00000058);
  }
  return;
}

