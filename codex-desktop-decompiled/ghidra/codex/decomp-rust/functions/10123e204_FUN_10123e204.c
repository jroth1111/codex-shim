
void FUN_10123e204(void)

{
  undefined8 uVar1;
  undefined1 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  char in_stack_00000020;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000070);
  *(undefined8 *)(in_stack_00000008 + 8) = uVar1;
  *in_stack_00000008 = 1;
  FUN_100d34830(&stack0x00000040);
  if (in_stack_00000020 != '\x16') {
    FUN_100e077ec(&stack0x00000020);
  }
  if ((in_stack_00000010._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000018);
  }
  return;
}

