
void FUN_1007b594c(void)

{
  ulong uVar1;
  ulong *unaff_x23;
  ulong unaff_x24;
  uint unaff_w25;
  ulong unaff_x26;
  ulong unaff_x27;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000060;
  long in_stack_00000098;
  char in_stack_000000a0;
  long in_stack_00000268;
  undefined8 in_stack_00000270;
  long in_stack_00000280;
  undefined8 in_stack_00000288;
  long in_stack_00000298;
  long in_stack_000002e8;
  undefined8 in_stack_000002f0;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000390);
  *unaff_x23 = unaff_x24;
  unaff_x23[1] = uVar1;
  if (in_stack_00000098 != -0x7fffffffffffffff) {
    if (in_stack_00000098 == -0x8000000000000000) {
      if (in_stack_000002e8 != 0) {
        _free(in_stack_000002f0);
      }
    }
    else {
      func_0x000100e00868(&stack0x000002e0);
    }
  }
  if ((unaff_x27 != 0x8000000000000001) && ((unaff_x27 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000028);
  }
  if ((unaff_x26 != 0x8000000000000001) && ((unaff_x26 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000060);
  }
  if (in_stack_00000268 != -0x8000000000000000) {
    if (in_stack_00000268 != 0) {
      _free(in_stack_00000270);
    }
    if (in_stack_00000280 != 0) {
      _free(in_stack_00000288);
    }
    if (in_stack_00000298 != -0x7ffffffffffffffb) {
      FUN_100de6690(&stack0x00000298);
    }
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  FUN_100d34830(&stack0x000000c0);
  if (in_stack_000000a0 != '\x16') {
    FUN_100e077ec(&stack0x000000a0);
  }
  if ((unaff_w25 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

