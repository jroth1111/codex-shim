
void FUN_1007b8f90(void)

{
  undefined8 uVar1;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  char in_stack_00000030;
  long in_stack_00000140;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000002b8);
  *in_stack_00000010 = 0x11;
  in_stack_00000010[1] = uVar1;
  if (in_stack_00000140 != 0x11) {
    FUN_100e02a24(&stack0x00000140);
  }
  FUN_100d34830(&stack0x00000050);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  if ((in_stack_00000018._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000020);
  }
  return;
}

