
void FUN_1038dbf20(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  ulong uStack_140;
  long *plStack_138;
  long lStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  long lStack_118;
  long *plStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  ulong uStack_b0;
  long *plStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  puStack_120 = (undefined1 *)&uStack_170;
  plStack_148 = (long *)*param_2;
  lVar7 = param_2[1];
  lStack_128 = param_2[3];
  lVar10 = *plStack_148;
  plStack_150 = plStack_148;
  plStack_158 = plStack_148;
  if (lVar7 != 0) {
    plStack_150 = plStack_148 + lVar7 * -10 + -10;
    plStack_158 = (long *)(lVar7 * 0x51 + 0x59);
  }
  lStack_160 = 0;
  if (lVar7 != 0) {
    lStack_160 = 8;
  }
  uStack_140 = CONCAT17(-(-1 < lVar10),
                        CONCAT16(-(-1 < (char)((ulong)lVar10 >> 0x30)),
                                 CONCAT15(-(-1 < (char)((ulong)lVar10 >> 0x28)),
                                          CONCAT14(-(-1 < (char)((ulong)lVar10 >> 0x20)),
                                                   CONCAT13(-(-1 < (char)((ulong)lVar10 >> 0x18)),
                                                            CONCAT12(-(-1 < (char)((ulong)lVar10 >>
                                                                                  0x10)),
                                                                     CONCAT11(-(-1 < (char)((ulong)
                                                  lVar10 >> 8)),-(-1 < (char)lVar10)))))))) &
               0x8080808080808080;
  plStack_138 = plStack_148 + 1;
  lStack_130 = (long)plStack_148 + lVar7 + 1;
  uStack_170 = param_3;
  uStack_168 = param_4;
  func_0x000103899a3c(&lStack_100,&lStack_160);
  if (lStack_100 == -0x8000000000000000) {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
    plVar6 = plStack_148;
    uVar9 = uStack_140;
    plVar8 = plStack_138;
    for (lVar7 = lStack_128; lVar7 != 0; lVar7 = lVar7 + -1) {
      while (uVar9 == 0) {
        lVar10 = *plVar8;
        plVar6 = plVar6 + -0x50;
        plVar8 = plVar8 + 1;
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
      }
      uVar1 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      iVar2 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
      if (plVar6[(long)-iVar2 * 10 + -10] != 0) {
        _free(plVar6[(long)-iVar2 * 10 + -9]);
      }
      uVar9 = uVar9 - 1 & uVar9;
      func_0x00010392e9f0(plVar6 + (long)-iVar2 * 10 + -7);
    }
    if ((lStack_160 != 0) && (plStack_158 != (long *)0x0)) {
      _free(plStack_150);
    }
  }
  else {
    plVar6 = (long *)_malloc(0xc0);
    if (plVar6 == (long *)0x0) {
      func_0x0001087c9084(8,0xc0);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1038dc1dc);
      (*pcVar5)();
    }
    plVar6[1] = lStack_f8;
    *plVar6 = lStack_100;
    plVar6[3] = lStack_e8;
    plVar6[2] = lStack_f0;
    plVar6[5] = lStack_d8;
    plVar6[4] = lStack_e0;
    lStack_118 = 4;
    lStack_108 = 1;
    plStack_a8 = plStack_138;
    uStack_b0 = uStack_140;
    lStack_98 = lStack_128;
    lStack_a0 = lStack_130;
    puStack_90 = puStack_120;
    lVar7 = 0x30;
    plStack_c8 = plStack_158;
    lStack_d0 = lStack_160;
    plStack_b8 = plStack_148;
    plStack_c0 = plStack_150;
    plStack_110 = plVar6;
    while (lVar4 = lStack_108, func_0x000103899a3c(&lStack_80,&lStack_d0), plVar8 = plStack_b8,
          uVar9 = uStack_b0, plVar3 = plStack_a8, lVar10 = lStack_98,
          lStack_80 != -0x8000000000000000) {
      if (lVar4 == lStack_118) {
        FUN_108950dcc(&lStack_118,lVar4,1,8,0x30);
        plVar6 = plStack_110;
      }
      plVar8 = (long *)((long)plVar6 + lVar7);
      plVar8[3] = lStack_68;
      plVar8[2] = lStack_70;
      plVar8[5] = lStack_58;
      plVar8[4] = lStack_60;
      plVar8[1] = lStack_78;
      *plVar8 = lStack_80;
      lStack_108 = lVar4 + 1;
      lVar7 = lVar7 + 0x30;
    }
    for (; lVar10 != 0; lVar10 = lVar10 + -1) {
      while (uVar9 == 0) {
        lVar7 = *plVar3;
        plVar8 = plVar8 + -0x50;
        plVar3 = plVar3 + 1;
        uVar9 = CONCAT17(-(-1 < lVar7),
                         CONCAT16(-(-1 < (char)((ulong)lVar7 >> 0x30)),
                                  CONCAT15(-(-1 < (char)((ulong)lVar7 >> 0x28)),
                                           CONCAT14(-(-1 < (char)((ulong)lVar7 >> 0x20)),
                                                    CONCAT13(-(-1 < (char)((ulong)lVar7 >> 0x18)),
                                                             CONCAT12(-(-1 < (char)((ulong)lVar7 >>
                                                                                   0x10)),
                                                                      CONCAT11(-(-1 < (char)((ulong)
                                                  lVar7 >> 8)),-(-1 < (char)lVar7)))))))) &
                0x8080808080808080;
      }
      uVar1 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      iVar2 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
      if (plVar8[(long)-iVar2 * 10 + -10] != 0) {
        _free(plVar8[(long)-iVar2 * 10 + -9]);
      }
      func_0x00010392e9f0(plVar8 + (long)-iVar2 * 10 + -7);
      uVar9 = uVar9 - 1 & uVar9;
    }
    if ((lStack_d0 != 0) && (plStack_c8 != (long *)0x0)) {
      _free(plStack_c0);
    }
    param_1[1] = (long)plStack_110;
    *param_1 = lStack_118;
    param_1[2] = lStack_108;
  }
  return;
}

