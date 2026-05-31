
void FUN_101793294(void)

{
  undefined8 uVar1;
  long unaff_x21;
  long unaff_x29;
  undefined8 *in_stack_00000020;
  
  uVar1 = FUN_108880790(s_duplicate_field_____108ac2973,&stack0x00000090);
  *in_stack_00000020 = 4;
  in_stack_00000020[1] = uVar1;
  if ((-0x7fffffffffffffff < unaff_x21) && (unaff_x21 != 0)) {
    _free();
  }
  FUN_1017a1d58(unaff_x29 + -0x90);
  if (*(char *)(unaff_x29 + -0xb0) != '\x16') {
    func_0x0001017a6a48(unaff_x29 + -0xb0);
  }
  return;
}

