
undefined1  [16] FUN_100f47f24(void)

{
  ulong uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  long *plVar4;
  ulong uVar5;
  long unaff_x19;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long unaff_x24;
  ulong uVar9;
  long unaff_x28;
  long lVar10;
  long in_stack_00000040;
  undefined1 *in_stack_00000050;
  long in_stack_000003e0;
  long *in_stack_00000410;
  long in_stack_00000418;
  long in_stack_00000428;
  long in_stack_00000490;
  undefined8 in_stack_00000498;
  long in_stack_000033d0;
  undefined8 in_stack_000033d8;
  
  uVar5 = FUN_108858fa8(s_failed_to_load_marketplace_s___108ad4573,&stack0x00007500);
  if (in_stack_00000490 != 0) {
    _free(in_stack_00000498);
  }
  if (in_stack_00000418 != 0) {
    if (in_stack_00000428 != 0) {
      plVar8 = in_stack_00000410 + 1;
      lVar10 = *in_stack_00000410;
      uVar9 = CONCAT17(-(-1 < lVar10),
                       CONCAT16(-(-1 < (char)((ulong)lVar10 >> 0x30)),
                                CONCAT15(-(-1 < (char)((ulong)lVar10 >> 0x28)),
                                         CONCAT14(-(-1 < (char)((ulong)lVar10 >> 0x20)),
                                                  CONCAT13(-(-1 < (char)((ulong)lVar10 >> 0x18)),
                                                           CONCAT12(-(-1 < (char)((ulong)lVar10 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-1 < (char)((ulong)
                                                  lVar10 >> 8)),-(-1 < (char)lVar10)))))))) &
              0x8080808080808080;
      plVar4 = in_stack_00000410;
      do {
        while (uVar9 == 0) {
          lVar10 = *plVar8;
          plVar4 = plVar4 + -0x18;
          plVar8 = plVar8 + 1;
          uVar9 = CONCAT17(-(-1 < lVar10),
                           CONCAT16(-(-1 < (char)((ulong)lVar10 >> 0x30)),
                                    CONCAT15(-(-1 < (char)((ulong)lVar10 >> 0x28)),
                                             CONCAT14(-(-1 < (char)((ulong)lVar10 >> 0x20)),
                                                      CONCAT13(-(-1 < (char)((ulong)lVar10 >> 0x18))
                                                               ,CONCAT12(-(-1 < (char)((ulong)lVar10
                                                                                      >> 0x10)),
                                                                         CONCAT11(-(-1 < (char)((
                                                  ulong)lVar10 >> 8)),-(-1 < (char)lVar10)))))))) &
                  0x8080808080808080;
        }
        uVar1 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        iVar2 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
        if (plVar4[(long)-iVar2 * 3 + -3] != 0) {
          _free(plVar4[(long)-iVar2 * 3 + -2]);
        }
        uVar9 = uVar9 - 1 & uVar9;
        in_stack_00000428 = in_stack_00000428 + -1;
      } while (in_stack_00000428 != 0);
    }
    if (in_stack_00000418 * 0x19 != -0x21) {
      _free(in_stack_00000410 + in_stack_00000418 * -3 + -3);
    }
  }
  func_0x000100e81830(&stack0x000003f8);
  if (unaff_x28 != 0) {
    func_0x000100e5fd40(&stack0x000003c8);
  }
  if (unaff_x24 != 0) {
    puVar6 = (undefined8 *)(in_stack_00000040 + 0x20);
    do {
      if (puVar6[-4] != 0) {
        _free(puVar6[-3]);
      }
      if (puVar6[-1] != 0) {
        _free(*puVar6);
      }
      puVar6 = puVar6 + 6;
      unaff_x24 = unaff_x24 + -1;
    } while (unaff_x24 != 0);
  }
  if (in_stack_000003e0 != 0) {
    _free(in_stack_00000040);
  }
  FUN_100e05b5c(&stack0x00002a70);
  if (in_stack_000033d0 != 0) {
    _free(in_stack_000033d8);
  }
  FUN_100e1955c(&stack0x00000070);
  FUN_100de93d0(&stack0x00000528);
  *in_stack_00000050 = 1;
  if (uVar5 == 0) {
    if ((*(byte *)(unaff_x19 + 0xd9) & 1) != 0) {
      FUN_100e76384(unaff_x19 + 0xc0);
    }
    *(undefined4 *)(unaff_x19 + 0xd9) = 0;
    lVar10 = *(long *)(unaff_x19 + 0x68);
    lVar7 = *(long *)(unaff_x19 + 0x70);
    if (lVar7 != 0) {
      puVar6 = (undefined8 *)(lVar10 + 8);
      do {
        if (puVar6[-1] != 0) {
          _free(*puVar6);
        }
        puVar6 = puVar6 + 3;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    uVar5 = 0;
    goto LAB_100f48564;
  }
  if ((*(byte *)(unaff_x19 + 0xd9) & 1) != 0) {
    FUN_100e76384(unaff_x19 + 0xc0);
  }
  *(undefined1 *)(unaff_x19 + 0xd9) = 0;
  lVar10 = *(long *)(unaff_x19 + 0x78);
  uVar9 = lVar10 + 0x8000000000000001U & lVar10 >> 0x3f;
  if ((long)uVar9 < 2) {
    if ((uVar9 == 0) && ((*(byte *)(unaff_x19 + 0xda) & 1) != 0)) {
      if (lVar10 != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x80));
      }
      if ((*(long *)(unaff_x19 + 0xa8) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0xa8) != 0)
         ) {
        _free(*(undefined8 *)(unaff_x19 + 0xb0));
      }
      lVar10 = *(long *)(unaff_x19 + 0x98);
      lVar7 = *(long *)(unaff_x19 + 0xa0);
      if (lVar7 != 0) {
        puVar6 = (undefined8 *)(lVar10 + 8);
        do {
          if (puVar6[-1] != 0) {
            _free(*puVar6);
          }
          puVar6 = puVar6 + 3;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      if (*(long *)(unaff_x19 + 0x90) != 0) {
LAB_100f4752c:
        _free(lVar10);
      }
    }
  }
  else if (uVar9 == 2) {
    if ((*(byte *)(unaff_x19 + 0xdb) & 1) != 0) {
      uVar9 = *(ulong *)(unaff_x19 + 0x80) & 0x7fffffffffffffff;
joined_r0x000100f47478:
      if (uVar9 != 0) {
        lVar10 = *(long *)(unaff_x19 + 0x88);
        goto LAB_100f4752c;
      }
    }
  }
  else if ((*(byte *)(unaff_x19 + 0xdc) & 1) != 0) {
    uVar9 = *(ulong *)(unaff_x19 + 0x80);
    goto joined_r0x000100f47478;
  }
  *(undefined2 *)(unaff_x19 + 0xda) = 0;
  *(undefined1 *)(unaff_x19 + 0xdc) = 0;
  lVar10 = *(long *)(unaff_x19 + 0x68);
  lVar7 = *(long *)(unaff_x19 + 0x70);
  if (lVar7 != 0) {
    puVar6 = (undefined8 *)(lVar10 + 8);
    do {
      if (puVar6[-1] != 0) {
        _free(*puVar6);
      }
      puVar6 = puVar6 + 3;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
LAB_100f48564:
  if (*(long *)(unaff_x19 + 0x60) != 0) {
    _free(lVar10);
  }
  *(undefined1 *)(unaff_x19 + 0xd8) = 1;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar5;
  return auVar3 << 0x40;
}

