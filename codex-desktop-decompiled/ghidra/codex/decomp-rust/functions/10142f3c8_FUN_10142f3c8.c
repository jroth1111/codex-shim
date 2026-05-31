
void FUN_10142f3c8(void)

{
  ulong unaff_x23;
  ulong unaff_x26;
  long *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  char in_stack_00000070;
  
  in_stack_00000048 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000040);
  in_stack_00000040 = -0x8000000000000000;
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000020);
  }
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  FUN_100d34830(&stack0x00000090);
  if (in_stack_00000070 != '\x16') {
    FUN_100e077ec(&stack0x00000070);
  }
  if ((in_stack_00000010._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000018);
  }
  if (in_stack_00000040 == -0x8000000000000000) {
    *in_stack_00000008 = -0x7fffffffffffffff;
    in_stack_00000008[1] = in_stack_00000048;
  }
  else {
    in_stack_00000008[1] = in_stack_00000048;
    *in_stack_00000008 = in_stack_00000040;
    in_stack_00000008[3] = in_stack_00000058;
    in_stack_00000008[2] = in_stack_00000050;
    in_stack_00000008[5] = in_stack_00000068;
    in_stack_00000008[4] = in_stack_00000060;
  }
  return;
}

