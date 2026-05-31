
/* WARNING: Removing unreachable block (ram,0x00010045c750) */

void FUN_10045c7bc(void)

{
  int iVar1;
  undefined8 uVar2;
  int unaff_w20;
  int unaff_w21;
  ulong unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  ulong unaff_x27;
  long unaff_x29;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000050;
  char in_stack_00000070;
  
  uVar2 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xc0);
  *in_stack_00000028 = 0x1d;
  in_stack_00000028[1] = uVar2;
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if (unaff_x26 != 0) {
    _free(in_stack_00000050);
  }
  iVar1 = 0;
  if (unaff_x27 != 0x8000000000000001) {
    iVar1 = unaff_w21;
  }
  if ((iVar1 == 1) && ((unaff_x27 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000030);
  }
  iVar1 = 0;
  if (unaff_x25 != 0x8000000000000001) {
    iVar1 = unaff_w20;
  }
  if ((iVar1 == 1) && ((unaff_x25 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000038);
  }
  FUN_100d34830(unaff_x24 + 0x20);
  if (in_stack_00000070 != '\x16') {
    FUN_100e077ec(&stack0x00000070);
  }
  return;
}

