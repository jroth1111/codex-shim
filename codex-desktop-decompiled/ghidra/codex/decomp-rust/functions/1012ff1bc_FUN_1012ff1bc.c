
void FUN_1012ff1bc(void)

{
  undefined8 uVar1;
  long unaff_x22;
  long unaff_x29;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000050;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000a0);
  *in_stack_00000050 = 4;
  in_stack_00000050[1] = uVar1;
  if (unaff_x22 != 0) {
    _free(in_stack_00000040);
  }
  FUN_100d34830(unaff_x29 + -0xe0);
  if (*(char *)(unaff_x29 + -0x100) != '\x16') {
    FUN_100e077ec(unaff_x29 + -0x100);
  }
  return;
}

