
void FUN_101c3d3ac(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  uint unaff_w24;
  ulong unaff_x27;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  uint in_stack_00000040;
  undefined8 in_stack_00000048;
  uint in_stack_00000050;
  long in_stack_00000058;
  ulong in_stack_00000060;
  ulong in_stack_00000068;
  char in_stack_00000070;
  
  uVar2 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0xd0);
  *unaff_x19 = 0x11;
  unaff_x19[1] = uVar2;
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000020);
  }
  if ((unaff_x20 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if (in_stack_00000058 != -0x7ffffffffffffffb) {
    func_0x00010203527c(&stack0x00000188);
  }
  if (((unaff_x27 & 0x7fffffffffffffff) != 0) && ((unaff_x21 & 1) != 0)) {
    _free(in_stack_00000048);
  }
  uVar1 = 0;
  if (unaff_x28 != 0x8000000000000001) {
    uVar1 = in_stack_00000040;
  }
  if (((uVar1 & 1) != 0) && ((unaff_x28 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000020);
  }
  uVar1 = 0;
  if (in_stack_00000060 != 0x8000000000000001) {
    uVar1 = unaff_w24;
  }
  if (((uVar1 & 1) != 0) && ((in_stack_00000060 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000028);
  }
  uVar1 = 0;
  if (in_stack_00000068 != 0x8000000000000001) {
    uVar1 = in_stack_00000050;
  }
  if (((uVar1 & 1) != 0) && ((in_stack_00000068 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000038);
  }
  FUN_102033488(&stack0x00000090);
  if (in_stack_00000070 != '\x16') {
    FUN_1020378e0(&stack0x00000070);
  }
  return;
}

