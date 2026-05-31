
void FUN_1007b8e0c(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x24;
  uint unaff_w28;
  char in_stack_00000030;
  long in_stack_00000140;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x000002b8);
  *unaff_x24 = 0x11;
  unaff_x24[1] = uVar1;
  if (in_stack_00000140 != 0x11) {
    FUN_100e02a24(&stack0x00000140);
  }
  FUN_100d34830(unaff_x19 + 0x20);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  if ((unaff_w28 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

