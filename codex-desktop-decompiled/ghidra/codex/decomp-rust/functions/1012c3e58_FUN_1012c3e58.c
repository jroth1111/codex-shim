
void FUN_1012c3e58(void)

{
  uint uVar1;
  undefined8 uVar2;
  ulong unaff_x20;
  ulong unaff_x21;
  uint unaff_w22;
  ulong unaff_x23;
  undefined8 *unaff_x26;
  long unaff_x27;
  ulong unaff_x28;
  long unaff_x29;
  char in_stack_000000b0;
  ulong in_stack_000001b0;
  
  uVar2 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *unaff_x26 = 0x8000000000000001;
  unaff_x26[1] = uVar2;
  if (*(ulong *)(unaff_x29 + -0xd0) != unaff_x28) {
    FUN_100de6690(unaff_x29 + -0xd0);
  }
  if (unaff_x20 != unaff_x28) {
    FUN_100de6690(&stack0x00000200);
  }
  if (((unaff_x23 & 0x7fffffffffffffff) != 0) && ((unaff_x21 & 1) != 0)) {
    _free();
  }
  uVar1 = 0;
  if (in_stack_000001b0 < unaff_x28) {
    uVar1 = unaff_w22;
  }
  if ((uVar1 & 1) != 0) {
    FUN_100de6690(&stack0x000001b0);
  }
  FUN_100d34830(unaff_x27 + 0x20);
  if (in_stack_000000b0 != '\x16') {
    FUN_100e077ec(&stack0x000000b0);
  }
  return;
}

