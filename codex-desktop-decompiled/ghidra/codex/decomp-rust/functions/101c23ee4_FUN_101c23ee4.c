
void FUN_101c23ee4(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  uint unaff_w21;
  ulong unaff_x22;
  ulong unaff_x23;
  uint unaff_w24;
  ulong unaff_x25;
  uint unaff_w26;
  ulong unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  ulong in_stack_00000050;
  ulong in_stack_00000058;
  char in_stack_00000060;
  
  uVar2 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x90);
  *unaff_x19 = 0x11;
  unaff_x19[1] = uVar2;
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if ((unaff_x28 != -0x8000000000000000) && (unaff_x28 != 0)) {
    _free(in_stack_00000028);
  }
  if ((in_stack_00000050 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  uVar1 = 0;
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    uVar1 = unaff_w26;
  }
  if ((uVar1 & 1) != 0) {
    _free(in_stack_00000048);
  }
  uVar1 = 0;
  if (in_stack_00000058 != 0x8000000000000001) {
    uVar1 = unaff_w24;
  }
  if (((uVar1 & 1) != 0) && ((in_stack_00000058 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000030);
  }
  uVar1 = 0;
  if (unaff_x25 != 0x8000000000000001) {
    uVar1 = unaff_w21;
  }
  if (((uVar1 & 1) != 0) && ((unaff_x25 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000038);
  }
  FUN_102033488(&stack0x00000080);
  if (in_stack_00000060 != '\x16') {
    FUN_1020378e0(&stack0x00000060);
  }
  return;
}

