
void FUN_101c87fa0(void)

{
  undefined8 uVar1;
  long unaff_x19;
  uint unaff_w24;
  undefined8 *unaff_x28;
  char in_stack_00000030;

  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,&stack0x00000470);
  *unaff_x28 = 0x8000000000000000;
  unaff_x28[1] = uVar1;
  FUN_102033488(unaff_x19 + 0x20);
  if (in_stack_00000030 != '\x16') {
    FUN_1020378e0(&stack0x00000030);
  }
  if ((unaff_w24 & 0x1e) != 0x14) {
    FUN_1020378e0();
  }
  return;
}
