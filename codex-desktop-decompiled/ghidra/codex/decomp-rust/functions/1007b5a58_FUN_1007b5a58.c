
/* WARNING: Removing unreachable block (ram,0x0001007b6408) */

void FUN_1007b5a58(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  int unaff_w19;
  ulong unaff_x20;
  uint unaff_w21;
  int unaff_w22;
  ulong unaff_x23;
  long unaff_x24;
  uint unaff_w25;
  ulong unaff_x26;
  ulong unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 *in_stack_00000050;
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
  long in_stack_00000390;
  undefined8 in_stack_00000398;
  long in_stack_000003a8;
  undefined8 in_stack_000003b0;
  long in_stack_000003c0;
  
  uVar3 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x90);
  *in_stack_00000050 = 0x8000000000000000;
  in_stack_00000050[1] = uVar3;
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  if ((unaff_x20 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000060);
  }
  if (in_stack_00000390 != 0) {
    _free(in_stack_00000398);
  }
  if (in_stack_000003a8 != 0) {
    _free(in_stack_000003b0);
  }
  if (in_stack_000003c0 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x000003c0);
  }
  if (unaff_x24 != 0) {
    _free(in_stack_00000038);
  }
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
  iVar1 = 0;
  if (unaff_x27 != 0x8000000000000001) {
    iVar1 = unaff_w19;
  }
  if ((iVar1 == 1) && ((unaff_x27 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000028);
    iVar1 = 0;
    if (unaff_x26 != 0x8000000000000001) {
      iVar1 = unaff_w22;
    }
  }
  else {
    iVar1 = 0;
    if (unaff_x26 != 0x8000000000000001) {
      iVar1 = unaff_w22;
    }
  }
  if ((iVar1 == 1) && ((unaff_x26 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000060);
  }
  uVar2 = 0;
  if (in_stack_00000268 != -0x8000000000000000) {
    uVar2 = unaff_w21;
  }
  if ((uVar2 & 1) != 0) {
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
  FUN_100d34830(&stack0x000000c0);
  if (in_stack_000000a0 != '\x16') {
    FUN_100e077ec(&stack0x000000a0);
  }
  if ((unaff_w25 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

