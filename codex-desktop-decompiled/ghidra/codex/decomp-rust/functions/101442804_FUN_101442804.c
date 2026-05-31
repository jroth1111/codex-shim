
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101442804(undefined8 *param_1,char *param_2)

{
  long lVar1;
  char *pcVar2;
  ulong uVar3;
  byte bVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  undefined1 auVar9 [16];
  code *pcVar10;
  int iVar11;
  undefined1 (*pauVar12) [16];
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  char *pcVar16;
  ulong uVar17;
  char *pcVar18;
  long lVar19;
  undefined8 *puVar20;
  byte bVar21;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  ulong uVar25;
  long lVar26;
  char *pcVar27;
  ulong uVar28;
  byte bVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  long lVar32;
  undefined1 auVar39 [16];
  ulong uStack_1e0;
  long *plStack_190;
  ulong uStack_188;
  ulong uStack_180;
  long lStack_178;
  undefined1 auStack_170 [16];
  undefined1 uStack_158;
  char *pcStack_138;
  char *pcStack_130;
  undefined8 uStack_128;
  char *pcStack_120;
  long *plStack_118;
  long *plStack_110;
  ulong uStack_108;
  ulong uStack_100;
  long lStack_f8;
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  char cStack_a0;
  undefined7 uStack_9f;
  ulong uStack_98;
  long lStack_90;
  undefined1 auStack_79 [9];
  
  if (*param_2 == '\x15') {
    uStack_128 = *(undefined8 *)(param_2 + 8);
    pcVar18 = *(char **)(param_2 + 0x10);
    uVar25 = *(ulong *)(param_2 + 0x18);
    pcVar2 = pcVar18 + uVar25 * 0x40;
    uStack_158 = 0x16;
    plStack_118 = (long *)0x0;
    uVar14 = uVar25;
    if (0x5554 < uVar25) {
      uVar14 = 0x5555;
    }
    pcStack_138 = pcVar18;
    pcStack_130 = pcVar18;
    pcStack_120 = pcVar2;
    pauVar12 = (undefined1 (*) [16])
               (*
               ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
               )();
    if (pauVar12[1][0] == '\x01') {
      auVar39 = *pauVar12;
      *(long *)*pauVar12 = *(long *)*pauVar12 + 1;
      auVar9 = *pauVar12;
      if (uVar25 != 0) goto LAB_10144289c;
LAB_101442cd4:
      auVar39 = auVar9;
      plVar24 = (long *)0x0;
      plStack_110 = (long *)&UNK_108c56c70;
      uStack_108 = 0;
      uStack_100 = 0;
      lStack_f8 = 0;
    }
    else {
      auVar39 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      pauVar12[1][0] = 1;
      *(long *)*pauVar12 = auVar39._0_8_ + 1;
      *(long *)(*pauVar12 + 8) = auVar39._8_8_;
      auVar9 = auVar39;
      if (uVar25 == 0) goto LAB_101442cd4;
LAB_10144289c:
      uVar3 = 4;
      if (3 < uVar25) {
        uVar3 = (uVar14 & 8) + 8;
      }
      if (0xe < uVar25) {
        uVar3 = (0xffffffffffffffffU >>
                (LZCOUNT(((ulong)(uint)((int)uVar14 << 3) * 0x92492493 >> 0x22) - 1) & 0x3fU)) + 1;
      }
      lVar26 = uVar3 * 0x30;
      lVar1 = uVar3 + 8;
      lVar13 = _malloc(lVar26 + lVar1);
      if (lVar13 == 0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,lVar26 + lVar1);
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x101442d80);
        (*pcVar10)();
      }
      plVar24 = (long *)(lVar13 + lVar26);
      uVar28 = uVar3 - 1;
      uVar14 = uVar28;
      if (7 < uVar28) {
        uVar14 = (uVar3 >> 3) * 7;
      }
      _memset(plVar24,0xff,lVar1);
      lStack_f8 = 0;
      plStack_110 = plVar24;
      uStack_100 = uVar14;
      uStack_108 = uVar28;
      if (*pcVar18 != '\x16') {
        plVar23 = (long *)0x0;
        puVar20 = (undefined8 *)((ulong)&cStack_a0 | 1);
        pcVar8 = pcVar18 + 0x40;
        pcVar27 = pcVar18;
        cVar33 = *pcVar18;
LAB_1014429b4:
        cStack_a0 = cVar33;
        pcVar16 = pcVar8;
        uVar30 = *(undefined8 *)(pcVar27 + 9);
        uVar15 = *(undefined8 *)(pcVar27 + 1);
        uVar31 = *(undefined8 *)(pcVar27 + 0x10);
        uStack_d8 = *(undefined8 *)(pcVar27 + 0x28);
        uStack_e0 = *(undefined8 *)(pcVar27 + 0x20);
        uStack_c8 = *(undefined8 *)(pcVar27 + 0x38);
        uStack_d0 = *(undefined8 *)(pcVar27 + 0x30);
        plVar23 = (long *)((long)plVar23 + 1);
        *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)(pcVar27 + 0x18);
        *(undefined8 *)((long)puVar20 + 0xf) = uVar31;
        puVar20[1] = uVar30;
        *puVar20 = uVar15;
        auStack_f0 = auVar39;
        FUN_1004b62d4(&lStack_b8,&cStack_a0);
        lVar13 = lStack_a8;
        uVar3 = uStack_b0;
        lVar1 = lStack_b8;
        if (lStack_b8 == -0x8000000000000000) {
          pcStack_130 = pcVar16;
          plStack_118 = plVar23;
          FUN_100e077ec(&uStack_e0);
          uVar14 = uStack_b0;
        }
        else {
          FUN_1004b60cc(&cStack_a0,&uStack_e0);
          lVar7 = lStack_90;
          uVar14 = uStack_98;
          lVar26 = CONCAT71(uStack_9f,cStack_a0);
          if (lVar26 != -0x7fffffffffffffff) {
            uVar28 = FUN_100e8dd9c(auStack_f0._0_8_,auStack_f0._8_8_,uVar3,lVar13);
            if (uStack_100 == 0) {
              __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17hade63f0228ef0128E
                        (&plStack_110,1,auStack_f0,1);
            }
            uVar6 = uStack_108;
            plVar24 = plStack_110;
            bVar5 = false;
            lVar19 = 0;
            bVar4 = (byte)(uVar28 >> 0x38);
            bVar21 = bVar4 >> 1;
            uVar28 = uVar28 & uStack_108;
            lVar32 = *(long *)((long)plStack_110 + uVar28);
            uVar22 = CONCAT17(-((byte)((ulong)lVar32 >> 0x38) == bVar21),
                              CONCAT16(-((byte)((ulong)lVar32 >> 0x30) == bVar21),
                                       CONCAT15(-((byte)((ulong)lVar32 >> 0x28) == bVar21),
                                                CONCAT14(-((byte)((ulong)lVar32 >> 0x20) == bVar21),
                                                         CONCAT13(-((byte)((ulong)lVar32 >> 0x18) ==
                                                                   bVar21),CONCAT12(-((byte)((ulong)
                                                  lVar32 >> 0x10) == bVar21),
                                                  CONCAT11(-((byte)((ulong)lVar32 >> 8) == bVar21),
                                                           -((byte)lVar32 == bVar21))))))));
            do {
              for (uVar22 = uVar22 & 0x8080808080808080; uVar22 != 0; uVar22 = uVar22 - 1 & uVar22)
              {
                uVar17 = (uVar22 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                         (uVar22 >> 7 & 0xff00ff00ff00ff) << 8;
                uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
                uVar17 = uVar28 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) & uVar6;
                if (lVar13 == plVar24[uVar17 * -6 + -4]) {
                  iVar11 = _memcmp(uVar3,plVar24[uVar17 * -6 + -5],lVar13);
                  if (iVar11 == 0) {
                    lVar13 = plVar24[uVar17 * -6 + -3];
                    lVar19 = plVar24[uVar17 * -6 + -2];
                    plVar24[uVar17 * -6 + -3] = lVar26;
                    plVar24[uVar17 * -6 + -2] = uVar14;
                    plVar24[uVar17 * -6 + -1] = lVar7;
                    if (lVar1 != 0) {
                      _free(uVar3);
                    }
                    auVar39 = auStack_f0;
                    if (-0x7fffffffffffffff < lVar13 && lVar13 != 0) {
                      _free(lVar19);
                      auVar39 = auStack_f0;
                    }
                    goto LAB_101442be8;
                  }
                }
              }
              cVar33 = (char)((ulong)lVar32 >> 8);
              cVar34 = (char)((ulong)lVar32 >> 0x10);
              cVar35 = (char)((ulong)lVar32 >> 0x18);
              cVar36 = (char)((ulong)lVar32 >> 0x20);
              cVar37 = (char)((ulong)lVar32 >> 0x28);
              cVar38 = (char)((ulong)lVar32 >> 0x30);
              uVar22 = uStack_1e0;
              if (bVar5) {
LAB_101442b00:
                bVar29 = NEON_umaxv(CONCAT17(-((char)((ulong)lVar32 >> 0x38) == -1),
                                             CONCAT16(-(cVar38 == -1),
                                                      CONCAT15(-(cVar37 == -1),
                                                               CONCAT14(-(cVar36 == -1),
                                                                        CONCAT13(-(cVar35 == -1),
                                                                                 CONCAT12(-(cVar34 
                                                  == -1),CONCAT11(-(cVar33 == -1),
                                                                  -((char)lVar32 == -1)))))))),1);
                if ((bVar29 & 1) != 0) goto LAB_101442b90;
                bVar5 = true;
                uStack_1e0 = uVar22;
              }
              else {
                uVar22 = CONCAT17(-(lVar32 < 0),
                                  CONCAT16(-(cVar38 < '\0'),
                                           CONCAT15(-(cVar37 < '\0'),
                                                    CONCAT14(-(cVar36 < '\0'),
                                                             CONCAT13(-(cVar35 < '\0'),
                                                                      CONCAT12(-(cVar34 < '\0'),
                                                                               CONCAT11(-(cVar33 < 
                                                  '\0'),-((char)lVar32 < '\0'))))))));
                if (uVar22 != 0) {
                  uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
                  uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
                  uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
                  uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10
                  ;
                  uVar22 = uVar28 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3) & uVar6;
                  goto LAB_101442b00;
                }
                bVar5 = false;
              }
              lVar19 = lVar19 + 8;
              uVar28 = lVar19 + uVar28 & uVar6;
              lVar32 = *(long *)((long)plVar24 + uVar28);
              uVar22 = CONCAT17(-((byte)((ulong)lVar32 >> 0x38) == bVar21),
                                CONCAT16(-((byte)((ulong)lVar32 >> 0x30) == bVar21),
                                         CONCAT15(-((byte)((ulong)lVar32 >> 0x28) == bVar21),
                                                  CONCAT14(-((byte)((ulong)lVar32 >> 0x20) == bVar21
                                                            ),CONCAT13(-((byte)((ulong)lVar32 >>
                                                                               0x18) == bVar21),
                                                                       CONCAT12(-((byte)((ulong)
                                                  lVar32 >> 0x10) == bVar21),
                                                  CONCAT11(-((byte)((ulong)lVar32 >> 8) == bVar21),
                                                           -((byte)lVar32 == bVar21))))))));
            } while( true );
          }
          pcStack_130 = pcVar16;
          plStack_118 = plVar23;
          if (lVar1 != 0) {
            _free(uVar3);
          }
        }
        func_0x000100d12d04(&plStack_110);
        auVar39._8_8_ = auStack_170._8_8_;
        auVar39._0_8_ = auStack_170._0_8_;
        goto LAB_101442d08;
      }
      pcVar18 = pcVar18 + 0x40;
      plVar24 = (long *)0x0;
LAB_101442940:
      uVar14 = uStack_108;
      pcStack_130 = pcVar18;
      plStack_118 = plVar24;
      if (plStack_110 == (long *)0x0) {
        plStack_190 = plStack_110;
        uStack_188 = uStack_108;
        uStack_180 = uStack_100;
        lStack_178 = lStack_f8;
        uStack_108 = uVar14;
        auStack_f0 = auVar39;
LAB_101442d08:
        auStack_170 = auVar39;
        FUN_100d34830(&pcStack_138);
        goto LAB_101442d10;
      }
    }
    plStack_190 = plStack_110;
    uStack_188 = uStack_108;
    uStack_180 = uStack_100;
    lStack_178 = lStack_f8;
    auStack_f0 = auVar39;
    auStack_170 = auVar39;
    FUN_100d34830(&pcStack_138);
    if (pcVar2 == pcVar18) {
      uVar15 = 0;
      param_1[2] = uStack_188;
      param_1[1] = plStack_190;
      param_1[4] = lStack_178;
      param_1[3] = uStack_180;
      *(undefined1 (*) [16])(param_1 + 5) = auStack_170;
      goto LAB_101442d18;
    }
    plStack_110 = plVar24;
    uVar14 = FUN_1087e422c(((ulong)((long)pcVar2 - (long)pcVar18) >> 6) + (long)plVar24,&plStack_110
                           ,&UNK_10b23a190);
    func_0x000100d12d04(&plStack_190);
  }
  else {
    uVar14 = FUN_108855b04(param_2,auStack_79,&UNK_10b209ce0);
  }
LAB_101442d10:
  param_1[1] = uVar14;
  uVar15 = 1;
LAB_101442d18:
  *param_1 = uVar15;
  return;
LAB_101442b90:
  uVar28 = (ulong)*(char *)((long)plVar24 + uVar22);
  if (-1 < *(char *)((long)plVar24 + uVar22)) {
    lVar19 = *plVar24;
    uVar28 = CONCAT17(-(lVar19 < 0),
                      CONCAT16(-((char)((ulong)lVar19 >> 0x30) < '\0'),
                               CONCAT15(-((char)((ulong)lVar19 >> 0x28) < '\0'),
                                        CONCAT14(-((char)((ulong)lVar19 >> 0x20) < '\0'),
                                                 CONCAT13(-((char)((ulong)lVar19 >> 0x18) < '\0'),
                                                          CONCAT12(-((char)((ulong)lVar19 >> 0x10) <
                                                                    '\0'),CONCAT11(-((char)((ulong)
                                                  lVar19 >> 8) < '\0'),-((char)lVar19 < '\0'))))))))
    ;
    uVar28 = (uVar28 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar28 & 0x5555555555555555) << 1;
    uVar28 = (uVar28 & 0xcccccccccccccccc) >> 2 | (uVar28 & 0x3333333333333333) << 2;
    uVar28 = (uVar28 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar28 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar28 = (uVar28 & 0xff00ff00ff00ff00) >> 8 | (uVar28 & 0xff00ff00ff00ff) << 8;
    uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
    uVar22 = (ulong)LZCOUNT(uVar28 >> 0x20 | uVar28 << 0x20) >> 3;
    uVar28 = (ulong)*(byte *)((long)plVar24 + uVar22);
  }
  bVar4 = bVar4 >> 1;
  *(byte *)((long)plVar24 + uVar22) = bVar4;
  *(byte *)((long)plVar24 + (uVar22 - 8 & uVar6) + 8) = bVar4;
  uStack_100 = uStack_100 - (uVar28 & 1);
  lStack_f8 = lStack_f8 + 1;
  plVar24[uVar22 * -6 + -6] = lVar1;
  plVar24[uVar22 * -6 + -5] = uVar3;
  plVar24[uVar22 * -6 + -4] = lVar13;
  plVar24[uVar22 * -6 + -3] = lVar26;
  plVar24[uVar22 * -6 + -2] = uVar14;
  plVar24[uVar22 * -6 + -1] = lVar7;
  auVar39 = auStack_f0;
LAB_101442be8:
  pcVar18 = pcVar2;
  plVar24 = (long *)((uVar25 * 0x40 - 0x40 >> 6) + 1);
  if (pcVar16 == pcVar2) goto LAB_101442940;
  pcVar18 = pcVar16 + 0x40;
  pcVar8 = pcVar18;
  plVar24 = plVar23;
  pcVar27 = pcVar16;
  cVar33 = *pcVar16;
  if (*pcVar16 == '\x16') goto LAB_101442940;
  goto LAB_1014429b4;
}

