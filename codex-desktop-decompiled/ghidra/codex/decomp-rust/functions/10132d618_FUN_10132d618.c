
void FUN_10132d618(void)

{
  undefined8 uVar1;
  ulong unaff_x22;
  ulong unaff_x27;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000048;
  char in_stack_00000050;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000170);
  *in_stack_00000030 = 0x8000000000000000;
  in_stack_00000030[1] = uVar1;
  if ((in_stack_00000048 != -0x7ffffffffffffffa) && (in_stack_00000048 != -0x7ffffffffffffffb)) {
    FUN_100de6690(&stack0x00000120);
  }
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000018);
  }
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  FUN_100d34830(&stack0x00000070);
  if (in_stack_00000050 != '\x16') {
    FUN_100e077ec(&stack0x00000050);
  }
  if ((in_stack_00000038._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000000);
  }
  return;
}

