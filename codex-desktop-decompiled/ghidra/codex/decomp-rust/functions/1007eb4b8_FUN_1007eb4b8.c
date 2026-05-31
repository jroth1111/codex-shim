
/* WARNING: Removing unreachable block (ram,0x0001007ebf58) */

void FUN_1007eb4b8(void)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long unaff_x23;
  long *unaff_x24;
  int unaff_w26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  ulong in_stack_00000010;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  uint in_stack_000000b0;
  uint in_stack_000000b8;
  uint in_stack_000000c0;
  uint in_stack_000000c8;
  undefined8 in_stack_000000d0;
  long in_stack_000000e0;
  ulong in_stack_000000e8;
  ulong in_stack_000000f0;
  ulong in_stack_000000f8;
  ulong in_stack_00000100;
  ulong in_stack_00000108;
  long in_stack_00000110;
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
  long in_stack_00000360;
  long in_stack_00000368;
  long in_stack_00000370;
  
  lVar4 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xf0);
  *unaff_x24 = -0x8000000000000000;
  unaff_x24[1] = lVar4;
  if (in_stack_00000370 != 0) {
    puVar7 = (undefined8 *)(in_stack_00000368 + 8);
    do {
      if (puVar7[-1] != 0) {
        _free(*puVar7);
      }
      puVar7 = puVar7 + 3;
      in_stack_00000370 = in_stack_00000370 + -1;
    } while (in_stack_00000370 != 0);
  }
  if (in_stack_00000360 != 0) {
    _free(in_stack_00000368);
  }
  if (in_stack_00000008 != 0) {
    _free(in_stack_00000000);
  }
  if ((in_stack_00000010 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000050);
  }
  if (in_stack_00000110 != 0) {
    _free(in_stack_00000060);
  }
  lVar4 = in_stack_00000068;
  if (unaff_x23 != -0x8000000000000000) {
    for (; unaff_x28 != 0; unaff_x28 = unaff_x28 + -1) {
      FUN_100e1d024(lVar4);
      lVar4 = lVar4 + 0x50;
    }
    if (unaff_x23 != 0) {
      _free(in_stack_00000068);
    }
  }
  if ((in_stack_00000330 != -0x7fffffffffffffff) && (in_stack_00000330 != -0x8000000000000000)) {
    if (in_stack_00000340 != 0) {
      lVar4 = 0;
      do {
        puVar1 = (ulong *)(in_stack_00000338 + lVar4 * 0x20);
        uVar5 = *puVar1;
        uVar6 = uVar5 ^ 0x8000000000000000;
        if (-1 < (long)uVar5) {
          uVar6 = 3;
        }
        if (uVar6 == 3) {
          if (uVar5 != 0) {
            uVar6 = puVar1[1];
LAB_1007ebcc8:
            _free(uVar6);
          }
        }
        else if (uVar6 == 1) {
          uVar6 = puVar1[2];
          uVar5 = puVar1[3];
          if (uVar5 != 0) {
            puVar7 = (undefined8 *)(uVar6 + 8);
            do {
              if (puVar7[-1] != 0) {
                _free(*puVar7);
              }
              puVar7 = puVar7 + 3;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          if (puVar1[1] != 0) goto LAB_1007ebcc8;
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 != in_stack_00000340);
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
      puVar7 = (undefined8 *)(in_stack_000002f8 + 8);
      do {
        if (puVar7[-1] != 0) {
          _free(*puVar7);
        }
        puVar7 = puVar7 + 4;
        in_stack_00000300 = in_stack_00000300 + -1;
      } while (in_stack_00000300 != 0);
    }
    if (in_stack_000002f0 != 0) {
      _free(in_stack_000002f8);
    }
  }
  if ((in_stack_000002d8 != -0x7fffffffffffffff) && (in_stack_000002d8 != -0x8000000000000000)) {
    if (in_stack_000002e8 != 0) {
      puVar7 = (undefined8 *)(in_stack_000002e0 + 8);
      do {
        if (puVar7[-1] != 0) {
          _free(*puVar7);
        }
        puVar7 = puVar7 + 3;
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
  if ((in_stack_000000f0 == 0x8000000000000001) || ((in_stack_000000f0 & 0x7fffffffffffffff) == 0))
  {
    uVar2 = 0;
    if ((in_stack_000000f8 & 0x7fffffffffffffff) != 0) {
      uVar2 = in_stack_000000b8;
    }
  }
  else {
    _free(in_stack_00000038);
    uVar2 = 0;
    if ((in_stack_000000f8 & 0x7fffffffffffffff) != 0) {
      uVar2 = in_stack_000000b8;
    }
  }
  if ((uVar2 & 1) != 0) {
    _free(in_stack_00000058);
  }
  uVar2 = 0;
  if (in_stack_000002a8 != -0x8000000000000000) {
    uVar2 = in_stack_000000b0;
  }
  if ((uVar2 & 1) != 0) {
    if (in_stack_000002b8 != 0) {
      puVar7 = (undefined8 *)(in_stack_000002b0 + 8);
      do {
        if (puVar7[-1] != 0) {
          _free(*puVar7);
        }
        puVar7 = puVar7 + 3;
        in_stack_000002b8 = in_stack_000002b8 + -1;
      } while (in_stack_000002b8 != 0);
    }
    if (in_stack_000002a8 != 0) {
      _free(in_stack_000002b0);
    }
  }
  uVar2 = 0;
  if ((in_stack_00000100 & 0x7fffffffffffffff) != 0) {
    uVar2 = in_stack_000000c0;
  }
  if ((uVar2 & 1) != 0) {
    _free(in_stack_00000070);
  }
  iVar3 = 0;
  if (in_stack_00000108 != 0x8000000000000001) {
    iVar3 = unaff_w26;
  }
  if ((iVar3 == 1) && ((in_stack_00000108 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000050);
  }
  if (*unaff_x24 == -0x8000000000000000) {
    FUN_100d34830(&stack0x00000140);
    if (in_stack_00000120 != '\x16') {
      FUN_100e077ec(&stack0x00000120);
    }
  }
  else {
    _memcpy(&stack0x00000168,unaff_x24,0x140);
    FUN_100d34830(&stack0x00000140);
    if (in_stack_000000e0 == unaff_x27) {
      lVar4 = 0;
    }
    else {
      *(long *)(unaff_x29 + -0xf0) = in_stack_00000118;
      lVar4 = FUN_1087e422c(((ulong)(in_stack_000000e0 - unaff_x27) >> 6) + in_stack_00000118,
                            unaff_x29 + -0xf0,&UNK_10b23a190);
    }
    if (in_stack_00000120 != '\x16') {
      FUN_100e077ec(&stack0x00000120);
    }
    if (lVar4 == 0) {
      _memcpy(unaff_x24,&stack0x00000168,0x140);
    }
    else {
      *unaff_x24 = -0x8000000000000000;
      unaff_x24[1] = lVar4;
      func_0x000100e312a0(&stack0x00000168);
    }
  }
  if ((in_stack_000000c8 & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_000000d0);
  }
  return;
}

