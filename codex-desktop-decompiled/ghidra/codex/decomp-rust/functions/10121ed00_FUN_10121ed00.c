
void FUN_10121ed00(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x25;
  long unaff_x26;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000038;
  long in_stack_00000050;
  char in_stack_00000060;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x90);
  *unaff_x25 = 0x8000000000000001;
  unaff_x25[1] = uVar1;
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if ((-0x7fffffffffffffff < in_stack_00000050) && (in_stack_00000050 != 0)) {
    _free();
  }
  FUN_100d34830(unaff_x26 + 0x20);
  if (in_stack_00000060 != '\x16') {
    FUN_100e077ec(&stack0x00000060);
  }
  if ((in_stack_00000010._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000018);
  }
  return;
}

