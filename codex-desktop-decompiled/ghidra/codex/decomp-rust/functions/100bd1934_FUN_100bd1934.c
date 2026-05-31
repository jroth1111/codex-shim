
void FUN_100bd1934(void)

{
  undefined8 uVar1;
  ulong unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 *in_stack_00000040;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000b0);
  *in_stack_00000040 = 4;
  in_stack_00000040[1] = uVar1;
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  if ((-0x7fffffffffffffff < unaff_x25) && (unaff_x25 != 0)) {
    _free(in_stack_00000030);
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  FUN_100d34830(unaff_x29 + -0xe0);
  if (*(char *)(unaff_x29 + -0x100) != '\x16') {
    FUN_100e077ec(unaff_x29 + -0x100);
  }
  return;
}

