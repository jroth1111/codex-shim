
void FUN_1009564ec(void)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar7;
  undefined1 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  byte bVar12;
  long unaff_x19;
  long *unaff_x20;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long unaff_x25;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  long unaff_x29;
  byte bVar19;
  long lVar20;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  long lVar21;
  undefined1 auVar28 [16];
  ulong in_stack_00000000;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000070;
  long in_stack_00000078;
  undefined8 *in_stack_00000088;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x80,s__failed_to_start_fuzzy_file_sear_108acc127,&stack0x00000070);
  lVar15 = *(long *)(unaff_x29 + -0x80);
  pcVar6 = *(char **)(unaff_x29 + -0x78);
  lVar13 = *(long *)(unaff_x29 + -0x70);
  (**(code **)*in_stack_00000088)();
  if (lVar15 == -0x8000000000000000) {
    *(undefined1 *)(unaff_x19 + 0xda) = 1;
    *(char **)(unaff_x19 + 0x50) = pcVar6;
    *(long *)(unaff_x19 + 0x58) = lVar13;
    *(long *)(unaff_x19 + 0x60) = *(long *)(unaff_x25 + 0x10) + 0x10;
    *(undefined1 *)(unaff_x19 + 0xd0) = 0;
    pcVar6 = (char *)FUN_100fd3e50(unaff_x19 + 0x60);
    if (pcVar6 == (char *)0x0) {
      *unaff_x20 = -0x7fffffffffffffff;
      uVar8 = 3;
      goto LAB_100956858;
    }
    if (((*(char *)(unaff_x19 + 0xd0) == '\x03') && (*(char *)(unaff_x19 + 200) == '\x03')) &&
       (*(char *)(unaff_x19 + 0x80) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (unaff_x19 + 0x88);
      if (*(long *)(unaff_x19 + 0x90) != 0) {
        (**(code **)(*(long *)(unaff_x19 + 0x90) + 0x18))(*(undefined8 *)(unaff_x19 + 0x98));
      }
    }
    lVar15 = *(long *)(unaff_x19 + 0x38);
    lVar1 = *(long *)(unaff_x19 + 0x40);
    *(undefined2 *)(unaff_x19 + 0xda) = 0;
    lVar20 = *(long *)(unaff_x19 + 0x48);
    lVar13 = *(long *)(unaff_x19 + 0x50);
    lVar17 = *(long *)(unaff_x19 + 0x58);
    uVar7 = *(undefined8 *)(pcVar6 + 0x48);
    uVar2 = *(undefined8 *)(pcVar6 + 0x50);
    *(long *)(unaff_x29 + -0x80) = lVar13;
    *(long *)(unaff_x29 + -0x78) = lVar17;
    auVar28 = FUN_100e8dd9c(uVar7,uVar2);
    uVar7 = auVar28._8_8_;
    if (*(long *)(pcVar6 + 0x38) == 0) {
      __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17h276fb22106f2259cE
                (pcVar6 + 0x28,1,pcVar6 + 0x48,1);
      uVar7 = extraout_x1_01;
    }
    bVar4 = false;
    lVar11 = 0;
    plVar16 = *(long **)(pcVar6 + 0x28);
    uVar3 = *(ulong *)(pcVar6 + 0x30);
    bVar12 = auVar28[7] >> 1;
    uVar14 = auVar28._0_8_ & uVar3;
    lVar21 = *(long *)((long)plVar16 + uVar14);
    uVar10 = CONCAT17(-((byte)((ulong)lVar21 >> 0x38) == bVar12),
                      CONCAT16(-((byte)((ulong)lVar21 >> 0x30) == bVar12),
                               CONCAT15(-((byte)((ulong)lVar21 >> 0x28) == bVar12),
                                        CONCAT14(-((byte)((ulong)lVar21 >> 0x20) == bVar12),
                                                 CONCAT13(-((byte)((ulong)lVar21 >> 0x18) == bVar12)
                                                          ,CONCAT12(-((byte)((ulong)lVar21 >> 0x10)
                                                                     == bVar12),
                                                                    CONCAT11(-((byte)((ulong)lVar21
                                                                                     >> 8) == bVar12
                                                                              ),-((byte)lVar21 ==
                                                                                 bVar12)))))))) &
             0x8080808080808080;
joined_r0x000100956604:
    while (uVar10 == 0) {
      cVar22 = (char)((ulong)lVar21 >> 8);
      cVar23 = (char)((ulong)lVar21 >> 0x10);
      cVar24 = (char)((ulong)lVar21 >> 0x18);
      cVar25 = (char)((ulong)lVar21 >> 0x20);
      cVar26 = (char)((ulong)lVar21 >> 0x28);
      cVar27 = (char)((ulong)lVar21 >> 0x30);
      if (bVar4) {
LAB_100956694:
        bVar19 = NEON_umaxv(CONCAT17(-((char)((ulong)lVar21 >> 0x38) == -1),
                                     CONCAT16(-(cVar27 == -1),
                                              CONCAT15(-(cVar26 == -1),
                                                       CONCAT14(-(cVar25 == -1),
                                                                CONCAT13(-(cVar24 == -1),
                                                                         CONCAT12(-(cVar23 == -1),
                                                                                  CONCAT11(-(cVar22 
                                                  == -1),-((char)lVar21 == -1)))))))),1);
        if ((bVar19 & 1) != 0) {
          uVar10 = (ulong)*(char *)((long)plVar16 + in_stack_00000000);
          if (-1 < *(char *)((long)plVar16 + in_stack_00000000)) {
            lVar11 = *plVar16;
            uVar10 = CONCAT17(-(lVar11 < 0),
                              CONCAT16(-((char)((ulong)lVar11 >> 0x30) < '\0'),
                                       CONCAT15(-((char)((ulong)lVar11 >> 0x28) < '\0'),
                                                CONCAT14(-((char)((ulong)lVar11 >> 0x20) < '\0'),
                                                         CONCAT13(-((char)((ulong)lVar11 >> 0x18) <
                                                                   '\0'),CONCAT12(-((char)((ulong)
                                                  lVar11 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar11 >> 8) < '\0'),
                                                           -((char)lVar11 < '\0'))))))));
            uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
            uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
            uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
            uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
            in_stack_00000000 = (ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3;
            uVar10 = (ulong)*(byte *)((long)plVar16 + in_stack_00000000);
          }
          bVar12 = auVar28[7] >> 1;
          *(byte *)((long)plVar16 + in_stack_00000000) = bVar12;
          *(byte *)((long)plVar16 + (in_stack_00000000 - 8 & uVar3) + 8) = bVar12;
          *(long *)(pcVar6 + 0x40) = *(long *)(pcVar6 + 0x40) + 1;
          *(ulong *)(pcVar6 + 0x38) = *(long *)(pcVar6 + 0x38) - (uVar10 & 1);
          plVar16[in_stack_00000000 * -5 + -5] = lVar15;
          plVar16[in_stack_00000000 * -5 + -4] = lVar1;
          plVar16[in_stack_00000000 * -5 + -3] = lVar20;
          plVar16[in_stack_00000000 * -5 + -2] = lVar13;
          plVar16[in_stack_00000000 * -5 + -1] = lVar17;
          in_stack_00000070 = 0;
          if (*pcVar6 != '\0') goto LAB_1009568ac;
          *pcVar6 = '\x01';
          goto LAB_100956824;
        }
        bVar4 = true;
      }
      else {
        uVar10 = CONCAT17(-(lVar21 < 0),
                          CONCAT16(-(cVar27 < '\0'),
                                   CONCAT15(-(cVar26 < '\0'),
                                            CONCAT14(-(cVar25 < '\0'),
                                                     CONCAT13(-(cVar24 < '\0'),
                                                              CONCAT12(-(cVar23 < '\0'),
                                                                       CONCAT11(-(cVar22 < '\0'),
                                                                                -((char)lVar21 <
                                                                                 '\0'))))))));
        if (uVar10 != 0) {
          uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          in_stack_00000000 =
               uVar14 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & uVar3;
          goto LAB_100956694;
        }
        bVar4 = false;
      }
      lVar11 = lVar11 + 8;
      uVar14 = lVar11 + uVar14 & uVar3;
      lVar21 = *(long *)((long)plVar16 + uVar14);
      uVar10 = CONCAT17(-((byte)((ulong)lVar21 >> 0x38) == bVar12),
                        CONCAT16(-((byte)((ulong)lVar21 >> 0x30) == bVar12),
                                 CONCAT15(-((byte)((ulong)lVar21 >> 0x28) == bVar12),
                                          CONCAT14(-((byte)((ulong)lVar21 >> 0x20) == bVar12),
                                                   CONCAT13(-((byte)((ulong)lVar21 >> 0x18) ==
                                                             bVar12),CONCAT12(-((byte)((ulong)lVar21
                                                                                      >> 0x10) ==
                                                                               bVar12),CONCAT11(-((
                                                  byte)((ulong)lVar21 >> 8) == bVar12),
                                                  -((byte)lVar21 == bVar12)))))))) &
               0x8080808080808080;
    }
    uVar9 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar14 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & uVar3;
    if ((lVar20 != plVar16[uVar9 * -5 + -3]) ||
       (iVar5 = _memcmp(lVar1,plVar16[uVar9 * -5 + -4]), uVar7 = extraout_x1, iVar5 != 0)) {
      uVar10 = uVar10 - 1 & uVar10;
      goto joined_r0x000100956604;
    }
    lVar11 = plVar16[uVar9 * -5 + -1];
    lVar20 = plVar16[uVar9 * -5 + -2];
    plVar16[uVar9 * -5 + -2] = lVar13;
    plVar16[uVar9 * -5 + -1] = lVar17;
    if (lVar15 != 0) {
      _free(lVar1);
    }
    in_stack_00000070 = lVar20;
    in_stack_00000078 = lVar11;
    FUN_100e48428(&stack0x00000070);
    uVar7 = extraout_x1_00;
    if (*pcVar6 == '\0') {
      *pcVar6 = '\x01';
    }
    else {
LAB_1009568ac:
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar6,uVar7,1000000000);
    }
LAB_100956824:
    FUN_1060fa678(pcVar6,1,pcVar6);
    *(undefined2 *)(unaff_x19 + 0xd9) = 0;
    *(undefined1 *)(unaff_x19 + 0xdb) = 0;
    lVar15 = -0x8000000000000000;
  }
  else {
    *(undefined1 *)(unaff_x19 + 0xda) = 0;
    plVar16 = (long *)0xffffffffffff80a5;
    if ((*(byte *)(unaff_x19 + 0xd9) & 1) != 0) {
      if (in_stack_00000050 != 0) {
        puVar18 = (undefined8 *)(in_stack_00000048 + 8);
        do {
          if (puVar18[-1] != 0) {
            _free(*puVar18);
          }
          puVar18 = puVar18 + 3;
          in_stack_00000050 = in_stack_00000050 + -1;
        } while (in_stack_00000050 != 0);
      }
      if (in_stack_00000040 != 0) {
        _free(in_stack_00000048);
      }
    }
    *(undefined1 *)(unaff_x19 + 0xd9) = 0;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x40));
    }
    *(undefined1 *)(unaff_x19 + 0xdb) = 0;
  }
  *unaff_x20 = lVar15;
  unaff_x20[1] = (long)pcVar6;
  unaff_x20[2] = lVar13;
  unaff_x20[3] = -0x7ffffffffffffffb;
  uVar8 = 1;
  unaff_x20[0xc] = (long)plVar16;
LAB_100956858:
  *(undefined1 *)(unaff_x19 + 0xd8) = uVar8;
  return;
}

