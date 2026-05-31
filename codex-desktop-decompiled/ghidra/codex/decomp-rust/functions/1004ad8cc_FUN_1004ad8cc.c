
void FUN_1004ad8cc(void)

{
  undefined8 uVar1;
  ulong unaff_x19;
  undefined8 *unaff_x20;
  ulong unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  long unaff_x29;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000058;
  char in_stack_00000060;
  long in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xf0);
  *unaff_x20 = 0x1d;
  unaff_x20[1] = uVar1;
  if ((in_stack_00000058 != -0x7fffffffffffffff) && (in_stack_00000058 != -0x8000000000000000)) {
    if (in_stack_00000058 != 0) {
      _free();
    }
    if (in_stack_000001e0 != 0) {
      _free(in_stack_000001e8);
    }
  }
  if ((unaff_x19 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  if ((unaff_x23 != 0x8000000000000001) && ((unaff_x23 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000020);
  }
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  FUN_100d34830(unaff_x24 + 0x20);
  if (in_stack_00000060 != '\x16') {
    FUN_100e077ec(&stack0x00000060);
  }
  return;
}

