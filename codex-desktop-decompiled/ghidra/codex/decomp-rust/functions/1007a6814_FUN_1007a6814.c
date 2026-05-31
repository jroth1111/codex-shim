
/* WARNING: Removing unreachable block (ram,0x0001007a66b8) */
/* WARNING: Removing unreachable block (ram,0x0001007a66c0) */

void FUN_1007a6814(void)

{
  undefined8 uVar1;
  ulong unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  uint unaff_w26;
  long unaff_x27;
  undefined8 in_stack_00000040;
  char in_stack_00000070;
  long in_stack_00000290;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000438);
  *unaff_x20 = 0x8000000000000000;
  unaff_x20[1] = uVar1;
  if (unaff_x27 != 0) {
    _free(in_stack_00000040);
    unaff_x23 = in_stack_00000290;
  }
  if ((unaff_x23 != unaff_x21) && ((unaff_x19 & 1) != 0)) {
    FUN_100df5b9c(&stack0x00000290);
  }
  FUN_100d34830(unaff_x22 + 0x20);
  if (in_stack_00000070 != '\x16') {
    FUN_100e077ec(&stack0x00000070);
  }
  if ((unaff_w26 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

