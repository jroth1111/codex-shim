
void FUN_10078d8c4(void)

{
  undefined8 uVar1;
  ulong unaff_x23;
  long unaff_x29;
  undefined1 *in_stack_00000030;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000a0);
  *(undefined8 *)(in_stack_00000030 + 8) = uVar1;
  *in_stack_00000030 = 5;
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_100d34830(unaff_x29 + -0x90);
  if (*(char *)(unaff_x29 + -0xb0) != '\x16') {
    FUN_100e077ec(unaff_x29 + -0xb0);
  }
  return;
}

