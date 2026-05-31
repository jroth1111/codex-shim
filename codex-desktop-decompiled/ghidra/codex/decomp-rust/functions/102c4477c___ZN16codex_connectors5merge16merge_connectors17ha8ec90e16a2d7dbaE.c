
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN16codex_connectors5merge16merge_connectors17ha8ec90e16a2d7dbaE
               (undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  undefined1 (*pauVar16) [16];
  long *plVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  long lVar21;
  byte bVar22;
  ulong uVar23;
  long lVar24;
  bool bVar25;
  long lVar26;
  long *plVar27;
  long *plVar28;
  long lVar29;
  long *plVar30;
  undefined *puVar31;
  ulong *puVar32;
  long *plVar33;
  long *plVar34;
  undefined *puVar35;
  long *plVar36;
  long lVar37;
  long lVar38;
  long *plVar39;
  ulong uVar40;
  byte bVar41;
  long lVar42;
  undefined8 uVar43;
  long lStack_b00;
  long *plStack_af0;
  long *plStack_ae8;
  long *plStack_ae0;
  long *plStack_ad8;
  undefined1 auStack_ad0 [16];
  long *plStack_ab8;
  long lStack_ab0;
  long *plStack_aa8;
  long *plStack_aa0;
  long *plStack_a98;
  long **pplStack_a90;
  long *aplStack_a88 [78];
  long *plStack_818;
  long lStack_810;
  long *plStack_808;
  long lStack_800;
  undefined8 uStack_7f8;
  long *plStack_7f0;
  long lStack_7e8;
  long lStack_7e0;
  long *plStack_7d8;
  long *plStack_7d0;
  long *plStack_7c8;
  ulong uStack_7c0;
  ulong uStack_7b8;
  long lStack_7b0;
  long lStack_7a8;
  ulong uStack_7a0;
  long lStack_798;
  long lStack_790;
  ulong uStack_788;
  long lStack_780;
  long lStack_778;
  ulong uStack_770;
  long lStack_768;
  long lStack_760;
  ulong uStack_758;
  undefined8 uStack_750;
  long alStack_740 [16];
  long alStack_6c0 [31];
  long alStack_5c8 [6];
  undefined1 uStack_598;
  long *plStack_590;
  long *plStack_588;
  long *plStack_580;
  long *plStack_578;
  ulong uStack_570;
  long *plStack_568;
  undefined *puStack_560;
  undefined *puStack_558;
  long *plStack_550;
  long *plStack_548;
  long *plStack_540;
  long *plStack_538;
  long *plStack_2e0;
  long *plStack_2d8;
  long *plStack_2d0;
  long *plStack_2c8;
  undefined1 aauStack_2c0 [37] [16];
  
  plStack_580 = (long *)*param_2;
  plStack_590 = (long *)param_2[1];
  lVar29 = param_2[2];
  plStack_578 = plStack_590 + lVar29 * 0x4e;
  plStack_588 = plStack_590;
  pauVar16 = (undefined1 (*) [16])
             (*
             ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
             )();
  if (pauVar16[1][0] == '\x01') {
    aauStack_2c0[0] = *pauVar16;
  }
  else {
    aauStack_2c0[0] = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar16 + 8) = aauStack_2c0[0]._8_8_;
    pauVar16[1][0] = 1;
  }
  *(long *)*pauVar16 = aauStack_2c0[0]._0_8_ + 1;
  plStack_2d8 = (long *)0x0;
  plStack_2e0 = (long *)&UNK_108c56c70;
  plStack_2c8 = (long *)0x0;
  plStack_2d0 = (long *)0x0;
  plStack_538 = plStack_578;
  plStack_540 = plStack_580;
  plStack_548 = plStack_588;
  plStack_550 = plStack_590;
  plVar34 = plStack_588;
  plVar27 = plStack_578;
  if (lVar29 != 0) {
    func_0x000108920574(&plStack_2e0,lVar29,aauStack_2c0,1);
    plStack_538 = plStack_578;
    plStack_540 = plStack_580;
    plStack_548 = plStack_588;
    plStack_550 = plStack_590;
    plVar34 = plStack_588;
    plVar27 = plStack_578;
  }
  for (; plVar33 = plStack_578, plVar34 != plStack_578; plVar34 = plVar34 + 0x4e) {
    plStack_578 = plVar27;
    _memcpy(&lStack_800,plVar34,0x270);
    plVar27 = plStack_7f0;
    uVar20 = uStack_7f8;
    uStack_598 = 0;
    if (plStack_7f0 == (long *)0x0) {
      plVar17 = (long *)0x1;
    }
    else {
      plVar17 = (long *)_malloc(plStack_7f0);
      if (plVar17 == (long *)0x0) {
        func_0x0001087c9084(1,plVar27);
        goto LAB_102c4555c;
      }
    }
    _memcpy(plVar17,uVar20,plVar27);
    _memcpy(aplStack_a88,&lStack_800,0x270);
    plStack_aa0 = plVar27;
    pplStack_a90 = (long **)plVar27;
    plStack_a98 = plVar17;
    func_0x000102c58470(&lStack_800,&plStack_2e0,&plStack_aa0,aplStack_a88);
    if (lStack_800 != -0x8000000000000000) {
      FUN_102c47718(&lStack_800);
    }
    plVar27 = plStack_578;
    plStack_578 = plVar33;
  }
  plStack_578 = plVar27;
  if (plStack_540 != (long *)0x0) {
    _free(plStack_550);
  }
  plStack_ae8 = plStack_2d8;
  plStack_af0 = plStack_2e0;
  plStack_ad8 = plStack_2c8;
  plStack_ae0 = plStack_2d0;
  plVar27 = (long *)*param_3;
  plVar33 = (long *)param_3[1];
  plVar30 = plVar33 + param_3[2] * 0x4e;
  plVar34 = plVar33;
  plVar17 = plVar33;
  plStack_2e0 = plVar33;
  plStack_2d0 = plVar27;
  plStack_2c8 = plVar30;
  auStack_ad0 = aauStack_2c0[0];
  if (param_3[2] == 0) {
LAB_102c44de0:
    if ((long)plVar30 - (long)plVar34 != 0) {
      uVar40 = (ulong)((long)plVar30 - (long)plVar34) / 0x270;
      do {
        FUN_102c47718(plVar34);
        plVar34 = plVar34 + 0x4e;
        uVar40 = uVar40 - 1;
      } while (uVar40 != 0);
    }
  }
  else {
    do {
      plVar34 = plVar17 + 0x4e;
      lVar29 = *plVar17;
      if (lVar29 == -0x8000000000000000) goto LAB_102c44de0;
      lStack_800 = lVar29;
      _memcpy(&uStack_7f8,plVar17 + 1,0x268);
      plVar17 = plStack_7f0;
      uVar20 = uStack_7f8;
      uStack_598 = 1;
      if (plStack_7f0 == (long *)0x0) {
        lVar18 = 1;
      }
      else {
        lVar18 = _malloc(plStack_7f0);
        if (lVar18 == 0) {
          func_0x0001087c9084(1,plVar17);
          goto LAB_102c4555c;
        }
      }
      _memcpy(lVar18,uVar20,plVar17);
      plStack_ab8 = plVar17;
      plStack_aa8 = plVar17;
      lStack_ab0 = lVar18;
      if (plStack_ad8 != (long *)0x0) {
        uVar19 = FUN_102c48024(auStack_ad0._0_8_,auStack_ad0._8_8_,lVar18,plVar17);
        plVar39 = plStack_ae8;
        plVar1 = plStack_af0;
        lVar38 = 0;
        bVar22 = (byte)(uVar19 >> 0x39);
        uVar19 = uVar19 & (ulong)plStack_ae8;
        uVar43 = *(undefined8 *)((long)plStack_af0 + uVar19);
        uVar40 = CONCAT17(-((byte)((ulong)uVar43 >> 0x38) == bVar22),
                          CONCAT16(-((byte)((ulong)uVar43 >> 0x30) == bVar22),
                                   CONCAT15(-((byte)((ulong)uVar43 >> 0x28) == bVar22),
                                            CONCAT14(-((byte)((ulong)uVar43 >> 0x20) == bVar22),
                                                     CONCAT13(-((byte)((ulong)uVar43 >> 0x18) ==
                                                               bVar22),CONCAT12(-((byte)((ulong)
                                                  uVar43 >> 0x10) == bVar22),
                                                  CONCAT11(-((byte)((ulong)uVar43 >> 8) == bVar22),
                                                           -((byte)uVar43 == bVar22)))))))) &
                 0x8080808080808080;
        do {
          for (; uVar40 != 0; uVar40 = uVar40 - 1 & uVar40) {
            uVar23 = (uVar40 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar40 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
            uVar23 = uVar19 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3) &
                     (ulong)plVar39;
            if (plVar17 == (long *)plVar1[uVar23 * -0x51 + -0x4f]) {
              iVar15 = _memcmp(lVar18,plVar1[uVar23 * -0x51 + -0x50],plVar17);
              if (iVar15 == 0) {
                bVar25 = true;
                *(undefined1 *)(plVar1 + uVar23 * -0x51 + -1) = 1;
                if (plVar1[uVar23 * -0x51 + -0x49] == plVar1[uVar23 * -0x51 + -0x4c]) {
                  lVar38 = plVar1[uVar23 * -0x51 + -0x4a];
                  iVar15 = _memcmp(lVar38,plVar1[uVar23 * -0x51 + -0x4d]);
                  if (iVar15 == 0) {
                    if (plStack_7d8 == plVar17) {
                      iVar15 = _memcmp(lStack_7e0,uVar20,plVar17);
                      if (iVar15 == 0) goto LAB_102c44af8;
                    }
                    if (plVar1[uVar23 * -0x51 + -0x4b] != 0) {
                      _free(lVar38);
                    }
                    bVar25 = false;
                    plVar1[uVar23 * -0x51 + -0x49] = (long)plStack_7d8;
                    plVar1[uVar23 * -0x51 + -0x4a] = lStack_7e0;
                    plVar1[uVar23 * -0x51 + -0x4b] = lStack_7e8;
                  }
                  else {
LAB_102c44af8:
                    bVar25 = true;
                  }
                }
                uVar4 = uStack_770;
                uVar3 = uStack_788;
                uVar2 = uStack_7a0;
                uVar19 = uStack_7b8;
                uVar40 = uStack_7c0;
                plVar28 = plStack_7c8;
                plVar39 = plStack_7d0;
                bVar7 = plVar1[uVar23 * -0x51 + -0x45] == 0x8000000000000000;
                bVar8 = uStack_7b8 != 0x8000000000000000;
                if (bVar7 && bVar8) {
                  plVar1[uVar23 * -0x51 + -0x43] = lStack_7a8;
                  plVar1[uVar23 * -0x51 + -0x44] = lStack_7b0;
                  plVar1[uVar23 * -0x51 + -0x45] = uStack_7b8;
                }
                bVar9 = plVar1[uVar23 * -0x51 + -0x42] != 0x8000000000000000;
                bVar10 = uStack_7a0 == 0x8000000000000000;
                if (!bVar9 && !bVar10) {
                  plVar1[uVar23 * -0x51 + -0x40] = lStack_790;
                  plVar1[uVar23 * -0x51 + -0x41] = lStack_798;
                  plVar1[uVar23 * -0x51 + -0x42] = uStack_7a0;
                }
                bVar11 = plVar1[uVar23 * -0x51 + -0x3f] == 0x8000000000000000;
                bVar12 = uStack_788 != 0x8000000000000000;
                if (bVar11 && bVar12) {
                  plVar1[uVar23 * -0x51 + -0x3d] = lStack_778;
                  plVar1[uVar23 * -0x51 + -0x3e] = lStack_780;
                  plVar1[uVar23 * -0x51 + -0x3f] = uStack_788;
                }
                bVar13 = plVar1[uVar23 * -0x51 + -0x3c] != 0x8000000000000000;
                bVar14 = uStack_770 == 0x8000000000000000;
                if (!bVar13 && !bVar14) {
                  plVar1[uVar23 * -0x51 + -0x3a] = lStack_760;
                  plVar1[uVar23 * -0x51 + -0x3b] = lStack_768;
                  plVar1[uVar23 * -0x51 + -0x3c] = uStack_770;
                }
                lVar38 = uStack_7c0 * 0x18;
                aplStack_a88[0] = plStack_7c8 + uStack_7c0 * 3;
                plStack_aa0 = plStack_7c8;
                plStack_a98 = plStack_7c8;
                pplStack_a90 = (long **)plStack_7d0;
                plVar36 = plVar1 + uVar23 * -0x51 + -0x46;
                lVar26 = *plVar36;
                if ((ulong)(plVar1[uVar23 * -0x51 + -0x48] - lVar26) < uStack_7c0) {
                  FUN_10891fe78(plVar1 + uVar23 * -0x51 + -0x48,lVar26,uStack_7c0,8,0x18);
                  lVar26 = *plVar36;
                }
                _memcpy(plVar1[uVar23 * -0x51 + -0x47] + lVar26 * 0x18,plVar28,lVar38);
                *plVar36 = lVar26 + uVar40;
                if (plVar39 != (long *)0x0) {
                  _free(plVar28);
                }
                if (plVar17 != (long *)0x0) {
                  _free(lVar18);
                }
                if (lVar29 != 0) {
                  _free(uVar20);
                }
                if ((bVar25) && (lStack_7e8 != 0)) {
                  _free(lStack_7e0);
                }
                if ((!bVar7 || !bVar8) && ((uVar19 & 0x7fffffffffffffff) != 0)) {
                  _free(lStack_7b0);
                }
                if ((bVar9 || bVar10) && ((uVar2 & 0x7fffffffffffffff) != 0)) {
                  _free(lStack_798);
                }
                if ((!bVar11 || !bVar12) && ((uVar3 & 0x7fffffffffffffff) != 0)) {
                  _free(lStack_780);
                }
                if ((bVar13 || bVar14) && ((uVar4 & 0x7fffffffffffffff) != 0)) {
                  _free(lStack_768);
                }
                if (alStack_740[0] != -0x7fffffffffffffff) {
                  func_0x000102c478a4(alStack_740);
                }
                if (alStack_6c0[0] != -0x7fffffffffffffff) {
                  func_0x000102c4795c(alStack_6c0);
                }
                if (alStack_5c8[0] != 0) {
                  FUN_102c46814(alStack_5c8);
                }
                if ((uStack_758 & 0x7fffffffffffffff) != 0) {
                  _free(uStack_750);
                }
                goto LAB_102c44940;
              }
            }
          }
          bVar41 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar43 >> 0x38) == -1),
                                       CONCAT16(-((char)((ulong)uVar43 >> 0x30) == -1),
                                                CONCAT15(-((char)((ulong)uVar43 >> 0x28) == -1),
                                                         CONCAT14(-((char)((ulong)uVar43 >> 0x20) ==
                                                                   -1),CONCAT13(-((char)((ulong)
                                                  uVar43 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar43 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar43 >> 8) ==
                                                                     -1),-((char)uVar43 == -1)))))))
                                      ),1);
          if ((bVar41 & 1) != 0) break;
          lVar38 = lVar38 + 8;
          uVar19 = uVar19 + lVar38 & (ulong)plVar39;
          uVar43 = *(undefined8 *)((long)plVar1 + uVar19);
          uVar40 = CONCAT17(-((byte)((ulong)uVar43 >> 0x38) == bVar22),
                            CONCAT16(-((byte)((ulong)uVar43 >> 0x30) == bVar22),
                                     CONCAT15(-((byte)((ulong)uVar43 >> 0x28) == bVar22),
                                              CONCAT14(-((byte)((ulong)uVar43 >> 0x20) == bVar22),
                                                       CONCAT13(-((byte)((ulong)uVar43 >> 0x18) ==
                                                                 bVar22),CONCAT12(-((byte)((ulong)
                                                  uVar43 >> 0x10) == bVar22),
                                                  CONCAT11(-((byte)((ulong)uVar43 >> 8) == bVar22),
                                                           -((byte)uVar43 == bVar22)))))))) &
                   0x8080808080808080;
        } while( true );
      }
      func_0x000102c58470(&plStack_aa0,&plStack_af0,&plStack_ab8,&lStack_800);
      if (plStack_aa0 != (long *)0x8000000000000000) {
        FUN_102c47718(&plStack_aa0);
      }
LAB_102c44940:
      plVar17 = plVar34;
    } while (plVar34 != plVar30);
  }
  if (plVar27 != (long *)0x0) {
    _free(plVar33);
  }
  plVar17 = plStack_ad8;
  plVar33 = plStack_ae8;
  plVar27 = plStack_af0;
  lVar29 = *plStack_af0;
  plVar30 = plStack_af0 + (long)plStack_ae8 * -0x51 + -0x51;
  plVar34 = plVar30;
  if (plStack_ae8 != (long *)0x0) {
    plVar34 = (long *)((long)plStack_ae8 * 0x289 + 0x291);
  }
  plVar1 = (long *)0x0;
  if (plStack_ae8 != (long *)0x0) {
    plVar1 = (long *)0x8;
  }
  uVar40 = CONCAT17(-(-1 < lVar29),
                    CONCAT16(-(-1 < (char)((ulong)lVar29 >> 0x30)),
                             CONCAT15(-(-1 < (char)((ulong)lVar29 >> 0x28)),
                                      CONCAT14(-(-1 < (char)((ulong)lVar29 >> 0x20)),
                                               CONCAT13(-(-1 < (char)((ulong)lVar29 >> 0x18)),
                                                        CONCAT12(-(-1 < (char)((ulong)lVar29 >> 0x10
                                                                              )),
                                                                 CONCAT11(-(-1 < (char)((ulong)
                                                  lVar29 >> 8)),-(-1 < (char)lVar29)))))))) &
           0x8080808080808080;
  plVar39 = plStack_af0 + 1;
  plVar28 = plStack_af0;
  if (plStack_ad8 == (long *)0x0) {
    puVar35 = (undefined *)0x0;
  }
  else {
    while (uVar40 == 0) {
      lVar29 = *plVar39;
      plVar39 = plVar39 + 1;
      plVar28 = plVar28 + -0x288;
      uVar40 = CONCAT17(-(-1 < lVar29),
                        CONCAT16(-(-1 < (char)((ulong)lVar29 >> 0x30)),
                                 CONCAT15(-(-1 < (char)((ulong)lVar29 >> 0x28)),
                                          CONCAT14(-(-1 < (char)((ulong)lVar29 >> 0x20)),
                                                   CONCAT13(-(-1 < (char)((ulong)lVar29 >> 0x18)),
                                                            CONCAT12(-(-1 < (char)((ulong)lVar29 >>
                                                                                  0x10)),
                                                                     CONCAT11(-(-1 < (char)((ulong)
                                                  lVar29 >> 8)),-(-1 < (char)lVar29)))))))) &
               0x8080808080808080;
    }
    uVar19 = (uVar40 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar40 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
    uVar40 = uVar40 - 1 & uVar40;
    iVar15 = (int)((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3);
    puVar35 = (undefined *)((long)plStack_ad8 + -1);
    lVar29 = plVar28[(long)-iVar15 * 0x51 + -0x51];
    if (lVar29 != -0x8000000000000000) {
      lVar18 = plVar28[(long)-iVar15 * 0x51 + -0x50];
      lVar38 = plVar28[(long)-iVar15 * 0x51 + -0x4e];
      _memcpy(&plStack_aa0,plVar28 + (long)-iVar15 * 0x51 + -0x4d,0x268);
      if (lVar29 != 0) {
        _free(lVar18);
      }
      _memcpy(&plStack_2e0,&plStack_aa0,0x268);
      if (lVar38 != -0x8000000000000000) {
        lStack_800 = lVar38;
        _memcpy(&uStack_7f8,&plStack_2e0,0x268);
        plVar36 = plVar17;
        if (plVar17 < (long *)0x5) {
          plVar36 = (long *)0x4;
        }
        lVar29 = (long)plVar36 * 0x270;
        if ((long *)0x34834834834834 < plVar17) {
          uVar20 = 0;
LAB_102c45050:
          func_0x0001087c9084(uVar20,lVar29);
LAB_102c4555c:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102c45560);
          (*pcVar6)();
        }
        if (lVar29 == 0) {
          plVar36 = (long *)0x0;
          lVar18 = 8;
        }
        else {
          lVar18 = _malloc(lVar29);
          if (lVar18 == 0) {
            uVar20 = 8;
            goto LAB_102c45050;
          }
        }
        _memcpy(lVar18,&lStack_800,0x270);
        plStack_808 = (long *)0x1;
        puStack_558 = puVar35;
        puStack_560 = (undefined *)((long)plVar27 + (long)plVar33) + 1;
        plStack_568 = plVar39;
        uStack_570 = uVar40;
        plStack_578 = plVar28;
        plStack_580 = plVar30;
        plStack_588 = plVar34;
        plStack_590 = plVar1;
        lStack_810 = lVar18;
        plStack_818 = plVar36;
        if (puVar35 == (undefined *)0x0) {
          puStack_558 = (undefined *)0x0;
        }
        else {
          do {
            while (plVar27 = plStack_808, uVar40 == 0) {
              lVar29 = *plVar39;
              plVar28 = plVar28 + -0x288;
              plVar39 = plVar39 + 1;
              uVar40 = CONCAT17(-(-1 < lVar29),
                                CONCAT16(-(-1 < (char)((ulong)lVar29 >> 0x30)),
                                         CONCAT15(-(-1 < (char)((ulong)lVar29 >> 0x28)),
                                                  CONCAT14(-(-1 < (char)((ulong)lVar29 >> 0x20)),
                                                           CONCAT13(-(-1 < (char)((ulong)lVar29 >>
                                                                                 0x18)),
                                                                    CONCAT12(-(-1 < (char)((ulong)
                                                  lVar29 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar29 >> 8)),
                                                           -(-1 < (char)lVar29)))))))) &
                       0x8080808080808080;
            }
            uVar19 = (uVar40 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar40 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
            uVar40 = uVar40 - 1 & uVar40;
            iVar15 = (int)((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3);
            puVar31 = puVar35 + -1;
            lVar29 = plVar28[(long)-iVar15 * 0x51 + -0x51];
            uVar19 = uVar40;
            puVar5 = puVar31;
            plVar17 = plVar28;
            plVar1 = plVar39;
            if (lVar29 == -0x8000000000000000) break;
            lVar38 = plVar28[(long)-iVar15 * 0x51 + -0x50];
            plVar36 = (long *)plVar28[(long)-iVar15 * 0x51 + -0x4e];
            _memcpy(&plStack_2e0,plVar28 + (long)-iVar15 * 0x51 + -0x4d,0x268);
            if (lVar29 != 0) {
              _free(lVar38);
            }
            _memcpy(&plStack_550,&plStack_2e0,0x268);
            if (plVar36 == (long *)0x8000000000000000) break;
            plStack_aa0 = plVar36;
            _memcpy(&plStack_a98,&plStack_550,0x268);
            if (plVar27 == plStack_818) {
              FUN_10891fe78(&plStack_818,plVar27,puVar35,8,0x270);
              lVar18 = lStack_810;
            }
            _memcpy(lVar18 + (long)plVar27 * 0x270,&plStack_aa0,0x270);
            plStack_808 = (long *)((long)plVar27 + 1);
            puVar35 = puVar31;
          } while (puVar31 != (undefined *)0x0);
          for (; plStack_568 = plVar1, plStack_578 = plVar17, puStack_558 = puVar5,
              uStack_570 = uVar19, puVar31 != (undefined *)0x0; puVar31 = puVar31 + -1) {
            while (uVar40 == 0) {
              lVar29 = *plVar39;
              plVar28 = plVar28 + -0x288;
              plVar39 = plVar39 + 1;
              uVar40 = CONCAT17(-(-1 < lVar29),
                                CONCAT16(-(-1 < (char)((ulong)lVar29 >> 0x30)),
                                         CONCAT15(-(-1 < (char)((ulong)lVar29 >> 0x28)),
                                                  CONCAT14(-(-1 < (char)((ulong)lVar29 >> 0x20)),
                                                           CONCAT13(-(-1 < (char)((ulong)lVar29 >>
                                                                                 0x18)),
                                                                    CONCAT12(-(-1 < (char)((ulong)
                                                  lVar29 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar29 >> 8)),
                                                           -(-1 < (char)lVar29)))))))) &
                       0x8080808080808080;
            }
            uVar19 = (uVar40 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar40 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
            iVar15 = (int)((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3);
            if (plVar28[(long)-iVar15 * 0x51 + -0x51] != 0) {
              _free(plVar28[(long)-iVar15 * 0x51 + -0x50]);
            }
            uVar40 = uVar40 - 1 & uVar40;
            FUN_102c47718(plVar28 + (long)-iVar15 * 0x51 + -0x4e);
            uVar19 = uStack_570;
            puVar5 = puStack_558;
            plVar17 = plStack_578;
            plVar1 = plStack_568;
          }
        }
        if ((plVar33 != (long *)0x0) && (plVar34 != (long *)0x0)) {
          _free(plVar30);
        }
        plVar34 = plStack_808;
        lVar29 = lStack_810;
        plStack_548 = (long *)lStack_810;
        plStack_550 = plStack_818;
        plStack_540 = plStack_808;
        if (plStack_808 != (long *)0x0) {
          lVar38 = (long)plStack_808 * 0x270;
          lVar18 = lStack_810 + lVar38;
          lStack_b00 = lStack_810 + 0x270;
          lVar26 = lStack_b00;
          lVar37 = lStack_810;
LAB_102c452ec:
          lVar24 = lVar26;
          puVar32 = (ulong *)(lVar37 + 0xa8);
          if (*puVar32 == 0x8000000000000000) {
            plStack_590 = *(long **)(lVar37 + 8);
            plStack_588 = *(long **)(lVar37 + 0x10);
            FUN_102c3f658(&lStack_800,*(undefined8 *)(lVar37 + 0x20),*(undefined8 *)(lVar37 + 0x28))
            ;
            plStack_aa0 = &lStack_800;
            plStack_a98 = (long *)&DAT_102c4c630;
            aplStack_a88[0] = (long *)&DAT_102c46598;
            pplStack_a90 = &plStack_590;
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (&plStack_2e0,s_https___chatgpt_com_apps____108af06b2,&plStack_aa0);
            if (lStack_800 != 0) {
              _free(uStack_7f8);
            }
            plStack_a98 = plStack_2d8;
            plStack_aa0 = plStack_2e0;
            pplStack_a90 = (long **)plStack_2d0;
            if ((*puVar32 & 0x7fffffffffffffff) != 0) {
              _free(*(undefined8 *)(lVar37 + 0xb0));
            }
            *(long **)(lVar37 + 0xb0) = plStack_a98;
            *puVar32 = (ulong)plStack_aa0;
            *(long ***)(lVar37 + 0xb8) = pplStack_a90;
          }
          if (1 < *(ulong *)(lVar37 + 0x40)) {
            if (*(ulong *)(lVar37 + 0x40) < 0x15) {
              func_0x000102c49730();
            }
            else {
              func_0x000102c4be50(*(undefined8 *)(lVar37 + 0x38));
            }
            uVar40 = *(ulong *)(lVar37 + 0x40);
            lVar26 = uVar40 - 2;
            if (1 < uVar40) {
              plVar17 = *(long **)(lVar37 + 0x38);
              plVar27 = plVar17 + 6;
              uVar19 = 1;
              plVar33 = plVar17;
              do {
                if (plVar33[5] == plVar33[2]) {
                  lVar21 = plVar33[4];
                  iVar15 = _memcmp(lVar21,plVar33[1]);
                  if (iVar15 == 0) {
                    if (plVar33[3] != 0) {
                      _free(lVar21);
                    }
                    if (uVar19 + 1 < uVar40) goto LAB_102c45470;
                    goto LAB_102c45448;
                  }
                }
                uVar19 = uVar19 + 1;
                lVar26 = lVar26 + -1;
                plVar27 = plVar27 + 3;
                plVar33 = plVar33 + 3;
              } while (uVar40 != uVar19);
            }
          }
          goto LAB_102c45384;
        }
        goto LAB_102c44fcc;
      }
    }
  }
  plStack_550 = (long *)0x0;
  plStack_548 = (long *)0x8;
  plStack_540 = (long *)0x0;
  for (; puVar35 != (undefined *)0x0; puVar35 = puVar35 + -1) {
    while (uVar40 == 0) {
      lVar29 = *plVar39;
      plVar28 = plVar28 + -0x288;
      plVar39 = plVar39 + 1;
      uVar40 = CONCAT17(-(-1 < lVar29),
                        CONCAT16(-(-1 < (char)((ulong)lVar29 >> 0x30)),
                                 CONCAT15(-(-1 < (char)((ulong)lVar29 >> 0x28)),
                                          CONCAT14(-(-1 < (char)((ulong)lVar29 >> 0x20)),
                                                   CONCAT13(-(-1 < (char)((ulong)lVar29 >> 0x18)),
                                                            CONCAT12(-(-1 < (char)((ulong)lVar29 >>
                                                                                  0x10)),
                                                                     CONCAT11(-(-1 < (char)((ulong)
                                                  lVar29 >> 8)),-(-1 < (char)lVar29)))))))) &
               0x8080808080808080;
    }
    uVar19 = (uVar40 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar40 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
    iVar15 = (int)((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3);
    if (plVar28[(long)-iVar15 * 0x51 + -0x51] != 0) {
      _free(plVar28[(long)-iVar15 * 0x51 + -0x50]);
    }
    uVar40 = uVar40 - 1 & uVar40;
    FUN_102c47718(plVar28 + (long)-iVar15 * 0x51 + -0x4e);
  }
  if ((plVar33 != (long *)0x0) && (plVar34 != (long *)0x0)) {
    _free(plVar30);
  }
LAB_102c44fcc:
  param_1[1] = plStack_548;
  *param_1 = plStack_550;
  param_1[2] = plStack_540;
  return;
LAB_102c45470:
  do {
    plVar33 = plVar17 + uVar19 * 3;
    if (plVar27[2] == plVar33[-1]) {
      lVar21 = plVar27[1];
      iVar15 = _memcmp(lVar21,plVar33[-2]);
      if (iVar15 != 0) goto LAB_102c45450;
      if (*plVar27 != 0) {
        _free(lVar21);
      }
    }
    else {
LAB_102c45450:
      lVar42 = plVar27[1];
      lVar21 = *plVar27;
      plVar33[2] = plVar27[2];
      plVar33[1] = lVar42;
      *plVar33 = lVar21;
      uVar19 = uVar19 + 1;
    }
    plVar27 = plVar27 + 3;
    lVar26 = lVar26 + -1;
  } while (lVar26 != 0);
LAB_102c45448:
  *(ulong *)(lVar37 + 0x40) = uVar19;
LAB_102c45384:
  if ((lVar24 == lVar18) || (lVar26 = lVar24 + 0x270, lVar37 = lVar24, lVar24 == 0))
  goto LAB_102c454d0;
  goto LAB_102c452ec;
LAB_102c454d0:
  if (plVar34 != (long *)0x1) {
    if (plVar34 < (long *)0x15) {
      lVar38 = lVar38 + -0x270;
      do {
        FUN_102c48788(lVar29,lStack_b00);
        lStack_b00 = lStack_b00 + 0x270;
        lVar38 = lVar38 + -0x270;
      } while (lVar38 != 0);
    }
    else {
      __ZN4core5slice4sort6stable14driftsort_main17h8458875b6a724883E(lVar29,plVar34,&plStack_aa0);
    }
  }
  goto LAB_102c44fcc;
}

