
/* WARNING: Removing unreachable block (ram,0x0001004cd8a4) */
/* WARNING: Removing unreachable block (ram,0x0001004cd8b0) */
/* WARNING: Removing unreachable block (ram,0x0001004cd8bc) */
/* WARNING: Removing unreachable block (ram,0x0001004cd84c) */

void FUN_1004cd8f0(void)

{
  undefined8 uVar1;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x25;
  undefined8 *in_stack_00000000;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  char in_stack_00000040;
  long in_stack_00000128;
  long in_stack_00000130;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000160);
  *in_stack_00000000 = 0x8000000000000000;
  in_stack_00000000[1] = uVar1;
  if (unaff_x25 != 0) {
    _free(in_stack_00000028);
  }
  if ((unaff_x21 != -0x7fffffffffffffff) && (unaff_x21 != -0x8000000000000000)) {
    if ((in_stack_00000130 != 0) && (in_stack_00000130 * 9 != -0x11)) {
      _free(in_stack_00000128 + in_stack_00000130 * -8 + -8);
    }
    func_0x000100cd7284(&stack0x00000110);
  }
  FUN_100d34830(&stack0x00000060);
  if (in_stack_00000040 != '\x16') {
    FUN_100e077ec(&stack0x00000040);
  }
  if ((unaff_w20 & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000030);
  }
  return;
}

