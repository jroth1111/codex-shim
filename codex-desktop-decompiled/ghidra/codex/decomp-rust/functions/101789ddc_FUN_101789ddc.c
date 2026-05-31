
void FUN_101789ddc(void)

{
  undefined8 uVar1;
  long unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000068;
  char in_stack_00000140;
  
  uVar1 = FUN_108880790(s_missing_field_____108ac28f7,&stack0x000000b0);
  *unaff_x28 = 0x11;
  unaff_x28[1] = uVar1;
  if (in_stack_00000068 != 2) {
    FUN_1017a736c(&stack0x000001d0);
  }
  if ((unaff_x22 != 0x8000000000000001) && ((unaff_x22 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000050);
  }
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000058);
  }
  FUN_1017a1d58(unaff_x21 + 0x20);
  if (in_stack_00000140 != '\x16') {
    func_0x0001017a6a48(&stack0x00000140);
  }
  return;
}

