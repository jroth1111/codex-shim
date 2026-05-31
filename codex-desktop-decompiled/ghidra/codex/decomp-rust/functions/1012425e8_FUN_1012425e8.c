
void FUN_1012425e8(void)

{
  uint uVar1;
  undefined8 uVar2;
  uint unaff_w19;
  undefined8 *in_stack_000000b8;
  long in_stack_000001f0;
  long in_stack_00000208;
  long in_stack_00000210;
  
  uVar2 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000e0);
  *in_stack_000000b8 = 0x8000000000000001;
  in_stack_000000b8[1] = uVar2;
  FUN_100d5c778(&stack0x00000238);
  uVar1 = unaff_w19 ^ 1;
  if (in_stack_000001f0 == -0x7ffffffffffffffe) {
    uVar1 = 1;
  }
  if ((((uVar1 & 1) == 0) && (in_stack_000001f0 != -0x7fffffffffffffff)) &&
     (in_stack_000001f0 != -0x8000000000000000)) {
    if ((in_stack_00000210 != 0) && (in_stack_00000210 * 9 != -0x11)) {
      _free(in_stack_00000208 + in_stack_00000210 * -8 + -8);
    }
    func_0x000100cd7284(&stack0x000001f0);
  }
  return;
}

