
/* WARNING: Removing unreachable block (ram,0x00010067da30) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10067c89c(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  uint unaff_w25;
  long unaff_x26;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  ulong in_stack_000000e8;
  uint in_stack_00000100;
  uint in_stack_00000108;
  uint in_stack_00000110;
  uint in_stack_00000118;
  int in_stack_00000120;
  uint in_stack_00000128;
  undefined8 in_stack_00000140;
  ulong in_stack_00000148;
  ulong in_stack_00000150;
  ulong in_stack_00000158;
  ulong in_stack_00000160;
  ulong in_stack_00000168;
  ulong in_stack_00000170;
  long *in_stack_00000180;
  long in_stack_00000188;
  long in_stack_00000190;
  long in_stack_00000368;
  undefined8 in_stack_00000370;
  long in_stack_00000380;
  undefined8 in_stack_00000388;
  long in_stack_00000398;
  undefined8 in_stack_000003a0;
  long in_stack_000003b0;
  undefined8 in_stack_000003b8;
  long in_stack_000003c8;
  long in_stack_000003d0;
  long in_stack_000003d8;
  long in_stack_000003e0;
  long in_stack_000003e8;
  long in_stack_000003f0;
  long in_stack_000003f8;
  long in_stack_00000400;
  long in_stack_00000408;
  long in_stack_00000410;
  undefined8 in_stack_00000418;
  long in_stack_00000428;
  undefined8 in_stack_00000430;
  long in_stack_00000440;
  undefined8 in_stack_00000448;
  long in_stack_00000458;
  undefined8 in_stack_00000460;
  
  lVar3 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xd0);
  *in_stack_00000180 = -0x8000000000000000;
  in_stack_00000180[1] = lVar3;
  if (in_stack_00000148 != 0) {
    _free(in_stack_00000098);
  }
  if (in_stack_00000150 != 0) {
    _free(in_stack_000000a0);
  }
  if ((in_stack_000000e8 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000070);
  }
  if (in_stack_00000410 != -0x8000000000000000) {
    if (in_stack_00000410 != 0) {
      _free(in_stack_00000418);
    }
    if ((in_stack_00000428 != -0x8000000000000000) && (in_stack_00000428 != 0)) {
      _free(in_stack_00000430);
    }
    if ((in_stack_00000440 != -0x8000000000000000) && (in_stack_00000440 != 0)) {
      _free(in_stack_00000448);
    }
    if ((in_stack_00000458 != -0x8000000000000000) && (in_stack_00000458 != 0)) {
      _free(in_stack_00000460);
    }
  }
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000078);
  }
  if (in_stack_00000160 != 0) {
    _free(in_stack_000000c0);
  }
  if (unaff_x28 != 0) {
    _free(in_stack_000000b0);
  }
  if ((unaff_x24 != 0x8000000000000001) && ((unaff_x24 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000058);
  }
  if (in_stack_000003f8 != -0x8000000000000000) {
    if (in_stack_00000408 != 0) {
      puVar4 = (undefined8 *)(in_stack_00000400 + 0x20);
      do {
        if (puVar4[-4] != 0) {
          _free(puVar4[-3]);
        }
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        if (puVar4[2] != 0) {
          _free(puVar4[3]);
        }
        puVar4 = puVar4 + 9;
        in_stack_00000408 = in_stack_00000408 + -1;
      } while (in_stack_00000408 != 0);
    }
    if (in_stack_000003f8 != 0) {
      _free(in_stack_00000400);
    }
  }
  if (in_stack_000003e0 != -0x8000000000000000) {
    if (in_stack_000003f0 != 0) {
      puVar4 = (undefined8 *)(in_stack_000003e8 + 8);
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 3;
        in_stack_000003f0 = in_stack_000003f0 + -1;
      } while (in_stack_000003f0 != 0);
    }
    if (in_stack_000003e0 != 0) {
      _free(in_stack_000003e8);
    }
  }
  if ((in_stack_00000168 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000090);
  }
  uVar1 = 0;
  if (in_stack_000003c8 != -0x8000000000000000) {
    uVar1 = unaff_w25;
  }
  if ((uVar1 & 1) != 0) {
    if (in_stack_000003d8 != 0) {
      puVar4 = (undefined8 *)(in_stack_000003d0 + 8);
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 4;
        in_stack_000003d8 = in_stack_000003d8 + -1;
      } while (in_stack_000003d8 != 0);
    }
    if (in_stack_000003c8 != 0) {
      _free(in_stack_000003d0);
    }
  }
  uVar1 = 0;
  if ((in_stack_00000148 & 0x7fffffffffffffff) != 0) {
    uVar1 = in_stack_00000100;
  }
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
    if ((in_stack_00000150 & 0x7fffffffffffffff) != 0) {
      uVar1 = in_stack_00000110;
    }
  }
  else {
    _free(in_stack_00000098);
    uVar1 = 0;
    if ((in_stack_00000150 & 0x7fffffffffffffff) != 0) {
      uVar1 = in_stack_00000110;
    }
  }
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
    if (unaff_x22 != 0x8000000000000001) {
      uVar1 = in_stack_00000108;
    }
  }
  else {
    _free(in_stack_000000a0);
    uVar1 = 0;
    if (unaff_x22 != 0x8000000000000001) {
      uVar1 = in_stack_00000108;
    }
  }
  if (((uVar1 & 1) == 0) || ((unaff_x22 & 0x7fffffffffffffff) == 0)) {
    uVar1 = 0;
    if (-0x7fffffffffffffff < in_stack_00000368) {
      uVar1 = in_stack_00000118;
    }
  }
  else {
    _free(in_stack_00000070);
    uVar1 = 0;
    if (-0x7fffffffffffffff < in_stack_00000368) {
      uVar1 = in_stack_00000118;
    }
  }
  if ((uVar1 & 1) != 0) {
    if (in_stack_00000368 != 0) {
      _free(in_stack_00000370);
    }
    if ((in_stack_00000380 != -0x8000000000000000) && (in_stack_00000380 != 0)) {
      _free(in_stack_00000388);
    }
    if ((in_stack_00000398 != -0x8000000000000000) && (in_stack_00000398 != 0)) {
      _free(in_stack_000003a0);
    }
    if ((in_stack_000003b0 != -0x8000000000000000) && (in_stack_000003b0 != 0)) {
      _free(in_stack_000003b8);
    }
  }
  iVar2 = 0;
  if (in_stack_00000158 != 0x8000000000000001) {
    iVar2 = in_stack_00000120;
  }
  if ((iVar2 == 1) && ((in_stack_00000158 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000078);
    uVar1 = 0;
    if ((in_stack_00000160 & 0x7fffffffffffffff) != 0) {
      uVar1 = in_stack_00000128;
    }
  }
  else {
    uVar1 = 0;
    if ((in_stack_00000160 & 0x7fffffffffffffff) != 0) {
      uVar1 = in_stack_00000128;
    }
  }
  if ((uVar1 & 1) != 0) {
    _free(in_stack_000000c0);
  }
  if (*in_stack_00000180 == -0x8000000000000000) {
    FUN_100de8910(unaff_x26 + 0x48);
  }
  else {
    _memcpy(&stack0x000001f8,in_stack_00000180,0x170);
    if (in_stack_00000188 != unaff_x21) {
      lVar3 = thunk_FUN_1087e422c(in_stack_000000b8,&UNK_10b21cb90,&UNK_10b20a590);
      *in_stack_00000180 = -0x8000000000000000;
      in_stack_00000180[1] = lVar3;
      FUN_100e37cf8(&stack0x000001f8);
    }
    FUN_100de8910(unaff_x26 + 0x48);
  }
  if (in_stack_00000190 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x00000190);
  }
  if (((long)in_stack_00000170 < 0) &&
     ((in_stack_00000170 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    FUN_100de6690(in_stack_00000140);
  }
  return;
}

