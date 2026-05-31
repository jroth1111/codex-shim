
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN9codex_mcp3mcp22configured_mcp_servers17hfa671293f5acfcffE
               (undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  byte bVar5;
  undefined1 auVar6 [16];
  code *pcVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 (*pauVar13) [16];
  long *plVar14;
  undefined8 *extraout_x8;
  ulong *puVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  long *plVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long *plVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  undefined8 *puVar32;
  long *plVar33;
  ulong unaff_x21;
  byte bVar34;
  ulong unaff_x23;
  long unaff_x24;
  long lVar35;
  long *plVar36;
  ulong uVar37;
  long *plVar38;
  long lVar39;
  long *plVar40;
  long *plVar41;
  byte bVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lStack_450;
  long *plStack_430;
  ulong uStack_428;
  long lStack_420;
  long lStack_418;
  undefined1 auStack_410 [16];
  long *plStack_400;
  ulong uStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  undefined *puStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  long lStack_3b0;
  ulong uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined1 auStack_331 [17];
  undefined8 uStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 *puStack_290;
  undefined *puStack_270;
  ulong uStack_268;
  undefined8 uStack_260;
  long lStack_258;
  undefined *puStack_250;
  ulong uStack_248;
  ulong uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  undefined1 auStack_218 [440];
  
  uVar12 = *(undefined8 *)(param_2 + 0xf0);
  uVar20 = *(undefined8 *)(param_2 + 0xf8);
  uVar31 = *(ulong *)(param_2 + 0xd8);
  if (uVar31 == 0) {
    uStack_268 = 0;
    puStack_270 = &UNK_108c56c70;
    lStack_258 = 0;
    uStack_260 = 0;
    puStack_290 = param_1;
    goto LAB_103ed8a40;
  }
  uVar25 = uVar31 + 1;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar25;
  if (SUB168(auVar4 * ZEXT816(0x1c8),8) == 0) {
    unaff_x23 = uVar25 * 0x1c8;
    unaff_x21 = uVar31 + 9;
    uVar24 = unaff_x23 + unaff_x21;
    if ((CARRY8(unaff_x23,unaff_x21)) || (0x7ffffffffffffff8 < uVar24)) goto LAB_103ed88a4;
    unaff_x24 = param_2;
    uStack_2a0 = uVar20;
    uStack_298 = uVar12;
    puStack_290 = param_1;
    if (uVar24 == 0) goto LAB_103ed88bc;
    if (uVar24 < 8) {
      lStack_230 = 0;
      iVar9 = _posix_memalign(&lStack_230,8,uVar24);
      lVar10 = lStack_230;
      if (iVar9 != 0) goto LAB_103ed8a7c;
    }
    else {
      lVar10 = _malloc(uVar24);
    }
    if (lVar10 == 0) {
LAB_103ed8a7c:
      uVar12 = func_0x0001087c906c(8,uVar24);
      FUN_103da5fe4(unaff_x21,uStack_2b0);
      FUN_103d93990(&puStack_250);
      lVar10 = __Unwind_Resume(uVar12);
      pauVar13 = (undefined1 (*) [16])
                 (*
                 ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                 )();
      if (pauVar13[1][0] == '\x01') {
        auStack_410 = *pauVar13;
      }
      else {
        auStack_410 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        *(long *)(*pauVar13 + 8) = auStack_410._8_8_;
        pauVar13[1][0] = 1;
      }
      lStack_3b0 = auStack_410._0_8_;
      *(long *)*pauVar13 = lStack_3b0 + 3;
      uStack_3e0 = lStack_3b0 + 1;
      lStack_3b0 = lStack_3b0 + 2;
      uStack_428 = 0;
      plStack_430 = (long *)&UNK_108c56c70;
      lStack_418 = 0;
      lStack_420 = 0;
      uStack_3f8 = 0;
      plStack_400 = (long *)&UNK_108c56c70;
      lStack_3e8 = 0;
      lStack_3f0 = 0;
      uStack_3c8 = 0;
      puStack_3d0 = &UNK_108c56c70;
      uStack_3b8 = 0;
      uStack_3c0 = 0;
      lVar43 = *(long *)(lVar10 + 0x40);
      uStack_3d8 = auStack_410._8_8_;
      auVar6 = auStack_410;
      if (lVar43 != 0) {
        lVar22 = *(long *)(lVar10 + 0x38);
        lVar35 = lVar22 + 0x80;
        lVar11 = lVar22;
        uStack_3a8 = auStack_410._8_8_;
        do {
          lVar45 = lVar35;
          lVar35 = *(long *)(lVar11 + 0x58);
          if (lVar35 != 0) {
            lVar39 = *(long *)(lVar11 + 0x50);
            lVar30 = lVar39 + 0x18;
            lVar44 = lVar39;
            do {
              lVar17 = lVar30;
              uVar12 = *(undefined8 *)(lVar44 + 8);
              uVar31 = *(ulong *)(lVar44 + 0x10);
              if (uVar31 != 0) {
                plVar14 = (long *)_malloc(uVar31);
                if (plVar14 != (long *)0x0) goto LAB_103ed8c04;
LAB_103ed98d4:
                func_0x0001087c9084(1,uVar31);
                goto LAB_103ed98f0;
              }
              plVar14 = (long *)0x1;
LAB_103ed8c04:
              _memcpy(plVar14,uVar12,uVar31);
              uVar3 = uStack_428;
              plVar38 = plStack_430;
              uVar24 = auStack_410._0_8_ ^ 0x736f6d6570736575;
              uVar16 = auStack_410._8_8_ ^ 0x646f72616e646f6d;
              uVar23 = auStack_410._0_8_ ^ 0x6c7967656e657261;
              uVar25 = auStack_410._8_8_ ^ 0x7465646279746573;
              uVar37 = uVar31 & 0xfffffffffffffff8;
              if (uVar37 != 0) {
                uVar27 = 0;
                do {
                  uVar25 = *(ulong *)((long)plVar14 + uVar27) ^ uVar25;
                  uVar24 = uVar24 + uVar16;
                  uVar16 = uVar24 ^ (uVar16 >> 0x33 | uVar16 << 0xd);
                  uVar28 = uVar25 + uVar23 + uVar16;
                  uVar23 = uVar25 + uVar23 ^ (uVar25 >> 0x30 | uVar25 << 0x10);
                  uVar16 = uVar28 ^ (uVar16 >> 0x2f | uVar16 << 0x11);
                  uVar25 = uVar23 + (uVar24 >> 0x20 | uVar24 << 0x20);
                  uVar24 = uVar25 ^ *(ulong *)((long)plVar14 + uVar27);
                  uVar25 = uVar25 ^ (uVar23 >> 0x2b | uVar23 << 0x15);
                  uVar23 = uVar28 >> 0x20 | uVar28 << 0x20;
                  uVar27 = uVar27 + 8;
                } while (uVar27 < uVar37);
              }
              uVar27 = uVar31 & 7;
              if (uVar27 < 4) {
                uVar29 = 0;
                uVar28 = 0;
                if (1 < uVar27) goto LAB_103ed8cf8;
              }
              else {
                uVar28 = (ulong)*(uint *)((long)plVar14 + uVar37);
                uVar29 = 4;
                if (5 < uVar27) {
LAB_103ed8cf8:
                  uVar28 = (ulong)*(ushort *)((long)plVar14 + uVar29 + uVar37) << (uVar29 << 3) |
                           uVar28;
                  uVar29 = uVar29 | 2;
                }
              }
              if (uVar29 < uVar27) {
                uVar28 = (ulong)*(byte *)((long)plVar14 + uVar29 + uVar37) << (uVar29 << 3) | uVar28
                ;
LAB_103ed8d3c:
                uVar28 = uVar28 | 0xffL << (uVar27 << 3);
                if (uVar27 == 7) {
                  uVar25 = uVar28 ^ uVar25;
                  uVar24 = uVar16 + uVar24;
                  uVar16 = uVar24 ^ (uVar16 >> 0x33 | uVar16 << 0xd);
                  uVar37 = uVar25 + uVar23 + uVar16;
                  uVar23 = uVar25 + uVar23 ^ (uVar25 >> 0x30 | uVar25 << 0x10);
                  uVar16 = uVar37 ^ (uVar16 >> 0x2f | uVar16 << 0x11);
                  uVar25 = uVar23 + (uVar24 >> 0x20 | uVar24 << 0x20);
                  uVar24 = uVar25 ^ uVar28;
                  uVar25 = uVar25 ^ (uVar23 >> 0x2b | uVar23 << 0x15);
                  uVar23 = uVar37 >> 0x20 | uVar37 << 0x20;
                  uVar28 = 0;
                }
              }
              else {
                if (uVar27 != 0) goto LAB_103ed8d3c;
                uVar28 = 0xff;
              }
              lVar30 = 0;
              uVar28 = uVar28 | uVar31 + 1 << 0x38;
              uVar25 = uVar28 ^ uVar25;
              uVar24 = uVar16 + uVar24;
              uVar16 = uVar24 ^ (uVar16 >> 0x33 | uVar16 << 0xd);
              uVar37 = uVar25 + uVar23 + uVar16;
              uVar23 = uVar25 + uVar23 ^ (uVar25 >> 0x30 | uVar25 << 0x10);
              uVar16 = uVar37 ^ (uVar16 >> 0x2f | uVar16 << 0x11);
              uVar25 = uVar23 + (uVar24 >> 0x20 | uVar24 << 0x20);
              uVar23 = uVar25 ^ (uVar23 >> 0x2b | uVar23 << 0x15);
              uVar25 = (uVar25 ^ uVar28) + uVar16;
              uVar16 = uVar25 ^ (uVar16 >> 0x33 | uVar16 << 0xd);
              uVar24 = uVar23 + ((uVar37 >> 0x20 | uVar37 << 0x20) ^ 0xff);
              uVar37 = uVar16 + uVar24;
              uVar24 = uVar24 ^ (uVar23 >> 0x30 | uVar23 << 0x10);
              uVar23 = uVar37 ^ (uVar16 >> 0x2f | uVar16 << 0x11);
              uVar25 = uVar24 + (uVar25 >> 0x20 | uVar25 << 0x20);
              uVar16 = uVar23 + uVar25;
              uVar25 = uVar25 ^ (uVar24 >> 0x2b | uVar24 << 0x15);
              uVar23 = uVar16 ^ (uVar23 >> 0x33 | uVar23 << 0xd);
              uVar24 = uVar25 + (uVar37 >> 0x20 | uVar37 << 0x20);
              uVar37 = uVar23 + uVar24;
              uVar24 = uVar24 ^ (uVar25 >> 0x30 | uVar25 << 0x10);
              uVar23 = uVar37 ^ (uVar23 >> 0x2f | uVar23 << 0x11);
              uVar25 = uVar24 + (uVar16 >> 0x20 | uVar16 << 0x20);
              uVar27 = uVar25 ^ (uVar24 >> 0x2b | uVar24 << 0x15);
              uVar16 = uVar23 + uVar25 ^ (uVar23 >> 0x33 | uVar23 << 0xd);
              uVar25 = uVar27 + (uVar37 >> 0x20 | uVar37 << 0x20);
              uVar24 = uVar16 + uVar25;
              uVar25 = uVar25 ^ (uVar27 >> 0x30 | uVar27 << 0x10);
              uVar24 = (uVar25 >> 0x2b | uVar25 << 0x15) ^ (uVar16 >> 0x2f | uVar16 << 0x11) ^
                       (uVar24 >> 0x20 | uVar24 << 0x20) ^ uVar24;
              bVar5 = (byte)(uVar24 >> 0x38);
              bVar34 = bVar5 >> 1;
              uVar37 = uVar24 & uStack_428;
              uVar12 = *(undefined8 *)((long)plStack_430 + uVar37);
              uVar25 = CONCAT17(-((byte)((ulong)uVar12 >> 0x38) == bVar34),
                                CONCAT16(-((byte)((ulong)uVar12 >> 0x30) == bVar34),
                                         CONCAT15(-((byte)((ulong)uVar12 >> 0x28) == bVar34),
                                                  CONCAT14(-((byte)((ulong)uVar12 >> 0x20) == bVar34
                                                            ),CONCAT13(-((byte)((ulong)uVar12 >>
                                                                               0x18) == bVar34),
                                                                       CONCAT12(-((byte)((ulong)
                                                  uVar12 >> 0x10) == bVar34),
                                                  CONCAT11(-((byte)((ulong)uVar12 >> 8) == bVar34),
                                                           -((byte)uVar12 == bVar34))))))));
              while( true ) {
                for (uVar25 = uVar25 & 0x8080808080808080; uVar25 != 0; uVar25 = uVar25 - 1 & uVar25
                    ) {
                  uVar16 = (uVar25 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                           (uVar25 >> 7 & 0xff00ff00ff00ff) << 8;
                  uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10
                  ;
                  plVar36 = plVar38 + (uVar37 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >>
                                                3) & uVar3) * -6;
                  if (plVar36[-4] == uVar31) {
                    iVar9 = _memcmp(plVar36[-5],plVar14,uVar31);
                    if (iVar9 == 0) {
                      if (uVar31 != 0) {
                        _free(plVar14);
                      }
                      goto LAB_103ed8f8c;
                    }
                  }
                }
                bVar42 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar12 >> 0x38) == -1),
                                             CONCAT16(-((char)((ulong)uVar12 >> 0x30) == -1),
                                                      CONCAT15(-((char)((ulong)uVar12 >> 0x28) == -1
                                                                ),CONCAT14(-((char)((ulong)uVar12 >>
                                                                                   0x20) == -1),
                                                                           CONCAT13(-((char)((ulong)
                                                  uVar12 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar12 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar12 >> 8) ==
                                                                     -1),-((char)uVar12 == -1)))))))
                                            ),1);
                if ((bVar42 & 1) != 0) break;
                lVar30 = lVar30 + 8;
                uVar37 = uVar37 + lVar30 & uVar3;
                uVar12 = *(undefined8 *)((long)plVar38 + uVar37);
                uVar25 = CONCAT17(-((byte)((ulong)uVar12 >> 0x38) == bVar34),
                                  CONCAT16(-((byte)((ulong)uVar12 >> 0x30) == bVar34),
                                           CONCAT15(-((byte)((ulong)uVar12 >> 0x28) == bVar34),
                                                    CONCAT14(-((byte)((ulong)uVar12 >> 0x20) ==
                                                              bVar34),CONCAT13(-((byte)((ulong)
                                                  uVar12 >> 0x18) == bVar34),
                                                  CONCAT12(-((byte)((ulong)uVar12 >> 0x10) == bVar34
                                                            ),CONCAT11(-((byte)((ulong)uVar12 >> 8)
                                                                        == bVar34),
                                                                       -((byte)uVar12 == bVar34)))))
                                                  )));
              }
              if (lStack_420 == 0) {
                __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17h1106f077df9089c1E
                          (&plStack_430,1,auStack_410,1);
              }
              plVar36 = plVar14;
              if (uVar31 != 0x8000000000000000) {
                uVar24 = uStack_428 & uVar24;
                lVar30 = *(long *)((long)plStack_430 + uVar24);
                uVar25 = CONCAT17(-(lVar30 < 0),
                                  CONCAT16(-((char)((ulong)lVar30 >> 0x30) < '\0'),
                                           CONCAT15(-((char)((ulong)lVar30 >> 0x28) < '\0'),
                                                    CONCAT14(-((char)((ulong)lVar30 >> 0x20) < '\0')
                                                             ,CONCAT13(-((char)((ulong)lVar30 >>
                                                                               0x18) < '\0'),
                                                                       CONCAT12(-((char)((ulong)
                                                  lVar30 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar30 >> 8) < '\0'),
                                                           -((char)lVar30 < '\0'))))))));
                if (uVar25 == 0) {
                  lVar30 = 8;
                  do {
                    uVar24 = uVar24 + lVar30 & uStack_428;
                    lVar44 = *(long *)((long)plStack_430 + uVar24);
                    uVar25 = CONCAT17(-(lVar44 < 0),
                                      CONCAT16(-((char)((ulong)lVar44 >> 0x30) < '\0'),
                                               CONCAT15(-((char)((ulong)lVar44 >> 0x28) < '\0'),
                                                        CONCAT14(-((char)((ulong)lVar44 >> 0x20) <
                                                                  '\0'),CONCAT13(-((char)((ulong)
                                                  lVar44 >> 0x18) < '\0'),
                                                  CONCAT12(-((char)((ulong)lVar44 >> 0x10) < '\0'),
                                                           CONCAT11(-((char)((ulong)lVar44 >> 8) <
                                                                     '\0'),-((char)lVar44 < '\0'))))
                                                  ))));
                    lVar30 = lVar30 + 8;
                  } while (uVar25 == 0);
                }
                uVar25 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
                uVar25 = (uVar25 & 0xcccccccccccccccc) >> 2 | (uVar25 & 0x3333333333333333) << 2;
                uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
                uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
                uVar24 = uVar24 + ((ulong)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) >> 3) &
                         uStack_428;
                uVar25 = (ulong)*(char *)((long)plStack_430 + uVar24);
                if (-1 < *(char *)((long)plStack_430 + uVar24)) {
                  lVar30 = *plStack_430;
                  uVar25 = CONCAT17(-(lVar30 < 0),
                                    CONCAT16(-((char)((ulong)lVar30 >> 0x30) < '\0'),
                                             CONCAT15(-((char)((ulong)lVar30 >> 0x28) < '\0'),
                                                      CONCAT14(-((char)((ulong)lVar30 >> 0x20) <
                                                                '\0'),CONCAT13(-((char)((ulong)
                                                  lVar30 >> 0x18) < '\0'),
                                                  CONCAT12(-((char)((ulong)lVar30 >> 0x10) < '\0'),
                                                           CONCAT11(-((char)((ulong)lVar30 >> 8) <
                                                                     '\0'),-((char)lVar30 < '\0'))))
                                                  ))));
                  uVar25 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
                  uVar25 = (uVar25 & 0xcccccccccccccccc) >> 2 | (uVar25 & 0x3333333333333333) << 2;
                  uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
                  uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10
                  ;
                  uVar24 = (ulong)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) >> 3;
                  uVar25 = (ulong)*(byte *)((long)plStack_430 + uVar24);
                }
                *(byte *)((long)plStack_430 + uVar24) = bVar5 >> 1;
                *(byte *)((long)plStack_430 + (uVar24 - 8 & uStack_428) + 8) = bVar5 >> 1;
                plVar36 = plStack_430 + uVar24 * -6;
                plVar36[-6] = uVar31;
                plVar36[-5] = (long)plVar14;
                plVar36[-4] = uVar31;
                plVar36[-3] = 0;
                plVar36[-2] = 8;
                plVar36[-1] = 0;
                lStack_420 = lStack_420 - (uVar25 & 1);
                lStack_418 = lStack_418 + 1;
              }
LAB_103ed8f8c:
              uVar12 = *(undefined8 *)(lVar11 + 0x20);
              uVar31 = *(ulong *)(lVar11 + 0x28);
              if (uVar31 == 0) {
                uVar25 = 1;
              }
              else {
                uVar25 = _malloc(uVar31);
                if (uVar25 == 0) goto LAB_103ed98d4;
              }
              _memcpy(uVar25,uVar12,uVar31);
              lVar30 = plVar36[-1];
              if (lVar30 == plVar36[-3]) {
                __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(plVar36 + -3);
              }
              puVar15 = (ulong *)(plVar36[-2] + lVar30 * 0x18);
              *puVar15 = uVar31;
              puVar15[1] = uVar25;
              puVar15[2] = uVar31;
              plVar36[-1] = lVar30 + 1;
              bVar8 = lVar17 != lVar39 + lVar35 * 0x18;
              lVar30 = 0;
              if (bVar8) {
                lVar30 = 0x18;
              }
              lVar30 = lVar17 + lVar30;
              lVar44 = lVar17;
            } while (bVar8);
          }
          lVar35 = *(long *)(lVar11 + 0x40);
          if (lVar35 != 0) {
            lVar39 = *(long *)(lVar11 + 0x38);
            lVar30 = lVar39 + 0x18;
            lVar44 = lVar39;
            do {
              lVar17 = lVar30;
              uVar12 = *(undefined8 *)(lVar44 + 8);
              uVar31 = *(ulong *)(lVar44 + 0x10);
              if (uVar31 == 0) {
                plVar14 = (long *)0x1;
              }
              else {
                plVar14 = (long *)_malloc(uVar31);
                if (plVar14 == (long *)0x0) goto LAB_103ed98e4;
              }
              _memcpy(plVar14,uVar12,uVar31);
              uVar3 = uStack_3f8;
              plVar38 = plStack_400;
              uVar24 = uStack_3e0 ^ 0x736f6d6570736575;
              uVar16 = uStack_3d8 ^ 0x646f72616e646f6d;
              uVar23 = uStack_3e0 ^ 0x6c7967656e657261;
              uVar25 = uStack_3d8 ^ 0x7465646279746573;
              uVar37 = uVar31 & 0xfffffffffffffff8;
              if (uVar37 != 0) {
                uVar27 = 0;
                do {
                  uVar25 = *(ulong *)((long)plVar14 + uVar27) ^ uVar25;
                  uVar24 = uVar24 + uVar16;
                  uVar16 = uVar24 ^ (uVar16 >> 0x33 | uVar16 << 0xd);
                  uVar28 = uVar25 + uVar23 + uVar16;
                  uVar23 = uVar25 + uVar23 ^ (uVar25 >> 0x30 | uVar25 << 0x10);
                  uVar16 = uVar28 ^ (uVar16 >> 0x2f | uVar16 << 0x11);
                  uVar25 = uVar23 + (uVar24 >> 0x20 | uVar24 << 0x20);
                  uVar24 = uVar25 ^ *(ulong *)((long)plVar14 + uVar27);
                  uVar25 = uVar25 ^ (uVar23 >> 0x2b | uVar23 << 0x15);
                  uVar23 = uVar28 >> 0x20 | uVar28 << 0x20;
                  uVar27 = uVar27 + 8;
                } while (uVar27 < uVar37);
              }
              uVar27 = uVar31 & 7;
              if (uVar27 < 4) {
                uVar29 = 0;
                uVar28 = 0;
                if (1 < uVar27) goto LAB_103ed91ac;
              }
              else {
                uVar28 = (ulong)*(uint *)((long)plVar14 + uVar37);
                uVar29 = 4;
                if (5 < uVar27) {
LAB_103ed91ac:
                  uVar28 = (ulong)*(ushort *)((long)plVar14 + uVar29 + uVar37) << (uVar29 << 3) |
                           uVar28;
                  uVar29 = uVar29 | 2;
                }
              }
              if (uVar29 < uVar27) {
                uVar28 = (ulong)*(byte *)((long)plVar14 + uVar29 + uVar37) << (uVar29 << 3) | uVar28
                ;
LAB_103ed91f0:
                uVar28 = uVar28 | 0xffL << (uVar27 << 3);
                if (uVar27 == 7) {
                  uVar25 = uVar28 ^ uVar25;
                  uVar24 = uVar16 + uVar24;
                  uVar16 = uVar24 ^ (uVar16 >> 0x33 | uVar16 << 0xd);
                  uVar37 = uVar25 + uVar23 + uVar16;
                  uVar23 = uVar25 + uVar23 ^ (uVar25 >> 0x30 | uVar25 << 0x10);
                  uVar16 = uVar37 ^ (uVar16 >> 0x2f | uVar16 << 0x11);
                  uVar25 = uVar23 + (uVar24 >> 0x20 | uVar24 << 0x20);
                  uVar24 = uVar25 ^ uVar28;
                  uVar25 = uVar25 ^ (uVar23 >> 0x2b | uVar23 << 0x15);
                  uVar23 = uVar37 >> 0x20 | uVar37 << 0x20;
                  uVar28 = 0;
                }
              }
              else {
                if (uVar27 != 0) goto LAB_103ed91f0;
                uVar28 = 0xff;
              }
              lVar30 = 0;
              uVar28 = uVar28 | uVar31 + 1 << 0x38;
              uVar25 = uVar28 ^ uVar25;
              uVar24 = uVar16 + uVar24;
              uVar16 = uVar24 ^ (uVar16 >> 0x33 | uVar16 << 0xd);
              uVar37 = uVar25 + uVar23 + uVar16;
              uVar23 = uVar25 + uVar23 ^ (uVar25 >> 0x30 | uVar25 << 0x10);
              uVar16 = uVar37 ^ (uVar16 >> 0x2f | uVar16 << 0x11);
              uVar25 = uVar23 + (uVar24 >> 0x20 | uVar24 << 0x20);
              uVar23 = uVar25 ^ (uVar23 >> 0x2b | uVar23 << 0x15);
              uVar25 = (uVar25 ^ uVar28) + uVar16;
              uVar16 = uVar25 ^ (uVar16 >> 0x33 | uVar16 << 0xd);
              uVar24 = uVar23 + ((uVar37 >> 0x20 | uVar37 << 0x20) ^ 0xff);
              uVar37 = uVar16 + uVar24;
              uVar24 = uVar24 ^ (uVar23 >> 0x30 | uVar23 << 0x10);
              uVar23 = uVar37 ^ (uVar16 >> 0x2f | uVar16 << 0x11);
              uVar25 = uVar24 + (uVar25 >> 0x20 | uVar25 << 0x20);
              uVar16 = uVar23 + uVar25;
              uVar25 = uVar25 ^ (uVar24 >> 0x2b | uVar24 << 0x15);
              uVar23 = uVar16 ^ (uVar23 >> 0x33 | uVar23 << 0xd);
              uVar24 = uVar25 + (uVar37 >> 0x20 | uVar37 << 0x20);
              uVar37 = uVar23 + uVar24;
              uVar24 = uVar24 ^ (uVar25 >> 0x30 | uVar25 << 0x10);
              uVar23 = uVar37 ^ (uVar23 >> 0x2f | uVar23 << 0x11);
              uVar25 = uVar24 + (uVar16 >> 0x20 | uVar16 << 0x20);
              uVar27 = uVar25 ^ (uVar24 >> 0x2b | uVar24 << 0x15);
              uVar16 = uVar23 + uVar25 ^ (uVar23 >> 0x33 | uVar23 << 0xd);
              uVar25 = uVar27 + (uVar37 >> 0x20 | uVar37 << 0x20);
              uVar24 = uVar16 + uVar25;
              uVar25 = uVar25 ^ (uVar27 >> 0x30 | uVar27 << 0x10);
              uVar24 = (uVar25 >> 0x2b | uVar25 << 0x15) ^ (uVar16 >> 0x2f | uVar16 << 0x11) ^
                       (uVar24 >> 0x20 | uVar24 << 0x20) ^ uVar24;
              bVar5 = (byte)(uVar24 >> 0x38);
              bVar34 = bVar5 >> 1;
              uVar37 = uVar24 & uStack_3f8;
              uVar12 = *(undefined8 *)((long)plStack_400 + uVar37);
              uVar25 = CONCAT17(-((byte)((ulong)uVar12 >> 0x38) == bVar34),
                                CONCAT16(-((byte)((ulong)uVar12 >> 0x30) == bVar34),
                                         CONCAT15(-((byte)((ulong)uVar12 >> 0x28) == bVar34),
                                                  CONCAT14(-((byte)((ulong)uVar12 >> 0x20) == bVar34
                                                            ),CONCAT13(-((byte)((ulong)uVar12 >>
                                                                               0x18) == bVar34),
                                                                       CONCAT12(-((byte)((ulong)
                                                  uVar12 >> 0x10) == bVar34),
                                                  CONCAT11(-((byte)((ulong)uVar12 >> 8) == bVar34),
                                                           -((byte)uVar12 == bVar34))))))));
              while( true ) {
                for (uVar25 = uVar25 & 0x8080808080808080; uVar25 != 0; uVar25 = uVar25 - 1 & uVar25
                    ) {
                  uVar16 = (uVar25 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                           (uVar25 >> 7 & 0xff00ff00ff00ff) << 8;
                  uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10
                  ;
                  plVar36 = plVar38 + (uVar37 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >>
                                                3) & uVar3) * -6;
                  if (plVar36[-4] == uVar31) {
                    iVar9 = _memcmp(plVar36[-5],plVar14,uVar31);
                    if (iVar9 == 0) {
                      if (uVar31 != 0) {
                        _free(plVar14);
                      }
                      goto LAB_103ed9440;
                    }
                  }
                }
                bVar42 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar12 >> 0x38) == -1),
                                             CONCAT16(-((char)((ulong)uVar12 >> 0x30) == -1),
                                                      CONCAT15(-((char)((ulong)uVar12 >> 0x28) == -1
                                                                ),CONCAT14(-((char)((ulong)uVar12 >>
                                                                                   0x20) == -1),
                                                                           CONCAT13(-((char)((ulong)
                                                  uVar12 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar12 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar12 >> 8) ==
                                                                     -1),-((char)uVar12 == -1)))))))
                                            ),1);
                if ((bVar42 & 1) != 0) break;
                lVar30 = lVar30 + 8;
                uVar37 = uVar37 + lVar30 & uVar3;
                uVar12 = *(undefined8 *)((long)plVar38 + uVar37);
                uVar25 = CONCAT17(-((byte)((ulong)uVar12 >> 0x38) == bVar34),
                                  CONCAT16(-((byte)((ulong)uVar12 >> 0x30) == bVar34),
                                           CONCAT15(-((byte)((ulong)uVar12 >> 0x28) == bVar34),
                                                    CONCAT14(-((byte)((ulong)uVar12 >> 0x20) ==
                                                              bVar34),CONCAT13(-((byte)((ulong)
                                                  uVar12 >> 0x18) == bVar34),
                                                  CONCAT12(-((byte)((ulong)uVar12 >> 0x10) == bVar34
                                                            ),CONCAT11(-((byte)((ulong)uVar12 >> 8)
                                                                        == bVar34),
                                                                       -((byte)uVar12 == bVar34)))))
                                                  )));
              }
              if (lStack_3f0 == 0) {
                __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17h1106f077df9089c1E
                          (&plStack_400,1,&uStack_3e0,1);
              }
              plVar36 = plVar14;
              if (uVar31 != 0x8000000000000000) {
                uVar24 = uStack_3f8 & uVar24;
                lVar30 = *(long *)((long)plStack_400 + uVar24);
                uVar25 = CONCAT17(-(lVar30 < 0),
                                  CONCAT16(-((char)((ulong)lVar30 >> 0x30) < '\0'),
                                           CONCAT15(-((char)((ulong)lVar30 >> 0x28) < '\0'),
                                                    CONCAT14(-((char)((ulong)lVar30 >> 0x20) < '\0')
                                                             ,CONCAT13(-((char)((ulong)lVar30 >>
                                                                               0x18) < '\0'),
                                                                       CONCAT12(-((char)((ulong)
                                                  lVar30 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar30 >> 8) < '\0'),
                                                           -((char)lVar30 < '\0'))))))));
                if (uVar25 == 0) {
                  lVar30 = 8;
                  do {
                    uVar24 = uVar24 + lVar30 & uStack_3f8;
                    lVar44 = *(long *)((long)plStack_400 + uVar24);
                    uVar25 = CONCAT17(-(lVar44 < 0),
                                      CONCAT16(-((char)((ulong)lVar44 >> 0x30) < '\0'),
                                               CONCAT15(-((char)((ulong)lVar44 >> 0x28) < '\0'),
                                                        CONCAT14(-((char)((ulong)lVar44 >> 0x20) <
                                                                  '\0'),CONCAT13(-((char)((ulong)
                                                  lVar44 >> 0x18) < '\0'),
                                                  CONCAT12(-((char)((ulong)lVar44 >> 0x10) < '\0'),
                                                           CONCAT11(-((char)((ulong)lVar44 >> 8) <
                                                                     '\0'),-((char)lVar44 < '\0'))))
                                                  ))));
                    lVar30 = lVar30 + 8;
                  } while (uVar25 == 0);
                }
                uVar25 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
                uVar25 = (uVar25 & 0xcccccccccccccccc) >> 2 | (uVar25 & 0x3333333333333333) << 2;
                uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
                uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
                uVar24 = uVar24 + ((ulong)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) >> 3) &
                         uStack_3f8;
                uVar25 = (ulong)*(char *)((long)plStack_400 + uVar24);
                if (-1 < *(char *)((long)plStack_400 + uVar24)) {
                  lVar30 = *plStack_400;
                  uVar25 = CONCAT17(-(lVar30 < 0),
                                    CONCAT16(-((char)((ulong)lVar30 >> 0x30) < '\0'),
                                             CONCAT15(-((char)((ulong)lVar30 >> 0x28) < '\0'),
                                                      CONCAT14(-((char)((ulong)lVar30 >> 0x20) <
                                                                '\0'),CONCAT13(-((char)((ulong)
                                                  lVar30 >> 0x18) < '\0'),
                                                  CONCAT12(-((char)((ulong)lVar30 >> 0x10) < '\0'),
                                                           CONCAT11(-((char)((ulong)lVar30 >> 8) <
                                                                     '\0'),-((char)lVar30 < '\0'))))
                                                  ))));
                  uVar25 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
                  uVar25 = (uVar25 & 0xcccccccccccccccc) >> 2 | (uVar25 & 0x3333333333333333) << 2;
                  uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
                  uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10
                  ;
                  uVar24 = (ulong)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) >> 3;
                  uVar25 = (ulong)*(byte *)((long)plStack_400 + uVar24);
                }
                *(byte *)((long)plStack_400 + uVar24) = bVar5 >> 1;
                *(byte *)((long)plStack_400 + (uVar24 - 8 & uStack_3f8) + 8) = bVar5 >> 1;
                plVar36 = plStack_400 + uVar24 * -6;
                plVar36[-6] = uVar31;
                plVar36[-5] = (long)plVar14;
                plVar36[-4] = uVar31;
                plVar36[-3] = 0;
                plVar36[-2] = 8;
                plVar36[-1] = 0;
                lStack_3f0 = lStack_3f0 - (uVar25 & 1);
                lStack_3e8 = lStack_3e8 + 1;
              }
LAB_103ed9440:
              uVar12 = *(undefined8 *)(lVar11 + 0x20);
              uVar31 = *(ulong *)(lVar11 + 0x28);
              if (uVar31 == 0) {
                uVar25 = 1;
              }
              else {
                uVar25 = _malloc(uVar31);
                if (uVar25 == 0) {
LAB_103ed98e4:
                  func_0x0001087c9084(1,uVar31);
LAB_103ed98f0:
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x103ed98f4);
                  (*pcVar7)();
                }
              }
              _memcpy(uVar25,uVar12,uVar31);
              lVar30 = plVar36[-1];
              if (lVar30 == plVar36[-3]) {
                __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(plVar36 + -3);
              }
              puVar15 = (ulong *)(plVar36[-2] + lVar30 * 0x18);
              *puVar15 = uVar31;
              puVar15[1] = uVar25;
              puVar15[2] = uVar31;
              plVar36[-1] = lVar30 + 1;
              bVar8 = lVar17 != lVar39 + lVar35 * 0x18;
              lVar30 = 0;
              if (bVar8) {
                lVar30 = 0x18;
              }
              lVar30 = lVar17 + lVar30;
              lVar44 = lVar17;
            } while (bVar8);
          }
          auVar6._8_8_ = uStack_3a8;
          auVar6._0_8_ = auStack_410._0_8_;
          bVar8 = lVar45 != lVar22 + lVar43 * 0x80;
          lVar35 = 0;
          if (bVar8) {
            lVar35 = 0x80;
          }
          lVar35 = lVar45 + lVar35;
          lVar11 = lVar45;
        } while (bVar8);
      }
      plVar36 = plStack_430 + 1;
      lVar43 = *plStack_430;
      plVar38 = plStack_400 + 1;
      lVar35 = *plStack_400;
      uVar25 = CONCAT17(-(-1 < lVar43),
                        CONCAT16(-(-1 < (char)((ulong)lVar43 >> 0x30)),
                                 CONCAT15(-(-1 < (char)((ulong)lVar43 >> 0x28)),
                                          CONCAT14(-(-1 < (char)((ulong)lVar43 >> 0x20)),
                                                   CONCAT13(-(-1 < (char)((ulong)lVar43 >> 0x18)),
                                                            CONCAT12(-(-1 < (char)((ulong)lVar43 >>
                                                                                  0x10)),
                                                                     CONCAT11(-(-1 < (char)((ulong)
                                                  lVar43 >> 8)),-(-1 < (char)lVar43)))))))) &
               0x8080808080808080;
      uVar31 = CONCAT17(-(-1 < lVar35),
                        CONCAT16(-(-1 < (char)((ulong)lVar35 >> 0x30)),
                                 CONCAT15(-(-1 < (char)((ulong)lVar35 >> 0x28)),
                                          CONCAT14(-(-1 < (char)((ulong)lVar35 >> 0x20)),
                                                   CONCAT13(-(-1 < (char)((ulong)lVar35 >> 0x18)),
                                                            CONCAT12(-(-1 < (char)((ulong)lVar35 >>
                                                                                  0x10)),
                                                                     CONCAT11(-(-1 < (char)((ulong)
                                                  lVar35 >> 8)),-(-1 < (char)lVar35)))))))) &
               0x8080808080808080;
      lVar43 = lStack_418;
      lVar35 = lStack_3e8;
      plVar14 = plStack_400;
      plVar41 = plStack_430;
LAB_103ed9574:
      do {
        uStack_3a8 = auVar6._8_8_;
        auStack_410._0_8_ = auVar6._0_8_;
        if ((plVar41 == (long *)0x0) || (lVar43 == 0)) goto LAB_103ed959c;
        while (uVar25 == 0) {
          lVar11 = *plVar36;
          plVar41 = plVar41 + -0x30;
          plVar36 = plVar36 + 1;
          uVar25 = CONCAT17(-(-1 < lVar11),
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
        uVar24 = (uVar25 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar25 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
        uVar25 = uVar25 - 1 & uVar25;
        plVar40 = plVar41 + (long)-(int)((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3) * 6;
        lVar43 = lVar43 + -1;
        uVar24 = plVar40[-1];
      } while (uVar24 < 2);
      goto LAB_103ed95f0;
    }
  }
  else {
LAB_103ed88a4:
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109a75098,0x39,&UNK_10b3ad9c8);
LAB_103ed88bc:
    lVar10 = 8;
  }
  puVar1 = (undefined *)(lVar10 + unaff_x23);
  uStack_240 = uVar31;
  if (7 < uVar31) {
    uStack_240 = (uVar25 >> 3) * 7;
  }
  uStack_238 = 0;
  plVar14 = *(long **)(unaff_x24 + 0xd0);
  puStack_250 = puVar1;
  uStack_248 = uVar31;
  _memcpy(puVar1,plVar14,unaff_x21);
  lStack_258 = *(long *)(unaff_x24 + 0xe8);
  if (lStack_258 != 0) {
    plVar38 = plVar14 + 1;
    lVar10 = *plVar14;
    uVar31 = CONCAT17(-(-1 < lVar10),
                      CONCAT16(-(-1 < (char)((ulong)lVar10 >> 0x30)),
                               CONCAT15(-(-1 < (char)((ulong)lVar10 >> 0x28)),
                                        CONCAT14(-(-1 < (char)((ulong)lVar10 >> 0x20)),
                                                 CONCAT13(-(-1 < (char)((ulong)lVar10 >> 0x18)),
                                                          CONCAT12(-(-1 < (char)((ulong)lVar10 >>
                                                                                0x10)),
                                                                   CONCAT11(-(-1 < (char)((ulong)
                                                  lVar10 >> 8)),-(-1 < (char)lVar10)))))))) &
             0x8080808080808080;
    plVar36 = plVar14;
    lVar10 = lStack_258;
    do {
      while (uVar31 == 0) {
        lVar43 = *plVar38;
        plVar38 = plVar38 + 1;
        plVar36 = plVar36 + -0x1c8;
        uVar31 = CONCAT17(-(-1 < lVar43),
                          CONCAT16(-(-1 < (char)((ulong)lVar43 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar43 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar43 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar43 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar43
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar43 >> 8)),-(-1 < (char)lVar43)))))))) &
                 0x8080808080808080;
      }
      uVar25 = (uVar31 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar31 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
      plVar41 = plVar36 + (long)-(int)((ulong)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) >> 3) * 0x39;
      lVar35 = plVar41[-0x38];
      lVar43 = plVar41[-0x37];
      if (lVar43 == 0) {
        lVar11 = 1;
      }
      else {
        lVar11 = _malloc(lVar43);
        if (lVar11 == 0) {
          func_0x0001087c9084(1,lVar43);
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x103ed8a7c);
          (*pcVar7)();
        }
      }
      _memcpy(lVar11,lVar35,lVar43);
      lStack_230 = lVar43;
      lStack_228 = lVar11;
      lStack_220 = lVar43;
      FUN_103e73184(auStack_218,plVar41 + -0x36);
      uVar31 = uVar31 - 1 & uVar31;
      lVar10 = lVar10 + -1;
      _memcpy(puVar1 + ((long)plVar14 - (long)plVar41 >> 3) * -8 + -0x1c8,&lStack_230,0x1c8);
    } while (lVar10 != 0);
  }
  uStack_260 = *(undefined8 *)(unaff_x24 + 0xe0);
  uStack_268 = uStack_248;
  puStack_270 = puStack_250;
  uVar12 = uStack_298;
  uVar20 = uStack_2a0;
LAB_103ed8a40:
  puStack_290[1] = uStack_268;
  *puStack_290 = puStack_270;
  puStack_290[3] = lStack_258;
  puStack_290[2] = uStack_260;
  puStack_290[4] = uVar12;
  puStack_290[5] = uVar20;
  return;
LAB_103ed959c:
  if ((plVar14 == (long *)0x0) || (lVar35 == 0)) {
    FUN_103e78328(&uStack_368,lVar10 + 0x100);
    uStack_398 = uStack_360;
    uStack_3a0 = uStack_368;
    uStack_388 = uStack_350;
    uStack_390 = uStack_358;
    uStack_378 = uStack_340;
    uStack_380 = uStack_348;
    FUN_103d8f618(&puStack_3d0);
    extraout_x8[0xd] = uStack_398;
    extraout_x8[0xc] = uStack_3a0;
    extraout_x8[0xf] = uStack_388;
    extraout_x8[0xe] = uStack_390;
    extraout_x8[0x11] = uStack_378;
    extraout_x8[0x10] = uStack_380;
    extraout_x8[5] = auStack_410._8_8_;
    extraout_x8[4] = auStack_410._0_8_;
    extraout_x8[7] = uStack_3f8;
    extraout_x8[6] = plStack_400;
    extraout_x8[9] = lStack_3e8;
    extraout_x8[8] = lStack_3f0;
    extraout_x8[0xb] = uStack_3d8;
    extraout_x8[10] = uStack_3e0;
    extraout_x8[1] = uStack_428;
    *extraout_x8 = plStack_430;
    extraout_x8[3] = lStack_418;
    extraout_x8[2] = lStack_420;
    return;
  }
  while (uVar31 == 0) {
    lVar11 = *plVar38;
    plVar14 = plVar14 + -0x30;
    plVar38 = plVar38 + 1;
    uVar31 = CONCAT17(-(-1 < lVar11),
                      CONCAT16(-(-1 < (char)((ulong)lVar11 >> 0x30)),
                               CONCAT15(-(-1 < (char)((ulong)lVar11 >> 0x28)),
                                        CONCAT14(-(-1 < (char)((ulong)lVar11 >> 0x20)),
                                                 CONCAT13(-(-1 < (char)((ulong)lVar11 >> 0x18)),
                                                          CONCAT12(-(-1 < (char)((ulong)lVar11 >>
                                                                                0x10)),
                                                                   CONCAT11(-(-1 < (char)((ulong)
                                                  lVar11 >> 8)),-(-1 < (char)lVar11)))))))) &
             0x8080808080808080;
  }
  plVar41 = (long *)0x0;
  uVar24 = (uVar31 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar31 >> 7 & 0xff00ff00ff00ff) << 8;
  uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
  uVar31 = uVar31 - 1 & uVar31;
  plVar40 = plVar14 + (long)-(int)((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3) * 6;
  lVar35 = lVar35 + -1;
  uVar24 = plVar40[-1];
  if (1 < uVar24) {
LAB_103ed95f0:
    puVar32 = (undefined8 *)plVar40[-2];
    if (uVar24 < 0x15) {
      lStack_450 = 0;
      puVar2 = puVar32 + 3;
      puVar18 = puVar32;
      do {
        puVar19 = puVar2;
        uStack_3a8 = auVar6._8_8_;
        auStack_410._0_8_ = auVar6._0_8_;
        uVar12 = puVar18[4];
        uVar3 = puVar18[5];
        uVar16 = puVar18[2];
        uVar37 = uVar3;
        if (uVar16 <= uVar3) {
          uVar37 = uVar16;
        }
        iVar9 = _memcmp(uVar12,puVar18[1],uVar37);
        lVar11 = uVar3 - uVar16;
        if (iVar9 != 0) {
          lVar11 = (long)iVar9;
        }
        if (lVar11 < 0) {
          uVar20 = puVar18[3];
          lVar11 = lStack_450;
          do {
            lVar22 = lVar11;
            puVar2 = (undefined8 *)((long)puVar32 + lVar22);
            puVar2[4] = puVar2[1];
            puVar2[3] = *puVar2;
            puVar2[5] = puVar2[2];
            puVar18 = puVar32;
            if (lVar22 == 0) goto LAB_103ed9624;
            uVar16 = puVar2[-1];
            uVar37 = uVar3;
            if (uVar16 <= uVar3) {
              uVar37 = uVar16;
            }
            iVar9 = _memcmp(uVar12,puVar2[-2],uVar37);
            lVar45 = uVar3 - uVar16;
            if (iVar9 != 0) {
              lVar45 = (long)iVar9;
            }
            lVar11 = lVar22 + -0x18;
          } while (lVar45 < 0);
          puVar18 = (undefined8 *)((long)puVar32 + lVar22);
LAB_103ed9624:
          *puVar18 = uVar20;
          puVar2[1] = uVar12;
          puVar2[2] = uVar3;
        }
        auVar6._8_8_ = uStack_3a8;
        auVar6._0_8_ = auStack_410._0_8_;
        puVar2 = puVar19 + 3;
        lStack_450 = lStack_450 + 0x18;
        puVar18 = puVar19;
      } while (puVar2 != puVar32 + uVar24 * 3);
    }
    else {
      __ZN4core5slice4sort8unstable7ipnsort17h80175895b45e074eE(puVar32,uVar24,auStack_331);
    }
    auVar6._8_8_ = uStack_3a8;
    auVar6._0_8_ = auStack_410._0_8_;
    uVar24 = plVar40[-1];
    lVar11 = uVar24 - 2;
    if (1 < uVar24) {
      plVar21 = (long *)plVar40[-2];
      plVar26 = plVar21 + 6;
      uVar37 = 1;
      plVar33 = plVar21;
      do {
        if (plVar33[5] == plVar33[2]) {
          lVar22 = plVar33[4];
          iVar9 = _memcmp(lVar22,plVar33[1]);
          if (iVar9 == 0) {
            if (plVar33[3] != 0) {
              _free(lVar22);
            }
            if (uVar37 + 1 < uVar24) goto LAB_103ed97c8;
            goto LAB_103ed979c;
          }
        }
        auVar6._8_8_ = uStack_3a8;
        auVar6._0_8_ = auStack_410._0_8_;
        uVar37 = uVar37 + 1;
        lVar11 = lVar11 + -1;
        plVar26 = plVar26 + 3;
        plVar33 = plVar33 + 3;
      } while (uVar24 != uVar37);
    }
  }
  goto LAB_103ed9574;
LAB_103ed97c8:
  do {
    plVar33 = plVar21 + uVar37 * 3;
    if (plVar26[2] == plVar33[-1]) {
      lVar22 = plVar26[1];
      iVar9 = _memcmp(lVar22,plVar33[-2]);
      if (iVar9 != 0) goto LAB_103ed97a4;
      if (*plVar26 != 0) {
        _free(lVar22);
      }
    }
    else {
LAB_103ed97a4:
      lVar45 = plVar26[1];
      lVar22 = *plVar26;
      plVar33[2] = plVar26[2];
      plVar33[1] = lVar45;
      *plVar33 = lVar22;
      uVar37 = uVar37 + 1;
    }
    plVar26 = plVar26 + 3;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
LAB_103ed979c:
  auVar6._8_8_ = uStack_3a8;
  auVar6._0_8_ = auStack_410._0_8_;
  plVar40[-1] = uVar37;
  goto LAB_103ed9574;
}

