
void FUN_1004d4134(void)

{
  undefined8 uVar1;
  ulong unaff_x24;
  long unaff_x25;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  char in_stack_00000030;
  long in_stack_000000f8;
  long in_stack_00000100;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000130);
  *in_stack_00000008 = 0x8000000000000000;
  in_stack_00000008[1] = uVar1;
  if ((unaff_x25 != -0x7fffffffffffffff) && (unaff_x25 != -0x8000000000000000)) {
    if ((in_stack_00000100 != 0) && (in_stack_00000100 * 9 != -0x11)) {
      _free(in_stack_000000f8 + in_stack_00000100 * -8 + -8);
    }
    func_0x000100cd7284(&stack0x000000e0);
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  FUN_100d34830(&stack0x00000050);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  if ((in_stack_00000018._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000010);
  }
  return;
}

