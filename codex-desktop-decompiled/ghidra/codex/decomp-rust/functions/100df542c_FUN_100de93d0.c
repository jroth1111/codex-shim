
void FUN_100de93d0(long param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long unaff_x23;
  ulong uVar14;
  ulong uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  long in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  FUN_100e05b5c();
  lVar9 = *(long *)(param_1 + 0x1b70);
  lVar12 = *(long *)(param_1 + 0x1b78);
  if (lVar12 != 0) {
    puVar13 = (undefined8 *)(lVar9 + 8);
    do {
      if (puVar13[-1] != 0) {
        _free(*puVar13);
      }
      puVar13 = puVar13 + 3;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  if (*(long *)(param_1 + 0x1b68) != 0) {
    _free(lVar9);
  }
  if (*(long *)(param_1 + 0x1ea0) == -0x8000000000000000 || *(long *)(param_1 + 0x1ea0) == 0) {
    lVar12 = *(long *)(param_1 + 0x1eb8);
  }
  else {
    _free(*(undefined8 *)(param_1 + 0x1ea8));
    lVar12 = *(long *)(param_1 + 0x1eb8);
  }
  if ((lVar12 != -0x8000000000000000) && (lVar12 != 0)) {
    _free(*(undefined8 *)(param_1 + 0x1ec0));
  }
  if ((*(long *)(param_1 + 0x1ed0) != -0x8000000000000000) && (*(long *)(param_1 + 0x1ed0) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x1ed8));
  }
  if (*(long *)(param_1 + 0x1b80) != 0) {
    _free(*(undefined8 *)(param_1 + 0x1b88));
  }
  FUN_100e1ccd8(param_1 + 0x980);
  FUN_100df5514(param_1 + 0xc30);
  lVar9 = *(long *)(param_1 + 0x1ba0);
  lVar12 = *(long *)(param_1 + 0x1ba8);
  if (lVar12 != 0) {
    puVar13 = (undefined8 *)(lVar9 + 8);
    do {
      if (puVar13[-1] != 0) {
        _free(*puVar13);
      }
      puVar13 = puVar13 + 3;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  if (*(long *)(param_1 + 0x1b98) != 0) {
    _free(lVar9);
  }
  lVar12 = **(long **)(param_1 + 0x23e0);
  **(long **)(param_1 + 0x23e0) = lVar12 + -1;
  LORelease();
  if (lVar12 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000102a3fc54(param_1 + 0x23e0);
  }
  plVar5 = *(long **)(param_1 + 0x23f0);
  if (plVar5 != (long *)0x0) {
    lVar12 = *plVar5;
    *plVar5 = lVar12 + -1;
    LORelease();
    if (lVar12 == 1) {
      DataMemoryBarrier(2,1);
      func_0x000102a3fc54(param_1 + 0x23f0);
    }
  }
  if ((*(long *)(param_1 + 0x1ee8) != -0x8000000000000000) && (*(long *)(param_1 + 0x1ee8) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x1ef0));
  }
  if ((*(long *)(param_1 + 0x1f00) != -0x8000000000000000) && (*(long *)(param_1 + 0x1f00) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x1f08));
  }
  if ((*(long *)(param_1 + 0x1f18) != -0x8000000000000000) && (*(long *)(param_1 + 0x1f18) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x1f20));
  }
  if ((*(long *)(param_1 + 0x1f30) != -0x8000000000000000) && (*(long *)(param_1 + 0x1f30) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x1f38));
  }
  if ((*(long *)(param_1 + 0x1f48) != -0x8000000000000000) && (*(long *)(param_1 + 0x1f48) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x1f50));
  }
  lVar12 = *(long *)(param_1 + 0x1f60);
  if (lVar12 != -0x8000000000000000) {
    lVar10 = *(long *)(param_1 + 0x1f68);
    lVar9 = *(long *)(param_1 + 0x1f70);
    if (lVar9 != 0) {
      puVar13 = (undefined8 *)(lVar10 + 8);
      do {
        if (puVar13[-1] != 0) {
          _free(*puVar13);
        }
        puVar13 = puVar13 + 3;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    if (lVar12 != 0) {
      _free(lVar10);
    }
  }
  lVar12 = *(long *)(param_1 + 0x1f78);
  if (lVar12 != -0x8000000000000000) {
    lVar10 = *(long *)(param_1 + 0x1f80);
    lVar9 = *(long *)(param_1 + 0x1f88);
    if (lVar9 != 0) {
      puVar13 = (undefined8 *)(lVar10 + 8);
      do {
        if (puVar13[-1] != 0) {
          _free(*puVar13);
        }
        puVar13 = puVar13 + 3;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    if (lVar12 != 0) {
      _free(lVar10);
    }
  }
  lVar12 = *(long *)(param_1 + 0x2438);
  if (lVar12 != 0) {
    lVar9 = *(long *)(param_1 + 0x2448);
    if (lVar9 != 0) {
      plVar5 = *(long **)(param_1 + 0x2430);
      plVar7 = plVar5 + 1;
      lVar10 = *plVar5;
      uVar14 = CONCAT17(-(-1 < lVar10),
                        CONCAT16(-(-1 < (char)((ulong)lVar10 >> 0x30)),
                                 CONCAT15(-(-1 < (char)((ulong)lVar10 >> 0x28)),
                                          CONCAT14(-(-1 < (char)((ulong)lVar10 >> 0x20)),
                                                   CONCAT13(-(-1 < (char)((ulong)lVar10 >> 0x18)),
                                                            CONCAT12(-(-1 < (char)((ulong)lVar10 >>
                                                                                  0x10)),
                                                                     CONCAT11(-(-1 < (char)((ulong)
                                                  lVar10 >> 8)),-(-1 < (char)lVar10)))))))) &
               0x8080808080808080;
      do {
        while (uVar14 == 0) {
          lVar10 = *plVar7;
          plVar5 = plVar5 + -0x20;
          plVar7 = plVar7 + 1;
          uVar14 = CONCAT17(-(-1 < lVar10),
                            CONCAT16(-(-1 < (char)((ulong)lVar10 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar10 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar10 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar10 >> 0x18)
                                                                 ),CONCAT12(-(-1 < (char)((ulong)
                                                  lVar10 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar10 >> 8)),
                                                           -(-1 < (char)lVar10)))))))) &
                   0x8080808080808080;
        }
        uVar6 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) & 0x78;
        if (*(long *)((long)plVar5 + uVar6 * -4 + -0x20) != 0) {
          _free(*(undefined8 *)((long)plVar5 + uVar6 * -4 + -0x18));
        }
        uVar14 = uVar14 - 1 & uVar14;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    if (lVar12 * 0x21 != -0x29) {
      _free(*(long *)(param_1 + 0x2430) + lVar12 * -0x20 + -0x20);
    }
  }
  lVar12 = *(long *)(param_1 + 0x1f98);
  if (lVar12 != -0x8000000000000000) {
    lVar10 = *(long *)(param_1 + 0x1fa0);
    lVar9 = *(long *)(param_1 + 0x1fa8);
    if (lVar9 != 0) {
      puVar13 = (undefined8 *)(lVar10 + 8);
      do {
        if (puVar13[-1] != 0) {
          _free(*puVar13);
        }
        puVar13 = puVar13 + 3;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    if (lVar12 != 0) {
      _free(lVar10);
    }
  }
  lVar12 = *(long *)(param_1 + 0x1fb0);
  if (lVar12 != -0x8000000000000000) {
    lVar10 = *(long *)(param_1 + 0x1fb8);
    lVar9 = *(long *)(param_1 + 0x1fc0);
    if (lVar9 != 0) {
      puVar13 = (undefined8 *)(lVar10 + 8);
      do {
        if (puVar13[-1] != 0) {
          _free(*puVar13);
        }
        puVar13 = puVar13 + 3;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    if (lVar12 != 0) {
      _free(lVar10);
    }
  }
  if (*(long *)(param_1 + 0x1fc8) == -0x8000000000000000 || *(long *)(param_1 + 0x1fc8) == 0) {
    lVar12 = *(long *)(param_1 + 0x1fe0);
  }
  else {
    _free(*(undefined8 *)(param_1 + 0x1fd0));
    lVar12 = *(long *)(param_1 + 0x1fe0);
  }
  if ((lVar12 != -0x8000000000000000) && (lVar12 != 0)) {
    _free(*(undefined8 *)(param_1 + 0x1fe8));
  }
  FUN_100e0bbc0(param_1 + 0xf48);
  FUN_100e0ba70(param_1 + 0x1088);
  FUN_100e18a28(param_1 + 0x10e8);
  FUN_100e127ac(param_1 + 0x1188);
  FUN_100e1bc08(param_1 + 0x13a8);
  FUN_100e2093c(param_1 + 0x1668);
  FUN_100e0bbc0(param_1 + 0x17e8);
  FUN_100e0bbc0(param_1 + 0x1928);
  FUN_100e186f8(param_1 + 0x1a68);
  if (*(long *)(param_1 + 0x1bb0) != 0) {
    _free(*(undefined8 *)(param_1 + 0x1bb8));
  }
  lVar9 = *(long *)(param_1 + 0x1bd0);
  lVar12 = *(long *)(param_1 + 0x1bd8);
  if (lVar12 != 0) {
    puVar13 = (undefined8 *)(lVar9 + 8);
    do {
      if (puVar13[-1] != 0) {
        _free(*puVar13);
      }
      puVar13 = puVar13 + 3;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  if (*(long *)(param_1 + 0x1bc8) != 0) {
    _free(lVar9);
  }
  FUN_100cf8c18(param_1 + 0x2460);
  lVar12 = **(long **)(param_1 + 0x2490);
  **(long **)(param_1 + 0x2490) = lVar12 + -1;
  LORelease();
  if (lVar12 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hdb6aef29e0ecda98E(param_1 + 0x2490);
  }
  plVar5 = *(long **)(param_1 + 0x24a0);
  if (plVar5 != (long *)0x0) {
    lVar12 = *plVar5;
    *plVar5 = lVar12 + -1;
    LORelease();
    if (lVar12 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hdb6aef29e0ecda98E(param_1 + 0x24a0);
    }
  }
  if ((*(long *)(param_1 + 0x1ff8) != -0x8000000000000000) && (*(long *)(param_1 + 0x1ff8) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x2000));
  }
  FUN_100d04a7c(param_1 + 0x24b0);
  lVar9 = *(long *)(param_1 + 0x1be8);
  lVar12 = *(long *)(param_1 + 0x1bf0);
  if (lVar12 != 0) {
    puVar13 = (undefined8 *)(lVar9 + 8);
    do {
      if (puVar13[-1] != 0) {
        _free(*puVar13);
      }
      puVar13 = puVar13 + 3;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  if (*(long *)(param_1 + 0x1be0) != 0) {
    _free(lVar9);
  }
  uVar14 = *(ulong *)(param_1 + 0x24e8);
  if (uVar14 != 0) {
    uStack_88 = *(undefined8 *)(param_1 + 0x24f0);
    uStack_98 = 0;
    uStack_78 = 0;
    uStack_90 = uVar14;
    uStack_70 = uVar14;
    uStack_68 = uStack_88;
  }
  uStack_a0 = (ulong)(uVar14 != 0);
  uStack_80 = uStack_a0;
  while (FUN_100f3b678(&stack0xffffffffffffffa8,&uStack_a0), in_stack_ffffffffffffffa8 != 0) {
    lVar12 = in_stack_ffffffffffffffa8 + in_stack_ffffffffffffffb8 * 0x18;
    if (*(long *)(lVar12 + 8) != 0) {
      _free(*(undefined8 *)(lVar12 + 0x10));
    }
    FUN_100dff5f8(in_stack_ffffffffffffffa8 + in_stack_ffffffffffffffb8 * 0x48 + 0x110);
  }
  if (*(long *)(param_1 + 0x2010) == -0x8000000000000000 || *(long *)(param_1 + 0x2010) == 0) {
    if (*(long *)(param_1 + 0x2028) == -0x8000000000000000 || *(long *)(param_1 + 0x2028) == 0)
    goto LAB_100de9a08;
LAB_100de9dc8:
    _free(*(undefined8 *)(param_1 + 0x2030));
    lVar12 = *(long *)(param_1 + 0x1bf8);
  }
  else {
    _free(*(undefined8 *)(param_1 + 0x2018));
    if (*(long *)(param_1 + 0x2028) != -0x8000000000000000 && *(long *)(param_1 + 0x2028) != 0)
    goto LAB_100de9dc8;
LAB_100de9a08:
    lVar12 = *(long *)(param_1 + 0x1bf8);
  }
  if (lVar12 != 0) {
    _free(*(undefined8 *)(param_1 + 0x1c00));
  }
  if (*(long *)(param_1 + 0x1c10) != 0) {
    _free(*(undefined8 *)(param_1 + 0x1c18));
  }
  if (*(long *)(param_1 + 0x1c28) != 0) {
    _free(*(undefined8 *)(param_1 + 0x1c30));
  }
  if ((*(ulong *)(param_1 + 0x2078) & 0x7fffffffffffffff) == 0) {
    plVar5 = *(long **)(param_1 + 0x2500);
  }
  else {
    _free(*(undefined8 *)(param_1 + 0x2080));
    plVar5 = *(long **)(param_1 + 0x2500);
  }
  if (plVar5 != (long *)0x0) {
    lVar12 = *plVar5;
    *plVar5 = lVar12 + -1;
    LORelease();
    if (lVar12 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hf037e8b028e32f13E(param_1 + 0x2500);
    }
  }
  if ((*(long *)(param_1 + 0x2090) != -0x8000000000000000) && (*(long *)(param_1 + 0x2090) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x2098));
  }
  if ((*(long *)(param_1 + 0x20a8) != -0x8000000000000000) && (*(long *)(param_1 + 0x20a8) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x20b0));
  }
  if ((*(long *)(param_1 + 0x20c0) != -0x8000000000000000) && (*(long *)(param_1 + 0x20c0) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x20c8));
  }
  if ((*(long *)(param_1 + 0x20d8) != -0x8000000000000000) && (*(long *)(param_1 + 0x20d8) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x20e0));
  }
  lVar12 = *(long *)(param_1 + 0x20f0);
  if (lVar12 != -0x8000000000000000) {
    lVar11 = *(long *)(param_1 + 0x20f8);
    lVar9 = lVar11;
    for (lVar10 = *(long *)(param_1 + 0x2100); lVar10 != 0; lVar10 = lVar10 + -1) {
      FUN_100e0f5d0(lVar9);
      lVar9 = lVar9 + 0x1f8;
    }
    if (lVar12 != 0) {
      _free(lVar11);
    }
  }
  if (*(long *)(param_1 + 0x1c40) != 0) {
    _free(*(undefined8 *)(param_1 + 0x1c48));
  }
  if ((*(long *)(param_1 + 0x2108) != -0x8000000000000000) && (*(long *)(param_1 + 0x2108) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x2110));
  }
  if ((*(long *)(param_1 + 0x2120) != -0x8000000000000000) && (*(long *)(param_1 + 0x2120) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x2128));
  }
  if ((*(long *)(param_1 + 0x2138) != -0x8000000000000000) && (*(long *)(param_1 + 0x2138) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x2140));
  }
  if ((*(long *)(param_1 + 0x2150) != -0x8000000000000000) && (*(long *)(param_1 + 0x2150) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x2158));
  }
  if ((*(long *)(param_1 + 0x2168) != -0x8000000000000000) && (*(long *)(param_1 + 0x2168) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x2170));
  }
  if ((*(long *)(param_1 + 0x2180) != -0x8000000000000000) && (*(long *)(param_1 + 0x2180) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x2188));
  }
  if ((*(long *)(param_1 + 0x2198) != -0x8000000000000000) && (*(long *)(param_1 + 0x2198) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x21a0));
  }
  if ((*(long *)(param_1 + 0x21b0) != -0x8000000000000000) && (*(long *)(param_1 + 0x21b0) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x21b8));
  }
  if ((*(long *)(param_1 + 0x21c8) != -0x8000000000000000) && (*(long *)(param_1 + 0x21c8) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x21d0));
  }
  if ((*(long *)(param_1 + 0x21e0) != -0x8000000000000000) && (*(long *)(param_1 + 0x21e0) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x21e8));
  }
  if ((*(ulong *)(param_1 + 0x21f8) & 0x7fffffffffffffff) == 0) {
    lVar12 = *(long *)(param_1 + 0x2210);
  }
  else {
    _free(*(undefined8 *)(param_1 + 0x2200));
    lVar12 = *(long *)(param_1 + 0x2210);
  }
  if (lVar12 != -0x8000000000000000) {
    lVar10 = *(long *)(param_1 + 0x2218);
    lVar9 = *(long *)(param_1 + 0x2220);
    if (lVar9 != 0) {
      puVar13 = (undefined8 *)(lVar10 + 8);
      do {
        if (puVar13[-1] != 0) {
          _free(*puVar13);
        }
        puVar13 = puVar13 + 3;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    if (lVar12 != 0) {
      _free(lVar10);
    }
  }
  lVar12 = **(long **)(param_1 + 0x2408);
  **(long **)(param_1 + 0x2408) = lVar12 + -1;
  LORelease();
  if (lVar12 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000102a3fc54(param_1 + 0x2408);
  }
  plVar5 = *(long **)(param_1 + 0x2418);
  if (plVar5 != (long *)0x0) {
    lVar12 = *plVar5;
    *plVar5 = lVar12 + -1;
    LORelease();
    if (lVar12 == 1) {
      DataMemoryBarrier(2,1);
      func_0x000102a3fc54(param_1 + 0x2418);
    }
  }
  FUN_100e78c9c(param_1 + 0x22c8);
  if ((*(long *)(param_1 + 0x2228) != -0x8000000000000000) && (*(long *)(param_1 + 0x2228) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x2230));
  }
  if ((*(long *)(param_1 + 0x2240) != -0x8000000000000000) && (*(long *)(param_1 + 0x2240) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x2248));
  }
  if ((*(long *)(param_1 + 0x2258) != -0x8000000000000000) && (*(long *)(param_1 + 0x2258) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x2260));
  }
  if ((*(long *)(param_1 + 0x2270) != -0x8000000000000000) && (*(long *)(param_1 + 0x2270) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x2278));
  }
  FUN_100e68ba8(param_1 + 0x2378);
  uVar14 = *(ulong *)(param_1 + 0x2348);
  if (uVar14 != 0x8000000000000006) {
    uVar6 = uVar14 ^ 0x8000000000000000;
    if (-1 < (long)uVar14) {
      uVar6 = 1;
    }
    if (uVar6 == 1) {
      if (uVar14 != 0) {
        _free(*(undefined8 *)(param_1 + 0x2350));
      }
      if (*(long *)(param_1 + 0x2360) != 0) {
        lVar12 = 0x20;
        goto LAB_100de9df4;
      }
    }
    else if (((uVar6 == 3) || (uVar6 == 4)) && (*(long *)(param_1 + 0x2350) != 0)) {
      lVar12 = 0x10;
LAB_100de9df4:
      _free(*(undefined8 *)(param_1 + 0x2348 + lVar12));
    }
  }
  FUN_100e8831c(param_1 + 0x23c8);
  if ((*(long *)(param_1 + 0x22b0) != -0x8000000000000000) && (*(long *)(param_1 + 0x22b0) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x22b8));
  }
  FUN_100decb54(param_1 + 0xbc8);
  lVar9 = *(long *)(param_1 + 0x1c60);
  lVar12 = *(long *)(param_1 + 0x1c68);
  if (lVar12 != 0) {
    puVar13 = (undefined8 *)(lVar9 + 8);
    do {
      if (puVar13[-1] != 0) {
        _free(*puVar13);
      }
      puVar13 = puVar13 + 4;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  if (*(long *)(param_1 + 0x1c58) != 0) {
    _free(lVar9);
  }
  lVar9 = *(long *)(param_1 + 0x1c78);
  lVar12 = *(long *)(param_1 + 0x1c80);
  if (lVar12 != 0) {
    puVar13 = (undefined8 *)(lVar9 + 8);
    do {
      if (puVar13[-1] != 0) {
        _free(*puVar13);
      }
      puVar13 = puVar13 + 4;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  if (*(long *)(param_1 + 0x1c70) != 0) {
    _free(lVar9);
  }
  if (*(long *)(param_1 + 0x1c88) != 0) {
    _free(*(undefined8 *)(param_1 + 0x1c90));
  }
  FUN_100e05ca4(param_1 + 0x1ca0);
  FUN_100e05ca4(param_1 + 0x1d38);
  FUN_100e05ca4(param_1 + 0x1dd0);
  uVar14 = *(ulong *)(param_1 + 0x1e68);
  if (uVar14 != 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0x1e70);
    uStack_88 = 0;
    uStack_68 = 0;
    uStack_80 = uVar14;
  }
  uStack_90 = (ulong)(uVar14 != 0);
  uStack_70 = uStack_90;
  while (FUN_100f3a3c8(&stack0xffffffffffffffb8,&uStack_90), in_stack_ffffffffffffffb8 != 0) {
    lVar12 = in_stack_ffffffffffffffb8 + unaff_x23 * 0x18;
    if (*(long *)(lVar12 + 8) != 0) {
      _free(*(undefined8 *)(lVar12 + 0x10));
    }
    if (*(long *)(lVar12 + 0x110) != 0) {
      _free(*(undefined8 *)(lVar12 + 0x118));
    }
  }
  plVar5 = *(long **)(param_1 + 0x1e80);
  uVar14 = *(ulong *)(param_1 + 0x1e88);
  bVar3 = plVar5 != (long *)0x0;
  lVar12 = *(long *)(param_1 + 0x1e90);
  if (plVar5 == (long *)0x0 || lVar12 == 0) {
    plVar7 = plVar5;
    if (plVar5 == (long *)0x0) {
      return;
    }
  }
  else {
    plVar7 = (long *)0x0;
    do {
      if (!bVar3) {
        func_0x000108a07a20(&UNK_10b2382e0);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100d8578c);
        (*pcVar2)();
      }
      if (plVar7 == (long *)0x0) {
        for (; plVar7 = plVar5, uVar14 != 0; uVar14 = uVar14 - 1) {
          plVar5 = (long *)plVar7[0x44];
        }
        plVar5 = (long *)0x0;
        uVar14 = 0;
        if (*(short *)((long)plVar7 + 0x21a) == 0) goto LAB_100d8554c;
      }
      else if (*(ushort *)((long)plVar7 + 0x21a) <= uVar14) {
LAB_100d8554c:
        do {
          plVar8 = (long *)*plVar7;
          if (plVar8 == (long *)0x0) {
            _free(plVar7);
            func_0x000108a07a20(&UNK_10b2382b0);
LAB_100d85778:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100d8577c);
            (*pcVar2)();
          }
          plVar5 = (long *)((long)plVar5 + 1);
          uVar1 = *(ushort *)(plVar7 + 0x43);
          uVar14 = (ulong)uVar1;
          _free(plVar7);
          plVar7 = plVar8;
        } while (*(ushort *)((long)plVar8 + 0x21a) <= uVar1);
      }
      if (plVar5 == (long *)0x0) {
        plVar5 = plVar7 + uVar14 * 3 + 1;
        lVar9 = *plVar5;
        uVar14 = uVar14 + 1;
      }
      else {
        plVar8 = plVar7 + uVar14 + 1;
        do {
          plVar8 = (long *)plVar8[0x44];
          plVar5 = (long *)((long)plVar5 + -1);
        } while (plVar5 != (long *)0x0);
        plVar5 = plVar7 + uVar14 * 3 + 1;
        lVar9 = *plVar5;
        uVar14 = 0;
        plVar7 = plVar8;
      }
      if (lVar9 != 0) {
        _free(plVar5[1]);
      }
      plVar8 = (long *)plVar5[0x21];
      if (plVar8 != (long *)0x0) {
        uVar6 = plVar5[0x22];
        lVar9 = plVar5[0x23];
        plVar5 = plVar8;
        if (lVar9 == 0) {
          for (; uVar6 != 0; uVar6 = uVar6 - 1) {
            plVar5 = (long *)plVar5[0x44];
          }
        }
        else {
          plVar5 = (long *)0x0;
          do {
            if (plVar5 == (long *)0x0) {
              for (; plVar5 = plVar8, uVar6 != 0; uVar6 = uVar6 - 1) {
                plVar8 = (long *)plVar5[0x44];
              }
              plVar8 = (long *)0x0;
              uVar6 = 0;
              if (*(short *)((long)plVar5 + 0x21a) == 0) goto LAB_100d85614;
            }
            else if (*(ushort *)((long)plVar5 + 0x21a) <= uVar6) {
LAB_100d85614:
              do {
                plVar4 = (long *)*plVar5;
                if (plVar4 == (long *)0x0) {
                  _free();
                  func_0x000108a07a20(&UNK_10b2382b0);
                  goto LAB_100d85778;
                }
                plVar8 = (long *)((long)plVar8 + 1);
                uVar1 = *(ushort *)(plVar5 + 0x43);
                uVar6 = (ulong)uVar1;
                _free();
                plVar5 = plVar4;
              } while (*(ushort *)((long)plVar4 + 0x21a) <= uVar1);
            }
            if (plVar8 == (long *)0x0) {
              plVar8 = plVar5 + uVar6 * 3 + 1;
              lVar10 = *plVar8;
              uVar6 = uVar6 + 1;
            }
            else {
              plVar4 = plVar5 + uVar6 + 1;
              do {
                plVar4 = (long *)plVar4[0x44];
                plVar8 = (long *)((long)plVar8 + -1);
              } while (plVar8 != (long *)0x0);
              plVar8 = plVar5 + uVar6 * 3 + 1;
              lVar10 = *plVar8;
              uVar6 = 0;
              plVar5 = plVar4;
            }
            if (lVar10 != 0) {
              _free(plVar8[1]);
            }
            if (plVar8[0x21] != 0) {
              _free(plVar8[0x22]);
            }
            plVar8 = (long *)0x0;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
        plVar8 = (long *)*plVar5;
        while (plVar4 = plVar8, plVar4 != (long *)0x0) {
          _free(plVar5);
          plVar5 = plVar4;
          plVar8 = (long *)*plVar4;
        }
        _free(plVar5);
      }
      plVar5 = (long *)0x0;
      bVar3 = true;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    if (plVar7 != (long *)0x0) goto LAB_100d85708;
  }
  for (; uVar14 != 0; uVar14 = uVar14 - 1) {
    plVar7 = (long *)plVar7[0x44];
  }
LAB_100d85708:
  plVar5 = (long *)*plVar7;
  while (plVar8 = plVar5, plVar8 != (long *)0x0) {
    _free(plVar7);
    plVar7 = plVar8;
    plVar5 = (long *)*plVar8;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(plVar7);
  return;
}

