
void FUN_1004e9328(void)

{
  undefined8 uVar1;
  long unaff_x22;
  ulong unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  undefined8 *in_stack_00000000;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000048;
  undefined8 in_stack_00000148;
  long in_stack_00000158;
  undefined8 in_stack_00000160;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000050);
  *in_stack_00000000 = 0x8000000000000000;
  in_stack_00000000[1] = uVar1;
  if ((unaff_x22 != unaff_x25) && (unaff_x22 != -0x7fffffffffffffff)) {
    if ((unaff_x22 != -0x8000000000000000) && (unaff_x22 != 0)) {
      _free(in_stack_00000148);
    }
    if ((in_stack_00000158 != -0x8000000000000000) && (in_stack_00000158 != 0)) {
      _free(in_stack_00000160);
    }
  }
  if (1 < in_stack_00000048 + 0x7ffffffffffffffbU) {
    FUN_100de6690(&stack0x000000f8);
  }
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000018);
  }
  if ((unaff_x24 != 0x8000000000000001) && ((unaff_x24 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000020);
  }
  return;
}

