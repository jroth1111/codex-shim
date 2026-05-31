
void FUN_1004d3e40(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  char in_stack_00000030;
  long in_stack_000000f8;
  long in_stack_00000100;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000130);
  *unaff_x23 = 0x8000000000000000;
  unaff_x23[1] = uVar1;
  if ((unaff_x25 != -0x7fffffffffffffff) && (unaff_x25 != -0x8000000000000000)) {
    if ((in_stack_00000100 != 0) && (in_stack_00000100 * 9 != -0x11)) {
      _free(in_stack_000000f8 + in_stack_00000100 * -8 + -8);
    }
    func_0x000100cd7284(&stack0x000000e0);
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  FUN_100d34830(unaff_x19 + 0x20);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  if ((in_stack_00000018._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

