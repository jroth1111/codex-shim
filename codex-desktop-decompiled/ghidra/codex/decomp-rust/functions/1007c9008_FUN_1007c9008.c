
void FUN_1007c9008(void)

{
  ulong uVar1;
  ulong unaff_x22;
  long unaff_x24;
  long unaff_x25;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  ulong *in_stack_00000048;
  uint in_stack_00000050;
  char in_stack_00000060;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *in_stack_00000048 = unaff_x28;
  in_stack_00000048[1] = uVar1;
  if ((unaff_x24 != -0x8000000000000000) && (unaff_x24 != 0)) {
    _free(in_stack_00000018);
  }
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  FUN_100d34830(unaff_x25 + 0x20);
  if (in_stack_00000060 != '\x16') {
    FUN_100e077ec(&stack0x00000060);
  }
  if ((in_stack_00000050 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

