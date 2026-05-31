
void FUN_1012a58ac(void)

{
  undefined8 uVar1;
  long unaff_x19;
  ulong unaff_x22;
  ulong unaff_x25;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000100);
  *unaff_x28 = 0x800000000000000c;
  unaff_x28[1] = uVar1;
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000020);
  }
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  FUN_100d34830(unaff_x19 + 0x20);
  if (*(char *)(unaff_x29 + -0xb0) != '\x16') {
    FUN_100e077ec(unaff_x29 + -0xb0);
  }
  return;
}

