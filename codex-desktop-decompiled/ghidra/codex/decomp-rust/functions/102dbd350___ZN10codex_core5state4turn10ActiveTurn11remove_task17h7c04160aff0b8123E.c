
undefined1  [16]
__ZN10codex_core5state4turn10ActiveTurn11remove_task17h7c04160aff0b8123E
          (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  byte bVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined1 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong unaff_x19;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong unaff_x23;
  long *plVar20;
  long unaff_x24;
  ulong uVar21;
  ulong uVar22;
  byte bVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  long lVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  long lVar40;
  byte bVar41;
  undefined8 uVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  char cVar53;
  char cVar54;
  char cVar55;
  char cVar56;
  char cVar57;
  char cVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  ulong uStack_5d0;
  long lStack_3f8;
  ulong uStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  ulong uStack_358;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_330;
  ulong uStack_328;
  ulong uStack_320;
  long lStack_318;
  long lStack_310;
  ulong uStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  ulong uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 *puStack_2e0;
  code *pcStack_2d8;
  ulong uStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long *plStack_288;
  long *plStack_280;
  long lStack_278;
  long *plStack_270;
  long *plStack_268;
  long *plStack_260;
  long *plStack_258;
  long *plStack_250;
  long *plStack_248;
  long *plStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long *plStack_208;
  long *plStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long *plStack_180;
  long *plStack_178;
  long lStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  long *plStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long lStack_88;
  ulong *puVar5;
  
  uVar17 = *(ulong *)(param_1 + 0x10);
  if (uVar17 != 0) {
    uVar10 = uVar17 - 1;
    if (uVar10 == 0) {
      plVar20 = *(long **)(param_1 + 8);
      if (param_3 == plVar20[2]) {
        lVar18 = plVar20[1];
        iVar3 = _memcmp(param_2,lVar18,param_3);
        if (iVar3 == 0) {
          lVar12 = 0;
          *(undefined8 *)(param_1 + 0x10) = 0;
          lVar7 = *plVar20;
          plStack_1e8 = (long *)plVar20[0xd];
          plStack_1f0 = (long *)plVar20[0xc];
          plStack_1d8 = (long *)plVar20[0xf];
          plStack_1e0 = (long *)plVar20[0xe];
          plStack_1c8 = (long *)plVar20[0x11];
          plStack_1d0 = (long *)plVar20[0x10];
          lStack_1b8 = plVar20[0x13];
          plStack_1c0 = (long *)plVar20[0x12];
          lStack_228 = plVar20[5];
          lStack_230 = plVar20[4];
          lStack_218 = plVar20[7];
          lStack_220 = plVar20[6];
          plStack_208 = (long *)plVar20[9];
          lStack_210 = plVar20[8];
          lStack_1f8 = plVar20[0xb];
          plStack_200 = (long *)plVar20[10];
          lVar13 = *(long *)(param_1 + 0x18);
          uVar10 = *(ulong *)(param_1 + 0x20);
          bVar6 = (byte)((ulong)plVar20[0x14] >> 0x39);
          lVar19 = plVar20[3];
          uVar16 = plVar20[0x14] & uVar10;
          uVar42 = *(undefined8 *)(lVar13 + uVar16);
          uVar17 = CONCAT17(-((byte)((ulong)uVar42 >> 0x38) == bVar6),
                            CONCAT16(-((byte)((ulong)uVar42 >> 0x30) == bVar6),
                                     CONCAT15(-((byte)((ulong)uVar42 >> 0x28) == bVar6),
                                              CONCAT14(-((byte)((ulong)uVar42 >> 0x20) == bVar6),
                                                       CONCAT13(-((byte)((ulong)uVar42 >> 0x18) ==
                                                                 bVar6),CONCAT12(-((byte)((ulong)
                                                  uVar42 >> 0x10) == bVar6),
                                                  CONCAT11(-((byte)((ulong)uVar42 >> 8) == bVar6),
                                                           -((byte)uVar42 == bVar6)))))))) &
                   0x8080808080808080;
          while( true ) {
            while (lStack_100 = lStack_230, lStack_f8 = lStack_228, lStack_f0 = lStack_220,
                  lStack_e8 = lStack_218, lStack_e0 = lStack_210, plStack_d8 = plStack_208,
                  plStack_d0 = plStack_200, lStack_c8 = lStack_1f8, plStack_c0 = plStack_1f0,
                  plStack_b8 = plStack_1e8, plStack_b0 = plStack_1e0, plStack_a8 = plStack_1d8,
                  plStack_a0 = plStack_1d0, plStack_98 = plStack_1c8, plStack_90 = plStack_1c0,
                  lStack_88 = lStack_1b8, uVar17 == 0) {
              bVar41 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar42 >> 0x38) == -1),
                                           CONCAT16(-((char)((ulong)uVar42 >> 0x30) == -1),
                                                    CONCAT15(-((char)((ulong)uVar42 >> 0x28) == -1),
                                                             CONCAT14(-((char)((ulong)uVar42 >> 0x20
                                                                              ) == -1),
                                                                      CONCAT13(-((char)((ulong)
                                                  uVar42 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar42 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar42 >> 8) ==
                                                                     -1),-((char)uVar42 == -1)))))))
                                          ),1);
              if ((bVar41 & 1) != 0) goto joined_r0x000102dbd744;
              lVar12 = lVar12 + 8;
              uVar16 = uVar16 + lVar12 & uVar10;
              uVar42 = *(undefined8 *)(lVar13 + uVar16);
              uVar17 = CONCAT17(-((byte)((ulong)uVar42 >> 0x38) == bVar6),
                                CONCAT16(-((byte)((ulong)uVar42 >> 0x30) == bVar6),
                                         CONCAT15(-((byte)((ulong)uVar42 >> 0x28) == bVar6),
                                                  CONCAT14(-((byte)((ulong)uVar42 >> 0x20) == bVar6)
                                                           ,CONCAT13(-((byte)((ulong)uVar42 >> 0x18)
                                                                      == bVar6),
                                                                     CONCAT12(-((byte)((ulong)uVar42
                                                                                      >> 0x10) ==
                                                                               bVar6),CONCAT11(-((
                                                  byte)((ulong)uVar42 >> 8) == bVar6),
                                                  -((byte)uVar42 == bVar6)))))))) &
                       0x8080808080808080;
            }
            uVar15 = (uVar17 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar17 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
            uVar15 = uVar16 + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3) & uVar10;
            if (*(long *)(lVar13 + -8 + uVar15 * -8) == 0) break;
            uVar17 = uVar17 - 1 & uVar17;
          }
          puVar1 = (undefined8 *)(lVar13 + (uVar15 - 8 & uVar10));
          uVar42 = *puVar1;
          uVar26 = *(undefined8 *)(lVar13 + uVar15);
          uVar17 = CONCAT17(-((char)((ulong)uVar26 >> 0x38) == -1),
                            CONCAT16(-((char)((ulong)uVar26 >> 0x30) == -1),
                                     CONCAT15(-((char)((ulong)uVar26 >> 0x28) == -1),
                                              CONCAT14(-((char)((ulong)uVar26 >> 0x20) == -1),
                                                       CONCAT13(-((char)((ulong)uVar26 >> 0x18) ==
                                                                 -1),CONCAT12(-((char)((ulong)uVar26
                                                                                      >> 0x10) == -1
                                                                               ),CONCAT11(-((char)((
                                                  ulong)uVar26 >> 8) == -1),-((char)uVar26 == -1))))
                                                  ))));
          uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
          uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
          uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
          uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
          if (((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) +
              ((ulong)LZCOUNT(CONCAT17(-((char)((ulong)uVar42 >> 0x38) == -1),
                                       CONCAT16(-((char)((ulong)uVar42 >> 0x30) == -1),
                                                CONCAT15(-((char)((ulong)uVar42 >> 0x28) == -1),
                                                         CONCAT14(-((char)((ulong)uVar42 >> 0x20) ==
                                                                   -1),CONCAT13(-((char)((ulong)
                                                  uVar42 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar42 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar42 >> 8) ==
                                                                     -1),-((char)uVar42 == -1)))))))
                                      )) >> 3) < 8) {
            *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
            uVar11 = 0xff;
          }
          else {
            uVar11 = 0x80;
          }
          *(undefined1 *)(lVar13 + uVar15) = uVar11;
          *(undefined1 *)(puVar1 + 1) = uVar11;
          *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
          goto joined_r0x000102dbd744;
        }
      }
    }
    else {
      uStack_2c8 = FUN_1033f7644(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                                 param_2,param_3);
      lStack_2c0 = 0;
      lVar13 = *(long *)(param_1 + 8);
      lVar12 = *(long *)(param_1 + 0x18);
      uVar16 = *(ulong *)(param_1 + 0x20);
      bVar6 = (byte)(uStack_2c8 >> 0x39);
      uVar26 = CONCAT17(bVar6,CONCAT16(bVar6,CONCAT15(bVar6,CONCAT14(bVar6,CONCAT13(bVar6,CONCAT12(
                                                  bVar6,CONCAT11(bVar6,bVar6)))))));
      lStack_2b8 = lVar12 + -8;
      uStack_2c8 = uStack_2c8 & uVar16;
      uVar42 = *(undefined8 *)(lVar12 + uStack_2c8);
      uVar15 = CONCAT17(-((byte)((ulong)uVar42 >> 0x38) == bVar6),
                        CONCAT16(-((byte)((ulong)uVar42 >> 0x30) == bVar6),
                                 CONCAT15(-((byte)((ulong)uVar42 >> 0x28) == bVar6),
                                          CONCAT14(-((byte)((ulong)uVar42 >> 0x20) == bVar6),
                                                   CONCAT13(-((byte)((ulong)uVar42 >> 0x18) == bVar6
                                                             ),CONCAT12(-((byte)((ulong)uVar42 >>
                                                                                0x10) == bVar6),
                                                                        CONCAT11(-((byte)((ulong)
                                                  uVar42 >> 8) == bVar6),-((byte)uVar42 == bVar6))))
                                                  )))) & 0x8080808080808080;
      while( true ) {
        while (uVar15 == 0) {
          bVar41 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar42 >> 0x38) == -1),
                                       CONCAT16(-((char)((ulong)uVar42 >> 0x30) == -1),
                                                CONCAT15(-((char)((ulong)uVar42 >> 0x28) == -1),
                                                         CONCAT14(-((char)((ulong)uVar42 >> 0x20) ==
                                                                   -1),CONCAT13(-((char)((ulong)
                                                  uVar42 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar42 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar42 >> 8) ==
                                                                     -1),-((char)uVar42 == -1)))))))
                                      ),1);
          if ((bVar41 & 1) != 0) goto LAB_102dbd980;
          lStack_2c0 = lStack_2c0 + 8;
          uStack_2c8 = uStack_2c8 + lStack_2c0 & uVar16;
          uVar42 = *(undefined8 *)(lVar12 + uStack_2c8);
          uVar15 = CONCAT17(-((byte)((ulong)uVar42 >> 0x38) == bVar6),
                            CONCAT16(-((byte)((ulong)uVar42 >> 0x30) == bVar6),
                                     CONCAT15(-((byte)((ulong)uVar42 >> 0x28) == bVar6),
                                              CONCAT14(-((byte)((ulong)uVar42 >> 0x20) == bVar6),
                                                       CONCAT13(-((byte)((ulong)uVar42 >> 0x18) ==
                                                                 bVar6),CONCAT12(-((byte)((ulong)
                                                  uVar42 >> 0x10) == bVar6),
                                                  CONCAT11(-((byte)((ulong)uVar42 >> 8) == bVar6),
                                                           -((byte)uVar42 == bVar6)))))))) &
                   0x8080808080808080;
        }
        uVar4 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        uVar21 = uStack_2c8 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & uVar16;
        uVar4 = *(ulong *)(lStack_2b8 + uVar21 * -8);
        if (uVar17 <= uVar4) goto LAB_102dbd9dc;
        lVar7 = lVar13 + uVar4 * 0xa8;
        unaff_x19 = uVar15;
        if ((param_3 == *(long *)(lVar7 + 0x10)) &&
           (iVar3 = _memcmp(param_2,*(undefined8 *)(lVar7 + 8),param_3), unaff_x23 = uVar16,
           unaff_x24 = lVar13, iVar3 == 0)) break;
        uVar15 = uVar15 - 1 & uVar15;
      }
      puVar1 = (undefined8 *)(lVar12 + (uVar21 - 8 & uVar16));
      uVar24 = *puVar1;
      uVar25 = *(undefined8 *)(lVar12 + uVar21);
      uVar15 = CONCAT17(-((char)((ulong)uVar25 >> 0x38) == -1),
                        CONCAT16(-((char)((ulong)uVar25 >> 0x30) == -1),
                                 CONCAT15(-((char)((ulong)uVar25 >> 0x28) == -1),
                                          CONCAT14(-((char)((ulong)uVar25 >> 0x20) == -1),
                                                   CONCAT13(-((char)((ulong)uVar25 >> 0x18) == -1),
                                                            CONCAT12(-((char)((ulong)uVar25 >> 0x10)
                                                                      == -1),CONCAT11(-((char)((
                                                  ulong)uVar25 >> 8) == -1),-((char)uVar25 == -1))))
                                                  ))));
      uVar15 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
      uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      if (((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3) +
          ((ulong)LZCOUNT(CONCAT17(-((char)((ulong)uVar24 >> 0x38) == -1),
                                   CONCAT16(-((char)((ulong)uVar24 >> 0x30) == -1),
                                            CONCAT15(-((char)((ulong)uVar24 >> 0x28) == -1),
                                                     CONCAT14(-((char)((ulong)uVar24 >> 0x20) == -1)
                                                              ,CONCAT13(-((char)((ulong)uVar24 >>
                                                                                0x18) == -1),
                                                                        CONCAT12(-((char)((ulong)
                                                  uVar24 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar24 >> 8) == -1),
                                                           -((char)uVar24 == -1))))))))) >> 3) < 8)
      {
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
        uVar11 = 0xff;
      }
      else {
        uVar11 = 0x80;
      }
      *(undefined1 *)(lVar12 + uVar21) = uVar11;
      *(undefined1 *)(puVar1 + 1) = uVar11;
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
      uVar15 = *(ulong *)(lVar12 + uVar21 * -8 + -8);
      if (uVar17 <= uVar15) {
        uVar4 = func_0x0001087c8ff8(uVar15,uVar17);
LAB_102dbd9dc:
        uVar24 = func_0x000108a07bdc(uVar4,uVar17,&UNK_10b2d13e0);
        if (lStack_1b0 != -0x8000000000000000) {
          func_0x000103390b0c(&lStack_1b0);
        }
        __Unwind_Resume(uVar24);
        auVar64 = func_0x000108a07bc4();
        plVar20 = auVar64._8_8_;
        puVar5 = auVar64._0_8_;
        pcStack_2d8 = __ZN10codex_core5state4turn10ActiveTurn8add_task17hd541bdb7f29e2014E;
        uVar25 = *(undefined8 *)(plVar20[0xe] + 0x248);
        lVar13 = *(long *)(plVar20[0xe] + 0x250);
        uStack_340 = uVar42;
        uStack_338 = uVar26;
        lStack_330 = param_1;
        uStack_328 = uVar10;
        uStack_320 = uVar21;
        lStack_318 = lVar12;
        lStack_310 = unaff_x24;
        uStack_308 = unaff_x23;
        uStack_300 = param_2;
        lStack_2f8 = param_3;
        uStack_2f0 = uVar17;
        uStack_2e8 = uVar24;
        puStack_2e0 = &stack0xfffffffffffffff0;
        if (lVar13 == 0) {
          lVar12 = 1;
        }
        else {
          lVar12 = _malloc(lVar13);
          if (lVar12 == 0) {
            func_0x0001087c9084(1,lVar13);
            goto LAB_102dbe0e8;
          }
        }
        _memcpy(lVar12,uVar25,lVar13);
        uVar16 = FUN_1033f72f8(puVar5[7],puVar5[8],lVar12,lVar13);
        uVar17 = puVar5[1];
        uVar10 = puVar5[2];
        if (puVar5[5] == 0) {
          __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17h30c2bd4b150294f1E
                    (puVar5 + 3,1,uVar17,uVar10,1);
        }
        uVar21 = 0;
        lVar7 = 0;
        plVar9 = (long *)puVar5[3];
        uVar4 = puVar5[4];
        bVar6 = (byte)(uVar16 >> 0x38);
        bVar41 = bVar6 >> 1;
        uVar14 = uVar16 & uVar4;
        lVar18 = *(long *)((long)plVar9 + uVar14);
        uVar15 = CONCAT17(-((byte)((ulong)lVar18 >> 0x38) == bVar41),
                          CONCAT16(-((byte)((ulong)lVar18 >> 0x30) == bVar41),
                                   CONCAT15(-((byte)((ulong)lVar18 >> 0x28) == bVar41),
                                            CONCAT14(-((byte)((ulong)lVar18 >> 0x20) == bVar41),
                                                     CONCAT13(-((byte)((ulong)lVar18 >> 0x18) ==
                                                               bVar41),CONCAT12(-((byte)((ulong)
                                                  lVar18 >> 0x10) == bVar41),
                                                  CONCAT11(-((byte)((ulong)lVar18 >> 8) == bVar41),
                                                           -((byte)lVar18 == bVar41)))))))) &
                 0x8080808080808080;
        do {
          while (uVar15 == 0) {
            auVar65._8_8_ = 0;
            auVar65._0_8_ = uVar21;
            cVar53 = (char)((ulong)lVar18 >> 8);
            cVar54 = (char)((ulong)lVar18 >> 0x10);
            cVar55 = (char)((ulong)lVar18 >> 0x18);
            cVar56 = (char)((ulong)lVar18 >> 0x20);
            cVar57 = (char)((ulong)lVar18 >> 0x28);
            cVar58 = (char)((ulong)lVar18 >> 0x30);
            if (uVar21 == 1) {
LAB_102dbdd64:
              bVar23 = NEON_umaxv(CONCAT17(-((char)((ulong)lVar18 >> 0x38) == -1),
                                           CONCAT16(-(cVar58 == -1),
                                                    CONCAT15(-(cVar57 == -1),
                                                             CONCAT14(-(cVar56 == -1),
                                                                      CONCAT13(-(cVar55 == -1),
                                                                               CONCAT12(-(cVar54 ==
                                                                                         -1),
                                                  CONCAT11(-(cVar53 == -1),-((char)lVar18 == -1)))))
                                                  ))),1);
              if ((bVar23 & 1) != 0) {
                uVar17 = (ulong)*(char *)((long)plVar9 + uStack_5d0);
                if (-1 < *(char *)((long)plVar9 + uStack_5d0)) {
                  lVar7 = *plVar9;
                  uVar17 = CONCAT17(-(lVar7 < 0),
                                    CONCAT16(-((char)((ulong)lVar7 >> 0x30) < '\0'),
                                             CONCAT15(-((char)((ulong)lVar7 >> 0x28) < '\0'),
                                                      CONCAT14(-((char)((ulong)lVar7 >> 0x20) < '\0'
                                                                ),CONCAT13(-((char)((ulong)lVar7 >>
                                                                                   0x18) < '\0'),
                                                                           CONCAT12(-((char)((ulong)
                                                  lVar7 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar7 >> 8) < '\0'),
                                                           -((char)lVar7 < '\0'))))))));
                  uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
                  uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
                  uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
                  uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10
                  ;
                  uStack_5d0 = (ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3;
                  uVar17 = (ulong)*(byte *)((long)plVar9 + uStack_5d0);
                }
                uVar10 = puVar5[2];
                *(byte *)((long)plVar9 + uStack_5d0) = bVar6 >> 1;
                *(byte *)((long)plVar9 + (uStack_5d0 - 8 & uVar4) + 8) = bVar6 >> 1;
                puVar5[6] = puVar5[6] + 1;
                puVar5[5] = puVar5[5] - (uVar17 & 1);
                plVar9[-1 - uStack_5d0] = uVar10;
                uVar10 = puVar5[2];
                uVar17 = *puVar5;
                if (uVar10 == uVar17) {
                  uVar15 = puVar5[5] + puVar5[6];
                  uVar17 = uVar15;
                  if (0xc30c30c30c30c2 < uVar15) {
                    uVar17 = 0xc30c30c30c30c3;
                  }
                  if (((uVar17 - uVar10 < 2) || (uVar15 < uVar10)) ||
                     (auVar65 = func_0x00010893e1c4(&lStack_3f8,uVar10,puVar5[1],uVar17,8,0xa8),
                     (int)lStack_3f8 == 1)) {
                    uVar17 = uVar10 + 1;
                    auVar65 = func_0x00010893e1c4(&lStack_3f8,uVar10,puVar5[1],uVar17,8,0xa8);
                    if ((int)lStack_3f8 == 1) {
                      func_0x0001087c9084(uStack_3f0,lStack_3e8);
                      goto LAB_102dbe0e8;
                    }
                  }
                  *puVar5 = uVar17;
                  puVar5[1] = uStack_3f0;
                }
                lStack_398 = plVar20[9];
                lStack_3a0 = plVar20[8];
                lStack_388 = plVar20[0xb];
                lStack_390 = plVar20[10];
                lStack_378 = plVar20[0xd];
                lStack_380 = plVar20[0xc];
                lStack_368 = plVar20[0xf];
                lStack_370 = plVar20[0xe];
                lStack_3d8 = plVar20[1];
                lStack_3e0 = *plVar20;
                lStack_3c8 = plVar20[3];
                lStack_3d0 = plVar20[2];
                lStack_3b8 = plVar20[5];
                lStack_3c0 = plVar20[4];
                lStack_3a8 = plVar20[7];
                lStack_3b0 = plVar20[6];
                lStack_360 = plVar20[0x10];
                lStack_3f8 = lVar13;
                uStack_3f0 = lVar12;
                lStack_3e8 = lVar13;
                uStack_358 = uVar16;
                if (uVar10 == uVar17) {
                  auVar65 = func_0x00010893dbac(puVar5);
                }
                plVar20 = (long *)(puVar5[1] + uVar10 * 0xa8);
                plVar20[1] = uStack_3f0;
                *plVar20 = lStack_3f8;
                plVar20[3] = lStack_3e0;
                plVar20[2] = lStack_3e8;
                plVar20[5] = lStack_3d0;
                plVar20[4] = lStack_3d8;
                plVar20[0xb] = lStack_3a0;
                plVar20[10] = lStack_3a8;
                plVar20[0xd] = lStack_390;
                plVar20[0xc] = lStack_398;
                plVar20[7] = lStack_3c0;
                plVar20[6] = lStack_3c8;
                plVar20[9] = lStack_3b0;
                plVar20[8] = lStack_3b8;
                plVar20[0x14] = uStack_358;
                plVar20[0x11] = lStack_370;
                plVar20[0x10] = lStack_378;
                plVar20[0x13] = lStack_360;
                plVar20[0x12] = lStack_368;
                plVar20[0xf] = lStack_380;
                plVar20[0xe] = lStack_388;
                puVar5[2] = uVar10 + 1;
                return auVar65;
              }
              uVar21 = 1;
            }
            else {
              uVar15 = CONCAT17(-(lVar18 < 0),
                                CONCAT16(-(cVar58 < '\0'),
                                         CONCAT15(-(cVar57 < '\0'),
                                                  CONCAT14(-(cVar56 < '\0'),
                                                           CONCAT13(-(cVar55 < '\0'),
                                                                    CONCAT12(-(cVar54 < '\0'),
                                                                             CONCAT11(-(cVar53 < 
                                                  '\0'),-((char)lVar18 < '\0'))))))));
              if (uVar15 != 0) {
                uVar15 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
                uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
                uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
                uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
                uStack_5d0 = uVar14 + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3) & uVar4
                ;
                goto LAB_102dbdd64;
              }
              uVar21 = 0;
            }
            lVar7 = lVar7 + 8;
            uVar14 = lVar7 + uVar14 & uVar4;
            lVar18 = *(long *)((long)plVar9 + uVar14);
            uVar15 = CONCAT17(-((byte)((ulong)lVar18 >> 0x38) == bVar41),
                              CONCAT16(-((byte)((ulong)lVar18 >> 0x30) == bVar41),
                                       CONCAT15(-((byte)((ulong)lVar18 >> 0x28) == bVar41),
                                                CONCAT14(-((byte)((ulong)lVar18 >> 0x20) == bVar41),
                                                         CONCAT13(-((byte)((ulong)lVar18 >> 0x18) ==
                                                                   bVar41),CONCAT12(-((byte)((ulong)
                                                  lVar18 >> 0x10) == bVar41),
                                                  CONCAT11(-((byte)((ulong)lVar18 >> 8) == bVar41),
                                                           -((byte)lVar18 == bVar41)))))))) &
                     0x8080808080808080;
          }
          uVar22 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
          uVar22 = plVar9[-1 - (uVar14 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3) &
                               uVar4)];
          if (uVar10 <= uVar22) {
            func_0x000108a07bdc(uVar22,uVar10,&UNK_10b2d13e0);
            goto LAB_102dbe0e8;
          }
          lVar19 = uVar17 + uVar22 * 0xa8;
          if ((lVar13 == *(long *)(lVar19 + 0x10)) &&
             (uVar42 = _memcmp(lVar12,*(undefined8 *)(lVar19 + 8),lVar13), (int)uVar42 == 0))
          goto LAB_102dbdda4;
          uVar15 = uVar15 - 1 & uVar15;
        } while( true );
      }
      plVar9 = (long *)(lVar13 + uVar15 * 0xa8);
      lStack_1a8 = plVar9[1];
      lStack_1b0 = *plVar9;
      lStack_198 = plVar9[3];
      lStack_1a0 = plVar9[2];
      lStack_188 = plVar9[5];
      lStack_190 = plVar9[4];
      plStack_178 = (long *)plVar9[7];
      plStack_180 = (long *)plVar9[6];
      plStack_168 = (long *)plVar9[9];
      lStack_170 = plVar9[8];
      plStack_158 = (long *)plVar9[0xb];
      plStack_160 = (long *)plVar9[10];
      plStack_148 = (long *)plVar9[0xd];
      plStack_150 = (long *)plVar9[0xc];
      plStack_138 = (long *)plVar9[0xf];
      plStack_140 = (long *)plVar9[0xe];
      plStack_128 = (long *)plVar9[0x11];
      plStack_130 = (long *)plVar9[0x10];
      lStack_118 = plVar9[0x13];
      plStack_120 = (long *)plVar9[0x12];
      lStack_110 = plVar9[0x14];
      plVar20 = (long *)(lVar13 + uVar10 * 0xa8);
      lVar18 = plVar20[1];
      lVar7 = *plVar20;
      lVar8 = plVar20[3];
      lVar19 = plVar20[2];
      lVar40 = plVar20[5];
      lVar35 = plVar20[4];
      lVar44 = plVar20[7];
      lVar43 = plVar20[6];
      lVar46 = plVar20[9];
      lVar45 = plVar20[8];
      lVar48 = plVar20[0xb];
      lVar47 = plVar20[10];
      lVar50 = plVar20[0xd];
      lVar49 = plVar20[0xc];
      lVar52 = plVar20[0xf];
      lVar51 = plVar20[0xe];
      lVar60 = plVar20[0x11];
      lVar59 = plVar20[0x10];
      lVar62 = plVar20[0x13];
      lVar61 = plVar20[0x12];
      plVar9[0x14] = plVar20[0x14];
      plVar9[0x11] = lVar60;
      plVar9[0x10] = lVar59;
      plVar9[0x13] = lVar62;
      plVar9[0x12] = lVar61;
      plVar9[0xd] = lVar50;
      plVar9[0xc] = lVar49;
      plVar9[0xf] = lVar52;
      plVar9[0xe] = lVar51;
      plVar9[9] = lVar46;
      plVar9[8] = lVar45;
      plVar9[0xb] = lVar48;
      plVar9[10] = lVar47;
      plVar9[5] = lVar40;
      plVar9[4] = lVar35;
      plVar9[7] = lVar44;
      plVar9[6] = lVar43;
      plVar9[1] = lVar18;
      *plVar9 = lVar7;
      plVar9[3] = lVar8;
      plVar9[2] = lVar19;
      *(ulong *)(param_1 + 0x10) = uVar10;
      lVar7 = lStack_1b0;
      lVar18 = lStack_1a8;
      lStack_220 = (long)plStack_180;
      lStack_218 = (long)plStack_178;
      plStack_1e0 = plStack_140;
      plStack_1d8 = plStack_138;
      lVar19 = lStack_198;
      lStack_210 = lStack_170;
      plStack_208 = plStack_168;
      plStack_1d0 = plStack_130;
      plStack_1c8 = plStack_128;
      lStack_230 = lStack_190;
      lStack_228 = lStack_188;
      plStack_200 = plStack_160;
      lStack_1f8 = (long)plStack_158;
      plStack_1c0 = plStack_120;
      lStack_1b8 = lStack_118;
      plStack_1f0 = plStack_150;
      plStack_1e8 = plStack_148;
      if (uVar15 < uVar10) {
        lVar8 = 0;
        uVar4 = *(ulong *)(lVar13 + uVar15 * 0xa8 + 0xa0);
        bVar6 = (byte)(uVar4 >> 0x39);
        uVar4 = uVar4 & uVar16;
        uVar42 = *(undefined8 *)(lVar12 + uVar4);
        uVar17 = CONCAT17(-((byte)((ulong)uVar42 >> 0x38) == bVar6),
                          CONCAT16(-((byte)((ulong)uVar42 >> 0x30) == bVar6),
                                   CONCAT15(-((byte)((ulong)uVar42 >> 0x28) == bVar6),
                                            CONCAT14(-((byte)((ulong)uVar42 >> 0x20) == bVar6),
                                                     CONCAT13(-((byte)((ulong)uVar42 >> 0x18) ==
                                                               bVar6),CONCAT12(-((byte)((ulong)
                                                  uVar42 >> 0x10) == bVar6),
                                                  CONCAT11(-((byte)((ulong)uVar42 >> 8) == bVar6),
                                                           -((byte)uVar42 == bVar6)))))))) &
                 0x8080808080808080;
        while( true ) {
          while (uVar17 == 0) {
            bVar41 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar42 >> 0x38) == -1),
                                         CONCAT16(-((char)((ulong)uVar42 >> 0x30) == -1),
                                                  CONCAT15(-((char)((ulong)uVar42 >> 0x28) == -1),
                                                           CONCAT14(-((char)((ulong)uVar42 >> 0x20)
                                                                     == -1),CONCAT13(-((char)((ulong
                                                  )uVar42 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar42 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar42 >> 8) ==
                                                                     -1),-((char)uVar42 == -1)))))))
                                        ),1);
            if ((bVar41 & 1) != 0) {
              func_0x000108a079f0(&UNK_108d91969,0xf,&UNK_10b2d13f8);
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102dbd940);
              (*pcVar2)();
            }
            lVar8 = lVar8 + 8;
            uVar4 = uVar4 + lVar8 & uVar16;
            uVar42 = *(undefined8 *)(lVar12 + uVar4);
            uVar17 = CONCAT17(-((byte)((ulong)uVar42 >> 0x38) == bVar6),
                              CONCAT16(-((byte)((ulong)uVar42 >> 0x30) == bVar6),
                                       CONCAT15(-((byte)((ulong)uVar42 >> 0x28) == bVar6),
                                                CONCAT14(-((byte)((ulong)uVar42 >> 0x20) == bVar6),
                                                         CONCAT13(-((byte)((ulong)uVar42 >> 0x18) ==
                                                                   bVar6),CONCAT12(-((byte)((ulong)
                                                  uVar42 >> 0x10) == bVar6),
                                                  CONCAT11(-((byte)((ulong)uVar42 >> 8) == bVar6),
                                                           -((byte)uVar42 == bVar6)))))))) &
                     0x8080808080808080;
          }
          uVar21 = (uVar17 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar17 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
          uVar21 = uVar4 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3) & uVar16;
          if (*(ulong *)(lStack_2b8 + uVar21 * -8) == uVar10) break;
          uVar17 = uVar17 - 1 & uVar17;
        }
        *(ulong *)(lVar12 + uVar21 * -8 + -8) = uVar15;
      }
joined_r0x000102dbd744:
      if (lVar7 != -0x8000000000000000) {
        if (lVar7 != 0) {
          _free(lVar18);
        }
        plStack_268 = plStack_1e8;
        plStack_270 = plStack_1f0;
        plStack_258 = plStack_1d8;
        plStack_260 = plStack_1e0;
        plStack_248 = plStack_1c8;
        plStack_250 = plStack_1d0;
        lStack_238 = lStack_1b8;
        plStack_240 = plStack_1c0;
        lStack_2a8 = lStack_228;
        lStack_2b0 = lStack_230;
        lStack_298 = lStack_218;
        lStack_2a0 = lStack_220;
        plStack_288 = plStack_208;
        lStack_290 = lStack_210;
        lStack_278 = lStack_1f8;
        plStack_280 = plStack_200;
        if (lVar19 != -0x7fffffffffffffff) {
          plStack_160 = plStack_1e8;
          plStack_168 = plStack_1f0;
          plStack_150 = plStack_1d8;
          plStack_158 = plStack_1e0;
          plStack_140 = plStack_1c8;
          plStack_148 = plStack_1d0;
          plStack_130 = (long *)lStack_1b8;
          plStack_138 = plStack_1c0;
          lStack_1a0 = lStack_228;
          lStack_1a8 = lStack_230;
          lStack_190 = lStack_218;
          lStack_198 = lStack_220;
          plStack_180 = plStack_208;
          lStack_188 = lStack_210;
          lStack_170 = lStack_1f8;
          plStack_178 = plStack_200;
          lStack_1b0 = lVar19;
          uVar42 = (*(code *)plStack_1e0[5])
                             ((long)plStack_1e8 + (plStack_1e0[2] - 1U & 0xfffffffffffffff0) + 0x10)
          ;
          if (*plStack_148 == 0xcc) {
            *plStack_148 = 0x84;
          }
          else {
            (**(code **)(plStack_148[2] + 0x20))();
          }
          unaff_x19 = (ulong)(*(long *)(param_1 + 0x30) == 0);
          lVar12 = *plStack_168;
          *plStack_168 = lVar12 + -1;
          LORelease();
          if (lVar12 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE(&plStack_168);
          }
          lVar12 = *plStack_160;
          *plStack_160 = lVar12 + -1;
          LORelease();
          if (lVar12 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hdb6aef29e0ecda98E(&plStack_160);
          }
          __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
                    (&plStack_150);
          lVar12 = *plStack_150;
          *plStack_150 = lVar12 + -1;
          LORelease();
          if (lVar12 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(&plStack_150);
          }
          lVar12 = *plStack_140;
          *plStack_140 = lVar12 + -1;
          LORelease();
          if (lVar12 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E(&plStack_140);
          }
          lVar12 = *plStack_138;
          *plStack_138 = lVar12 + -1;
          LORelease();
          if (lVar12 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h938b6eaa8ec54698E(&plStack_138);
          }
          if (lStack_1b0 != -0x8000000000000000) {
            func_0x000103390b0c(&lStack_1b0);
          }
          goto LAB_102dbd984;
        }
      }
    }
  }
LAB_102dbd980:
  uVar42 = 2;
LAB_102dbd984:
  auVar63._8_8_ = unaff_x19;
  auVar63._0_8_ = uVar42;
  return auVar63;
LAB_102dbdda4:
  uVar17 = puVar5[2];
  auVar64._8_8_ = uVar17;
  auVar64._0_8_ = uVar42;
  if (uVar22 < uVar17) {
    lVar7 = puVar5[1] + uVar22 * 0xa8;
    lVar18 = *(long *)(lVar7 + 0x18);
    uVar27 = *(undefined8 *)(lVar7 + 0x68);
    uVar42 = *(undefined8 *)(lVar7 + 0x60);
    uVar36 = *(undefined8 *)(lVar7 + 0x78);
    uVar31 = *(undefined8 *)(lVar7 + 0x70);
    uVar28 = *(undefined8 *)(lVar7 + 0x88);
    uVar26 = *(undefined8 *)(lVar7 + 0x80);
    uVar37 = *(undefined8 *)(lVar7 + 0x98);
    uVar32 = *(undefined8 *)(lVar7 + 0x90);
    uVar29 = *(undefined8 *)(lVar7 + 0x28);
    uVar24 = *(undefined8 *)(lVar7 + 0x20);
    uVar38 = *(undefined8 *)(lVar7 + 0x38);
    uVar33 = *(undefined8 *)(lVar7 + 0x30);
    uVar30 = *(undefined8 *)(lVar7 + 0x48);
    uVar25 = *(undefined8 *)(lVar7 + 0x40);
    uVar39 = *(undefined8 *)(lVar7 + 0x58);
    uVar34 = *(undefined8 *)(lVar7 + 0x50);
    lVar19 = *plVar20;
    *(long *)(lVar7 + 0x20) = plVar20[1];
    *(long *)(lVar7 + 0x18) = lVar19;
    lVar8 = plVar20[3];
    lVar19 = plVar20[2];
    lVar40 = plVar20[5];
    lVar35 = plVar20[4];
    lVar44 = plVar20[7];
    lVar43 = plVar20[6];
    lVar45 = plVar20[8];
    *(long *)(lVar7 + 0x60) = plVar20[9];
    *(long *)(lVar7 + 0x58) = lVar45;
    *(long *)(lVar7 + 0x50) = lVar44;
    *(long *)(lVar7 + 0x48) = lVar43;
    *(long *)(lVar7 + 0x40) = lVar40;
    *(long *)(lVar7 + 0x38) = lVar35;
    *(long *)(lVar7 + 0x30) = lVar8;
    *(long *)(lVar7 + 0x28) = lVar19;
    lVar8 = plVar20[0xb];
    lVar19 = plVar20[10];
    lVar40 = plVar20[0xd];
    lVar35 = plVar20[0xc];
    lVar44 = plVar20[0xf];
    lVar43 = plVar20[0xe];
    *(long *)(lVar7 + 0x98) = plVar20[0x10];
    *(long *)(lVar7 + 0x90) = lVar44;
    *(long *)(lVar7 + 0x88) = lVar43;
    *(long *)(lVar7 + 0x80) = lVar40;
    *(long *)(lVar7 + 0x78) = lVar35;
    *(long *)(lVar7 + 0x70) = lVar8;
    *(long *)(lVar7 + 0x68) = lVar19;
    if (lVar13 != 0) {
      auVar64 = _free(lVar12);
    }
    if (lVar18 != -0x7fffffffffffffff) {
      lStack_3f8 = lVar18;
      uStack_3f0 = uVar24;
      lStack_3e8 = uVar29;
      lStack_3e0 = uVar33;
      lStack_3d8 = uVar38;
      lStack_3d0 = uVar25;
      lStack_3c8 = uVar30;
      lStack_3c0 = uVar34;
      lStack_3b8 = uVar39;
      lStack_3b0 = uVar42;
      lStack_3a8 = uVar27;
      lStack_3a0 = uVar31;
      lStack_398 = uVar36;
      lStack_390 = uVar26;
      lStack_388 = uVar28;
      lStack_380 = uVar32;
      lStack_378 = uVar37;
      auVar64 = func_0x000103396810(&lStack_3f8);
    }
    return auVar64;
  }
  func_0x000108a07bdc(uVar22,uVar17,&UNK_10b2d1410);
LAB_102dbe0e8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102dbe0ec);
  (*pcVar2)();
}

