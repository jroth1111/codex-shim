
void FUN_1012b15d4(void)

{
  undefined8 uVar1;
  long unaff_x24;
  undefined4 *unaff_x25;
  uint unaff_w26;
  char in_stack_00000020;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000068);
  *(undefined8 *)(unaff_x25 + 2) = uVar1;
  *unaff_x25 = 1;
  FUN_100d34830(unaff_x24 + 0x20);
  if (in_stack_00000020 != '\x16') {
    FUN_100e077ec(&stack0x00000020);
  }
  if ((unaff_w26 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

