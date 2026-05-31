
void FUN_1013cff44(void)

{
  long lVar1;
  undefined8 uVar2;
  long in_x10;
  long lVar3;
  undefined8 *unaff_x20;
  undefined8 *puVar4;
  long unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000088;
  long in_stack_00000090;
  long in_stack_00000098;
  long in_stack_000000a0;
  char in_stack_000000b0;
  long in_stack_000001a0;
  long in_stack_000001a8;
  long in_stack_000001b8;
  long in_stack_000001c0;
  long in_stack_000001c8;
  
  uVar2 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
  *unaff_x20 = 3;
  unaff_x20[1] = uVar2;
  if ((-0x7fffffffffffffff < in_stack_00000090) && (in_stack_00000090 != 0)) {
    _free(in_stack_00000020);
  }
  lVar1 = in_stack_000001c0;
  if ((in_stack_000000a0 != 3) && (in_stack_000000a0 != 2)) {
    if ((in_stack_000000a0 != 0) && (in_stack_000001c8 != 0)) {
      puVar4 = (undefined8 *)(in_stack_000001c0 + 8);
      lVar3 = in_stack_000001c8;
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 3;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (in_stack_000001b8 != 0) {
      _free(lVar1);
    }
  }
  if ((-0x7fffffffffffffff < in_x10) && (in_x10 != 0)) {
    _free(in_stack_00000018);
  }
  lVar1 = in_stack_000001a0;
  if ((in_stack_00000088 != -0x7fffffffffffffff) && (in_stack_00000088 != -0x8000000000000000)) {
    if (in_stack_000001a8 != 0) {
      puVar4 = (undefined8 *)(in_stack_000001a0 + 8);
      lVar3 = in_stack_000001a8;
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 3;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (in_stack_00000088 != 0) {
      _free(lVar1);
    }
  }
  if ((-0x7fffffffffffffff < in_stack_00000098) && (in_stack_00000098 != 0)) {
    _free(in_stack_00000040);
  }
  FUN_100d34830(&stack0x000000d0);
  if (in_stack_000000b0 != '\x16') {
    FUN_100e077ec(&stack0x000000b0);
  }
  if ((in_stack_00000050._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000048);
  }
  return;
}

