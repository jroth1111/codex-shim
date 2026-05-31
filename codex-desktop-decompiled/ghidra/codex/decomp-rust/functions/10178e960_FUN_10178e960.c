
void FUN_10178e960(void)

{
  undefined8 uVar1;
  ulong unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  char in_stack_00000140;
  
  uVar1 = FUN_108880790(s_duplicate_field_____108ac2973,&stack0x000000b0);
  *unaff_x28 = 0x11;
  unaff_x28[1] = uVar1;
  if ((unaff_x22 & 6) != 4) {
    FUN_1017a6e58(&stack0x000001d0);
  }
  if ((-0x7fffffffffffffff < unaff_x24) && (unaff_x24 != 0)) {
    _free(in_stack_00000050);
  }
  if ((-0x7fffffffffffffff < unaff_x23) && (unaff_x23 != 0)) {
    _free(in_stack_00000058);
  }
  FUN_1017a1d58(&stack0x00000160);
  if (in_stack_00000140 != '\x16') {
    func_0x0001017a6a48(&stack0x00000140);
  }
  return;
}

