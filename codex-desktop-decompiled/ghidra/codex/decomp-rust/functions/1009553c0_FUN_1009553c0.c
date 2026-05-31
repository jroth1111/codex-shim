
/* WARNING: Removing unreachable block (ram,0x000100955498) */

void FUN_1009553c0(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  char *pcVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  byte bVar7;
  undefined1 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  long unaff_x27;
  ulong uVar15;
  ulong uVar16;
  byte bVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined8 in_stack_00000048;
  undefined8 in_stack_000000c0;
  undefined8 *in_stack_000000c8;
  undefined1 *puStack0000000000000128;
  undefined *puStack0000000000000130;
  char *pcStack00000000000001b0;
  undefined1 *puStack00000000000001b8;
  undefined8 *in_stack_00000368;
  
  puStack00000000000001b8 = &stack0x00000310;
  pcStack00000000000001b0 = s_fuzzy_file_search_failed__108aca055;
  puStack0000000000000128 = (undefined1 *)&stack0x000001b0;
  puStack0000000000000130 = &UNK_10b208fd0;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  (**(code **)*in_stack_00000368)();
  *(undefined1 *)(unaff_x27 + 0x121) = 0;
  lVar14 = *(long *)(unaff_x27 + 0x108);
  lVar9 = *(long *)(unaff_x27 + 0x110);
  if (lVar9 != 0) {
    puVar13 = (undefined8 *)(lVar14 + 8);
    do {
      if (puVar13[-1] != 0) {
        _free(*puVar13);
      }
      puVar13 = puVar13 + 3;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  if (*(long *)(unaff_x27 + 0x100) != 0) {
    _free(lVar14);
  }
  *(undefined1 *)(unaff_x27 + 0x122) = 0;
  *(undefined1 *)(unaff_x27 + 0x120) = 1;
  *(undefined8 *)(unaff_x27 + 0xa8) = 0;
  *(undefined8 *)(unaff_x27 + 0xb0) = 8;
  *(undefined8 *)(unaff_x27 + 0xb8) = 0;
  FUN_100cbbf48(in_stack_00000048);
  if (*(long *)(unaff_x27 + 0x88) != -0x8000000000000000) {
    *(undefined1 *)(unaff_x27 + 0xc3) = 0;
    *(undefined8 *)(unaff_x27 + 0xd0) = *(undefined8 *)(unaff_x27 + 0x90);
    *(long *)(unaff_x27 + 200) = *(long *)(unaff_x27 + 0x88);
    *(undefined8 *)(unaff_x27 + 0xd8) = *(undefined8 *)(unaff_x27 + 0x98);
    *(long *)(unaff_x27 + 0xe0) = *(long *)(*(long *)(unaff_x27 + 0x50) + 8) + 0x10;
    *(undefined1 *)(unaff_x27 + 0x150) = 0;
    auVar22 = FUN_100fd3e50(unaff_x27 + 0xe0,in_stack_000000c0);
    uVar10 = auVar22._8_8_;
    pcVar6 = auVar22._0_8_;
    if (pcVar6 == (char *)0x0) {
      *in_stack_000000c8 = 0x8000000000000001;
      uVar8 = 5;
      goto LAB_10095573c;
    }
    if (((*(char *)(unaff_x27 + 0x150) == '\x03') && (*(char *)(unaff_x27 + 0x148) == '\x03')) &&
       (*(char *)(unaff_x27 + 0x100) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (unaff_x27 + 0x108);
      uVar10 = extraout_x1;
      if (*(long *)(unaff_x27 + 0x110) != 0) {
        (**(code **)(*(long *)(unaff_x27 + 0x110) + 0x18))(*(undefined8 *)(unaff_x27 + 0x118));
        uVar10 = extraout_x1_00;
      }
    }
    lVar14 = *(long *)(pcVar6 + 0x40);
    if (lVar14 != 0) {
      uVar21 = *(undefined8 *)(pcVar6 + 0x48);
      uVar2 = *(undefined8 *)(pcVar6 + 0x50);
      uVar18 = *(undefined8 *)(unaff_x27 + 0xd0);
      lVar3 = *(long *)(unaff_x27 + 0xd8);
      auVar22 = FUN_100e8dd9c(uVar21,uVar2,uVar18,lVar3);
      uVar10 = auVar22._8_8_;
      lVar9 = 0;
      lVar1 = *(long *)(pcVar6 + 0x28);
      uVar4 = *(ulong *)(pcVar6 + 0x30);
      bVar7 = auVar22[7] >> 1;
      uVar16 = auVar22._0_8_ & uVar4;
      uVar20 = *(undefined8 *)(lVar1 + uVar16);
      uVar19 = CONCAT17(-((byte)((ulong)uVar20 >> 0x38) == bVar7),
                        CONCAT16(-((byte)((ulong)uVar20 >> 0x30) == bVar7),
                                 CONCAT15(-((byte)((ulong)uVar20 >> 0x28) == bVar7),
                                          CONCAT14(-((byte)((ulong)uVar20 >> 0x20) == bVar7),
                                                   CONCAT13(-((byte)((ulong)uVar20 >> 0x18) == bVar7
                                                             ),CONCAT12(-((byte)((ulong)uVar20 >>
                                                                                0x10) == bVar7),
                                                                        CONCAT11(-((byte)((ulong)
                                                  uVar20 >> 8) == bVar7),-((byte)uVar20 == bVar7))))
                                                  )))) & 0x8080808080808080;
      while( true ) {
        while (uVar19 == 0) {
          bVar17 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar20 >> 0x38) == -1),
                                       CONCAT16(-((char)((ulong)uVar20 >> 0x30) == -1),
                                                CONCAT15(-((char)((ulong)uVar20 >> 0x28) == -1),
                                                         CONCAT14(-((char)((ulong)uVar20 >> 0x20) ==
                                                                   -1),CONCAT13(-((char)((ulong)
                                                  uVar20 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar20 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar20 >> 8) ==
                                                                     -1),-((char)uVar20 == -1)))))))
                                      ),1);
          if ((bVar17 & 1) != 0) goto LAB_10095564c;
          lVar9 = lVar9 + 8;
          uVar16 = uVar16 + lVar9 & uVar4;
          uVar20 = *(undefined8 *)(lVar1 + uVar16);
          uVar19 = CONCAT17(-((byte)((ulong)uVar20 >> 0x38) == bVar7),
                            CONCAT16(-((byte)((ulong)uVar20 >> 0x30) == bVar7),
                                     CONCAT15(-((byte)((ulong)uVar20 >> 0x28) == bVar7),
                                              CONCAT14(-((byte)((ulong)uVar20 >> 0x20) == bVar7),
                                                       CONCAT13(-((byte)((ulong)uVar20 >> 0x18) ==
                                                                 bVar7),CONCAT12(-((byte)((ulong)
                                                  uVar20 >> 0x10) == bVar7),
                                                  CONCAT11(-((byte)((ulong)uVar20 >> 8) == bVar7),
                                                           -((byte)uVar20 == bVar7)))))))) &
                   0x8080808080808080;
        }
        uVar15 = (uVar19 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar19 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        lVar11 = lVar1 + (uVar16 + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3) & uVar4) *
                         -0x20;
        if ((lVar3 == *(long *)(lVar11 + -0x10)) &&
           (iVar5 = _memcmp(uVar18,*(undefined8 *)(lVar11 + -0x18),lVar3), uVar10 = extraout_x1_01,
           iVar5 == 0)) break;
        uVar19 = uVar19 - 1 & uVar19;
      }
      if (*(long *)(lVar11 + -8) == *(long *)(unaff_x27 + 0xa0)) {
        auVar22 = FUN_100e8dd9c(uVar21,uVar2,uVar18,lVar3);
        uVar10 = auVar22._8_8_;
        lVar9 = 0;
        bVar7 = auVar22[7] >> 1;
        uVar16 = auVar22._0_8_ & uVar4;
        uVar21 = *(undefined8 *)(lVar1 + uVar16);
        uVar19 = CONCAT17(-((byte)((ulong)uVar21 >> 0x38) == bVar7),
                          CONCAT16(-((byte)((ulong)uVar21 >> 0x30) == bVar7),
                                   CONCAT15(-((byte)((ulong)uVar21 >> 0x28) == bVar7),
                                            CONCAT14(-((byte)((ulong)uVar21 >> 0x20) == bVar7),
                                                     CONCAT13(-((byte)((ulong)uVar21 >> 0x18) ==
                                                               bVar7),CONCAT12(-((byte)((ulong)
                                                  uVar21 >> 0x10) == bVar7),
                                                  CONCAT11(-((byte)((ulong)uVar21 >> 8) == bVar7),
                                                           -((byte)uVar21 == bVar7)))))))) &
                 0x8080808080808080;
        goto joined_r0x0001009557a0;
      }
    }
LAB_10095564c:
    if (*pcVar6 == '\0') {
      *pcVar6 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar6,uVar10,1000000000);
    }
    FUN_1060fa678(pcVar6,1,pcVar6);
    if (*(long *)(unaff_x27 + 200) != 0) {
      _free(*(undefined8 *)(unaff_x27 + 0xd0));
    }
  }
  uVar18 = *(undefined8 *)(unaff_x27 + 0xb0);
  uVar21 = *(undefined8 *)(unaff_x27 + 0xa8);
  uVar10 = *(undefined8 *)(unaff_x27 + 0xb8);
  lVar14 = **(long **)(unaff_x27 + 0xa0);
  **(long **)(unaff_x27 + 0xa0) = lVar14 + -1;
  LORelease();
  if (lVar14 == 1) {
    DataMemoryBarrier(2,1);
    func_0x0001060e2224();
  }
  *(undefined1 *)(unaff_x27 + 0xc3) = 0;
  if ((*(byte *)(unaff_x27 + 0xc1) & 1) != 0) {
    lVar14 = *(long *)(unaff_x27 + 0x78);
    lVar9 = *(long *)(unaff_x27 + 0x80);
    if (lVar9 != 0) {
      puVar13 = (undefined8 *)(lVar14 + 8);
      do {
        if (puVar13[-1] != 0) {
          _free(*puVar13);
        }
        puVar13 = puVar13 + 3;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    if (*(long *)(unaff_x27 + 0x70) != 0) {
      _free(lVar14);
    }
  }
  *(undefined1 *)(unaff_x27 + 0xc1) = 0;
  if (((*(byte *)(unaff_x27 + 0xc2) & 1) != 0) && (*(long *)(unaff_x27 + 0x58) != 0)) {
    _free(*(undefined8 *)(unaff_x27 + 0x60));
  }
  *(undefined1 *)(unaff_x27 + 0xc2) = 0;
  *in_stack_000000c8 = 0x8000000000000000;
  in_stack_000000c8[2] = uVar18;
  in_stack_000000c8[1] = uVar21;
  in_stack_000000c8[3] = uVar10;
  uVar8 = 1;
LAB_10095573c:
  *(undefined1 *)(unaff_x27 + 0xc0) = uVar8;
  return;
joined_r0x0001009557a0:
  if (uVar19 != 0) {
    uVar15 = (uVar19 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar19 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
    uVar15 = uVar16 + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3) & uVar4;
    lVar11 = lVar1 + uVar15 * -0x20;
    if ((lVar3 == *(long *)(lVar11 + -0x10)) &&
       (iVar5 = _memcmp(uVar18,*(undefined8 *)(lVar11 + -0x18),lVar3), uVar10 = extraout_x1_02,
       iVar5 == 0)) {
      puVar13 = (undefined8 *)(lVar1 + (uVar15 - 8 & uVar4));
      uVar21 = *puVar13;
      uVar18 = *(undefined8 *)(lVar1 + uVar15);
      uVar19 = CONCAT17(-((char)((ulong)uVar18 >> 0x38) == -1),
                        CONCAT16(-((char)((ulong)uVar18 >> 0x30) == -1),
                                 CONCAT15(-((char)((ulong)uVar18 >> 0x28) == -1),
                                          CONCAT14(-((char)((ulong)uVar18 >> 0x20) == -1),
                                                   CONCAT13(-((char)((ulong)uVar18 >> 0x18) == -1),
                                                            CONCAT12(-((char)((ulong)uVar18 >> 0x10)
                                                                      == -1),CONCAT11(-((char)((
                                                  ulong)uVar18 >> 8) == -1),-((char)uVar18 == -1))))
                                                  ))));
      uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
      uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
      uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
      if (((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3) +
          ((ulong)LZCOUNT(CONCAT17(-((char)((ulong)uVar21 >> 0x38) == -1),
                                   CONCAT16(-((char)((ulong)uVar21 >> 0x30) == -1),
                                            CONCAT15(-((char)((ulong)uVar21 >> 0x28) == -1),
                                                     CONCAT14(-((char)((ulong)uVar21 >> 0x20) == -1)
                                                              ,CONCAT13(-((char)((ulong)uVar21 >>
                                                                                0x18) == -1),
                                                                        CONCAT12(-((char)((ulong)
                                                  uVar21 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar21 >> 8) == -1),
                                                           -((char)uVar21 == -1))))))))) >> 3) < 8)
      {
        *(long *)(pcVar6 + 0x38) = *(long *)(pcVar6 + 0x38) + 1;
        uVar8 = 0xff;
      }
      else {
        uVar8 = 0x80;
      }
      *(undefined1 *)(lVar1 + uVar15) = uVar8;
      *(undefined1 *)(puVar13 + 1) = uVar8;
      *(long *)(pcVar6 + 0x40) = lVar14 + -1;
      if (*(long *)(lVar11 + -0x20) != -0x8000000000000000) {
        plVar12 = *(long **)(lVar11 + -8);
        if (*(long *)(lVar11 + -0x20) != 0) {
          _free(*(undefined8 *)(lVar11 + -0x18));
          uVar10 = extraout_x1_03;
        }
        if (plVar12 != (long *)0x0) {
          lVar14 = *plVar12;
          *plVar12 = lVar14 + -1;
          LORelease();
          if (lVar14 == 1) {
            DataMemoryBarrier(2,1);
            func_0x0001060e2224(&stack0x00000200);
            uVar10 = extraout_x1_04;
          }
        }
      }
      goto LAB_10095564c;
    }
    uVar19 = uVar19 - 1 & uVar19;
    goto joined_r0x0001009557a0;
  }
  bVar17 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar21 >> 0x38) == -1),
                               CONCAT16(-((char)((ulong)uVar21 >> 0x30) == -1),
                                        CONCAT15(-((char)((ulong)uVar21 >> 0x28) == -1),
                                                 CONCAT14(-((char)((ulong)uVar21 >> 0x20) == -1),
                                                          CONCAT13(-((char)((ulong)uVar21 >> 0x18)
                                                                    == -1),CONCAT12(-((char)((ulong)
                                                  uVar21 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar21 >> 8) == -1),
                                                           -((char)uVar21 == -1)))))))),1);
  if ((bVar17 & 1) != 0) goto LAB_10095564c;
  lVar9 = lVar9 + 8;
  uVar16 = uVar16 + lVar9 & uVar4;
  uVar21 = *(undefined8 *)(lVar1 + uVar16);
  uVar19 = CONCAT17(-((byte)((ulong)uVar21 >> 0x38) == bVar7),
                    CONCAT16(-((byte)((ulong)uVar21 >> 0x30) == bVar7),
                             CONCAT15(-((byte)((ulong)uVar21 >> 0x28) == bVar7),
                                      CONCAT14(-((byte)((ulong)uVar21 >> 0x20) == bVar7),
                                               CONCAT13(-((byte)((ulong)uVar21 >> 0x18) == bVar7),
                                                        CONCAT12(-((byte)((ulong)uVar21 >> 0x10) ==
                                                                  bVar7),CONCAT11(-((byte)((ulong)
                                                  uVar21 >> 8) == bVar7),-((byte)uVar21 == bVar7))))
                                              )))) & 0x8080808080808080;
  goto joined_r0x0001009557a0;
}

