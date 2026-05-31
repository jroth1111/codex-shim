
void FUN_10043efc4(void)

{
  undefined8 uVar1;
  long unaff_x23;
  long unaff_x24;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  char in_stack_00000030;
  ulong in_stack_00000258;
  undefined8 in_stack_00000260;
  long in_stack_00000270;
  undefined8 in_stack_00000278;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -200);
  *in_stack_00000008 = 0x800000000000006e;
  in_stack_00000008[1] = uVar1;
  if ((in_stack_00000258 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000260);
  }
  if ((in_stack_00000270 != -0x8000000000000000) && (in_stack_00000270 != 0)) {
    _free(in_stack_00000278);
  }
  if (unaff_x24 != 0) {
    _free();
  }
  if ((-0x7fffffffffffffff < unaff_x23) && (unaff_x23 != 0)) {
    _free(in_stack_00000010);
  }
  FUN_100d34830(&stack0x00000050);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  return;
}

