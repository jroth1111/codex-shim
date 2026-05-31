
void FUN_101c7008c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long unaff_x24;
  uint unaff_w27;
  ulong unaff_x28;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  ulong in_stack_00000048;
  char in_stack_00000050;
  long in_stack_00000190;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,&stack0x00000300);
  *unaff_x19 = 0x11;
  unaff_x19[1] = uVar1;
  if (in_stack_00000190 != 0x11) {
    FUN_102036bf0(&stack0x00000190);
  }
  if ((in_stack_00000048 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  FUN_102033488(unaff_x24 + 0x20);
  if (in_stack_00000050 != '\x16') {
    FUN_1020378e0(&stack0x00000050);
  }
  if ((unaff_w27 & 0x1e) != 0x14) {
    FUN_1020378e0();
  }
  return;
}

