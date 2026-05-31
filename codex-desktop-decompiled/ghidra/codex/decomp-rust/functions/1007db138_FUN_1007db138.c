
void FUN_1007db138(void)

{
  undefined8 uVar1;
  long unaff_x23;
  undefined8 *unaff_x25;
  long unaff_x29;
  undefined8 in_stack_00000020;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000120);
  *unaff_x25 = 0x8000000000000002;
  unaff_x25[1] = uVar1;
  if (unaff_x23 != 0) {
    _free(in_stack_00000020);
  }
  FUN_100d34830(unaff_x29 + -0x90);
  if (*(char *)(unaff_x29 + -0xb0) != '\x16') {
    FUN_100e077ec(unaff_x29 + -0xb0);
  }
  return;
}

