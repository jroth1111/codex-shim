
void FUN_1007bffec(void)

{
  undefined8 uVar1;
  undefined4 *unaff_x19;
  long unaff_x20;
  uint unaff_w26;
  char in_stack_00000030;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000078);
  *(undefined8 *)(unaff_x19 + 2) = uVar1;
  *unaff_x19 = 1;
  FUN_100d34830(unaff_x20 + 0x20);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  if ((unaff_w26 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

