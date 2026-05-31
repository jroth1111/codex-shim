
void FUN_10136326c(undefined8 param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  byte bVar9;
  long lVar10;
  long *unaff_x21;
  long *plVar11;
  ulong unaff_x22;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  bool bVar15;
  ulong unaff_x27;
  ulong uVar16;
  ulong *puVar17;
  long unaff_x29;
  byte bVar18;
  long *plVar19;
  ulong *puVar20;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  long lVar21;
  byte bVar28;
  undefined8 in_stack_00000010;
  long *in_stack_00000020;
  ulong in_stack_00000030;
  long *in_stack_00000038;
  long in_stack_00000040;
  ulong in_stack_00000048;
  ulong in_stack_00000050;
  long *in_stack_00000058;
  ulong *in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  ulong in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000090;
  long *in_stack_000000a0;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  long in_stack_000000e0;
  long in_stack_000000e8;
  long *in_stack_000000f0;
  ulong in_stack_000000f8;
  long in_stack_00000100;
  long in_stack_00000108;
  long in_stack_00000110;
  long in_stack_00000118;
  ulong in_stack_00000120;
  ulong in_stack_00000128;
  ulong in_stack_00000130;
  ulong in_stack_00000140;
  ulong in_stack_00000148;
  ulong in_stack_00000150;
  ulong in_stack_00000158;
  long *in_stack_00000160;
  ulong *in_stack_00000168;
  long in_stack_00000170;
  long in_stack_00000178;
  long in_stack_00000180;
  ulong in_stack_00000188;
  long in_stack_00000190;
  long in_stack_00000198;
  ulong in_stack_000001a0;
  ulong in_stack_000001a8;
  ulong in_stack_000001b0;
  ulong in_stack_000001b8;
  ulong in_stack_000001c0;
  ulong in_stack_000001c8;
  ulong in_stack_000001d0;
  ulong in_stack_000001d8;
  ulong in_stack_000001e0;
  long *in_stack_000001e8;
  
code_r0x00010136326c:
  uVar4 = FUN_108856088(s_missing_field_____108ac28f7,param_2);
LAB_10136327c:
  in_stack_00000140 = 0x8000000000000000;
  in_stack_00000148 = uVar4;
LAB_101363284:
  FUN_100de8910(&stack0x000001e8);
  if (in_stack_000001a0 != unaff_x27) {
    FUN_100de6690(&stack0x000001a0);
  }
LAB_1013633a4:
  plVar11 = unaff_x21;
  if (-1 < (long)unaff_x22) goto LAB_1013633c0;
LAB_1013633a8:
  plVar11 = unaff_x21;
  if ((unaff_x22 & 0xfffffffffffffffe) != unaff_x27 - 1) {
    FUN_100de6690(&stack0x00000158);
  }
LAB_1013633c0:
  uVar4 = in_stack_00000048;
  uVar5 = in_stack_00000148;
  if (in_stack_00000140 != 0x8000000000000000) {
    in_stack_00000128 = in_stack_00000148;
    in_stack_00000120 = in_stack_00000140;
    in_stack_00000130 = in_stack_00000150;
    uVar4 = FUN_100e8dd9c(in_stack_00000110,in_stack_00000118,in_stack_00000048,in_stack_00000030);
    if (in_stack_00000100 == 0) {
      __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17h6126d694bd9e8fcbE
                (&stack0x000000f0,1,&stack0x00000110,1);
    }
    uVar5 = in_stack_000000f8;
    plVar19 = in_stack_000000f0;
    bVar15 = false;
    lVar14 = 0;
    bVar1 = (byte)(uVar4 >> 0x38);
    bVar9 = bVar1 >> 1;
    uVar12 = in_stack_00000030;
    do {
      uVar4 = uVar4 & uVar5;
      lVar21 = *(long *)((long)plVar19 + uVar4);
      bVar18 = (byte)lVar21;
      bVar22 = (byte)((ulong)lVar21 >> 8);
      bVar23 = (byte)((ulong)lVar21 >> 0x10);
      bVar24 = (byte)((ulong)lVar21 >> 0x18);
      bVar25 = (byte)((ulong)lVar21 >> 0x20);
      bVar26 = (byte)((ulong)lVar21 >> 0x28);
      bVar27 = (byte)((ulong)lVar21 >> 0x30);
      bVar28 = (byte)((ulong)lVar21 >> 0x38);
      for (uVar16 = CONCAT17(-(bVar28 == bVar9),
                             CONCAT16(-(bVar27 == bVar9),
                                      CONCAT15(-(bVar26 == bVar9),
                                               CONCAT14(-(bVar25 == bVar9),
                                                        CONCAT13(-(bVar24 == bVar9),
                                                                 CONCAT12(-(bVar23 == bVar9),
                                                                          CONCAT11(-(bVar22 == bVar9
                                                                                    ),-(bVar18 ==
                                                                                       bVar9))))))))
                    & 0x8080808080808080; uVar16 != 0; uVar16 = uVar16 - 1 & uVar16) {
        uVar6 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar4 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) & uVar5;
        if ((in_stack_00000030 == plVar19[uVar6 * -6 + -4]) &&
           (iVar3 = _memcmp(in_stack_00000048,plVar19[uVar6 * -6 + -5],in_stack_00000030),
           iVar3 == 0)) {
          lVar14 = plVar19[uVar6 * -6 + -3];
          lVar21 = plVar19[uVar6 * -6 + -2];
          lVar10 = plVar19[uVar6 * -6 + -1];
          plVar19[uVar6 * -6 + -2] = in_stack_00000128;
          plVar19[uVar6 * -6 + -3] = in_stack_00000120;
          plVar19[uVar6 * -6 + -1] = in_stack_00000130;
          if (in_stack_00000040 != 0) {
            _free(in_stack_00000048);
          }
          unaff_x27 = 0x8000000000000005;
          if (lVar14 != -0x8000000000000000) {
            if (lVar10 != 0) {
              puVar8 = (undefined8 *)(lVar21 + 8);
              do {
                if (puVar8[-1] != 0) {
                  _free(*puVar8);
                }
                puVar8 = puVar8 + 3;
                lVar10 = lVar10 + -1;
              } while (lVar10 != 0);
            }
            if (lVar14 != 0) {
              _free(lVar21);
            }
          }
          goto LAB_101362f14;
        }
        unaff_x27 = 0x8000000000000005;
      }
      if (bVar15) {
LAB_101362e0c:
        bVar18 = NEON_umaxv(CONCAT17(-(bVar28 == 0xff),
                                     CONCAT16(-(bVar27 == 0xff),
                                              CONCAT15(-(bVar26 == 0xff),
                                                       CONCAT14(-(bVar25 == 0xff),
                                                                CONCAT13(-(bVar24 == 0xff),
                                                                         CONCAT12(-(bVar23 == 0xff),
                                                                                  CONCAT11(-(bVar22 
                                                  == 0xff),-(bVar18 == 0xff)))))))),1);
        if ((bVar18 & 1) != 0) goto LAB_101362eb4;
        bVar15 = true;
      }
      else {
        uVar6 = CONCAT17(-(lVar21 < 0),
                         CONCAT16(-((char)bVar27 < '\0'),
                                  CONCAT15(-((char)bVar26 < '\0'),
                                           CONCAT14(-((char)bVar25 < '\0'),
                                                    CONCAT13(-((char)bVar24 < '\0'),
                                                             CONCAT12(-((char)bVar23 < '\0'),
                                                                      CONCAT11(-((char)bVar22 < '\0'
                                                                                ),-((char)bVar18 <
                                                                                   '\0'))))))));
        if (uVar6 != 0) {
          uVar12 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
          uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
          uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
          uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
          uVar12 = uVar4 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) & uVar5;
          goto LAB_101362e0c;
        }
        bVar15 = false;
      }
      lVar14 = lVar14 + 8;
      uVar4 = lVar14 + uVar4;
    } while( true );
  }
  goto joined_r0x0001013635b0;
LAB_101362eb4:
  uVar4 = (ulong)*(char *)((long)plVar19 + uVar12);
  if (-1 < *(char *)((long)plVar19 + uVar12)) {
    lVar14 = *plVar19;
    uVar4 = CONCAT17(-(lVar14 < 0),
                     CONCAT16(-((char)((ulong)lVar14 >> 0x30) < '\0'),
                              CONCAT15(-((char)((ulong)lVar14 >> 0x28) < '\0'),
                                       CONCAT14(-((char)((ulong)lVar14 >> 0x20) < '\0'),
                                                CONCAT13(-((char)((ulong)lVar14 >> 0x18) < '\0'),
                                                         CONCAT12(-((char)((ulong)lVar14 >> 0x10) <
                                                                   '\0'),CONCAT11(-((char)((ulong)
                                                  lVar14 >> 8) < '\0'),-((char)lVar14 < '\0'))))))))
    ;
    uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
    uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    uVar12 = (ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3;
    uVar4 = (ulong)*(byte *)((long)plVar19 + uVar12);
  }
  *(byte *)((long)plVar19 + uVar12) = bVar1 >> 1;
  *(byte *)((long)plVar19 + (uVar12 - 8 & uVar5) + 8) = bVar1 >> 1;
  in_stack_00000100 = in_stack_00000100 - (uVar4 & 1);
  in_stack_00000108 = in_stack_00000108 + 1;
  plVar19[uVar12 * -6 + -6] = in_stack_00000040;
  plVar19[uVar12 * -6 + -5] = in_stack_00000048;
  plVar19[uVar12 * -6 + -4] = in_stack_00000030;
  plVar19[uVar12 * -6 + -2] = in_stack_00000128;
  plVar19[uVar12 * -6 + -3] = in_stack_00000120;
  plVar19[uVar12 * -6 + -1] = in_stack_00000130;
LAB_101362f14:
  plVar19 = in_stack_00000038;
  if (plVar11 == in_stack_00000038) {
LAB_10136363c:
    in_stack_00000020[1] = in_stack_000000f8;
    *in_stack_00000020 = (long)in_stack_000000f0;
    in_stack_00000020[3] = in_stack_00000108;
    in_stack_00000020[2] = in_stack_00000100;
    in_stack_00000020[5] = in_stack_00000118;
    in_stack_00000020[4] = in_stack_00000110;
    if (*in_stack_00000020 == 0) goto LAB_101363684;
    in_stack_000000c8 = in_stack_00000020[1];
    in_stack_000000c0 = *in_stack_00000020;
    in_stack_000000d8 = in_stack_00000020[3];
    in_stack_000000d0 = in_stack_00000020[2];
    in_stack_000000e8 = in_stack_00000020[5];
    in_stack_000000e0 = in_stack_00000020[4];
    if (in_stack_00000038 != plVar19) {
      lVar14 = FUN_1087e422c(in_stack_00000010,&UNK_10b21cb90,&UNK_10b20a590);
      *in_stack_00000020 = 0;
      in_stack_00000020[1] = lVar14;
      func_0x000100d30908(&stack0x000000c0);
    }
    FUN_100de8910(&stack0x00000098);
    goto LAB_101363690;
  }
  unaff_x21 = plVar11 + 0xd;
  in_stack_00000040 = *plVar11;
  in_stack_000000a0 = unaff_x21;
  if (in_stack_00000040 == -0x8000000000000000) {
    plVar19 = plVar11 + 0xd;
    goto LAB_10136363c;
  }
  in_stack_00000048 = plVar11[1];
  in_stack_00000030 = plVar11[2];
  plVar19 = (long *)plVar11[4];
  unaff_x22 = plVar11[3];
  lVar14 = plVar11[6];
  puVar20 = (ulong *)plVar11[5];
  in_stack_00000078 = plVar11[8];
  in_stack_00000070 = plVar11[7];
  in_stack_00000088 = plVar11[10];
  uVar5 = plVar11[9];
  in_stack_00000090 = plVar11[0xb];
  in_stack_00000050 = unaff_x22;
  in_stack_00000058 = plVar19;
  in_stack_00000060 = puVar20;
  in_stack_00000068 = lVar14;
  in_stack_00000080 = uVar5;
  if (in_stack_00000040 == -0x7fffffffffffffff) goto LAB_1013635bc;
  in_stack_00000050 = unaff_x27;
  if (unaff_x22 == unaff_x27) {
    uVar5 = FUN_1088561c0(&UNK_108cde170,0x10);
    uVar4 = in_stack_00000048;
joined_r0x0001013635b0:
    in_stack_00000048 = uVar5;
    if (in_stack_00000040 != 0) {
      _free(uVar4);
    }
LAB_1013635bc:
    *in_stack_00000020 = 0;
    in_stack_00000020[1] = in_stack_00000048;
    func_0x000100d30908(&stack0x000000f0);
LAB_101363684:
    FUN_100de8910(&stack0x00000098);
LAB_101363690:
    if (in_stack_00000050 != unaff_x27) {
      FUN_100de6690(&stack0x00000050);
    }
    return;
  }
  uVar4 = unaff_x22 ^ 0x8000000000000000;
  if (-1 < (long)unaff_x22) {
    uVar4 = 5;
  }
  in_stack_00000158 = unaff_x22;
  in_stack_00000160 = plVar19;
  in_stack_00000168 = puVar20;
  in_stack_00000170 = lVar14;
  in_stack_00000178 = in_stack_00000070;
  in_stack_00000180 = in_stack_00000078;
  in_stack_00000188 = uVar5;
  in_stack_00000190 = in_stack_00000088;
  in_stack_00000198 = in_stack_00000090;
  if (uVar4 != 4) {
    if (uVar4 == 5) {
      if ((in_stack_00000070 != 0) && (in_stack_00000070 * 9 != -0x11)) {
        _free(lVar14 + in_stack_00000070 * -8 + -8);
      }
      plVar11 = plVar19 + (long)puVar20 * 0xd;
      in_stack_000001a0 = unaff_x27;
      in_stack_000001e8 = plVar19;
      if (puVar20 != (ulong *)0x0) {
        uVar13 = 0x8000000000000000;
        uVar12 = 0x8000000000000000;
        uVar4 = uVar5;
        goto LAB_10136304c;
      }
      *(undefined8 *)(unaff_x29 + -0xe8) = 0x8000000000000000;
      uVar12 = in_stack_00000140;
      uVar6 = in_stack_00000148;
      uVar2 = in_stack_00000150;
      goto LAB_101363240;
    }
    in_stack_00000148 = FUN_108832ea0(&stack0x00000158,unaff_x29 + -0x69,&UNK_10b21d7a0);
    in_stack_00000140 = 0x8000000000000000;
    goto joined_r0x000101363534;
  }
  *(ulong **)(unaff_x29 + -0xb8) = puVar20;
  *(ulong **)(unaff_x29 + -0xb0) = puVar20;
  *(long **)(unaff_x29 + -0xa8) = plVar19;
  *(ulong **)(unaff_x29 + -0xa0) = puVar20 + lVar14 * 9;
  puVar17 = puVar20;
  if (lVar14 == 0) {
LAB_1013631c8:
    in_stack_00000148 = FUN_1087e422c(0,&UNK_10b232068,&UNK_10b20a590);
LAB_1013631e0:
    in_stack_00000140 = 0x8000000000000000;
  }
  else {
    puVar17 = puVar20 + 9;
    uVar4 = *puVar20;
    *(ulong **)(unaff_x29 + -0xb0) = puVar17;
    if (uVar4 == unaff_x27) goto LAB_1013631c8;
    in_stack_000001b0 = puVar20[2];
    in_stack_000001a8 = puVar20[1];
    in_stack_000001c0 = puVar20[4];
    in_stack_000001b8 = puVar20[3];
    in_stack_000001d0 = puVar20[6];
    in_stack_000001c8 = puVar20[5];
    in_stack_000001e0 = puVar20[8];
    in_stack_000001d8 = puVar20[7];
    in_stack_000001a0 = uVar4;
    FUN_1006739a0(unaff_x29 + -0xd0,&stack0x000001a0);
    in_stack_00000140 = *(ulong *)(unaff_x29 + -0xd0);
    in_stack_00000148 = *(ulong *)(unaff_x29 + -200);
    if (in_stack_00000140 == 0x8000000000000000) goto LAB_1013631e0;
    in_stack_00000150 = *(ulong *)(unaff_x29 + -0xc0);
    in_stack_000001a0 = in_stack_00000140;
    in_stack_000001a8 = in_stack_00000148;
    in_stack_000001b0 = in_stack_00000150;
    if (lVar14 != 1) {
      in_stack_00000148 = FUN_1087e422c(lVar14,&UNK_10b21cb80,&UNK_10b20a590);
      in_stack_00000140 = 0x8000000000000000;
      FUN_100e21d54(&stack0x000001a0);
    }
  }
  lVar14 = ((ulong)((long)(puVar20 + lVar14 * 9) - (long)puVar17) >> 3) * -0x71c71c71c71c71c7 + 1;
  while (lVar14 = lVar14 + -1, lVar14 != 0) {
    FUN_100de6690(puVar17);
    puVar17 = puVar17 + 9;
  }
  if (plVar19 == (long *)0x0) goto LAB_1013633a4;
  _free(puVar20);
joined_r0x000101363534:
  plVar11 = unaff_x21;
  if ((long)unaff_x22 < 0) goto LAB_1013633a8;
  goto LAB_1013633c0;
LAB_10136304c:
  do {
    plVar7 = plVar19 + 0xd;
    if (*plVar19 == -0x8000000000000000) {
      *(ulong *)(unaff_x29 + -0xe0) = uVar4;
      *(ulong *)(unaff_x29 + -0xd8) = uVar16;
      *(ulong *)(unaff_x29 + -0xe8) = uVar12;
      uVar12 = in_stack_00000140;
      uVar6 = in_stack_00000148;
      uVar2 = in_stack_00000150;
      goto joined_r0x000101363354;
    }
    in_stack_000001b8 = plVar19[6];
    in_stack_000001b0 = plVar19[5];
    in_stack_000001c8 = plVar19[8];
    in_stack_000001c0 = plVar19[7];
    in_stack_000001d8 = plVar19[10];
    in_stack_000001d0 = plVar19[9];
    in_stack_000001e0 = plVar19[0xb];
    in_stack_000001a8 = plVar19[4];
    in_stack_000001a0 = plVar19[3];
    if (plVar19[2] == 7) {
      bVar15 = *(int *)plVar19[1] != 0x77736e61 || *(int *)(plVar19[1] + 3) != 0x73726577;
    }
    else {
      bVar15 = true;
    }
    if (*plVar19 != 0) {
      _free();
    }
    uVar6 = in_stack_000001a0;
    if (bVar15) {
      unaff_x27 = 0x8000000000000005;
      in_stack_000001a0 = 0x8000000000000005;
      if (uVar6 == 0x8000000000000005) {
        *(ulong *)(unaff_x29 + -0xe0) = uVar4;
        *(ulong *)(unaff_x29 + -0xd8) = uVar16;
        *(ulong *)(unaff_x29 + -0xe8) = uVar12;
        in_stack_00000148 = FUN_1088561c0(&UNK_108cde170,0x10);
        in_stack_00000140 = 0x8000000000000000;
        if (uVar13 != 0x8000000000000000) {
joined_r0x0001013634e8:
          in_stack_00000140 = 0x8000000000000000;
          if (uVar16 != 0) {
            in_stack_00000140 = 0x8000000000000000;
            puVar8 = (undefined8 *)(uVar4 + 8);
            do {
              if (puVar8[-1] != 0) {
                _free(*puVar8);
              }
              puVar8 = puVar8 + 3;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          unaff_x27 = 0x8000000000000005;
          if (uVar13 != 0) {
            _free(uVar4);
          }
        }
        goto LAB_101363284;
      }
      *(ulong *)(unaff_x29 + -0xb8) = uVar6;
      *(ulong *)(unaff_x29 + -0xa8) = in_stack_000001b0;
      *(ulong *)(unaff_x29 + -0xb0) = in_stack_000001a8;
      *(ulong *)(unaff_x29 + -0x98) = in_stack_000001c0;
      *(ulong *)(unaff_x29 + -0xa0) = in_stack_000001b8;
      *(ulong *)(unaff_x29 + -0x88) = in_stack_000001d0;
      *(ulong *)(unaff_x29 + -0x90) = in_stack_000001c8;
      *(ulong *)(unaff_x29 + -0x78) = in_stack_000001e0;
      *(ulong *)(unaff_x29 + -0x80) = in_stack_000001d8;
      FUN_100de6690(unaff_x29 + -0xb8);
    }
    else {
      if (uVar13 != 0x8000000000000000) {
        *(ulong *)(unaff_x29 + -0xe0) = uVar4;
        *(ulong *)(unaff_x29 + -0xd8) = uVar16;
        *(ulong *)(unaff_x29 + -0xe8) = uVar12;
        *(undefined **)(unaff_x29 + -0xd0) = &UNK_108cc10ac;
        *(undefined8 *)(unaff_x29 + -200) = 7;
        *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0xd0;
        *(undefined **)(unaff_x29 + -0xb0) = &DAT_100c7b3a0;
        in_stack_00000148 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xb8);
        goto joined_r0x0001013634e8;
      }
      unaff_x27 = 0x8000000000000005;
      in_stack_000001a0 = 0x8000000000000005;
      if (uVar6 == 0x8000000000000005) {
        *(ulong *)(unaff_x29 + -0xe0) = uVar4;
        *(ulong *)(unaff_x29 + -0xd8) = uVar16;
        *(ulong *)(unaff_x29 + -0xe8) = uVar12;
        uVar4 = FUN_1088561c0(&UNK_108cde170,0x10);
        goto LAB_10136327c;
      }
      *(ulong *)(unaff_x29 + -0xb8) = uVar6;
      *(ulong *)(unaff_x29 + -0xa8) = in_stack_000001b0;
      *(ulong *)(unaff_x29 + -0xb0) = in_stack_000001a8;
      *(ulong *)(unaff_x29 + -0x98) = in_stack_000001c0;
      *(ulong *)(unaff_x29 + -0xa0) = in_stack_000001b8;
      *(ulong *)(unaff_x29 + -0x88) = in_stack_000001d0;
      *(ulong *)(unaff_x29 + -0x90) = in_stack_000001c8;
      *(ulong *)(unaff_x29 + -0x78) = in_stack_000001e0;
      *(ulong *)(unaff_x29 + -0x80) = in_stack_000001d8;
      FUN_1006739a0(unaff_x29 + -0xd0,unaff_x29 + -0xb8);
      uVar13 = *(ulong *)(unaff_x29 + -0xd0);
      uVar4 = *(ulong *)(unaff_x29 + -200);
      if (uVar13 == 0x8000000000000000) goto LAB_10136327c;
      uVar16 = *(ulong *)(unaff_x29 + -0xc0);
      uVar12 = uVar13;
    }
    unaff_x27 = 0x8000000000000005;
    plVar19 = plVar7;
  } while (plVar7 != plVar11);
  *(ulong *)(unaff_x29 + -0xe0) = uVar4;
  *(ulong *)(unaff_x29 + -0xd8) = uVar16;
  *(ulong *)(unaff_x29 + -0xe8) = uVar12;
  plVar7 = plVar11;
  uVar12 = in_stack_00000140;
  uVar6 = in_stack_00000148;
  uVar2 = in_stack_00000150;
joined_r0x000101363354:
  in_stack_00000150 = uVar16;
  in_stack_00000148 = uVar4;
  in_stack_00000140 = uVar13;
  if (in_stack_00000140 == 0x8000000000000000) {
LAB_101363240:
    in_stack_00000150 = uVar2;
    in_stack_00000148 = uVar6;
    in_stack_00000140 = uVar12;
    *(undefined **)(unaff_x29 + -0xd0) = &UNK_108cc10ac;
    *(undefined8 *)(unaff_x29 + -200) = 7;
    *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0xd0;
    *(undefined **)(unaff_x29 + -0xb0) = &DAT_100c7b3a0;
    param_2 = unaff_x29 + -0xb8;
    goto code_r0x00010136326c;
  }
  *(ulong *)(unaff_x29 + -0xf0) = in_stack_00000150;
  *(ulong *)(unaff_x29 + -0xf8) = in_stack_00000148;
  *(ulong *)(unaff_x29 + -0x100) = in_stack_00000140;
  if (plVar11 != plVar7) {
    in_stack_00000148 = FUN_1087e422c(uVar5,&UNK_10b21cb90,&UNK_10b20a590);
    in_stack_00000140 = 0x8000000000000000;
    FUN_100e21d54(unaff_x29 + -0x100);
  }
  FUN_100de8910(&stack0x000001e8);
  goto LAB_1013633a4;
}

