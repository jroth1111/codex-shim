
void FUN_100eb3e2c(void)

{
  undefined8 uVar1;
  long in_x10;
  ulong unaff_x25;
  ulong unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  ulong in_stack_00000040;
  undefined8 *in_stack_00000050;
  char in_stack_000001d0;
  long in_stack_00000220;
  long in_stack_00000238;
  long in_stack_00000240;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xe0);
  *in_stack_00000050 = 3;
  in_stack_00000050[1] = uVar1;
  if (in_x10 != 0) {
    _free(in_stack_00000018);
  }
  if (((in_stack_00000040 & 0x7fffffffffffffff) != 0) && ((unaff_x25 & 1) != 0)) {
    _free(in_stack_00000020);
  }
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  if ((in_stack_00000220 != -0x7fffffffffffffff) && (in_stack_00000220 != -0x8000000000000000)) {
    if ((in_stack_00000240 != 0) && (in_stack_00000240 * 9 != -0x11)) {
      _free(in_stack_00000238 + in_stack_00000240 * -8 + -8);
    }
    func_0x000100cd7284(&stack0x00000220);
  }
  FUN_100d34830(&stack0x000001f0);
  if (in_stack_000001d0 != '\x16') {
    FUN_100e077ec(&stack0x000001d0);
  }
  return;
}

