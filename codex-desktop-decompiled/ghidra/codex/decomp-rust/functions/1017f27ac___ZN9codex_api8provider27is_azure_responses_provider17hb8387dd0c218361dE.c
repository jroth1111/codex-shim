
undefined8
__ZN9codex_api8provider27is_azure_responses_provider17hb8387dd0c218361dE
          (byte *param_1,long param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  long **pplVar2;
  ulong uVar3;
  int iVar4;
  long *plVar5;
  byte **ppbVar6;
  code *pcVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  long *extraout_x8;
  long *plVar16;
  ulong uVar17;
  undefined8 *puVar18;
  byte *pbVar19;
  long extraout_x10;
  byte *extraout_x11;
  byte *pbVar20;
  ulong uVar21;
  undefined8 uVar22;
  long **pplVar23;
  undefined *puVar24;
  ulong *puVar25;
  ulong uVar26;
  long *plVar27;
  long lVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined8 uVar36;
  byte bVar43;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  undefined8 uVar44;
  byte bVar52;
  ulong uVar45;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  undefined8 uVar53;
  byte bVar60;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  undefined8 uVar61;
  byte bVar68;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  undefined8 uVar69;
  byte bVar76;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  undefined8 uVar77;
  byte bVar84;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  undefined8 uVar85;
  byte bVar92;
  undefined1 auVar93 [16];
  long *plStack_130;
  long lStack_128;
  byte *pbStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  ulong uStack_f8;
  long *plStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long **pplStack_b8;
  undefined *puStack_b0;
  byte **ppbStack_a8;
  undefined *puStack_a0;
  
  if (param_2 == 5) {
    uVar13 = 0x20;
    uVar14 = uVar13;
    if (0x19 < *param_1 - 0x41) {
      uVar14 = 0;
    }
    if ((uVar14 | *param_1) == 0x61) {
      if (0x19 < param_1[1] - 0x41) {
        uVar13 = 0;
      }
      if ((uVar13 | param_1[1]) == 0x7a) {
        uVar13 = 0x20;
        uVar14 = uVar13;
        if (0x19 < param_1[2] - 0x41) {
          uVar14 = 0;
        }
        if ((uVar14 | param_1[2]) == 0x75) {
          if (0x19 < param_1[3] - 0x41) {
            uVar13 = 0;
          }
          if ((uVar13 | param_1[3]) == 0x72) {
            uVar14 = 0x20;
            if (0x19 < param_1[4] - 0x41) {
              uVar14 = 0;
            }
            if ((uVar14 | param_1[4]) == 0x65) {
              return 1;
            }
          }
        }
      }
    }
  }
  if (param_3 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    lVar9 = 1;
    goto LAB_1017f22a8;
  }
  lVar28 = param_3;
  lVar9 = _malloc(param_4);
  if (lVar9 != 0) {
    _memcpy(lVar9,param_3,param_4);
    if (param_4 < 8) {
      uVar15 = 0;
    }
    else {
      if (param_4 < 0x40) {
        uVar21 = 0;
      }
      else {
        uVar15 = param_4 & 0xffffffffffffffc0;
        puVar18 = (undefined8 *)(lVar9 + 0x20);
        uVar21 = uVar15;
        do {
          uVar36 = puVar18[-3];
          uVar22 = puVar18[-4];
          uVar53 = puVar18[-1];
          uVar44 = puVar18[-2];
          uVar69 = puVar18[1];
          uVar61 = *puVar18;
          uVar85 = puVar18[3];
          uVar77 = puVar18[2];
          bVar29 = (byte)((ulong)uVar22 >> 8);
          bVar30 = (byte)((ulong)uVar22 >> 0x10);
          bVar31 = (byte)((ulong)uVar22 >> 0x18);
          bVar32 = (byte)((ulong)uVar22 >> 0x20);
          bVar33 = (byte)((ulong)uVar22 >> 0x28);
          bVar34 = (byte)((ulong)uVar22 >> 0x30);
          bVar35 = (byte)((ulong)uVar22 >> 0x38);
          bVar37 = (byte)((ulong)uVar36 >> 8);
          bVar38 = (byte)((ulong)uVar36 >> 0x10);
          bVar39 = (byte)((ulong)uVar36 >> 0x18);
          bVar40 = (byte)((ulong)uVar36 >> 0x20);
          bVar41 = (byte)((ulong)uVar36 >> 0x28);
          bVar42 = (byte)((ulong)uVar36 >> 0x30);
          bVar43 = (byte)((ulong)uVar36 >> 0x38);
          bVar46 = (byte)((ulong)uVar44 >> 8);
          bVar47 = (byte)((ulong)uVar44 >> 0x10);
          bVar48 = (byte)((ulong)uVar44 >> 0x18);
          bVar49 = (byte)((ulong)uVar44 >> 0x20);
          bVar50 = (byte)((ulong)uVar44 >> 0x28);
          bVar51 = (byte)((ulong)uVar44 >> 0x30);
          bVar52 = (byte)((ulong)uVar44 >> 0x38);
          bVar54 = (byte)((ulong)uVar53 >> 8);
          bVar55 = (byte)((ulong)uVar53 >> 0x10);
          bVar56 = (byte)((ulong)uVar53 >> 0x18);
          bVar57 = (byte)((ulong)uVar53 >> 0x20);
          bVar58 = (byte)((ulong)uVar53 >> 0x28);
          bVar59 = (byte)((ulong)uVar53 >> 0x30);
          bVar60 = (byte)((ulong)uVar53 >> 0x38);
          bVar62 = (byte)((ulong)uVar61 >> 8);
          bVar63 = (byte)((ulong)uVar61 >> 0x10);
          bVar64 = (byte)((ulong)uVar61 >> 0x18);
          bVar65 = (byte)((ulong)uVar61 >> 0x20);
          bVar66 = (byte)((ulong)uVar61 >> 0x28);
          bVar67 = (byte)((ulong)uVar61 >> 0x30);
          bVar68 = (byte)((ulong)uVar61 >> 0x38);
          bVar70 = (byte)((ulong)uVar69 >> 8);
          bVar71 = (byte)((ulong)uVar69 >> 0x10);
          bVar72 = (byte)((ulong)uVar69 >> 0x18);
          bVar73 = (byte)((ulong)uVar69 >> 0x20);
          bVar74 = (byte)((ulong)uVar69 >> 0x28);
          bVar75 = (byte)((ulong)uVar69 >> 0x30);
          bVar76 = (byte)((ulong)uVar69 >> 0x38);
          bVar78 = (byte)((ulong)uVar77 >> 8);
          bVar79 = (byte)((ulong)uVar77 >> 0x10);
          bVar80 = (byte)((ulong)uVar77 >> 0x18);
          bVar81 = (byte)((ulong)uVar77 >> 0x20);
          bVar82 = (byte)((ulong)uVar77 >> 0x28);
          bVar83 = (byte)((ulong)uVar77 >> 0x30);
          bVar84 = (byte)((ulong)uVar77 >> 0x38);
          bVar86 = (byte)((ulong)uVar85 >> 8);
          bVar87 = (byte)((ulong)uVar85 >> 0x10);
          bVar88 = (byte)((ulong)uVar85 >> 0x18);
          bVar89 = (byte)((ulong)uVar85 >> 0x20);
          bVar90 = (byte)((ulong)uVar85 >> 0x28);
          bVar91 = (byte)((ulong)uVar85 >> 0x30);
          bVar92 = (byte)((ulong)uVar85 >> 0x38);
          puVar18[-3] = CONCAT17(-((byte)(bVar43 + 0xbf) < 0x1a) & 0x20U | bVar43,
                                 CONCAT16(-((byte)(bVar42 + 0xbf) < 0x1a) & 0x20U | bVar42,
                                          CONCAT15(-((byte)(bVar41 + 0xbf) < 0x1a) & 0x20U | bVar41,
                                                   CONCAT14(-((byte)(bVar40 + 0xbf) < 0x1a) & 0x20U
                                                            | bVar40,CONCAT13(-((byte)(bVar39 + 0xbf
                                                                                      ) < 0x1a) &
                                                                              0x20U | bVar39,
                                                                              CONCAT12(-((byte)(
                                                  bVar38 + 0xbf) < 0x1a) & 0x20U | bVar38,
                                                  CONCAT11(-((byte)(bVar37 + 0xbf) < 0x1a) & 0x20U |
                                                           bVar37,-((byte)((byte)uVar36 + 0xbf) <
                                                                   0x1a) & 0x20U | (byte)uVar36)))))
                                         ));
          puVar18[-4] = CONCAT17(-((byte)(bVar35 + 0xbf) < 0x1a) & 0x20U | bVar35,
                                 CONCAT16(-((byte)(bVar34 + 0xbf) < 0x1a) & 0x20U | bVar34,
                                          CONCAT15(-((byte)(bVar33 + 0xbf) < 0x1a) & 0x20U | bVar33,
                                                   CONCAT14(-((byte)(bVar32 + 0xbf) < 0x1a) & 0x20U
                                                            | bVar32,CONCAT13(-((byte)(bVar31 + 0xbf
                                                                                      ) < 0x1a) &
                                                                              0x20U | bVar31,
                                                                              CONCAT12(-((byte)(
                                                  bVar30 + 0xbf) < 0x1a) & 0x20U | bVar30,
                                                  CONCAT11(-((byte)(bVar29 + 0xbf) < 0x1a) & 0x20U |
                                                           bVar29,-((byte)((byte)uVar22 + 0xbf) <
                                                                   0x1a) & 0x20U | (byte)uVar22)))))
                                         ));
          puVar18[-1] = CONCAT17(-((byte)(bVar60 + 0xbf) < 0x1a) & 0x20U | bVar60,
                                 CONCAT16(-((byte)(bVar59 + 0xbf) < 0x1a) & 0x20U | bVar59,
                                          CONCAT15(-((byte)(bVar58 + 0xbf) < 0x1a) & 0x20U | bVar58,
                                                   CONCAT14(-((byte)(bVar57 + 0xbf) < 0x1a) & 0x20U
                                                            | bVar57,CONCAT13(-((byte)(bVar56 + 0xbf
                                                                                      ) < 0x1a) &
                                                                              0x20U | bVar56,
                                                                              CONCAT12(-((byte)(
                                                  bVar55 + 0xbf) < 0x1a) & 0x20U | bVar55,
                                                  CONCAT11(-((byte)(bVar54 + 0xbf) < 0x1a) & 0x20U |
                                                           bVar54,-((byte)((byte)uVar53 + 0xbf) <
                                                                   0x1a) & 0x20U | (byte)uVar53)))))
                                         ));
          puVar18[-2] = CONCAT17(-((byte)(bVar52 + 0xbf) < 0x1a) & 0x20U | bVar52,
                                 CONCAT16(-((byte)(bVar51 + 0xbf) < 0x1a) & 0x20U | bVar51,
                                          CONCAT15(-((byte)(bVar50 + 0xbf) < 0x1a) & 0x20U | bVar50,
                                                   CONCAT14(-((byte)(bVar49 + 0xbf) < 0x1a) & 0x20U
                                                            | bVar49,CONCAT13(-((byte)(bVar48 + 0xbf
                                                                                      ) < 0x1a) &
                                                                              0x20U | bVar48,
                                                                              CONCAT12(-((byte)(
                                                  bVar47 + 0xbf) < 0x1a) & 0x20U | bVar47,
                                                  CONCAT11(-((byte)(bVar46 + 0xbf) < 0x1a) & 0x20U |
                                                           bVar46,-((byte)((byte)uVar44 + 0xbf) <
                                                                   0x1a) & 0x20U | (byte)uVar44)))))
                                         ));
          puVar18[1] = CONCAT17(-((byte)(bVar76 + 0xbf) < 0x1a) & 0x20U | bVar76,
                                CONCAT16(-((byte)(bVar75 + 0xbf) < 0x1a) & 0x20U | bVar75,
                                         CONCAT15(-((byte)(bVar74 + 0xbf) < 0x1a) & 0x20U | bVar74,
                                                  CONCAT14(-((byte)(bVar73 + 0xbf) < 0x1a) & 0x20U |
                                                           bVar73,CONCAT13(-((byte)(bVar72 + 0xbf) <
                                                                            0x1a) & 0x20U | bVar72,
                                                                           CONCAT12(-((byte)(bVar71 
                                                  + 0xbf) < 0x1a) & 0x20U | bVar71,
                                                  CONCAT11(-((byte)(bVar70 + 0xbf) < 0x1a) & 0x20U |
                                                           bVar70,-((byte)((byte)uVar69 + 0xbf) <
                                                                   0x1a) & 0x20U | (byte)uVar69)))))
                                        ));
          *puVar18 = CONCAT17(-((byte)(bVar68 + 0xbf) < 0x1a) & 0x20U | bVar68,
                              CONCAT16(-((byte)(bVar67 + 0xbf) < 0x1a) & 0x20U | bVar67,
                                       CONCAT15(-((byte)(bVar66 + 0xbf) < 0x1a) & 0x20U | bVar66,
                                                CONCAT14(-((byte)(bVar65 + 0xbf) < 0x1a) & 0x20U |
                                                         bVar65,CONCAT13(-((byte)(bVar64 + 0xbf) <
                                                                          0x1a) & 0x20U | bVar64,
                                                                         CONCAT12(-((byte)(bVar63 + 
                                                  0xbf) < 0x1a) & 0x20U | bVar63,
                                                  CONCAT11(-((byte)(bVar62 + 0xbf) < 0x1a) & 0x20U |
                                                           bVar62,-((byte)((byte)uVar61 + 0xbf) <
                                                                   0x1a) & 0x20U | (byte)uVar61)))))
                                      ));
          puVar18[3] = CONCAT17(-((byte)(bVar92 + 0xbf) < 0x1a) & 0x20U | bVar92,
                                CONCAT16(-((byte)(bVar91 + 0xbf) < 0x1a) & 0x20U | bVar91,
                                         CONCAT15(-((byte)(bVar90 + 0xbf) < 0x1a) & 0x20U | bVar90,
                                                  CONCAT14(-((byte)(bVar89 + 0xbf) < 0x1a) & 0x20U |
                                                           bVar89,CONCAT13(-((byte)(bVar88 + 0xbf) <
                                                                            0x1a) & 0x20U | bVar88,
                                                                           CONCAT12(-((byte)(bVar87 
                                                  + 0xbf) < 0x1a) & 0x20U | bVar87,
                                                  CONCAT11(-((byte)(bVar86 + 0xbf) < 0x1a) & 0x20U |
                                                           bVar86,-((byte)((byte)uVar85 + 0xbf) <
                                                                   0x1a) & 0x20U | (byte)uVar85)))))
                                        ));
          puVar18[2] = CONCAT17(-((byte)(bVar84 + 0xbf) < 0x1a) & 0x20U | bVar84,
                                CONCAT16(-((byte)(bVar83 + 0xbf) < 0x1a) & 0x20U | bVar83,
                                         CONCAT15(-((byte)(bVar82 + 0xbf) < 0x1a) & 0x20U | bVar82,
                                                  CONCAT14(-((byte)(bVar81 + 0xbf) < 0x1a) & 0x20U |
                                                           bVar81,CONCAT13(-((byte)(bVar80 + 0xbf) <
                                                                            0x1a) & 0x20U | bVar80,
                                                                           CONCAT12(-((byte)(bVar79 
                                                  + 0xbf) < 0x1a) & 0x20U | bVar79,
                                                  CONCAT11(-((byte)(bVar78 + 0xbf) < 0x1a) & 0x20U |
                                                           bVar78,-((byte)((byte)uVar77 + 0xbf) <
                                                                   0x1a) & 0x20U | (byte)uVar77)))))
                                        ));
          uVar21 = uVar21 - 0x40;
          puVar18 = puVar18 + 8;
        } while (uVar21 != 0);
        if (param_4 == uVar15) goto LAB_1017f22a8;
        uVar21 = uVar15;
        if ((param_4 & 0x38) == 0) goto LAB_1017f2284;
      }
      uVar15 = param_4 & 0xfffffffffffffff8;
      do {
        uVar22 = *(undefined8 *)(lVar9 + uVar21);
        bVar29 = (byte)((ulong)uVar22 >> 8);
        bVar30 = (byte)((ulong)uVar22 >> 0x10);
        bVar31 = (byte)((ulong)uVar22 >> 0x18);
        bVar32 = (byte)((ulong)uVar22 >> 0x20);
        bVar33 = (byte)((ulong)uVar22 >> 0x28);
        bVar34 = (byte)((ulong)uVar22 >> 0x30);
        bVar35 = (byte)((ulong)uVar22 >> 0x38);
        uVar45 = CONCAT17(-((byte)(bVar35 + 0xbf) < 0x1a),
                          CONCAT16(-((byte)(bVar34 + 0xbf) < 0x1a),
                                   CONCAT15(-((byte)(bVar33 + 0xbf) < 0x1a),
                                            CONCAT14(-((byte)(bVar32 + 0xbf) < 0x1a),
                                                     CONCAT13(-((byte)(bVar31 + 0xbf) < 0x1a),
                                                              CONCAT12(-((byte)(bVar30 + 0xbf) <
                                                                        0x1a),CONCAT11(-((byte)(
                                                  bVar29 + 0xbf) < 0x1a),
                                                  -((byte)((byte)uVar22 + 0xbf) < 0x1a)))))))) &
                 0x2020202020202020;
        *(ulong *)(lVar9 + uVar21) =
             CONCAT17((byte)(uVar45 >> 0x38) | bVar35,
                      CONCAT16((byte)(uVar45 >> 0x30) | bVar34,
                               CONCAT15((byte)(uVar45 >> 0x28) | bVar33,
                                        CONCAT14((byte)(uVar45 >> 0x20) | bVar32,
                                                 CONCAT13((byte)(uVar45 >> 0x18) | bVar31,
                                                          CONCAT12((byte)(uVar45 >> 0x10) | bVar30,
                                                                   CONCAT11((byte)(uVar45 >> 8) |
                                                                            bVar29,(byte)uVar45 |
                                                                                   (byte)uVar22)))))
                              ));
        uVar21 = uVar21 + 8;
      } while (uVar15 != uVar21);
      if (param_4 == uVar15) goto LAB_1017f22a8;
    }
LAB_1017f2284:
    do {
      bVar29 = 0x20;
      if (0x19 < *(byte *)(lVar9 + uVar15) - 0x41) {
        bVar29 = 0;
      }
      *(byte *)(lVar9 + uVar15) = bVar29 | *(byte *)(lVar9 + uVar15);
      uVar15 = uVar15 + 1;
    } while (param_4 != uVar15);
LAB_1017f22a8:
    uVar15 = FUN_1017ac324(&UNK_108ce8121,0xd,lVar9,param_4);
    if (((((uVar15 & 1) == 0) &&
         (uVar15 = FUN_1017ac324(&UNK_108ce812e,0x18,lVar9,param_4), (uVar15 & 1) == 0)) &&
        (uVar15 = FUN_1017ac324(&UNK_108ce8146,0xb,lVar9,param_4), (uVar15 & 1) == 0)) &&
       ((uVar15 = FUN_1017ac324(&UNK_108ce8151,10,lVar9,param_4), (uVar15 & 1) == 0 &&
        (uVar15 = FUN_1017ac324(&UNK_108ce815b,8,lVar9,param_4), (uVar15 & 1) == 0)))) {
      uVar22 = FUN_1017ac324(&UNK_108ce8163,0x12,lVar9,param_4);
    }
    else {
      uVar22 = 1;
    }
    if (param_4 != 0) {
      _free(lVar9);
    }
    return uVar22;
  }
  uVar22 = func_0x0001087c9084(1,param_4);
  if (param_4 != 0) {
    _free();
  }
  auVar93 = __Unwind_Resume(uVar22);
  lVar10 = auVar93._0_8_;
  plVar27 = *(long **)(lVar10 + 0x80);
  lVar9 = *(long *)(lVar10 + 0x88);
  do {
    lVar12 = lVar9;
    if (lVar12 == 0) break;
    pbVar19 = (byte *)((long)plVar27 + lVar12 + -1);
    uVar14 = (uint)(char)*pbVar19;
    if ((int)uVar14 < 0) {
      pbVar19 = (byte *)((long)plVar27 + lVar12 + -2);
      bVar29 = *pbVar19;
      if ((char)bVar29 < -0x40) {
        pbVar19 = (byte *)((long)plVar27 + lVar12 + -3);
        bVar30 = *pbVar19;
        if ((char)bVar30 < -0x40) {
          pbVar19 = (byte *)((long)plVar27 + lVar12 + -4);
          uVar13 = bVar30 & 0x3f | (*pbVar19 & 7) << 6;
        }
        else {
          uVar13 = (int)(char)bVar30 & 0xf;
        }
        uVar13 = bVar29 & 0x3f | uVar13 << 6;
      }
      else {
        uVar13 = (int)(char)bVar29 & 0x1f;
      }
      uVar14 = uVar14 & 0x3f | uVar13 << 6;
    }
    lVar9 = (long)pbVar19 - (long)plVar27;
  } while (uVar14 == 0x2f);
  pbVar19 = (byte *)0x0;
  pbStack_120 = (byte *)(auVar93._8_8_ + lVar28);
  do {
    lStack_118 = lVar28 - (long)pbVar19;
    plStack_130 = plVar27;
    lStack_128 = lVar12;
    if (lStack_118 == 0) {
      lStack_118 = 0;
      if (lVar12 == 0) {
        lVar9 = 1;
      }
      else {
        lVar9 = _malloc(lVar12);
        if (lVar9 == 0) {
          func_0x0001087c9084(1,lVar12);
          lStack_118 = extraout_x10;
          pbVar20 = extraout_x11;
          break;
        }
      }
      uVar22 = _memcpy(lVar9,plVar27,lVar12);
      plVar27 = *(long **)(lVar10 + 0xc0);
      lStack_110 = lVar12;
      lStack_100 = lVar12;
      lStack_108 = lVar9;
      goto joined_r0x0001017f2560;
    }
    pbVar20 = pbVar19 + auVar93._8_8_;
    pbVar19 = pbVar20 + 1;
    uVar14 = (uint)*pbVar20;
    if ((char)*pbVar20 < '\0') {
      if (uVar14 < 0xe0) {
        pbVar19 = pbVar20 + 2;
        uVar14 = pbVar20[1] & 0x3f | (uVar14 & 0x1f) << 6;
      }
      else {
        uVar13 = pbVar20[2] & 0x3f | (pbVar20[1] & 0x3f) << 6;
        if (uVar14 < 0xf0) {
          pbVar19 = pbVar20 + 3;
          uVar14 = uVar13 | (uVar14 & 0x1f) << 0xc;
        }
        else {
          pbVar19 = pbVar20 + 4;
          uVar14 = pbVar20[3] & 0x3f | uVar13 << 6 | (uVar14 & 7) << 0x12;
        }
      }
    }
    pbVar19 = pbVar19 + (lVar28 - (long)pbStack_120);
  } while (uVar14 == 0x2f);
  pplStack_b8 = &plStack_130;
  puStack_b0 = &DAT_10179e9f8;
  ppbStack_a8 = &pbStack_120;
  puStack_a0 = &DAT_10179e9f8;
  pbStack_120 = pbVar20;
  uVar22 = __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                     (&lStack_110,s___108ab8993,&pplStack_b8);
  plVar27 = *(long **)(lVar10 + 0xc0);
joined_r0x0001017f2560:
  if ((plVar27 == (long *)0x0) || (uVar15 = *(ulong *)(lVar10 + 0xd8), uVar15 == 0))
  goto LAB_1017f265c;
  lVar9 = *plVar27;
  uVar21 = CONCAT17(-(-1 < lVar9),
                    CONCAT16(-(-1 < (char)((ulong)lVar9 >> 0x30)),
                             CONCAT15(-(-1 < (char)((ulong)lVar9 >> 0x28)),
                                      CONCAT14(-(-1 < (char)((ulong)lVar9 >> 0x20)),
                                               CONCAT13(-(-1 < (char)((ulong)lVar9 >> 0x18)),
                                                        CONCAT12(-(-1 < (char)((ulong)lVar9 >> 0x10)
                                                                  ),CONCAT11(-(-1 < (char)((ulong)
                                                  lVar9 >> 8)),-(-1 < (char)lVar9))))))));
  plVar5 = plVar27;
  while( true ) {
    uVar21 = uVar21 & 0x8080808080808080;
    plVar5 = plVar5 + 1;
    if (uVar21 != 0) break;
    lVar9 = *plVar5;
    uVar21 = CONCAT17(-(-1 < lVar9),
                      CONCAT16(-(-1 < (char)((ulong)lVar9 >> 0x30)),
                               CONCAT15(-(-1 < (char)((ulong)lVar9 >> 0x28)),
                                        CONCAT14(-(-1 < (char)((ulong)lVar9 >> 0x20)),
                                                 CONCAT13(-(-1 < (char)((ulong)lVar9 >> 0x18)),
                                                          CONCAT12(-(-1 < (char)((ulong)lVar9 >>
                                                                                0x10)),
                                                                   CONCAT11(-(-1 < (char)((ulong)
                                                  lVar9 >> 8)),-(-1 < (char)lVar9))))))));
    plVar27 = plVar27 + -0x30;
  }
  uVar45 = (uVar21 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar21 >> 7 & 0xff00ff00ff00ff) << 8;
  uVar45 = (uVar45 & 0xffff0000ffff0000) >> 0x10 | (uVar45 & 0xffff0000ffff) << 0x10;
  iVar4 = (int)((ulong)LZCOUNT(uVar45 >> 0x20 | uVar45 << 0x20) >> 3);
  plStack_c8 = plVar27 + (long)-iVar4 * 6 + -6;
  plStack_c0 = plVar27 + (long)-iVar4 * 6 + -3;
  pplStack_b8 = &plStack_c8;
  puStack_b0 = &DAT_10179e8c8;
  ppbStack_a8 = (byte **)&plStack_c0;
  puStack_a0 = &DAT_10179e8c8;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(&lStack_e0,s___108ad4e41,&pplStack_b8);
  lVar10 = lStack_d0;
  lVar28 = lStack_d8;
  lVar9 = lStack_e0;
  if (lStack_e0 == -0x8000000000000000) {
    uVar15 = 0;
    bVar8 = true;
    puVar24 = (undefined *)0x1;
    lVar9 = lStack_100;
    if (lStack_110 == lStack_100) goto LAB_1017f2964;
    goto LAB_1017f2618;
  }
  uVar45 = uVar15;
  if (uVar15 < 5) {
    uVar45 = 4;
  }
  lVar12 = uVar45 * 0x18;
  if (uVar15 < 0x555555555555556) {
    if (lVar12 == 0) {
      uVar45 = 0;
      plVar11 = (long *)0x8;
    }
    else {
      plVar11 = (long *)_malloc(lVar12);
      if (plVar11 == (long *)0x0) {
        uVar22 = 8;
        goto LAB_1017f26c4;
      }
    }
    *plVar11 = lVar9;
    plVar11[1] = lVar28;
    plVar11[2] = lVar10;
    uStack_e8 = 1;
    lVar9 = uVar15 - 1;
    uVar26 = 1;
    uStack_f8 = uVar45;
    plStack_f0 = plVar11;
    if (lVar9 != 0) {
      uVar21 = uVar21 - 1 & uVar21;
      do {
        while (uVar26 = uStack_e8, uVar21 == 0) {
          lVar28 = *plVar5;
          plVar27 = plVar27 + -0x30;
          plVar5 = plVar5 + 1;
          uVar21 = CONCAT17(-(-1 < lVar28),
                            CONCAT16(-(-1 < (char)((ulong)lVar28 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar28 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar28 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar28 >> 0x18)
                                                                 ),CONCAT12(-(-1 < (char)((ulong)
                                                  lVar28 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar28 >> 8)),
                                                           -(-1 < (char)lVar28)))))))) &
                   0x8080808080808080;
        }
        uVar45 = (uVar21 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar21 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar45 = (uVar45 & 0xffff0000ffff0000) >> 0x10 | (uVar45 & 0xffff0000ffff) << 0x10;
        iVar4 = (int)((ulong)LZCOUNT(uVar45 >> 0x20 | uVar45 << 0x20) >> 3);
        plStack_c8 = plVar27 + (long)-iVar4 * 6 + -6;
        plStack_c0 = plVar27 + (long)-iVar4 * 6 + -3;
        pplStack_b8 = &plStack_c8;
        ppbStack_a8 = (byte **)&plStack_c0;
        puStack_b0 = &DAT_10179e8c8;
        puStack_a0 = &DAT_10179e8c8;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&lStack_e0,s___108ad4e41,&pplStack_b8);
        lVar12 = lStack_d0;
        lVar10 = lStack_d8;
        lVar28 = lStack_e0;
        if (lStack_e0 == -0x8000000000000000) break;
        if (uVar26 == uStack_f8) {
          FUN_108880448(&uStack_f8,uVar26,lVar9,8,0x18);
          plVar11 = plStack_f0;
        }
        uVar21 = uVar21 - 1 & uVar21;
        plVar16 = plVar11 + uVar26 * 3;
        *plVar16 = lVar28;
        plVar16[1] = lVar10;
        plVar16[2] = lVar12;
        uStack_e8 = uVar26 + 1;
        lVar9 = lVar9 + -1;
        uVar26 = uVar15;
      } while (lVar9 != 0);
    }
    plVar5 = plStack_f0;
    uVar21 = uStack_f8;
    lVar9 = uVar26 * 0x18;
    uVar15 = lVar9 - 0x18;
    pplVar23 = (long **)((uVar15 >> 3) * -0x5555555555555555);
    plVar27 = plStack_f0;
    do {
      if (lVar9 == 0) {
        if ((long)pplVar23 < 0) {
          uVar22 = 0;
LAB_1017f286c:
          func_0x0001087c9084(uVar22,pplVar23);
          goto LAB_1017f29a0;
        }
        if (pplVar23 == (long **)0x0) {
          puVar24 = (undefined *)0x1;
        }
        else {
          puVar24 = (undefined *)_malloc(pplVar23);
          if (puVar24 == (undefined *)0x0) {
            uVar22 = 1;
            goto LAB_1017f286c;
          }
        }
        ppbStack_a8 = (byte **)0x0;
        lVar9 = plVar5[1];
        pplVar2 = (long **)plVar5[2];
        pplStack_b8 = pplVar23;
        puStack_b0 = puVar24;
        if (pplVar23 < pplVar2) {
          FUN_108880448(&pplStack_b8,0,pplVar2,1,1);
        }
        ppbVar6 = ppbStack_a8;
        puVar24 = puStack_b0;
        _memcpy(puStack_b0 + (long)ppbStack_a8,lVar9,pplVar2);
        lVar9 = (long)pplVar23 - ((long)ppbVar6 + (long)pplVar2);
        if (uVar26 == 1) goto LAB_1017f290c;
        puVar24 = puVar24 + (long)ppbVar6 + (long)pplVar2;
        puVar25 = (ulong *)(plVar5 + 5);
        goto LAB_1017f28dc;
      }
      puVar25 = (ulong *)(plVar27 + 2);
      plVar27 = plVar27 + 3;
      lVar9 = lVar9 + -0x18;
      bVar8 = CARRY8(*puVar25,(ulong)pplVar23);
      pplVar23 = (long **)(*puVar25 + (long)pplVar23);
    } while (!bVar8);
    func_0x000108a079f0(&UNK_108ce4b83,0x35,&UNK_10b25a310);
  }
  else {
    uVar22 = 0;
LAB_1017f26c4:
    func_0x0001087c9084(uVar22,lVar12);
  }
LAB_1017f29a0:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1017f29a4);
  (*pcVar7)();
  while( true ) {
    uVar45 = puVar25[-1];
    uVar3 = *puVar25;
    uVar17 = lVar9 - 1;
    *puVar24 = 0x26;
    lVar9 = uVar17 - uVar3;
    if (uVar17 < uVar3) goto LAB_1017f2988;
    puVar25 = puVar25 + 3;
    puVar1 = puVar24 + 1;
    puVar24 = puVar1 + uVar3;
    _memcpy(puVar1,uVar45);
    uVar15 = uVar15 - 0x18;
    if (uVar15 == 0) break;
LAB_1017f28dc:
    if (lVar9 == 0) {
LAB_1017f2988:
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108ce42ff,0x13,&UNK_10b25a328);
      goto LAB_1017f29a0;
    }
  }
LAB_1017f290c:
  puVar24 = puStack_b0;
  pplVar2 = pplStack_b8;
  plVar27 = plVar5 + 1;
  do {
    if (plVar27[-1] != 0) {
      _free(*plVar27);
    }
    plVar27 = plVar27 + 3;
    uVar26 = uVar26 - 1;
  } while (uVar26 != 0);
  uVar15 = (long)pplVar23 - lVar9;
  bVar8 = pplVar2 == (long **)0x0;
  if (uVar21 != 0) {
    _free(plVar5);
  }
  lVar9 = lStack_100;
  if (lStack_110 == lStack_100) {
LAB_1017f2964:
    lVar9 = lStack_100;
    FUN_108880448(&lStack_110,lStack_100,1,1,1);
  }
LAB_1017f2618:
  *(undefined1 *)(lStack_108 + lStack_100) = 0x3f;
  lStack_100 = lVar9 + 1;
  if ((ulong)(lStack_110 - lStack_100) < uVar15) {
    FUN_108880448(&lStack_110,lStack_100,uVar15,1,1);
  }
  lVar9 = lStack_100;
  uVar22 = _memcpy(lStack_108 + lStack_100,puVar24,uVar15);
  lStack_100 = lVar9 + uVar15;
  if (!bVar8) {
    uVar22 = _free(puVar24);
  }
LAB_1017f265c:
  extraout_x8[1] = lStack_108;
  *extraout_x8 = lStack_110;
  extraout_x8[2] = lStack_100;
  return uVar22;
}

