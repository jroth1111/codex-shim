
void FUN_100665d50(void)

{
  undefined8 uVar1;
  long unaff_x27;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 *in_stack_00000020;
  long in_stack_00000030;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000001e0);
  *in_stack_00000020 = 2;
  in_stack_00000020[1] = uVar1;
  FUN_100e4623c(&stack0x00000140);
  FUN_100de8910(unaff_x27 + 0x48);
  if (in_stack_00000030 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x00000030);
  }
  if (((long)in_stack_00000018 < 0) &&
     ((in_stack_00000018 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    FUN_100de6690(in_stack_00000010);
  }
  return;
}

