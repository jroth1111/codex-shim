
void FUN_10066b6a4(void)

{
  undefined8 uVar1;
  long unaff_x22;
  long unaff_x25;
  ulong in_stack_00000010;
  undefined1 *in_stack_00000018;
  long in_stack_00000020;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000090);
  *(undefined8 *)(in_stack_00000018 + 8) = uVar1;
  *in_stack_00000018 = 1;
  FUN_100de8910(unaff_x22 + 0x48);
  if (in_stack_00000020 != unaff_x25) {
    FUN_100de6690(&stack0x00000020);
  }
  if (((long)in_stack_00000010 < 0) && ((in_stack_00000010 & 0xfffffffffffffffe) != unaff_x25 - 1U))
  {
    FUN_100de6690();
  }
  return;
}

