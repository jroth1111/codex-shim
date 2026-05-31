
void FUN_100bb9220(void)

{
  undefined8 uVar1;
  undefined2 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  char in_stack_00000030;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000078);
  *(undefined8 *)(in_stack_00000010 + 4) = uVar1;
  *in_stack_00000010 = 1;
  FUN_100d34830(&stack0x00000050);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  if ((in_stack_00000018._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000020);
  }
  return;
}

