
/* WARNING: Removing unreachable block (ram,0x0001004cf994) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1004cf4b4(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  uint unaff_w20;
  ulong unaff_x21;
  int unaff_w22;
  long lVar5;
  long lVar6;
  uint unaff_w24;
  undefined8 *puVar7;
  long unaff_x25;
  uint unaff_w26;
  uint unaff_w27;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  ulong in_stack_00000098;
  undefined8 in_stack_000000b8;
  int in_stack_000000c8;
  uint in_stack_000000d0;
  undefined8 in_stack_000000d8;
  uint in_stack_000000e8;
  ulong in_stack_000000f0;
  undefined8 in_stack_000000f8;
  long *in_stack_00000100;
  ulong in_stack_00000108;
  ulong in_stack_00000110;
  ulong in_stack_00000118;
  ulong in_stack_00000120;
  ulong in_stack_00000128;
  ulong in_stack_00000130;
  ulong in_stack_00000138;
  long in_stack_00000140;
  long in_stack_00000148;
  char in_stack_00000150;
  
  lVar4 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x70);
  *in_stack_00000100 = -0x8000000000000000;
  in_stack_00000100[1] = lVar4;
  if (in_stack_00000118 != 0) {
    _free(in_stack_00000078);
  }
  if ((unaff_x21 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000058);
  }
  FUN_100e5fee0(unaff_x29 + -0xa0);
  if (unaff_x25 != 0) {
    _free(in_stack_000000b8);
  }
  lVar4 = *(long *)(unaff_x29 + -0xb8);
  lVar6 = *(long *)(unaff_x29 + -0xb0);
  if (lVar6 != 0) {
    puVar7 = (undefined8 *)(lVar4 + 8);
    do {
      if (puVar7[-1] != 0) {
        _free(*puVar7);
      }
      puVar7 = puVar7 + 3;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (*(long *)(unaff_x29 + -0xc0) != 0) {
    _free(lVar4);
  }
  if (in_stack_00000138 != 0) {
    _free(in_stack_00000088);
  }
  if ((in_stack_00000098 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000060);
  }
  if (in_stack_00000140 != 0) {
    _free(in_stack_00000090);
  }
  if ((in_stack_00000108 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000080);
  }
  if ((in_stack_00000128 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000070);
  }
  uVar1 = 0;
  if ((in_stack_00000130 & 0x7fffffffffffffff) != 0) {
    uVar1 = unaff_w27;
  }
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
    if ((in_stack_00000118 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w20;
    }
  }
  else {
    _free(in_stack_00000068);
    uVar1 = 0;
    if ((in_stack_00000118 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w20;
    }
  }
  if ((uVar1 & 1) == 0) {
    iVar2 = 0;
    if (in_stack_00000110 != 0x8000000000000001) {
      iVar2 = unaff_w22;
    }
  }
  else {
    _free(in_stack_00000078);
    iVar2 = 0;
    if (in_stack_00000110 != 0x8000000000000001) {
      iVar2 = unaff_w22;
    }
  }
  if ((iVar2 == 1) && ((in_stack_00000110 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000058);
    lVar4 = *(long *)(unaff_x29 + -0xd8);
    uVar1 = 0;
    if (lVar4 != -0x8000000000000000) {
      uVar1 = unaff_w24;
    }
  }
  else {
    lVar4 = *(long *)(unaff_x29 + -0xd8);
    uVar1 = 0;
    if (lVar4 != -0x8000000000000000) {
      uVar1 = unaff_w24;
    }
  }
  if ((uVar1 & 1) != 0) {
    lVar5 = *(long *)(unaff_x29 + -0xd0);
    lVar6 = lVar5;
    for (lVar3 = *(long *)(unaff_x29 + -200); lVar3 != 0; lVar3 = lVar3 + -1) {
      FUN_100e1d024(lVar6);
      lVar6 = lVar6 + 0x50;
    }
    if (lVar4 != 0) {
      _free(lVar5);
    }
  }
  uVar1 = 0;
  if ((in_stack_00000120 & 0x7fffffffffffffff) != 0) {
    uVar1 = unaff_w26;
  }
  if ((uVar1 & 1) != 0) {
    _free(in_stack_000000b8);
  }
  lVar4 = *(long *)(unaff_x29 + -0xf0);
  uVar1 = 0;
  if (lVar4 != -0x8000000000000000) {
    uVar1 = in_stack_000000e8;
  }
  if ((uVar1 & 1) != 0) {
    lVar6 = *(long *)(unaff_x29 + -0xe8);
    lVar5 = *(long *)(unaff_x29 + -0xe0);
    if (lVar5 != 0) {
      puVar7 = (undefined8 *)(lVar6 + 8);
      do {
        if (puVar7[-1] != 0) {
          _free(*puVar7);
        }
        puVar7 = puVar7 + 3;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (lVar4 != 0) {
      _free(lVar6);
    }
  }
  uVar1 = 0;
  if ((in_stack_00000138 & 0x7fffffffffffffff) != 0) {
    uVar1 = in_stack_000000d0;
  }
  if ((uVar1 & 1) != 0) {
    _free(in_stack_00000088);
  }
  iVar2 = 0;
  if (in_stack_000000f0 != 0x8000000000000001) {
    iVar2 = in_stack_000000c8;
  }
  if ((iVar2 == 1) && ((in_stack_000000f0 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000060);
  }
  if (*in_stack_00000100 == -0x8000000000000000) {
    FUN_100d34830(&stack0x00000170);
    if (in_stack_00000150 != '\x16') {
      FUN_100e077ec(&stack0x00000150);
    }
  }
  else {
    _memcpy(&stack0x00000198,in_stack_00000100,0x128);
    FUN_100d34830(&stack0x00000170);
    if (in_stack_00000148 == unaff_x19) {
      lVar4 = 0;
    }
    else {
      *(long *)(unaff_x29 + -0xa0) = unaff_x28;
      lVar4 = thunk_FUN_1087e422c(((ulong)(in_stack_00000148 - unaff_x19) >> 6) + unaff_x28,
                                  unaff_x29 + -0xa0,&UNK_10b23a190);
    }
    if (in_stack_00000150 != '\x16') {
      FUN_100e077ec(&stack0x00000150);
    }
    if (lVar4 == 0) {
      _memcpy(in_stack_00000100,&stack0x00000198,0x128);
    }
    else {
      *in_stack_00000100 = -0x8000000000000000;
      in_stack_00000100[1] = lVar4;
      FUN_100e1f104(&stack0x00000198);
    }
  }
  if ((in_stack_000000f8._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_000000d8);
  }
  return;
}

