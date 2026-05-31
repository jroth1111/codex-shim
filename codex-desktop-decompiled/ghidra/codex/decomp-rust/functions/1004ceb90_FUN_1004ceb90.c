
/* WARNING: Removing unreachable block (ram,0x0001004cf994) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1004ceb90(void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  long lVar6;
  long lVar7;
  ulong unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *puVar8;
  ulong unaff_x25;
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
  undefined8 in_stack_000000b8;
  int in_stack_000000c8;
  uint in_stack_000000d0;
  undefined8 in_stack_000000d8;
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
  
  uVar5 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xa0);
  *unaff_x24 = 0x8000000000000000;
  unaff_x24[1] = uVar5;
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
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
  if ((in_stack_00000130 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000068);
  }
  if ((in_stack_00000118 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000078);
  }
  if ((in_stack_00000110 == 0x8000000000000001) || ((in_stack_00000110 & 0x7fffffffffffffff) == 0))
  {
    lVar6 = *(long *)(unaff_x29 + -0xd8);
  }
  else {
    _free(in_stack_00000058);
    lVar6 = *(long *)(unaff_x29 + -0xd8);
  }
  if (lVar6 != -0x8000000000000000) {
    lVar7 = *(long *)(unaff_x29 + -0xd0);
    lVar1 = lVar7;
    for (lVar4 = *(long *)(unaff_x29 + -200); lVar4 != 0; lVar4 = lVar4 + -1) {
      FUN_100e1d024(lVar1);
      lVar1 = lVar1 + 0x50;
    }
    if (lVar6 != 0) {
      _free(lVar7);
    }
  }
  if ((in_stack_00000120 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000b8);
  }
  lVar6 = *(long *)(unaff_x29 + -0xf0);
  if (lVar6 != -0x8000000000000000) {
    lVar1 = *(long *)(unaff_x29 + -0xe8);
    lVar7 = *(long *)(unaff_x29 + -0xe0);
    if (lVar7 != 0) {
      puVar8 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar8[-1] != 0) {
          _free(*puVar8);
        }
        puVar8 = puVar8 + 3;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (lVar6 != 0) {
      _free(lVar1);
    }
  }
  uVar2 = 0;
  if ((in_stack_00000138 & 0x7fffffffffffffff) != 0) {
    uVar2 = in_stack_000000d0;
  }
  if ((uVar2 & 1) != 0) {
    _free(in_stack_00000088);
  }
  iVar3 = 0;
  if (unaff_x25 != 0x8000000000000001) {
    iVar3 = in_stack_000000c8;
  }
  if ((iVar3 == 1) && ((unaff_x25 & 0x7fffffffffffffff) != 0)) {
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
      lVar6 = 0;
    }
    else {
      *(long *)(unaff_x29 + -0xa0) = unaff_x28;
      lVar6 = thunk_FUN_1087e422c(((ulong)(in_stack_00000148 - unaff_x19) >> 6) + unaff_x28,
                                  unaff_x29 + -0xa0,&UNK_10b23a190);
    }
    if (in_stack_00000150 != '\x16') {
      FUN_100e077ec(&stack0x00000150);
    }
    if (lVar6 == 0) {
      _memcpy(in_stack_00000100,&stack0x00000198,0x128);
    }
    else {
      *in_stack_00000100 = -0x8000000000000000;
      in_stack_00000100[1] = lVar6;
      FUN_100e1f104(&stack0x00000198);
    }
  }
  if ((in_stack_000000f8._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_000000d8);
  }
  return;
}

