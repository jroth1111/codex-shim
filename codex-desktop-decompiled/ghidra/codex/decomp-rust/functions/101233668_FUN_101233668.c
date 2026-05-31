
void FUN_101233668(void)

{
  uint uVar1;
  undefined8 uVar2;
  uint unaff_w25;
  undefined8 *in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000120;
  long in_stack_00000138;
  long in_stack_00000140;
  
  uVar2 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000070);
  *in_stack_00000040 = 0x8000000000000001;
  in_stack_00000040[1] = uVar2;
  FUN_100d5c778(&stack0x00000168);
  uVar1 = unaff_w25 ^ 1;
  if (in_stack_00000120 == in_stack_00000048) {
    uVar1 = 1;
  }
  if ((((uVar1 & 1) == 0) && (in_stack_00000120 != -0x7fffffffffffffff)) &&
     (in_stack_00000120 != -0x8000000000000000)) {
    if ((in_stack_00000140 != 0) && (in_stack_00000140 * 9 != -0x11)) {
      _free(in_stack_00000138 + in_stack_00000140 * -8 + -8);
    }
    func_0x000100cd7284(&stack0x00000120);
  }
  return;
}

