
ulong FUN_10891fe78(long *param_1,ulong param_2,undefined8 *param_3,int param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  byte bVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined *puVar11;
  long *plVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong *puVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  ulong *puVar20;
  ulong *unaff_x25;
  ulong unaff_x26;
  ulong uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  undefined1 auVar28 [16];
  ulong uStack_150;
  long *plStack_148;
  ulong uStack_140;
  long *plStack_110;
  ulong uStack_108;
  long lStack_100;
  ulong uStack_88;
  long lStack_80;
  ulong uStack_78;
  int aiStack_38 [2];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar1 = (undefined *)((long)param_3 + param_2);
  if (CARRY8((ulong)param_3,param_2)) {
    func_0x0001087c9084(0);
  }
  else {
    param_3 = (undefined8 *)param_1[1];
    if (puVar1 <= (undefined *)(*param_1 * 2)) {
      puVar1 = (undefined *)(*param_1 * 2);
    }
    puVar11 = (undefined *)0x8;
    if (param_5 != 1) {
      puVar11 = (undefined *)0x4;
    }
    if (puVar1 <= puVar11) {
      puVar1 = puVar11;
    }
    puVar11 = puVar1;
    uVar7 = func_0x00010891fd30(aiStack_38);
    param_4 = (int)puVar11;
    if (aiStack_38[0] != 1) {
      *param_1 = (long)puVar1;
      param_1[1] = lStack_30;
      return uVar7;
    }
  }
  auVar28 = func_0x0001087c9084(lStack_30,uStack_28);
  uVar21 = auVar28._8_8_;
  uVar7 = auVar28._0_8_;
  if ((uVar21 & 1) == 0) {
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(&uStack_88);
  }
  else {
    uVar18 = uVar21 >> 1;
    if (uVar21 < 2) {
      lVar19 = 1;
    }
    else {
      lVar19 = _malloc(uVar18);
      if (lVar19 == 0) {
        auVar28 = func_0x0001087c9084(1,uVar18);
        plVar8 = auVar28._0_8_;
        uVar18 = plVar8[3];
        uVar21 = uVar18 + auVar28._8_8_;
        if (CARRY8(uVar18,auVar28._8_8_)) {
          if (param_4 == 0) {
            return 0;
          }
          param_3 = (undefined8 *)&UNK_10b3ad9c8;
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109a75098,0x39);
        }
        else {
          unaff_x26 = plVar8[1];
          uVar7 = unaff_x26 + 1;
          uVar15 = uVar7 >> 3;
          uStack_150 = unaff_x26;
          if (7 < unaff_x26) {
            uStack_150 = uVar15 * 7;
          }
          if (uStack_150 >> 1 < uVar21) {
            if (uVar21 < uStack_150 + 1) {
              uVar21 = uStack_150 + 1;
            }
            func_0x000102c58734(&plStack_110,0x268,uVar21);
            if (plStack_110 != (long *)0x0) {
              plVar12 = (long *)*plVar8;
              if (uVar18 != 0) {
                lVar19 = 0;
                lVar22 = *plVar12;
                uVar7 = CONCAT17(-(-1 < lVar22),
                                 CONCAT16(-(-1 < (char)((ulong)lVar22 >> 0x30)),
                                          CONCAT15(-(-1 < (char)((ulong)lVar22 >> 0x28)),
                                                   CONCAT14(-(-1 < (char)((ulong)lVar22 >> 0x20)),
                                                            CONCAT13(-(-1 < (char)((ulong)lVar22 >>
                                                                                  0x18)),
                                                                     CONCAT12(-(-1 < (char)((ulong)
                                                  lVar22 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar22 >> 8)),
                                                           -(-1 < (char)lVar22)))))))) &
                        0x8080808080808080;
                uVar2 = *param_3;
                uVar3 = param_3[1];
                plVar6 = plVar12;
                uVar21 = uVar18;
                do {
                  while (uVar7 == 0) {
                    lVar22 = plVar6[1];
                    lVar19 = lVar19 + 8;
                    plVar6 = plVar6 + 1;
                    uVar7 = CONCAT17(-(-1 < lVar22),
                                     CONCAT16(-(-1 < (char)((ulong)lVar22 >> 0x30)),
                                              CONCAT15(-(-1 < (char)((ulong)lVar22 >> 0x28)),
                                                       CONCAT14(-(-1 < (char)((ulong)lVar22 >> 0x20)
                                                                 ),CONCAT13(-(-1 < (char)((ulong)
                                                  lVar22 >> 0x18)),
                                                  CONCAT12(-(-1 < (char)((ulong)lVar22 >> 0x10)),
                                                           CONCAT11(-(-1 < (char)((ulong)lVar22 >> 8
                                                                                 )),
                                                                    -(-1 < (char)lVar22)))))))) &
                            0x8080808080808080;
                  }
                  uVar15 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                           (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
                  uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10
                  ;
                  uVar15 = lVar19 + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3);
                  uVar9 = FUN_102c48024(uVar2,uVar3,plVar12[uVar15 * -0x4d + -0x4c],
                                        plVar12[uVar15 * -0x4d + -0x4b]);
                  uVar13 = uVar9 & uStack_108;
                  lVar22 = *(long *)((long)plStack_110 + uVar13);
                  uVar24 = CONCAT17(-(lVar22 < 0),
                                    CONCAT16(-((char)((ulong)lVar22 >> 0x30) < '\0'),
                                             CONCAT15(-((char)((ulong)lVar22 >> 0x28) < '\0'),
                                                      CONCAT14(-((char)((ulong)lVar22 >> 0x20) <
                                                                '\0'),CONCAT13(-((char)((ulong)
                                                  lVar22 >> 0x18) < '\0'),
                                                  CONCAT12(-((char)((ulong)lVar22 >> 0x10) < '\0'),
                                                           CONCAT11(-((char)((ulong)lVar22 >> 8) <
                                                                     '\0'),-((char)lVar22 < '\0'))))
                                                  ))));
                  if (uVar24 == 0) {
                    lVar22 = 8;
                    do {
                      uVar13 = uVar13 + lVar22 & uStack_108;
                      lVar23 = *(long *)((long)plStack_110 + uVar13);
                      uVar24 = CONCAT17(-(lVar23 < 0),
                                        CONCAT16(-((char)((ulong)lVar23 >> 0x30) < '\0'),
                                                 CONCAT15(-((char)((ulong)lVar23 >> 0x28) < '\0'),
                                                          CONCAT14(-((char)((ulong)lVar23 >> 0x20) <
                                                                    '\0'),CONCAT13(-((char)((ulong)
                                                  lVar23 >> 0x18) < '\0'),
                                                  CONCAT12(-((char)((ulong)lVar23 >> 0x10) < '\0'),
                                                           CONCAT11(-((char)((ulong)lVar23 >> 8) <
                                                                     '\0'),-((char)lVar23 < '\0'))))
                                                  ))));
                      lVar22 = lVar22 + 8;
                    } while (uVar24 == 0);
                  }
                  uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
                  uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
                  uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
                  uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10
                  ;
                  uVar13 = uVar13 + ((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3) &
                           uStack_108;
                  if (-1 < *(char *)((long)plStack_110 + uVar13)) {
                    lVar22 = *plStack_110;
                    uVar13 = CONCAT17(-(lVar22 < 0),
                                      CONCAT16(-((char)((ulong)lVar22 >> 0x30) < '\0'),
                                               CONCAT15(-((char)((ulong)lVar22 >> 0x28) < '\0'),
                                                        CONCAT14(-((char)((ulong)lVar22 >> 0x20) <
                                                                  '\0'),CONCAT13(-((char)((ulong)
                                                  lVar22 >> 0x18) < '\0'),
                                                  CONCAT12(-((char)((ulong)lVar22 >> 0x10) < '\0'),
                                                           CONCAT11(-((char)((ulong)lVar22 >> 8) <
                                                                     '\0'),-((char)lVar22 < '\0'))))
                                                  ))));
                    uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1
                    ;
                    uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2
                    ;
                    uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
                    uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar13 & 0xffff0000ffff) << 0x10;
                    uVar13 = (ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3;
                  }
                  uVar7 = uVar7 - 1 & uVar7;
                  uVar21 = uVar21 - 1;
                  bVar5 = (byte)(uVar9 >> 0x38);
                  *(byte *)((long)plStack_110 + uVar13) = bVar5 >> 1;
                  *(byte *)((long)plStack_110 + (uVar13 - 8 & uStack_108) + 8) = bVar5 >> 1;
                  _memcpy(plStack_110 + ~uVar13 * 0x4d,plVar12 + ~uVar15 * 0x4d,0x268);
                } while (uVar21 != 0);
              }
              *plVar8 = (long)plStack_110;
              plVar8[1] = uStack_108;
              plVar8[2] = lStack_100 - uVar18;
              if ((unaff_x26 != 0) && (lVar19 = unaff_x26 * 0x268 + 0x268, unaff_x26 + lVar19 != -9)
                 ) {
                _free((long)plVar12 - lVar19);
              }
              return 0x8000000000000001;
            }
            return uStack_108;
          }
          plStack_148 = plVar8;
          uStack_140 = uVar18;
          if (uVar7 == 0) {
            uStack_150 = 0;
LAB_108920504:
            plStack_148[2] = uStack_150 - uStack_140;
            return 0x8000000000000001;
          }
          unaff_x25 = (ulong *)*plVar8;
          puVar16 = unaff_x25;
          if ((uVar7 & 7) != 0) {
            uVar15 = uVar15 + 1;
          }
          do {
            uVar21 = *puVar16;
            *puVar16 = CONCAT17(-((long)uVar21 < 0),
                                CONCAT16(-((char)(uVar21 >> 0x30) < '\0'),
                                         CONCAT15(-((char)(uVar21 >> 0x28) < '\0'),
                                                  CONCAT14(-((char)(uVar21 >> 0x20) < '\0'),
                                                           CONCAT13(-((char)(uVar21 >> 0x18) < '\0')
                                                                    ,CONCAT12(-((char)(uVar21 >>
                                                                                      0x10) < '\0'),
                                                                              CONCAT11(-((char)(
                                                  uVar21 >> 8) < '\0'),-((char)uVar21 < '\0'))))))))
                       | 0x8080808080808080;
            uVar15 = uVar15 - 1;
            puVar16 = puVar16 + 1;
          } while (uVar15 != 0);
          if (7 < uVar7) {
            *(ulong *)((long)unaff_x25 + uVar7) = *unaff_x25;
            goto LAB_108920194;
          }
        }
        _memmove(unaff_x25 + 1,unaff_x25,uVar7);
LAB_108920194:
        uVar21 = 0;
        uVar18 = 1;
        uVar2 = *param_3;
        uVar3 = param_3[1];
        puVar16 = unaff_x25;
        do {
          if (*(char *)((long)unaff_x25 + uVar21) == -0x80) {
            puVar20 = unaff_x25 + ~uVar21 * 0x4d;
            while( true ) {
              uVar9 = FUN_102c48024(uVar2,uVar3,unaff_x25[uVar21 * -0x4d + -0x4c],
                                    unaff_x25[uVar21 * -0x4d + -0x4b]);
              uVar13 = unaff_x26 & uVar9;
              lVar19 = *(long *)((long)unaff_x25 + uVar13);
              uVar24 = CONCAT17(-(lVar19 < 0),
                                CONCAT16(-((char)((ulong)lVar19 >> 0x30) < '\0'),
                                         CONCAT15(-((char)((ulong)lVar19 >> 0x28) < '\0'),
                                                  CONCAT14(-((char)((ulong)lVar19 >> 0x20) < '\0'),
                                                           CONCAT13(-((char)((ulong)lVar19 >> 0x18)
                                                                     < '\0'),CONCAT12(-((char)((
                                                  ulong)lVar19 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar19 >> 8) < '\0'),
                                                           -((char)lVar19 < '\0'))))))));
              uVar15 = uVar13;
              if (uVar24 == 0) {
                lVar19 = 8;
                do {
                  uVar15 = uVar15 + lVar19 & unaff_x26;
                  lVar22 = *(long *)((long)unaff_x25 + uVar15);
                  uVar24 = CONCAT17(-(lVar22 < 0),
                                    CONCAT16(-((char)((ulong)lVar22 >> 0x30) < '\0'),
                                             CONCAT15(-((char)((ulong)lVar22 >> 0x28) < '\0'),
                                                      CONCAT14(-((char)((ulong)lVar22 >> 0x20) <
                                                                '\0'),CONCAT13(-((char)((ulong)
                                                  lVar22 >> 0x18) < '\0'),
                                                  CONCAT12(-((char)((ulong)lVar22 >> 0x10) < '\0'),
                                                           CONCAT11(-((char)((ulong)lVar22 >> 8) <
                                                                     '\0'),-((char)lVar22 < '\0'))))
                                                  ))));
                  lVar19 = lVar19 + 8;
                } while (uVar24 == 0);
              }
              uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
              uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
              uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
              uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
              uVar15 = uVar15 + ((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3) & unaff_x26;
              bVar5 = (byte)(uVar9 >> 0x38);
              if (*(char *)((long)unaff_x25 + uVar15) < '\0') {
                uVar9 = uVar15 - uVar13 ^ uVar21 - uVar13;
              }
              else {
                uVar15 = *unaff_x25;
                uVar15 = CONCAT17(-((long)uVar15 < 0),
                                  CONCAT16(-((char)(uVar15 >> 0x30) < '\0'),
                                           CONCAT15(-((char)(uVar15 >> 0x28) < '\0'),
                                                    CONCAT14(-((char)(uVar15 >> 0x20) < '\0'),
                                                             CONCAT13(-((char)(uVar15 >> 0x18) <
                                                                       '\0'),CONCAT12(-((char)(
                                                  uVar15 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)(uVar15 >> 8) < '\0'),
                                                           -((char)uVar15 < '\0'))))))));
                uVar15 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
                uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
                uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
                uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
                uVar15 = (ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3;
                uVar9 = uVar15 - uVar13 ^ uVar21 - uVar13;
              }
              if ((uVar9 & unaff_x26) < 8) {
                *(byte *)((long)unaff_x25 + uVar21) = bVar5 >> 1;
                *(byte *)((long)unaff_x25 + (unaff_x26 & uVar21 - 8) + 8) = bVar5 >> 1;
                goto LAB_108920430;
              }
              puVar10 = unaff_x25 + ~uVar15 * 0x4d;
              cVar4 = *(char *)((long)unaff_x25 + uVar15);
              *(byte *)((long)unaff_x25 + uVar15) = bVar5 >> 1;
              *(byte *)((long)unaff_x25 + (uVar15 - 8 & unaff_x26) + 8) = bVar5 >> 1;
              if (cVar4 == -1) break;
              puVar14 = unaff_x25 + uVar15 * -0x4d;
              if (unaff_x25 + uVar21 * -0x4d + -0x4d < puVar14 &&
                  puVar10 < unaff_x25 + uVar21 * -0x4d) {
                lVar19 = 0;
              }
              else {
                uVar9 = puVar20[1];
                uVar15 = *puVar20;
                uVar24 = puVar20[3];
                uVar13 = puVar20[2];
                uVar25 = *puVar10;
                uVar27 = puVar10[3];
                uVar26 = puVar10[2];
                puVar20[1] = puVar10[1];
                *puVar20 = uVar25;
                puVar20[3] = uVar27;
                puVar20[2] = uVar26;
                puVar10[1] = uVar9;
                *puVar10 = uVar15;
                puVar10[3] = uVar24;
                puVar10[2] = uVar13;
                uVar9 = puVar20[5];
                uVar15 = puVar20[4];
                uVar24 = puVar20[7];
                uVar13 = puVar20[6];
                uVar25 = puVar10[4];
                uVar27 = puVar10[7];
                uVar26 = puVar10[6];
                puVar20[5] = puVar10[5];
                puVar20[4] = uVar25;
                puVar20[7] = uVar27;
                puVar20[6] = uVar26;
                puVar10[5] = uVar9;
                puVar10[4] = uVar15;
                puVar10[7] = uVar24;
                puVar10[6] = uVar13;
                uVar9 = puVar20[9];
                uVar15 = puVar20[8];
                uVar24 = puVar20[0xb];
                uVar13 = puVar20[10];
                uVar25 = puVar10[8];
                uVar27 = puVar10[0xb];
                uVar26 = puVar10[10];
                puVar20[9] = puVar10[9];
                puVar20[8] = uVar25;
                puVar20[0xb] = uVar27;
                puVar20[10] = uVar26;
                puVar10[9] = uVar9;
                puVar10[8] = uVar15;
                puVar10[0xb] = uVar24;
                puVar10[10] = uVar13;
                uVar9 = puVar20[0xd];
                uVar15 = puVar20[0xc];
                uVar24 = puVar20[0xf];
                uVar13 = puVar20[0xe];
                uVar25 = puVar10[0xc];
                uVar27 = puVar10[0xf];
                uVar26 = puVar10[0xe];
                puVar20[0xd] = puVar10[0xd];
                puVar20[0xc] = uVar25;
                puVar20[0xf] = uVar27;
                puVar20[0xe] = uVar26;
                puVar10[0xd] = uVar9;
                puVar10[0xc] = uVar15;
                puVar10[0xf] = uVar24;
                puVar10[0xe] = uVar13;
                uVar9 = puVar20[0x11];
                uVar15 = puVar20[0x10];
                uVar24 = puVar20[0x13];
                uVar13 = puVar20[0x12];
                uVar25 = puVar10[0x10];
                uVar27 = puVar10[0x13];
                uVar26 = puVar10[0x12];
                puVar20[0x11] = puVar10[0x11];
                puVar20[0x10] = uVar25;
                puVar20[0x13] = uVar27;
                puVar20[0x12] = uVar26;
                puVar10[0x11] = uVar9;
                puVar10[0x10] = uVar15;
                puVar10[0x13] = uVar24;
                puVar10[0x12] = uVar13;
                uVar9 = puVar20[0x15];
                uVar15 = puVar20[0x14];
                uVar24 = puVar20[0x17];
                uVar13 = puVar20[0x16];
                uVar25 = puVar10[0x14];
                uVar27 = puVar10[0x17];
                uVar26 = puVar10[0x16];
                puVar20[0x15] = puVar10[0x15];
                puVar20[0x14] = uVar25;
                puVar20[0x17] = uVar27;
                puVar20[0x16] = uVar26;
                puVar10[0x15] = uVar9;
                puVar10[0x14] = uVar15;
                puVar10[0x17] = uVar24;
                puVar10[0x16] = uVar13;
                uVar9 = puVar20[0x19];
                uVar15 = puVar20[0x18];
                uVar24 = puVar20[0x1b];
                uVar13 = puVar20[0x1a];
                uVar25 = puVar10[0x18];
                uVar27 = puVar10[0x1b];
                uVar26 = puVar10[0x1a];
                puVar20[0x19] = puVar10[0x19];
                puVar20[0x18] = uVar25;
                puVar20[0x1b] = uVar27;
                puVar20[0x1a] = uVar26;
                puVar10[0x19] = uVar9;
                puVar10[0x18] = uVar15;
                puVar10[0x1b] = uVar24;
                puVar10[0x1a] = uVar13;
                uVar9 = puVar20[0x1d];
                uVar15 = puVar20[0x1c];
                uVar24 = puVar20[0x1f];
                uVar13 = puVar20[0x1e];
                uVar25 = puVar10[0x1c];
                uVar27 = puVar10[0x1f];
                uVar26 = puVar10[0x1e];
                puVar20[0x1d] = puVar10[0x1d];
                puVar20[0x1c] = uVar25;
                puVar20[0x1f] = uVar27;
                puVar20[0x1e] = uVar26;
                puVar10[0x1d] = uVar9;
                puVar10[0x1c] = uVar15;
                puVar10[0x1f] = uVar24;
                puVar10[0x1e] = uVar13;
                uVar9 = puVar20[0x21];
                uVar15 = puVar20[0x20];
                uVar24 = puVar20[0x23];
                uVar13 = puVar20[0x22];
                uVar25 = puVar10[0x20];
                uVar27 = puVar10[0x23];
                uVar26 = puVar10[0x22];
                puVar20[0x21] = puVar10[0x21];
                puVar20[0x20] = uVar25;
                puVar20[0x23] = uVar27;
                puVar20[0x22] = uVar26;
                puVar10[0x21] = uVar9;
                puVar10[0x20] = uVar15;
                puVar10[0x23] = uVar24;
                puVar10[0x22] = uVar13;
                uVar9 = puVar20[0x25];
                uVar15 = puVar20[0x24];
                uVar24 = puVar20[0x27];
                uVar13 = puVar20[0x26];
                uVar25 = puVar10[0x24];
                uVar27 = puVar10[0x27];
                uVar26 = puVar10[0x26];
                puVar20[0x25] = puVar10[0x25];
                puVar20[0x24] = uVar25;
                puVar20[0x27] = uVar27;
                puVar20[0x26] = uVar26;
                puVar10[0x25] = uVar9;
                puVar10[0x24] = uVar15;
                puVar10[0x27] = uVar24;
                puVar10[0x26] = uVar13;
                uVar9 = puVar20[0x29];
                uVar15 = puVar20[0x28];
                uVar24 = puVar20[0x2b];
                uVar13 = puVar20[0x2a];
                uVar25 = puVar10[0x28];
                uVar27 = puVar10[0x2b];
                uVar26 = puVar10[0x2a];
                puVar20[0x29] = puVar10[0x29];
                puVar20[0x28] = uVar25;
                puVar20[0x2b] = uVar27;
                puVar20[0x2a] = uVar26;
                puVar10[0x29] = uVar9;
                puVar10[0x28] = uVar15;
                puVar10[0x2b] = uVar24;
                puVar10[0x2a] = uVar13;
                uVar9 = puVar20[0x2d];
                uVar15 = puVar20[0x2c];
                uVar24 = puVar20[0x2f];
                uVar13 = puVar20[0x2e];
                uVar25 = puVar10[0x2c];
                uVar27 = puVar10[0x2f];
                uVar26 = puVar10[0x2e];
                puVar20[0x2d] = puVar10[0x2d];
                puVar20[0x2c] = uVar25;
                puVar20[0x2f] = uVar27;
                puVar20[0x2e] = uVar26;
                puVar10[0x2d] = uVar9;
                puVar10[0x2c] = uVar15;
                puVar10[0x2f] = uVar24;
                puVar10[0x2e] = uVar13;
                uVar9 = puVar20[0x31];
                uVar15 = puVar20[0x30];
                uVar24 = puVar20[0x33];
                uVar13 = puVar20[0x32];
                uVar25 = puVar10[0x30];
                uVar27 = puVar10[0x33];
                uVar26 = puVar10[0x32];
                puVar20[0x31] = puVar10[0x31];
                puVar20[0x30] = uVar25;
                puVar20[0x33] = uVar27;
                puVar20[0x32] = uVar26;
                puVar10[0x31] = uVar9;
                puVar10[0x30] = uVar15;
                puVar10[0x33] = uVar24;
                puVar10[0x32] = uVar13;
                uVar9 = puVar20[0x35];
                uVar15 = puVar20[0x34];
                uVar24 = puVar20[0x37];
                uVar13 = puVar20[0x36];
                uVar25 = puVar10[0x34];
                uVar27 = puVar10[0x37];
                uVar26 = puVar10[0x36];
                puVar20[0x35] = puVar10[0x35];
                puVar20[0x34] = uVar25;
                puVar20[0x37] = uVar27;
                puVar20[0x36] = uVar26;
                puVar10[0x35] = uVar9;
                puVar10[0x34] = uVar15;
                puVar10[0x37] = uVar24;
                puVar10[0x36] = uVar13;
                uVar9 = puVar20[0x39];
                uVar15 = puVar20[0x38];
                uVar24 = puVar20[0x3b];
                uVar13 = puVar20[0x3a];
                uVar25 = puVar10[0x38];
                uVar27 = puVar10[0x3b];
                uVar26 = puVar10[0x3a];
                puVar20[0x39] = puVar10[0x39];
                puVar20[0x38] = uVar25;
                puVar20[0x3b] = uVar27;
                puVar20[0x3a] = uVar26;
                puVar10[0x39] = uVar9;
                puVar10[0x38] = uVar15;
                puVar10[0x3b] = uVar24;
                puVar10[0x3a] = uVar13;
                uVar9 = puVar20[0x3d];
                uVar15 = puVar20[0x3c];
                uVar24 = puVar20[0x3f];
                uVar13 = puVar20[0x3e];
                uVar25 = puVar10[0x3c];
                uVar27 = puVar10[0x3f];
                uVar26 = puVar10[0x3e];
                puVar20[0x3d] = puVar10[0x3d];
                puVar20[0x3c] = uVar25;
                puVar20[0x3f] = uVar27;
                puVar20[0x3e] = uVar26;
                puVar10[0x3d] = uVar9;
                puVar10[0x3c] = uVar15;
                puVar10[0x3f] = uVar24;
                puVar10[0x3e] = uVar13;
                uVar9 = puVar20[0x41];
                uVar15 = puVar20[0x40];
                uVar24 = puVar20[0x43];
                uVar13 = puVar20[0x42];
                uVar25 = puVar10[0x40];
                uVar27 = puVar10[0x43];
                uVar26 = puVar10[0x42];
                puVar20[0x41] = puVar10[0x41];
                puVar20[0x40] = uVar25;
                puVar20[0x43] = uVar27;
                puVar20[0x42] = uVar26;
                puVar10[0x41] = uVar9;
                puVar10[0x40] = uVar15;
                puVar10[0x43] = uVar24;
                puVar10[0x42] = uVar13;
                uVar9 = puVar20[0x45];
                uVar15 = puVar20[0x44];
                uVar24 = puVar20[0x47];
                uVar13 = puVar20[0x46];
                uVar25 = puVar10[0x44];
                uVar27 = puVar10[0x47];
                uVar26 = puVar10[0x46];
                puVar20[0x45] = puVar10[0x45];
                puVar20[0x44] = uVar25;
                puVar20[0x47] = uVar27;
                puVar20[0x46] = uVar26;
                puVar10[0x45] = uVar9;
                puVar10[0x44] = uVar15;
                puVar10[0x47] = uVar24;
                puVar10[0x46] = uVar13;
                uVar15 = puVar20[0x48];
                uVar13 = puVar20[0x4b];
                uVar9 = puVar20[0x4a];
                uVar25 = puVar10[0x49];
                uVar24 = puVar10[0x48];
                uVar27 = puVar10[0x4b];
                uVar26 = puVar10[0x4a];
                puVar10[0x49] = puVar20[0x49];
                puVar10[0x48] = uVar15;
                puVar10[0x4b] = uVar13;
                puVar10[0x4a] = uVar9;
                lVar19 = 0x4c;
                puVar20[0x49] = uVar25;
                puVar20[0x48] = uVar24;
                puVar20[0x4b] = uVar27;
                puVar20[0x4a] = uVar26;
              }
              lVar19 = lVar19 * 8 + -0x268;
              do {
                uVar17 = *(undefined8 *)((long)puVar16 + lVar19);
                *(undefined8 *)((long)puVar16 + lVar19) = *(undefined8 *)((long)puVar14 + lVar19);
                *(undefined8 *)((long)puVar14 + lVar19) = uVar17;
                lVar19 = lVar19 + 8;
              } while (lVar19 != 0);
            }
            *(undefined1 *)((long)unaff_x25 + uVar21) = 0xff;
            *(undefined1 *)((long)unaff_x25 + (unaff_x26 & uVar21 - 8) + 8) = 0xff;
            _memcpy(puVar10,puVar20,0x268);
          }
LAB_108920430:
          puVar16 = puVar16 + -0x4d;
          uVar21 = uVar21 + 1;
          if (uVar7 <= uVar18) goto LAB_108920504;
          uVar18 = uVar18 + 1;
        } while( true );
      }
    }
    _memcpy(lVar19,uVar7,uVar18);
    uStack_88 = uVar18;
    lStack_80 = lVar19;
    uStack_78 = uVar18;
  }
  uVar7 = __ZN10serde_json5error10make_error17h192c88b3464e8daaE(&uStack_88);
  return uVar7;
}

