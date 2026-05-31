
void FUN_101c5bb90(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x24;
  ulong unaff_x28;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  uint in_stack_00000048;
  char in_stack_00000060;
  
  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,&stack0x000000d0);
  *unaff_x20 = 2;
  unaff_x20[1] = uVar1;
  if ((-0x7fffffffffffffff < unaff_x21) && (unaff_x21 != 0)) {
    _free(in_stack_00000038);
  }
  if ((-0x7fffffffffffffff < unaff_x24) && (unaff_x24 != 0)) {
    _free(in_stack_00000030);
  }
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  FUN_102033488(&stack0x00000080);
  if (in_stack_00000060 != '\x16') {
    FUN_1020378e0(&stack0x00000060);
  }
  if ((in_stack_00000048 & 0x1e) != 0x14) {
    FUN_1020378e0();
  }
  return;
}

