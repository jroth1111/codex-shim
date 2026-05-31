
void FUN_10125184c(void)

{
  undefined8 uVar1;
  long unaff_x25;
  long unaff_x29;
  undefined8 *in_stack_00000028;
  uint in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  ulong in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  long in_stack_00000088;
  char in_stack_00000090;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
  *in_stack_00000028 = 0x8000000000000000;
  in_stack_00000028[1] = uVar1;
  if (((in_stack_00000078 != -0x7ffffffffffffffe) && (-0x7fffffffffffffff < in_stack_00000078)) &&
     (in_stack_00000078 != 0)) {
    _free(in_stack_00000048);
  }
  if ((-0x7fffffffffffffff < in_stack_00000088) && (in_stack_00000088 != 0)) {
    _free(in_stack_00000040);
  }
  if ((-0x7ffffffffffffffe < in_stack_00000080) && (in_stack_00000080 != 0)) {
    _free(in_stack_00000038);
  }
  if ((in_stack_00000070 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_100d34830(unaff_x25 + 0x20);
  if (in_stack_00000090 != '\x16') {
    FUN_100e077ec(&stack0x00000090);
  }
  if ((in_stack_00000030 & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000050);
  }
  return;
}

