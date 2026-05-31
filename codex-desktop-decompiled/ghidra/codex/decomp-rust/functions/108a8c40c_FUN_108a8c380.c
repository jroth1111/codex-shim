
undefined8 FUN_108a8c380(ulong *param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  char cVar1;
  byte bVar2;
  long *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  long *plVar12;
  ulong uVar13;
  ulong *puVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  ulong unaff_x20;
  ulong unaff_x22;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  undefined1 auVar25 [16];
  int aiStack_38 [2];
  ulong uStack_30;
  undefined8 uStack_28;
  
  uVar16 = param_3 + param_2;
  if (CARRY8(param_3,param_2)) {
    func_0x0001087c9084(0);
  }
  else {
    param_3 = param_1[1];
    if (uVar16 <= *param_1 * 2) {
      uVar16 = *param_1 * 2;
    }
    uVar19 = 8;
    if (param_5 != 1) {
      uVar19 = 4;
    }
    unaff_x20 = uVar16;
    if (uVar16 <= uVar19) {
      unaff_x20 = uVar19;
    }
    uVar16 = unaff_x20;
    param_5 = param_4;
    uVar6 = func_0x000108a8c238(aiStack_38);
    param_4 = uVar16;
    if (aiStack_38[0] != 1) {
      *param_1 = unaff_x20;
      param_1[1] = uStack_30;
      return uVar6;
    }
  }
  auVar25 = func_0x0001087c9084(uStack_30,uStack_28);
  plVar7 = auVar25._0_8_;
  uVar19 = plVar7[3];
  uVar16 = uVar19 + auVar25._8_8_;
  if (CARRY8(uVar19,auVar25._8_8_)) {
    if ((param_5 & 1) == 0) {
      return 0;
    }
  }
  else {
    uVar18 = plVar7[1];
    uVar10 = uVar18 + 1;
    uVar13 = uVar10 >> 3;
    uVar9 = uVar18;
    if (7 < uVar18) {
      uVar9 = uVar13 * 7;
    }
    if (uVar16 <= uVar9 >> 1) {
      puVar11 = (ulong *)*plVar7;
      if (uVar10 == 0) {
LAB_108a8c6d0:
        _memmove(puVar11 + 1);
      }
      else {
        puVar14 = puVar11;
        if ((uVar10 & 7) != 0) {
          uVar13 = uVar13 + 1;
        }
        do {
          uVar16 = *puVar14;
          *puVar14 = CONCAT17(-((long)uVar16 < 0),
                              CONCAT16(-((char)(uVar16 >> 0x30) < '\0'),
                                       CONCAT15(-((char)(uVar16 >> 0x28) < '\0'),
                                                CONCAT14(-((char)(uVar16 >> 0x20) < '\0'),
                                                         CONCAT13(-((char)(uVar16 >> 0x18) < '\0'),
                                                                  CONCAT12(-((char)(uVar16 >> 0x10)
                                                                            < '\0'),CONCAT11(-((char
                                                  )(uVar16 >> 8) < '\0'),-((char)uVar16 < '\0'))))))
                                      )) | 0x8080808080808080;
          uVar13 = uVar13 - 1;
          puVar14 = puVar14 + 1;
        } while (uVar13 != 0);
        if (uVar10 < 8) goto LAB_108a8c6d0;
        *(ulong *)((long)puVar11 + uVar10) = *puVar11;
      }
      lVar8 = plVar7[1];
      uVar16 = 0;
      if (lVar8 != -1) {
        uVar16 = 0;
        uVar19 = 1;
        do {
          plVar15 = (long *)*plVar7;
          if (*(char *)((long)plVar15 + uVar16) == -0x80) {
            uVar10 = plVar15[-1 - uVar16];
            if (param_4 <= uVar10) goto LAB_108a8c950;
            uVar13 = uVar16 * 8 ^ 0xfffffffffffffff8;
            plVar12 = plVar15;
            while( true ) {
              uVar9 = *(ulong *)(param_3 + uVar10 * 0x90 + 0x88);
              uVar20 = plVar7[1];
              uVar18 = uVar20 & uVar9;
              lVar21 = *(long *)((long)plVar12 + uVar18);
              uVar17 = CONCAT17(-(lVar21 < 0),
                                CONCAT16(-((char)((ulong)lVar21 >> 0x30) < '\0'),
                                         CONCAT15(-((char)((ulong)lVar21 >> 0x28) < '\0'),
                                                  CONCAT14(-((char)((ulong)lVar21 >> 0x20) < '\0'),
                                                           CONCAT13(-((char)((ulong)lVar21 >> 0x18)
                                                                     < '\0'),CONCAT12(-((char)((
                                                  ulong)lVar21 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar21 >> 8) < '\0'),
                                                           -((char)lVar21 < '\0'))))))));
              uVar10 = uVar18;
              if (uVar17 == 0) {
                lVar21 = 8;
                do {
                  uVar10 = uVar10 + lVar21 & uVar20;
                  lVar22 = *(long *)((long)plVar12 + uVar10);
                  uVar17 = CONCAT17(-(lVar22 < 0),
                                    CONCAT16(-((char)((ulong)lVar22 >> 0x30) < '\0'),
                                             CONCAT15(-((char)((ulong)lVar22 >> 0x28) < '\0'),
                                                      CONCAT14(-((char)((ulong)lVar22 >> 0x20) <
                                                                '\0'),CONCAT13(-((char)((ulong)
                                                  lVar22 >> 0x18) < '\0'),
                                                  CONCAT12(-((char)((ulong)lVar22 >> 0x10) < '\0'),
                                                           CONCAT11(-((char)((ulong)lVar22 >> 8) <
                                                                     '\0'),-((char)lVar22 < '\0'))))
                                                  ))));
                  lVar21 = lVar21 + 8;
                } while (uVar17 == 0);
              }
              uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
              uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
              uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
              uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
              uVar10 = uVar10 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) & uVar20;
              bVar2 = (byte)(uVar9 >> 0x38);
              if (*(char *)((long)plVar12 + uVar10) < '\0') {
                uVar9 = uVar10 - uVar18 ^ uVar16 - uVar18;
              }
              else {
                lVar21 = *plVar12;
                uVar10 = CONCAT17(-(lVar21 < 0),
                                  CONCAT16(-((char)((ulong)lVar21 >> 0x30) < '\0'),
                                           CONCAT15(-((char)((ulong)lVar21 >> 0x28) < '\0'),
                                                    CONCAT14(-((char)((ulong)lVar21 >> 0x20) < '\0')
                                                             ,CONCAT13(-((char)((ulong)lVar21 >>
                                                                               0x18) < '\0'),
                                                                       CONCAT12(-((char)((ulong)
                                                  lVar21 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar21 >> 8) < '\0'),
                                                           -((char)lVar21 < '\0'))))))));
                uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
                uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
                uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
                uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
                uVar10 = (ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3;
                uVar9 = uVar10 - uVar18 ^ uVar16 - uVar18;
              }
              if ((uVar9 & uVar20) < 8) {
                *(byte *)((long)plVar12 + uVar16) = bVar2 >> 1;
                *(byte *)(*plVar7 + (uVar20 & uVar16 - 8) + 8) = bVar2 >> 1;
                goto LAB_108a8c828;
              }
              uVar9 = ~uVar10;
              cVar1 = *(char *)((long)plVar12 + uVar10);
              *(byte *)((long)plVar12 + uVar10) = bVar2 >> 1;
              *(byte *)(*plVar7 + (uVar10 - 8 & uVar20) + 8) = bVar2 >> 1;
              if (cVar1 == -1) break;
              lVar21 = *(long *)((long)plVar15 + uVar13);
              *(long *)((long)plVar15 + uVar13) = plVar12[uVar9];
              plVar12[uVar9] = lVar21;
              plVar12 = (long *)*plVar7;
              uVar10 = plVar12[-1 - uVar16];
              if (param_4 <= uVar10) goto LAB_108a8c950;
            }
            uVar10 = plVar7[1];
            *(undefined1 *)(*plVar7 + uVar16) = 0xff;
            *(undefined1 *)(*plVar7 + (uVar10 & uVar16 - 8) + 8) = 0xff;
            plVar12[uVar9] = *(long *)((long)plVar15 + uVar13);
          }
LAB_108a8c828:
          if (lVar8 + 1U <= uVar19) goto LAB_108a8c898;
          uVar16 = uVar19;
          uVar19 = uVar19 + 1;
        } while( true );
      }
LAB_108a8c8b4:
      plVar7[2] = uVar16 - plVar7[3];
      return 0x8000000000000001;
    }
    if (uVar16 < uVar9 + 1) {
      uVar16 = uVar9 + 1;
    }
    if (uVar16 < 0xf) {
      uVar10 = 4;
      if (3 < uVar16) {
        uVar10 = (uVar16 & 8) + 8;
      }
      uVar13 = uVar10 * 8;
      uVar16 = uVar10 + 8;
      bVar5 = CARRY8(uVar16,uVar13);
      unaff_x22 = uVar16 + uVar13;
joined_r0x000108a8c540:
      if ((!bVar5) && (unaff_x22 < 0x7ffffffffffffff9)) {
        lVar8 = _malloc(unaff_x22);
        if (lVar8 != 0) {
          uVar20 = uVar10 - 1;
          uVar9 = uVar20;
          if (7 < uVar20) {
            uVar9 = (uVar10 >> 3) * 7;
          }
          plVar15 = (long *)(lVar8 + uVar13);
          _memset(plVar15,0xff,uVar16);
          plVar12 = (long *)*plVar7;
          if (uVar19 != 0) {
            lVar8 = 0;
            lVar21 = *plVar12;
            uVar16 = CONCAT17(-(-1 < lVar21),
                              CONCAT16(-(-1 < (char)((ulong)lVar21 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar21 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar21 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar21 >>
                                                                               0x18)),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar21 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar21 >> 8)),
                                                           -(-1 < (char)lVar21)))))))) &
                     0x8080808080808080;
            plVar3 = plVar12;
            uVar10 = uVar19;
            do {
              while (uVar16 == 0) {
                lVar21 = plVar3[1];
                lVar8 = lVar8 + 8;
                plVar3 = plVar3 + 1;
                uVar16 = CONCAT17(-(-1 < lVar21),
                                  CONCAT16(-(-1 < (char)((ulong)lVar21 >> 0x30)),
                                           CONCAT15(-(-1 < (char)((ulong)lVar21 >> 0x28)),
                                                    CONCAT14(-(-1 < (char)((ulong)lVar21 >> 0x20)),
                                                             CONCAT13(-(-1 < (char)((ulong)lVar21 >>
                                                                                   0x18)),
                                                                      CONCAT12(-(-1 < (char)((ulong)
                                                  lVar21 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar21 >> 8)),
                                                           -(-1 < (char)lVar21)))))))) &
                         0x8080808080808080;
              }
              uVar13 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                       (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
              uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
              lVar21 = lVar8 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3);
              uVar13 = plVar12[-1 - lVar21];
              if (param_4 <= uVar13) {
                func_0x000108a07bdc(uVar13,param_4,&UNK_10b4cf820);
                goto LAB_108a8c974;
              }
              uVar17 = *(ulong *)(param_3 + uVar13 * 0x90 + 0x88);
              uVar13 = uVar17 & uVar20;
              lVar22 = *(long *)((long)plVar15 + uVar13);
              uVar23 = CONCAT17(-(lVar22 < 0),
                                CONCAT16(-((char)((ulong)lVar22 >> 0x30) < '\0'),
                                         CONCAT15(-((char)((ulong)lVar22 >> 0x28) < '\0'),
                                                  CONCAT14(-((char)((ulong)lVar22 >> 0x20) < '\0'),
                                                           CONCAT13(-((char)((ulong)lVar22 >> 0x18)
                                                                     < '\0'),CONCAT12(-((char)((
                                                  ulong)lVar22 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar22 >> 8) < '\0'),
                                                           -((char)lVar22 < '\0'))))))));
              if (uVar23 == 0) {
                lVar22 = 8;
                do {
                  uVar13 = uVar13 + lVar22 & uVar20;
                  lVar24 = *(long *)((long)plVar15 + uVar13);
                  uVar23 = CONCAT17(-(lVar24 < 0),
                                    CONCAT16(-((char)((ulong)lVar24 >> 0x30) < '\0'),
                                             CONCAT15(-((char)((ulong)lVar24 >> 0x28) < '\0'),
                                                      CONCAT14(-((char)((ulong)lVar24 >> 0x20) <
                                                                '\0'),CONCAT13(-((char)((ulong)
                                                  lVar24 >> 0x18) < '\0'),
                                                  CONCAT12(-((char)((ulong)lVar24 >> 0x10) < '\0'),
                                                           CONCAT11(-((char)((ulong)lVar24 >> 8) <
                                                                     '\0'),-((char)lVar24 < '\0'))))
                                                  ))));
                  lVar22 = lVar22 + 8;
                } while (uVar23 == 0);
              }
              uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
              uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
              uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
              uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
              uVar13 = uVar13 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3) & uVar20;
              if (-1 < *(char *)((long)plVar15 + uVar13)) {
                lVar22 = *plVar15;
                uVar13 = CONCAT17(-(lVar22 < 0),
                                  CONCAT16(-((char)((ulong)lVar22 >> 0x30) < '\0'),
                                           CONCAT15(-((char)((ulong)lVar22 >> 0x28) < '\0'),
                                                    CONCAT14(-((char)((ulong)lVar22 >> 0x20) < '\0')
                                                             ,CONCAT13(-((char)((ulong)lVar22 >>
                                                                               0x18) < '\0'),
                                                                       CONCAT12(-((char)((ulong)
                                                  lVar22 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar22 >> 8) < '\0'),
                                                           -((char)lVar22 < '\0'))))))));
                uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
                uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
                uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
                uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
                uVar13 = (ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3;
              }
              bVar2 = (byte)(uVar17 >> 0x38);
              *(byte *)((long)plVar15 + uVar13) = bVar2 >> 1;
              *(byte *)((long)plVar15 + (uVar13 - 8 & uVar20) + 8) = bVar2 >> 1;
              uVar16 = uVar16 - 1 & uVar16;
              plVar15[-1 - uVar13] = plVar12[-1 - lVar21];
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          *plVar7 = (long)plVar15;
          plVar7[1] = uVar20;
          plVar7[2] = uVar9 - uVar19;
          if ((uVar18 != 0) && (lVar8 = uVar18 * 8 + 8, uVar18 + lVar8 != -9)) {
            _free((long)plVar12 - lVar8);
          }
          return 0x8000000000000001;
        }
        if ((int)param_5 == 0) {
          return 8;
        }
        goto LAB_108a8c944;
      }
    }
    else if ((uVar16 >> 0x3d == 0) &&
            (uVar16 = 0xffffffffffffffff >> (LZCOUNT((uVar16 * 8) / 7 - 1) & 0x3fU),
            uVar16 < 0x1fffffffffffffff)) {
      uVar10 = uVar16 + 1;
      uVar13 = uVar10 * 8;
      uVar16 = uVar16 + 9;
      bVar5 = CARRY8(uVar16,uVar13);
      unaff_x22 = uVar16 + uVar13;
      goto joined_r0x000108a8c540;
    }
    unaff_x20 = param_4;
    if ((int)param_5 == 0) {
      return 0;
    }
  }
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109becd6f,0x39,&UNK_10b4cf850);
  param_4 = unaff_x20;
LAB_108a8c944:
  uVar10 = func_0x0001087c906c(8,unaff_x22);
LAB_108a8c950:
  func_0x000108a07bdc(uVar10,param_4,&UNK_10b4cf820);
LAB_108a8c974:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x108a8c978);
  (*pcVar4)();
LAB_108a8c898:
  uVar16 = plVar7[1];
  if (7 < uVar16) {
    uVar16 = (uVar16 + 1 >> 3) * 7;
  }
  goto LAB_108a8c8b4;
}

