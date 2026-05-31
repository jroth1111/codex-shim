
void FUN_1004a7594(void)

{
  undefined8 uVar1;
  long in_x10;
  ulong unaff_x25;
  long unaff_x29;
  undefined8 *in_stack_00000000;
  undefined8 in_stack_00000018;
  char in_stack_00000030;
  long in_stack_000001b0;
  undefined8 in_stack_000001b8;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xf0);
  *in_stack_00000000 = 0x1d;
  in_stack_00000000[1] = uVar1;
  if (in_x10 != -0x8000000000000000) {
    if (in_x10 != 0) {
      _free();
    }
    if (in_stack_000001b0 != 0) {
      _free(in_stack_000001b8);
    }
  }
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000018);
  }
  FUN_100d34830(&stack0x00000050);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  return;
}

