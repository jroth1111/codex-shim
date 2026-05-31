
void FUN_1004cdc38(void)

{
  undefined8 uVar1;
  ulong unaff_x25;
  ulong unaff_x26;
  undefined8 *in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  char in_stack_00000040;
  long in_stack_00000128;
  long in_stack_00000130;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000160);
  *in_stack_00000000 = 0x8000000000000000;
  in_stack_00000000[1] = uVar1;
  if ((in_stack_00000038 != -0x7fffffffffffffff) && (in_stack_00000038 != -0x8000000000000000)) {
    if ((in_stack_00000130 != 0) && (in_stack_00000130 * 9 != -0x11)) {
      _free(in_stack_00000128 + in_stack_00000130 * -8 + -8);
    }
    func_0x000100cd7284(&stack0x00000110);
  }
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000020);
  }
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  FUN_100d34830(&stack0x00000060);
  if (in_stack_00000040 != '\x16') {
    FUN_100e077ec(&stack0x00000040);
  }
  if ((in_stack_00000008._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000030);
  }
  return;
}

