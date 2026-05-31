
void FUN_1007ec1a8(void)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long unaff_x23;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  long *in_stack_00000090;
  uint in_stack_000000c8;
  undefined8 in_stack_000000d0;
  long in_stack_000000e0;
  ulong in_stack_000000e8;
  ulong in_stack_000000f0;
  ulong in_stack_000000f8;
  ulong in_stack_00000100;
  ulong in_stack_00000108;
  ulong in_stack_00000110;
  long in_stack_00000118;
  char in_stack_00000120;
  long in_stack_000002a8;
  long in_stack_000002b0;
  long in_stack_000002b8;
  long in_stack_000002d8;
  long in_stack_000002e0;
  long in_stack_000002e8;
  long in_stack_000002f0;
  long in_stack_000002f8;
  long in_stack_00000300;
  long in_stack_00000308;
  long in_stack_00000330;
  long in_stack_00000338;
  long in_stack_00000340;
  
  lVar2 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xf0);
  *in_stack_00000090 = -0x8000000000000000;
  in_stack_00000090[1] = lVar2;
  lVar2 = in_stack_00000068;
  if (unaff_x23 != -0x8000000000000000) {
    for (; unaff_x28 != 0; unaff_x28 = unaff_x28 + -1) {
      FUN_100e1d024(lVar2);
      lVar2 = lVar2 + 0x50;
    }
    if (unaff_x23 != 0) {
      _free(in_stack_00000068);
    }
  }
  if ((in_stack_00000330 != -0x7fffffffffffffff) && (in_stack_00000330 != -0x8000000000000000)) {
    if (in_stack_00000340 != 0) {
      lVar2 = 0;
      do {
        puVar1 = (ulong *)(in_stack_00000338 + lVar2 * 0x20);
        uVar3 = *puVar1;
        uVar4 = uVar3 ^ 0x8000000000000000;
        if (-1 < (long)uVar3) {
          uVar4 = 3;
        }
        if (uVar4 == 3) {
          if (uVar3 != 0) {
            uVar4 = puVar1[1];
LAB_1007ebcc8:
            _free(uVar4);
          }
        }
        else if (uVar4 == 1) {
          uVar4 = puVar1[2];
          uVar3 = puVar1[3];
          if (uVar3 != 0) {
            puVar5 = (undefined8 *)(uVar4 + 8);
            do {
              if (puVar5[-1] != 0) {
                _free(*puVar5);
              }
              puVar5 = puVar5 + 3;
              uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
          }
          if (puVar1[1] != 0) goto LAB_1007ebcc8;
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 != in_stack_00000340);
    }
    if (in_stack_00000330 != 0) {
      _free(in_stack_00000338);
    }
  }
  if (-0x7ffffffffffffffe < in_stack_00000308) {
    FUN_100e79780(&stack0x00000308);
  }
  if ((in_stack_000002f0 != -0x7fffffffffffffff) && (in_stack_000002f0 != -0x8000000000000000)) {
    if (in_stack_00000300 != 0) {
      puVar5 = (undefined8 *)(in_stack_000002f8 + 8);
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 4;
        in_stack_00000300 = in_stack_00000300 + -1;
      } while (in_stack_00000300 != 0);
    }
    if (in_stack_000002f0 != 0) {
      _free(in_stack_000002f8);
    }
  }
  if ((in_stack_000002d8 != -0x7fffffffffffffff) && (in_stack_000002d8 != -0x8000000000000000)) {
    if (in_stack_000002e8 != 0) {
      puVar5 = (undefined8 *)(in_stack_000002e0 + 8);
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        in_stack_000002e8 = in_stack_000002e8 + -1;
      } while (in_stack_000002e8 != 0);
    }
    if (in_stack_000002d8 != 0) {
      _free(in_stack_000002e0);
    }
  }
  if ((in_stack_000000e8 != 0x8000000000000001) && ((in_stack_000000e8 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000040);
  }
  if ((in_stack_000000f0 != 0x8000000000000001) && ((in_stack_000000f0 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000038);
  }
  if ((in_stack_000000f8 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000058);
  }
  if (in_stack_000002a8 != -0x8000000000000000) {
    if (in_stack_000002b8 != 0) {
      puVar5 = (undefined8 *)(in_stack_000002b0 + 8);
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        in_stack_000002b8 = in_stack_000002b8 + -1;
      } while (in_stack_000002b8 != 0);
    }
    if (in_stack_000002a8 != 0) {
      _free(in_stack_000002b0);
    }
  }
  if ((in_stack_00000100 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000070);
  }
  if ((in_stack_00000108 != 0x8000000000000001) && ((in_stack_00000108 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000050);
  }
  if ((in_stack_00000110 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000060);
  }
  if (*in_stack_00000090 == -0x8000000000000000) {
    FUN_100d34830(&stack0x00000140);
    if (in_stack_00000120 != '\x16') {
      FUN_100e077ec(&stack0x00000120);
    }
  }
  else {
    _memcpy(&stack0x00000168,in_stack_00000090,0x140);
    FUN_100d34830(&stack0x00000140);
    if (in_stack_000000e0 == unaff_x27) {
      lVar2 = 0;
    }
    else {
      *(long *)(unaff_x29 + -0xf0) = in_stack_00000118 + 1;
      lVar2 = FUN_1087e422c(((ulong)(in_stack_000000e0 - unaff_x27) >> 6) + in_stack_00000118 + 1,
                            unaff_x29 + -0xf0,&UNK_10b23a190);
    }
    if (in_stack_00000120 != '\x16') {
      FUN_100e077ec(&stack0x00000120);
    }
    if (lVar2 == 0) {
      _memcpy(in_stack_00000090,&stack0x00000168,0x140);
    }
    else {
      *in_stack_00000090 = -0x8000000000000000;
      in_stack_00000090[1] = lVar2;
      func_0x000100e312a0(&stack0x00000168);
    }
  }
  if ((in_stack_000000c8 & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_000000d0);
  }
  return;
}

