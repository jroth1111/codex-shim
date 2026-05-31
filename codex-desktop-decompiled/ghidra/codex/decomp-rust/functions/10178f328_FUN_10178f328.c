
void FUN_10178f328(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  ulong in_stack_00000050;
  ulong in_stack_00000058;
  ulong in_stack_00000060;
  long in_stack_00000068;
  char in_stack_00000140;
  
  uVar1 = FUN_108880790(s_duplicate_field_____108ac2973,&stack0x000000b0);
  *unaff_x28 = 0x11;
  unaff_x28[1] = uVar1;
  if ((in_stack_00000068 != -0x8000000000000000) &&
     (FUN_1017a5c10(in_stack_00000048,in_stack_00000040), in_stack_00000068 != 0)) {
    _free(in_stack_00000048);
  }
  if ((in_stack_00000058 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  if ((in_stack_00000050 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if ((in_stack_00000060 != 0x8000000000000001) && ((in_stack_00000060 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000028);
  }
  FUN_1017a1d58(&stack0x00000160);
  if (in_stack_00000140 != '\x16') {
    func_0x0001017a6a48(&stack0x00000140);
  }
  return;
}

