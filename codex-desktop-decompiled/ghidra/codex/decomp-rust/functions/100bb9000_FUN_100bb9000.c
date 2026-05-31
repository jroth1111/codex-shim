
void FUN_100bb9000(void)

{
  undefined8 uVar1;
  long unaff_x19;
  uint unaff_w26;
  undefined2 *unaff_x27;
  char in_stack_00000030;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000078);
  *(undefined8 *)(unaff_x27 + 4) = uVar1;
  *unaff_x27 = 1;
  FUN_100d34830(unaff_x19 + 0x20);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  if ((unaff_w26 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

