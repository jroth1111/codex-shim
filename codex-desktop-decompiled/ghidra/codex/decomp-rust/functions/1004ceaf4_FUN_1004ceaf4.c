
/* WARNING: Removing unreachable block (ram,0x0001004cf98c) */
/* WARNING: Removing unreachable block (ram,0x0001004cfa10) */
/* WARNING: Removing unreachable block (ram,0x0001004cf994) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1004ceaf4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long lVar4;
  long lVar5;
  undefined8 *unaff_x24;
  undefined8 *puVar6;
  ulong unaff_x25;
  undefined8 unaff_x26;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_000000b8;
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
  long in_stack_00000148;
  char in_stack_00000150;
  
  uVar3 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xa0);
  *unaff_x24 = unaff_x26;
  unaff_x24[1] = uVar3;
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
    lVar4 = *(long *)(unaff_x29 + -0xd8);
  }
  else {
    _free(in_stack_00000058);
    lVar4 = *(long *)(unaff_x29 + -0xd8);
  }
  if (lVar4 != -0x8000000000000000) {
    lVar5 = *(long *)(unaff_x29 + -0xd0);
    lVar1 = lVar5;
    for (lVar2 = *(long *)(unaff_x29 + -200); lVar2 != 0; lVar2 = lVar2 + -1) {
      FUN_100e1d024(lVar1);
      lVar1 = lVar1 + 0x50;
    }
    if (lVar4 != 0) {
      _free(lVar5);
    }
  }
  if ((in_stack_00000120 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000b8);
  }
  lVar4 = *(long *)(unaff_x29 + -0xf0);
  if (lVar4 != -0x8000000000000000) {
    lVar1 = *(long *)(unaff_x29 + -0xe8);
    lVar5 = *(long *)(unaff_x29 + -0xe0);
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar6[-1] != 0) {
          _free(*puVar6);
        }
        puVar6 = puVar6 + 3;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (lVar4 != 0) {
      _free(lVar1);
    }
  }
  if ((in_stack_00000138 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000088);
  }
  if ((unaff_x25 != 0x8000000000000001) && ((unaff_x25 & 0x7fffffffffffffff) != 0)) {
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

