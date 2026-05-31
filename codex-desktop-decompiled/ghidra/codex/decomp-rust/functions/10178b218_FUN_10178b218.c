
void FUN_10178b218(void)

{
  undefined8 uVar1;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x23;
  undefined8 *unaff_x28;
  char in_stack_00000140;
  
  uVar1 = FUN_108880790(s_missing_field_____108ac28f7,&stack0x000000b0);
  *unaff_x28 = 0x11;
  unaff_x28[1] = uVar1;
  if (unaff_x23 != 2) {
    FUN_1017a736c(&stack0x000001d0);
  }
  if ((unaff_x21 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_1017a1d58(unaff_x20 + 0x20);
  if (in_stack_00000140 != '\x16') {
    func_0x0001017a6a48(&stack0x00000140);
  }
  return;
}

