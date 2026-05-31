
void FUN_100bd420c(void)

{
  undefined8 uVar1;
  long unaff_x23;
  long unaff_x24;
  long unaff_x29;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000030;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000a0);
  *in_stack_00000030 = 4;
  in_stack_00000030[1] = uVar1;
  if ((-0x7fffffffffffffff < unaff_x24) && (unaff_x24 != 0)) {
    _free(in_stack_00000020);
  }
  if ((-0x7fffffffffffffff < unaff_x23) && (unaff_x23 != 0)) {
    _free(in_stack_00000028);
  }
  FUN_100d34830(unaff_x29 + -0x90);
  if (*(char *)(unaff_x29 + -0xb0) != '\x16') {
    FUN_100e077ec(unaff_x29 + -0xb0);
  }
  return;
}

