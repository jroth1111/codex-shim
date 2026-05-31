
void FUN_1019e8a1c(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x22;
  ulong unaff_x23;
  undefined8 *unaff_x25;
  long unaff_x29;
  undefined8 in_stack_00000040;
  
  uVar1 = FUN_1088bbbb8(s_missing_field_____108ac28f7,&stack0x00000090);
  *unaff_x25 = 0x8000000000000005;
  unaff_x25[1] = uVar1;
  if ((-0x7fffffffffffffff < unaff_x22) && (unaff_x22 != 0)) {
    _free();
  }
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  FUN_101942570(unaff_x19 + 0x20);
  if (*(char *)(unaff_x29 + -0xb0) != '\x16') {
    func_0x0001019551a0(unaff_x29 + -0xb0);
  }
  return;
}

