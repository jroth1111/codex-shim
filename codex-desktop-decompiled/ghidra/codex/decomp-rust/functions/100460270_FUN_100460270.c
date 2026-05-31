
/* WARNING: Removing unreachable block (ram,0x0001004605a0) */

void FUN_100460270(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint unaff_w20;
  long unaff_x21;
  int unaff_w22;
  undefined8 *unaff_x23;
  ulong unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000068;
  char in_stack_00000070;
  long in_stack_000001e0;
  long in_stack_000001e8;
  long in_stack_000001f0;
  
  uVar4 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xd0);
  *unaff_x23 = 0x1d;
  unaff_x23[1] = uVar4;
  if (in_stack_00000040 != 0) {
    puVar5 = (undefined8 *)(in_stack_00000048 + 0x20);
    do {
      if (puVar5[-4] != 0) {
        _free(puVar5[-3]);
      }
      if (puVar5[-1] != 0) {
        _free(*puVar5);
      }
      puVar5 = puVar5 + 7;
      in_stack_00000040 = in_stack_00000040 + -1;
    } while (in_stack_00000040 != 0);
  }
  if (unaff_x21 != 0) {
    _free(in_stack_00000048);
  }
  if (unaff_x27 != 0) {
    _free();
  }
  if (unaff_x28 != 0) {
    _free();
  }
  if (in_stack_00000068 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x000001f8);
  }
  lVar3 = in_stack_000001e8;
  lVar2 = in_stack_000001e0;
  if ((unaff_w22 != 0) && (in_stack_000001e0 != -0x8000000000000000)) {
    if (in_stack_000001f0 != 0) {
      puVar5 = (undefined8 *)(in_stack_000001e8 + 0x20);
      do {
        if (puVar5[-4] != 0) {
          _free(puVar5[-3]);
        }
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 7;
        in_stack_000001f0 = in_stack_000001f0 + -1;
      } while (in_stack_000001f0 != 0);
    }
    if (lVar2 != 0) {
      _free(lVar3);
    }
  }
  uVar1 = 0;
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    uVar1 = unaff_w20;
  }
  if ((uVar1 & 1) != 0) {
    _free();
  }
  FUN_100d34830(&stack0x00000090);
  if (in_stack_00000070 != '\x16') {
    FUN_100e077ec(&stack0x00000070);
  }
  return;
}

