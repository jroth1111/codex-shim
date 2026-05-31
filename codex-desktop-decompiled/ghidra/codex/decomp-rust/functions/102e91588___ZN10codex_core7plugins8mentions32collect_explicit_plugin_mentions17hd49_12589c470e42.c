
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN10codex_core7plugins8mentions32collect_explicit_plugin_mentions17hd49e0a9f16457c53E
               (undefined8 *param_1,long **param_2,long param_3,long **param_4,long param_5)

{
  ulong uVar1;
  int iVar2;
  long **pplVar3;
  long *plVar4;
  long **pplVar5;
  long **pplVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  code *pcVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined1 (*pauVar14) [16];
  long **pplVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  long **pplVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long *plStack_2d0;
  long *plStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  undefined1 auStack_290 [16];
  long **pplStack_280;
  long **pplStack_278;
  long **pplStack_270;
  long *plStack_268;
  long *plStack_260;
  long *plStack_258;
  long *plStack_250;
  long **pplStack_248;
  long **pplStack_240;
  long **pplStack_238;
  long **pplStack_228;
  long **pplStack_220;
  long **pplStack_218;
  long *plStack_210;
  long lStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined1 auStack_1f0 [16];
  long **pplStack_1e0;
  long **pplStack_1d8;
  long **pplStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  long **pplStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long **pplStack_170;
  long **pplStack_168;
  long **pplStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  long **pplStack_138;
  long **pplStack_130;
  long **pplStack_128;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_e8;
  undefined8 *puStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long lStack_a8;
  long **pplStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  if (param_5 == 0) {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
    return;
  }
  lVar13 = param_3 * 0x38;
  pplVar20 = param_2;
  lVar11 = param_3;
  while (lVar11 != 0) {
    pplVar15 = pplVar20 + 7;
    if (*(char *)pplVar20 == '\0') {
      plVar18 = pplVar20[3];
      if (plVar18 == (long *)0x0) {
        lVar11 = 1;
      }
      else {
        plVar17 = pplVar20[2];
        lVar11 = _malloc(plVar18);
        if (lVar11 == 0) {
          func_0x0001087c9084(1,plVar18);
          goto LAB_102e91d54;
        }
        _memcpy(lVar11,plVar17,plVar18);
        if (plVar18 == (long *)0x8000000000000000) goto LAB_102e915d4;
      }
      puVar12 = (undefined8 *)_malloc(0x60);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0001087c9084(8,0x60);
        goto LAB_102e91d90;
      }
      *puVar12 = plVar18;
      puVar12[1] = lVar11;
      puVar12[2] = plVar18;
      plStack_e8 = (long *)0x4;
      plStack_d8 = (long *)0x1;
      puStack_e0 = puVar12;
      plVar18 = plStack_d8;
      if (lVar13 == 0x38) goto LAB_102e9172c;
      goto LAB_102e91694;
    }
LAB_102e915d4:
    lVar13 = lVar13 + -0x38;
    pplVar20 = pplVar15;
    lVar11 = lVar13;
  }
  plVar18 = (long *)0x0;
  puVar12 = (undefined8 *)0x8;
  plStack_2d0 = (long *)0x0;
  goto LAB_102e91744;
LAB_102e91d54:
  func_0x0001087c9084(1,param_2);
  goto LAB_102e91d90;
joined_r0x000102e91968:
  for (; lStack_188 = lVar13, plStack_1c8 = plVar7, plStack_1b8 = plVar4, pplVar20 != (long **)0x0;
      pplVar20 = (long **)((long)pplVar20 + -1)) {
    while (plVar21 == (long *)0x0) {
      lVar13 = *plVar17;
      plVar22 = plVar22 + -0x18;
      plVar17 = plVar17 + 1;
      plVar21 = (long *)(CONCAT17(-(-1 < lVar13),
                                  CONCAT16(-(-1 < (char)((ulong)lVar13 >> 0x30)),
                                           CONCAT15(-(-1 < (char)((ulong)lVar13 >> 0x28)),
                                                    CONCAT14(-(-1 < (char)((ulong)lVar13 >> 0x20)),
                                                             CONCAT13(-(-1 < (char)((ulong)lVar13 >>
                                                                                   0x18)),
                                                                      CONCAT12(-(-1 < (char)((ulong)
                                                  lVar13 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar13 >> 8)),
                                                           -(-1 < (char)lVar13)))))))) &
                        0x8080808080808080);
    }
    uVar19 = ((ulong)plVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | ((ulong)plVar21 & 0x5555555555555555) << 1
    ;
    uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
    uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
    uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
    iVar2 = (int)((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3);
    if (plVar22[(long)-iVar2 * 3 + -3] != 0) {
      _free(plVar22[(long)-iVar2 * 3 + -2]);
    }
    plVar21 = (long *)((long)plVar21 - 1U & (ulong)plVar21);
    plVar4 = plStack_1b8;
    plVar7 = plStack_1c8;
    lVar13 = lStack_188;
  }
  goto LAB_102e919c4;
LAB_102e91694:
  do {
    if (*(char *)pplVar15 == '\0') {
      plVar17 = pplVar15[3];
      if (plVar17 == (long *)0x0) {
        lVar13 = 1;
      }
      else {
        plVar22 = pplVar15[2];
        lVar13 = _malloc(plVar17);
        if (lVar13 == 0) {
          func_0x0001087c9084(1,plVar17);
          goto LAB_102e91d90;
        }
        _memcpy(lVar13,plVar22,plVar17);
        if (plVar17 == (long *)0x8000000000000000) goto joined_r0x000102e91728;
      }
      if (plVar18 == plStack_e8) {
        FUN_10893e30c(&plStack_e8,plVar18,1,8,0x18);
        puVar12 = puStack_e0;
      }
      puVar16 = puVar12 + (long)plVar18 * 3;
      *puVar16 = plVar17;
      puVar16[1] = lVar13;
      puVar16[2] = plVar17;
      plStack_d8 = (long *)((long)plVar18 + 1);
      plVar18 = plStack_d8;
    }
joined_r0x000102e91728:
    pplVar15 = pplVar15 + 7;
  } while (pplVar15 != param_2 + param_3 * 7);
LAB_102e9172c:
  plStack_2d0 = plStack_e8;
  puVar12 = puStack_e0;
  plVar18 = plStack_d8;
LAB_102e91744:
  FUN_102e91e7c(&plStack_e8,puVar12,plVar18,0x40);
  lVar13 = *plStack_b8;
  pplStack_270 = pplStack_a0;
  pplStack_278 = pplStack_a0;
  if (lStack_b0 != 0) {
    pplStack_270 = (long **)(plStack_b8 + lStack_b0 * -3 + -3);
    pplStack_278 = (long **)(lStack_b0 * 0x19 + 0x21);
  }
  pplStack_280 = (long **)0x0;
  if (lStack_b0 != 0) {
    pplStack_280 = (long **)0x8;
  }
  plStack_260 = (long *)(CONCAT17(-(-1 < lVar13),
                                  CONCAT16(-(-1 < (char)((ulong)lVar13 >> 0x30)),
                                           CONCAT15(-(-1 < (char)((ulong)lVar13 >> 0x28)),
                                                    CONCAT14(-(-1 < (char)((ulong)lVar13 >> 0x20)),
                                                             CONCAT13(-(-1 < (char)((ulong)lVar13 >>
                                                                                   0x18)),
                                                                      CONCAT12(-(-1 < (char)((ulong)
                                                  lVar13 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar13 >> 8)),
                                                           -(-1 < (char)lVar13)))))))) &
                        0x8080808080808080);
  plStack_258 = plStack_b8 + 1;
  plStack_250 = (long *)((long)plStack_b8 + lStack_b0 + 1);
  plStack_268 = plStack_b8;
  pplStack_248 = pplStack_a0;
  pplStack_240 = param_2;
  pplStack_238 = param_2 + param_3 * 7;
  pauVar14 = (undefined1 (*) [16])
             (*
             ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
             )();
  if (pauVar14[1][0] == '\x01') {
    auStack_1f0 = *pauVar14;
  }
  else {
    auStack_1f0 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar14 + 8) = auStack_1f0._8_8_;
    pauVar14[1][0] = 1;
  }
  *(long *)*pauVar14 = auStack_1f0._0_8_ + 1;
  lStack_208 = 0;
  plStack_210 = (long *)&UNK_108d52778;
  lStack_1f8 = 0;
  uStack_200 = 0;
  pplStack_138 = pplStack_248;
  plStack_140 = plStack_250;
  pplStack_128 = pplStack_238;
  pplStack_130 = pplStack_240;
  plStack_158 = plStack_268;
  pplStack_160 = pplStack_270;
  plStack_148 = plStack_258;
  plStack_150 = plStack_260;
  pplStack_168 = pplStack_278;
  pplStack_170 = pplStack_280;
  if ((pplStack_240 != (long **)0x0) && (pplStack_240 != pplStack_238)) {
    uVar19 = (ulong)((long)pplStack_238 - (long)pplStack_240) / 0x38;
    pplVar20 = pplStack_240 + 6;
    do {
      if (*(char *)(pplVar20 + -6) == '\x04') {
        param_2 = (long **)*pplVar20;
        if (param_2 == (long **)0x0) {
          pplStack_1d8 = (long **)0x1;
          pplStack_1d0 = (long **)0x0;
        }
        else {
          plVar17 = pplVar20[-1];
          pplVar15 = (long **)_malloc(param_2);
          if (pplVar15 == (long **)0x0) goto LAB_102e91d54;
          _memcpy(pplVar15,plVar17,param_2);
          pplStack_1e0 = param_2;
          pplStack_1d8 = pplVar15;
          pplStack_1d0 = param_2;
          if (param_2 == (long **)0x8000000000000000) goto LAB_102e91868;
        }
        pplStack_1e0 = pplStack_1d0;
        func_0x0001033f9964(&plStack_210,&pplStack_1e0);
      }
LAB_102e91868:
      pplVar20 = pplVar20 + 7;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  pplVar15 = pplStack_278;
  pplVar3 = pplStack_280;
  plVar4 = plStack_268;
  pplVar5 = pplStack_270;
  pplVar6 = pplStack_248;
  plVar7 = plStack_250;
  plVar8 = plStack_258;
  plVar9 = plStack_260;
  plVar22 = plStack_268;
  plVar21 = plStack_260;
  plVar17 = plStack_258;
  pplVar20 = pplStack_248;
  lVar13 = lStack_188;
  if (pplStack_170 != (long **)0x8000000000000001) {
    while (plStack_1c0 = plVar9, plStack_1b8 = plVar8, plStack_1b0 = plVar7, pplStack_1a8 = pplVar6,
          pplStack_1d0 = pplVar5, plStack_1c8 = plVar4, pplStack_1e0 = pplVar3,
          pplStack_1d8 = pplVar15, lStack_188 = lVar13, pplVar20 != (long **)0x0) {
      while (plVar21 == (long *)0x0) {
        lVar11 = *plVar17;
        plVar22 = plVar22 + -0x18;
        plVar17 = plVar17 + 1;
        plVar21 = (long *)(CONCAT17(-(-1 < lVar11),
                                    CONCAT16(-(-1 < (char)((ulong)lVar11 >> 0x30)),
                                             CONCAT15(-(-1 < (char)((ulong)lVar11 >> 0x28)),
                                                      CONCAT14(-(-1 < (char)((ulong)lVar11 >> 0x20))
                                                               ,CONCAT13(-(-1 < (char)((ulong)lVar11
                                                                                      >> 0x18)),
                                                                         CONCAT12(-(-1 < (char)((
                                                  ulong)lVar11 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar11 >> 8)),
                                                           -(-1 < (char)lVar11)))))))) &
                          0x8080808080808080);
      }
      uVar19 = ((ulong)plVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 |
               ((ulong)plVar21 & 0x5555555555555555) << 1;
      uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
      uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
      uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
      plVar21 = (long *)((long)plVar21 - 1U & (ulong)plVar21);
      iVar2 = (int)((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3);
      pplVar20 = (long **)((long)pplVar20 + -1);
      lStack_188 = plVar22[(long)-iVar2 * 3 + -3];
      plVar4 = plVar17;
      plVar7 = plVar22;
      if (lStack_188 == -0x8000000000000000) goto joined_r0x000102e91968;
      lStack_198 = plVar22[(long)-iVar2 * 3 + -1];
      lStack_1a0 = plVar22[(long)-iVar2 * 3 + -2];
      lStack_180 = lStack_1a0;
      lStack_178 = lStack_198;
      func_0x0001033f9964(&plStack_210,&lStack_188);
      pplVar15 = pplStack_1d8;
      pplVar3 = pplStack_1e0;
      plVar4 = plStack_1c8;
      pplVar5 = pplStack_1d0;
      pplVar6 = pplStack_1a8;
      plVar7 = plStack_1b0;
      plVar8 = plStack_1b8;
      plVar9 = plStack_1c0;
      lVar13 = lStack_188;
    }
LAB_102e919c4:
    if ((pplStack_1e0 != (long **)0x0) && (pplStack_1d8 != (long **)0x0)) {
      _free(pplStack_1d0);
    }
  }
  puVar16 = puStack_e0;
  lStack_2a8 = lStack_208;
  plStack_2b0 = plStack_210;
  lStack_298 = lStack_1f8;
  uStack_2a0 = uStack_200;
  auStack_290 = auStack_1f0;
  if (puStack_e0 != (undefined8 *)0x0) {
    if (lStack_d0 != 0) {
      plVar22 = plStack_e8 + 1;
      lVar13 = *plStack_e8;
      uVar19 = CONCAT17(-(-1 < lVar13),
                        CONCAT16(-(-1 < (char)((ulong)lVar13 >> 0x30)),
                                 CONCAT15(-(-1 < (char)((ulong)lVar13 >> 0x28)),
                                          CONCAT14(-(-1 < (char)((ulong)lVar13 >> 0x20)),
                                                   CONCAT13(-(-1 < (char)((ulong)lVar13 >> 0x18)),
                                                            CONCAT12(-(-1 < (char)((ulong)lVar13 >>
                                                                                  0x10)),
                                                                     CONCAT11(-(-1 < (char)((ulong)
                                                  lVar13 >> 8)),-(-1 < (char)lVar13)))))))) &
               0x8080808080808080;
      plVar17 = plStack_e8;
      lVar13 = lStack_d0;
      do {
        while (uVar19 == 0) {
          lVar11 = *plVar22;
          plVar17 = plVar17 + -0x18;
          plVar22 = plVar22 + 1;
          uVar19 = CONCAT17(-(-1 < lVar11),
                            CONCAT16(-(-1 < (char)((ulong)lVar11 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar11 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar11 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar11 >> 0x18)
                                                                 ),CONCAT12(-(-1 < (char)((ulong)
                                                  lVar11 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar11 >> 8)),
                                                           -(-1 < (char)lVar11)))))))) &
                   0x8080808080808080;
        }
        uVar1 = (uVar19 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar19 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        iVar2 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
        if (plVar17[(long)-iVar2 * 3 + -3] != 0) {
          _free(plVar17[(long)-iVar2 * 3 + -2]);
        }
        uVar19 = uVar19 - 1 & uVar19;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    if ((long)puVar16 * 0x19 != -0x21) {
      _free(plStack_e8 + (long)puVar16 * -3 + -3);
    }
  }
  if (lStack_298 == 0) {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
    if ((lStack_2a8 != 0) && (lStack_2a8 * 0x19 != -0x21)) {
      _free(plStack_2b0 + lStack_2a8 * -3 + -3);
    }
    if (plVar18 != (long *)0x0) {
      puVar16 = puVar12 + 1;
      do {
        if (puVar16[-1] != 0) {
          _free(*puVar16);
        }
        puVar16 = puVar16 + 3;
        plVar18 = (long *)((long)plVar18 + -1);
      } while (plVar18 != (long *)0x0);
    }
  }
  else {
    pplStack_220 = param_4 + param_5 * 0x10;
    pplStack_218 = &plStack_2b0;
    pplStack_228 = param_4;
    func_0x000102c81758(&pplStack_170,&pplStack_228);
    if (pplStack_170 == (long **)0x8000000000000000) {
      *param_1 = 0;
      param_1[1] = 8;
      param_1[2] = 0;
      lVar13 = lStack_2a8;
    }
    else {
      pplVar20 = (long **)_malloc(0x200);
      if (pplVar20 == (long **)0x0) {
        func_0x0001087c9084(8,0x200);
LAB_102e91d90:
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x102e91d94);
        (*pcVar10)();
      }
      pplVar20[9] = (long *)pplStack_128;
      pplVar20[8] = (long *)pplStack_130;
      pplVar20[0xb] = plStack_118;
      pplVar20[10] = plStack_120;
      pplVar20[0xd] = plStack_108;
      pplVar20[0xc] = plStack_110;
      pplVar20[0xf] = plStack_f8;
      pplVar20[0xe] = plStack_100;
      pplVar20[1] = (long *)pplStack_168;
      *pplVar20 = (long *)pplStack_170;
      pplVar20[3] = plStack_158;
      pplVar20[2] = (long *)pplStack_160;
      pplVar20[5] = plStack_148;
      pplVar20[4] = plStack_150;
      pplVar20[7] = (long *)pplStack_138;
      pplVar20[6] = plStack_140;
      pplStack_1e0 = (long **)0x4;
      pplStack_1d0 = (long **)0x1;
      pplStack_270 = pplStack_218;
      lVar13 = 0x80;
      pplStack_278 = pplStack_220;
      pplStack_280 = pplStack_228;
      pplStack_1d8 = pplVar20;
      while( true ) {
        pplVar15 = pplStack_1d0;
        func_0x000102c81758(&plStack_e8,&pplStack_280);
        if (plStack_e8 == (long *)0x8000000000000000) break;
        if (pplVar15 == pplStack_1e0) {
          FUN_10893e30c(&pplStack_1e0,pplVar15,1,8,0x80);
          pplVar20 = pplStack_1d8;
        }
        plVar17 = (long *)((long)pplVar20 + lVar13);
        plVar17[5] = lStack_c0;
        plVar17[4] = lStack_c8;
        plVar17[7] = lStack_b0;
        plVar17[6] = (long)plStack_b8;
        plVar17[1] = (long)puStack_e0;
        *plVar17 = (long)plStack_e8;
        plVar17[3] = lStack_d0;
        plVar17[2] = (long)plStack_d8;
        plVar17[0xd] = lStack_80;
        plVar17[0xc] = lStack_88;
        plVar17[0xf] = lStack_70;
        plVar17[0xe] = lStack_78;
        plVar17[9] = (long)pplStack_a0;
        plVar17[8] = lStack_a8;
        plVar17[0xb] = lStack_90;
        plVar17[10] = lStack_98;
        pplStack_1d0 = (long **)((long)pplVar15 + 1);
        lVar13 = lVar13 + 0x80;
      }
      param_1[1] = pplStack_1d8;
      *param_1 = pplStack_1e0;
      param_1[2] = pplStack_1d0;
      plStack_e8 = (long *)0x8000000000000000;
      lVar13 = lStack_2a8;
    }
    lStack_2a8 = lVar13;
    if (lVar13 != 0) {
      if (lStack_298 != 0) {
        plVar22 = plStack_2b0 + 1;
        lVar11 = *plStack_2b0;
        uVar19 = CONCAT17(-(-1 < lVar11),
                          CONCAT16(-(-1 < (char)((ulong)lVar11 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar11 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar11 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar11 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar11
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar11 >> 8)),-(-1 < (char)lVar11)))))))) &
                 0x8080808080808080;
        plVar17 = plStack_2b0;
        lVar11 = lStack_298;
        do {
          while (uVar19 == 0) {
            lVar23 = *plVar22;
            plVar17 = plVar17 + -0x18;
            plVar22 = plVar22 + 1;
            uVar19 = CONCAT17(-(-1 < lVar23),
                              CONCAT16(-(-1 < (char)((ulong)lVar23 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar23 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar23 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar23 >>
                                                                               0x18)),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar23 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar23 >> 8)),
                                                           -(-1 < (char)lVar23)))))))) &
                     0x8080808080808080;
          }
          uVar1 = (uVar19 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar19 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
          iVar2 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
          if (plVar17[(long)-iVar2 * 3 + -3] != 0) {
            _free(plVar17[(long)-iVar2 * 3 + -2]);
          }
          uVar19 = uVar19 - 1 & uVar19;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      if (lVar13 * 0x19 != -0x21) {
        _free(plStack_2b0 + lVar13 * -3 + -3);
      }
    }
    if (plVar18 != (long *)0x0) {
      puVar16 = puVar12 + 1;
      do {
        if (puVar16[-1] != 0) {
          _free(*puVar16);
        }
        puVar16 = puVar16 + 3;
        plVar18 = (long *)((long)plVar18 + -1);
      } while (plVar18 != (long *)0x0);
    }
  }
  if (plStack_2d0 != (long *)0x0) {
    _free(puVar12);
  }
  return;
}

