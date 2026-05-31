
/* WARNING: Removing unreachable block (ram,0x0001007903ec) */
/* WARNING: Removing unreachable block (ram,0x0001007903f4) */

void FUN_100790350(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x22;
  uint unaff_w23;
  long unaff_x26;
  ulong unaff_x27;
  undefined8 unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000068;
  long in_stack_00000080;
  ulong in_stack_00000088;
  ulong in_stack_00000090;
  char in_stack_000000a0;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xd0);
  *unaff_x22 = unaff_x28;
  unaff_x22[1] = uVar1;
  if (in_stack_00000080 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x000001a8);
  }
  if ((in_stack_00000090 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000068);
  }
  if ((in_stack_00000088 != 0x8000000000000001) && ((in_stack_00000088 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000028);
  }
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  FUN_100d34830(unaff_x26 + 0x20);
  if (in_stack_000000a0 != '\x16') {
    FUN_100e077ec(&stack0x000000a0);
  }
  if ((unaff_w23 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

