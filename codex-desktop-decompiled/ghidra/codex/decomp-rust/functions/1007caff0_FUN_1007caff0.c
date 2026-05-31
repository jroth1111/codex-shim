
void FUN_1007caff0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x23;
  undefined8 in_stack_00000018;
  char in_stack_00000040;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000298);
  *unaff_x23 = 0x8000000000000000;
  unaff_x23[1] = uVar1;
  FUN_100d34830(&stack0x00000060);
  if (in_stack_00000040 != '\x16') {
    FUN_100e077ec(&stack0x00000040);
  }
  if ((in_stack_00000018._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

