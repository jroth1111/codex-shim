
void FUN_10142f120(void)

{
  long unaff_x19;
  uint unaff_w22;
  ulong unaff_x23;
  long *unaff_x24;
  long unaff_x26;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  char in_stack_00000070;
  
  in_stack_00000048 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000040);
  in_stack_00000040 = -0x8000000000000000;
  if ((-0x7fffffffffffffff < unaff_x26) && (unaff_x26 != 0)) {
    _free(in_stack_00000020);
  }
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  FUN_100d34830(unaff_x19 + 0x20);
  if (in_stack_00000070 != '\x16') {
    FUN_100e077ec(&stack0x00000070);
  }
  if ((unaff_w22 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  if (in_stack_00000040 == -0x8000000000000000) {
    *unaff_x24 = -0x7fffffffffffffff;
    unaff_x24[1] = in_stack_00000048;
  }
  else {
    unaff_x24[1] = in_stack_00000048;
    *unaff_x24 = in_stack_00000040;
    unaff_x24[3] = in_stack_00000058;
    unaff_x24[2] = in_stack_00000050;
    unaff_x24[5] = in_stack_00000068;
    unaff_x24[4] = in_stack_00000060;
  }
  return;
}

