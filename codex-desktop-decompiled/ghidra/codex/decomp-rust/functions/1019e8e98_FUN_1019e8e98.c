
void FUN_1019e8e98(void)

{
  undefined8 uVar1;
  ulong unaff_x21;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  
  uVar1 = FUN_1088bbbb8(s_duplicate_field_____108ac2973,&stack0x00000090);
  *in_stack_00000010 = 0x8000000000000005;
  in_stack_00000010[1] = uVar1;
  if ((unaff_x21 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_101942570(unaff_x29 + -0x90);
  if (*(char *)(unaff_x29 + -0xb0) != '\x16') {
    func_0x0001019551a0(unaff_x29 + -0xb0);
  }
  return;
}

