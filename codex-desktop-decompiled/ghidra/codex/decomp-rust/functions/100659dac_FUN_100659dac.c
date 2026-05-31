
void FUN_100659dac(void)

{
  undefined8 uVar1;
  long unaff_x23;
  long unaff_x24;
  long unaff_x27;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  ulong in_stack_00000020;
  long in_stack_00000040;
  long in_stack_00000168;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000208);
  *in_stack_00000010 = 2;
  in_stack_00000010[1] = uVar1;
  if ((unaff_x27 != -0x8000000000000000) && (unaff_x27 != 0)) {
    _free();
    unaff_x24 = in_stack_00000168;
  }
  if (unaff_x24 != 2) {
    FUN_100e4623c(&stack0x00000168);
  }
  FUN_100de8910(unaff_x23 + 0x48);
  if (in_stack_00000040 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x00000040);
  }
  if (((long)in_stack_00000020 < 0) &&
     ((in_stack_00000020 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    FUN_100de6690(in_stack_00000018);
  }
  return;
}

