
void FUN_101c5e6b4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  ulong unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000058;
  char in_stack_00000070;
  long in_stack_000001e8;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,&stack0x000002e0);
  *unaff_x19 = 0x12;
  unaff_x19[1] = uVar1;
  if (((unaff_x24 & 0x7fffffffffffffff) != 0) && ((unaff_x20 & 1) != 0)) {
    _free(in_stack_00000038);
  }
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if (in_stack_000001e8 != 0x12) {
    FUN_10203bcb8(&stack0x000001e8);
  }
  FUN_102033488(unaff_x25 + 0x20);
  if (in_stack_00000070 != '\x16') {
    FUN_1020378e0(&stack0x00000070);
  }
  if ((in_stack_00000058._4_4_ & 0x1e) != 0x14) {
    FUN_1020378e0();
  }
  return;
}

