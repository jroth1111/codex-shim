
void FUN_1007b200c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  uint unaff_w25;
  long unaff_x27;
  undefined8 in_stack_00000050;
  char in_stack_00000080;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000448);
  *unaff_x19 = 0x8000000000000000;
  unaff_x19[1] = uVar1;
  if (unaff_x27 != 0) {
    _free(in_stack_00000050);
  }
  FUN_100d34830(&stack0x000000a0);
  if (in_stack_00000080 != '\x16') {
    FUN_100e077ec(&stack0x00000080);
  }
  if ((unaff_w25 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

