
void FUN_10178f014(void)

{
  undefined8 uVar1;
  ulong unaff_x25;
  ulong unaff_x26;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000068;
  char in_stack_000001d0;
  
  uVar1 = FUN_108880790(s_duplicate_field_____108ac2973,&stack0x00000140);
  *unaff_x28 = 0x11;
  unaff_x28[1] = uVar1;
  if (in_stack_00000068 != 2) {
    FUN_1017a72a4(&stack0x000000b0);
  }
  if ((unaff_x26 != 0x8000000000000001) && ((unaff_x26 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000040);
  }
  if ((unaff_x25 != 0x8000000000000001) && ((unaff_x25 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000048);
  }
  FUN_1017a1d58(&stack0x000001f0);
  if (in_stack_000001d0 != '\x16') {
    func_0x0001017a6a48(&stack0x000001d0);
  }
  return;
}

