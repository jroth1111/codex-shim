
/* WARNING: Removing unreachable block (ram,0x0001004cc88c) */
/* WARNING: Removing unreachable block (ram,0x0001004cc894) */

void FUN_1004cc81c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x23;
  undefined8 *unaff_x24;
  ulong unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  char in_stack_00000080;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *unaff_x24 = unaff_x21;
  unaff_x24[1] = uVar1;
  if ((unaff_x28 != -0x8000000000000000) && (unaff_x28 != 0)) {
    _free(in_stack_00000028);
  }
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000050);
  }
  FUN_100d34830(unaff_x20 + 0x20);
  if (in_stack_00000080 != '\x16') {
    FUN_100e077ec(&stack0x00000080);
  }
  if ((in_stack_00000060._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

