
void FUN_1004c0338(void)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong unaff_x19;
  long unaff_x20;
  long unaff_x29;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 *in_stack_00000098;
  ulong in_stack_000000a0;
  ulong in_stack_000000a8;
  char in_stack_000000b0;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x88);
  *in_stack_00000098 = 7;
  in_stack_00000098[1] = uVar1;
  if (unaff_x20 != 7) {
    if (unaff_x20 == 3) {
      uVar2 = *(ulong *)(unaff_x29 + -0xd8) & 0x7fffffffffffffff;
    }
    else {
      if (unaff_x20 != 4) goto joined_r0x0001004c01c0;
      uVar2 = *(ulong *)(unaff_x29 + -0xd8);
    }
    if (uVar2 != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0xd0));
    }
  }
joined_r0x0001004c01c0:
  if ((unaff_x19 != 0x8000000000000001) && ((unaff_x19 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000038);
  }
  if ((in_stack_000000a0 != 0x8000000000000001) && ((in_stack_000000a0 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000040);
  }
  if ((in_stack_000000a8 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000050);
  }
  FUN_100d34830(&stack0x000000d0);
  if (in_stack_000000b0 != '\x16') {
    FUN_100e077ec(&stack0x000000b0);
  }
  if ((in_stack_00000060._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

