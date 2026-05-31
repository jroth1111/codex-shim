
void FUN_10066a3e4(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x25;
  long unaff_x29;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  ulong in_stack_00000068;
  long in_stack_00000070;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xa8);
  *in_stack_00000020 = 0x8000000000000000;
  in_stack_00000020[1] = uVar1;
  if ((-0x7fffffffffffffff < unaff_x22) && (unaff_x22 != 0)) {
    _free(in_stack_00000038);
  }
  if ((-0x7fffffffffffffff < unaff_x25) && (unaff_x25 != 0)) {
    _free(in_stack_00000040);
  }
  if (unaff_x23 != -0x8000000000000000) {
    lVar2 = unaff_x20 + 1;
    while (lVar2 = lVar2 + -1, lVar2 != 0) {
      FUN_100e4affc();
    }
    if (unaff_x23 != 0) {
      _free();
    }
  }
  FUN_100de8910(unaff_x21 + 0x48);
  if (in_stack_00000070 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x00000070);
  }
  if (((long)in_stack_00000068 < 0) &&
     ((in_stack_00000068 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    FUN_100de6690();
  }
  return;
}

