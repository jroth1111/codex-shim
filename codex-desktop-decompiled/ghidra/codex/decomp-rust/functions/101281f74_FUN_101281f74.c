
void FUN_101281f74(void)

{
  undefined8 uVar1;
  ulong unaff_x23;
  ulong unaff_x25;
  long unaff_x29;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000030;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000100);
  *in_stack_00000030 = 0x8000000000000004;
  in_stack_00000030[1] = uVar1;
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000020);
  }
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  FUN_100d34830(unaff_x29 + -0x90);
  if (*(char *)(unaff_x29 + -0xb0) != '\x16') {
    FUN_100e077ec(unaff_x29 + -0xb0);
  }
  return;
}

