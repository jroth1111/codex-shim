
/* WARNING: Removing unreachable block (ram,0x000101c684f4) */

void FUN_101c68580(void)

{
  undefined8 uVar1;
  ulong unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  ulong in_stack_00000058;
  char in_stack_00000060;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x88);
  *unaff_x21 = 0x8000000000000000;
  unaff_x21[1] = uVar1;
  if (unaff_x28 != 0) {
    _free(in_stack_00000028);
  }
  if (in_stack_00000050 != -0x8000000000000000) {
    FUN_102030bc4(unaff_x29 + -0xb8);
  }
  if (((in_stack_00000058 & 0x7fffffffffffffff) != 0) && ((unaff_x19 & 1) != 0)) {
    _free(in_stack_00000020);
  }
  FUN_102033488(&stack0x00000080);
  if (in_stack_00000060 != '\x16') {
    FUN_1020378e0(&stack0x00000060);
  }
  if ((in_stack_00000048._4_4_ & 0x1e) != 0x14) {
    FUN_1020378e0();
  }
  return;
}

