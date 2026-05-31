
void FUN_101784660(void)

{
  undefined8 uVar1;
  long unaff_x23;
  long unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  uVar1 = FUN_108880790(s_duplicate_field_____108ac2973,&stack0x00000110);
  *in_stack_00000020 = 0x8000000000000003;
  in_stack_00000020[1] = uVar1;
  if (unaff_x23 != 0) {
    _free(in_stack_00000018);
  }
  FUN_1017a1d58(unaff_x29 + -0x90);
  if (*(char *)(unaff_x29 + -0xb0) != '\x16') {
    func_0x0001017a6a48(unaff_x29 + -0xb0);
  }
  return;
}

