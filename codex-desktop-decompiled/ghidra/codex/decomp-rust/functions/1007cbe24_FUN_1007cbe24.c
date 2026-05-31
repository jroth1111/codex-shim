
void FUN_1007cbe24(void)

{
  ulong uVar1;
  long unaff_x22;
  ulong *unaff_x23;
  ulong unaff_x27;
  long unaff_x28;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  char in_stack_00000050;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000098);
  *unaff_x23 = unaff_x27;
  unaff_x23[1] = uVar1;
  if ((unaff_x28 != -0x8000000000000000) && (unaff_x28 != 0)) {
    _free(in_stack_00000030);
  }
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_100d34830(unaff_x22 + 0x20);
  if (in_stack_00000050 != '\x16') {
    FUN_100e077ec(&stack0x00000050);
  }
  if ((in_stack_00000040._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

