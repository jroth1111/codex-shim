
void FUN_10178f92c(void)

{
  undefined8 uVar1;
  ulong unaff_x20;
  ulong unaff_x22;
  ulong unaff_x25;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000060;
  ulong in_stack_00000068;
  char in_stack_00000140;
  
  uVar1 = FUN_108880790(s_duplicate_field_____108ac2973,&stack0x000000b0);
  *unaff_x28 = 0x11;
  unaff_x28[1] = uVar1;
  if ((in_stack_00000060 != -0x8000000000000000) && (in_stack_00000060 != 0)) {
    _free(in_stack_00000038);
  }
  if ((in_stack_00000068 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000050);
  }
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000058);
  }
  if ((unaff_x20 != 0x8000000000000001) && ((unaff_x20 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000040);
  }
  if ((unaff_x25 != 0x8000000000000001) && ((unaff_x25 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000048);
  }
  FUN_1017a1d58(&stack0x00000160);
  if (in_stack_00000140 != '\x16') {
    func_0x0001017a6a48(&stack0x00000140);
  }
  return;
}

