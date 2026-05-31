
/* WARNING: Removing unreachable block (ram,0x00010143b1dc) */

void FUN_10143b17c(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x26;
  uint unaff_w28;
  long unaff_x29;
  char in_stack_00000070;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xb0);
  FUN_100d34830(unaff_x19 + 0x20);
  if (in_stack_00000070 != '\x16') {
    FUN_100e077ec(&stack0x00000070);
  }
  if ((unaff_w28 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  *unaff_x26 = 3;
  unaff_x26[1] = uVar1;
  return;
}

