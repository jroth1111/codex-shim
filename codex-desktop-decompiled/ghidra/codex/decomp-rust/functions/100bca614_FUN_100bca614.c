
void FUN_100bca614(void)

{
  undefined8 uVar1;
  ulong in_x10;
  ulong unaff_x25;
  undefined8 in_stack_000000b8;
  long in_stack_000000e8;
  undefined8 *in_stack_000000f0;
  char in_stack_00000270;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000180);
  *in_stack_000000f0 = 0x12;
  in_stack_000000f0[1] = uVar1;
  if (-0x7fffffffffffffff < in_stack_000000e8) {
    FUN_100e24ac8(&stack0x00000130);
  }
  if ((in_x10 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000b8);
  }
  FUN_100d34830(&stack0x00000290);
  if (in_stack_00000270 != '\x16') {
    FUN_100e077ec(&stack0x00000270);
  }
  return;
}

