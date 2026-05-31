
void FUN_10046003c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *unaff_x23;
  undefined8 *puVar4;
  ulong unaff_x27;
  ulong unaff_x28;
  long unaff_x29;
  long in_stack_00000068;
  char in_stack_00000070;
  long in_stack_000001e0;
  long in_stack_000001e8;
  long in_stack_000001f0;
  
  uVar3 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xd0);
  *unaff_x23 = 0x1d;
  unaff_x23[1] = uVar3;
  if (in_stack_00000068 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x000001f8);
  }
  lVar2 = in_stack_000001e8;
  lVar1 = in_stack_000001e0;
  if (in_stack_000001e0 != -0x8000000000000000) {
    if (in_stack_000001f0 != 0) {
      puVar4 = (undefined8 *)(in_stack_000001e8 + 0x20);
      do {
        if (puVar4[-4] != 0) {
          _free(puVar4[-3]);
        }
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 7;
        in_stack_000001f0 = in_stack_000001f0 + -1;
      } while (in_stack_000001f0 != 0);
    }
    if (lVar1 != 0) {
      _free(lVar2);
    }
  }
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_100d34830(&stack0x00000090);
  if (in_stack_00000070 != '\x16') {
    FUN_100e077ec(&stack0x00000070);
  }
  return;
}

