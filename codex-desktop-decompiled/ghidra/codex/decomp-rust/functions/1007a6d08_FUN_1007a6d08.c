
void FUN_1007a6d08(void)

{
  undefined8 uVar1;
  long unaff_x23;
  ulong unaff_x27;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  char in_stack_00000070;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000438);
  *in_stack_00000028 = 0x8000000000000000;
  in_stack_00000028[1] = uVar1;
  if (unaff_x23 != -0x7ffffffffffffff5) {
    FUN_100df5b9c(&stack0x00000290);
  }
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  FUN_100d34830(&stack0x00000090);
  if (in_stack_00000070 != '\x16') {
    FUN_100e077ec(&stack0x00000070);
  }
  if ((in_stack_00000030._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000038);
  }
  return;
}

