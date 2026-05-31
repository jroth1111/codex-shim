
/* WARNING: Removing unreachable block (ram,0x0001004d2188) */
/* WARNING: Removing unreachable block (ram,0x0001004d2190) */

void FUN_1004d1884(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  uint unaff_w24;
  ulong unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  ulong in_stack_000000a0;
  char in_stack_000000b0;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x88);
  *unaff_x19 = 7;
  unaff_x19[1] = uVar1;
  if (unaff_x20 != 7) {
    if (unaff_x20 == 3) {
      uVar2 = *(ulong *)(unaff_x29 + -0xd8) & 0x7fffffffffffffff;
    }
    else {
      if (unaff_x20 != 4) goto joined_r0x0001004d2120;
      uVar2 = *(ulong *)(unaff_x29 + -0xd8);
    }
    if (uVar2 != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0xd0));
    }
  }
joined_r0x0001004d2120:
  if ((unaff_x27 != 0x8000000000000001) && ((unaff_x27 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000038);
  }
  if ((in_stack_000000a0 != 0x8000000000000001) && ((in_stack_000000a0 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000040);
  }
  FUN_100d34830(&stack0x000000d0);
  if (in_stack_000000b0 != '\x16') {
    FUN_100e077ec(&stack0x000000b0);
  }
  if ((unaff_w24 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

