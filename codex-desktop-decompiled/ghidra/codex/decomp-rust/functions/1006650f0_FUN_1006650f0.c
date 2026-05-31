
void FUN_1006650f0(void)

{
  undefined8 uVar1;
  long unaff_x23;
  ulong unaff_x25;
  undefined8 *unaff_x28;
  long in_stack_00000020;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000090);
  *unaff_x28 = 0x8000000000000000;
  unaff_x28[1] = uVar1;
  FUN_100de8910(unaff_x23 + 0x48);
  if (in_stack_00000020 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x00000020);
  }
  if (((long)unaff_x25 < 0) && ((unaff_x25 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    FUN_100de6690();
  }
  return;
}

