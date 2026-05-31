
/* WARNING: Type propagation algorithm not settling */

void FUN_1004cff40(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long lVar4;
  undefined8 *puVar5;
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
  ulong in_stack_00000140;
  long in_stack_00000148;
  char in_stack_00000150;
  
  lVar3 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xa0);
  *in_stack_00000100 = -0x8000000000000000;
  in_stack_00000100[1] = lVar3;
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
    lVar3 = *(long *)(unaff_x29 + -0xd8);
  }
  else {
    _free(in_stack_00000058);
    lVar3 = *(long *)(unaff_x29 + -0xd8);
  }
  if (lVar3 != -0x8000000000000000) {
    lVar4 = *(long *)(unaff_x29 + -0xd0);
    lVar1 = lVar4;
    for (lVar2 = *(long *)(unaff_x29 + -200); lVar2 != 0; lVar2 = lVar2 + -1) {
      FUN_100e1d024(lVar1);
      lVar1 = lVar1 + 0x50;
    }
    if (lVar3 != 0) {
      _free(lVar4);
    }
  }
  if ((in_stack_00000120 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000b8);
  }
  lVar3 = *(long *)(unaff_x29 + -0xf0);
  if (lVar3 != -0x8000000000000000) {
    lVar1 = *(long *)(unaff_x29 + -0xe8);
    lVar4 = *(long *)(unaff_x29 + -0xe0);
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if (lVar3 != 0) {
      _free(lVar1);
    }
  }
  if ((in_stack_00000138 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000088);
  }
  if ((unaff_x25 != 0x8000000000000001) && ((unaff_x25 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000060);
  }
  if ((in_stack_00000140 & 0x7fffffffffffffff) == 0) {
    lVar3 = *in_stack_00000100;
  }
  else {
    _free(in_stack_00000090);
    lVar3 = *in_stack_00000100;
  }
  if (lVar3 == -0x8000000000000000) {
    FUN_100d34830(&stack0x00000170);
    if (in_stack_00000150 != '\x16') {
      FUN_100e077ec(&stack0x00000150);
    }
  }
  else {
    _memcpy(&stack0x00000198,in_stack_00000100,0x128);
    FUN_100d34830(&stack0x00000170);
    if (in_stack_00000148 == unaff_x19) {
      lVar3 = 0;
    }
    else {
      *(long *)(unaff_x29 + -0xa0) = unaff_x28 + 1;
      lVar3 = thunk_FUN_1087e422c(((ulong)(in_stack_00000148 - unaff_x19) >> 6) + unaff_x28 + 1,
                                  unaff_x29 + -0xa0,&UNK_10b23a190);
    }
    if (in_stack_00000150 != '\x16') {
      FUN_100e077ec(&stack0x00000150);
    }
    if (lVar3 == 0) {
      _memcpy(in_stack_00000100,&stack0x00000198,0x128);
    }
    else {
      *in_stack_00000100 = -0x8000000000000000;
      in_stack_00000100[1] = lVar3;
      FUN_100e1f104(&stack0x00000198);
    }
  }
  if ((in_stack_000000f8._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_000000d8);
  }
  return;
}

