
/* WARNING: Removing unreachable block (ram,0x000100b297c8) */

void FUN_100b29d48(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long lVar4;
  long unaff_x20;
  undefined8 *puVar5;
  int unaff_w24;
  undefined8 in_stack_00000058;
  uint uStack00000000000000ac;
  uint uStack00000000000000b0;
  undefined8 in_stack_000000b8;
  long in_stack_000000c0;
  ulong in_stack_000000c8;
  long in_stack_000000d0;
  undefined8 *in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  long in_stack_00000108;
  long in_stack_00000110;
  long in_stack_00000170;
  long in_stack_00000188;
  long in_stack_00000190;
  char in_stack_00000290;
  long in_stack_000002d0;
  long in_stack_000002e8;
  long in_stack_000002f0;
  long in_stack_00000318;
  long in_stack_00000330;
  long in_stack_00000338;
  long in_stack_00000360;
  undefined8 in_stack_00000368;
  long in_stack_00000370;
  long in_stack_00000378;
  long in_stack_00000380;
  long in_stack_00000388;
  long in_stack_000003b0;
  long in_stack_000003b8;
  undefined8 in_stack_00000410;
  long in_stack_00000418;
  
  uStack00000000000000ac = 1;
  uStack00000000000000b0 = 1;
  uVar3 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000007b0);
  uStack00000000000000ac = 1;
  uStack00000000000000b0 = 1;
  if ((in_stack_000000d0 != -0x7fffffffffffffff) && (in_stack_000000d0 != -0x8000000000000000)) {
    lVar4 = in_stack_00000418 + 1;
    while (lVar4 = lVar4 + -1, lVar4 != 0) {
      FUN_100de5590();
    }
    if (in_stack_000000d0 != 0) {
      _free(in_stack_00000410);
    }
    unaff_x19 = -0x7ffffffffffffffb;
  }
  if (1 < (unaff_x19 + in_stack_000000c0) - 10U) {
    FUN_100de6690(&stack0x000003c0);
  }
  if ((unaff_x20 != -0x7fffffffffffffff) && (unaff_x20 != -0x8000000000000000)) {
    if (in_stack_000003b8 != 0) {
      puVar5 = (undefined8 *)(in_stack_000003b0 + 8);
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        in_stack_000003b8 = in_stack_000003b8 + -1;
      } while (in_stack_000003b8 != 0);
    }
    if (unaff_x20 != 0) {
      _free(in_stack_000003b0);
    }
  }
  iVar1 = 0;
  if (in_stack_000000c8 != 0x8000000000000001) {
    iVar1 = unaff_w24;
  }
  if ((iVar1 == 1) && ((in_stack_000000c8 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000058);
  }
  if (((in_stack_00000378 != in_stack_000000e8) && (in_stack_00000378 != -0x7fffffffffffffff)) &&
     (in_stack_00000378 != -0x8000000000000000)) {
    if (in_stack_00000388 != 0) {
      puVar5 = (undefined8 *)(in_stack_00000380 + 8);
      do {
        if ((puVar5[-1] & 0x7fffffffffffffff) != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        in_stack_00000388 = in_stack_00000388 + -1;
      } while (in_stack_00000388 != 0);
    }
    if (in_stack_00000378 != 0) {
      _free(in_stack_00000380);
    }
  }
  if (in_stack_00000360 != -0x8000000000000000) {
    lVar4 = in_stack_00000370 + 1;
    while (lVar4 = lVar4 + -1, lVar4 != 0) {
      FUN_100defbc4();
    }
    if (in_stack_00000360 != 0) {
      _free(in_stack_00000368);
    }
  }
  uVar2 = 0;
  if (in_stack_00000318 != -0x7fffffffffffffff) {
    uVar2 = uStack00000000000000b0;
  }
  if (((uVar2 & 1) != 0) && (in_stack_00000318 != -0x8000000000000000)) {
    if ((in_stack_00000338 != 0) && (in_stack_00000338 * 9 != -0x11)) {
      _free(in_stack_00000330 + in_stack_00000338 * -8 + -8);
    }
    func_0x000100cd7284(&stack0x00000318);
  }
  uVar2 = 0;
  if (in_stack_000002d0 != -0x7fffffffffffffff) {
    uVar2 = uStack00000000000000ac;
  }
  if (((uVar2 & 1) != 0) && (in_stack_000002d0 != -0x8000000000000000)) {
    if ((in_stack_000002f0 != 0) && (in_stack_000002f0 * 9 != -0x11)) {
      _free(in_stack_000002e8 + in_stack_000002f0 * -8 + -8);
    }
    func_0x000100cd7284(&stack0x000002d0);
  }
  if (in_stack_00000290 != '\x16') {
    FUN_100e077ec(&stack0x00000290);
  }
  *in_stack_000000e0 = 0x8000000000000000;
  in_stack_000000e0[1] = uVar3;
  if ((in_stack_00000170 != -0x7fffffffffffffff) && (in_stack_00000170 != -0x8000000000000000)) {
    if ((in_stack_00000190 != 0) && (in_stack_00000190 * 9 != -0x11)) {
      _free(in_stack_00000188 + in_stack_00000190 * -8 + -8);
    }
    func_0x000100cd7284(&stack0x00000170);
  }
  FUN_100d5c778(&stack0x00000138);
  in_stack_000000b8._4_4_ = in_stack_000000b8._4_4_ ^ 1;
  if (in_stack_000000f0 == in_stack_000000e8) {
    in_stack_000000b8._4_4_ = 1;
  }
  if ((((in_stack_000000b8._4_4_ & 1) == 0) && (in_stack_000000f0 != -0x7fffffffffffffff)) &&
     (in_stack_000000f0 != -0x8000000000000000)) {
    if ((in_stack_00000110 != 0) && (in_stack_00000110 * 9 != -0x11)) {
      _free(in_stack_00000108 + in_stack_00000110 * -8 + -8);
    }
    func_0x000100cd7284(&stack0x000000f0);
  }
  return;
}

