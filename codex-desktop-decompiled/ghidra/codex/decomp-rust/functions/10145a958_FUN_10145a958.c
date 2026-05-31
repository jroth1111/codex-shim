
void FUN_10145a958(void)

{
  long unaff_x22;
  long unaff_x23;
  long unaff_x29;
  undefined8 uVar1;
  undefined8 *in_stack_00000020;
  long in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  
  in_stack_00000118 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000110);
  in_stack_00000110 = -0x7fffffffffffffff;
  if (unaff_x22 != 0) {
    _free();
  }
  FUN_100d34830(unaff_x29 + -0x90);
  if (*(char *)(unaff_x29 + -0xb0) != '\x16') {
    FUN_100e077ec(unaff_x29 + -0xb0);
  }
  if (in_stack_00000110 == -0x7fffffffffffffff) {
    *in_stack_00000020 = 0x8000000000000002;
    in_stack_00000020[1] = in_stack_00000118;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x23 + 0x80);
    in_stack_00000020[1] = *(undefined8 *)(unaff_x23 + 0x88);
    *in_stack_00000020 = uVar1;
    in_stack_00000020[2] = in_stack_00000120;
  }
  return;
}

