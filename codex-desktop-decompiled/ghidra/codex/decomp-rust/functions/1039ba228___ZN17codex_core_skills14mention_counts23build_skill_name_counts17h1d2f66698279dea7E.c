
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN17codex_core_skills14mention_counts23build_skill_name_counts17h1d2f66698279dea7E
               (undefined8 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  undefined1 (*pauVar6) [16];
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  byte bVar17;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  undefined8 uVar18;
  byte bVar24;
  long lVar19;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  undefined8 uVar25;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  undefined8 uVar40;
  byte bVar47;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  undefined8 uVar48;
  byte bVar55;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  undefined8 uVar56;
  byte bVar63;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  undefined8 uVar64;
  byte bVar71;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  undefined8 uVar72;
  byte bVar79;
  undefined8 uVar80;
  undefined1 auVar81 [16];
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [16];
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  ulong uStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long *plStack_a8;
  ulong uStack_a0;
  
  auVar81 = (*
            ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
            )();
  pauVar6 = auVar81._0_8_;
  if (pauVar6[1][0] == '\x01') {
    auStack_120 = *pauVar6;
  }
  else {
    auStack_120 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar6 + 8) = auStack_120._8_8_;
    pauVar6[1][0] = 1;
  }
  uStack_e8 = auStack_120._8_8_;
  lStack_f0 = auStack_120._0_8_ + 1;
  uStack_138 = 0;
  puStack_140 = &UNK_108c56c70;
  uStack_128 = 0;
  uStack_130 = 0;
  *(long *)*pauVar6 = auStack_120._0_8_ + 2;
  uStack_108 = 0;
  puStack_110 = &UNK_108c56c70;
  uStack_f8 = 0;
  uStack_100 = 0;
  if (auVar81._8_8_ != 0) {
    lVar12 = param_2 + auVar81._8_8_ * 0x148;
    lVar1 = param_4[3];
    lVar3 = param_4[4];
    lVar10 = param_4[5];
    lVar2 = *param_4;
    uVar4 = param_4[1];
    do {
      if (lVar1 != 0) {
        uVar8 = FUN_1039cf1d4(lVar3,lVar10,param_2 + 0x30);
        lVar16 = 0;
        bVar9 = (byte)(uVar8 >> 0x39);
        uVar18 = *(undefined8 *)(param_2 + 0x38);
        uVar25 = *(undefined8 *)(param_2 + 0x40);
        while( true ) {
          uVar8 = uVar8 & uVar4;
          uVar80 = *(undefined8 *)(lVar2 + uVar8);
          bVar17 = (byte)((ulong)uVar80 >> 8);
          bVar20 = (byte)((ulong)uVar80 >> 0x10);
          bVar21 = (byte)((ulong)uVar80 >> 0x18);
          bVar22 = (byte)((ulong)uVar80 >> 0x20);
          bVar23 = (byte)((ulong)uVar80 >> 0x28);
          bVar24 = (byte)((ulong)uVar80 >> 0x30);
          bVar26 = (byte)((ulong)uVar80 >> 0x38);
          for (uVar14 = CONCAT17(-(bVar26 == bVar9),
                                 CONCAT16(-(bVar24 == bVar9),
                                          CONCAT15(-(bVar23 == bVar9),
                                                   CONCAT14(-(bVar22 == bVar9),
                                                            CONCAT13(-(bVar21 == bVar9),
                                                                     CONCAT12(-(bVar20 == bVar9),
                                                                              CONCAT11(-(bVar17 ==
                                                                                        bVar9),-((
                                                  byte)uVar80 == bVar9)))))))) & 0x8080808080808080;
              uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
            uVar7 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
            lVar19 = lVar2 + (uVar8 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar4)
                             * -0x18;
            uVar7 = FUN_1039d2350(uVar18,uVar25,*(undefined8 *)(lVar19 + -0x10),
                                  *(undefined8 *)(lVar19 + -8));
            if ((uVar7 & 1) != 0) goto LAB_1039ba658;
          }
          bVar17 = NEON_umaxv(CONCAT17(-(bVar26 == 0xff),
                                       CONCAT16(-(bVar24 == 0xff),
                                                CONCAT15(-(bVar23 == 0xff),
                                                         CONCAT14(-(bVar22 == 0xff),
                                                                  CONCAT13(-(bVar21 == 0xff),
                                                                           CONCAT12(-(bVar20 == 0xff
                                                                                     ),CONCAT11(-(
                                                  bVar17 == 0xff),-((byte)uVar80 == 0xff)))))))),1);
          if ((bVar17 & 1) != 0) break;
          lVar16 = lVar16 + 8;
          uVar8 = uVar8 + lVar16;
        }
      }
      uVar18 = *(undefined8 *)(param_2 + 8);
      uVar8 = *(ulong *)(param_2 + 0x10);
      if (uVar8 == 0) {
        lVar16 = 1;
      }
      else {
        lVar16 = _malloc(uVar8);
        if (lVar16 == 0) {
          func_0x0001087c9084(1,uVar8);
          goto LAB_1039ba748;
        }
      }
      _memcpy(lVar16,uVar18,uVar8);
      uStack_d8 = uVar8;
      lStack_d0 = lVar16;
      uStack_c8 = uVar8;
      func_0x0001039d8790(&lStack_c0,&puStack_140,&uStack_d8);
      plVar11 = plStack_b8;
      if (lStack_c0 != -0x8000000000000000) {
        plVar11 = (long *)*plStack_a8;
        uVar14 = plStack_a8[1];
        uVar7 = uVar14 & uStack_a0;
        lVar16 = *(long *)((long)plVar11 + uVar7);
        uVar15 = CONCAT17(-(lVar16 < 0),
                          CONCAT16(-((char)((ulong)lVar16 >> 0x30) < '\0'),
                                   CONCAT15(-((char)((ulong)lVar16 >> 0x28) < '\0'),
                                            CONCAT14(-((char)((ulong)lVar16 >> 0x20) < '\0'),
                                                     CONCAT13(-((char)((ulong)lVar16 >> 0x18) < '\0'
                                                               ),CONCAT12(-((char)((ulong)lVar16 >>
                                                                                  0x10) < '\0'),
                                                                          CONCAT11(-((char)((ulong)
                                                  lVar16 >> 8) < '\0'),-((char)lVar16 < '\0'))))))))
        ;
        if (uVar15 == 0) {
          lVar16 = 8;
          do {
            uVar7 = uVar7 + lVar16 & uVar14;
            lVar19 = *(long *)((long)plVar11 + uVar7);
            uVar15 = CONCAT17(-(lVar19 < 0),
                              CONCAT16(-((char)((ulong)lVar19 >> 0x30) < '\0'),
                                       CONCAT15(-((char)((ulong)lVar19 >> 0x28) < '\0'),
                                                CONCAT14(-((char)((ulong)lVar19 >> 0x20) < '\0'),
                                                         CONCAT13(-((char)((ulong)lVar19 >> 0x18) <
                                                                   '\0'),CONCAT12(-((char)((ulong)
                                                  lVar19 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar19 >> 8) < '\0'),
                                                           -((char)lVar19 < '\0'))))))));
            lVar16 = lVar16 + 8;
          } while (uVar15 == 0);
        }
        uVar15 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
        uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
        uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        uVar15 = uVar7 + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3) & uVar14;
        uVar7 = (ulong)*(char *)((long)plVar11 + uVar15);
        if (-1 < *(char *)((long)plVar11 + uVar15)) {
          lVar16 = *plVar11;
          uVar7 = CONCAT17(-(lVar16 < 0),
                           CONCAT16(-((char)((ulong)lVar16 >> 0x30) < '\0'),
                                    CONCAT15(-((char)((ulong)lVar16 >> 0x28) < '\0'),
                                             CONCAT14(-((char)((ulong)lVar16 >> 0x20) < '\0'),
                                                      CONCAT13(-((char)((ulong)lVar16 >> 0x18) <
                                                                '\0'),CONCAT12(-((char)((ulong)
                                                  lVar16 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar16 >> 8) < '\0'),
                                                           -((char)lVar16 < '\0'))))))));
          uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar15 = (ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3;
          uVar7 = (ulong)*(byte *)((long)plVar11 + uVar15);
        }
        bVar9 = (byte)(uStack_a0 >> 0x38);
        *(byte *)((long)plVar11 + uVar15) = bVar9 >> 1;
        *(byte *)((long)plVar11 + (uVar15 - 8 & uVar14) + 8) = bVar9 >> 1;
        plVar11 = plVar11 + uVar15 * -4;
        plVar11[-4] = lStack_c0;
        plVar11[-3] = (long)plStack_b8;
        plVar11[-2] = lStack_b0;
        plVar11[-1] = 0;
        plStack_a8[3] = plStack_a8[3] + 1;
        plStack_a8[2] = plStack_a8[2] - (uVar7 & 1);
      }
      plVar11[-1] = plVar11[-1] + 1;
      if (uVar8 == 0) {
        lVar16 = 1;
      }
      else {
        lVar16 = _malloc(uVar8);
        if (lVar16 == 0) {
          func_0x0001087c9084(1,uVar8);
LAB_1039ba748:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1039ba74c);
          (*pcVar5)();
        }
        _memcpy(lVar16,uVar18,uVar8);
        if (uVar8 < 8) {
          uVar7 = 0;
        }
        else {
          if (uVar8 < 0x40) {
            uVar14 = 0;
LAB_1039ba514:
            uVar7 = uVar8 & 0xfffffffffffffff8;
            do {
              uVar18 = *(undefined8 *)(lVar16 + uVar14);
              bVar9 = (byte)((ulong)uVar18 >> 8);
              bVar17 = (byte)((ulong)uVar18 >> 0x10);
              bVar20 = (byte)((ulong)uVar18 >> 0x18);
              bVar21 = (byte)((ulong)uVar18 >> 0x20);
              bVar22 = (byte)((ulong)uVar18 >> 0x28);
              bVar23 = (byte)((ulong)uVar18 >> 0x30);
              bVar24 = (byte)((ulong)uVar18 >> 0x38);
              uVar15 = CONCAT17(-((byte)(bVar24 + 0xbf) < 0x1a),
                                CONCAT16(-((byte)(bVar23 + 0xbf) < 0x1a),
                                         CONCAT15(-((byte)(bVar22 + 0xbf) < 0x1a),
                                                  CONCAT14(-((byte)(bVar21 + 0xbf) < 0x1a),
                                                           CONCAT13(-((byte)(bVar20 + 0xbf) < 0x1a),
                                                                    CONCAT12(-((byte)(bVar17 + 0xbf)
                                                                              < 0x1a),CONCAT11(-((
                                                  byte)(bVar9 + 0xbf) < 0x1a),
                                                  -((byte)((byte)uVar18 + 0xbf) < 0x1a)))))))) &
                       0x2020202020202020;
              *(ulong *)(lVar16 + uVar14) =
                   CONCAT17((byte)(uVar15 >> 0x38) | bVar24,
                            CONCAT16((byte)(uVar15 >> 0x30) | bVar23,
                                     CONCAT15((byte)(uVar15 >> 0x28) | bVar22,
                                              CONCAT14((byte)(uVar15 >> 0x20) | bVar21,
                                                       CONCAT13((byte)(uVar15 >> 0x18) | bVar20,
                                                                CONCAT12((byte)(uVar15 >> 0x10) |
                                                                         bVar17,CONCAT11((byte)(
                                                  uVar15 >> 8) | bVar9,(byte)uVar15 | (byte)uVar18))
                                                  )))));
              uVar14 = uVar14 + 8;
              if (uVar7 == uVar14) goto LAB_1039ba5a4;
            } while( true );
          }
          uVar7 = uVar8 & 0xffffffffffffffc0;
          puVar13 = (undefined8 *)(lVar16 + 0x20);
          uVar14 = uVar7;
          do {
            uVar25 = puVar13[-3];
            uVar18 = puVar13[-4];
            uVar40 = puVar13[-1];
            uVar80 = puVar13[-2];
            uVar56 = puVar13[1];
            uVar48 = *puVar13;
            uVar72 = puVar13[3];
            uVar64 = puVar13[2];
            bVar9 = (byte)((ulong)uVar18 >> 8);
            bVar17 = (byte)((ulong)uVar18 >> 0x10);
            bVar20 = (byte)((ulong)uVar18 >> 0x18);
            bVar21 = (byte)((ulong)uVar18 >> 0x20);
            bVar22 = (byte)((ulong)uVar18 >> 0x28);
            bVar23 = (byte)((ulong)uVar18 >> 0x30);
            bVar24 = (byte)((ulong)uVar18 >> 0x38);
            bVar26 = (byte)((ulong)uVar25 >> 8);
            bVar27 = (byte)((ulong)uVar25 >> 0x10);
            bVar28 = (byte)((ulong)uVar25 >> 0x18);
            bVar29 = (byte)((ulong)uVar25 >> 0x20);
            bVar30 = (byte)((ulong)uVar25 >> 0x28);
            bVar31 = (byte)((ulong)uVar25 >> 0x30);
            bVar32 = (byte)((ulong)uVar25 >> 0x38);
            bVar33 = (byte)((ulong)uVar80 >> 8);
            bVar34 = (byte)((ulong)uVar80 >> 0x10);
            bVar35 = (byte)((ulong)uVar80 >> 0x18);
            bVar36 = (byte)((ulong)uVar80 >> 0x20);
            bVar37 = (byte)((ulong)uVar80 >> 0x28);
            bVar38 = (byte)((ulong)uVar80 >> 0x30);
            bVar39 = (byte)((ulong)uVar80 >> 0x38);
            bVar41 = (byte)((ulong)uVar40 >> 8);
            bVar42 = (byte)((ulong)uVar40 >> 0x10);
            bVar43 = (byte)((ulong)uVar40 >> 0x18);
            bVar44 = (byte)((ulong)uVar40 >> 0x20);
            bVar45 = (byte)((ulong)uVar40 >> 0x28);
            bVar46 = (byte)((ulong)uVar40 >> 0x30);
            bVar47 = (byte)((ulong)uVar40 >> 0x38);
            bVar49 = (byte)((ulong)uVar48 >> 8);
            bVar50 = (byte)((ulong)uVar48 >> 0x10);
            bVar51 = (byte)((ulong)uVar48 >> 0x18);
            bVar52 = (byte)((ulong)uVar48 >> 0x20);
            bVar53 = (byte)((ulong)uVar48 >> 0x28);
            bVar54 = (byte)((ulong)uVar48 >> 0x30);
            bVar55 = (byte)((ulong)uVar48 >> 0x38);
            bVar57 = (byte)((ulong)uVar56 >> 8);
            bVar58 = (byte)((ulong)uVar56 >> 0x10);
            bVar59 = (byte)((ulong)uVar56 >> 0x18);
            bVar60 = (byte)((ulong)uVar56 >> 0x20);
            bVar61 = (byte)((ulong)uVar56 >> 0x28);
            bVar62 = (byte)((ulong)uVar56 >> 0x30);
            bVar63 = (byte)((ulong)uVar56 >> 0x38);
            bVar65 = (byte)((ulong)uVar64 >> 8);
            bVar66 = (byte)((ulong)uVar64 >> 0x10);
            bVar67 = (byte)((ulong)uVar64 >> 0x18);
            bVar68 = (byte)((ulong)uVar64 >> 0x20);
            bVar69 = (byte)((ulong)uVar64 >> 0x28);
            bVar70 = (byte)((ulong)uVar64 >> 0x30);
            bVar71 = (byte)((ulong)uVar64 >> 0x38);
            bVar73 = (byte)((ulong)uVar72 >> 8);
            bVar74 = (byte)((ulong)uVar72 >> 0x10);
            bVar75 = (byte)((ulong)uVar72 >> 0x18);
            bVar76 = (byte)((ulong)uVar72 >> 0x20);
            bVar77 = (byte)((ulong)uVar72 >> 0x28);
            bVar78 = (byte)((ulong)uVar72 >> 0x30);
            bVar79 = (byte)((ulong)uVar72 >> 0x38);
            puVar13[-3] = CONCAT17(-((byte)(bVar32 + 0xbf) < 0x1a) & 0x20U | bVar32,
                                   CONCAT16(-((byte)(bVar31 + 0xbf) < 0x1a) & 0x20U | bVar31,
                                            CONCAT15(-((byte)(bVar30 + 0xbf) < 0x1a) & 0x20U |
                                                     bVar30,CONCAT14(-((byte)(bVar29 + 0xbf) < 0x1a)
                                                                     & 0x20U | bVar29,
                                                                     CONCAT13(-((byte)(bVar28 + 0xbf
                                                                                      ) < 0x1a) &
                                                                              0x20U | bVar28,
                                                                              CONCAT12(-((byte)(
                                                  bVar27 + 0xbf) < 0x1a) & 0x20U | bVar27,
                                                  CONCAT11(-((byte)(bVar26 + 0xbf) < 0x1a) & 0x20U |
                                                           bVar26,-((byte)((byte)uVar25 + 0xbf) <
                                                                   0x1a) & 0x20U | (byte)uVar25)))))
                                           ));
            puVar13[-4] = CONCAT17(-((byte)(bVar24 + 0xbf) < 0x1a) & 0x20U | bVar24,
                                   CONCAT16(-((byte)(bVar23 + 0xbf) < 0x1a) & 0x20U | bVar23,
                                            CONCAT15(-((byte)(bVar22 + 0xbf) < 0x1a) & 0x20U |
                                                     bVar22,CONCAT14(-((byte)(bVar21 + 0xbf) < 0x1a)
                                                                     & 0x20U | bVar21,
                                                                     CONCAT13(-((byte)(bVar20 + 0xbf
                                                                                      ) < 0x1a) &
                                                                              0x20U | bVar20,
                                                                              CONCAT12(-((byte)(
                                                  bVar17 + 0xbf) < 0x1a) & 0x20U | bVar17,
                                                  CONCAT11(-((byte)(bVar9 + 0xbf) < 0x1a) & 0x20U |
                                                           bVar9,-((byte)((byte)uVar18 + 0xbf) <
                                                                  0x1a) & 0x20U | (byte)uVar18))))))
                                  );
            puVar13[-1] = CONCAT17(-((byte)(bVar47 + 0xbf) < 0x1a) & 0x20U | bVar47,
                                   CONCAT16(-((byte)(bVar46 + 0xbf) < 0x1a) & 0x20U | bVar46,
                                            CONCAT15(-((byte)(bVar45 + 0xbf) < 0x1a) & 0x20U |
                                                     bVar45,CONCAT14(-((byte)(bVar44 + 0xbf) < 0x1a)
                                                                     & 0x20U | bVar44,
                                                                     CONCAT13(-((byte)(bVar43 + 0xbf
                                                                                      ) < 0x1a) &
                                                                              0x20U | bVar43,
                                                                              CONCAT12(-((byte)(
                                                  bVar42 + 0xbf) < 0x1a) & 0x20U | bVar42,
                                                  CONCAT11(-((byte)(bVar41 + 0xbf) < 0x1a) & 0x20U |
                                                           bVar41,-((byte)((byte)uVar40 + 0xbf) <
                                                                   0x1a) & 0x20U | (byte)uVar40)))))
                                           ));
            puVar13[-2] = CONCAT17(-((byte)(bVar39 + 0xbf) < 0x1a) & 0x20U | bVar39,
                                   CONCAT16(-((byte)(bVar38 + 0xbf) < 0x1a) & 0x20U | bVar38,
                                            CONCAT15(-((byte)(bVar37 + 0xbf) < 0x1a) & 0x20U |
                                                     bVar37,CONCAT14(-((byte)(bVar36 + 0xbf) < 0x1a)
                                                                     & 0x20U | bVar36,
                                                                     CONCAT13(-((byte)(bVar35 + 0xbf
                                                                                      ) < 0x1a) &
                                                                              0x20U | bVar35,
                                                                              CONCAT12(-((byte)(
                                                  bVar34 + 0xbf) < 0x1a) & 0x20U | bVar34,
                                                  CONCAT11(-((byte)(bVar33 + 0xbf) < 0x1a) & 0x20U |
                                                           bVar33,-((byte)((byte)uVar80 + 0xbf) <
                                                                   0x1a) & 0x20U | (byte)uVar80)))))
                                           ));
            puVar13[1] = CONCAT17(-((byte)(bVar63 + 0xbf) < 0x1a) & 0x20U | bVar63,
                                  CONCAT16(-((byte)(bVar62 + 0xbf) < 0x1a) & 0x20U | bVar62,
                                           CONCAT15(-((byte)(bVar61 + 0xbf) < 0x1a) & 0x20U | bVar61
                                                    ,CONCAT14(-((byte)(bVar60 + 0xbf) < 0x1a) &
                                                              0x20U | bVar60,
                                                              CONCAT13(-((byte)(bVar59 + 0xbf) <
                                                                        0x1a) & 0x20U | bVar59,
                                                                       CONCAT12(-((byte)(bVar58 + 
                                                  0xbf) < 0x1a) & 0x20U | bVar58,
                                                  CONCAT11(-((byte)(bVar57 + 0xbf) < 0x1a) & 0x20U |
                                                           bVar57,-((byte)((byte)uVar56 + 0xbf) <
                                                                   0x1a) & 0x20U | (byte)uVar56)))))
                                          ));
            *puVar13 = CONCAT17(-((byte)(bVar55 + 0xbf) < 0x1a) & 0x20U | bVar55,
                                CONCAT16(-((byte)(bVar54 + 0xbf) < 0x1a) & 0x20U | bVar54,
                                         CONCAT15(-((byte)(bVar53 + 0xbf) < 0x1a) & 0x20U | bVar53,
                                                  CONCAT14(-((byte)(bVar52 + 0xbf) < 0x1a) & 0x20U |
                                                           bVar52,CONCAT13(-((byte)(bVar51 + 0xbf) <
                                                                            0x1a) & 0x20U | bVar51,
                                                                           CONCAT12(-((byte)(bVar50 
                                                  + 0xbf) < 0x1a) & 0x20U | bVar50,
                                                  CONCAT11(-((byte)(bVar49 + 0xbf) < 0x1a) & 0x20U |
                                                           bVar49,-((byte)((byte)uVar48 + 0xbf) <
                                                                   0x1a) & 0x20U | (byte)uVar48)))))
                                        ));
            puVar13[3] = CONCAT17(-((byte)(bVar79 + 0xbf) < 0x1a) & 0x20U | bVar79,
                                  CONCAT16(-((byte)(bVar78 + 0xbf) < 0x1a) & 0x20U | bVar78,
                                           CONCAT15(-((byte)(bVar77 + 0xbf) < 0x1a) & 0x20U | bVar77
                                                    ,CONCAT14(-((byte)(bVar76 + 0xbf) < 0x1a) &
                                                              0x20U | bVar76,
                                                              CONCAT13(-((byte)(bVar75 + 0xbf) <
                                                                        0x1a) & 0x20U | bVar75,
                                                                       CONCAT12(-((byte)(bVar74 + 
                                                  0xbf) < 0x1a) & 0x20U | bVar74,
                                                  CONCAT11(-((byte)(bVar73 + 0xbf) < 0x1a) & 0x20U |
                                                           bVar73,-((byte)((byte)uVar72 + 0xbf) <
                                                                   0x1a) & 0x20U | (byte)uVar72)))))
                                          ));
            puVar13[2] = CONCAT17(-((byte)(bVar71 + 0xbf) < 0x1a) & 0x20U | bVar71,
                                  CONCAT16(-((byte)(bVar70 + 0xbf) < 0x1a) & 0x20U | bVar70,
                                           CONCAT15(-((byte)(bVar69 + 0xbf) < 0x1a) & 0x20U | bVar69
                                                    ,CONCAT14(-((byte)(bVar68 + 0xbf) < 0x1a) &
                                                              0x20U | bVar68,
                                                              CONCAT13(-((byte)(bVar67 + 0xbf) <
                                                                        0x1a) & 0x20U | bVar67,
                                                                       CONCAT12(-((byte)(bVar66 + 
                                                  0xbf) < 0x1a) & 0x20U | bVar66,
                                                  CONCAT11(-((byte)(bVar65 + 0xbf) < 0x1a) & 0x20U |
                                                           bVar65,-((byte)((byte)uVar64 + 0xbf) <
                                                                   0x1a) & 0x20U | (byte)uVar64)))))
                                          ));
            uVar14 = uVar14 - 0x40;
            puVar13 = puVar13 + 8;
          } while (uVar14 != 0);
          if (uVar8 == uVar7) goto LAB_1039ba5ac;
          uVar14 = uVar7;
          if ((uVar8 & 0x38) != 0) goto LAB_1039ba514;
        }
        do {
          bVar9 = 0x20;
          if (0x19 < *(byte *)(lVar16 + uVar7) - 0x41) {
            bVar9 = 0;
          }
          *(byte *)(lVar16 + uVar7) = bVar9 | *(byte *)(lVar16 + uVar7);
          uVar7 = uVar7 + 1;
LAB_1039ba5a4:
        } while (uVar8 != uVar7);
      }
LAB_1039ba5ac:
      uStack_d8 = uVar8;
      lStack_d0 = lVar16;
      uStack_c8 = uVar8;
      func_0x0001039d8790(&lStack_c0,&puStack_110,&uStack_d8);
      plVar11 = plStack_b8;
      if (lStack_c0 != -0x8000000000000000) {
        plVar11 = (long *)*plStack_a8;
        uVar8 = plStack_a8[1];
        uVar14 = uVar8 & uStack_a0;
        lVar16 = *(long *)((long)plVar11 + uVar14);
        uVar7 = CONCAT17(-(lVar16 < 0),
                         CONCAT16(-((char)((ulong)lVar16 >> 0x30) < '\0'),
                                  CONCAT15(-((char)((ulong)lVar16 >> 0x28) < '\0'),
                                           CONCAT14(-((char)((ulong)lVar16 >> 0x20) < '\0'),
                                                    CONCAT13(-((char)((ulong)lVar16 >> 0x18) < '\0')
                                                             ,CONCAT12(-((char)((ulong)lVar16 >>
                                                                               0x10) < '\0'),
                                                                       CONCAT11(-((char)((ulong)
                                                  lVar16 >> 8) < '\0'),-((char)lVar16 < '\0'))))))))
        ;
        if (uVar7 == 0) {
          lVar16 = 8;
          do {
            uVar14 = uVar14 + lVar16 & uVar8;
            lVar19 = *(long *)((long)plVar11 + uVar14);
            uVar7 = CONCAT17(-(lVar19 < 0),
                             CONCAT16(-((char)((ulong)lVar19 >> 0x30) < '\0'),
                                      CONCAT15(-((char)((ulong)lVar19 >> 0x28) < '\0'),
                                               CONCAT14(-((char)((ulong)lVar19 >> 0x20) < '\0'),
                                                        CONCAT13(-((char)((ulong)lVar19 >> 0x18) <
                                                                  '\0'),CONCAT12(-((char)((ulong)
                                                  lVar19 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar19 >> 8) < '\0'),
                                                           -((char)lVar19 < '\0'))))))));
            lVar16 = lVar16 + 8;
          } while (uVar7 == 0);
        }
        uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar14 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar8;
        uVar14 = (ulong)*(char *)((long)plVar11 + uVar7);
        if (-1 < *(char *)((long)plVar11 + uVar7)) {
          lVar16 = *plVar11;
          uVar14 = CONCAT17(-(lVar16 < 0),
                            CONCAT16(-((char)((ulong)lVar16 >> 0x30) < '\0'),
                                     CONCAT15(-((char)((ulong)lVar16 >> 0x28) < '\0'),
                                              CONCAT14(-((char)((ulong)lVar16 >> 0x20) < '\0'),
                                                       CONCAT13(-((char)((ulong)lVar16 >> 0x18) <
                                                                 '\0'),CONCAT12(-((char)((ulong)
                                                  lVar16 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar16 >> 8) < '\0'),
                                                           -((char)lVar16 < '\0'))))))));
          uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
          uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
          uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
          uVar7 = (ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3;
          uVar14 = (ulong)*(byte *)((long)plVar11 + uVar7);
        }
        bVar9 = (byte)(uStack_a0 >> 0x38);
        *(byte *)((long)plVar11 + uVar7) = bVar9 >> 1;
        *(byte *)((long)plVar11 + (uVar7 - 8 & uVar8) + 8) = bVar9 >> 1;
        plVar11 = plVar11 + uVar7 * -4;
        plVar11[-4] = lStack_c0;
        plVar11[-3] = (long)plStack_b8;
        plVar11[-2] = lStack_b0;
        plVar11[-1] = 0;
        plStack_a8[3] = plStack_a8[3] + 1;
        plStack_a8[2] = plStack_a8[2] - (uVar14 & 1);
      }
      plVar11[-1] = plVar11[-1] + 1;
LAB_1039ba658:
      param_2 = param_2 + 0x148;
    } while (param_2 != lVar12);
  }
  param_1[1] = uStack_138;
  *param_1 = puStack_140;
  param_1[3] = uStack_128;
  param_1[2] = uStack_130;
  *(undefined1 (*) [16])(param_1 + 4) = auStack_120;
  param_1[7] = uStack_108;
  param_1[6] = puStack_110;
  param_1[9] = uStack_f8;
  param_1[8] = uStack_100;
  param_1[0xb] = uStack_e8;
  param_1[10] = lStack_f0;
  return;
}

