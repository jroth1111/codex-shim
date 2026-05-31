
void FUN_10145a6d8(void)

{
  long unaff_x19;
  long unaff_x23;
  undefined8 *unaff_x26;
  long unaff_x29;
  undefined8 uVar1;
  long in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  
  in_stack_00000118 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000110);
  in_stack_00000110 = -0x7fffffffffffffff;
  FUN_100d34830(unaff_x19 + 0x20);
  if (*(char *)(unaff_x29 + -0xb0) != '\x16') {
    FUN_100e077ec(unaff_x29 + -0xb0);
  }
  if (in_stack_00000110 == -0x7fffffffffffffff) {
    *unaff_x26 = 0x8000000000000002;
    unaff_x26[1] = in_stack_00000118;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x23 + 0x80);
    unaff_x26[1] = *(undefined8 *)(unaff_x23 + 0x88);
    *unaff_x26 = uVar1;
    unaff_x26[2] = in_stack_00000120;
  }
  return;
}

