
void FUN_100b29b48(void)

{
  uint uVar1;
  undefined8 uVar2;
  uint unaff_w19;
  undefined8 *in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  long in_stack_00000108;
  long in_stack_00000110;
  
  uVar2 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000007b0);
  *in_stack_000000e0 = 0x8000000000000000;
  in_stack_000000e0[1] = uVar2;
  FUN_100d5c778(&stack0x00000138);
  uVar1 = unaff_w19 ^ 1;
  if (in_stack_000000f0 == in_stack_000000e8) {
    uVar1 = 1;
  }
  if ((((uVar1 & 1) == 0) && (in_stack_000000f0 != -0x7fffffffffffffff)) &&
     (in_stack_000000f0 != -0x8000000000000000)) {
    if ((in_stack_00000110 != 0) && (in_stack_00000110 * 9 != -0x11)) {
      _free(in_stack_00000108 + in_stack_00000110 * -8 + -8);
    }
    func_0x000100cd7284(&stack0x000000f0);
  }
  return;
}

