
void FUN_10066d454(void)

{
  undefined8 uVar1;
  long unaff_x24;
  undefined8 *unaff_x26;
  ulong unaff_x28;
  long in_stack_00000020;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000480);
  *unaff_x26 = 0x8000000000000000;
  unaff_x26[1] = uVar1;
  FUN_100de8910(unaff_x24 + 0x48);
  if (in_stack_00000020 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x00000020);
  }
  if (((long)unaff_x28 < 0) && ((unaff_x28 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    FUN_100de6690();
  }
  return;
}

