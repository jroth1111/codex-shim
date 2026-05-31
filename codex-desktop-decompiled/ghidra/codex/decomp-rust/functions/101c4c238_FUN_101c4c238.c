
void FUN_101c4c238(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  ulong unaff_x22;
  uint unaff_w24;
  ulong unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000038;
  char in_stack_00000040;
  
  uVar2 = FUN_1088dc508(s_missing_field_____108ac28f7,&stack0x000001e0);
  *unaff_x19 = 0x11;
  unaff_x19[1] = uVar2;
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  if ((unaff_x20 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000020);
  }
  if (in_stack_00000038 != 2) {
    FUN_1020394f0(&stack0x00000158);
  }
  if (((unaff_x27 != 0x8000000000000001) && ((unaff_x22 & 1) != 0)) &&
     ((unaff_x27 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000028);
  }
  uVar1 = 0;
  if (unaff_x25 != 0x8000000000000001) {
    uVar1 = unaff_w24;
  }
  if (((uVar1 & 1) != 0) && ((unaff_x25 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000020);
  }
  FUN_102033488(&stack0x00000060);
  if (in_stack_00000040 != '\x16') {
    FUN_1020378e0(&stack0x00000040);
  }
  return;
}

