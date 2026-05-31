
void FUN_10067a41c(void)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *unaff_x20;
  long *plVar4;
  undefined8 *puVar5;
  long unaff_x24;
  ulong uVar6;
  long unaff_x29;
  long in_stack_00000080;
  long in_stack_00000088;
  long *in_stack_000000d0;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  long in_stack_00000160;
  long in_stack_00000168;
  long in_stack_00000170;
  long in_stack_00000178;
  long in_stack_00000180;
  long in_stack_00000188;
  long in_stack_00000190;
  long in_stack_00000198;
  long in_stack_000001a0;
  long in_stack_000001a8;
  ulong in_stack_000001b0;
  ulong in_stack_000001b8;
  ulong in_stack_000001c0;
  ulong in_stack_000001c8;
  long in_stack_000001d8;
  long in_stack_000001e0;
  long in_stack_000001e8;
  long in_stack_000001f0;
  long in_stack_000001f8;
  long in_stack_00000200;
  long in_stack_00000208;
  undefined8 in_stack_00000210;
  long in_stack_00000260;
  long in_stack_00000520;
  long in_stack_00000528;
  long *in_stack_00000570;
  long in_stack_00000578;
  long in_stack_00000608;
  long in_stack_00000610;
  long in_stack_00000620;
  long in_stack_00000628;
  long in_stack_00000638;
  long in_stack_00000640;
  long in_stack_00000658;
  long in_stack_00000668;
  
  lVar3 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xc0);
  *unaff_x20 = 2;
  unaff_x20[1] = lVar3;
  if (((in_stack_000001e0 != 0) && (in_stack_000000d0 != (long *)0x0)) && (in_stack_00000658 != 0))
  {
    if (in_stack_00000668 != 0) {
      plVar4 = in_stack_000000d0 + 1;
      lVar3 = *in_stack_000000d0;
      uVar6 = CONCAT17(-(-1 < lVar3),
                       CONCAT16(-(-1 < (char)((ulong)lVar3 >> 0x30)),
                                CONCAT15(-(-1 < (char)((ulong)lVar3 >> 0x28)),
                                         CONCAT14(-(-1 < (char)((ulong)lVar3 >> 0x20)),
                                                  CONCAT13(-(-1 < (char)((ulong)lVar3 >> 0x18)),
                                                           CONCAT12(-(-1 < (char)((ulong)lVar3 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-1 < (char)((ulong)
                                                  lVar3 >> 8)),-(-1 < (char)lVar3)))))))) &
              0x8080808080808080;
      plVar2 = in_stack_000000d0;
      do {
        while (uVar6 == 0) {
          lVar3 = *plVar4;
          plVar4 = plVar4 + 1;
          plVar2 = plVar2 + -0x20;
          uVar6 = CONCAT17(-(-1 < lVar3),
                           CONCAT16(-(-1 < (char)((ulong)lVar3 >> 0x30)),
                                    CONCAT15(-(-1 < (char)((ulong)lVar3 >> 0x28)),
                                             CONCAT14(-(-1 < (char)((ulong)lVar3 >> 0x20)),
                                                      CONCAT13(-(-1 < (char)((ulong)lVar3 >> 0x18)),
                                                               CONCAT12(-(-1 < (char)((ulong)lVar3
                                                                                     >> 0x10)),
                                                                        CONCAT11(-(-1 < (char)((
                                                  ulong)lVar3 >> 8)),-(-1 < (char)lVar3)))))))) &
                  0x8080808080808080;
        }
        uVar1 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        uVar1 = LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) & 0x78;
        if (*(long *)((long)plVar2 + uVar1 * -4 + -0x20) != 0) {
          _free(*(undefined8 *)((long)plVar2 + uVar1 * -4 + -0x18));
        }
        uVar6 = uVar6 - 1 & uVar6;
        in_stack_00000668 = in_stack_00000668 + -1;
      } while (in_stack_00000668 != 0);
    }
    if (in_stack_00000658 * 0x21 != -0x29) {
      _free(in_stack_000000d0 + in_stack_00000658 * -4 + -4);
    }
  }
  if ((-0x7fffffffffffffff < in_stack_00000200) && (in_stack_00000200 != 0)) {
    _free(in_stack_00000120);
  }
  if ((-0x7fffffffffffffff < in_stack_000001d8) && (in_stack_000001d8 != 0)) {
    _free(in_stack_00000128);
  }
  if ((-0x7ffffffffffffffe < in_stack_000001e8) && (in_stack_000001e8 != 0)) {
    _free(in_stack_000000f0);
  }
  if ((in_stack_00000208 != -0x7fffffffffffffff) && (in_stack_00000208 != -0x8000000000000000)) {
    if (in_stack_00000640 != 0) {
      puVar5 = (undefined8 *)(in_stack_00000638 + 8);
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        in_stack_00000640 = in_stack_00000640 + -1;
      } while (in_stack_00000640 != 0);
    }
    if (in_stack_00000208 != 0) {
      _free(in_stack_00000638);
    }
  }
  if ((in_stack_000001f8 != -0x7fffffffffffffff) && (in_stack_000001f8 != -0x8000000000000000)) {
    if (in_stack_00000628 != 0) {
      puVar5 = (undefined8 *)(in_stack_00000620 + 8);
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        in_stack_00000628 = in_stack_00000628 + -1;
      } while (in_stack_00000628 != 0);
    }
    if (in_stack_000001f8 != 0) {
      _free(in_stack_00000620);
    }
  }
  if ((in_stack_000001a8 != -0x7fffffffffffffff) && (in_stack_000001a8 != -0x8000000000000000)) {
    if (in_stack_00000610 != 0) {
      puVar5 = (undefined8 *)(in_stack_00000608 + 8);
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        in_stack_00000610 = in_stack_00000610 + -1;
      } while (in_stack_00000610 != 0);
    }
    if (in_stack_000001a8 != 0) {
      _free(in_stack_00000608);
    }
  }
  if ((-0x7fffffffffffffff < in_stack_00000180) && (in_stack_00000180 != 0)) {
    _free(in_stack_00000100);
  }
  if ((-0x7fffffffffffffff < in_stack_00000188) && (in_stack_00000188 != 0)) {
    _free(in_stack_00000110);
  }
  if ((-0x7fffffffffffffff < in_stack_00000190) && (in_stack_00000190 != 0)) {
    _free(in_stack_000000f8);
  }
  if ((-0x7fffffffffffffff < in_stack_00000198) && (in_stack_00000198 != 0)) {
    _free(in_stack_00000108);
  }
  if (((in_stack_000001b8 & 1) != 0) && (in_stack_00000080 != 0)) {
    FUN_100cb56bc(&stack0x000005c8);
  }
  if (((in_stack_000001b0 & 1) != 0) && (in_stack_00000168 != 0)) {
    FUN_100cb56bc(&stack0x00000588);
  }
  if ((-0x7fffffffffffffff < in_stack_00000178) && (in_stack_00000178 != 0)) {
    _free(in_stack_00000118);
  }
  if ((in_stack_000001f0 != -0x7fffffffffffffff) &&
     (plVar4 = in_stack_00000570, in_stack_000001f0 != -0x8000000000000000)) {
    for (; in_stack_00000578 != 0; in_stack_00000578 = in_stack_00000578 + -1) {
      if (*plVar4 == -0x8000000000000000) {
        if (plVar4[1] != 0) {
          lVar3 = 0x10;
LAB_100679c18:
          _free(*(undefined8 *)((long)plVar4 + lVar3));
        }
      }
      else {
        if (*plVar4 != 0) {
          _free(plVar4[1]);
        }
        if ((plVar4[3] & 0x7fffffffffffffffU) != 0) {
          lVar3 = 0x20;
          goto LAB_100679c18;
        }
      }
      plVar4 = plVar4 + 6;
    }
    if (in_stack_000001f0 != 0) {
      _free(in_stack_00000570);
    }
  }
  if (((in_stack_000001c0 & 1) != 0) && (in_stack_00000088 != 0)) {
    FUN_100cb56bc(&stack0x00000538);
  }
  if ((in_stack_000001a0 != -0x7fffffffffffffff) && (in_stack_000001a0 != -0x8000000000000000)) {
    if (in_stack_00000528 != 0) {
      puVar5 = (undefined8 *)(in_stack_00000520 + 8);
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        in_stack_00000528 = in_stack_00000528 + -1;
      } while (in_stack_00000528 != 0);
    }
    if (in_stack_000001a0 != 0) {
      _free(in_stack_00000520);
    }
  }
  if ((-0x7fffffffffffffff < in_stack_00000170) && (in_stack_00000170 != 0)) {
    _free(in_stack_00000130);
  }
  if (*unaff_x20 == 2) {
    FUN_100de8910(&stack0x000002a8);
  }
  else {
    _memcpy(&stack0x000002d0);
    if (in_stack_00000160 != unaff_x24) {
      lVar3 = thunk_FUN_1087e422c(in_stack_00000138,&UNK_10b21cb90,&UNK_10b20a590);
      *unaff_x20 = 2;
      unaff_x20[1] = lVar3;
      FUN_100e180a8(&stack0x000002d0);
    }
    FUN_100de8910(&stack0x000002a8);
  }
  if (in_stack_00000260 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x00000260);
  }
  if (((long)in_stack_000001c8 < 0) &&
     ((in_stack_000001c8 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    FUN_100de6690(in_stack_00000210);
  }
  return;
}

