
void FUN_101458fd4(void)

{
  long unaff_x19;
  uint unaff_w21;
  ulong unaff_x23;
  ulong unaff_x27;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long *in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  char in_stack_00000070;
  
  in_stack_00000048 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000040);
  in_stack_00000040 = -0x8000000000000000;
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  FUN_100d34830(unaff_x19 + 0x20);
  if (in_stack_00000070 != '\x16') {
    FUN_100e077ec(&stack0x00000070);
  }
  if ((unaff_w21 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  if (in_stack_00000040 == -0x8000000000000000) {
    *in_stack_00000038 = -0x7fffffffffffffff;
    in_stack_00000038[1] = in_stack_00000048;
  }
  else {
    in_stack_00000038[1] = in_stack_00000048;
    *in_stack_00000038 = in_stack_00000040;
    in_stack_00000038[3] = in_stack_00000058;
    in_stack_00000038[2] = in_stack_00000050;
    in_stack_00000038[5] = in_stack_00000068;
    in_stack_00000038[4] = in_stack_00000060;
  }
  return;
}

