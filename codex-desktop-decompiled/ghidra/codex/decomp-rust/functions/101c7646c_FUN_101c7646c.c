
void FUN_101c7646c(void)

{
  undefined8 uVar1;
  uint unaff_w22;
  long unaff_x23;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000030;
  char in_stack_00000050;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,&stack0x000001f8);
  *in_stack_00000010 = 2;
  in_stack_00000010[1] = uVar1;
  if (unaff_x23 != 0) {
    _free(in_stack_00000030);
  }
  FUN_102033488(&stack0x00000070);
  if (in_stack_00000050 != '\x16') {
    FUN_1020378e0(&stack0x00000050);
  }
  if ((unaff_w22 & 0x1e) != 0x14) {
    FUN_1020378e0();
  }
  return;
}

