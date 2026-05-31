
void FUN_10046e29c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x26;
  long unaff_x29;
  char in_stack_00000030;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xa8);
  *unaff_x26 = 0x800000000000006e;
  unaff_x26[1] = uVar1;
  if (unaff_x24 != -0x8000000000000000) {
    if (unaff_x24 != 0) {
      _free();
    }
    if (*(long *)(unaff_x29 + -0xc0) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0xb8));
    }
  }
  if ((-0x7fffffffffffffff < unaff_x23) && (unaff_x23 != 0)) {
    _free();
  }
  FUN_100d34830(unaff_x20 + 0x20);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  return;
}

