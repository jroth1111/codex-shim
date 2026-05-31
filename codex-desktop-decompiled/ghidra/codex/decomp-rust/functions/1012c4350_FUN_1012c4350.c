
void FUN_1012c4350(void)

{
  uint uVar1;
  undefined8 uVar2;
  ulong unaff_x20;
  uint unaff_w21;
  uint unaff_w22;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined8 *unaff_x26;
  ulong unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  char in_stack_000001b0;
  ulong in_stack_00000200;
  
  uVar2 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x000000b0);
  *unaff_x26 = 0x8000000000000001;
  unaff_x26[1] = uVar2;
  if (unaff_x27 != 0) {
    _free();
  }
  if (*(ulong *)(unaff_x29 + -0xd0) != unaff_x23) {
    FUN_100de6690(unaff_x29 + -0xd0);
  }
  if ((unaff_x28 != -0x8000000000000000) && (unaff_x28 != 0)) {
    _free(in_stack_00000018);
  }
  if (((unaff_x24 & 0x7fffffffffffffff) != 0) && ((unaff_x20 & 1) != 0)) {
    _free(in_stack_00000020);
  }
  uVar1 = 0;
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    uVar1 = unaff_w22;
  }
  if ((uVar1 & 1) != 0) {
    _free();
  }
  uVar1 = 0;
  if (in_stack_00000200 < unaff_x23) {
    uVar1 = unaff_w21;
  }
  if ((uVar1 & 1) != 0) {
    FUN_100de6690(&stack0x00000200);
  }
  FUN_100d34830(&stack0x000001d0);
  if (in_stack_000001b0 != '\x16') {
    FUN_100e077ec(&stack0x000001b0);
  }
  return;
}

