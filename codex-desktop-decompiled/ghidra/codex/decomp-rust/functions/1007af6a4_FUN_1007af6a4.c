
/* WARNING: Removing unreachable block (ram,0x0001007af61c) */

void FUN_1007af6a4(void)

{
  undefined8 uVar1;
  uint unaff_w19;
  undefined8 *unaff_x20;
  long unaff_x21;
  ulong unaff_x23;
  ulong unaff_x24;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000048;
  long in_stack_00000058;
  char in_stack_00000060;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xc0);
  *unaff_x20 = 4;
  unaff_x20[1] = uVar1;
  if (in_stack_00000058 != 0) {
    _free(in_stack_00000030);
  }
  if (unaff_x21 != 4) {
    FUN_100e0c988(unaff_x29 + -0xf8);
  }
  if (((unaff_x24 & 0x7fffffffffffffff) != 0) && ((unaff_x23 & 1) != 0)) {
    _free(in_stack_00000028);
  }
  FUN_100d34830(&stack0x00000080);
  if (in_stack_00000060 != '\x16') {
    FUN_100e077ec(&stack0x00000060);
  }
  if ((unaff_w19 & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000048);
  }
  return;
}

