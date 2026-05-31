
void FUN_10178a344(void)

{
  undefined8 uVar1;
  long unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  char in_stack_00000140;
  
  uVar1 = FUN_108880790(s_missing_field_____108ac28f7,&stack0x000000b0);
  *unaff_x28 = 0x11;
  unaff_x28[1] = uVar1;
  if ((unaff_x25 != -0x8000000000000000) && (unaff_x25 != 0)) {
    _free(in_stack_00000040);
  }
  if ((unaff_x23 != 0x8000000000000001) && ((unaff_x23 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000038);
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000050);
  }
  FUN_1017a1d58(unaff_x22 + 0x20);
  if (in_stack_00000140 != '\x16') {
    func_0x0001017a6a48(&stack0x00000140);
  }
  return;
}

