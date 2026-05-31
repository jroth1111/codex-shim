
void FUN_1006646d4(void)

{
  undefined8 uVar1;
  ulong unaff_x25;
  long unaff_x27;
  undefined8 *in_stack_00000020;
  long in_stack_00000030;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000170);
  *in_stack_00000020 = 2;
  in_stack_00000020[1] = uVar1;
  FUN_100de8910(unaff_x27 + 0x48);
  if (in_stack_00000030 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x00000030);
  }
  if (((long)unaff_x25 < 0) && ((unaff_x25 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    FUN_100de6690();
  }
  return;
}

