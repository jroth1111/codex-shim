
void FUN_10065a3c8(void)

{
  undefined8 uVar1;
  ulong unaff_x20;
  long unaff_x22;
  long unaff_x25;
  undefined1 *unaff_x27;
  long in_stack_00000020;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000090);
  *(undefined8 *)(unaff_x27 + 8) = uVar1;
  *unaff_x27 = 1;
  FUN_100de8910(unaff_x22 + 0x48);
  if (in_stack_00000020 != unaff_x25) {
    FUN_100de6690(&stack0x00000020);
  }
  if (((long)unaff_x20 < 0) && ((unaff_x20 & 0xfffffffffffffffe) != unaff_x25 - 1U)) {
    FUN_100de6690();
  }
  return;
}

