
void FUN_1007972d4(void)

{
  ulong uVar1;
  ulong *unaff_x19;
  ulong unaff_x22;
  uint unaff_w25;
  long unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  long in_stack_00000078;
  ulong in_stack_00000080;
  ulong in_stack_00000088;
  char in_stack_00000090;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xb0);
  *unaff_x19 = unaff_x22;
  unaff_x19[1] = uVar1;
  if ((-0x7fffffffffffffff < in_stack_00000078) && (in_stack_00000078 != 0)) {
    _free(in_stack_00000030);
  }
  if (-0x7fffffffffffffff < unaff_x26) {
    FUN_100e79780(unaff_x29 + -0xd8);
  }
  if ((in_stack_00000080 != 0x8000000000000001) && ((in_stack_00000080 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000028);
  }
  if ((in_stack_00000088 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000050);
  }
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  FUN_100d34830(&stack0x000000b0);
  if (in_stack_00000090 != '\x16') {
    FUN_100e077ec(&stack0x00000090);
  }
  if ((unaff_w25 & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000060);
  }
  return;
}

