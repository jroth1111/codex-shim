
void FUN_1007d4a04(void)

{
  undefined8 uVar1;
  long unaff_x19;
  uint unaff_w24;
  undefined8 *unaff_x28;
  long unaff_x29;
  char in_stack_00000030;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xd8);
  *unaff_x28 = 0x800000000000000f;
  unaff_x28[1] = uVar1;
  FUN_100d34830(unaff_x19 + 0x20);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  if ((unaff_w24 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

