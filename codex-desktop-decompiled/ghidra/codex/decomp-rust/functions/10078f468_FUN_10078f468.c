
void FUN_10078f468(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x24;
  undefined8 *unaff_x26;
  uint unaff_w28;
  char in_stack_00000030;
  long in_stack_00000090;
  undefined8 in_stack_00000098;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x000000b0);
  *unaff_x26 = 0x8000000000000000;
  unaff_x26[1] = uVar1;
  if (unaff_x24 != -0x8000000000000000) {
    if (unaff_x24 != 0) {
      _free();
    }
    if ((in_stack_00000090 != -0x8000000000000000) && (in_stack_00000090 != 0)) {
      _free(in_stack_00000098);
    }
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

