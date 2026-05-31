
void FUN_100bd9d30(void)

{
  undefined8 uVar1;
  ulong unaff_x23;
  long unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 *in_stack_00000058;
  ulong in_stack_00000090;
  ulong in_stack_00000098;
  long in_stack_000000a0;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xc0);
  *in_stack_00000058 = 2;
  in_stack_00000058[1] = uVar1;
  if ((in_stack_00000090 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000050);
  }
  FUN_100de8910(unaff_x27 + 0x48);
  if (in_stack_000000a0 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x000000a0);
  }
  if (((long)in_stack_00000098 < 0) &&
     ((in_stack_00000098 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    FUN_100de6690();
  }
  return;
}

