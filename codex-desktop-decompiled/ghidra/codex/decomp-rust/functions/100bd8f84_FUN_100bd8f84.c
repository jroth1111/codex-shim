
void FUN_100bd8f84(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  ulong unaff_x22;
  ulong unaff_x23;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  ulong in_stack_00000090;
  long in_stack_000000a0;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xc0);
  *unaff_x20 = 2;
  unaff_x20[1] = uVar1;
  if ((in_stack_00000090 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000050);
  }
  FUN_100de8910(unaff_x27 + 0x48);
  if (in_stack_000000a0 != unaff_x28) {
    FUN_100de6690(&stack0x000000a0);
  }
  if (((long)unaff_x22 < 0) && ((unaff_x22 & 0xfffffffffffffffe) != unaff_x28 - 1U)) {
    FUN_100de6690();
  }
  return;
}

