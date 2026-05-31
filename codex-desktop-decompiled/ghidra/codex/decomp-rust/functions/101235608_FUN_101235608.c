
void FUN_101235608(void)

{
  undefined8 uVar1;
  ulong unaff_x21;
  long unaff_x29;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 *in_stack_00000090;
  char in_stack_000000a0;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
  *in_stack_00000090 = 2;
  in_stack_00000090[1] = uVar1;
  if ((unaff_x21 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  FUN_100d34830(&stack0x000000c0);
  if (in_stack_000000a0 != '\x16') {
    FUN_100e077ec(&stack0x000000a0);
  }
  if ((in_stack_00000050._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

