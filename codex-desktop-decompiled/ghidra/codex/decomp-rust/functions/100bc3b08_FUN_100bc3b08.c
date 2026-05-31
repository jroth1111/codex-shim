
void FUN_100bc3b08(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  long unaff_x26;
  char in_stack_00000270;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000180);
  *unaff_x19 = 0x12;
  unaff_x19[1] = uVar1;
  if ((unaff_x22 != 5) && (unaff_x22 != 4)) {
    FUN_100e0c988(&stack0x00000130);
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_100d34830(unaff_x26 + 0x20);
  if (in_stack_00000270 != '\x16') {
    FUN_100e077ec(&stack0x00000270);
  }
  return;
}

