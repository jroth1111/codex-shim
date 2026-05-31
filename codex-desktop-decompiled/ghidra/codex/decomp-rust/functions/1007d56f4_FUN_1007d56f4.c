
void FUN_1007d56f4(void)

{
  undefined8 uVar1;
  long unaff_x25;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  char in_stack_00000030;
  long in_stack_00000090;
  undefined8 in_stack_00000098;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000b0);
  *in_stack_00000008 = 0x8000000000000000;
  in_stack_00000008[1] = uVar1;
  if (unaff_x25 != 0) {
    _free();
  }
  if (in_stack_00000090 != 0) {
    _free(in_stack_00000098);
  }
  FUN_100d34830(&stack0x00000050);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  if ((in_stack_00000018._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000010);
  }
  return;
}

