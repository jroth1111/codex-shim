
/* WARNING: Removing unreachable block (ram,0x0001013a148c) */
/* WARNING: Removing unreachable block (ram,0x0001013a158c) */
/* WARNING: Removing unreachable block (ram,0x0001013a1720) */

void FUN_1013a1520(undefined8 param_1,long param_2)

{
  byte *pbVar1;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  code *pcVar9;
  int iVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  ulong unaff_x20;
  ulong uVar17;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  byte *pbVar18;
  byte *unaff_x23;
  long unaff_x26;
  long lVar19;
  byte bVar20;
  uint unaff_w27;
  byte *pbVar21;
  byte *pbVar22;
  byte *unaff_x28;
  long unaff_x29;
  byte bVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long lVar28;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  long lVar29;
  byte bVar36;
  long *in_stack_00000008;
  ulong in_stack_00000010;
  byte *in_stack_00000018;
  byte *in_stack_00000028;
  byte *pbStack0000000000000030;
  long in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  undefined8 *in_stack_00000060;
  byte *in_stack_00000090;
  long in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  long *in_stack_000000e0;
  byte *in_stack_000000e8;
  long in_stack_000000f0;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  byte in_stack_00000130;
  long in_stack_00000138;
  byte *in_stack_00000140;
  long in_stack_00000148;
  
code_r0x0001013a1520:
  pbStack0000000000000030 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,param_2);
  pbVar18 = in_stack_00000028;
joined_r0x0001013a153c:
  in_stack_00000028 = pbVar18;
  if ((long)unaff_x20 < -0x7ffffffffffffffe) goto LAB_1013a1620;
joined_r0x0001013a1540:
  in_stack_00000028 = pbVar18;
  if (unaff_x20 != 0) {
    _free(unaff_x28);
  }
LAB_1013a1620:
  FUN_100d34830(unaff_x29 + -0xd0);
  if (*(char *)(unaff_x29 + -0xf0) != '\x16') {
    FUN_100e077ec(unaff_x29 + -0xf0);
  }
  cVar6 = '\0';
  uVar17 = 0x8000000000000001;
  if ((unaff_w27 & 0x1e) == 0x14) goto LAB_1013a165c;
LAB_1013a1654:
  uVar17 = 0x8000000000000001;
  FUN_100e077ec(&stack0x00000130);
LAB_1013a165c:
  pbVar18 = unaff_x23;
  pbVar12 = pbStack0000000000000030;
  if (uVar17 != 0x8000000000000001) {
    uVar11 = FUN_100e8dd9c(in_stack_00000100,in_stack_00000108,unaff_x23,unaff_x26);
    if (in_stack_000000f0 == 0) {
      __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17h22eb2432f7a3cebdE
                (&stack0x000000e0,1,&stack0x00000100,1);
    }
    unaff_x28 = in_stack_000000e8;
    plVar8 = in_stack_000000e0;
    bVar7 = false;
    lVar19 = 0;
    bVar4 = (byte)(uVar11 >> 0x38);
    bVar20 = bVar4 >> 1;
    do {
      uVar11 = uVar11 & (ulong)unaff_x28;
      lVar29 = *(long *)((long)plVar8 + uVar11);
      bVar23 = (byte)lVar29;
      bVar30 = (byte)((ulong)lVar29 >> 8);
      bVar31 = (byte)((ulong)lVar29 >> 0x10);
      bVar32 = (byte)((ulong)lVar29 >> 0x18);
      bVar33 = (byte)((ulong)lVar29 >> 0x20);
      bVar34 = (byte)((ulong)lVar29 >> 0x28);
      bVar35 = (byte)((ulong)lVar29 >> 0x30);
      bVar36 = (byte)((ulong)lVar29 >> 0x38);
      for (uVar15 = CONCAT17(-(bVar36 == bVar20),
                             CONCAT16(-(bVar35 == bVar20),
                                      CONCAT15(-(bVar34 == bVar20),
                                               CONCAT14(-(bVar33 == bVar20),
                                                        CONCAT13(-(bVar32 == bVar20),
                                                                 CONCAT12(-(bVar31 == bVar20),
                                                                          CONCAT11(-(bVar30 ==
                                                                                    bVar20),-(bVar23
                                                                                             == 
                                                  bVar20)))))))) & 0x8080808080808080; uVar15 != 0;
          uVar15 = uVar15 - 1 & uVar15) {
        uVar13 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar13 = uVar11 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3) & (ulong)unaff_x28;
        if ((in_stack_00000050 == plVar8[uVar13 * -7 + -5]) &&
           (iVar10 = _memcmp(unaff_x23,plVar8[uVar13 * -7 + -6]), iVar10 == 0)) {
          lVar19 = plVar8[uVar13 * -7 + -4];
          lVar29 = plVar8[uVar13 * -7 + -3];
          plVar8[uVar13 * -7 + -4] = uVar17;
          plVar8[uVar13 * -7 + -3] = (long)pbStack0000000000000030;
          plVar8[uVar13 * -7 + -2] = in_stack_00000040;
          *(char *)(plVar8 + uVar13 * -7 + -1) = cVar6;
          if (in_stack_00000038 != 0) {
            _free(unaff_x23);
          }
          unaff_x21 = &stack0x000000e0;
          if (-0x7fffffffffffffff < lVar19 && lVar19 != 0) {
            _free(lVar29);
          }
          goto LAB_1013a0e7c;
        }
        unaff_x21 = &stack0x000000e0;
      }
      uVar15 = in_stack_00000010;
      if (bVar7) {
LAB_1013a0d88:
        bVar23 = NEON_umaxv(CONCAT17(-(bVar36 == 0xff),
                                     CONCAT16(-(bVar35 == 0xff),
                                              CONCAT15(-(bVar34 == 0xff),
                                                       CONCAT14(-(bVar33 == 0xff),
                                                                CONCAT13(-(bVar32 == 0xff),
                                                                         CONCAT12(-(bVar31 == 0xff),
                                                                                  CONCAT11(-(bVar30 
                                                  == 0xff),-(bVar23 == 0xff)))))))),1);
        if ((bVar23 & 1) != 0) goto LAB_1013a0e10;
        bVar7 = true;
        in_stack_00000010 = uVar15;
      }
      else {
        uVar15 = CONCAT17(-(lVar29 < 0),
                          CONCAT16(-((char)bVar35 < '\0'),
                                   CONCAT15(-((char)bVar34 < '\0'),
                                            CONCAT14(-((char)bVar33 < '\0'),
                                                     CONCAT13(-((char)bVar32 < '\0'),
                                                              CONCAT12(-((char)bVar31 < '\0'),
                                                                       CONCAT11(-((char)bVar30 <
                                                                                 '\0'),-((char)
                                                  bVar23 < '\0'))))))));
        if (uVar15 != 0) {
          uVar15 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
          uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
          uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
          uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
          uVar15 = uVar11 + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3) &
                   (ulong)unaff_x28;
          goto LAB_1013a0d88;
        }
        bVar7 = false;
      }
      lVar19 = lVar19 + 8;
      uVar11 = lVar19 + uVar11;
    } while( true );
  }
  goto joined_r0x0001013a1958;
LAB_1013a0e10:
  uVar11 = (ulong)*(char *)((long)plVar8 + uVar15);
  if (-1 < *(char *)((long)plVar8 + uVar15)) {
    lVar19 = *plVar8;
    uVar11 = CONCAT17(-(lVar19 < 0),
                      CONCAT16(-((char)((ulong)lVar19 >> 0x30) < '\0'),
                               CONCAT15(-((char)((ulong)lVar19 >> 0x28) < '\0'),
                                        CONCAT14(-((char)((ulong)lVar19 >> 0x20) < '\0'),
                                                 CONCAT13(-((char)((ulong)lVar19 >> 0x18) < '\0'),
                                                          CONCAT12(-((char)((ulong)lVar19 >> 0x10) <
                                                                    '\0'),CONCAT11(-((char)((ulong)
                                                  lVar19 >> 8) < '\0'),-((char)lVar19 < '\0'))))))))
    ;
    uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
    uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
    uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    uVar15 = (ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3;
    uVar11 = (ulong)*(byte *)((long)plVar8 + uVar15);
  }
  *(byte *)((long)plVar8 + uVar15) = bVar4 >> 1;
  *(byte *)((long)plVar8 + (uVar15 - 8 & (ulong)unaff_x28) + 8) = bVar4 >> 1;
  unaff_x21[3] = unaff_x21[3] + 1;
  unaff_x21[2] = unaff_x21[2] - (uVar11 & 1);
  plVar8[uVar15 * -7 + -7] = in_stack_00000038;
  plVar8[uVar15 * -7 + -6] = (long)unaff_x23;
  plVar8[uVar15 * -7 + -5] = in_stack_00000050;
  plVar8[uVar15 * -7 + -4] = uVar17;
  plVar8[uVar15 * -7 + -3] = (long)pbStack0000000000000030;
  plVar8[uVar15 * -7 + -2] = in_stack_00000040;
  *(char *)(plVar8 + uVar15 * -7 + -1) = cVar6;
LAB_1013a0e7c:
  pbVar18 = in_stack_00000018;
  if (in_stack_00000028 == in_stack_00000018) {
LAB_1013a19c0:
    lVar29 = unaff_x21[3];
    lVar19 = unaff_x21[2];
    lVar28 = unaff_x21[5];
    lVar16 = unaff_x21[4];
    in_stack_00000008[1] = (long)in_stack_000000e8;
    *in_stack_00000008 = (long)in_stack_000000e0;
    in_stack_00000008[3] = lVar29;
    in_stack_00000008[2] = lVar19;
    in_stack_00000008[5] = lVar28;
    in_stack_00000008[4] = lVar16;
    if (*in_stack_00000008 != 0) {
      in_stack_000000b8 = in_stack_00000008[1];
      in_stack_000000b0 = *in_stack_00000008;
      in_stack_000000c8 = in_stack_00000008[3];
      in_stack_000000c0 = in_stack_00000008[2];
      in_stack_000000d8 = in_stack_00000008[5];
      in_stack_000000d0 = in_stack_00000008[4];
      FUN_100d34830(&stack0x00000088);
      if (in_stack_00000018 == pbVar18) {
        return;
      }
      *(long *)(unaff_x29 + -0xf0) = in_stack_00000048;
      lVar19 = FUN_1087e422c(((ulong)((long)in_stack_00000018 - (long)pbVar18) >> 6) +
                             in_stack_00000048,unaff_x29 + -0xf0,&UNK_10b23a190);
      *in_stack_00000008 = 0;
      in_stack_00000008[1] = lVar19;
      FUN_100d42e74(&stack0x000000b0);
      return;
    }
    goto LAB_1013a1a30;
  }
  pbVar18 = in_stack_00000028 + 0x40;
  bVar4 = *in_stack_00000028;
  in_stack_00000090 = pbVar18;
  if (bVar4 == 0x16) goto LAB_1013a19c0;
  in_stack_00000048 = in_stack_00000048 + 1;
  uVar24 = *(undefined8 *)(in_stack_00000028 + 1);
  in_stack_00000060[1] = *(undefined8 *)(in_stack_00000028 + 9);
  *in_stack_00000060 = uVar24;
  uVar24 = *(undefined8 *)(in_stack_00000028 + 0x10);
  uVar27 = *(undefined8 *)(in_stack_00000028 + 0x28);
  uVar26 = *(undefined8 *)(in_stack_00000028 + 0x20);
  *(undefined8 *)((long)in_stack_00000060 + 0x17) = *(undefined8 *)(in_stack_00000028 + 0x18);
  *(undefined8 *)((long)in_stack_00000060 + 0xf) = uVar24;
  uVar25 = *(undefined8 *)(in_stack_00000028 + 0x38);
  uVar24 = *(undefined8 *)(in_stack_00000028 + 0x30);
  unaff_x21[7] = uVar27;
  unaff_x21[6] = uVar26;
  unaff_x21[9] = uVar25;
  unaff_x21[8] = uVar24;
  *(byte *)(unaff_x29 + -0xf0) = bVar4;
  in_stack_000000a8 = in_stack_00000048;
  FUN_1004b62d4(unaff_x29 + -0x90,unaff_x29 + -0xf0);
  in_stack_00000038 = *(long *)(unaff_x29 + -0x90);
  unaff_x23 = *(byte **)(unaff_x29 + -0x88);
  if (in_stack_00000038 == -0x8000000000000000) {
    FUN_100e077ec(&stack0x00000110);
    goto LAB_1013a18bc;
  }
  unaff_x26 = *(long *)(unaff_x29 + -0x80);
  unaff_x21[0xb] = unaff_x21[7];
  unaff_x21[10] = unaff_x21[6];
  lVar19 = in_stack_00000138;
  bVar4 = in_stack_00000130;
  unaff_x21[0xd] = unaff_x21[9];
  unaff_x21[0xc] = unaff_x21[8];
  lVar29 = in_stack_00000148;
  pbVar12 = in_stack_00000140;
  in_stack_00000028 = pbVar18;
  in_stack_00000050 = unaff_x26;
  if (in_stack_00000130 == 0x14) {
    pbVar1 = in_stack_00000140 + in_stack_00000148 * 0x20;
    *(byte **)(unaff_x29 + -0xf0) = in_stack_00000140;
    *(byte **)(unaff_x29 + -0xe8) = in_stack_00000140;
    *(long *)(unaff_x29 + -0xe0) = in_stack_00000138;
    *(byte **)(unaff_x29 + -0xd8) = pbVar1;
    *(undefined8 *)(unaff_x29 + -0xd0) = 0;
    pbVar18 = in_stack_00000140;
    if (in_stack_00000148 == 0) {
LAB_1013a13f4:
      pbStack0000000000000030 = (byte *)FUN_1087e422c(0,&UNK_10b230828,&UNK_10b20a590);
    }
    else {
      pbVar18 = in_stack_00000140 + 0x20;
      bVar20 = *in_stack_00000140;
      *(byte **)(unaff_x29 + -0xe8) = pbVar18;
      if (bVar20 == 0x16) goto LAB_1013a13f4;
      uVar24 = *(undefined8 *)(in_stack_00000140 + 1);
      unaff_x22[1] = *(undefined8 *)(in_stack_00000140 + 9);
      *unaff_x22 = uVar24;
      uVar24 = *(undefined8 *)(in_stack_00000140 + 0x10);
      *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)(in_stack_00000140 + 0x18);
      *(undefined8 *)((long)unaff_x22 + 0xf) = uVar24;
      *(undefined8 *)(unaff_x29 + -0xd0) = 1;
      *(byte *)(unaff_x29 + -0x90) = bVar20;
      FUN_1013153ec(unaff_x29 + -0xa8,unaff_x29 + -0x90);
      if (*(char *)(unaff_x29 + -0xa8) == '\x01') {
        pbStack0000000000000030 = *(byte **)(unaff_x29 + -0xa0);
      }
      else {
        if (lVar29 != 1) {
          cVar6 = *(char *)(unaff_x29 + -0xa7);
          pbVar18 = pbVar12 + 0x40;
          *(byte **)(unaff_x29 + -0xe8) = pbVar18;
          bVar20 = pbVar12[0x20];
          if (bVar20 != 0x16) {
            uVar24 = *(undefined8 *)(pbVar12 + 0x21);
            unaff_x22[1] = *(undefined8 *)(pbVar12 + 0x29);
            *unaff_x22 = uVar24;
            uVar24 = *(undefined8 *)(pbVar12 + 0x30);
            *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)(pbVar12 + 0x38);
            *(undefined8 *)((long)unaff_x22 + 0xf) = uVar24;
            *(undefined8 *)(unaff_x29 + -0xd0) = 2;
            *(byte *)(unaff_x29 + -0x90) = bVar20;
            FUN_1004b60cc(unaff_x29 + -0xa8,unaff_x29 + -0x90);
            uVar17 = *(ulong *)(unaff_x29 + -0xa8);
            unaff_x28 = *(byte **)(unaff_x29 + -0xa0);
            pbStack0000000000000030 = unaff_x28;
            if (uVar17 != 0x8000000000000001) {
              in_stack_00000040 = *(long *)(unaff_x29 + -0x98);
              pbVar18 = (byte *)FUN_100fbc738(unaff_x29 + -0xf0);
              pbStack0000000000000030 = unaff_x28;
              if (pbVar18 == (byte *)0x0) goto LAB_1013a165c;
              pbStack0000000000000030 = pbVar18;
              if ((uVar17 & 0x7fffffffffffffff) == 0) {
                uVar17 = 0x8000000000000001;
                goto LAB_1013a165c;
              }
              goto LAB_1013a1450;
            }
            goto LAB_1013a1410;
          }
        }
        pbStack0000000000000030 = (byte *)FUN_1087e422c(1,&UNK_10b230828,&UNK_10b20a590);
      }
    }
LAB_1013a1410:
    lVar29 = ((ulong)((long)pbVar1 - (long)pbVar18) >> 5) + 1;
    while (lVar29 = lVar29 + -1, lVar29 != 0) {
      FUN_100e077ec(pbVar18);
      pbVar18 = pbVar18 + 0x20;
    }
    cVar6 = '\0';
    if (lVar19 == 0) {
      uVar17 = 0x8000000000000001;
      unaff_x21 = &stack0x000000e0;
      goto LAB_1013a165c;
    }
    unaff_x21 = &stack0x000000e0;
    unaff_x28 = pbVar12;
  }
  else {
    if (in_stack_00000130 != 0x15) {
      pbVar12 = (byte *)FUN_108855b04(&stack0x00000110,unaff_x29 + -0xa8,&UNK_10b20c400);
      pbVar18 = unaff_x23;
joined_r0x0001013a1958:
      unaff_x23 = pbVar12;
      if (in_stack_00000038 != 0) {
        _free(pbVar18);
      }
LAB_1013a18bc:
      *in_stack_00000008 = 0;
      in_stack_00000008[1] = (long)unaff_x23;
      FUN_100d42e74(&stack0x000000e0);
LAB_1013a1a30:
      FUN_100d34830(&stack0x00000088);
      return;
    }
    lVar19 = in_stack_00000148 * 0x40;
    pbVar12 = in_stack_00000140 + lVar19;
    *(byte **)(unaff_x29 + -0xd0) = in_stack_00000140;
    *(byte **)(unaff_x29 + -200) = in_stack_00000140;
    *(long *)(unaff_x29 + -0xc0) = in_stack_00000138;
    *(byte **)(unaff_x29 + -0xb8) = pbVar12;
    *(undefined1 *)(unaff_x29 + -0xf0) = 0x16;
    *(undefined8 *)(unaff_x29 + -0xb0) = 0;
    if (in_stack_00000148 == 0) {
      unaff_x20 = 0x8000000000000001;
LAB_1013a14f8:
      unaff_w27 = 0x15;
      *(undefined **)(unaff_x29 + -0xa8) = &UNK_108ca105e;
      *(undefined8 *)(unaff_x29 + -0xa0) = 6;
      *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0xa8;
      *(undefined **)(unaff_x29 + -0x88) = &DAT_100c7b3a0;
      param_2 = unaff_x29 + -0x90;
      goto code_r0x0001013a1520;
    }
    unaff_w27 = 0x15;
    lVar29 = 0;
    unaff_x20 = 0x8000000000000001;
    cVar6 = '\a';
    unaff_x28 = in_stack_00000018;
    pbVar1 = in_stack_00000140;
    do {
      pbVar21 = pbVar1 + 0x40;
      bVar20 = *pbVar1;
      lVar16 = lVar29;
      pbVar22 = pbVar21;
      if (bVar20 == 0x16) break;
      *(byte *)(unaff_x29 + -0x90) = bVar20;
      uVar24 = *(undefined8 *)(pbVar1 + 0x10);
      *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)(pbVar1 + 0x18);
      *(undefined8 *)((long)unaff_x22 + 0xf) = uVar24;
      uVar24 = *(undefined8 *)(pbVar1 + 1);
      unaff_x22[1] = *(undefined8 *)(pbVar1 + 9);
      *unaff_x22 = uVar24;
      uVar24 = *(undefined8 *)(pbVar1 + 0x20);
      unaff_x21[0xf] = *(undefined8 *)(pbVar1 + 0x28);
      unaff_x21[0xe] = uVar24;
      uVar24 = *(undefined8 *)(pbVar1 + 0x30);
      unaff_x21[0x11] = *(undefined8 *)(pbVar1 + 0x38);
      unaff_x21[0x10] = uVar24;
      piVar2 = *(int **)(unaff_x29 + -0x88);
      piVar3 = *(int **)(unaff_x29 + -0x80);
      lVar16 = *(long *)(unaff_x29 + -0x78);
      if (bVar20 < 0xd) {
        if (bVar20 == 1) {
          iVar14 = 1;
          if (*(char *)(unaff_x29 + -0x8f) != '\x01') {
            iVar14 = 2;
          }
          iVar10 = 0;
          if (*(char *)(unaff_x29 + -0x8f) != '\0') {
            iVar10 = iVar14;
          }
        }
        else {
          if (bVar20 != 4) {
            if (bVar20 == 0xc) {
              if (lVar16 == 7) {
                iVar10 = 1;
                if (*piVar3 != 0x7373656d || *(int *)((long)piVar3 + 3) != 0x65676173) {
                  iVar10 = 2;
                }
              }
              else if (lVar16 == 6) {
                iVar10 = 2;
                if (*piVar3 == 0x74617473 && (short)piVar3[1] == 0x7375) {
                  iVar10 = 0;
                }
              }
              else {
                iVar10 = 2;
              }
              goto joined_r0x0001013a1204;
            }
LAB_1013a17fc:
            *(byte **)(unaff_x29 + -200) = pbVar21;
            *(long *)(unaff_x29 + -0xb0) = lVar29 + 1;
            pbStack0000000000000030 =
                 (byte *)FUN_108855b04(unaff_x29 + -0x90,unaff_x29 + -0xa8,&UNK_10b20e280);
            goto joined_r0x0001013a153c;
          }
          iVar14 = 1;
          if (piVar2 != (int *)0x1) {
            iVar14 = 2;
          }
          iVar10 = 0;
          if (piVar2 != (int *)0x0) {
            iVar10 = iVar14;
          }
        }
LAB_1013a12a0:
        FUN_100e077ec(unaff_x29 + -0x90);
      }
      else {
        if (bVar20 == 0xd) {
          if (piVar3 == (int *)0x7) {
            iVar10 = 1;
            if (*piVar2 != 0x7373656d || *(int *)((long)piVar2 + 3) != 0x65676173) {
              iVar10 = 2;
            }
          }
          else {
            if (piVar3 != (int *)0x6) goto LAB_1013a1268;
            iVar10 = 2;
            if (*piVar2 == 0x74617473 && (short)piVar2[1] == 0x7375) {
              iVar10 = 0;
            }
          }
          goto LAB_1013a12a0;
        }
        if (bVar20 != 0xe) {
          if (bVar20 != 0xf) goto LAB_1013a17fc;
          if (piVar3 == (int *)0x7) {
            if (((((char)*piVar2 != 'm') || (*(char *)((long)piVar2 + 1) != 'e')) ||
                (*(char *)((long)piVar2 + 2) != 's')) ||
               (((*(char *)((long)piVar2 + 3) != 's' || ((char)piVar2[1] != 'a')) ||
                ((*(char *)((long)piVar2 + 5) != 'g' || (*(char *)((long)piVar2 + 6) != 'e'))))))
            goto LAB_1013a1268;
            iVar10 = 1;
          }
          else if (((piVar3 == (int *)0x6) && ((char)*piVar2 == 's')) &&
                  ((*(char *)((long)piVar2 + 1) == 't' &&
                   ((((*(char *)((long)piVar2 + 2) == 'a' && (*(char *)((long)piVar2 + 3) == 't'))
                     && ((char)piVar2[1] == 'u')) && (*(char *)((long)piVar2 + 5) == 's')))))) {
            iVar10 = 0;
          }
          else {
LAB_1013a1268:
            iVar10 = 2;
          }
          goto LAB_1013a12a0;
        }
        if (lVar16 == 7) {
          if ((((((char)*piVar3 != 'm') || (*(char *)((long)piVar3 + 1) != 'e')) ||
               ((*(char *)((long)piVar3 + 2) != 's' ||
                ((*(char *)((long)piVar3 + 3) != 's' || ((char)piVar3[1] != 'a')))))) ||
              (*(char *)((long)piVar3 + 5) != 'g')) || (*(char *)((long)piVar3 + 6) != 'e'))
          goto LAB_1013a11c8;
          iVar10 = 1;
        }
        else if (((((lVar16 == 6) && ((char)*piVar3 == 's')) && (*(char *)((long)piVar3 + 1) == 't')
                  ) && ((*(char *)((long)piVar3 + 2) == 'a' && (*(char *)((long)piVar3 + 3) == 't'))
                       )) && (((char)piVar3[1] == 'u' && (*(char *)((long)piVar3 + 5) == 's')))) {
          iVar10 = 0;
        }
        else {
LAB_1013a11c8:
          iVar10 = 2;
        }
joined_r0x0001013a1204:
        if (piVar2 != (int *)0x0) {
          _free();
        }
      }
      if (iVar10 == 0) {
        if (cVar6 != '\a') {
          *(byte **)(unaff_x29 + -200) = pbVar21;
          *(long *)(unaff_x29 + -0xb0) = lVar29 + 1;
          *(undefined **)(unaff_x29 + -0xa8) = &UNK_108ca105e;
          *(undefined8 *)(unaff_x29 + -0xa0) = 6;
          *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0xa8;
          *(undefined **)(unaff_x29 + -0x88) = &DAT_100c7b3a0;
          pbStack0000000000000030 =
               (byte *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x90);
          goto joined_r0x0001013a153c;
        }
        cVar6 = *(char *)(unaff_x29 + -0xf0);
        *(undefined1 *)(unaff_x29 + -0xf0) = 0x16;
        if (cVar6 == '\x16') goto LAB_1013a18dc;
        uVar24 = *in_stack_00000060;
        unaff_x22[1] = in_stack_00000060[1];
        *unaff_x22 = uVar24;
        uVar24 = *(undefined8 *)((long)in_stack_00000060 + 0xf);
        *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)in_stack_00000060 + 0x17);
        *(undefined8 *)((long)unaff_x22 + 0xf) = uVar24;
        *(char *)(unaff_x29 + -0x90) = cVar6;
        FUN_1013153ec(unaff_x29 + -0xa8,unaff_x29 + -0x90);
        if (*(char *)(unaff_x29 + -0xa8) == '\x01') {
          *(byte **)(unaff_x29 + -200) = pbVar21;
          *(long *)(unaff_x29 + -0xb0) = lVar29 + 1;
          pbStack0000000000000030 = *(byte **)(unaff_x29 + -0xa0);
          goto joined_r0x0001013a153c;
        }
        cVar6 = *(char *)(unaff_x29 + -0xa7);
      }
      else if (iVar10 == 1) {
        if (unaff_x20 != 0x8000000000000001) {
          *(byte **)(unaff_x29 + -200) = pbVar21;
          *(long *)(unaff_x29 + -0xb0) = lVar29 + 1;
          *(undefined **)(unaff_x29 + -0xa8) = &UNK_108ca1064;
          *(undefined8 *)(unaff_x29 + -0xa0) = 7;
          *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0xa8;
          *(undefined **)(unaff_x29 + -0x88) = &DAT_100c7b3a0;
          pbStack0000000000000030 =
               (byte *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x90);
          unaff_x20 = unaff_x20 & 0x7fffffffffffffff;
          goto joined_r0x0001013a1540;
        }
        cVar5 = *(char *)(unaff_x29 + -0xf0);
        *(undefined1 *)(unaff_x29 + -0xf0) = 0x16;
        if (cVar5 == '\x16') {
          *(byte **)(unaff_x29 + -200) = pbVar21;
          *(long *)(unaff_x29 + -0xb0) = lVar29 + 1;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_1013a1a68;
        }
        uVar24 = *in_stack_00000060;
        unaff_x22[1] = in_stack_00000060[1];
        *unaff_x22 = uVar24;
        uVar24 = *(undefined8 *)((long)in_stack_00000060 + 0xf);
        *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)in_stack_00000060 + 0x17);
        *(undefined8 *)((long)unaff_x22 + 0xf) = uVar24;
        *(char *)(unaff_x29 + -0x90) = cVar5;
        FUN_1004b60cc(unaff_x29 + -0xa8,unaff_x29 + -0x90);
        unaff_x20 = *(ulong *)(unaff_x29 + -0xa8);
        unaff_x28 = *(byte **)(unaff_x29 + -0xa0);
        if (unaff_x20 == 0x8000000000000001) {
          *(byte **)(unaff_x29 + -200) = pbVar21;
          *(long *)(unaff_x29 + -0xb0) = lVar29 + 1;
          pbStack0000000000000030 = unaff_x28;
          goto LAB_1013a1620;
        }
        in_stack_00000040 = *(long *)(unaff_x29 + -0x98);
      }
      else {
        cVar5 = *(char *)(unaff_x29 + -0xf0);
        *(undefined1 *)(unaff_x29 + -0xf0) = 0x16;
        if (cVar5 == '\x16') {
LAB_1013a18dc:
          *(byte **)(unaff_x29 + -200) = pbVar21;
          *(long *)(unaff_x29 + -0xb0) = lVar29 + 1;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_1013a1a68:
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1013a1a6c);
          (*pcVar9)();
        }
        uVar24 = *in_stack_00000060;
        unaff_x22[1] = in_stack_00000060[1];
        *unaff_x22 = uVar24;
        uVar24 = *(undefined8 *)((long)in_stack_00000060 + 0xf);
        *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)in_stack_00000060 + 0x17);
        *(undefined8 *)((long)unaff_x22 + 0xf) = uVar24;
        *(char *)(unaff_x29 + -0x90) = cVar5;
        FUN_100e077ec(unaff_x29 + -0x90);
      }
      lVar29 = lVar29 + 1;
      lVar16 = (lVar19 - 0x40U >> 6) + 1;
      pbVar22 = pbVar12;
      pbVar1 = pbVar21;
    } while (pbVar21 != pbVar12);
    *(byte **)(unaff_x29 + -200) = pbVar22;
    *(long *)(unaff_x29 + -0xb0) = lVar16;
    if (cVar6 == '\a') goto LAB_1013a14f8;
    uVar17 = 0x8000000000000000;
    if (unaff_x20 != 0x8000000000000001) {
      uVar17 = unaff_x20;
    }
    FUN_100d34830(unaff_x29 + -0xd0);
    pbStack0000000000000030 = unaff_x28;
    if (pbVar12 == pbVar22) goto LAB_1013a165c;
    *(long *)(unaff_x29 + -0x90) = lVar16;
    pbStack0000000000000030 =
         (byte *)FUN_1087e422c(((ulong)((long)pbVar12 - (long)pbVar22) >> 6) + lVar16,
                               unaff_x29 + -0x90,&UNK_10b23a190);
    if ((uVar17 & 0x7fffffffffffffff) == 0) goto LAB_1013a1454;
  }
LAB_1013a1450:
  _free(unaff_x28);
LAB_1013a1454:
  uVar17 = 0x8000000000000001;
  if ((bVar4 & 0x1e) != 0x14) goto LAB_1013a1654;
  goto LAB_1013a165c;
}

