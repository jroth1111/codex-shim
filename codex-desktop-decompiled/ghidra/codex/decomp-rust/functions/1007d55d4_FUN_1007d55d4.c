
void FUN_1007d55d4(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x24;
  undefined8 in_stack_00000018;
  char in_stack_00000030;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x000000b0);
  *unaff_x24 = 0x8000000000000000;
  unaff_x24[1] = uVar1;
  FUN_100d34830(unaff_x19 + 0x20);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  if ((in_stack_00000018._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

