
void FUN_1004ba718(void)

{
  undefined8 uVar1;
  long lVar2;
  long in_x10;
  long lVar3;
  long *unaff_x20;
  undefined8 *puVar4;
  long unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  long in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000d8;
  long in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  long in_stack_000000f8;
  long in_stack_00000100;
  long in_stack_00000108;
  ulong in_stack_00000128;
  long in_stack_00000130;
  long in_stack_00000138;
  long in_stack_00000148;
  long in_stack_00000150;
  long in_stack_00000158;
  char in_stack_00000190;
  long in_stack_000001b8;
  long in_stack_000001c8;
  long in_stack_000001d0;
  long in_stack_00000340;
  long in_stack_00000348;
  
  lVar2 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xd0);
  *unaff_x20 = -0x7fffffffffffffff;
  unaff_x20[1] = lVar2;
  if ((-0x7fffffffffffffff < in_stack_00000148) && (in_stack_00000148 != 0)) {
    _free(in_stack_00000090);
  }
  if ((in_stack_00000130 != -0x7fffffffffffffff) && (in_stack_00000130 != -0x8000000000000000)) {
    uVar1 = *(undefined8 *)(unaff_x29 + -0xe0);
    FUN_100e40160(uVar1,*(undefined8 *)(unaff_x29 + -0xd8));
    if (in_stack_00000130 != 0) {
      _free(uVar1);
    }
  }
  if ((in_stack_00000100 != -0x7fffffffffffffff) && (in_stack_00000100 != -0x8000000000000000)) {
    lVar2 = *(long *)(unaff_x29 + -0xf8);
    lVar3 = *(long *)(unaff_x29 + -0xf0);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar2 + 0x20);
      do {
        if (puVar4[-4] != 0) {
          _free(puVar4[-3]);
        }
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 6;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (in_stack_00000100 != 0) {
      _free(lVar2);
    }
  }
  if ((-0x7fffffffffffffff < in_stack_00000138) && (in_stack_00000138 != 0)) {
    _free(in_stack_00000078);
  }
  if ((-0x7fffffffffffffff < in_x10) && (in_x10 != 0)) {
    _free(in_stack_00000080);
  }
  if ((-0x7fffffffffffffff < in_stack_00000158) && (in_stack_00000158 != 0)) {
    _free(in_stack_00000088);
  }
  if (((in_stack_00000128 & 1) != 0) && (in_stack_00000098 != 0)) {
    FUN_100cc2fb4(&stack0x00000358);
  }
  if ((-0x7fffffffffffffff < in_stack_00000150) && (in_stack_00000150 != 0)) {
    _free(in_stack_00000060);
  }
  if ((in_stack_00000108 != -0x7fffffffffffffff) && (in_stack_00000108 != -0x8000000000000000)) {
    if (in_stack_00000348 != 0) {
      puVar4 = (undefined8 *)(in_stack_00000340 + 8);
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 3;
        in_stack_00000348 = in_stack_00000348 + -1;
      } while (in_stack_00000348 != 0);
    }
    if (in_stack_00000108 != 0) {
      _free(in_stack_00000340);
    }
  }
  if ((-0x7fffffffffffffff < in_stack_000000e8) && (in_stack_000000e8 != 0)) {
    _free(in_stack_00000068);
  }
  if ((-0x7ffffffffffffffe < in_stack_000000f8) && (in_stack_000000f8 != 0)) {
    _free(in_stack_00000000);
  }
  if ((-0x7fffffffffffffff < in_stack_000000f0) && (in_stack_000000f0 != 0)) {
    _free(in_stack_00000070);
  }
  if ((-0x7fffffffffffffff < in_stack_000000e0) && (in_stack_000000e0 != 0)) {
    _free(in_stack_000000a0);
  }
  if (*unaff_x20 == -0x7fffffffffffffff) {
    FUN_100d34830(&stack0x000001b0);
    if (in_stack_00000190 != '\x16') {
      FUN_100e077ec(&stack0x00000190);
    }
  }
  else {
    _memcpy(&stack0x000001d8);
    lVar3 = in_stack_000001c8;
    lVar2 = in_stack_000001b8;
    FUN_100d34830(&stack0x000001b0);
    if (lVar3 == lVar2) {
      lVar2 = 0;
    }
    else {
      *(long *)(unaff_x29 + -0xd0) = in_stack_000001d0;
      lVar2 = thunk_FUN_1087e422c(in_stack_000001d0 + ((ulong)(lVar3 - lVar2) >> 6),
                                  unaff_x29 + -0xd0,&UNK_10b23a190);
    }
    if (in_stack_00000190 != '\x16') {
      FUN_100e077ec(&stack0x00000190);
    }
    if (lVar2 == 0) {
      _memcpy();
    }
    else {
      *unaff_x20 = -0x7fffffffffffffff;
      unaff_x20[1] = lVar2;
      FUN_100e5d5c4(&stack0x000001d8);
    }
  }
  if ((in_stack_000000d8._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_000000a8);
  }
  return;
}

