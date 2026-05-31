
void FUN_101c705b0(void)

{
  undefined8 uVar1;
  ulong unaff_x28;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  ulong in_stack_00000048;
  char in_stack_00000050;
  long in_stack_00000190;
  
  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,&stack0x00000300);
  *in_stack_00000008 = 0x11;
  in_stack_00000008[1] = uVar1;
  if (in_stack_00000190 != 0x11) {
    FUN_102036bf0(&stack0x00000190);
  }
  if ((in_stack_00000048 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  FUN_102033488(&stack0x00000070);
  if (in_stack_00000050 != '\x16') {
    FUN_1020378e0(&stack0x00000050);
  }
  if ((in_stack_00000010._4_4_ & 0x1e) != 0x14) {
    FUN_1020378e0(in_stack_00000018);
  }
  return;
}

