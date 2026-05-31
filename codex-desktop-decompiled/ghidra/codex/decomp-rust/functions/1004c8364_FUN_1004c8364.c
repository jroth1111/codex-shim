
/* WARNING: Removing unreachable block (ram,0x0001004c8458) */
/* WARNING: Removing unreachable block (ram,0x0001004c8460) */

void FUN_1004c8364(void)

{
  undefined8 uVar1;
  long unaff_x22;
  long unaff_x24;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000048;
  undefined8 *in_stack_00000050;
  undefined8 in_stack_00000060;
  char in_stack_00000080;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x88);
  *in_stack_00000050 = 0x8000000000000000;
  in_stack_00000050[1] = uVar1;
  if (unaff_x28 != 0) {
    _free();
  }
  if ((unaff_x24 != -0x8000000000000000) && (unaff_x24 != 0)) {
    _free();
  }
  FUN_100d34830(unaff_x22 + 0x20);
  if (in_stack_00000080 != '\x16') {
    FUN_100e077ec(&stack0x00000080);
  }
  if ((in_stack_00000060._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000048);
  }
  return;
}

