
void FUN_101250458(void)

{
  undefined8 uVar1;
  uint unaff_w19;
  long unaff_x20;
  undefined8 *unaff_x25;
  long unaff_x29;
  char in_stack_00000030;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x78);
  *unaff_x25 = 0x8000000000000000;
  unaff_x25[1] = uVar1;
  FUN_100d34830(unaff_x20 + 0x20);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  if ((unaff_w19 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

