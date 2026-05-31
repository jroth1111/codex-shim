
void FUN_101caab10(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x21;
  long unaff_x25;
  ulong unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  ulong in_stack_00000048;
  ulong in_stack_00000050;
  ulong in_stack_00000058;
  long in_stack_00000070;

  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0xb0);
  *unaff_x21 = 0x8000000000000000;
  unaff_x21[1] = uVar1;
  if ((in_stack_00000048 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  if ((in_stack_00000058 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  FUN_1020353a0(unaff_x25 + 0x48);
  if (in_stack_00000070 != -0x7ffffffffffffffb) {
    func_0x00010203527c(&stack0x00000070);
  }
  if (((long)in_stack_00000050 < 0) &&
     ((in_stack_00000050 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    func_0x00010203527c();
  }
  return;
}
