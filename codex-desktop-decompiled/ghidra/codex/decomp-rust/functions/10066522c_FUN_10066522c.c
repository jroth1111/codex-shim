
void FUN_10066522c(void)

{
  undefined8 uVar1;
  long unaff_x23;
  long unaff_x26;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  long in_stack_00000020;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000090);
  *in_stack_00000008 = 0x8000000000000000;
  in_stack_00000008[1] = uVar1;
  if (unaff_x26 != 0) {
    _free();
  }
  FUN_100de8910(unaff_x23 + 0x48);
  if (in_stack_00000020 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x00000020);
  }
  if (((long)in_stack_00000018 < 0) &&
     ((in_stack_00000018 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    FUN_100de6690(in_stack_00000010);
  }
  return;
}

