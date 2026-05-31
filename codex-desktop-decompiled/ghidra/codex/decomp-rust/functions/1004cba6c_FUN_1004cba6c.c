
/* WARNING: Removing unreachable block (ram,0x0001004cb754) */

void FUN_1004cba6c(void)

{
  undefined8 uVar1;
  ulong unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000088;
  char in_stack_00000090;
  long in_stack_00000160;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x90);
  *unaff_x20 = 0x8000000000000000;
  unaff_x20[1] = uVar1;
  FUN_100e6ca64(unaff_x29 + -0xc0);
  if (in_stack_00000088 != 0) {
    _free(in_stack_00000030);
    unaff_x21 = in_stack_00000160;
  }
  if ((unaff_x21 != -0x8000000000000000) && ((unaff_x19 & 1) != 0)) {
    FUN_100e6ca64(&stack0x00000160);
  }
  FUN_100d34830(&stack0x000000b0);
  if (in_stack_00000090 != '\x16') {
    FUN_100e077ec(&stack0x00000090);
  }
  if ((in_stack_00000050._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000058);
  }
  return;
}

