
void FUN_100ad42fc(void)

{
  undefined8 uVar1;
  undefined2 *unaff_x19;
  long unaff_x22;
  uint unaff_w23;
  long unaff_x29;
  char in_stack_00000060;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *(undefined8 *)(unaff_x19 + 4) = uVar1;
  *unaff_x19 = 1;
  FUN_100d34830(unaff_x22 + 0x20);
  if (in_stack_00000060 != '\x16') {
    FUN_100e077ec(&stack0x00000060);
  }
  if ((unaff_w23 != 0x16) && ((unaff_w23 & 0x1e) != 0x14)) {
    FUN_100e077ec(&stack0x00000010);
  }
  return;
}

