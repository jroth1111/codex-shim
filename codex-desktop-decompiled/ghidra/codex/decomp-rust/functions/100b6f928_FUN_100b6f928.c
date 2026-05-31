
void FUN_100b6f928(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x28;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 *in_stack_00000280;
  ulong in_stack_000002a8;
  ulong in_stack_000002b0;
  ulong in_stack_000002b8;
  ulong in_stack_000002c0;
  ulong in_stack_000002c8;
  ulong in_stack_000002d0;
  ulong in_stack_000002d8;
  ulong in_stack_000002e0;
  ulong in_stack_000002e8;
  long in_stack_000002f0;
  long in_stack_000002f8;
  long in_stack_00000300;
  long in_stack_00000310;
  long in_stack_00000318;
  long in_stack_00000320;
  long in_stack_00000328;
  long in_stack_00000330;
  long in_stack_00000338;
  long in_stack_00000340;
  long in_stack_00000348;
  undefined8 in_stack_00000350;
  long in_stack_00000360;
  undefined8 in_stack_00000368;
  long in_stack_00000378;
  undefined8 in_stack_00000380;
  long in_stack_00000390;
  undefined8 in_stack_00000398;
  long in_stack_000003b0;
  byte in_stack_00000410;
  byte in_stack_00000448;
  long in_stack_00000458;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000920);
  *in_stack_00000280 = 2;
  in_stack_00000280[1] = uVar1;
  FUN_100d5c778(&stack0x00000488);
  if (((in_stack_000002d8 & 1) != 0) && (in_stack_00000458 != 0)) {
    FUN_100cc2fb4(&stack0x00000458);
  }
  if (in_stack_00000448 < 3) {
    FUN_100d3f3f4(&stack0x00000418);
  }
  if (in_stack_00000410 < 3) {
    FUN_100cc2fb4(&stack0x000003e0);
  }
  if ((in_stack_000002b8 != 0x8000000000000001) && ((in_stack_000002b8 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_000001a0);
  }
  if ((in_stack_000002c0 != 0x8000000000000001) && ((in_stack_000002c0 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_000001a8);
  }
  if ((in_stack_000002c8 != 0x8000000000000001) && ((in_stack_000002c8 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_000001b0);
  }
  if ((in_stack_000002d0 != 0x8000000000000001) && ((in_stack_000002d0 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_000001b8);
  }
  if (in_stack_000003b0 != 0) {
    FUN_100d3f590(&stack0x000003b0);
  }
  if ((in_stack_000002b0 != 0x8000000000000001) && ((in_stack_000002b0 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000180);
  }
  if (((in_stack_00000330 != -0x7ffffffffffffffd) && (in_stack_00000330 != unaff_x28 + -3)) &&
     (in_stack_00000330 != -0x7fffffffffffffff)) {
    if (in_stack_00000330 != -0x8000000000000000) {
      if (in_stack_00000340 != 0) {
        puVar2 = (undefined8 *)(in_stack_00000338 + 8);
        do {
          if (puVar2[-1] != 0) {
            _free(*puVar2);
          }
          puVar2 = puVar2 + 3;
          in_stack_00000340 = in_stack_00000340 + -1;
        } while (in_stack_00000340 != 0);
      }
      if (in_stack_00000330 != 0) {
        _free(in_stack_00000338);
      }
    }
    if (in_stack_00000348 != -0x7fffffffffffffff) {
      if ((in_stack_00000348 != -0x8000000000000000) && (in_stack_00000348 != 0)) {
        _free(in_stack_00000350);
      }
      if ((in_stack_00000360 != -0x8000000000000000) && (in_stack_00000360 != 0)) {
        _free(in_stack_00000368);
      }
      if ((in_stack_00000378 != -0x8000000000000000) && (in_stack_00000378 != 0)) {
        _free(in_stack_00000380);
      }
      if ((in_stack_00000390 != -0x8000000000000000) && (in_stack_00000390 != 0)) {
        _free(in_stack_00000398);
      }
    }
  }
  if ((in_stack_00000310 != 3) && (in_stack_00000310 != 2)) {
    if ((in_stack_00000310 != 0) && (in_stack_00000328 != 0)) {
      puVar2 = (undefined8 *)(in_stack_00000320 + 8);
      do {
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 3;
        in_stack_00000328 = in_stack_00000328 + -1;
      } while (in_stack_00000328 != 0);
    }
    if (in_stack_00000318 != 0) {
      _free(in_stack_00000320);
    }
  }
  if ((in_stack_000002f0 != -0x7fffffffffffffff) && (in_stack_000002f0 != -0x8000000000000000)) {
    if (in_stack_00000300 != 0) {
      puVar2 = (undefined8 *)(in_stack_000002f8 + 8);
      do {
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 3;
        in_stack_00000300 = in_stack_00000300 + -1;
      } while (in_stack_00000300 != 0);
    }
    if (in_stack_000002f0 != 0) {
      _free(in_stack_000002f8);
    }
  }
  if ((in_stack_000002a8 != 0x8000000000000001) && ((in_stack_000002a8 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000188);
  }
  if ((in_stack_000002e8 != 0x8000000000000001) && ((in_stack_000002e8 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000190);
  }
  if ((in_stack_000002e0 != 0x8000000000000001) && ((in_stack_000002e0 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000198);
  }
  return;
}

