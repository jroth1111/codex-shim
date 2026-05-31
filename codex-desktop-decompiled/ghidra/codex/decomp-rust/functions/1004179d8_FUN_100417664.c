
void FUN_100417664(ulong *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  byte bVar20;
  long lVar21;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  undefined8 uVar22;
  undefined8 uVar23;
  byte bVar29;
  undefined1 auVar30 [16];
  long lStack_158;
  long lStack_150;
  long lStack_148;
  int aiStack_c8 [4];
  long lStack_b8;
  undefined8 uStack_b0;
  
  if (param_2[4] == 0) {
    *param_1 = 0x8000000000000001;
  }
  else {
    lVar11 = *param_2;
    uVar13 = param_2[1];
    if (uVar13 == 0) {
      plVar19 = (long *)param_2[2];
      do {
        plVar9 = plVar19 + 1;
        lVar21 = *plVar19;
        lVar11 = lVar11 + -0xc0;
        uVar13 = CONCAT17(-(-1 < lVar21),
                          CONCAT16(-(-1 < (char)((ulong)lVar21 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar21 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar21 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar21 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar21
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar21 >> 8)),-(-1 < (char)lVar21)))))))) &
                 0x8080808080808080;
        plVar19 = plVar9;
      } while (uVar13 == 0);
      param_2[2] = (long)plVar9;
      *param_2 = lVar11;
    }
    uVar17 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
    uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
    uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
    uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
    param_2[1] = uVar13 - 1 & uVar13;
    uVar17 = lVar11 + (long)-(int)((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) * 0x18;
    param_2[4] = param_2[4] + -1;
    plVar19 = (long *)param_2[5];
    uVar23 = *(undefined8 *)(uVar17 - 0x10);
    uVar13 = *(ulong *)(uVar17 - 8);
    if (uVar13 == 0) {
      uVar6 = 1;
      _memcpy(1,uVar23,0);
      lVar11 = plVar19[3];
    }
    else {
      uVar6 = _malloc(uVar13);
      if (uVar6 == 0) {
        uVar22 = FUN_107c03c64(1,uVar13);
        if ((uVar13 & 0x7fffffffffffffff) != 0) {
          _free();
        }
        auVar30 = __Unwind_Resume(uVar22);
        plVar9 = auVar30._8_8_;
        plVar19 = auVar30._0_8_;
        uStack_b0 = uVar23;
        while( true ) {
          if ((*(byte *)((long)plVar9 + 0x41) & 1) != 0) break;
          lVar11 = plVar9[2];
          FUN_1011e0db8(aiStack_c8,plVar9 + 2);
          if (aiStack_c8[0] == 1) {
            lVar21 = lStack_b8 - *plVar9;
            lVar11 = lVar11 + *plVar9;
            *plVar9 = lStack_b8;
          }
          else {
            if ((*(byte *)((long)plVar9 + 0x41) & 1) != 0) break;
            *(undefined1 *)((long)plVar9 + 0x41) = 1;
            lVar11 = *plVar9;
            if (((*(byte *)(plVar9 + 8) & 1) == 0) && (plVar9[1] == lVar11)) break;
            lVar21 = plVar9[1] - lVar11;
            lVar11 = plVar9[2] + lVar11;
          }
          lVar14 = lVar21;
          if ((lVar21 != 0) && (lVar16 = lVar21 + -1, *(char *)(lVar11 + lVar16) == '\n')) {
            if (lVar16 == 0) {
              lVar12 = 0;
            }
            else {
              lVar12 = lVar11;
              if (*(char *)(lVar11 + lVar21 + -2) != '\r') {
                lVar12 = 0;
              }
            }
            lVar14 = lVar16;
            if (lVar12 != 0) {
              lVar11 = lVar12;
              lVar14 = lVar21 + -2;
            }
          }
          if (lVar11 == 0) break;
          auVar30 = FUN_100e8d6f8(lVar11,lVar14);
          lVar11 = auVar30._8_8_;
          if ((lVar11 != 0) && (auVar30._0_8_ != 0)) {
            lVar21 = _malloc(lVar11);
            if (lVar21 != 0) {
              _memcpy(lVar21,auVar30._0_8_,lVar11);
              *plVar19 = lVar11;
              plVar19[1] = lVar21;
              plVar19[2] = lVar11;
              return;
            }
            auVar30 = FUN_107c03c64(1,lVar11);
            lVar11 = auVar30._8_8_;
            plVar9 = *(long **)(lVar11 + 0x18);
            plVar19 = *(long **)(lVar11 + 8);
            if (plVar19 != plVar9) {
              plVar18 = *(long **)(lVar11 + 0x20);
              do {
                lVar21 = *plVar19;
                lVar14 = plVar19[1];
                lVar16 = plVar19[2];
                plVar19 = plVar19 + 3;
                *(long **)(lVar11 + 8) = plVar19;
                if (plVar18[3] != 0) {
                  uVar13 = FUN_100e8e738(plVar18[4],plVar18[5],lVar14,lVar16);
                  lVar12 = 0;
                  lVar1 = *plVar18;
                  uVar17 = plVar18[1];
                  bVar8 = (byte)(uVar13 >> 0x39);
                  while( true ) {
                    uVar13 = uVar13 & uVar17;
                    uVar23 = *(undefined8 *)(lVar1 + uVar13);
                    bVar20 = (byte)((ulong)uVar23 >> 8);
                    bVar24 = (byte)((ulong)uVar23 >> 0x10);
                    bVar25 = (byte)((ulong)uVar23 >> 0x18);
                    bVar26 = (byte)((ulong)uVar23 >> 0x20);
                    bVar27 = (byte)((ulong)uVar23 >> 0x28);
                    bVar28 = (byte)((ulong)uVar23 >> 0x30);
                    bVar29 = (byte)((ulong)uVar23 >> 0x38);
                    for (uVar6 = CONCAT17(-(bVar29 == bVar8),
                                          CONCAT16(-(bVar28 == bVar8),
                                                   CONCAT15(-(bVar27 == bVar8),
                                                            CONCAT14(-(bVar26 == bVar8),
                                                                     CONCAT13(-(bVar25 == bVar8),
                                                                              CONCAT12(-(bVar24 ==
                                                                                        bVar8),
                                                  CONCAT11(-(bVar20 == bVar8),
                                                           -((byte)uVar23 == bVar8)))))))) &
                                 0x8080808080808080; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
                      uVar15 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                               (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
                      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar15 & 0xffff0000ffff) << 0x10;
                      lVar10 = lVar1 + (uVar13 + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >>
                                                 3) & uVar17) * -0x10;
                      if ((lVar16 == *(long *)(lVar10 + -8)) &&
                         (iVar5 = _memcmp(lVar14,*(undefined8 *)(lVar10 + -0x10),lVar16), iVar5 == 0
                         )) {
                        if (lVar21 != -0x8000000000000000) {
                          lStack_158 = lVar21;
                          lStack_150 = lVar14;
                          lStack_148 = lVar16;
                          __ZN16codex_connectors5merge28plugin_connector_to_app_info17h7f3c3cff04849623E
                                    (auVar30._0_8_,&lStack_158);
                          return;
                        }
                        goto LAB_100417aac;
                      }
                    }
                    bVar20 = NEON_umaxv(CONCAT17(-(bVar29 == 0xff),
                                                 CONCAT16(-(bVar28 == 0xff),
                                                          CONCAT15(-(bVar27 == 0xff),
                                                                   CONCAT14(-(bVar26 == 0xff),
                                                                            CONCAT13(-(bVar25 ==
                                                                                      0xff),CONCAT12
                                                  (-(bVar24 == 0xff),
                                                   CONCAT11(-(bVar20 == 0xff),
                                                            -((byte)uVar23 == 0xff)))))))),1);
                    if ((bVar20 & 1) != 0) break;
                    lVar12 = lVar12 + 8;
                    uVar13 = uVar13 + lVar12;
                  }
                }
                if (lVar21 != 0) {
                  _free(lVar14);
                }
LAB_100417aac:
              } while (plVar19 != plVar9);
            }
            *auVar30._0_8_ = 0x8000000000000000;
            return;
          }
        }
        *plVar19 = -0x8000000000000000;
        return;
      }
      _memcpy(uVar6,uVar23,uVar13);
      lVar11 = plVar19[3];
    }
    if (lVar11 != 0) {
      uVar23 = *(undefined8 *)(uVar17 - 0x10);
      uVar17 = *(ulong *)(uVar17 - 8);
      uVar7 = FUN_100e8e738(plVar19[4],plVar19[5],uVar23,uVar17);
      lVar11 = 0;
      lVar21 = *plVar19;
      uVar2 = plVar19[1];
      bVar8 = (byte)(uVar7 >> 0x39);
      uVar7 = uVar7 & uVar2;
      uVar22 = *(undefined8 *)(lVar21 + uVar7);
      uVar15 = CONCAT17(-((byte)((ulong)uVar22 >> 0x38) == bVar8),
                        CONCAT16(-((byte)((ulong)uVar22 >> 0x30) == bVar8),
                                 CONCAT15(-((byte)((ulong)uVar22 >> 0x28) == bVar8),
                                          CONCAT14(-((byte)((ulong)uVar22 >> 0x20) == bVar8),
                                                   CONCAT13(-((byte)((ulong)uVar22 >> 0x18) == bVar8
                                                             ),CONCAT12(-((byte)((ulong)uVar22 >>
                                                                                0x10) == bVar8),
                                                                        CONCAT11(-((byte)((ulong)
                                                  uVar22 >> 8) == bVar8),-((byte)uVar22 == bVar8))))
                                                  )))) & 0x8080808080808080;
      while( true ) {
        for (; uVar15 != 0; uVar15 = uVar15 - 1 & uVar15) {
          uVar3 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
          lVar14 = lVar21 + (uVar7 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar2) *
                            -0x20;
          if ((uVar17 == *(ulong *)(lVar14 + -0x18)) &&
             (iVar5 = _memcmp(uVar23,*(undefined8 *)(lVar14 + -0x20),uVar17), iVar5 == 0)) {
            uVar23 = *(undefined8 *)(lVar14 + -0x10);
            uVar15 = *(ulong *)(lVar14 + -8);
            if (uVar15 == 0) {
              uVar17 = 1;
            }
            else {
              uVar17 = _malloc(uVar15);
              if (uVar17 == 0) {
                FUN_107c03c64(1,uVar15);
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100417834);
                (*pcVar4)();
              }
            }
            _memcpy(uVar17,uVar23,uVar15);
            goto LAB_100417848;
          }
        }
        bVar20 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar22 >> 0x38) == -1),
                                     CONCAT16(-((char)((ulong)uVar22 >> 0x30) == -1),
                                              CONCAT15(-((char)((ulong)uVar22 >> 0x28) == -1),
                                                       CONCAT14(-((char)((ulong)uVar22 >> 0x20) ==
                                                                 -1),CONCAT13(-((char)((ulong)uVar22
                                                                                      >> 0x18) == -1
                                                                               ),CONCAT12(-((char)((
                                                  ulong)uVar22 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar22 >> 8) == -1),
                                                           -((char)uVar22 == -1)))))))),1);
        if ((bVar20 & 1) != 0) break;
        lVar11 = lVar11 + 8;
        uVar7 = uVar7 + lVar11 & uVar2;
        uVar22 = *(undefined8 *)(lVar21 + uVar7);
        uVar15 = CONCAT17(-((byte)((ulong)uVar22 >> 0x38) == bVar8),
                          CONCAT16(-((byte)((ulong)uVar22 >> 0x30) == bVar8),
                                   CONCAT15(-((byte)((ulong)uVar22 >> 0x28) == bVar8),
                                            CONCAT14(-((byte)((ulong)uVar22 >> 0x20) == bVar8),
                                                     CONCAT13(-((byte)((ulong)uVar22 >> 0x18) ==
                                                               bVar8),CONCAT12(-((byte)((ulong)
                                                  uVar22 >> 0x10) == bVar8),
                                                  CONCAT11(-((byte)((ulong)uVar22 >> 8) == bVar8),
                                                           -((byte)uVar22 == bVar8)))))))) &
                 0x8080808080808080;
      }
    }
    uVar15 = 0x8000000000000000;
LAB_100417848:
    *param_1 = uVar13;
    param_1[1] = uVar6;
    param_1[2] = uVar13;
    param_1[3] = uVar15;
    param_1[4] = uVar17;
    param_1[5] = uVar15;
    *(undefined1 *)(param_1 + 6) = 0;
  }
  return;
}

