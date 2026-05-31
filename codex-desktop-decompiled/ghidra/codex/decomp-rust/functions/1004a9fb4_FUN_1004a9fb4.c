
void FUN_1004a9fb4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x25;
  ulong unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  ulong in_stack_00000038;
  char in_stack_00000040;
  long in_stack_000001c0;
  undefined8 in_stack_000001c8;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xf0);
  *unaff_x25 = 0x1d;
  unaff_x25[1] = uVar1;
  if ((unaff_x21 != -0x7fffffffffffffff) && (unaff_x21 != -0x8000000000000000)) {
    if (unaff_x21 != 0) {
      _free();
    }
    if (in_stack_000001c0 != 0) {
      _free(in_stack_000001c8);
    }
  }
  if ((in_stack_00000038 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000018);
  }
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000020);
  }
  FUN_100d34830(unaff_x20 + 0x20);
  if (in_stack_00000040 != '\x16') {
    FUN_100e077ec(&stack0x00000040);
  }
  return;
}

