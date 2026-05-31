
void FUN_101263874(void)

{
  ulong uVar1;
  uint unaff_w19;
  ulong unaff_x21;
  ulong *unaff_x24;
  long unaff_x25;
  ulong unaff_x28;
  long unaff_x29;
  long in_stack_00000038;
  undefined8 *in_stack_00000040;
  char in_stack_00000060;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xc0);
  *unaff_x24 = unaff_x28;
  unaff_x24[1] = uVar1;
  if (unaff_x21 != 0x8000000000000004) {
    uVar1 = unaff_x21 ^ 0x8000000000000000;
    if (-1 < (long)unaff_x21) {
      uVar1 = 2;
    }
    if (uVar1 != 0) {
      if ((uVar1 == 1) || (uVar1 != 2)) {
        if (in_stack_00000038 == 0) goto LAB_101263aa4;
      }
      else {
        if (unaff_x21 != 0) {
          _free(in_stack_00000038);
        }
        if ((*(ulong *)(unaff_x29 + -0xd8) & 0x7fffffffffffffff) == 0) goto LAB_101263aa4;
        in_stack_00000040 = (undefined8 *)(unaff_x29 + -0xd0);
      }
      _free(*in_stack_00000040);
    }
  }
LAB_101263aa4:
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_100d34830(unaff_x25 + 0x20);
  if (in_stack_00000060 != '\x16') {
    FUN_100e077ec(&stack0x00000060);
  }
  if ((unaff_w19 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

