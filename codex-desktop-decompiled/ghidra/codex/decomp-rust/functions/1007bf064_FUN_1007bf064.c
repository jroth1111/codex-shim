
void FUN_1007bf064(void)

{
  ulong uVar1;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  uint unaff_w27;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  char in_stack_00000080;
  long in_stack_000001b0;
  undefined8 in_stack_000001b8;
  long in_stack_000001c8;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x100);
  *unaff_x19 = unaff_x23;
  unaff_x19[1] = uVar1;
  if ((unaff_x25 != 0x8000000000000001) && ((unaff_x25 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000028);
  }
  if ((-0x7fffffffffffffff < unaff_x24) && (unaff_x24 != 0)) {
    _free(in_stack_00000040);
  }
  if (unaff_x22 != -0x8000000000000000) {
    if (unaff_x22 != 0) {
      _free(in_stack_00000060);
    }
    if (in_stack_000001b0 != 0) {
      _free(in_stack_000001b8);
    }
    if (in_stack_000001c8 != -0x7ffffffffffffffb) {
      FUN_100de6690(&stack0x000001c8);
    }
  }
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000050);
  }
  FUN_100d34830(unaff_x20 + 0x20);
  if (in_stack_00000080 != '\x16') {
    FUN_100e077ec(&stack0x00000080);
  }
  if ((unaff_w27 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

