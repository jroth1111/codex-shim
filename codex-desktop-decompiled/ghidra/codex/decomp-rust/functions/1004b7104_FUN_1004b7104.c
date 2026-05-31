
/* WARNING: Removing unreachable block (ram,0x0001004b6df4) */
/* WARNING: Removing unreachable block (ram,0x0001004b6e0c) */

void FUN_1004b7104(void)

{
  undefined8 uVar1;
  ulong unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x26;
  ulong unaff_x27;
  uint unaff_w28;
  long unaff_x29;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000058;
  long in_stack_00000080;
  char in_stack_00000090;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *unaff_x20 = 0x8000000000000000;
  unaff_x20[1] = uVar1;
  if (unaff_x27 != 0) {
    _free(in_stack_00000040);
  }
  if (unaff_x26 != 0) {
    _free(in_stack_00000038);
  }
  if (in_stack_00000080 != 0) {
    _free(in_stack_00000058);
  }
  if (((unaff_x27 & 0x7fffffffffffffff) != 0) && ((unaff_x19 & 1) != 0)) {
    _free(in_stack_00000040);
  }
  FUN_100d34830(&stack0x000000b0);
  if (in_stack_00000090 != '\x16') {
    FUN_100e077ec(&stack0x00000090);
  }
  if ((unaff_w28 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

