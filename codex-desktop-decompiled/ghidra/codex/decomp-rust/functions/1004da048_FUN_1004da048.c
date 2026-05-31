
void FUN_1004da048(void)

{
  undefined8 uVar1;
  ulong unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000070;
  long in_stack_00000078;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xa8);
  *in_stack_00000008 = 2;
  in_stack_00000008[1] = uVar1;
  if ((unaff_x28 != -0x7fffffffffffffff) && (unaff_x28 != -0x8000000000000000)) {
    if ((in_stack_00000078 != 0) && (in_stack_00000078 * 9 != -0x11)) {
      _free(in_stack_00000070 + in_stack_00000078 * -8 + -8);
    }
    func_0x000100cd7284(&stack0x00000058);
  }
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if ((unaff_x26 != 0x8000000000000001) && ((unaff_x26 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000038);
  }
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  return;
}

