
void FUN_10066dff0(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 *in_stack_00000020;
  long in_stack_00000030;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xa0);
  *in_stack_00000020 = 0x8000000000000000;
  in_stack_00000020[1] = uVar1;
  for (; unaff_x19 != 0; unaff_x19 = unaff_x19 + -1) {
    FUN_100e54d80(unaff_x21);
    unaff_x21 = unaff_x21 + 0x48;
  }
  if (unaff_x22 != 0) {
    _free();
  }
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

