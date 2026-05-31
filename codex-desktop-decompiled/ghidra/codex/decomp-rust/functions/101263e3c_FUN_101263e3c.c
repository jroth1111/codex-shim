
void FUN_101263e3c(void)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong in_x10;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000038;
  undefined8 *in_stack_00000040;
  char in_stack_00000060;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xc0);
  *in_stack_00000010 = 0x8000000000000000;
  in_stack_00000010[1] = uVar1;
  uVar2 = in_x10 ^ 0x8000000000000000;
  if (-1 < (long)in_x10) {
    uVar2 = 2;
  }
  if (uVar2 != 0) {
    if ((uVar2 == 1) || (uVar2 != 2)) {
      if (in_stack_00000038 == 0) goto LAB_101263aa4;
    }
    else {
      if (in_x10 != 0) {
        _free(in_stack_00000038);
      }
      if ((*(ulong *)(unaff_x29 + -0xd8) & 0x7fffffffffffffff) == 0) goto LAB_101263aa4;
      in_stack_00000040 = (undefined8 *)(unaff_x29 + -0xd0);
    }
    _free(*in_stack_00000040);
  }
LAB_101263aa4:
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_100d34830(&stack0x00000080);
  if (in_stack_00000060 != '\x16') {
    FUN_100e077ec(&stack0x00000060);
  }
  if ((in_stack_00000018._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000020);
  }
  return;
}

