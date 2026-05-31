
void FUN_100460824(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong in_x10;
  undefined8 *puVar4;
  long unaff_x29;
  undefined8 *in_stack_00000020;
  ulong in_stack_00000058;
  long in_stack_00000068;
  char in_stack_00000070;
  long in_stack_000001e0;
  long in_stack_000001e8;
  long in_stack_000001f0;
  
  uVar3 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xd0);
  *in_stack_00000020 = 0x1d;
  in_stack_00000020[1] = uVar3;
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
  if ((in_x10 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  if ((in_stack_00000058 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_100d34830(&stack0x00000090);
  if (in_stack_00000070 != '\x16') {
    FUN_100e077ec(&stack0x00000070);
  }
  return;
}

