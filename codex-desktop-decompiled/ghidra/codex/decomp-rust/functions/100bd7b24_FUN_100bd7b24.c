
void FUN_100bd7b24(void)

{
  undefined8 uVar1;
  ulong unaff_x24;
  long unaff_x25;
  long unaff_x29;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined1 *in_stack_00000030;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000a0);
  *(undefined8 *)(in_stack_00000030 + 8) = uVar1;
  *in_stack_00000030 = 5;
  if (unaff_x25 != 0) {
    _free(in_stack_00000020);
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  FUN_100d34830(unaff_x29 + -0x90);
  if (*(char *)(unaff_x29 + -0xb0) != '\x16') {
    FUN_100e077ec(unaff_x29 + -0xb0);
  }
  return;
}

