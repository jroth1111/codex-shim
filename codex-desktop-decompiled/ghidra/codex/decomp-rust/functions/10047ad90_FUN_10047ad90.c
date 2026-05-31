
void FUN_10047ad90(void)

{
  undefined8 uVar1;
  long unaff_x21;
  long unaff_x23;
  long unaff_x25;
  undefined8 *unaff_x28;
  char in_stack_00000030;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x000003a8);
  *unaff_x28 = 0x800000000000006e;
  unaff_x28[1] = uVar1;
  if (unaff_x23 != -0x7fffffffffffffff) {
    FUN_100e5d5c4(&stack0x00000248);
  }
  if ((-0x7fffffffffffffff < unaff_x21) && (unaff_x21 != 0)) {
    _free();
  }
  FUN_100d34830(unaff_x25 + 0x20);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  return;
}

