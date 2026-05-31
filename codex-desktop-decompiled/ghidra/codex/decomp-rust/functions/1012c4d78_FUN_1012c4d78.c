
void FUN_1012c4d78(void)

{
  undefined8 uVar1;
  ulong unaff_x20;
  ulong unaff_x24;
  undefined8 *unaff_x26;
  ulong unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000038;
  char in_stack_000001b0;
  ulong in_stack_00000200;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xd0);
  *unaff_x26 = 0x8000000000000001;
  unaff_x26[1] = uVar1;
  if ((in_stack_00000038 != -0x8000000000000000) && (in_stack_00000038 != 0)) {
    _free(in_stack_00000018);
  }
  if (((unaff_x24 & 0x7fffffffffffffff) != 0) && ((unaff_x20 & 1) != 0)) {
    _free(in_stack_00000020);
  }
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  if (in_stack_00000200 < 0x8000000000000005) {
    FUN_100de6690(&stack0x00000200);
  }
  FUN_100d34830(&stack0x000001d0);
  if (in_stack_000001b0 != '\x16') {
    FUN_100e077ec(&stack0x000001b0);
  }
  return;
}

