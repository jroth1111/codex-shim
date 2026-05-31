
void FUN_10060c324(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x29;
  undefined8 in_stack_00000020;
  char in_stack_00000030;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x78);
  *unaff_x20 = 0x8000000000000000;
  unaff_x20[1] = uVar1;
  FUN_100d34830(unaff_x19 + 0x20);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  if ((in_stack_00000020._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

