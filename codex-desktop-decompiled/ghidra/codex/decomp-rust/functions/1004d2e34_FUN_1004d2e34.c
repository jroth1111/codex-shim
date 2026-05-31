
/* WARNING: Removing unreachable block (ram,0x0001004d2ea4) */
/* WARNING: Removing unreachable block (ram,0x0001004d2eb0) */

void FUN_1004d2e34(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  ulong unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  uint in_stack_00000050;
  char in_stack_00000070;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *unaff_x28 = unaff_x19;
  unaff_x28[1] = uVar1;
  if ((unaff_x21 != -0x8000000000000000) && (unaff_x21 != 0)) {
    _free(in_stack_00000038);
  }
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  FUN_100d34830(unaff_x22 + 0x20);
  if (in_stack_00000070 != '\x16') {
    FUN_100e077ec(&stack0x00000070);
  }
  if ((in_stack_00000050 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

