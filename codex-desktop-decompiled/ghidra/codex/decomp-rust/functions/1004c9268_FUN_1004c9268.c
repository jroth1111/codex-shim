
void FUN_1004c9268(void)

{
  ulong uVar1;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x24;
  ulong unaff_x25;
  ulong *unaff_x27;
  uint unaff_w28;
  long unaff_x29;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000088;
  char in_stack_000000a0;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x88);
  *unaff_x27 = unaff_x25;
  unaff_x27[1] = uVar1;
  if ((unaff_x21 != 0x8000000000000001) && ((unaff_x21 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000040);
  }
  if ((-0x7fffffffffffffff < unaff_x20) && (unaff_x20 != 0)) {
    _free(in_stack_00000048);
  }
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000068);
  }
  FUN_100d34830(unaff_x24 + 0x20);
  if (in_stack_000000a0 != '\x16') {
    FUN_100e077ec(&stack0x000000a0);
  }
  if ((unaff_w28 & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000088);
  }
  return;
}

