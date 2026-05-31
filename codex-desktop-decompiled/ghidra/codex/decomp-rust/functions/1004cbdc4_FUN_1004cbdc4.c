
void FUN_1004cbdc4(void)

{
  undefined8 uVar1;
  long unaff_x21;
  long unaff_x29;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  ulong in_stack_00000088;
  char in_stack_00000090;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xc0);
  *in_stack_00000028 = 0x8000000000000000;
  in_stack_00000028[1] = uVar1;
  FUN_100d1c670(unaff_x29 + -0xf8);
  if (unaff_x21 != -0x8000000000000000) {
    FUN_100e6ca64(&stack0x00000160);
  }
  if ((in_stack_00000088 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  FUN_100d34830(&stack0x000000b0);
  if (in_stack_00000090 != '\x16') {
    FUN_100e077ec(&stack0x00000090);
  }
  if ((in_stack_00000050._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000058);
  }
  return;
}

