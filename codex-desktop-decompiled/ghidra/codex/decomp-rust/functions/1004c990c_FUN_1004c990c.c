
void FUN_1004c990c(void)

{
  undefined8 uVar1;
  long in_x10;
  ulong unaff_x21;
  ulong unaff_x25;
  long unaff_x29;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 *in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000088;
  char in_stack_000000a0;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x88);
  *in_stack_00000058 = 0x8000000000000000;
  in_stack_00000058[1] = uVar1;
  if ((unaff_x21 != 0x8000000000000001) && ((unaff_x21 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000040);
  }
  if ((-0x7fffffffffffffff < in_x10) && (in_x10 != 0)) {
    _free(in_stack_00000048);
  }
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000068);
  }
  FUN_100d34830(&stack0x000000c0);
  if (in_stack_000000a0 != '\x16') {
    FUN_100e077ec(&stack0x000000a0);
  }
  if ((in_stack_00000060._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000088);
  }
  return;
}

