
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e68574(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  code *pcVar4;
  long *plVar5;
  undefined1 (*pauVar6) [16];
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined1 uVar14;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [16];
  long *plStack_210;
  long *plStack_208;
  long *plStack_200;
  long *plStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined1 auStack_1a0 [16];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  long lStack_168;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_130;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  plStack_1f0 = (long *)0x1;
  plStack_1e0 = (long *)0x0;
  plStack_1d0 = (long *)0x0;
  plStack_1e8 = param_2;
  func_0x000102f86050(&plStack_c0,&plStack_1f0);
  plVar7 = plStack_b8;
  plVar11 = plStack_c0;
  if (plStack_c0 == (long *)0x8000000000000000) {
    plStack_210 = (long *)0x0;
    plStack_208 = (long *)0x8;
    plStack_200 = (long *)0x0;
  }
  else {
    plVar5 = (long *)_malloc(0x80);
    if (plVar5 == (long *)0x0) {
      func_0x0001087c9084(8,0x80);
LAB_102e68b18:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102e68b1c);
      (*pcVar4)();
    }
    lVar8 = 0;
    plVar5[3] = (long)plStack_a8;
    plVar5[2] = (long)plStack_b0;
    *plVar5 = (long)plVar11;
    plVar5[1] = (long)plVar7;
    plStack_160 = (long *)0x4;
    plStack_150 = (long *)0x1;
    plStack_b8 = plStack_1e8;
    plStack_c0 = plStack_1f0;
    plStack_a8 = plStack_1d8;
    plStack_b0 = plStack_1e0;
    plStack_98 = plStack_1c8;
    plStack_a0 = plStack_1d0;
    plStack_158 = plVar5;
    while (plVar7 = plStack_150, func_0x000102f86050(&plStack_1c0,&plStack_c0), lVar15 = lStack_1b8,
          plVar11 = plStack_1c0, plStack_1c0 != (long *)0x8000000000000000) {
      if (plVar7 == plStack_160) {
        FUN_10893e30c(&plStack_160,plVar7,1,8,0x20);
        plVar5 = plStack_158;
      }
      *(long **)((long)plVar5 + lVar8 + 0x20) = plVar11;
      *(long *)((long)plVar5 + lVar8 + 0x28) = lVar15;
      *(long *)((long)plVar5 + lVar8 + 0x38) = lStack_1a8;
      *(undefined8 *)((long)plVar5 + lVar8 + 0x30) = uStack_1b0;
      plStack_150 = (long *)((long)plVar7 + 1);
      lVar8 = lVar8 + 0x20;
    }
    plStack_208 = plStack_158;
    plStack_210 = plStack_160;
    plStack_200 = plStack_150;
  }
  pauVar6 = (undefined1 (*) [16])
            (*
            ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
            )();
  if (pauVar6[1][0] == '\x01') {
    auStack_1a0 = *pauVar6;
  }
  else {
    auStack_1a0 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar6 + 8) = auStack_1a0._8_8_;
    pauVar6[1][0] = 1;
  }
  *(long *)*pauVar6 = auStack_1a0._0_8_ + 1;
  lStack_1b8 = 0;
  plStack_1c0 = (long *)&UNK_108d52778;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_190 = 0;
  uStack_188 = 8;
  uStack_180 = 0;
  __ZN12codex_config5state16ConfigLayerStack10get_layers17h67e3e6a60e8f7673E
            (&lStack_178,param_3,0,0);
  if (lStack_168 == 0) {
LAB_102e68964:
    do {
      if ((param_2 == (long *)0x0) || (param_2[5] == 0)) goto LAB_102e689e4;
      lVar8 = param_2[4];
      lVar15 = lVar8 + param_2[5] * 0x20;
      uVar14 = *(undefined1 *)(lVar8 + 0x18);
      plVar11 = *(long **)(lVar8 + 0x10);
      if (plVar11 == (long *)0x0) goto LAB_102e689b8;
      uVar12 = *(undefined8 *)(lVar8 + 8);
      plVar7 = (long *)_malloc(plVar11);
      if (plVar7 == (long *)0x0) {
LAB_102e68afc:
        func_0x0001087c9084(1,plVar11);
        goto LAB_102e68b18;
      }
      _memcpy(plVar7,uVar12,plVar11);
      lVar16 = lVar8;
      if (plVar11 == (long *)0x8000000000000000) goto LAB_102e689e4;
      do {
        while( true ) {
          param_2 = (long *)0x0;
          plStack_a8 = (long *)CONCAT71(plStack_a8._1_7_,uVar14);
          plStack_c0 = plVar11;
          plStack_b8 = plVar7;
          plStack_b0 = plVar11;
          func_0x000102e68bd0(&plStack_1c0,&uStack_190,&plStack_c0);
          lVar8 = lVar16 + 0x20;
          if ((lVar8 == 0) || (lVar8 == lVar15)) goto LAB_102e68964;
          uVar14 = *(undefined1 *)(lVar16 + 0x38);
          plVar11 = *(long **)(lVar16 + 0x30);
          if (plVar11 != (long *)0x0) break;
LAB_102e689b8:
          plVar7 = (long *)0x1;
          lVar16 = lVar8;
        }
        uVar12 = *(undefined8 *)(lVar16 + 0x28);
        plVar7 = (long *)_malloc(plVar11);
        if (plVar7 == (long *)0x0) goto LAB_102e68afc;
        _memcpy(plVar7,uVar12,plVar11);
        lVar16 = lVar8;
      } while (plVar11 != (long *)0x8000000000000000);
    } while( true );
  }
  plVar11 = plStack_170;
  do {
    plVar7 = plVar11 + 1;
    lVar8 = *plVar11;
    if (-1 < *(long *)(lVar8 + 0x98)) {
      auVar17 = FUN_10612a75c((long *)(lVar8 + 0x98),&UNK_108d6c2a6,0xc);
      uVar13 = auVar17._8_8_;
      if ((auVar17._0_8_ & 1) != 0) {
        if (*(ulong *)(lVar8 + 0xa8) <= uVar13) {
          func_0x000108a07bdc(uVar13,*(ulong *)(lVar8 + 0xa8),&UNK_10b4cf778);
          goto LAB_102e68b18;
        }
        FUN_1034a0b24(&plStack_c0,*(long *)(lVar8 + 0xa0) + uVar13 * 0x70 + 0x18);
        plStack_e8 = plStack_98;
        plStack_f0 = plStack_a0;
        uStack_d8 = uStack_88;
        plStack_e0 = plStack_90;
        uStack_c8 = uStack_78;
        uStack_d0 = uStack_80;
        plStack_108 = plStack_b8;
        plStack_110 = plStack_c0;
        plStack_f8 = plStack_a8;
        plStack_100 = plStack_b0;
        func_0x0001035cefc4(&plStack_c0,&plStack_110);
        plVar3 = plStack_98;
        plVar9 = plStack_a0;
        plVar10 = plStack_a8;
        plVar5 = plStack_b0;
        plVar11 = plStack_b8;
        if (plStack_c0 == (long *)0x2) {
          plStack_158 = plStack_a8;
          plStack_160 = plStack_b0;
          plStack_148 = plStack_98;
          plStack_150 = plStack_a0;
          plStack_140 = plStack_90;
          if (plStack_b8 != (long *)0x8000000000000000) {
            plStack_a0 = plStack_98;
            plStack_a8 = plVar9;
            plStack_c0 = plStack_b8;
            plStack_98 = plStack_90;
            plStack_b0 = plVar10;
            plStack_b8 = plVar5;
            plVar10 = plVar3 + (long)plStack_90 * 4;
            plStack_130 = plVar3;
            plStack_120 = plVar9;
            plVar5 = plVar3;
            plVar2 = plVar3;
            plStack_118 = plVar10;
            if (plStack_90 == (long *)0x0) {
LAB_102e68850:
              plStack_128 = plVar5;
              if ((long)plVar10 - (long)plVar5 != 0) {
                uVar13 = (ulong)((long)plVar10 - (long)plVar5) >> 5;
                plVar5 = plVar5 + 1;
                do {
                  if (plVar5[-1] != 0) {
                    _free(*plVar5);
                  }
                  plVar5 = plVar5 + 4;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
            }
            else {
              do {
                plVar5 = plVar2 + 4;
                if ((long *)*plVar2 == (long *)0x8000000000000000) goto LAB_102e68850;
                plStack_150 = (long *)plVar2[2];
                plStack_158 = (long *)plVar2[1];
                plStack_148 = (long *)plVar2[3];
                plStack_160 = (long *)*plVar2;
                func_0x000102e68bd0(&plStack_1c0,&uStack_190,&plStack_160);
                plVar2 = plVar5;
              } while (plVar5 != plVar10);
            }
            if (plVar9 != (long *)0x0) {
              _free(plVar3);
            }
            plVar5 = plStack_b8;
            if (plStack_b0 != (long *)0x0) {
              plVar10 = plStack_b8 + 1;
              plVar9 = plStack_b0;
              do {
                if (plVar10[-1] != 0) {
                  _free(*plVar10);
                }
                plVar10 = plVar10 + 4;
                plVar9 = (long *)((long)plVar9 + -1);
              } while (plVar9 != (long *)0x0);
            }
            if (plVar11 != (long *)0x0) {
              _free(plVar5);
            }
          }
        }
        else {
          func_0x000103380598(&plStack_c0);
        }
      }
    }
    plVar11 = plVar7;
  } while (plVar7 != plStack_170 + lStack_168);
  if (lStack_178 != 0) {
    _free(plStack_170);
  }
  param_1[1] = plStack_208;
  *param_1 = plStack_210;
  param_1[2] = plStack_200;
  param_1[4] = uStack_188;
  param_1[3] = uStack_190;
  param_1[5] = uStack_180;
LAB_102e68a10:
  lVar8 = lStack_1b8;
  if (lStack_1b8 != 0) {
    if (lStack_1a8 != 0) {
      plVar7 = plStack_1c0 + 1;
      lVar15 = *plStack_1c0;
      uVar13 = CONCAT17(-(-1 < lVar15),
                        CONCAT16(-(-1 < (char)((ulong)lVar15 >> 0x30)),
                                 CONCAT15(-(-1 < (char)((ulong)lVar15 >> 0x28)),
                                          CONCAT14(-(-1 < (char)((ulong)lVar15 >> 0x20)),
                                                   CONCAT13(-(-1 < (char)((ulong)lVar15 >> 0x18)),
                                                            CONCAT12(-(-1 < (char)((ulong)lVar15 >>
                                                                                  0x10)),
                                                                     CONCAT11(-(-1 < (char)((ulong)
                                                  lVar15 >> 8)),-(-1 < (char)lVar15)))))))) &
               0x8080808080808080;
      plVar11 = plStack_1c0;
      lVar15 = lStack_1a8;
      do {
        while (uVar13 == 0) {
          lVar16 = *plVar7;
          plVar11 = plVar11 + -0x20;
          plVar7 = plVar7 + 1;
          uVar13 = CONCAT17(-(-1 < lVar16),
                            CONCAT16(-(-1 < (char)((ulong)lVar16 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar16 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar16 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar16 >> 0x18)
                                                                 ),CONCAT12(-(-1 < (char)((ulong)
                                                  lVar16 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar16 >> 8)),
                                                           -(-1 < (char)lVar16)))))))) &
                   0x8080808080808080;
        }
        uVar1 = (uVar13 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar13 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        uVar1 = LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) & 0x78;
        if (*(long *)((long)plVar11 + uVar1 * -4 + -0x20) != 0) {
          _free(*(undefined8 *)((long)plVar11 + uVar1 * -4 + -0x18));
        }
        uVar13 = uVar13 - 1 & uVar13;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    if (lVar8 * 0x21 != -0x29) {
      _free(plStack_1c0 + lVar8 * -4 + -4);
    }
  }
  return;
LAB_102e689e4:
  param_1[1] = plStack_208;
  *param_1 = plStack_210;
  param_1[2] = plStack_200;
  param_1[4] = uStack_188;
  param_1[3] = uStack_190;
  param_1[5] = uStack_180;
  if (lStack_178 != 0) {
    _free(plStack_170);
  }
  goto LAB_102e68a10;
}

