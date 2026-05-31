
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN16codex_app_server18request_processors16thread_processor22validate_dynamic_tools17h2487ba0586103794E
               (undefined1 (*param_1) [16],long param_2)

{
  undefined8 uVar1;
  byte bVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  undefined1 (*pauVar9) [16];
  ulong uVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  byte bVar22;
  long **pplVar23;
  undefined *puVar24;
  long lVar25;
  byte bVar26;
  char cVar27;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  undefined8 uVar28;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  ulong uStack_310;
  long *plStack_2e0;
  ulong uStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  undefined1 auStack_2c0 [16];
  undefined1 auStack_2b0 [16];
  long lStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long lStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 auStack_270 [16];
  long lStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [20];
  undefined4 uStack_15c;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long **pplStack_b8;
  undefined *puStack_b0;
  long **pplStack_a8;
  code *pcStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  int *piVar10;
  
  auVar44 = (*
            ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
            )();
  pauVar9 = auVar44._0_8_;
  if (pauVar9[1][0] == '\x01') {
    auStack_2c0 = *pauVar9;
  }
  else {
    auStack_2c0 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar9 + 8) = auStack_2c0._8_8_;
    pauVar9[1][0] = 1;
  }
  *(long *)*pauVar9 = auStack_2c0._0_8_ + 1;
  uStack_2d8 = 0;
  plStack_2e0 = (long *)&UNK_108cea360;
  lStack_2c8 = 0;
  lStack_2d0 = 0;
  if (auVar44._8_8_ == 0) {
    *(undefined8 *)*param_1 = 0x8000000000000000;
    return;
  }
  lVar25 = 0;
  plVar20 = (long *)&UNK_108cea360;
  lVar18 = param_2 + 0x98;
  lVar21 = param_2;
LAB_101894af0:
  lVar14 = lVar18;
  lVar18 = *(long *)(lVar21 + 8);
  uVar11 = *(ulong *)(lVar21 + 0x10);
  auVar45 = FUN_10196f134(lVar18,uVar11);
  piVar10 = auVar45._0_8_;
  auStack_2b0 = auVar45;
  if (auVar45._8_8_ == 0) {
    puVar12 = (undefined8 *)_malloc(0x23);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0001087c9084(1,0x23);
      goto LAB_10189584c;
    }
    *(undefined4 *)((long)puVar12 + 0x1f) = 0x7974706d;
    puVar12[1] = 0x6d616e206c6f6f74;
    *puVar12 = 0x2063696d616e7964;
    puVar12[3] = 0x6d6520656220746f;
    puVar12[2] = 0x6e207473756d2065;
    *(undefined8 *)*param_1 = 0x23;
    *(undefined8 **)(*param_1 + 8) = puVar12;
    *(undefined8 *)param_1[1] = 0x23;
    goto joined_r0x00010189540c;
  }
  if (auVar45._8_8_ == uVar11) {
    iVar8 = _memcmp(piVar10,lVar18,uVar11);
    if (iVar8 == 0) {
      FUN_101895910(auStack_180,piVar10,uVar11,&UNK_108cee94e,0x11,0x80);
      if (auStack_180._0_8_ != -0x8000000000000000) {
LAB_1018953f8:
        *(undefined8 *)param_1[1] = auStack_170._0_8_;
        *param_1 = auStack_180;
        goto joined_r0x00010189540c;
      }
      if (uVar11 == 3) {
        if ((short)*piVar10 != 0x636d || *(char *)((long)piVar10 + 2) != 'p') {
LAB_101894ba8:
          if (*(long *)(lVar21 + 0x30) == -0x8000000000000000) {
            auVar45._8_8_ = 0;
            auVar45._0_8_ = uVar11;
            bVar22 = 1;
            auVar45 = auVar45 << 0x40;
            goto LAB_101894f50;
          }
          uVar1 = *(undefined8 *)(lVar21 + 0x38);
          uVar11 = *(ulong *)(lVar21 + 0x40);
          auVar45 = FUN_10196f134(uVar1,uVar11);
          piVar10 = auVar45._0_8_;
          auVar4._8_8_ = uVar11;
          auVar4._0_8_ = piVar10;
          if (piVar10 == (int *)0x0) {
            bVar22 = 1;
            goto LAB_101894f50;
          }
          auStack_270 = auVar45;
          if (auVar45._8_8_ == 0) {
            auStack_180._0_8_ = auStack_2b0;
            auStack_180._8_8_ = &DAT_10192d9a4;
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (&lStack_260,s__dynamic_tool_namespace_must_not_108add83f,auStack_180);
            *(undefined8 *)(*param_1 + 8) = uStack_258;
            *(long *)*param_1 = lStack_260;
            *(undefined8 *)param_1[1] = uStack_250;
            goto joined_r0x00010189540c;
          }
          if (auVar45._8_8_ == uVar11) {
            iVar8 = _memcmp(piVar10,uVar1,uVar11);
            if (iVar8 == 0) {
              FUN_101895910(auStack_180,piVar10,uVar11,&UNK_108cee964,0x16,0x40);
              if (auStack_180._0_8_ != -0x8000000000000000) goto LAB_1018953f8;
              if (uVar11 == 3) {
                if ((short)*piVar10 != 0x636d || *(char *)((long)piVar10 + 2) != 'p') {
LAB_101894c94:
                  if ((long)auStack_270._8_8_ < 9) {
                    if ((long)auStack_270._8_8_ < 7) {
                      if (auStack_270._8_8_ == 3) {
                        uVar13 = (uint)*(byte *)(auStack_270._0_8_ + 2);
                        bVar7 = *(short *)auStack_270._0_8_ == 0x6577;
                        uVar16 = 0x62;
                      }
                      else {
                        if (auStack_270._8_8_ != 6) goto LAB_101894f4c;
                        uVar13 = (uint)*(ushort *)(auStack_270._0_8_ + 4);
                        bVar7 = *(int *)auStack_270._0_8_ == 0x68747970;
                        uVar16 = 0x6e6f;
                      }
LAB_101894f3c:
                      if (bVar7 && uVar13 == uVar16) goto LAB_1018955ac;
                    }
                    else {
                      if (auStack_270._8_8_ == 7) {
                        uVar13 = *(uint *)(auStack_270._0_8_ + 3);
                        bVar7 = *(int *)auStack_270._0_8_ == 0x776f7262;
                        uVar16 = 0x72657377;
                        goto LAB_101894f3c;
                      }
                      if ((auStack_270._8_8_ == 8) &&
                         (((*(long *)auStack_270._0_8_ == 0x6c6f6f745f697061 ||
                           (*(long *)auStack_270._0_8_ == 0x72657475706d6f63)) ||
                          (*(long *)auStack_270._0_8_ == 0x6c616e696d726574)))) goto LAB_1018955ac;
                    }
LAB_101894f4c:
                    bVar22 = 0;
                    auVar45 = auVar4;
LAB_101894f50:
                    uVar5 = auStack_2b0._8_8_;
                    uVar1 = auStack_2b0._0_8_;
                    puVar24 = auVar45._8_8_;
                    pplVar23 = auVar45._0_8_;
                    auStack_180 = auVar45;
                    auStack_170._0_16_ = auStack_2b0;
                    uVar11 = FUN_10196f9d8(auStack_2c0._0_8_,auStack_2c0._8_8_,auStack_180);
                    bVar2 = (byte)(uVar11 >> 0x38);
                    if (lVar25 == 0) {
                      __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17h5bd70c47a52a0dccE
                                (&plStack_2e0,1,auStack_2c0,1);
                      bVar26 = bVar2 >> 1;
                      uVar28 = CONCAT17(bVar26,CONCAT16(bVar26,CONCAT15(bVar26,CONCAT14(bVar26,
                                                  CONCAT13(bVar26,CONCAT12(bVar26,CONCAT11(bVar26,
                                                  bVar26)))))));
                      plVar20 = plStack_2e0;
                      uVar3 = uStack_2d8;
                    }
                    else {
                      bVar26 = bVar2 >> 1;
                      uVar28 = CONCAT17(bVar26,CONCAT16(bVar26,CONCAT15(bVar26,CONCAT14(bVar26,
                                                  CONCAT13(bVar26,CONCAT12(bVar26,CONCAT11(bVar26,
                                                  bVar26)))))));
                      uVar3 = uStack_2d8;
                    }
                    cVar27 = (char)uVar28;
                    cVar29 = (char)((ulong)uVar28 >> 8);
                    cVar30 = (char)((ulong)uVar28 >> 0x10);
                    cVar31 = (char)((ulong)uVar28 >> 0x18);
                    cVar32 = (char)((ulong)uVar28 >> 0x20);
                    cVar33 = (char)((ulong)uVar28 >> 0x28);
                    cVar34 = (char)((ulong)uVar28 >> 0x30);
                    cVar35 = (char)((ulong)uVar28 >> 0x38);
                    uStack_2d8 = uVar3;
                    if (pplVar23 != (long **)0x0) {
                      bVar7 = false;
                      lVar18 = 0;
                      do {
                        uVar11 = uVar11 & uVar3;
                        lVar25 = *(long *)((long)plVar20 + uVar11);
                        cVar36 = (char)lVar25;
                        cVar37 = (char)((ulong)lVar25 >> 8);
                        cVar38 = (char)((ulong)lVar25 >> 0x10);
                        cVar39 = (char)((ulong)lVar25 >> 0x18);
                        cVar40 = (char)((ulong)lVar25 >> 0x20);
                        cVar41 = (char)((ulong)lVar25 >> 0x28);
                        cVar42 = (char)((ulong)lVar25 >> 0x30);
                        cVar43 = (char)((ulong)lVar25 >> 0x38);
                        for (uVar19 = CONCAT17(-(cVar43 == cVar35),
                                               CONCAT16(-(cVar42 == cVar34),
                                                        CONCAT15(-(cVar41 == cVar33),
                                                                 CONCAT14(-(cVar40 == cVar32),
                                                                          CONCAT13(-(cVar39 ==
                                                                                    cVar31),CONCAT12
                                                  (-(cVar38 == cVar30),
                                                   CONCAT11(-(cVar37 == cVar29),-(cVar36 == cVar27))
                                                  )))))) & 0x8080808080808080; uVar19 != 0;
                            uVar19 = uVar19 - 1 & uVar19) {
                          uVar15 = (uVar19 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar19 >> 7 & 0xff00ff00ff00ff) << 8;
                          uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar15 & 0xffff0000ffff) << 0x10;
                          uVar15 = uVar11 + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3) &
                                   uVar3;
                          if (plVar20[uVar15 * -4 + -4] != 0 &&
                              puVar24 == (undefined *)plVar20[uVar15 * -4 + -3]) {
                            iVar8 = _memcmp(pplVar23,plVar20[uVar15 * -4 + -4],puVar24);
                            if ((iVar8 == 0) && (uVar5 == plVar20[uVar15 * -4 + -1])) {
                              iVar8 = _memcmp(uVar1,plVar20[uVar15 * -4 + -2],uVar5);
                              if (iVar8 == 0) goto LAB_101895274;
                            }
                          }
                        }
                        uVar19 = uStack_310;
                        if (bVar7) {
LAB_101895058:
                          bVar26 = NEON_umaxv(CONCAT17(-(cVar43 == -1),
                                                       CONCAT16(-(cVar42 == -1),
                                                                CONCAT15(-(cVar41 == -1),
                                                                         CONCAT14(-(cVar40 == -1),
                                                                                  CONCAT13(-(cVar39 
                                                  == -1),CONCAT12(-(cVar38 == -1),
                                                                  CONCAT11(-(cVar37 == -1),
                                                                           -(cVar36 == -1)))))))),1)
                          ;
                          if ((bVar26 & 1) != 0) goto LAB_1018951b4;
                          bVar7 = true;
                          uStack_310 = uVar19;
                        }
                        else {
                          uVar19 = CONCAT17(-(lVar25 < 0),
                                            CONCAT16(-(cVar42 < '\0'),
                                                     CONCAT15(-(cVar41 < '\0'),
                                                              CONCAT14(-(cVar40 < '\0'),
                                                                       CONCAT13(-(cVar39 < '\0'),
                                                                                CONCAT12(-(cVar38 < 
                                                  '\0'),CONCAT11(-(cVar37 < '\0'),-(cVar36 < '\0')))
                                                  )))));
                          if (uVar19 != 0) {
                            uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                     (uVar19 & 0x5555555555555555) << 1;
                            uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 |
                                     (uVar19 & 0x3333333333333333) << 2;
                            uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                     (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
                            uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 |
                                     (uVar19 & 0xff00ff00ff00ff) << 8;
                            uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 |
                                     (uVar19 & 0xffff0000ffff) << 0x10;
                            uVar19 = uVar11 + ((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3)
                                     & uVar3;
                            goto LAB_101895058;
                          }
                          bVar7 = false;
                        }
                        lVar18 = lVar18 + 8;
                        uVar11 = lVar18 + uVar11;
                      } while( true );
                    }
                    bVar7 = false;
                    lVar18 = 0;
                    uVar11 = uVar11 & uVar3;
                    lVar25 = *(long *)((long)plVar20 + uVar11);
                    uVar19 = CONCAT17(-((char)((ulong)lVar25 >> 0x38) == cVar35),
                                      CONCAT16(-((char)((ulong)lVar25 >> 0x30) == cVar34),
                                               CONCAT15(-((char)((ulong)lVar25 >> 0x28) == cVar33),
                                                        CONCAT14(-((char)((ulong)lVar25 >> 0x20) ==
                                                                  cVar32),CONCAT13(-((char)((ulong)
                                                  lVar25 >> 0x18) == cVar31),
                                                  CONCAT12(-((char)((ulong)lVar25 >> 0x10) == cVar30
                                                            ),CONCAT11(-((char)((ulong)lVar25 >> 8)
                                                                        == cVar29),
                                                                       -((char)lVar25 == cVar27)))))
                                                  ))) & 0x8080808080808080;
joined_r0x0001018950e0:
                    for (; uVar19 != 0; uVar19 = uVar19 - 1 & uVar19) {
                      uVar15 = (uVar19 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                               (uVar19 >> 7 & 0xff00ff00ff00ff) << 8;
                      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar15 & 0xffff0000ffff) << 0x10;
                      uVar15 = uVar11 + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3) &
                               uVar3;
                      if ((plVar20[uVar15 * -4 + -4] == 0) && (uVar5 == plVar20[uVar15 * -4 + -1]))
                      {
                        iVar8 = _memcmp(uVar1,plVar20[uVar15 * -4 + -2],uVar5);
                        if (iVar8 == 0) {
                          pplVar23 = (long **)0x0;
LAB_101895274:
                          if (bVar22 == 0) {
                            auStack_180._0_8_ = &pplStack_b8;
                            auStack_180._8_8_ = &DAT_10192d9a4;
                            auStack_170._0_8_ = auStack_2b0;
                            auStack_170._8_8_ = &DAT_10192d9a4;
                            pplStack_b8 = pplVar23;
                            puStack_b0 = puVar24;
                            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                                      (&lStack_1c8,s__duplicate_dynamic_tool_name_in_n_108add86f,
                                       auStack_180);
                            *(undefined8 *)(*param_1 + 8) = uStack_1c0;
                            *(long *)*param_1 = lStack_1c8;
                            *(undefined8 *)param_1[1] = uStack_1b8;
                          }
                          else {
                            auStack_180._0_8_ = auStack_2b0;
                            auStack_180._8_8_ = &DAT_10192d9a4;
                            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                                      (&lStack_1b0,s_duplicate_dynamic_tool_name__108add89f,
                                       auStack_180);
                            *(undefined8 *)(*param_1 + 8) = uStack_1a8;
                            *(long *)*param_1 = lStack_1b0;
                            *(undefined8 *)param_1[1] = uStack_1a0;
                          }
                          goto joined_r0x00010189540c;
                        }
                      }
                    }
                    cVar36 = (char)((ulong)lVar25 >> 8);
                    cVar37 = (char)((ulong)lVar25 >> 0x10);
                    cVar38 = (char)((ulong)lVar25 >> 0x18);
                    cVar39 = (char)((ulong)lVar25 >> 0x20);
                    cVar40 = (char)((ulong)lVar25 >> 0x28);
                    cVar41 = (char)((ulong)lVar25 >> 0x30);
                    if (bVar7) {
LAB_101895160:
                      bVar26 = NEON_umaxv(CONCAT17(-((char)((ulong)lVar25 >> 0x38) == -1),
                                                   CONCAT16(-(cVar41 == -1),
                                                            CONCAT15(-(cVar40 == -1),
                                                                     CONCAT14(-(cVar39 == -1),
                                                                              CONCAT13(-(cVar38 ==
                                                                                        -1),CONCAT12
                                                  (-(cVar37 == -1),
                                                   CONCAT11(-(cVar36 == -1),-((char)lVar25 == -1))))
                                                  )))),1);
                      uVar19 = uStack_310;
                      if ((bVar26 & 1) != 0) goto LAB_1018951b4;
                      bVar7 = true;
                    }
                    else {
                      uVar19 = CONCAT17(-(lVar25 < 0),
                                        CONCAT16(-(cVar41 < '\0'),
                                                 CONCAT15(-(cVar40 < '\0'),
                                                          CONCAT14(-(cVar39 < '\0'),
                                                                   CONCAT13(-(cVar38 < '\0'),
                                                                            CONCAT12(-(cVar37 < '\0'
                                                                                      ),CONCAT11(-(
                                                  cVar36 < '\0'),-((char)lVar25 < '\0'))))))));
                      if (uVar19 != 0) {
                        uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar19 & 0x5555555555555555) << 1;
                        uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 |
                                 (uVar19 & 0x3333333333333333) << 2;
                        uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar19 & 0xff00ff00ff00ff) << 8;
                        uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar19 & 0xffff0000ffff) << 0x10;
                        uStack_310 = uVar11 + ((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3)
                                     & uVar3;
                        goto LAB_101895160;
                      }
                      bVar7 = false;
                    }
                    lVar18 = lVar18 + 8;
                    uVar11 = lVar18 + uVar11 & uVar3;
                    lVar25 = *(long *)((long)plVar20 + uVar11);
                    uVar19 = CONCAT17(-((char)((ulong)lVar25 >> 0x38) == cVar35),
                                      CONCAT16(-((char)((ulong)lVar25 >> 0x30) == cVar34),
                                               CONCAT15(-((char)((ulong)lVar25 >> 0x28) == cVar33),
                                                        CONCAT14(-((char)((ulong)lVar25 >> 0x20) ==
                                                                  cVar32),CONCAT13(-((char)((ulong)
                                                  lVar25 >> 0x18) == cVar31),
                                                  CONCAT12(-((char)((ulong)lVar25 >> 0x10) == cVar30
                                                            ),CONCAT11(-((char)((ulong)lVar25 >> 8)
                                                                        == cVar29),
                                                                       -((char)lVar25 == cVar27)))))
                                                  ))) & 0x8080808080808080;
                    goto joined_r0x0001018950e0;
                  }
                  if ((long)auStack_270._8_8_ < 0xe) {
                    if (auStack_270._8_8_ == 9) {
                      if ((*(long *)auStack_270._0_8_ != 0x656e6961746e6f63 ||
                           (char)*(long *)(auStack_270._0_8_ + 8) != 'r') &&
                         (*(long *)auStack_270._0_8_ != 0x6e6f6974636e7566 ||
                          (char)*(long *)(auStack_270._0_8_ + 8) != 's')) {
                        uVar13 = (uint)*(byte *)(auStack_270._0_8_ + 8);
                        bVar7 = *(long *)auStack_270._0_8_ == 0x65675f6567616d69;
                        uVar16 = 0x6e;
                        goto LAB_101894f3c;
                      }
                    }
                    else if ((auStack_270._8_8_ != 0xb) ||
                            ((*(long *)auStack_270._0_8_ != 0x6165735f656c6966 ||
                              *(long *)(auStack_270._0_8_ + 3) != 0x6863726165735f65 &&
                             (*(long *)auStack_270._0_8_ != 0x6165735f6c6f6f74 ||
                              *(long *)(auStack_270._0_8_ + 3) != 0x6863726165735f6c))))
                    goto LAB_101894f4c;
                  }
                  else {
                    if (auStack_270._8_8_ == 0xe) {
                      lVar18 = *(long *)(auStack_270._0_8_ + 6);
                      bVar7 = *(long *)auStack_270._0_8_ == 0x6f745f69746c756d;
                      lVar17 = 0x6573755f6c6f6f74;
                    }
                    else {
                      if (auStack_270._8_8_ == 0x12) {
                        uVar13 = (uint)*(ushort *)(auStack_270._0_8_ + 0x10);
                        bVar7 = *(long *)auStack_270._0_8_ == 0x6c65646f6d627573 &&
                                *(long *)(auStack_270._0_8_ + 8) == 0x746167656c65645f;
                        uVar16 = 0x726f;
                        goto LAB_101894f3c;
                      }
                      if (auStack_270._8_8_ != 0x13) goto LAB_101894f4c;
                      lVar18 = *(long *)(auStack_270._0_8_ + 0xb);
                      bVar7 = *(long *)auStack_270._0_8_ == 0x755f6e6f68747970 &&
                              *(long *)(auStack_270._0_8_ + 8) == 0x697369765f726573;
                      lVar17 = 0x656c62697369765f;
                    }
                    if (!bVar7 || lVar18 != lVar17) goto LAB_101894f4c;
                  }
LAB_1018955ac:
                  auStack_180._0_8_ = auStack_2b0;
                  auStack_180._8_8_ = &DAT_10192d9a4;
                  auStack_170._0_8_ = auStack_270;
                  auStack_170._8_8_ = &DAT_10192d9a4;
                  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                            (&lStack_1e0,s_Ldynamic_tool_namespace_collides_108add77c,auStack_180);
                  *(undefined8 *)(*param_1 + 8) = uStack_1d8;
                  *(long *)*param_1 = lStack_1e0;
                  *(undefined8 *)param_1[1] = uStack_1d0;
                  goto joined_r0x00010189540c;
                }
              }
              else if ((uVar11 < 5) || (*piVar10 != 0x5f70636d || (char)piVar10[1] != '_'))
              goto LAB_101894c94;
              auStack_180._0_8_ = auStack_2b0;
              auStack_180._8_8_ = &DAT_10192d9a4;
              auStack_170._0_8_ = auStack_270;
              auStack_170._8_8_ = &DAT_10192d9a4;
              __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                        (&lStack_1f8,s__dynamic_tool_namespace_is_reser_108add7cf,auStack_180);
              *(undefined8 *)(*param_1 + 8) = uStack_1f0;
              *(long *)*param_1 = lStack_1f8;
              *(undefined8 *)param_1[1] = uStack_1e8;
              goto joined_r0x00010189540c;
            }
          }
          auStack_180._8_8_ = auStack_2b0._0_8_ + auStack_2b0._8_8_;
          auStack_180._0_8_ = auStack_2b0._0_8_;
          auStack_170._0_8_ = auStack_170._0_8_ & 0xffffffff00000000;
          uStack_15c = 0;
          plStack_98 = (long *)0x0;
          uStack_90 = 1;
          uStack_88 = 0;
          pplStack_b8 = &plStack_98;
          puStack_b0 = &UNK_10b25d2c0;
          pplStack_a8 = (long **)0x60000020;
          iVar8 = __ZN69__LT_core__str__iter__EscapeDefault_u20_as_u20_core__fmt__Display_GT_3fmt17h3380c14e6cca82d3E
                            (auStack_180,&pplStack_b8);
          if (iVar8 != 0) {
            func_0x000108a07a3c(&UNK_108cf1f7a,0x37,&plStack_210,&UNK_10b268ec0,&UNK_10b268df0);
            goto LAB_10189584c;
          }
          uStack_228 = uStack_90;
          plStack_230 = plStack_98;
          uStack_220 = uStack_88;
          auStack_180._8_8_ = auStack_270._0_8_ + auStack_270._8_8_;
          auStack_180._0_8_ = auStack_270._0_8_;
          auStack_170._0_8_ = auStack_170._0_8_ & 0xffffffff00000000;
          uStack_15c = 0;
          plStack_98 = (long *)0x0;
          uStack_90 = 1;
          uStack_88 = 0;
          pplStack_a8 = (long **)0x60000020;
          pplStack_b8 = &plStack_98;
          puStack_b0 = &UNK_10b25d2c0;
          iVar8 = __ZN69__LT_core__str__iter__EscapeDefault_u20_as_u20_core__fmt__Display_GT_3fmt17h3380c14e6cca82d3E
                            (auStack_180,&pplStack_b8);
          if (iVar8 != 0) {
            func_0x000108a07a3c(&UNK_108cf1f7a,0x37,&plStack_210,&UNK_10b268ec0,&UNK_10b268df0);
            goto LAB_10189584c;
          }
          uStack_208 = uStack_90;
          plStack_210 = plStack_98;
          uStack_200 = uStack_88;
          auStack_180._0_8_ = &plStack_230;
          auStack_180._8_8_ = &DAT_1019a7324;
          auStack_170._0_8_ = &plStack_210;
          auStack_170._8_8_ = &DAT_1019a7324;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&lStack_248,s__dynamic_tool_namespace_has_lead_108add7fd,auStack_180);
          if (plStack_210 != (long *)0x0) {
            _free(uStack_208);
          }
          if (plStack_230 != (long *)0x0) {
            _free(uStack_228);
          }
          *(undefined8 *)(*param_1 + 8) = uStack_240;
          *(long *)*param_1 = lStack_248;
          *(undefined8 *)param_1[1] = uStack_238;
          goto joined_r0x00010189540c;
        }
      }
      else if ((uVar11 < 5) || (*piVar10 != 0x5f70636d || (char)piVar10[1] != '_'))
      goto LAB_101894ba8;
      auStack_180._0_8_ = auStack_2b0;
      auStack_180._8_8_ = &DAT_10192d9a4;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&lStack_288,s_dynamic_tool_name_is_reserved__108add928,auStack_180);
      *(undefined8 *)(*param_1 + 8) = uStack_280;
      *(long *)*param_1 = lStack_288;
      *(undefined8 *)param_1[1] = uStack_278;
      goto joined_r0x00010189540c;
    }
  }
  auStack_180._8_8_ = lVar18 + uVar11;
  auStack_170._0_8_ = auStack_170._0_8_ & 0xffffffff00000000;
  uStack_15c = 0;
  plStack_98 = (long *)0x0;
  uStack_90 = 1;
  uStack_88 = 0;
  pplStack_a8 = (long **)0x60000020;
  pplStack_b8 = &plStack_98;
  puStack_b0 = &UNK_10b25d2c0;
  auStack_180._0_8_ = lVar18;
  iVar8 = __ZN69__LT_core__str__iter__EscapeDefault_u20_as_u20_core__fmt__Display_GT_3fmt17h3380c14e6cca82d3E
                    (auStack_180,&pplStack_b8);
  if (iVar8 != 0) {
    func_0x000108a07a3c(&UNK_108cf1f7a,0x37,&plStack_210,&UNK_10b268ec0,&UNK_10b268df0);
LAB_10189584c:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x101895850);
    (*pcVar6)();
  }
  uStack_208 = uStack_90;
  plStack_210 = plStack_98;
  uStack_200 = uStack_88;
  auStack_180._0_8_ = &plStack_210;
  auStack_180._8_8_ = &DAT_1019a7324;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&lStack_2a0,s_3dynamic_tool_name_has_leading_t_108add94a,auStack_180);
  if (plStack_210 != (long *)0x0) {
    _free(uStack_208);
  }
  *(undefined8 *)(*param_1 + 8) = uStack_298;
  *(long *)*param_1 = lStack_2a0;
  *(undefined8 *)param_1[1] = uStack_290;
  goto joined_r0x00010189540c;
LAB_1018951b4:
  uVar11 = (ulong)*(char *)((long)plVar20 + uVar19);
  if (-1 < *(char *)((long)plVar20 + uVar19)) {
    lVar18 = *plVar20;
    uVar11 = CONCAT17(-(lVar18 < 0),
                      CONCAT16(-((char)((ulong)lVar18 >> 0x30) < '\0'),
                               CONCAT15(-((char)((ulong)lVar18 >> 0x28) < '\0'),
                                        CONCAT14(-((char)((ulong)lVar18 >> 0x20) < '\0'),
                                                 CONCAT13(-((char)((ulong)lVar18 >> 0x18) < '\0'),
                                                          CONCAT12(-((char)((ulong)lVar18 >> 0x10) <
                                                                    '\0'),CONCAT11(-((char)((ulong)
                                                  lVar18 >> 8) < '\0'),-((char)lVar18 < '\0'))))))))
    ;
    uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
    uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
    uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    uVar19 = (ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3;
    uVar11 = (ulong)*(byte *)((long)plVar20 + uVar19);
  }
  lVar25 = lStack_2d0 - (uVar11 & 1);
  *(byte *)((long)plVar20 + uVar19) = bVar2 >> 1;
                    /* WARNING (jumptable): Read-only address (ram,0x000108cea368) is written */
  *(byte *)((long)plVar20 + (uVar19 - 8 & uVar3) + 8) = bVar2 >> 1;
  lStack_2c8 = lStack_2c8 + 1;
  *(undefined1 (*) [16])(plVar20 + uVar19 * -4 + -4) = auStack_180;
  *(undefined1 (*) [16])(plVar20 + uVar19 * -4 + -2) = auStack_170._0_16_;
  lStack_2d0 = lVar25;
  if ((bVar22 & *(byte *)(lVar21 + 0x90)) == 0) {
    __ZN11codex_tools11json_schema23parse_tool_input_schema17h26d724b306fcb2d4E
              (auStack_180,lVar21 + 0x48);
    if (auStack_180._0_8_ != 2) {
      FUN_101952f5c(auStack_180);
      bVar7 = lVar14 != param_2 + auVar44._8_8_ * 0x98;
      lVar18 = 0;
      if (bVar7) {
        lVar18 = 0x98;
      }
      lVar18 = lVar14 + lVar18;
      lVar21 = lVar14;
      if (!bVar7) {
        *(undefined8 *)*param_1 = 0x8000000000000000;
        if (uVar3 == 0) {
          return;
        }
        if (uVar3 * 0x21 == -0x29) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(plVar20 + uVar3 * -4 + -4);
        return;
      }
      goto LAB_101894af0;
    }
    plStack_98 = (long *)auStack_180._8_8_;
    pplStack_b8 = (long **)auStack_2b0;
    puStack_b0 = &DAT_10192d9a4;
    pplStack_a8 = &plStack_98;
    pcStack_a0 = 
    __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&lStack_d0,s__dynamic_tool_input_schema_is_no_108add8bf,&pplStack_b8);
    plVar20 = plStack_98;
    *(undefined8 *)(*param_1 + 8) = uStack_c8;
    *(long *)*param_1 = lStack_d0;
    *(undefined8 *)param_1[1] = uStack_c0;
    if (*plStack_98 == 1) {
      FUN_10194d0ac(plStack_98 + 1);
    }
    else if ((*plStack_98 == 0) && (plStack_98[2] != 0)) {
      _free(plStack_98[1]);
    }
    _free(plVar20);
  }
  else {
    auStack_180._0_8_ = auStack_2b0;
    auStack_180._8_8_ = &DAT_10192d9a4;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&lStack_198,s_0deferred_dynamic_tool_must_incl_108add8f5,auStack_180);
    *(undefined8 *)(*param_1 + 8) = uStack_190;
    *(long *)*param_1 = lStack_198;
    *(undefined8 *)param_1[1] = uStack_188;
  }
joined_r0x00010189540c:
  if (uStack_2d8 == 0) {
    return;
  }
  if (uStack_2d8 * 0x21 == -0x29) {
    return;
  }
  _free(plStack_2e0 + uStack_2d8 * -4 + -4);
  return;
}

