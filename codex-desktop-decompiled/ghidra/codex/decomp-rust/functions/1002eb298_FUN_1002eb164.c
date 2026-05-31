
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002eb164(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  byte bVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  long *unaff_x19;
  long unaff_x20;
  long *plVar22;
  byte unaff_w22;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined *puVar23;
  ulong *unaff_x27;
  ulong *puVar24;
  long unaff_x29;
  long in_xzr;
  byte bVar25;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  long lVar26;
  undefined1 auVar32 [16];
  undefined1 auVar33 [12];
  undefined1 auVar34 [12];
  undefined8 in_stack_00000008;
  undefined *in_stack_00000018;
  int iStack0000000000000024;
  ulong in_stack_00000028;
  ulong in_stack_00000070;
  undefined8 in_stack_00000078;
  int iStack0000000000000080;
  undefined8 uStack0000000000000088;
  long *in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  long lStack00000000000000d8;
  undefined4 uStack00000000000000e0;
  long lStack00000000000000e8;
  
  auVar32._8_8_ = unaff_x24;
  auVar32._0_8_ = unaff_x25;
code_r0x0001002eb164:
  *(char **)(unaff_x29 + -0x90) = s_new_connector_created_in_108aba7ef;
  *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x80;
  *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0x90;
  *(undefined **)(unaff_x29 + -0x98) = &UNK_10b1f8a98;
  lStack00000000000000d8 = unaff_x29 + -0xa0;
  _uStack00000000000000e0 = 1;
  lStack00000000000000e8 = param_1;
  FUN_1002eba88(&stack0x000000d0);
  puVar24 = unaff_x27;
LAB_1002eb2f0:
  puVar12 = (undefined8 *)_malloc(0x20);
  if (puVar12 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x20);
    goto LAB_1002eb8f8;
  }
  puVar12[1] = 1;
  *puVar12 = 1;
  *(undefined1 (*) [16])(puVar12 + 2) = auVar32;
  uVar2 = (ulong)in_stack_00000078._4_4_;
  lStack00000000000000d8 = CONCAT44(lStack00000000000000d8._4_4_,in_stack_00000078._4_4_);
  _uStack00000000000000e0 = in_stack_00000028;
  lStack00000000000000e8 = CONCAT44(lStack00000000000000e8._4_4_,iStack0000000000000080);
  puVar23 = &UNK_10b1f8ab8;
  *(undefined8 **)(unaff_x29 + -0x80) = puVar12;
  *(undefined **)(unaff_x29 + -0x78) = &UNK_10b1f8ab8;
  uVar13 = FUN_10031c504(*(undefined8 *)(unaff_x20 + 0x148),*(undefined8 *)(unaff_x20 + 0x150),
                         &stack0x000000d0);
  if (*(long *)(unaff_x20 + 0x138) == 0) {
    FUN_107c03ed4(in_stack_00000018,1,unaff_x20 + 0x148,1);
  }
  plVar22 = *(long **)(unaff_x20 + 0x128);
  uVar15 = *(ulong *)(unaff_x20 + 0x130);
  bVar8 = (byte)(uVar13 >> 0x38);
  bVar16 = bVar8 >> 1;
  uVar17 = 1000000000;
  if (in_stack_00000078._4_4_ == 1000000000) {
    if (iStack0000000000000080 == 1000000000) {
      bVar5 = false;
      lVar18 = 0;
      uVar20 = uVar13 & uVar15;
      lVar26 = *(long *)((long)plVar22 + uVar20);
      uVar19 = CONCAT17(-((byte)((ulong)lVar26 >> 0x38) == bVar16),
                        CONCAT16(-((byte)((ulong)lVar26 >> 0x30) == bVar16),
                                 CONCAT15(-((byte)((ulong)lVar26 >> 0x28) == bVar16),
                                          CONCAT14(-((byte)((ulong)lVar26 >> 0x20) == bVar16),
                                                   CONCAT13(-((byte)((ulong)lVar26 >> 0x18) ==
                                                             bVar16),CONCAT12(-((byte)((ulong)lVar26
                                                                                      >> 0x10) ==
                                                                               bVar16),CONCAT11(-((
                                                  byte)((ulong)lVar26 >> 8) == bVar16),
                                                  -((byte)lVar26 == bVar16)))))))) &
               0x8080808080808080;
joined_r0x0001002eb3a0:
      while (uVar19 == 0) {
        cVar9 = (char)((ulong)lVar26 >> 8);
        cVar27 = (char)((ulong)lVar26 >> 0x10);
        cVar28 = (char)((ulong)lVar26 >> 0x18);
        cVar29 = (char)((ulong)lVar26 >> 0x20);
        cVar30 = (char)((ulong)lVar26 >> 0x28);
        cVar31 = (char)((ulong)lVar26 >> 0x30);
        if (bVar5) {
LAB_1002eb404:
          bVar25 = NEON_umaxv(CONCAT17(-((char)((ulong)lVar26 >> 0x38) == -1),
                                       CONCAT16(-(cVar31 == -1),
                                                CONCAT15(-(cVar30 == -1),
                                                         CONCAT14(-(cVar29 == -1),
                                                                  CONCAT13(-(cVar28 == -1),
                                                                           CONCAT12(-(cVar27 == -1),
                                                                                    CONCAT11(-(cVar9
                                                                                              == -1)
                                                  ,-((char)lVar26 == -1)))))))),1);
          if ((bVar25 & 1) != 0) goto LAB_1002eb74c;
          bVar5 = true;
        }
        else {
          uVar17 = CONCAT17(-(lVar26 < 0),
                            CONCAT16(-(cVar31 < '\0'),
                                     CONCAT15(-(cVar30 < '\0'),
                                              CONCAT14(-(cVar29 < '\0'),
                                                       CONCAT13(-(cVar28 < '\0'),
                                                                CONCAT12(-(cVar27 < '\0'),
                                                                         CONCAT11(-(cVar9 < '\0'),
                                                                                  -((char)lVar26 <
                                                                                   '\0'))))))));
          if (uVar17 != 0) {
            uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
            uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
            uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
            uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
            uVar17 = uVar20 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) & uVar15;
            goto LAB_1002eb404;
          }
          bVar5 = false;
          uVar17 = 0;
        }
        lVar18 = lVar18 + 8;
        uVar13 = lVar18 + uVar20;
        uVar20 = uVar13 & uVar15;
        lVar26 = *(long *)((long)plVar22 + uVar20);
        uVar19 = CONCAT17(-((byte)((ulong)lVar26 >> 0x38) == bVar16),
                          CONCAT16(-((byte)((ulong)lVar26 >> 0x30) == bVar16),
                                   CONCAT15(-((byte)((ulong)lVar26 >> 0x28) == bVar16),
                                            CONCAT14(-((byte)((ulong)lVar26 >> 0x20) == bVar16),
                                                     CONCAT13(-((byte)((ulong)lVar26 >> 0x18) ==
                                                               bVar16),CONCAT12(-((byte)((ulong)
                                                  lVar26 >> 0x10) == bVar16),
                                                  CONCAT11(-((byte)((ulong)lVar26 >> 8) == bVar16),
                                                           -((byte)lVar26 == bVar16)))))))) &
                 0x8080808080808080;
      }
      uVar4 = (uVar19 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar19 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      plVar21 = plVar22 + (uVar20 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & uVar15) *
                          -6;
      if (((int)plVar21[-5] != 1000000000) || ((int)plVar21[-3] != 1000000000)) {
        uVar19 = uVar19 - 1 & uVar19;
        goto joined_r0x0001002eb3a0;
      }
    }
    else {
      bVar5 = false;
      lVar18 = 0;
      uVar20 = uVar13 & uVar15;
      lVar26 = *(long *)((long)plVar22 + uVar20);
      uVar19 = CONCAT17(-((byte)((ulong)lVar26 >> 0x38) == bVar16),
                        CONCAT16(-((byte)((ulong)lVar26 >> 0x30) == bVar16),
                                 CONCAT15(-((byte)((ulong)lVar26 >> 0x28) == bVar16),
                                          CONCAT14(-((byte)((ulong)lVar26 >> 0x20) == bVar16),
                                                   CONCAT13(-((byte)((ulong)lVar26 >> 0x18) ==
                                                             bVar16),CONCAT12(-((byte)((ulong)lVar26
                                                                                      >> 0x10) ==
                                                                               bVar16),CONCAT11(-((
                                                  byte)((ulong)lVar26 >> 8) == bVar16),
                                                  -((byte)lVar26 == bVar16)))))))) &
               0x8080808080808080;
joined_r0x0001002eb55c:
      while (uVar19 == 0) {
        cVar9 = (char)((ulong)lVar26 >> 8);
        cVar27 = (char)((ulong)lVar26 >> 0x10);
        cVar28 = (char)((ulong)lVar26 >> 0x18);
        cVar29 = (char)((ulong)lVar26 >> 0x20);
        cVar30 = (char)((ulong)lVar26 >> 0x28);
        cVar31 = (char)((ulong)lVar26 >> 0x30);
        if (bVar5) {
LAB_1002eb5d8:
          bVar25 = NEON_umaxv(CONCAT17(-((char)((ulong)lVar26 >> 0x38) == -1),
                                       CONCAT16(-(cVar31 == -1),
                                                CONCAT15(-(cVar30 == -1),
                                                         CONCAT14(-(cVar29 == -1),
                                                                  CONCAT13(-(cVar28 == -1),
                                                                           CONCAT12(-(cVar27 == -1),
                                                                                    CONCAT11(-(cVar9
                                                                                              == -1)
                                                  ,-((char)lVar26 == -1)))))))),1);
          if ((bVar25 & 1) != 0) goto LAB_1002eb74c;
          bVar5 = true;
        }
        else {
          uVar17 = CONCAT17(-(lVar26 < 0),
                            CONCAT16(-(cVar31 < '\0'),
                                     CONCAT15(-(cVar30 < '\0'),
                                              CONCAT14(-(cVar29 < '\0'),
                                                       CONCAT13(-(cVar28 < '\0'),
                                                                CONCAT12(-(cVar27 < '\0'),
                                                                         CONCAT11(-(cVar9 < '\0'),
                                                                                  -((char)lVar26 <
                                                                                   '\0'))))))));
          if (uVar17 != 0) {
            uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
            uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
            uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
            uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
            uVar17 = uVar20 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) & uVar15;
            goto LAB_1002eb5d8;
          }
          bVar5 = false;
          uVar17 = 0;
        }
        lVar18 = lVar18 + 8;
        uVar13 = lVar18 + uVar20;
        uVar20 = uVar13 & uVar15;
        lVar26 = *(long *)((long)plVar22 + uVar20);
        uVar19 = CONCAT17(-((byte)((ulong)lVar26 >> 0x38) == bVar16),
                          CONCAT16(-((byte)((ulong)lVar26 >> 0x30) == bVar16),
                                   CONCAT15(-((byte)((ulong)lVar26 >> 0x28) == bVar16),
                                            CONCAT14(-((byte)((ulong)lVar26 >> 0x20) == bVar16),
                                                     CONCAT13(-((byte)((ulong)lVar26 >> 0x18) ==
                                                               bVar16),CONCAT12(-((byte)((ulong)
                                                  lVar26 >> 0x10) == bVar16),
                                                  CONCAT11(-((byte)((ulong)lVar26 >> 8) == bVar16),
                                                           -((byte)lVar26 == bVar16)))))))) &
                 0x8080808080808080;
      }
      uVar4 = (uVar19 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar19 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      plVar21 = plVar22 + (uVar20 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & uVar15) *
                          -6;
      if ((((int)plVar21[-5] != 1000000000) || ((int)plVar21[-3] == 1000000000)) ||
         (iStack0000000000000080 != (int)plVar21[-3] || in_stack_00000028 != plVar21[-4])) {
        uVar19 = uVar19 - 1 & uVar19;
        goto joined_r0x0001002eb55c;
      }
    }
  }
  else if (iStack0000000000000080 == 1000000000) {
    bVar5 = false;
    lVar18 = 0;
    uVar20 = uVar13 & uVar15;
    lVar26 = *(long *)((long)plVar22 + uVar20);
    uVar19 = CONCAT17(-((byte)((ulong)lVar26 >> 0x38) == bVar16),
                      CONCAT16(-((byte)((ulong)lVar26 >> 0x30) == bVar16),
                               CONCAT15(-((byte)((ulong)lVar26 >> 0x28) == bVar16),
                                        CONCAT14(-((byte)((ulong)lVar26 >> 0x20) == bVar16),
                                                 CONCAT13(-((byte)((ulong)lVar26 >> 0x18) == bVar16)
                                                          ,CONCAT12(-((byte)((ulong)lVar26 >> 0x10)
                                                                     == bVar16),
                                                                    CONCAT11(-((byte)((ulong)lVar26
                                                                                     >> 8) == bVar16
                                                                              ),-((byte)lVar26 ==
                                                                                 bVar16)))))))) &
             0x8080808080808080;
joined_r0x0001002eb478:
    while (uVar19 == 0) {
      cVar9 = (char)((ulong)lVar26 >> 8);
      cVar27 = (char)((ulong)lVar26 >> 0x10);
      cVar28 = (char)((ulong)lVar26 >> 0x18);
      cVar29 = (char)((ulong)lVar26 >> 0x20);
      cVar30 = (char)((ulong)lVar26 >> 0x28);
      cVar31 = (char)((ulong)lVar26 >> 0x30);
      if (bVar5) {
LAB_1002eb4f0:
        bVar25 = NEON_umaxv(CONCAT17(-((char)((ulong)lVar26 >> 0x38) == -1),
                                     CONCAT16(-(cVar31 == -1),
                                              CONCAT15(-(cVar30 == -1),
                                                       CONCAT14(-(cVar29 == -1),
                                                                CONCAT13(-(cVar28 == -1),
                                                                         CONCAT12(-(cVar27 == -1),
                                                                                  CONCAT11(-(cVar9 
                                                  == -1),-((char)lVar26 == -1)))))))),1);
        if ((bVar25 & 1) != 0) goto LAB_1002eb74c;
        bVar5 = true;
      }
      else {
        uVar17 = CONCAT17(-(lVar26 < 0),
                          CONCAT16(-(cVar31 < '\0'),
                                   CONCAT15(-(cVar30 < '\0'),
                                            CONCAT14(-(cVar29 < '\0'),
                                                     CONCAT13(-(cVar28 < '\0'),
                                                              CONCAT12(-(cVar27 < '\0'),
                                                                       CONCAT11(-(cVar9 < '\0'),
                                                                                -((char)lVar26 <
                                                                                 '\0'))))))));
        if (uVar17 != 0) {
          uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
          uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
          uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
          uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
          uVar17 = uVar20 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) & uVar15;
          goto LAB_1002eb4f0;
        }
        bVar5 = false;
        uVar17 = 0;
      }
      lVar18 = lVar18 + 8;
      uVar13 = lVar18 + uVar20;
      uVar20 = uVar13 & uVar15;
      lVar26 = *(long *)((long)plVar22 + uVar20);
      uVar19 = CONCAT17(-((byte)((ulong)lVar26 >> 0x38) == bVar16),
                        CONCAT16(-((byte)((ulong)lVar26 >> 0x30) == bVar16),
                                 CONCAT15(-((byte)((ulong)lVar26 >> 0x28) == bVar16),
                                          CONCAT14(-((byte)((ulong)lVar26 >> 0x20) == bVar16),
                                                   CONCAT13(-((byte)((ulong)lVar26 >> 0x18) ==
                                                             bVar16),CONCAT12(-((byte)((ulong)lVar26
                                                                                      >> 0x10) ==
                                                                               bVar16),CONCAT11(-((
                                                  byte)((ulong)lVar26 >> 8) == bVar16),
                                                  -((byte)lVar26 == bVar16)))))))) &
               0x8080808080808080;
    }
    uVar4 = (uVar19 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar19 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    plVar21 = plVar22 + (uVar20 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & uVar15) *
                        -6;
    if (((*(uint *)(plVar21 + -5) == 1000000000) ||
        (in_stack_00000078._4_4_ != *(uint *)(plVar21 + -5) || in_stack_00000070 != plVar21[-6])) ||
       ((int)plVar21[-3] != 1000000000)) {
      uVar19 = uVar19 - 1 & uVar19;
      goto joined_r0x0001002eb478;
    }
  }
  else {
    bVar5 = false;
    lVar18 = 0;
    uVar20 = uVar13 & uVar15;
    lVar26 = *(long *)((long)plVar22 + uVar20);
    uVar19 = CONCAT17(-((byte)((ulong)lVar26 >> 0x38) == bVar16),
                      CONCAT16(-((byte)((ulong)lVar26 >> 0x30) == bVar16),
                               CONCAT15(-((byte)((ulong)lVar26 >> 0x28) == bVar16),
                                        CONCAT14(-((byte)((ulong)lVar26 >> 0x20) == bVar16),
                                                 CONCAT13(-((byte)((ulong)lVar26 >> 0x18) == bVar16)
                                                          ,CONCAT12(-((byte)((ulong)lVar26 >> 0x10)
                                                                     == bVar16),
                                                                    CONCAT11(-((byte)((ulong)lVar26
                                                                                     >> 8) == bVar16
                                                                              ),-((byte)lVar26 ==
                                                                                 bVar16)))))))) &
             0x8080808080808080;
joined_r0x0001002eb644:
    while (uVar19 == 0) {
      cVar9 = (char)((ulong)lVar26 >> 8);
      cVar27 = (char)((ulong)lVar26 >> 0x10);
      cVar28 = (char)((ulong)lVar26 >> 0x18);
      cVar29 = (char)((ulong)lVar26 >> 0x20);
      cVar30 = (char)((ulong)lVar26 >> 0x28);
      cVar31 = (char)((ulong)lVar26 >> 0x30);
      if (bVar5) {
LAB_1002eb6d4:
        bVar25 = NEON_umaxv(CONCAT17(-((char)((ulong)lVar26 >> 0x38) == -1),
                                     CONCAT16(-(cVar31 == -1),
                                              CONCAT15(-(cVar30 == -1),
                                                       CONCAT14(-(cVar29 == -1),
                                                                CONCAT13(-(cVar28 == -1),
                                                                         CONCAT12(-(cVar27 == -1),
                                                                                  CONCAT11(-(cVar9 
                                                  == -1),-((char)lVar26 == -1)))))))),1);
        if ((bVar25 & 1) != 0) goto LAB_1002eb74c;
        bVar5 = true;
      }
      else {
        uVar17 = CONCAT17(-(lVar26 < 0),
                          CONCAT16(-(cVar31 < '\0'),
                                   CONCAT15(-(cVar30 < '\0'),
                                            CONCAT14(-(cVar29 < '\0'),
                                                     CONCAT13(-(cVar28 < '\0'),
                                                              CONCAT12(-(cVar27 < '\0'),
                                                                       CONCAT11(-(cVar9 < '\0'),
                                                                                -((char)lVar26 <
                                                                                 '\0'))))))));
        if (uVar17 != 0) {
          uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
          uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
          uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
          uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
          uVar17 = uVar20 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) & uVar15;
          goto LAB_1002eb6d4;
        }
        bVar5 = false;
        uVar17 = 0;
      }
      lVar18 = lVar18 + 8;
      uVar13 = lVar18 + uVar20;
      uVar20 = uVar13 & uVar15;
      lVar26 = *(long *)((long)plVar22 + uVar20);
      uVar19 = CONCAT17(-((byte)((ulong)lVar26 >> 0x38) == bVar16),
                        CONCAT16(-((byte)((ulong)lVar26 >> 0x30) == bVar16),
                                 CONCAT15(-((byte)((ulong)lVar26 >> 0x28) == bVar16),
                                          CONCAT14(-((byte)((ulong)lVar26 >> 0x20) == bVar16),
                                                   CONCAT13(-((byte)((ulong)lVar26 >> 0x18) ==
                                                             bVar16),CONCAT12(-((byte)((ulong)lVar26
                                                                                      >> 0x10) ==
                                                                               bVar16),CONCAT11(-((
                                                  byte)((ulong)lVar26 >> 8) == bVar16),
                                                  -((byte)lVar26 == bVar16)))))))) &
               0x8080808080808080;
    }
    uVar4 = (uVar19 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar19 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    plVar21 = plVar22 + (uVar20 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & uVar15) *
                        -6;
    if ((((*(uint *)(plVar21 + -5) == 1000000000) ||
         (in_stack_00000078._4_4_ != *(uint *)(plVar21 + -5) || in_stack_00000070 != plVar21[-6]))
        || ((int)plVar21[-3] == 1000000000)) ||
       (iStack0000000000000080 != (int)plVar21[-3] || in_stack_00000028 != plVar21[-4])) {
      uVar19 = uVar19 - 1 & uVar19;
      goto joined_r0x0001002eb644;
    }
  }
  lVar18 = plVar21[-1];
  plVar22 = (long *)plVar21[-2];
  plVar21[-2] = (long)puVar12;
  plVar21[-1] = (long)&UNK_10b1f8ab8;
  *(long *)(unaff_x29 + -0x78) = lVar18;
  *(long **)(unaff_x29 + -0x80) = plVar22;
  lVar18 = *plVar22;
  *plVar22 = lVar18 + -1;
  LORelease();
  if (lVar18 == 1) {
    DataMemoryBarrier(2,1);
    func_0x0001002ca260(unaff_x29 + -0x80);
  }
  lVar18 = *(long *)(unaff_x20 + 0x140);
  goto joined_r0x0001002eb7a8;
LAB_1002eb74c:
  uVar19 = (ulong)*(char *)((long)plVar22 + uVar17);
  if (-1 < *(char *)((long)plVar22 + uVar17)) {
    lVar18 = *plVar22;
    uVar17 = CONCAT17(-(lVar18 < 0),
                      CONCAT16(-((char)((ulong)lVar18 >> 0x30) < '\0'),
                               CONCAT15(-((char)((ulong)lVar18 >> 0x28) < '\0'),
                                        CONCAT14(-((char)((ulong)lVar18 >> 0x20) < '\0'),
                                                 CONCAT13(-((char)((ulong)lVar18 >> 0x18) < '\0'),
                                                          CONCAT12(-((char)((ulong)lVar18 >> 0x10) <
                                                                    '\0'),CONCAT11(-((char)((ulong)
                                                  lVar18 >> 8) < '\0'),-((char)lVar18 < '\0'))))))))
    ;
    uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
    uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
    uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
    uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
    uVar17 = (ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3;
    uVar19 = (ulong)*(byte *)((long)plVar22 + uVar17);
  }
  *(byte *)((long)plVar22 + uVar17) = bVar8 >> 1;
  *(byte *)((long)plVar22 + (uVar17 - 8 & uVar15) + 8) = bVar8 >> 1;
  *(long *)(unaff_x20 + 0x140) = *(long *)(unaff_x20 + 0x140) + 1;
  *(long *)(unaff_x20 + 0x138) = *(long *)(unaff_x20 + 0x138) - (uVar19 & 1);
  plVar22[uVar17 * -6 + -5] = lStack00000000000000d8;
  plVar22[uVar17 * -6 + -6] = in_stack_00000070;
  plVar22[uVar17 * -6 + -3] = lStack00000000000000e8;
  plVar22[uVar17 * -6 + -4] = _uStack00000000000000e0;
  plVar22[uVar17 * -6 + -2] = (long)puVar12;
  plVar22[uVar17 * -6 + -1] = (long)&UNK_10b1f8ab8;
  lVar18 = *(long *)(unaff_x20 + 0x140);
joined_r0x0001002eb7a8:
  if (lVar18 == 0) goto LAB_1002eb7f8;
  puVar23 = *(undefined **)(unaff_x20 + 0x148);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x150);
  do {
    uVar14 = FUN_10031c504(puVar23,uVar14,&stack0x00000090);
    lVar18 = FUN_100327820(*(undefined8 *)(unaff_x20 + 0x128),*(undefined8 *)(unaff_x20 + 0x130),
                           uVar14,&stack0x00000090);
    if (lVar18 == 0) {
LAB_1002eb7f8:
      uStack0000000000000088 = 0;
      _iStack0000000000000080 = (long *)0x0;
      in_stack_00000018 = puVar23;
    }
    else {
      lVar26 = **(long **)(lVar18 + -0x10);
      **(long **)(lVar18 + -0x10) = lVar26 + 1;
      if (lVar26 < 0) goto LAB_1002eb8f8;
      uStack0000000000000088 = *(undefined8 *)(lVar18 + -8);
      _iStack0000000000000080 = *(long **)(lVar18 + -0x10);
      in_stack_00000018 = puVar23;
    }
    if (in_stack_000000b0 != (long *)0x0) {
      lVar18 = *in_stack_000000b0;
      *in_stack_000000b0 = lVar18 + -1;
      LORelease();
      if (lVar18 == 1) {
        DataMemoryBarrier(2,1);
        func_0x0001002ca260(&stack0x000000b0);
      }
    }
    in_stack_000000b0 = _iStack0000000000000080;
    in_stack_000000b8 = uStack0000000000000088;
    if (((unaff_w22 & 1) == 0) && ((*puVar24 & 0x7fffffffffffffff) != 0)) {
      uVar15 = FUN_107c05e34();
      if ((uVar15 & 1) == 0) {
        *(undefined1 *)(unaff_x20 + 0x120) = 1;
      }
    }
    if (*unaff_x19 == 1) {
      *unaff_x19 = in_xzr;
    }
    else {
      __ZN3std3sys4sync6rwlock5queue6RwLock16unlock_contended17h5028e77bc6335836E();
    }
    if (in_stack_000000b0 != (long *)0x0) {
      return;
    }
    FUN_107c05cac(&UNK_108c79932,0x15,&UNK_10b1f8ae0);
    FUN_107c05e00();
    puVar24 = (ulong *)&__ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE;
    if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
        0x7fffffffffffffff) == 0) {
      unaff_w22 = 0;
      cVar9 = *(char *)(unaff_x20 + 0x120);
    }
    else {
      bVar8 = FUN_107c05e34();
      unaff_w22 = bVar8 ^ 1;
      cVar9 = *(char *)(unaff_x20 + 0x120);
    }
    if (cVar9 != '\0') {
      uVar13 = (ulong)lStack00000000000000d8 >> 8;
      lStack00000000000000d8 = CONCAT71((int7)uVar13,unaff_w22);
      FUN_107c05cb4(&UNK_108c80274,0x2b,&stack0x000000d0,&UNK_10b1ff6c0,&UNK_10b1f8a80);
      goto LAB_1002eb8f8;
    }
    in_stack_00000070 = in_stack_00000028;
    if (*(long *)(unaff_x20 + 0x140) == 0) break;
    puVar23 = *(undefined **)(unaff_x20 + 0x148);
    uVar14 = *(undefined8 *)(unaff_x20 + 0x150);
    uVar11 = FUN_10031c504(puVar23,uVar14,&stack0x00000090);
    lVar18 = FUN_100327820(*(undefined8 *)(unaff_x20 + 0x128),*(undefined8 *)(unaff_x20 + 0x130),
                           uVar11,&stack0x00000090);
  } while (lVar18 != 0);
  lVar18 = puVar12[0x29];
  if (lVar18 == 0) {
    auVar33._8_4_ = 1000000000;
    auVar33._0_8_ = in_stack_00000008;
  }
  else {
    plVar22 = (long *)puVar12[0x2b];
    lVar26 = *plVar22;
    *plVar22 = lVar26 + 1;
    if (lVar26 < 0) {
LAB_1002eb8f8:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1002eb8fc);
      (*pcVar6)();
    }
    lStack00000000000000d8 = puVar12[0x2c];
    auVar33 = (**(code **)(lStack00000000000000d8 + 0x20))
                        ((long)plVar22 +
                         (*(long *)(lStack00000000000000d8 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10
                        );
    lVar26 = *plVar22;
    *plVar22 = lVar26 + -1;
    LORelease();
    if (lVar26 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0b820b89976f4dd0E(&stack0x000000d0);
    }
  }
  iStack0000000000000024 = auVar33._8_4_;
  in_stack_00000008 = auVar33._0_8_;
  lVar26 = **(long **)(unaff_x20 + 0xf0);
  **(long **)(unaff_x20 + 0xf0) = lVar26 + 1;
  if (lVar26 < 0) goto LAB_1002eb8f8;
  lVar26 = *(long *)(unaff_x20 + 8);
  uVar15 = *(ulong *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar7 = **(long **)(unaff_x20 + 0xb8);
  **(long **)(unaff_x20 + 0xb8) = lVar7 + 1;
  if (((lVar7 < 0) ||
      ((plVar22 = *(long **)(unaff_x20 + 200), plVar22 != (long *)0x0 &&
       (lVar7 = *plVar22, *plVar22 = lVar7 + 1, lVar7 < 0)))) ||
     ((plVar22 = *(long **)(unaff_x20 + 0x100), plVar22 != (long *)0x0 &&
      (lVar7 = *plVar22, *plVar22 = lVar7 + 1, lVar7 < 0)))) goto LAB_1002eb8f8;
  lStack00000000000000d8 = lVar26;
  _uStack00000000000000e0 = uVar15;
  lStack00000000000000e8 = lVar3;
  auVar32 = FUN_10030846c(*(undefined1 *)(unaff_x20 + 0x158),&stack0x000000d0,uVar13,puVar12);
  unaff_x27 = (ulong *)&__ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE;
  puVar24 = unaff_x27;
  in_stack_00000028 = uVar2;
  _in_stack_000000c0 = auVar32;
  if (lVar18 == 0) goto LAB_1002eb2f0;
  plVar22 = (long *)puVar12[0x2b];
  lVar18 = *plVar22;
  *plVar22 = lVar18 + 1;
  if (lVar18 < 0) goto LAB_1002eb8f8;
  lStack00000000000000d8 = puVar12[0x2c];
  auVar34 = (**(code **)(lStack00000000000000d8 + 0x20))
                      ((long)plVar22 +
                       (*(long *)(lStack00000000000000d8 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
  lVar18 = *plVar22;
  *plVar22 = lVar18 + -1;
  LORelease();
  if (lVar18 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0b820b89976f4dd0E(&stack0x000000d0);
  }
  if ((iStack0000000000000024 == 1000000000) ||
     (puVar24 = (ulong *)&__ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE,
     auVar34._8_4_ == 1000000000)) goto LAB_1002eb2f0;
  *(undefined1 (*) [12])(unaff_x29 + -0xe8) = auVar34;
  *(undefined1 (*) [12])(unaff_x29 + -0x80) = auVar33;
  func_0x000106032878(&stack0x000000d0,unaff_x29 + -0xe8,unaff_x29 + -0x80);
  if ((int)plVar22 == 1) goto LAB_1002eb2f0;
  *(long *)(unaff_x29 + -0xd8) = lStack00000000000000d8;
  *(undefined4 *)(unaff_x29 + -0xd0) = uStack00000000000000e0;
  if (1 < ___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E) goto LAB_1002eb1f4;
  if (1 < bRam000000010b624c40 - 1) {
    if (bRam000000010b624c40 == 0) goto LAB_1002eb1f4;
    cVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                      (&
                       __ZN121__LT_aws_smithy_http_client__client__HyperClient_LT_F_GT__u20_as_u20_aws_smithy_runtime_api__client__http__HttpClient_GT_14http_connector10__CALLSITE17h1b6c4ea61a074801E
                      );
    if (cVar9 == '\0') goto LAB_1002eb1f4;
  }
  iVar10 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                     (
                     ___ZN121__LT_aws_smithy_http_client__client__HyperClient_LT_F_GT__u20_as_u20_aws_smithy_runtime_api__client__http__HttpClient_GT_14http_connector10__CALLSITE17h1b6c4ea61a074801E
                     );
  if (iVar10 != 0) goto code_r0x0001002eb14c;
LAB_1002eb1f4:
  lVar18 = 
  ___ZN121__LT_aws_smithy_http_client__client__HyperClient_LT_F_GT__u20_as_u20_aws_smithy_runtime_api__client__http__HttpClient_GT_14http_connector10__CALLSITE17h1b6c4ea61a074801E
  ;
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uVar14 = *(undefined8 *)
              (
              ___ZN121__LT_aws_smithy_http_client__client__HyperClient_LT_F_GT__u20_as_u20_aws_smithy_runtime_api__client__http__HttpClient_GT_14http_connector10__CALLSITE17h1b6c4ea61a074801E
              + 0x20);
    uVar11 = *(undefined8 *)
              (
              ___ZN121__LT_aws_smithy_http_client__client__HyperClient_LT_F_GT__u20_as_u20_aws_smithy_runtime_api__client__http__HttpClient_GT_14http_connector10__CALLSITE17h1b6c4ea61a074801E
              + 0x28);
    *(undefined8 *)(unaff_x29 + -200) = 4;
    *(undefined8 *)(unaff_x29 + -0xc0) = uVar14;
    *(undefined8 *)(unaff_x29 + -0xb8) = uVar11;
    puVar23 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar23 = &UNK_10b3c24c8;
    }
    puVar1 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_109adfc03;
    }
    iVar10 = (**(code **)(puVar23 + 0x18))(puVar1,unaff_x29 + -200);
    if (iVar10 != 0) {
      lStack00000000000000e8 =
           ___ZN121__LT_aws_smithy_http_client__client__HyperClient_LT_F_GT__u20_as_u20_aws_smithy_runtime_api__client__http__HttpClient_GT_14http_connector10__CALLSITE17h1b6c4ea61a074801E
           + 0x30;
      *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0xd8;
      *(code **)(unaff_x29 + -0x88) =
           __ZN57__LT_core__time__Duration_u20_as_u20_core__fmt__Debug_GT_3fmt17h3381e2c8c9a9d54fE;
      *(char **)(unaff_x29 + -0xa0) = s_new_connector_created_in_108aba7ef;
      *(long *)(unaff_x29 + -0x98) = unaff_x29 + -0x90;
      *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xa0;
      *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b1f8a98;
      lStack00000000000000d8 = unaff_x29 + -0xb0;
      _uStack00000000000000e0 = 1;
      *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x29 + -0xc0);
      *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -200);
      *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0xb8);
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar18,puVar1,puVar23,unaff_x29 + -0x80,&stack0x000000d0);
    }
  }
  goto LAB_1002eb2f0;
code_r0x0001002eb14c:
  param_1 = ___ZN121__LT_aws_smithy_http_client__client__HyperClient_LT_F_GT__u20_as_u20_aws_smithy_runtime_api__client__http__HttpClient_GT_14http_connector10__CALLSITE17h1b6c4ea61a074801E
            + 0x30;
  *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xd8;
  *(code **)(unaff_x29 + -0x78) =
       __ZN57__LT_core__time__Duration_u20_as_u20_core__fmt__Debug_GT_3fmt17h3381e2c8c9a9d54fE;
  goto code_r0x0001002eb164;
}

