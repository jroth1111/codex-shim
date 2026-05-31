
void FUN_1007aca44(void)

{
  undefined8 uVar1;
  long unaff_x20;
  ulong unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  uint in_stack_00000048;
  char in_stack_00000050;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x100);
  *unaff_x27 = 0x8000000000000000;
  unaff_x27[1] = uVar1;
  if (-0x7fffffffffffffff < unaff_x28) {
    FUN_100e24ac8(&stack0x000000f0);
  }
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  FUN_100d34830(unaff_x20 + 0x20);
  if (in_stack_00000050 != '\x16') {
    FUN_100e077ec(&stack0x00000050);
  }
  if ((in_stack_00000048 & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000038);
  }
  return;
}

