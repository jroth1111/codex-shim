
void FUN_1007a3fac(void)

{
  undefined8 uVar1;
  ulong unaff_x23;
  long unaff_x29;
  undefined8 *in_stack_00000030;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000a0);
  *in_stack_00000030 = 4;
  in_stack_00000030[1] = uVar1;
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_100d34830(unaff_x29 + -0x90);
  if (*(char *)(unaff_x29 + -0xb0) != '\x16') {
    FUN_100e077ec(unaff_x29 + -0xb0);
  }
  return;
}

