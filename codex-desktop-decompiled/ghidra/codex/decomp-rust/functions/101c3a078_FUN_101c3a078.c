
void FUN_101c3a078(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long unaff_x22;
  ulong unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  ulong in_stack_00000058;
  char in_stack_00000060;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x90);
  *unaff_x19 = 0x11;
  unaff_x19[1] = uVar1;
  if ((unaff_x27 != -0x8000000000000000) && (unaff_x27 != 0)) {
    _free(in_stack_00000030);
  }
  if ((in_stack_00000058 != 0x8000000000000001) && ((in_stack_00000058 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000028);
  }
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  FUN_102033488(unaff_x22 + 0x20);
  if (in_stack_00000060 != '\x16') {
    FUN_1020378e0(&stack0x00000060);
  }
  return;
}

