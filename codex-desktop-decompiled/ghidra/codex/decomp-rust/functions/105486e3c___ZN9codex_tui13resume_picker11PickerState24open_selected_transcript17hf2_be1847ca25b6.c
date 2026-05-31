
void __ZN9codex_tui13resume_picker11PickerState24open_selected_transcript17hf2278971458375a1E
               (long param_1)

{
  ulong *puVar1;
  long *plVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte extraout_w8;
  long lVar6;
  long lVar7;
  ulong uVar8;
  byte bVar9;
  ulong extraout_x11;
  ulong uVar10;
  ulong extraout_x11_00;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  ulong in_xzr;
  long lVar17;
  long lVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  undefined8 uVar22;
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  
  if (*(ulong *)(param_1 + 0x240) <= *(ulong *)(param_1 + 0x578)) {
    return;
  }
  lVar13 = *(long *)(param_1 + 0x238) + *(ulong *)(param_1 + 0x578) * 0xa8;
  if ((*(byte *)(lVar13 + 0x90) & 1) != 0) {
    plVar14 = (long *)(lVar13 + 0x91);
    unaff_x23 = *plVar14;
    unaff_x24 = *(long *)(lVar13 + 0x99);
    uVar15 = *(undefined8 *)(param_1 + 0x568);
    uVar16 = *(undefined8 *)(param_1 + 0x570);
    if (*(long *)(param_1 + 0x560) != 0) {
      uVar4 = FUN_1051bc3f8(uVar15,uVar16,plVar14);
      lVar6 = 0;
      uVar8 = *(ulong *)(param_1 + 0x550);
      lVar7 = *(long *)(param_1 + 0x548);
      bVar9 = (byte)(uVar4 >> 0x39);
      uVar4 = uVar4 & uVar8;
      uVar22 = *(undefined8 *)(lVar7 + uVar4);
      uVar10 = CONCAT17(-((byte)((ulong)uVar22 >> 0x38) == bVar9),
                        CONCAT16(-((byte)((ulong)uVar22 >> 0x30) == bVar9),
                                 CONCAT15(-((byte)((ulong)uVar22 >> 0x28) == bVar9),
                                          CONCAT14(-((byte)((ulong)uVar22 >> 0x20) == bVar9),
                                                   CONCAT13(-((byte)((ulong)uVar22 >> 0x18) == bVar9
                                                             ),CONCAT12(-((byte)((ulong)uVar22 >>
                                                                                0x10) == bVar9),
                                                                        CONCAT11(-((byte)((ulong)
                                                  uVar22 >> 8) == bVar9),-((byte)uVar22 == bVar9))))
                                                  )))) & 0x8080808080808080;
      while( true ) {
        while (uVar10 == 0) {
          bVar19 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar22 >> 0x38) == -1),
                                       CONCAT16(-((char)((ulong)uVar22 >> 0x30) == -1),
                                                CONCAT15(-((char)((ulong)uVar22 >> 0x28) == -1),
                                                         CONCAT14(-((char)((ulong)uVar22 >> 0x20) ==
                                                                   -1),CONCAT13(-((char)((ulong)
                                                  uVar22 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar22 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar22 >> 8) ==
                                                                     -1),-((char)uVar22 == -1)))))))
                                      ),1);
          if ((bVar19 & 1) != 0) goto LAB_105486b18;
          lVar6 = lVar6 + 8;
          uVar4 = uVar4 + lVar6 & uVar8;
          uVar22 = *(undefined8 *)(lVar7 + uVar4);
          uVar10 = CONCAT17(-((byte)((ulong)uVar22 >> 0x38) == bVar9),
                            CONCAT16(-((byte)((ulong)uVar22 >> 0x30) == bVar9),
                                     CONCAT15(-((byte)((ulong)uVar22 >> 0x28) == bVar9),
                                              CONCAT14(-((byte)((ulong)uVar22 >> 0x20) == bVar9),
                                                       CONCAT13(-((byte)((ulong)uVar22 >> 0x18) ==
                                                                 bVar9),CONCAT12(-((byte)((ulong)
                                                  uVar22 >> 0x10) == bVar9),
                                                  CONCAT11(-((byte)((ulong)uVar22 >> 8) == bVar9),
                                                           -((byte)uVar22 == bVar9)))))))) &
                   0x8080808080808080;
        }
        uVar11 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = uVar4 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3) & uVar8;
        plVar2 = (long *)(lVar7 + -0x28 + uVar11 * -0x28);
        if (unaff_x24 == plVar2[1] && unaff_x23 == *plVar2) break;
        uVar10 = uVar10 - 1 & uVar10;
      }
      uVar4 = *(ulong *)(lVar7 + uVar11 * -0x28 + -0x18);
      uVar10 = uVar4 ^ 0x8000000000000000;
      if (-1 < (long)uVar4) {
        uVar10 = 1;
      }
      if (uVar10 == 0) {
        *(undefined1 *)(param_1 + 0x5c1) = 1;
        lVar6 = *plVar14;
        *(undefined8 *)(param_1 + 0x5ca) = *(undefined8 *)(lVar13 + 0x99);
        *(long *)(param_1 + 0x5c2) = lVar6;
        *(undefined1 *)(param_1 + 0x5d2) = 0;
        auVar30 = func_0x000106032954(8);
        lVar13 = *(long *)(param_1 + 0x4d0);
        uVar10 = *(ulong *)(lVar13 + 0x1c0);
        goto LAB_105486dc0;
      }
      if (uVar10 == 1) {
        *(undefined1 *)(param_1 + 0x5c1) = 1;
        lVar6 = *plVar14;
        *(undefined8 *)(param_1 + 0x5ca) = *(undefined8 *)(lVar13 + 0x99);
        *(long *)(param_1 + 0x5c2) = lVar6;
        *(undefined1 *)(param_1 + 0x5d2) = 0;
        auVar30 = func_0x000106032954(8);
        lVar13 = *(long *)(param_1 + 0x4d0);
        uVar10 = *(ulong *)(lVar13 + 0x1c0);
        goto LAB_105486aec;
      }
    }
LAB_105486b18:
    unaff_x25 = (long *)(param_1 + 0x558);
    uVar4 = FUN_1051bc3f8(uVar15,uVar16,plVar14);
    uVar10 = extraout_x11;
    if (*unaff_x25 == 0) goto LAB_105486df0;
    goto LAB_105486b34;
  }
  puVar5 = (undefined8 *)_malloc(0x28);
  if (puVar5 == (undefined8 *)0x0) {
    lVar13 = func_0x0001087c9084(1,0x28);
    if ((*(ulong *)(lVar13 + 0x578) < *(ulong *)(lVar13 + 0x240)) &&
       (lVar6 = *(long *)(lVar13 + 0x238) + *(ulong *)(lVar13 + 0x578) * 0xa8,
       (*(byte *)(lVar6 + 0x90) & 1) != 0)) {
      lVar7 = *(long *)(lVar6 + 0x91);
      auVar29._8_8_ = lVar7;
      auVar29._0_8_ = (long *)(lVar13 + 0x528);
      uVar15 = *(undefined8 *)(lVar6 + 0x99);
      lVar17 = *(long *)(lVar6 + 0x91);
      lVar6 = *(long *)(lVar6 + 0x99);
      if ((*(char *)(lVar13 + 0x5b0) != '\x01') ||
         (*(long *)(lVar13 + 0x5b9) != lVar6 || *(long *)(lVar13 + 0x5b1) != lVar7)) {
        *(undefined1 *)(lVar13 + 0x5b0) = 1;
        *(long *)(lVar13 + 0x5b1) = lVar7;
        *(long *)(lVar13 + 0x5b9) = lVar6;
        uVar8 = FUN_1051bc3f8(*(undefined8 *)(lVar13 + 0x538),*(undefined8 *)(lVar13 + 0x540));
        lVar18 = 0;
        bVar19 = (byte)(uVar8 >> 0x38);
        bVar9 = bVar19 >> 1;
        uVar4 = *(ulong *)(lVar13 + 0x520);
        plVar14 = *(long **)(lVar13 + 0x518);
        bVar20 = bVar19 >> 1;
        uVar11 = uVar8 & uVar4;
        uVar16 = *(undefined8 *)((long)plVar14 + uVar11);
        uVar10 = CONCAT17(-((byte)((ulong)uVar16 >> 0x38) == bVar20),
                          CONCAT16(-((byte)((ulong)uVar16 >> 0x30) == bVar20),
                                   CONCAT15(-((byte)((ulong)uVar16 >> 0x28) == bVar20),
                                            CONCAT14(-((byte)((ulong)uVar16 >> 0x20) == bVar20),
                                                     CONCAT13(-((byte)((ulong)uVar16 >> 0x18) ==
                                                               bVar20),CONCAT12(-((byte)((ulong)
                                                  uVar16 >> 0x10) == bVar20),
                                                  CONCAT11(-((byte)((ulong)uVar16 >> 8) == bVar20),
                                                           -((byte)uVar16 == bVar20))))))));
        while( true ) {
          for (uVar10 = uVar10 & 0x8080808080808080; uVar10 != 0; uVar10 = uVar10 - 1 & uVar10) {
            uVar12 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
            if ((plVar14 +
                (uVar11 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) & uVar4) * -5 + -5)
                [1] == lVar6 &&
                plVar14[(uVar11 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) & uVar4) *
                        -5 + -5] == lVar7) goto LAB_1054870d4;
          }
          bVar21 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar16 >> 0x38) == -1),
                                       CONCAT16(-((char)((ulong)uVar16 >> 0x30) == -1),
                                                CONCAT15(-((char)((ulong)uVar16 >> 0x28) == -1),
                                                         CONCAT14(-((char)((ulong)uVar16 >> 0x20) ==
                                                                   -1),CONCAT13(-((char)((ulong)
                                                  uVar16 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar16 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar16 >> 8) ==
                                                                     -1),-((char)uVar16 == -1)))))))
                                      ),1);
          if ((bVar21 & 1) != 0) break;
          lVar18 = lVar18 + 8;
          uVar11 = uVar11 + lVar18 & uVar4;
          uVar16 = *(undefined8 *)((long)plVar14 + uVar11);
          uVar10 = CONCAT17(-((byte)((ulong)uVar16 >> 0x38) == bVar20),
                            CONCAT16(-((byte)((ulong)uVar16 >> 0x30) == bVar20),
                                     CONCAT15(-((byte)((ulong)uVar16 >> 0x28) == bVar20),
                                              CONCAT14(-((byte)((ulong)uVar16 >> 0x20) == bVar20),
                                                       CONCAT13(-((byte)((ulong)uVar16 >> 0x18) ==
                                                                 bVar20),CONCAT12(-((byte)((ulong)
                                                  uVar16 >> 0x10) == bVar20),
                                                  CONCAT11(-((byte)((ulong)uVar16 >> 8) == bVar20),
                                                           -((byte)uVar16 == bVar20))))))));
        }
        bVar19 = bVar19 >> 1;
        if (*(long *)(lVar13 + 0x528) == 0) goto LAB_105487190;
        uVar8 = uVar4 & uVar8;
        lVar7 = *(long *)((long)plVar14 + uVar8);
        uVar10 = CONCAT17(-(lVar7 < 0),
                          CONCAT16(-((char)((ulong)lVar7 >> 0x30) < '\0'),
                                   CONCAT15(-((char)((ulong)lVar7 >> 0x28) < '\0'),
                                            CONCAT14(-((char)((ulong)lVar7 >> 0x20) < '\0'),
                                                     CONCAT13(-((char)((ulong)lVar7 >> 0x18) < '\0')
                                                              ,CONCAT12(-((char)((ulong)lVar7 >>
                                                                                0x10) < '\0'),
                                                                        CONCAT11(-((char)((ulong)
                                                  lVar7 >> 8) < '\0'),-((char)lVar7 < '\0'))))))));
        goto joined_r0x00010548703c;
      }
      *(undefined1 *)(lVar13 + 0x5b0) = 0;
      auVar29 = func_0x000106032954(8);
      lVar6 = *(long *)(lVar13 + 0x4d0);
      uVar10 = *(ulong *)(lVar6 + 0x1c0);
      do {
        if ((uVar10 & 1) != 0) {
          return;
        }
        if (uVar10 == 0xfffffffffffffffe) {
          do {
            uVar8 = __ZN3std7process5abort17hdc01e45e25b715e8E();
            bVar19 = extraout_w8;
LAB_105487190:
            bVar9 = bVar19;
            __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17h0c99567050122bfaE
                      (lVar13 + 0x518,1,lVar13 + 0x538,1);
            plVar14 = *(long **)(lVar13 + 0x518);
            uVar4 = *(ulong *)(lVar13 + 0x520);
            uVar8 = uVar4 & uVar8;
            lVar7 = *(long *)((long)plVar14 + uVar8);
            uVar10 = CONCAT17(-(lVar7 < 0),
                              CONCAT16(-((char)((ulong)lVar7 >> 0x30) < '\0'),
                                       CONCAT15(-((char)((ulong)lVar7 >> 0x28) < '\0'),
                                                CONCAT14(-((char)((ulong)lVar7 >> 0x20) < '\0'),
                                                         CONCAT13(-((char)((ulong)lVar7 >> 0x18) <
                                                                   '\0'),CONCAT12(-((char)((ulong)
                                                  lVar7 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar7 >> 8) < '\0'),
                                                           -((char)lVar7 < '\0'))))))));
joined_r0x00010548703c:
            plVar2 = auVar29._0_8_;
            if (uVar10 == 0) {
              lVar7 = 8;
              do {
                uVar8 = uVar8 + lVar7 & uVar4;
                lVar18 = *(long *)((long)plVar14 + uVar8);
                uVar10 = CONCAT17(-(lVar18 < 0),
                                  CONCAT16(-((char)((ulong)lVar18 >> 0x30) < '\0'),
                                           CONCAT15(-((char)((ulong)lVar18 >> 0x28) < '\0'),
                                                    CONCAT14(-((char)((ulong)lVar18 >> 0x20) < '\0')
                                                             ,CONCAT13(-((char)((ulong)lVar18 >>
                                                                               0x18) < '\0'),
                                                                       CONCAT12(-((char)((ulong)
                                                  lVar18 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar18 >> 8) < '\0'),
                                                           -((char)lVar18 < '\0'))))))));
                lVar7 = lVar7 + 8;
              } while (uVar10 == 0);
            }
            uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
            uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
            uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
            uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
            uVar8 = uVar8 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & uVar4;
            uVar10 = (ulong)*(char *)((long)plVar14 + uVar8);
            if (-1 < *(char *)((long)plVar14 + uVar8)) {
              lVar7 = *plVar14;
              uVar10 = CONCAT17(-(lVar7 < 0),
                                CONCAT16(-((char)((ulong)lVar7 >> 0x30) < '\0'),
                                         CONCAT15(-((char)((ulong)lVar7 >> 0x28) < '\0'),
                                                  CONCAT14(-((char)((ulong)lVar7 >> 0x20) < '\0'),
                                                           CONCAT13(-((char)((ulong)lVar7 >> 0x18) <
                                                                     '\0'),CONCAT12(-((char)((ulong)
                                                  lVar7 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar7 >> 8) < '\0'),
                                                           -((char)lVar7 < '\0'))))))));
              uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
              uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
              uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
              uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
              uVar8 = (ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3;
              uVar10 = (ulong)*(byte *)((long)plVar14 + uVar8);
            }
            *(byte *)((long)plVar14 + uVar8) = bVar9;
            *(byte *)((long)plVar14 + (uVar8 - 8 & uVar4) + 8) = bVar9;
            plVar14[uVar8 * -5 + -5] = auVar29._8_8_;
            plVar14[uVar8 * -5 + -4] = lVar6;
            plVar14[uVar8 * -5 + -3] = -0x8000000000000000;
            plVar2[1] = plVar2[1] + 1;
            *plVar2 = *plVar2 - (uVar10 & 1);
            uStack_168 = 2;
            lStack_160 = lVar17;
            uStack_158 = uVar15;
            (**(code **)(*(long *)(lVar13 + 0x510) + 0x28))
                      (*(long *)(lVar13 + 0x508) +
                       (*(long *)(*(long *)(lVar13 + 0x510) + 0x10) - 1U & 0xfffffffffffffff0) +
                       0x10,&uStack_168);
LAB_1054870d4:
            auVar29 = func_0x000106032954(8);
            lVar6 = *(long *)(lVar13 + 0x4d0);
            uVar10 = *(ulong *)(lVar6 + 0x1c0);
            while( true ) {
              if ((uVar10 & 1) != 0) {
                return;
              }
              if (uVar10 == 0xfffffffffffffffe) break;
              uVar4 = uVar10 + 2;
              uVar8 = *(ulong *)(lVar6 + 0x1c0);
              bVar3 = uVar8 == uVar10;
              uVar10 = uVar8;
              if (bVar3) {
                *(ulong *)(lVar6 + 0x1c0) = uVar4;
                LOAcquire();
                uVar10 = *(ulong *)(lVar6 + 0x88);
                *(ulong *)(lVar6 + 0x88) = uVar10 + 1;
                lVar13 = func_0x000105217788(lVar6 + 0x80,uVar10);
                puVar5 = (undefined8 *)(lVar13 + (uVar10 & 0x1f) * 0x10);
                *puVar5 = auVar29._0_8_;
                *(int *)(puVar5 + 1) = auVar29._8_4_;
                *(ulong *)(lVar13 + 0x210) = *(ulong *)(lVar13 + 0x210) | 1L << (uVar10 & 0x1f);
                LORelease();
                puVar1 = (ulong *)(lVar6 + 0x110);
                LOAcquire();
                uVar10 = *puVar1;
                *puVar1 = uVar10 | 2;
                LORelease();
                if (uVar10 != 0) {
                  return;
                }
                lVar13 = *(long *)(lVar6 + 0x100);
                *(undefined8 *)(lVar6 + 0x100) = 0;
                *puVar1 = in_xzr;
                LORelease();
                if (lVar13 == 0) {
                  return;
                }
                (**(code **)(lVar13 + 8))(*(undefined8 *)(lVar6 + 0x108));
                return;
              }
            }
          } while( true );
        }
        uVar4 = uVar10 + 2;
        uVar8 = *(ulong *)(lVar6 + 0x1c0);
        bVar3 = uVar8 != uVar10;
        uVar10 = uVar8;
      } while (bVar3);
      *(ulong *)(lVar6 + 0x1c0) = uVar4;
      LOAcquire();
      uVar10 = *(ulong *)(lVar6 + 0x88);
      *(ulong *)(lVar6 + 0x88) = uVar10 + 1;
      lVar13 = func_0x000105217788(lVar6 + 0x80,uVar10);
      puVar5 = (undefined8 *)(lVar13 + (uVar10 & 0x1f) * 0x10);
      *puVar5 = auVar29._0_8_;
      *(int *)(puVar5 + 1) = auVar29._8_4_;
      *(ulong *)(lVar13 + 0x210) = *(ulong *)(lVar13 + 0x210) | 1L << (uVar10 & 0x1f);
      LORelease();
      puVar1 = (ulong *)(lVar6 + 0x110);
      LOAcquire();
      uVar10 = *puVar1;
      *puVar1 = uVar10 | 2;
      LORelease();
      if (uVar10 == 0) {
        lVar13 = *(long *)(lVar6 + 0x100);
        *(undefined8 *)(lVar6 + 0x100) = 0;
        uVar10 = *puVar1;
        *puVar1 = in_xzr;
        LORelease();
        if (lVar13 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105486f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar13 + 8))(uVar10,*(undefined8 *)(lVar6 + 0x108));
          return;
        }
      }
    }
    return;
  }
  puVar5[1] = 0x7661207470697263;
  *puVar5 = 0x736e617274206f4e;
  puVar5[3] = 0x7369687420726f66;
  puVar5[2] = 0x20656c62616c6961;
  puVar5[4] = 0x6e6f697373657320;
  if ((*(long *)(param_1 + 0x4b8) != -0x8000000000000000) && (*(long *)(param_1 + 0x4b8) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x4c0));
  }
  *(undefined8 *)(param_1 + 0x4b8) = 0x28;
  *(undefined8 **)(param_1 + 0x4c0) = puVar5;
  *(undefined8 *)(param_1 + 0x4c8) = 0x28;
  auVar30 = func_0x000106032954(8);
  lVar13 = *(long *)(param_1 + 0x4d0);
  uVar10 = *(ulong *)(lVar13 + 0x1c0);
  do {
    if ((uVar10 & 1) != 0) {
      return;
    }
    if (uVar10 == 0xfffffffffffffffe) {
LAB_105486dec:
      do {
        uVar4 = __ZN3std7process5abort17hdc01e45e25b715e8E();
LAB_105486df0:
        __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17h0c99567050122bfaE
                  (param_1 + 0x548,1,param_1 + 0x568,1);
        uVar10 = extraout_x11_00;
LAB_105486b34:
        bVar3 = false;
        lVar13 = 0;
        plVar14 = *(long **)(param_1 + 0x548);
        uVar11 = *(ulong *)(param_1 + 0x550);
        bVar9 = (byte)(uVar4 >> 0x38);
        bVar19 = bVar9 >> 1;
        uVar4 = uVar4 & uVar11;
        lVar6 = *(long *)((long)plVar14 + uVar4);
        uVar8 = CONCAT17(-((byte)((ulong)lVar6 >> 0x38) == bVar19),
                         CONCAT16(-((byte)((ulong)lVar6 >> 0x30) == bVar19),
                                  CONCAT15(-((byte)((ulong)lVar6 >> 0x28) == bVar19),
                                           CONCAT14(-((byte)((ulong)lVar6 >> 0x20) == bVar19),
                                                    CONCAT13(-((byte)((ulong)lVar6 >> 0x18) ==
                                                              bVar19),CONCAT12(-((byte)((ulong)lVar6
                                                                                       >> 0x10) ==
                                                                                bVar19),CONCAT11(-((
                                                  byte)((ulong)lVar6 >> 8) == bVar19),
                                                  -((byte)lVar6 == bVar19)))))))) &
                0x8080808080808080;
joined_r0x000105486b68:
        while (uVar8 == 0) {
          cVar23 = (char)((ulong)lVar6 >> 8);
          cVar24 = (char)((ulong)lVar6 >> 0x10);
          cVar25 = (char)((ulong)lVar6 >> 0x18);
          cVar26 = (char)((ulong)lVar6 >> 0x20);
          cVar27 = (char)((ulong)lVar6 >> 0x28);
          cVar28 = (char)((ulong)lVar6 >> 0x30);
          if (bVar3) {
LAB_105486bc4:
            bVar20 = NEON_umaxv(CONCAT17(-((char)((ulong)lVar6 >> 0x38) == -1),
                                         CONCAT16(-(cVar28 == -1),
                                                  CONCAT15(-(cVar27 == -1),
                                                           CONCAT14(-(cVar26 == -1),
                                                                    CONCAT13(-(cVar25 == -1),
                                                                             CONCAT12(-(cVar24 == -1
                                                                                       ),CONCAT11(-(
                                                  cVar23 == -1),-((char)lVar6 == -1)))))))),1);
            if ((bVar20 & 1) != 0) {
              uVar4 = (ulong)*(char *)((long)plVar14 + uVar10);
              if (-1 < *(char *)((long)plVar14 + uVar10)) {
                lVar13 = *plVar14;
                uVar10 = CONCAT17(-(lVar13 < 0),
                                  CONCAT16(-((char)((ulong)lVar13 >> 0x30) < '\0'),
                                           CONCAT15(-((char)((ulong)lVar13 >> 0x28) < '\0'),
                                                    CONCAT14(-((char)((ulong)lVar13 >> 0x20) < '\0')
                                                             ,CONCAT13(-((char)((ulong)lVar13 >>
                                                                               0x18) < '\0'),
                                                                       CONCAT12(-((char)((ulong)
                                                  lVar13 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar13 >> 8) < '\0'),
                                                           -((char)lVar13 < '\0'))))))));
                uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
                uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
                uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
                uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
                uVar10 = (ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3;
                uVar4 = (ulong)*(byte *)((long)plVar14 + uVar10);
              }
              *(byte *)((long)plVar14 + uVar10) = bVar9 >> 1;
              *(byte *)((long)plVar14 + (uVar10 - 8 & uVar11) + 8) = bVar9 >> 1;
              unaff_x25[1] = unaff_x25[1] + 1;
              *unaff_x25 = *unaff_x25 - (uVar4 & 1);
              plVar14[uVar10 * -5 + -5] = unaff_x23;
              plVar14[uVar10 * -5 + -4] = unaff_x24;
              plVar14[uVar10 * -5 + -3] = -0x8000000000000000;
              goto LAB_105486c88;
            }
            bVar3 = true;
          }
          else {
            uVar10 = CONCAT17(-(lVar6 < 0),
                              CONCAT16(-(cVar28 < '\0'),
                                       CONCAT15(-(cVar27 < '\0'),
                                                CONCAT14(-(cVar26 < '\0'),
                                                         CONCAT13(-(cVar25 < '\0'),
                                                                  CONCAT12(-(cVar24 < '\0'),
                                                                           CONCAT11(-(cVar23 < '\0')
                                                                                    ,-((char)lVar6 <
                                                                                      '\0'))))))));
            if (uVar10 != 0) {
              uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
              uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
              uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
              uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
              uVar10 = uVar4 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & uVar11;
              goto LAB_105486bc4;
            }
            bVar3 = false;
            uVar10 = 0;
          }
          lVar13 = lVar13 + 8;
          uVar4 = lVar13 + uVar4 & uVar11;
          lVar6 = *(long *)((long)plVar14 + uVar4);
          uVar8 = CONCAT17(-((byte)((ulong)lVar6 >> 0x38) == bVar19),
                           CONCAT16(-((byte)((ulong)lVar6 >> 0x30) == bVar19),
                                    CONCAT15(-((byte)((ulong)lVar6 >> 0x28) == bVar19),
                                             CONCAT14(-((byte)((ulong)lVar6 >> 0x20) == bVar19),
                                                      CONCAT13(-((byte)((ulong)lVar6 >> 0x18) ==
                                                                bVar19),CONCAT12(-((byte)((ulong)
                                                  lVar6 >> 0x10) == bVar19),
                                                  CONCAT11(-((byte)((ulong)lVar6 >> 8) == bVar19),
                                                           -((byte)lVar6 == bVar19)))))))) &
                  0x8080808080808080;
        }
        uVar12 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        uVar12 = uVar4 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) & uVar11;
        if (unaff_x24 != plVar14[uVar12 * -5 + -4] || unaff_x23 != plVar14[uVar12 * -5 + -5]) {
          uVar8 = uVar8 - 1 & uVar8;
          goto joined_r0x000105486b68;
        }
        lStack_b8 = plVar14[uVar12 * -5 + -2];
        lStack_c0 = plVar14[uVar12 * -5 + -3];
        lStack_b0 = plVar14[uVar12 * -5 + -1];
        plVar14[uVar12 * -5 + -3] = -0x8000000000000000;
        if ((lStack_c0 != -0x7ffffffffffffffd) && (-1 < lStack_c0)) {
          FUN_105163bd0(&lStack_c0);
        }
LAB_105486c88:
        *(undefined1 *)(param_1 + 0x5c1) = 1;
        *(long *)((long)unaff_x25 + 0x6a) = unaff_x23;
        *(long *)((long)unaff_x25 + 0x72) = unaff_x24;
        *(undefined1 *)(param_1 + 0x5d2) = 0;
        auVar30 = func_0x000106032954(8);
        unaff_x25 = *(long **)(param_1 + 0x4d0);
        uVar10 = unaff_x25[0x38];
        while( true ) {
          if ((uVar10 & 1) != 0) goto LAB_105486d3c;
          if (uVar10 == 0xfffffffffffffffe) break;
          uVar4 = uVar10 + 2;
          uVar8 = unaff_x25[0x38];
          bVar3 = uVar8 == uVar10;
          uVar10 = uVar8;
          if (bVar3) {
            unaff_x25[0x38] = uVar4;
            LOAcquire();
            uVar10 = unaff_x25[0x11];
            unaff_x25[0x11] = uVar10 + 1;
            lVar13 = func_0x000105217788(unaff_x25 + 0x10,uVar10);
            *(undefined1 (*) [12])(lVar13 + (uVar10 & 0x1f) * 0x10) = auVar30;
            *(ulong *)(lVar13 + 0x210) = *(ulong *)(lVar13 + 0x210) | 1L << (uVar10 & 0x1f);
            LORelease();
            puVar1 = (ulong *)(unaff_x25 + 0x22);
            LOAcquire();
            uVar10 = *puVar1;
            *puVar1 = uVar10 | 2;
            LORelease();
            if (uVar10 == 0) {
              lVar13 = unaff_x25[0x20];
              unaff_x25[0x20] = 0;
              *puVar1 = in_xzr;
              LORelease();
              if (lVar13 != 0) {
                (**(code **)(lVar13 + 8))(unaff_x25[0x21]);
              }
            }
LAB_105486d3c:
            lStack_c0 = 3;
            lStack_b8 = unaff_x23;
            lStack_b0 = unaff_x24;
            (**(code **)(*(long *)(param_1 + 0x510) + 0x28))
                      (*(long *)(param_1 + 0x508) +
                       (*(long *)(*(long *)(param_1 + 0x510) + 0x10) - 1U & 0xfffffffffffffff0) +
                       0x10,&lStack_c0);
            return;
          }
        }
      } while( true );
    }
    uVar4 = uVar10 + 2;
    uVar8 = *(ulong *)(lVar13 + 0x1c0);
    bVar3 = uVar8 != uVar10;
    uVar10 = uVar8;
  } while (bVar3);
  *(ulong *)(lVar13 + 0x1c0) = uVar4;
LAB_105486a20:
  LOAcquire();
  uVar10 = *(ulong *)(lVar13 + 0x88);
  *(ulong *)(lVar13 + 0x88) = uVar10 + 1;
  lVar6 = func_0x000105217788(lVar13 + 0x80,uVar10);
  *(undefined1 (*) [12])(lVar6 + (uVar10 & 0x1f) * 0x10) = auVar30;
  *(ulong *)(lVar6 + 0x210) = *(ulong *)(lVar6 + 0x210) | 1L << (uVar10 & 0x1f);
  LORelease();
  puVar1 = (ulong *)(lVar13 + 0x110);
  LOAcquire();
  uVar10 = *puVar1;
  *puVar1 = uVar10 | 2;
  LORelease();
  if (uVar10 == 0) {
    lVar6 = *(long *)(lVar13 + 0x100);
    *(undefined8 *)(lVar13 + 0x100) = 0;
    uVar10 = *puVar1;
    *puVar1 = in_xzr;
    LORelease();
    if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105486a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar6 + 8))(uVar10,*(undefined8 *)(lVar13 + 0x108));
      return;
    }
  }
  return;
  while( true ) {
    uVar4 = uVar10 + 2;
    uVar8 = *(ulong *)(lVar13 + 0x1c0);
    bVar3 = uVar8 == uVar10;
    uVar10 = uVar8;
    if (bVar3) break;
LAB_105486dc0:
    if ((uVar10 & 1) != 0) {
      return;
    }
    if (uVar10 == 0xfffffffffffffffe) goto LAB_105486dec;
  }
  *(ulong *)(lVar13 + 0x1c0) = uVar4;
  goto LAB_105486a20;
  while( true ) {
    uVar4 = uVar10 + 2;
    uVar8 = *(ulong *)(lVar13 + 0x1c0);
    bVar3 = uVar8 == uVar10;
    uVar10 = uVar8;
    if (bVar3) break;
LAB_105486aec:
    if ((uVar10 & 1) != 0) {
      return;
    }
    if (uVar10 == 0xfffffffffffffffe) goto LAB_105486dec;
  }
  *(ulong *)(lVar13 + 0x1c0) = uVar4;
  goto LAB_105486a20;
}

