
void FUN_100442b34(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  char in_stack_00000060;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x88);
  *unaff_x19 = 0x11;
  unaff_x19[1] = uVar1;
  if ((unaff_x28 != -0x8000000000000000) && (unaff_x28 != 0)) {
    _free(in_stack_00000030);
  }
  if ((unaff_x26 != 0x8000000000000001) && ((unaff_x26 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000028);
  }
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_100d34830(unaff_x24 + 0x20);
  if (in_stack_00000060 != '\x16') {
    FUN_100e077ec(&stack0x00000060);
  }
  return;
}

