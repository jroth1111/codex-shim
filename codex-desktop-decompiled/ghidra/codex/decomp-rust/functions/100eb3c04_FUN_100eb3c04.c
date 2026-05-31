
void FUN_100eb3c04(void)

{
  undefined8 uVar1;
  ulong unaff_x21;
  ulong unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000030;
  long in_stack_00000048;
  undefined8 *in_stack_00000050;
  char in_stack_000000b0;
  long in_stack_000001d0;
  long in_stack_000001e8;
  long in_stack_000001f0;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xe0);
  *in_stack_00000050 = 3;
  in_stack_00000050[1] = uVar1;
  if (in_stack_00000048 != -0x7fffffffffffffff) {
    func_0x000100e2f2f8(&stack0x00000220);
  }
  if (((unaff_x27 & 0x7fffffffffffffff) != 0) && ((unaff_x21 & 1) != 0)) {
    _free(in_stack_00000030);
  }
  if ((in_stack_000001d0 != -0x7fffffffffffffff) && (in_stack_000001d0 != -0x8000000000000000)) {
    if ((in_stack_000001f0 != 0) && (in_stack_000001f0 * 9 != -0x11)) {
      _free(in_stack_000001e8 + in_stack_000001f0 * -8 + -8);
    }
    func_0x000100cd7284(&stack0x000001d0);
  }
  FUN_100d34830(&stack0x000000d0);
  if (in_stack_000000b0 != '\x16') {
    FUN_100e077ec(&stack0x000000b0);
  }
  return;
}

