
/* WARNING: Removing unreachable block (ram,0x0001006b7a0c) */
/* WARNING: Removing unreachable block (ram,0x0001006b7a44) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1006b7124(void)

{
  uint uVar1;
  bool bVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 uVar15;
  int *piVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  ulong *unaff_x21;
  char cVar22;
  undefined *puVar23;
  ulong *unaff_x23;
  ulong *puVar24;
  long lVar25;
  long *unaff_x27;
  long lVar26;
  long unaff_x29;
  long in_xzr;
  ulong *puVar27;
  byte bVar28;
  byte bVar29;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [12];
  undefined1 auVar33 [12];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  ulong in_stack_00000020;
  ulong in_stack_00000028;
  long in_stack_00000048;
  ulong in_stack_00000050;
  long in_stack_00000058;
  long *in_stack_00000060;
  ulong in_stack_00000078;
  long *in_stack_00000080;
  ulong in_stack_00000088;
  ulong *in_stack_00000090;
  long in_stack_00000098;
  ulong *in_stack_000000a0;
  long *in_stack_000000a8;
  undefined8 *in_stack_000000b0;
  undefined *in_stack_000000b8;
  ulong in_stack_000000c0;
  ulong in_stack_00000158;
  long in_stack_00000160;
  ulong in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined1 in_stack_000001b8;
  ulong *in_stack_000001c0;
  long in_stack_000001c8;
  ulong *in_stack_000001d0;
  ulong in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  ulong *in_stack_00000210;
  long in_stack_00000218;
  ulong *in_stack_00000220;
  ulong *puVar34;
  ulong *in_stack_00000238;
  long in_stack_000002c0;
  ulong in_stack_000002c8;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e0;
  undefined8 in_stack_000002f0;
  undefined8 in_stack_000002f8;
  undefined8 in_stack_00000308;
  undefined8 in_stack_00000310;
  ulong in_stack_00000360;
  ulong *in_stack_00000368;
  long in_stack_00000370;
  ulong *in_stack_00000378;
  
  __ZN3std2io5stdio7_eprint17heb74b67280cb307dE
            (s_E_tracing_subscriber__Unable_to_f_108ac52c2,&stack0x00000210);
  if (in_stack_000001c0 != (ulong *)0x0) {
    _free(in_stack_000001c8);
  }
  bVar29 = *(byte *)(in_stack_00000028 + 0xb01);
  if ((*(char *)(in_stack_00000028 + 0xb00) == '\x01') && ((bVar29 >> 3 & 1) != 0)) {
    if (unaff_x27[5] != 0) {
      lVar8 = 0;
      lVar10 = unaff_x27[2];
      uVar9 = unaff_x27[3];
      unaff_x23 = (ulong *)0x4ae42cf8481b71fa;
      uVar17 = uVar9 & 0x91f949a1459174a4;
      uVar30 = *(undefined8 *)(lVar10 + uVar17);
      uVar11 = CONCAT17(-((char)((ulong)uVar30 >> 0x38) == 'H'),
                        CONCAT16(-((char)((ulong)uVar30 >> 0x30) == 'H'),
                                 CONCAT15(-((char)((ulong)uVar30 >> 0x28) == 'H'),
                                          CONCAT14(-((char)((ulong)uVar30 >> 0x20) == 'H'),
                                                   CONCAT13(-((char)((ulong)uVar30 >> 0x18) == 'H'),
                                                            CONCAT12(-((char)((ulong)uVar30 >> 0x10)
                                                                      == 'H'),CONCAT11(-((char)((
                                                  ulong)uVar30 >> 8) == 'H'),-((char)uVar30 == 'H'))
                                                  )))))) & 0x8080808080808080;
      while( true ) {
        while (uVar11 == 0) {
          bVar28 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar30 >> 0x38) == -1),
                                       CONCAT16(-((char)((ulong)uVar30 >> 0x30) == -1),
                                                CONCAT15(-((char)((ulong)uVar30 >> 0x28) == -1),
                                                         CONCAT14(-((char)((ulong)uVar30 >> 0x20) ==
                                                                   -1),CONCAT13(-((char)((ulong)
                                                  uVar30 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar30 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar30 >> 8) ==
                                                                     -1),-((char)uVar30 == -1)))))))
                                      ),1);
          if ((bVar28 & 1) != 0) goto LAB_1006b754c;
          lVar8 = lVar8 + 8;
          uVar17 = uVar17 + lVar8 & uVar9;
          uVar30 = *(undefined8 *)(lVar10 + uVar17);
          uVar11 = CONCAT17(-((char)((ulong)uVar30 >> 0x38) == 'H'),
                            CONCAT16(-((char)((ulong)uVar30 >> 0x30) == 'H'),
                                     CONCAT15(-((char)((ulong)uVar30 >> 0x28) == 'H'),
                                              CONCAT14(-((char)((ulong)uVar30 >> 0x20) == 'H'),
                                                       CONCAT13(-((char)((ulong)uVar30 >> 0x18) ==
                                                                 'H'),CONCAT12(-((char)((ulong)
                                                  uVar30 >> 0x10) == 'H'),
                                                  CONCAT11(-((char)((ulong)uVar30 >> 8) == 'H'),
                                                           -((char)uVar30 == 'H')))))))) &
                   0x8080808080808080;
        }
        uVar18 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
        uVar18 = uVar17 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) & uVar9;
        plVar19 = (long *)(lVar10 + -0x20 + uVar18 * -0x20);
        if (plVar19[1] == -0x6e06b65eba6e8b5c && *plVar19 == 0x4ae42cf8481b71fa) break;
        uVar11 = uVar11 - 1 & uVar11;
      }
      lVar10 = lVar10 + uVar18 * -0x20;
      (**(code **)(*(long *)(lVar10 + -8) + 0x18))(&stack0x00000210,*(undefined8 *)(lVar10 + -0x10))
      ;
      if (in_stack_00000218 == -0x6e06b65eba6e8b5c &&
          in_stack_00000210 == (ulong *)0x4ae42cf8481b71fa) goto LAB_1006b7574;
    }
LAB_1006b754c:
    func_0x000106032954(8);
    in_stack_00000218 = 0;
    in_stack_00000210 = (ulong *)0x0;
    in_stack_00000220 = (ulong *)0x0;
    FUN_100a8b728();
  }
LAB_1006b7574:
  if ((bVar29 & 1) == 0) {
    if ((((in_stack_00000018 & 0x100000000) == 0) &&
        ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
         0x7fffffffffffffff) != 0)) && (uVar11 = FUN_107c05e34(), (uVar11 & 1) == 0)) {
      *(undefined1 *)(unaff_x27 + 1) = 1;
    }
    if (*unaff_x27 == 1) {
      *unaff_x27 = in_xzr;
    }
    else {
      __ZN3std3sys4sync6rwlock5queue6RwLock16unlock_contended17h5028e77bc6335836E();
    }
    uVar11 = unaff_x21[10];
    do {
      while( true ) {
        if ((uVar11 & 3) == 2) goto LAB_1006b8f98;
        uVar9 = uVar11 >> 2;
        if (((uVar11 & 3) != 1) || ((uVar9 & 0x1ffffffffffff) != 1)) break;
        uVar17 = uVar11 & 0xfff8000000000000;
        uVar9 = unaff_x21[10];
        bVar2 = uVar9 == uVar11;
        uVar11 = uVar9;
        if (bVar2) {
          unaff_x21[10] = uVar17 | 3;
          FUN_10074fd94(in_stack_00000008,in_stack_00000010);
          goto LAB_1006b7620;
        }
      }
      uVar18 = uVar11 & 0xfff8000000000003;
      uVar17 = unaff_x21[10];
      bVar2 = uVar17 != uVar11;
      uVar11 = uVar17;
    } while (bVar2);
    unaff_x21[10] = (uVar9 & 0xc001ffffffffffff) * 4 - 4 | uVar18;
LAB_1006b7620:
    uVar9 = *(ulong *)(in_stack_00000048 + 0x10);
    uVar17 = *(ulong *)(in_stack_00000028 + 0x3d8);
    uVar11 = uVar17 & uVar9;
joined_r0x0001006b7630:
    lVar8 = in_stack_00000218;
    puVar34 = in_stack_00000220;
    if (uVar11 == 0) {
      *(long **)(unaff_x29 + -0xa0) = in_stack_00000060;
      FUN_1061db950(&stack0x00000210,in_stack_00000050,in_stack_00000058);
      if (in_stack_00000210 != (ulong *)0x0) {
        if ((in_stack_00000210[1] & uVar17) == 0) {
          auVar32 = __ZN102__LT_tracing_subscriber__registry__sharded__Data_u20_as_u20_tracing_subscriber__registry__SpanData_GT_14extensions_mut17h126407c2e34cc2fdE
                              (&stack0x00000368);
          plVar19 = auVar32._0_8_;
          uVar1 = auVar32._8_4_ & 1;
          if (plVar19[5] != 0) {
            lVar10 = 0;
            lVar26 = plVar19[2];
            uVar9 = plVar19[3];
            uVar17 = uVar9 & 0x716edfddde06e5b1;
            uVar30 = *(undefined8 *)(lVar26 + uVar17);
            uVar11 = CONCAT17(-((char)((ulong)uVar30 >> 0x38) == '8'),
                              CONCAT16(-((char)((ulong)uVar30 >> 0x30) == '8'),
                                       CONCAT15(-((char)((ulong)uVar30 >> 0x28) == '8'),
                                                CONCAT14(-((char)((ulong)uVar30 >> 0x20) == '8'),
                                                         CONCAT13(-((char)((ulong)uVar30 >> 0x18) ==
                                                                   '8'),CONCAT12(-((char)((ulong)
                                                  uVar30 >> 0x10) == '8'),
                                                  CONCAT11(-((char)((ulong)uVar30 >> 8) == '8'),
                                                           -((char)uVar30 == '8')))))))) &
                     0x8080808080808080;
            while( true ) {
              while (uVar11 == 0) {
                bVar29 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar30 >> 0x38) == -1),
                                             CONCAT16(-((char)((ulong)uVar30 >> 0x30) == -1),
                                                      CONCAT15(-((char)((ulong)uVar30 >> 0x28) == -1
                                                                ),CONCAT14(-((char)((ulong)uVar30 >>
                                                                                   0x20) == -1),
                                                                           CONCAT13(-((char)((ulong)
                                                  uVar30 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar30 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar30 >> 8) ==
                                                                     -1),-((char)uVar30 == -1)))))))
                                            ),1);
                if ((bVar29 & 1) != 0) goto LAB_1006b78d8;
                lVar10 = lVar10 + 8;
                uVar17 = uVar17 + lVar10 & uVar9;
                uVar30 = *(undefined8 *)(lVar26 + uVar17);
                uVar11 = CONCAT17(-((char)((ulong)uVar30 >> 0x38) == '8'),
                                  CONCAT16(-((char)((ulong)uVar30 >> 0x30) == '8'),
                                           CONCAT15(-((char)((ulong)uVar30 >> 0x28) == '8'),
                                                    CONCAT14(-((char)((ulong)uVar30 >> 0x20) == '8')
                                                             ,CONCAT13(-((char)((ulong)uVar30 >>
                                                                               0x18) == '8'),
                                                                       CONCAT12(-((char)((ulong)
                                                  uVar30 >> 0x10) == '8'),
                                                  CONCAT11(-((char)((ulong)uVar30 >> 8) == '8'),
                                                           -((char)uVar30 == '8')))))))) &
                         0x8080808080808080;
              }
              uVar18 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                       (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
              uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
              uVar18 = uVar17 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) & uVar9;
              plVar21 = (long *)(lVar26 + -0x20 + uVar18 * -0x20);
              if (plVar21[1] == 0x716edfddde06e5b1 && *plVar21 == -0x3760dee2c25b4f34) break;
              uVar11 = uVar11 - 1 & uVar11;
            }
            lVar26 = lVar26 + uVar18 * -0x20;
            (**(code **)(*(long *)(lVar26 + -8) + 0x18))
                      (&stack0x00000210,*(undefined8 *)(lVar26 + -0x10));
            unaff_x23 = in_stack_00000210;
            if (in_stack_00000218 == 0x716edfddde06e5b1 &&
                in_stack_00000210 == (ulong *)0xc89f211d3da4b0cc) goto LAB_1006b7a78;
          }
LAB_1006b78d8:
          in_stack_000001d8 = in_stack_000001d8 & 0xffffffffffffff00;
          in_stack_000001c0 = (ulong *)0x0;
          in_stack_000001c8 = 1;
          in_stack_000001d0 = (ulong *)0x0;
          uVar3 = *(undefined1 *)(in_stack_00000028 + 0x3d2);
          in_stack_000000b0 = &stack0x000001c0;
          in_stack_000000b8 = &UNK_10b209290;
          in_stack_000000c0 = CONCAT71(in_stack_000000c0._1_7_,uVar3);
          piVar16 = *(int **)(*(long *)(unaff_x29 + -0xa0) + 0x18);
          lVar8 = *(long *)(piVar16 + 4);
          if (*piVar16 == 1) {
            lVar10 = *(long *)(*(long *)(piVar16 + 6) + 8);
            if (lVar10 != 0) {
              lVar26 = 0;
              plVar21 = (long *)(*(long *)(piVar16 + 2) + 8);
              lVar8 = lVar8 << 4;
              do {
                if (lVar8 == 0) break;
                if (plVar21[-1] != 0) {
                  (**(code **)(*plVar21 + 0x18))
                            (plVar21[-1],&stack0x00000210,&stack0x000000b0,&UNK_10b244550);
                }
                lVar26 = lVar26 + 1;
                plVar21 = plVar21 + 2;
                lVar8 = lVar8 + -0x10;
              } while (lVar10 != lVar26);
            }
          }
          else if (lVar8 != 0) {
            lVar10 = *(long *)(*(long *)(piVar16 + 6) + 0x10);
            lVar8 = lVar8 * 0x18;
            plVar21 = (long *)(*(long *)(piVar16 + 2) + 0x10);
            do {
              if ((*(long *)(plVar21[-2] + 0x10) == lVar10) && (plVar21[-1] != 0)) {
                (**(code **)(*plVar21 + 0x18))
                          (plVar21[-1],plVar21[-2],&stack0x000000b0,&UNK_10b244550);
              }
              plVar21 = plVar21 + 3;
              lVar8 = lVar8 + -0x18;
            } while (lVar8 != 0);
          }
          puVar34 = in_stack_000001d0;
          lVar8 = in_stack_000001c8;
          unaff_x23 = in_stack_000001c0;
          in_stack_000001d8 = CONCAT71(in_stack_000001d8._1_7_,uVar3);
          FUN_100a8b5bc(plVar19,&stack0x00000210);
LAB_1006b7a78:
          bVar29 = *(byte *)(in_stack_00000028 + 0x3d1);
          if ((*(char *)(in_stack_00000028 + 0x3d0) == '\x01') && ((bVar29 >> 3 & 1) != 0)) {
            if (plVar19[5] != 0) {
              lVar10 = 0;
              lVar26 = plVar19[2];
              uVar9 = plVar19[3];
              uVar17 = uVar9 & 0x91f949a1459174a4;
              uVar30 = *(undefined8 *)(lVar26 + uVar17);
              uVar11 = CONCAT17(-((char)((ulong)uVar30 >> 0x38) == 'H'),
                                CONCAT16(-((char)((ulong)uVar30 >> 0x30) == 'H'),
                                         CONCAT15(-((char)((ulong)uVar30 >> 0x28) == 'H'),
                                                  CONCAT14(-((char)((ulong)uVar30 >> 0x20) == 'H'),
                                                           CONCAT13(-((char)((ulong)uVar30 >> 0x18)
                                                                     == 'H'),CONCAT12(-((char)((
                                                  ulong)uVar30 >> 0x10) == 'H'),
                                                  CONCAT11(-((char)((ulong)uVar30 >> 8) == 'H'),
                                                           -((char)uVar30 == 'H')))))))) &
                       0x8080808080808080;
              while( true ) {
                while (uVar11 == 0) {
                  bVar28 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar30 >> 0x38) == -1),
                                               CONCAT16(-((char)((ulong)uVar30 >> 0x30) == -1),
                                                        CONCAT15(-((char)((ulong)uVar30 >> 0x28) ==
                                                                  -1),CONCAT14(-((char)((ulong)
                                                  uVar30 >> 0x20) == -1),
                                                  CONCAT13(-((char)((ulong)uVar30 >> 0x18) == -1),
                                                           CONCAT12(-((char)((ulong)uVar30 >> 0x10)
                                                                     == -1),CONCAT11(-((char)((ulong
                                                  )uVar30 >> 8) == -1),-((char)uVar30 == -1)))))))),
                                      1);
                  if ((bVar28 & 1) != 0) goto LAB_1006b7b70;
                  lVar10 = lVar10 + 8;
                  uVar17 = uVar17 + lVar10 & uVar9;
                  uVar30 = *(undefined8 *)(lVar26 + uVar17);
                  uVar11 = CONCAT17(-((char)((ulong)uVar30 >> 0x38) == 'H'),
                                    CONCAT16(-((char)((ulong)uVar30 >> 0x30) == 'H'),
                                             CONCAT15(-((char)((ulong)uVar30 >> 0x28) == 'H'),
                                                      CONCAT14(-((char)((ulong)uVar30 >> 0x20) ==
                                                                'H'),CONCAT13(-((char)((ulong)uVar30
                                                                                      >> 0x18) ==
                                                                               'H'),CONCAT12(-((char
                                                  )((ulong)uVar30 >> 0x10) == 'H'),
                                                  CONCAT11(-((char)((ulong)uVar30 >> 8) == 'H'),
                                                           -((char)uVar30 == 'H')))))))) &
                           0x8080808080808080;
                }
                uVar18 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                         (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
                uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
                uVar18 = uVar17 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) & uVar9;
                plVar21 = (long *)(lVar26 + -0x20 + uVar18 * -0x20);
                if (plVar21[1] == -0x6e06b65eba6e8b5c && *plVar21 == 0x4ae42cf8481b71fa) break;
                uVar11 = uVar11 - 1 & uVar11;
              }
              lVar26 = lVar26 + uVar18 * -0x20;
              (**(code **)(*(long *)(lVar26 + -8) + 0x18))
                        (&stack0x00000210,*(undefined8 *)(lVar26 + -0x10));
              if (lVar8 == -0x6e06b65eba6e8b5c && unaff_x23 == (ulong *)0x4ae42cf8481b71fa)
              goto LAB_1006b7b98;
            }
LAB_1006b7b70:
            func_0x000106032954(8);
            lVar8 = 0;
            unaff_x23 = (ulong *)0x0;
            puVar34 = (ulong *)0x0;
            FUN_100a8b728(plVar19,&stack0x00000210);
          }
LAB_1006b7b98:
          in_stack_00000368 = in_stack_00000210;
          if ((bVar29 & 1) != 0) {
            in_stack_000001d8 = *in_stack_00000210;
            *(undefined **)(unaff_x29 + -0x98) = &UNK_10b212cf0;
            *(undefined8 *)(unaff_x29 + -0x90) = 1;
            uVar30 = *(undefined8 *)(in_stack_000001d8 + 0x40);
            *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(in_stack_000001d8 + 0x48);
            *(undefined8 *)(unaff_x29 + -0x88) = uVar30;
            lVar8 = *(long *)(unaff_x29 + -0x90);
            unaff_x23 = *(ulong **)(unaff_x29 + -0x98);
            puVar34 = *(ulong **)(unaff_x29 + -0x88);
            *(undefined1 **)(unaff_x29 + -0x78) = &stack0x00000210;
            *(undefined **)(unaff_x29 + -0x70) = &UNK_10b21f3a8;
            *(undefined **)(unaff_x29 + -0x68) = &UNK_10b216f28;
            in_stack_00000090 = (ulong *)(unaff_x29 + -0x78);
            in_stack_00000088 = 0;
            in_stack_000000a0 = (ulong *)(unaff_x29 + -0x98);
            in_stack_00000098 = 1;
            in_stack_000001d0 = &stack0x00000088;
            in_stack_000001c0 = (ulong *)0x2;
            in_stack_000001c8 = in_stack_00000058;
            if (((uVar1 == 0) &&
                ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
                 0x7fffffffffffffff) != 0)) && (uVar11 = FUN_107c05e34(), (uVar11 & 1) == 0)) {
              *(undefined1 *)(plVar19 + 1) = 1;
            }
            if (*plVar19 == 1) {
              *plVar19 = in_xzr;
            }
            else {
              __ZN3std3sys4sync6rwlock5queue6RwLock16unlock_contended17h5028e77bc6335836E(plVar19);
            }
            uVar11 = in_stack_00000210[10] & 3;
            if (uVar11 != 2) {
              uVar9 = in_stack_00000210[10];
              do {
                if ((uVar11 == 1) && ((uVar9 >> 2 & 0x1ffffffffffff) == 1)) {
                  uVar17 = in_stack_00000210[10];
                  if (uVar17 == uVar9) {
                    in_stack_00000210[10] = uVar9 & 0xfff8000000000000 | 3;
                    FUN_10074fd94(in_stack_00000218,in_stack_00000220);
LAB_1006b7d80:
                    *(ulong ***)(unaff_x29 + -0xb8) = &stack0x000001c0;
                    in_stack_000000b0 = &stack0x00000078;
                    in_stack_000000b8 = (undefined *)(unaff_x29 + -0xb8);
                    in_stack_00000078 = in_stack_00000028 + 0x3c0;
                    in_stack_000000c0 = in_stack_00000020;
                    FUN_100c3810c(&stack0x000000b0);
                    uVar11 = *(ulong *)(in_stack_00000048 + 0x10);
                    uVar17 = *(ulong *)(in_stack_00000028 + 0x1e0);
                    uVar9 = uVar17 & uVar11;
                    goto joined_r0x0001006b7db4;
                  }
                }
                else {
                  uVar17 = in_stack_00000210[10];
                  if (uVar17 == uVar9) {
                    in_stack_00000210[10] =
                         (uVar9 >> 2 & 0xc001ffffffffffff) * 4 - 4 | uVar9 & 0xfff8000000000003;
                    goto LAB_1006b7d80;
                  }
                }
                uVar11 = uVar17 & 3;
                uVar9 = uVar17;
              } while (uVar11 != 2);
            }
            goto LAB_1006b8fcc;
          }
          if (((uVar1 == 0) &&
              ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
               0x7fffffffffffffff) != 0)) && (uVar11 = FUN_107c05e34(), (uVar11 & 1) == 0)) {
            *(undefined1 *)(plVar19 + 1) = 1;
          }
          if (*plVar19 == 1) {
            *plVar19 = in_xzr;
          }
          else {
            __ZN3std3sys4sync6rwlock5queue6RwLock16unlock_contended17h5028e77bc6335836E(plVar19);
          }
          uVar11 = in_stack_00000210[10];
          do {
            while( true ) {
              if ((uVar11 & 3) == 2) goto LAB_1006b8f98;
              uVar9 = uVar11 >> 2;
              if (((uVar11 & 3) != 1) || ((uVar9 & 0x1ffffffffffff) != 1)) break;
              uVar17 = uVar11 & 0xfff8000000000000;
              uVar9 = in_stack_00000210[10];
              bVar2 = uVar9 == uVar11;
              uVar11 = uVar9;
              if (bVar2) {
                in_stack_00000210[10] = uVar17 | 3;
                FUN_10074fd94(in_stack_00000218,in_stack_00000220);
                goto LAB_1006b7c44;
              }
            }
            uVar18 = uVar11 & 0xfff8000000000003;
            uVar17 = in_stack_00000210[10];
            bVar2 = uVar17 != uVar11;
            uVar11 = uVar17;
          } while (bVar2);
          in_stack_00000210[10] = (uVar9 & 0xc001ffffffffffff) * 4 - 4 | uVar18;
LAB_1006b7c44:
          uVar11 = *(ulong *)(in_stack_00000048 + 0x10);
          uVar17 = *(ulong *)(in_stack_00000028 + 0x1e0);
          uVar9 = uVar17 & uVar11;
          goto joined_r0x0001006b7db4;
        }
        uVar11 = in_stack_00000210[10];
        do {
          while( true ) {
            if ((uVar11 & 3) == 2) goto LAB_1006b8fa4;
            uVar9 = uVar11 >> 2;
            if (((uVar11 & 3) != 1) || ((uVar9 & 0x1ffffffffffff) != 1)) break;
            uVar17 = uVar11 & 0xfff8000000000000;
            uVar9 = in_stack_00000210[10];
            bVar2 = uVar9 == uVar11;
            uVar11 = uVar9;
            if (bVar2) {
              in_stack_00000210[10] = uVar17 | 3;
              FUN_10074fd94();
              goto LAB_1006b9324;
            }
          }
          uVar18 = uVar11 & 0xfff8000000000003;
          uVar17 = in_stack_00000210[10];
          bVar2 = uVar17 != uVar11;
          uVar11 = uVar17;
        } while (bVar2);
        in_stack_00000210[10] = (uVar9 & 0xc001ffffffffffff) * 4 - 4 | uVar18;
      }
LAB_1006b9324:
      FUN_107c05cac(&UNK_108caab68,0x1d,&UNK_10b21f390);
LAB_1006b933c:
      uVar11 = unaff_x23[10];
      do {
        while( true ) {
          if ((uVar11 & 3) == 2) goto LAB_1006b8fa4;
          uVar9 = uVar11 >> 2;
          if (((uVar11 & 3) != 1) || ((uVar9 & 0x1ffffffffffff) != 1)) break;
          uVar17 = uVar11 & 0xfff8000000000000;
          uVar9 = unaff_x23[10];
          bVar2 = uVar9 == uVar11;
          uVar11 = uVar9;
          if (bVar2) {
            unaff_x23[10] = uVar17 | 3;
            FUN_10074fd94();
            goto LAB_1006b93b0;
          }
        }
        uVar18 = uVar11 & 0xfff8000000000003;
        uVar17 = unaff_x23[10];
        bVar2 = uVar17 != uVar11;
        uVar11 = uVar17;
      } while (bVar2);
      unaff_x23[10] = (uVar9 & 0xc001ffffffffffff) * 4 - 4 | uVar18;
    }
    else {
      uVar11 = 0xffffffffffffffff;
      if (uVar17 != 0xffffffffffffffff) {
        uVar11 = ~uVar17;
      }
      uVar11 = uVar11 & uVar9;
      *(ulong *)(in_stack_00000048 + 0x10) = uVar11;
      uVar17 = *(ulong *)(in_stack_00000028 + 0x1e0);
      uVar9 = uVar17 & uVar11;
      unaff_x23 = in_stack_00000210;
      in_stack_00000020 = in_stack_00000360;
      in_stack_00000210 = unaff_x21;
      in_stack_00000218 = in_stack_00000370;
      in_stack_00000220 = in_stack_00000378;
joined_r0x0001006b7db4:
      if (uVar9 != 0) {
        uVar9 = 0xffffffffffffffff;
        if (uVar17 != 0xffffffffffffffff) {
          uVar9 = ~uVar17;
        }
        uVar11 = uVar9 & uVar11;
        *(ulong *)(in_stack_00000048 + 0x10) = uVar11;
      }
      lVar10 = lVar8;
      puVar24 = puVar34;
      if (*(long *)(in_stack_00000028 + 0xd48) == 2) {
LAB_1006b7374:
        lVar8 = *(long *)(in_stack_00000028 + 0xf50);
      }
      else {
        uVar9 = *(ulong *)(in_stack_00000028 + 0xf40);
        if ((uVar9 & uVar11) == 0) {
          in_stack_00000088 = 0x8000000000000000;
          piVar16 = (int *)in_stack_00000060[3];
          lVar10 = *(long *)(piVar16 + 4);
          plVar19 = *(long **)(piVar16 + 6);
          in_stack_00000210 = unaff_x23;
          if (*piVar16 == 1) {
            lVar26 = plVar19[1];
            if (lVar26 != 0) {
              lVar7 = 0;
              puVar24 = (ulong *)*plVar19;
              puVar27 = (ulong *)plVar19[2];
              plVar19 = (long *)(*(long *)(piVar16 + 2) + 8);
              lVar10 = lVar10 << 4;
              do {
                in_stack_00000210 = unaff_x23;
                if (lVar10 == 0) break;
                if (plVar19[-1] != 0) {
                  (**(code **)(*plVar19 + 0x18))
                            (plVar19[-1],&stack0x00000210,&stack0x00000088,&UNK_10b24e1e8);
                }
                lVar7 = lVar7 + 1;
                plVar19 = plVar19 + 2;
                lVar10 = lVar10 + -0x10;
                in_stack_00000210 = puVar24;
                unaff_x23 = puVar24;
                lVar8 = lVar26;
                puVar34 = puVar27;
              } while (lVar26 != lVar7);
            }
          }
          else if (lVar10 != 0) {
            lVar26 = plVar19[2];
            lVar10 = lVar10 * 0x18;
            plVar19 = (long *)(*(long *)(piVar16 + 2) + 0x10);
            do {
              if ((*(long *)(plVar19[-2] + 0x10) == lVar26) && (plVar19[-1] != 0)) {
                (**(code **)(*plVar19 + 0x18))
                          (plVar19[-1],plVar19[-2],&stack0x00000088,&UNK_10b24e1e8);
              }
              plVar19 = plVar19 + 3;
              lVar10 = lVar10 + -0x18;
            } while (lVar10 != 0);
          }
          FUN_1061db950(&stack0x00000210,in_stack_00000050,in_stack_00000058);
          if (in_stack_00000210 != (ulong *)0x0) {
            if ((in_stack_00000210[1] & uVar9) == 0) {
              auVar32 = __ZN102__LT_tracing_subscriber__registry__sharded__Data_u20_as_u20_tracing_subscriber__registry__SpanData_GT_14extensions_mut17h126407c2e34cc2fdE
                                  (&stack0x00000368);
              plVar19 = auVar32._0_8_;
              uVar30 = *(undefined8 *)(*in_stack_00000210 + 0x10);
              unaff_x23 = *(ulong **)(*in_stack_00000210 + 0x18);
              if (unaff_x23 == (ulong *)0x0) {
                lVar10 = 1;
              }
              else {
                lVar10 = _malloc(unaff_x23);
                if (lVar10 == 0) {
                  FUN_107c03c64(1,unaff_x23);
                  goto LAB_1006b97f4;
                }
              }
              _memcpy(lVar10,uVar30,unaff_x23);
              in_stack_000001d8 = in_stack_000001d8 & 0xffffffffffffff00;
              in_stack_000001c0 = (ulong *)0x0;
              in_stack_000001c8 = 1;
              in_stack_000001d0 = (ulong *)0x0;
              in_stack_000000b0 = &stack0x000001c0;
              in_stack_000000b8 = &UNK_10b209290;
              in_stack_000000c0 = in_stack_000000c0 & 0xffffffffffffff00;
              lVar26 = *(long *)(piVar16 + 4);
              if (*piVar16 == 1) {
                lVar7 = *(long *)(*(long *)(piVar16 + 6) + 8);
                if (lVar7 != 0) {
                  lVar25 = 0;
                  plVar21 = (long *)(*(long *)(piVar16 + 2) + 8);
                  lVar26 = lVar26 << 4;
                  do {
                    if (lVar26 == 0) break;
                    if (plVar21[-1] != 0) {
                      (**(code **)(*plVar21 + 0x18))
                                (plVar21[-1],&stack0x00000210,&stack0x000000b0,&UNK_10b244550);
                    }
                    lVar25 = lVar25 + 1;
                    plVar21 = plVar21 + 2;
                    lVar26 = lVar26 + -0x10;
                  } while (lVar7 != lVar25);
                }
              }
              else if (lVar26 != 0) {
                lVar7 = *(long *)(*(long *)(piVar16 + 6) + 0x10);
                lVar26 = lVar26 * 0x18;
                plVar21 = (long *)(*(long *)(piVar16 + 2) + 0x10);
                do {
                  if ((*(long *)(plVar21[-2] + 0x10) == lVar7) && (plVar21[-1] != 0)) {
                    (**(code **)(*plVar21 + 0x18))
                              (plVar21[-1],plVar21[-2],&stack0x000000b0,&UNK_10b244550);
                  }
                  plVar21 = plVar21 + 3;
                  lVar26 = lVar26 + -0x18;
                } while (lVar26 != 0);
              }
              in_stack_00000238 = in_stack_000001d0;
              FUN_100a8bb24(plVar19,&stack0x00000210);
              if ((((auVar32._8_4_ & 1) == 0) &&
                  ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
                   0x7fffffffffffffff) != 0)) && (uVar11 = FUN_107c05e34(), (uVar11 & 1) == 0)) {
                *(undefined1 *)(plVar19 + 1) = 1;
              }
              if (*plVar19 == 1) {
                *plVar19 = in_xzr;
              }
              else {
                __ZN3std3sys4sync6rwlock5queue6RwLock16unlock_contended17h5028e77bc6335836E(plVar19)
                ;
              }
              uVar11 = in_stack_00000210[10];
              do {
                while( true ) {
                  if ((uVar11 & 3) == 2) goto LAB_1006b8f98;
                  uVar9 = uVar11 >> 2;
                  puVar24 = unaff_x23;
                  in_stack_00000020 = in_stack_00000028;
                  in_stack_00000368 = in_stack_00000210;
                  in_stack_00000218 = lVar8;
                  in_stack_00000220 = puVar34;
                  if (((uVar11 & 3) != 1) || ((uVar9 & 0x1ffffffffffff) != 1)) break;
                  uVar17 = uVar11 & 0xfff8000000000000;
                  uVar9 = in_stack_00000210[10];
                  bVar2 = uVar9 == uVar11;
                  uVar11 = uVar9;
                  if (bVar2) {
                    in_stack_00000210[10] = uVar17 | 3;
                    FUN_10074fd94(lVar8,puVar34);
                    lVar8 = *(long *)(in_stack_00000028 + 0xf50);
                    goto joined_r0x0001006b8268;
                  }
                }
                uVar18 = uVar11 & 0xfff8000000000003;
                uVar17 = in_stack_00000210[10];
                bVar2 = uVar17 != uVar11;
                uVar11 = uVar17;
              } while (bVar2);
              in_stack_00000210[10] = (uVar9 & 0xc001ffffffffffff) * 4 - 4 | uVar18;
              goto LAB_1006b7374;
            }
            uVar11 = in_stack_00000210[10];
            do {
              while( true ) {
                if ((uVar11 & 3) == 2) goto LAB_1006b8ffc;
                uVar9 = uVar11 >> 2;
                if (((uVar11 & 3) != 1) || ((uVar9 & 0x1ffffffffffff) != 1)) break;
                uVar17 = uVar11 & 0xfff8000000000000;
                uVar9 = in_stack_00000210[10];
                bVar2 = uVar9 == uVar11;
                uVar11 = uVar9;
                if (bVar2) {
                  in_stack_00000210[10] = uVar17 | 3;
                  FUN_10074fd94(lVar8,puVar34);
                  goto LAB_1006b7354;
                }
              }
              uVar18 = uVar11 & 0xfff8000000000003;
              uVar17 = in_stack_00000210[10];
              bVar2 = uVar17 != uVar11;
              uVar11 = uVar17;
            } while (bVar2);
            in_stack_00000210[10] = (uVar9 & 0xc001ffffffffffff) * 4 - 4 | uVar18;
          }
LAB_1006b7354:
          unaff_x23 = in_stack_00000210;
          lVar10 = lVar8;
          puVar24 = puVar34;
          if (in_stack_00000088 != 0x8000000000000000 && in_stack_00000088 != 0) {
            _free(in_stack_00000090);
          }
          goto LAB_1006b7374;
        }
        uVar17 = 0xffffffffffffffff;
        if (uVar9 != 0xffffffffffffffff) {
          uVar17 = ~uVar9;
        }
        *(ulong *)(in_stack_00000048 + 0x10) = uVar17 & uVar11;
        lVar8 = *(long *)(in_stack_00000028 + 0xf50);
      }
joined_r0x0001006b8268:
      if (lVar8 != 7) {
        uVar11 = *(ulong *)(in_stack_00000028 + 0xfc0);
        if ((*(ulong *)(in_stack_00000048 + 0x10) & uVar11) != 0) {
          uVar9 = 0xffffffffffffffff;
          if (uVar11 != 0xffffffffffffffff) {
            uVar9 = ~uVar11;
          }
          *(ulong *)(in_stack_00000048 + 0x10) = *(ulong *)(in_stack_00000048 + 0x10) & uVar9;
        }
      }
      if (*(long *)(in_stack_00000028 + 0xfd0) == 7) {
        return in_stack_00000058;
      }
      plVar19 = *(long **)(in_stack_00000028 + 0x1068);
      if ((*(ulong *)(in_stack_00000048 + 0x10) & (ulong)plVar19) != 0) {
        uVar11 = 0xffffffffffffffff;
        if (plVar19 != (long *)0xffffffffffffffff) {
          uVar11 = ~(ulong)plVar19;
        }
        *(ulong *)(in_stack_00000048 + 0x10) = uVar11 & *(ulong *)(in_stack_00000048 + 0x10);
        return in_stack_00000058;
      }
      in_stack_00000078 = in_stack_00000028;
      in_stack_00000080 = plVar19;
      FUN_1061db950(&stack0x00000210,in_stack_00000050,in_stack_00000058);
      if (unaff_x23 != (ulong *)0x0) {
        if ((unaff_x23[1] & (ulong)plVar19) == 0) {
          in_stack_00000088 = in_stack_00000028;
          in_stack_00000090 = unaff_x23;
          in_stack_00000098 = lVar10;
          in_stack_000000a0 = puVar24;
          in_stack_000000a8 = plVar19;
          auVar32 = __ZN102__LT_tracing_subscriber__registry__sharded__Data_u20_as_u20_tracing_subscriber__registry__SpanData_GT_14extensions_mut17h126407c2e34cc2fdE
                              (&stack0x00000090);
          plVar21 = auVar32._0_8_;
          puVar34 = unaff_x23;
          lVar8 = lVar10;
          puVar27 = puVar24;
          if ((*(byte *)(in_stack_00000028 + 0x105d) & 1) != 0) {
            if (plVar21[5] != 0) {
              lVar26 = 0;
              lVar7 = plVar21[2];
              uVar9 = plVar21[3];
              in_stack_00000210 = (ulong *)0x50c73df803020621;
              uVar17 = uVar9 & 0x50c73df803020621;
              uVar30 = *(undefined8 *)(lVar7 + uVar17);
              uVar11 = CONCAT17(-((char)((ulong)uVar30 >> 0x38) == '('),
                                CONCAT16(-((char)((ulong)uVar30 >> 0x30) == '('),
                                         CONCAT15(-((char)((ulong)uVar30 >> 0x28) == '('),
                                                  CONCAT14(-((char)((ulong)uVar30 >> 0x20) == '('),
                                                           CONCAT13(-((char)((ulong)uVar30 >> 0x18)
                                                                     == '('),CONCAT12(-((char)((
                                                  ulong)uVar30 >> 0x10) == '('),
                                                  CONCAT11(-((char)((ulong)uVar30 >> 8) == '('),
                                                           -((char)uVar30 == '(')))))))) &
                       0x8080808080808080;
              while( true ) {
                while (uVar11 == 0) {
                  bVar29 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar30 >> 0x38) == -1),
                                               CONCAT16(-((char)((ulong)uVar30 >> 0x30) == -1),
                                                        CONCAT15(-((char)((ulong)uVar30 >> 0x28) ==
                                                                  -1),CONCAT14(-((char)((ulong)
                                                  uVar30 >> 0x20) == -1),
                                                  CONCAT13(-((char)((ulong)uVar30 >> 0x18) == -1),
                                                           CONCAT12(-((char)((ulong)uVar30 >> 0x10)
                                                                     == -1),CONCAT11(-((char)((ulong
                                                  )uVar30 >> 8) == -1),-((char)uVar30 == -1)))))))),
                                      1);
                  if ((bVar29 & 1) != 0) goto LAB_1006b7e4c;
                  lVar26 = lVar26 + 8;
                  uVar17 = uVar17 + lVar26 & uVar9;
                  uVar30 = *(undefined8 *)(lVar7 + uVar17);
                  uVar11 = CONCAT17(-((char)((ulong)uVar30 >> 0x38) == '('),
                                    CONCAT16(-((char)((ulong)uVar30 >> 0x30) == '('),
                                             CONCAT15(-((char)((ulong)uVar30 >> 0x28) == '('),
                                                      CONCAT14(-((char)((ulong)uVar30 >> 0x20) ==
                                                                '('),CONCAT13(-((char)((ulong)uVar30
                                                                                      >> 0x18) ==
                                                                               '('),CONCAT12(-((char
                                                  )((ulong)uVar30 >> 0x10) == '('),
                                                  CONCAT11(-((char)((ulong)uVar30 >> 8) == '('),
                                                           -((char)uVar30 == '(')))))))) &
                           0x8080808080808080;
                }
                uVar18 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                         (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
                uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
                uVar18 = uVar17 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) & uVar9;
                plVar20 = (long *)(lVar7 + -0x20 + uVar18 * -0x20);
                if (plVar20[1] == 0x50c73df803020621 && *plVar20 == 0x58a7d326c36cc3ff) break;
                uVar11 = uVar11 - 1 & uVar11;
              }
              lVar7 = lVar7 + uVar18 * -0x20;
              (**(code **)(*(long *)(lVar7 + -8) + 0x18))
                        (&stack0x00000210,*(undefined8 *)(lVar7 + -0x10));
              if (lVar10 == 0x50c73df803020621 && unaff_x23 == (ulong *)0x58a7d326c36cc3ff)
              goto LAB_1006b7e74;
            }
LAB_1006b7e4c:
            func_0x000106032954(8);
            FUN_100a8b9dc(plVar21,&stack0x00000210);
            puVar34 = (ulong *)0x0;
            lVar8 = 0;
            puVar27 = (ulong *)0x0;
          }
LAB_1006b7e74:
          if (*in_stack_00000060 == 1) {
            if (((*(byte *)(in_stack_00000028 + 0x1061) & 1) == 0) &&
               (FUN_100a89208(&stack0x00000360,&stack0x00000078), in_stack_00000020 != 0)) {
              auVar31 = __ZN102__LT_tracing_subscriber__registry__sharded__Data_u20_as_u20_tracing_subscriber__registry__SpanData_GT_14extensions_mut17h126407c2e34cc2fdE
                                  ((ulong)&stack0x00000210 | 8);
              plVar20 = auVar31._0_8_;
              if (plVar20[5] != 0) {
                lVar8 = 0;
                in_stack_00000210 = (ulong *)0x41a0f318cb23d86b;
                lVar26 = plVar20[2];
                uVar9 = plVar20[3];
                plVar19 = (long *)0xe766182d3ecb9236;
                uVar17 = uVar9 & 0x41a0f318cb23d86b;
                uVar30 = *(undefined8 *)(lVar26 + uVar17);
                uVar11 = CONCAT17(-((char)((ulong)uVar30 >> 0x38) == ' '),
                                  CONCAT16(-((char)((ulong)uVar30 >> 0x30) == ' '),
                                           CONCAT15(-((char)((ulong)uVar30 >> 0x28) == ' '),
                                                    CONCAT14(-((char)((ulong)uVar30 >> 0x20) == ' ')
                                                             ,CONCAT13(-((char)((ulong)uVar30 >>
                                                                               0x18) == ' '),
                                                                       CONCAT12(-((char)((ulong)
                                                  uVar30 >> 0x10) == ' '),
                                                  CONCAT11(-((char)((ulong)uVar30 >> 8) == ' '),
                                                           -((char)uVar30 == ' ')))))))) &
                         0x8080808080808080;
                while( true ) {
                  while (uVar11 == 0) {
                    bVar29 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar30 >> 0x38) == -1),
                                                 CONCAT16(-((char)((ulong)uVar30 >> 0x30) == -1),
                                                          CONCAT15(-((char)((ulong)uVar30 >> 0x28)
                                                                    == -1),CONCAT14(-((char)((ulong)
                                                  uVar30 >> 0x20) == -1),
                                                  CONCAT13(-((char)((ulong)uVar30 >> 0x18) == -1),
                                                           CONCAT12(-((char)((ulong)uVar30 >> 0x10)
                                                                     == -1),CONCAT11(-((char)((ulong
                                                  )uVar30 >> 8) == -1),-((char)uVar30 == -1)))))))),
                                        1);
                    if ((bVar29 & 1) != 0) goto LAB_1006b83e8;
                    lVar8 = lVar8 + 8;
                    uVar17 = uVar17 + lVar8 & uVar9;
                    uVar30 = *(undefined8 *)(lVar26 + uVar17);
                    uVar11 = CONCAT17(-((char)((ulong)uVar30 >> 0x38) == ' '),
                                      CONCAT16(-((char)((ulong)uVar30 >> 0x30) == ' '),
                                               CONCAT15(-((char)((ulong)uVar30 >> 0x28) == ' '),
                                                        CONCAT14(-((char)((ulong)uVar30 >> 0x20) ==
                                                                  ' '),CONCAT13(-((char)((ulong)
                                                  uVar30 >> 0x18) == ' '),
                                                  CONCAT12(-((char)((ulong)uVar30 >> 0x10) == ' '),
                                                           CONCAT11(-((char)((ulong)uVar30 >> 8) ==
                                                                     ' '),-((char)uVar30 == ' ')))))
                                                  ))) & 0x8080808080808080;
                  }
                  uVar18 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                           (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
                  uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10
                  ;
                  uVar18 = uVar17 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) & uVar9;
                  plVar12 = (long *)(lVar26 + -0x20 + uVar18 * -0x20);
                  if (plVar12[1] == 0x41a0f318cb23d86b && *plVar12 == -0x1899e7d2c1346dca) break;
                  uVar11 = uVar11 - 1 & uVar11;
                }
                lVar26 = lVar26 + uVar18 * -0x20;
                plVar12 = *(long **)(lVar26 + -0x10);
                (**(code **)(*(long *)(lVar26 + -8) + 0x18))(&stack0x000000b0,plVar12);
                if (in_stack_000000b8 == (undefined *)0x41a0f318cb23d86b &&
                    in_stack_000000b0 == (undefined8 *)0xe766182d3ecb9236) {
                  FUN_100b4fac8(in_stack_00000028 + 0xfd8,plVar12);
                  if (*plVar12 != 2 || plVar12[1] != 0) {
                    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                              (&UNK_108cbb9fa,0x87,&UNK_10b22f1d0);
                    goto LAB_1006b97f4;
                  }
                  in_stack_00000210 = (ulong *)plVar12[2];
                  if (((in_stack_00000210 != (ulong *)0x0) &&
                      (uVar11 = *in_stack_00000210, *in_stack_00000210 = uVar11 + 1,
                      (long)uVar11 < 0)) ||
                     ((plVar19 = (long *)plVar12[3], plVar19 != (long *)0x0 &&
                      (lVar8 = *plVar19, *plVar19 = lVar8 + 1, lVar8 < 0)))) goto LAB_1006b97f4;
                  cVar22 = (char)plVar12[4];
                  goto LAB_1006b83ec;
                }
              }
LAB_1006b83e8:
              cVar22 = '\x02';
LAB_1006b83ec:
              if ((((auVar31._8_8_ & 1) == 0) &&
                  ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
                   0x7fffffffffffffff) != 0)) && (uVar11 = FUN_107c05e34(), (uVar11 & 1) == 0)) {
                *(undefined1 *)(plVar20 + 1) = 1;
              }
              if (*plVar20 == 1) {
                *plVar20 = in_xzr;
              }
              else {
                __ZN3std3sys4sync6rwlock5queue6RwLock16unlock_contended17h5028e77bc6335836E(plVar20)
                ;
              }
              uVar11 = in_stack_00000368[10];
              do {
                while( true ) {
                  if ((uVar11 & 3) == 2) {
                    in_stack_000001c0 = (ulong *)0x2;
                    in_stack_000000b0 = &stack0x000001c0;
                    puVar13 = &stack0x000000b0;
                    goto LAB_1006b9060;
                  }
                  uVar9 = uVar11 >> 2;
                  if (((uVar11 & 3) != 1) || ((uVar9 & 0x1ffffffffffff) != 1)) break;
                  uVar17 = uVar11 & 0xfff8000000000000;
                  uVar9 = in_stack_00000368[10];
                  bVar2 = uVar9 == uVar11;
                  uVar11 = uVar9;
                  if (bVar2) {
                    in_stack_00000368[10] = uVar17 | 3;
                    FUN_10074fd94(in_stack_00000218,in_stack_00000220);
                    goto LAB_1006b8494;
                  }
                }
                uVar18 = uVar11 & 0xfff8000000000003;
                uVar17 = in_stack_00000368[10];
                bVar2 = uVar17 != uVar11;
                uVar11 = uVar17;
              } while (bVar2);
              in_stack_00000368[10] = (uVar9 & 0xc001ffffffffffff) * 4 - 4 | uVar18;
LAB_1006b8494:
              if (cVar22 != '\x02') {
                *(ulong **)(unaff_x29 + -0x78) = in_stack_00000210;
                *(long **)(unaff_x29 + -0x70) = plVar19;
                *(char *)(unaff_x29 + -0x68) = cVar22;
                goto LAB_1006b8738;
              }
            }
            puVar34 = (ulong *)(*
                               ___ZN13opentelemetry7context15CURRENT_CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17heb5908a1e17b5f1aE
                               )();
            if (((char)puVar34[7] != '\x01') &&
               (puVar34 = (ulong *)thunk_FUN_108a21f68(puVar34,0), puVar34 == (ulong *)0x0)) {
              FUN_107c05e20(&UNK_10b3d44b0);
              goto LAB_1006b97f4;
            }
            if (0x7ffffffffffffffe < *puVar34) {
              FUN_107c05c9c(&UNK_10b3d4450);
              goto LAB_1006b97f4;
            }
            *puVar34 = *puVar34 + 1;
            plVar19 = (long *)puVar34[4];
            if (((plVar19 != (long *)0x0) && (lVar8 = *plVar19, *plVar19 = lVar8 + 1, lVar8 < 0)) ||
               ((plVar20 = (long *)puVar34[5], plVar20 != (long *)0x0 &&
                (lVar8 = *plVar20, *plVar20 = lVar8 + 1, lVar8 < 0)))) goto LAB_1006b97f4;
            uVar11 = puVar34[6];
            *puVar34 = *puVar34 - 1;
            *(long **)(unaff_x29 + -0x78) = plVar19;
            *(long **)(unaff_x29 + -0x70) = plVar20;
            *(char *)(unaff_x29 + -0x68) = (char)uVar11;
          }
          else {
            if ((*in_stack_00000060 == 2) &&
               (FUN_1061db950(&stack0x00000210,in_stack_00000050,in_stack_00000060[1]),
               puVar34 != (ulong *)0x0)) {
              if ((puVar34[1] & (ulong)plVar19) == 0) {
                auVar33 = __ZN102__LT_tracing_subscriber__registry__sharded__Data_u20_as_u20_tracing_subscriber__registry__SpanData_GT_14extensions_mut17h126407c2e34cc2fdE
                                    (&stack0x00000218);
                plVar19 = auVar33._0_8_;
                uVar1 = auVar33._8_4_ & 1;
                if (plVar19[5] != 0) {
                  lVar26 = 0;
                  lVar7 = plVar19[2];
                  uVar9 = plVar19[3];
                  uVar17 = uVar9 & 0x41a0f318cb23d86b;
                  uVar30 = *(undefined8 *)(lVar7 + uVar17);
                  uVar11 = CONCAT17(-((char)((ulong)uVar30 >> 0x38) == ' '),
                                    CONCAT16(-((char)((ulong)uVar30 >> 0x30) == ' '),
                                             CONCAT15(-((char)((ulong)uVar30 >> 0x28) == ' '),
                                                      CONCAT14(-((char)((ulong)uVar30 >> 0x20) ==
                                                                ' '),CONCAT13(-((char)((ulong)uVar30
                                                                                      >> 0x18) ==
                                                                               ' '),CONCAT12(-((char
                                                  )((ulong)uVar30 >> 0x10) == ' '),
                                                  CONCAT11(-((char)((ulong)uVar30 >> 8) == ' '),
                                                           -((char)uVar30 == ' ')))))))) &
                           0x8080808080808080;
                  while( true ) {
                    while (uVar11 == 0) {
                      bVar29 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar30 >> 0x38) == -1),
                                                   CONCAT16(-((char)((ulong)uVar30 >> 0x30) == -1),
                                                            CONCAT15(-((char)((ulong)uVar30 >> 0x28)
                                                                      == -1),CONCAT14(-((char)((
                                                  ulong)uVar30 >> 0x20) == -1),
                                                  CONCAT13(-((char)((ulong)uVar30 >> 0x18) == -1),
                                                           CONCAT12(-((char)((ulong)uVar30 >> 0x10)
                                                                     == -1),CONCAT11(-((char)((ulong
                                                  )uVar30 >> 8) == -1),-((char)uVar30 == -1)))))))),
                                          1);
                      if ((bVar29 & 1) != 0) goto LAB_1006b8664;
                      lVar26 = lVar26 + 8;
                      uVar17 = uVar17 + lVar26 & uVar9;
                      uVar30 = *(undefined8 *)(lVar7 + uVar17);
                      uVar11 = CONCAT17(-((char)((ulong)uVar30 >> 0x38) == ' '),
                                        CONCAT16(-((char)((ulong)uVar30 >> 0x30) == ' '),
                                                 CONCAT15(-((char)((ulong)uVar30 >> 0x28) == ' '),
                                                          CONCAT14(-((char)((ulong)uVar30 >> 0x20)
                                                                    == ' '),CONCAT13(-((char)((ulong
                                                  )uVar30 >> 0x18) == ' '),
                                                  CONCAT12(-((char)((ulong)uVar30 >> 0x10) == ' '),
                                                           CONCAT11(-((char)((ulong)uVar30 >> 8) ==
                                                                     ' '),-((char)uVar30 == ' ')))))
                                                  ))) & 0x8080808080808080;
                    }
                    uVar18 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                             (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
                    uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar18 & 0xffff0000ffff) << 0x10;
                    uVar18 = uVar17 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) & uVar9
                    ;
                    plVar20 = (long *)(lVar7 + -0x20 + uVar18 * -0x20);
                    if (plVar20[1] == 0x41a0f318cb23d86b && *plVar20 == -0x1899e7d2c1346dca) break;
                    uVar11 = uVar11 - 1 & uVar11;
                  }
                  lVar7 = lVar7 + uVar18 * -0x20;
                  plVar20 = *(long **)(lVar7 + -0x10);
                  (**(code **)(*(long *)(lVar7 + -8) + 0x18))(&stack0x00000360,plVar20);
                  if (in_stack_00000368 == (ulong *)0x41a0f318cb23d86b &&
                      in_stack_00000020 == 0xe766182d3ecb9236) {
                    FUN_100b4fac8(in_stack_00000028 + 0xfd8,plVar20);
                    if (*plVar20 != 2 || plVar20[1] != 0) {
                      __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                                (&UNK_108cbb9fa,0x87,&UNK_10b22f1d0);
                      goto LAB_1006b97f4;
                    }
                    plVar12 = (long *)plVar20[2];
                    if (((plVar12 != (long *)0x0) &&
                        (lVar26 = *plVar12, *plVar12 = lVar26 + 1, lVar26 < 0)) ||
                       ((plVar14 = (long *)plVar20[3], plVar14 != (long *)0x0 &&
                        (lVar26 = *plVar14, *plVar14 = lVar26 + 1, lVar26 < 0))))
                    goto LAB_1006b97f4;
                    lVar26 = plVar20[4];
                    *(long **)(unaff_x29 + -0x78) = plVar12;
                    *(long **)(unaff_x29 + -0x70) = plVar14;
                    *(char *)(unaff_x29 + -0x68) = (char)lVar26;
                    if (((uVar1 == 0) &&
                        ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
                         0x7fffffffffffffff) != 0)) && (uVar11 = FUN_107c05e34(), (uVar11 & 1) == 0)
                       ) {
                      *(undefined1 *)(plVar19 + 1) = 1;
                    }
                    if (*plVar19 == 1) {
                      *plVar19 = in_xzr;
                    }
                    else {
                      __ZN3std3sys4sync6rwlock5queue6RwLock16unlock_contended17h5028e77bc6335836E
                                (plVar19);
                    }
                    uVar11 = puVar34[10];
                    goto joined_r0x0001006b85e8;
                  }
                }
LAB_1006b8664:
                if (((uVar1 == 0) &&
                    ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
                     0x7fffffffffffffff) != 0)) && (uVar11 = FUN_107c05e34(), (uVar11 & 1) == 0)) {
                  *(undefined1 *)(plVar19 + 1) = 1;
                }
                if (*plVar19 == 1) {
                  *plVar19 = in_xzr;
                }
                else {
                  __ZN3std3sys4sync6rwlock5queue6RwLock16unlock_contended17h5028e77bc6335836E
                            (plVar19);
                }
                uVar11 = puVar34[10];
                do {
                  while( true ) {
                    if ((uVar11 & 3) == 2) goto LAB_1006b86a4;
                    uVar9 = uVar11 >> 2;
                    if (((uVar11 & 3) != 1) || ((uVar9 & 0x1ffffffffffff) != 1)) break;
                    uVar17 = uVar11 & 0xfff8000000000000;
                    uVar9 = puVar34[10];
                    bVar2 = uVar9 == uVar11;
                    uVar11 = uVar9;
                    if (bVar2) {
                      puVar34[10] = uVar17 | 3;
                      FUN_10074fd94(lVar8,puVar27);
                      goto LAB_1006b872c;
                    }
                  }
                  uVar18 = uVar11 & 0xfff8000000000003;
                  uVar17 = puVar34[10];
                  bVar2 = uVar17 != uVar11;
                  uVar11 = uVar17;
                } while (bVar2);
                puVar34[10] = (uVar9 & 0xc001ffffffffffff) * 4 - 4 | uVar18;
              }
              else {
                uVar11 = puVar34[10];
                do {
                  while( true ) {
                    if ((uVar11 & 3) == 2) {
                      puVar13 = (undefined8 *)&stack0x00000210;
                      goto LAB_1006b9060;
                    }
                    uVar9 = uVar11 >> 2;
                    if (((uVar11 & 3) != 1) || ((uVar9 & 0x1ffffffffffff) != 1)) break;
                    uVar17 = uVar11 & 0xfff8000000000000;
                    uVar9 = puVar34[10];
                    bVar2 = uVar9 == uVar11;
                    uVar11 = uVar9;
                    if (bVar2) {
                      puVar34[10] = uVar17 | 3;
                      FUN_10074fd94(lVar8,puVar27);
                      goto LAB_1006b872c;
                    }
                  }
                  uVar18 = uVar11 & 0xfff8000000000003;
                  uVar17 = puVar34[10];
                  bVar2 = uVar17 != uVar11;
                  uVar11 = uVar17;
                } while (bVar2);
                puVar34[10] = (uVar9 & 0xc001ffffffffffff) * 4 - 4 | uVar18;
              }
            }
LAB_1006b872c:
            *(undefined8 *)(unaff_x29 + -0x78) = 0;
            *(undefined8 *)(unaff_x29 + -0x70) = 0;
            *(undefined1 *)(unaff_x29 + -0x68) = 0;
          }
LAB_1006b8738:
          plVar19 = (long *)in_stack_00000060[2];
          lVar26 = -0x8000000000000000;
          func_0x000106032954(0);
          uVar30 = 0;
          in_stack_000000b8 = (undefined *)0x0;
          in_stack_000001b8 = 5;
          in_stack_00000158 = 0x8000000000000000;
          in_stack_00000170 = 0x8000000000000000;
          in_stack_00000188 = 0x8000000000000000;
          in_stack_000001a0 = 0x8000000000000001;
          bVar29 = *(byte *)(in_stack_00000028 + 0x105c);
          lVar8 = 3;
          if (bVar29 == 0) {
            lVar8 = 0;
          }
          bVar28 = *(byte *)(in_stack_00000028 + 0x105e);
          lVar7 = lVar8 + 2;
          if (bVar28 == 0) {
            lVar7 = lVar8;
          }
          bVar4 = *(byte *)(in_stack_00000028 + 0x105f);
          bVar5 = *(byte *)(in_stack_00000028 + 0x1060);
          piVar16 = (int *)in_stack_00000060[3];
          uVar11 = *(long *)(*(long *)(piVar16 + 6) + 8) + (ulong)bVar4 + lVar7 + (ulong)bVar5;
          lVar8 = uVar11 * 0x38;
          in_stack_000000b0 = (undefined8 *)0x0;
          in_stack_00000160 = in_stack_000002c0;
          in_stack_00000168 = in_stack_000002c8;
          in_stack_00000178 = in_stack_000002d8;
          in_stack_00000180 = in_stack_000002e0;
          in_stack_00000190 = in_stack_000002f0;
          in_stack_00000198 = in_stack_000002f8;
          in_stack_000001a8 = in_stack_00000308;
          in_stack_000001b0 = in_stack_00000310;
          if (0x249249249249249 < uVar11) {
LAB_1006b8880:
            FUN_107c03c64(uVar30,lVar8);
            goto LAB_1006b97f4;
          }
          if (lVar8 == 0) {
            uVar11 = 0;
            lVar7 = 8;
LAB_1006b88b4:
            in_stack_00000168 = 0;
            in_stack_00000158 = uVar11;
            in_stack_00000160 = lVar7;
          }
          else {
            lVar7 = _malloc(lVar8);
            if (lVar7 == 0) {
              uVar30 = 8;
              goto LAB_1006b8880;
            }
            if (in_stack_00000158 == 0x8000000000000000) goto LAB_1006b88b4;
            FUN_100e11948(lVar7,0);
            if (uVar11 != 0) {
              _free(lVar7);
            }
          }
          uVar11 = in_stack_00000168;
          if ((bVar29 & 1) != 0) {
            puVar34 = (ulong *)plVar19[0xc];
            if (puVar34 != (ulong *)0x0) {
              lVar26 = plVar19[0xd];
              if (in_stack_00000168 == in_stack_00000158) {
                __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h298ec3806960a43cE
                          (&stack0x00000158);
              }
              puVar13 = (undefined8 *)(in_stack_00000160 + uVar11 * 0x38);
              puVar13[6] = lVar26;
              puVar13[3] = 7;
              puVar13[2] = 0xe;
              puVar13[5] = puVar34;
              puVar13[4] = 1;
              puVar13[1] = &UNK_108caab85;
              *puVar13 = 1;
              in_stack_00000168 = uVar11 + 1;
              in_stack_00000238 = puVar34;
            }
            uVar11 = in_stack_00000168;
            puVar34 = (ulong *)plVar19[10];
            if (puVar34 != (ulong *)0x0) {
              lVar26 = plVar19[0xb];
              if (in_stack_00000168 == in_stack_00000158) {
                __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h298ec3806960a43cE
                          (&stack0x00000158);
              }
              puVar13 = (undefined8 *)(in_stack_00000160 + uVar11 * 0x38);
              puVar13[6] = lVar26;
              puVar13[3] = 7;
              puVar13[2] = 0x10;
              puVar13[5] = puVar34;
              puVar13[4] = 1;
              puVar13[1] = &UNK_108cdc970;
              *puVar13 = 1;
              in_stack_00000168 = uVar11 + 1;
              in_stack_00000238 = puVar34;
            }
            uVar11 = in_stack_00000168;
            if ((*(uint *)(plVar19 + 1) & 1) != 0) {
              uVar1 = *(uint *)((long)plVar19 + 0xc);
              if (in_stack_00000168 == in_stack_00000158) {
                __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h298ec3806960a43cE
                          (&stack0x00000158);
              }
              puVar13 = (undefined8 *)(in_stack_00000160 + uVar11 * 0x38);
              puVar13[6] = lVar26;
              puVar13[3] = 5;
              puVar13[2] = 0x10;
              puVar13[5] = in_stack_00000238;
              puVar13[4] = (ulong)uVar1;
              puVar13[1] = &UNK_108cdc980;
              *puVar13 = 1;
              in_stack_00000168 = uVar11 + 1;
            }
          }
          if ((bVar28 & 1) != 0) {
            puVar13 = (undefined8 *)
                      (*
                      ___ZN21tracing_opentelemetry5layer9THREAD_ID29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h5faa9d0fe9225894E
                      )();
            if ((*(byte *)(puVar13 + 1) & 1) == 0) {
              puVar13 = (undefined8 *)thunk_FUN_108854080();
            }
            uVar11 = in_stack_00000168;
            uVar30 = *puVar13;
            if (in_stack_00000168 == in_stack_00000158) {
              __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h298ec3806960a43cE(&stack0x00000158)
              ;
            }
            puVar13 = (undefined8 *)(in_stack_00000160 + uVar11 * 0x38);
            puVar13[6] = lVar26;
            puVar13[3] = 5;
            puVar13[2] = 9;
            puVar13[5] = in_stack_00000238;
            puVar13[4] = uVar30;
            puVar13[1] = &UNK_108ca7411;
            *puVar13 = 1;
            in_stack_00000168 = uVar11 + 1;
            puVar34 = (ulong *)(*___ZN3std6thread7current7CURRENT17h98c70d55395456b6E)();
            if (*puVar34 < 3) {
              plVar20 = (long *)FUN_107c05e28();
            }
            else {
              plVar20 = (long *)(*puVar34 - 0x10);
              lVar8 = *plVar20;
              *plVar20 = lVar8 + 1;
              if (lVar8 < 0) goto LAB_1006b97f4;
            }
            puVar23 = (undefined *)plVar20[3];
            if (puVar23 == (undefined *)0x0) {
              if ((lRam000000010b66fea8 != 0) && (lRam000000010b66fea8 == plVar20[2])) {
                puVar23 = &UNK_109bd66e6;
                lVar8 = 4;
                goto LAB_1006b8b64;
              }
            }
            else {
              lVar8 = plVar20[4] + -1;
              if (lVar8 == 0) {
                lVar26 = 1;
              }
              else {
LAB_1006b8b64:
                lVar26 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar8,1);
                if (lVar26 == 0) {
                  FUN_107c03c64(1,lVar8);
                  goto LAB_1006b97f4;
                }
              }
              _memcpy(lVar26,puVar23,lVar8);
              uVar11 = in_stack_00000168;
              if (in_stack_00000168 == in_stack_00000158) {
                __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h298ec3806960a43cE
                          (&stack0x00000158);
              }
              puVar13 = (undefined8 *)(in_stack_00000160 + uVar11 * 0x38);
              puVar13[6] = lVar8;
              puVar13[3] = 7;
              puVar13[2] = 0xb;
              puVar13[5] = lVar26;
              puVar13[4] = 0;
              puVar13[1] = &UNK_108caab93;
              *puVar13 = 1;
              in_stack_00000168 = uVar11 + 1;
            }
            lVar8 = *plVar20;
            *plVar20 = lVar8 + -1;
            LORelease();
            if (lVar8 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h52bc04ad50f5b4b2E(&stack0x00000360);
            }
          }
          uVar11 = in_stack_00000168;
          if ((bVar4 & 1) != 0) {
            uVar15 = *(undefined8 *)(&UNK_10b253220 + *plVar19 * 8);
            uVar30 = *(undefined8 *)(&UNK_108cd9aa8 + *plVar19 * 8);
            if (in_stack_00000168 == in_stack_00000158) {
              __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h298ec3806960a43cE(&stack0x00000158)
              ;
            }
            puVar13 = (undefined8 *)(in_stack_00000160 + uVar11 * 0x38);
            puVar13[6] = uVar30;
            puVar13[3] = 7;
            puVar13[2] = 5;
            puVar13[5] = uVar15;
            puVar13[4] = 1;
            puVar13[1] = &UNK_108ca13ad;
            *puVar13 = 1;
            in_stack_00000168 = uVar11 + 1;
          }
          uVar11 = in_stack_00000168;
          if ((bVar5 & 1) != 0) {
            lVar8 = plVar19[4];
            lVar26 = plVar19[5];
            if (in_stack_00000168 == in_stack_00000158) {
              __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h298ec3806960a43cE(&stack0x00000158)
              ;
            }
            puVar13 = (undefined8 *)(in_stack_00000160 + uVar11 * 0x38);
            puVar13[6] = lVar26;
            puVar13[3] = 7;
            puVar13[2] = 6;
            puVar13[5] = lVar8;
            puVar13[4] = 1;
            puVar13[1] = &UNK_108caabad;
            *puVar13 = 1;
            in_stack_00000168 = uVar11 + 1;
          }
          in_stack_000001d8 = 0x8000000000000001;
          in_stack_000001c0 = (ulong *)0x8000000000000000;
          lVar8 = *(long *)(piVar16 + 4);
          if (*piVar16 == 1) {
            lVar26 = *(long *)(*(long *)(piVar16 + 6) + 8);
            if (lVar26 != 0) {
              lVar7 = 0;
              plVar19 = (long *)(*(long *)(piVar16 + 2) + 8);
              lVar8 = lVar8 << 4;
              do {
                if (lVar8 == 0) break;
                if (plVar19[-1] != 0) {
                  (**(code **)(*plVar19 + 0x18))
                            (plVar19[-1],&stack0x00000210,&stack0x00000360,&UNK_10b21f188);
                }
                lVar7 = lVar7 + 1;
                plVar19 = plVar19 + 2;
                lVar8 = lVar8 + -0x10;
              } while (lVar26 != lVar7);
            }
          }
          else if (lVar8 != 0) {
            lVar26 = *(long *)(*(long *)(piVar16 + 6) + 0x10);
            lVar8 = lVar8 * 0x18;
            plVar19 = (long *)(*(long *)(piVar16 + 2) + 0x10);
            do {
              if ((*(long *)(plVar19[-2] + 0x10) == lVar26) && (plVar19[-1] != 0)) {
                (**(code **)(*plVar19 + 0x18))
                          (plVar19[-1],plVar19[-2],&stack0x00000360,&UNK_10b21f188);
              }
              plVar19 = plVar19 + 3;
              lVar8 = lVar8 + -0x18;
            } while (lVar8 != 0);
          }
          *(undefined8 *)(unaff_x29 + -0x98) = 0x8000000000000001;
          __ZN21tracing_opentelemetry5layer18SpanBuilderUpdates6update17h94b57d7f7f8564caE
                    (&stack0x00000210,&stack0x000000b0,unaff_x29 + -0x98);
          _memcpy(&stack0x00000360,&stack0x000000b0,0x110);
          _memcpy(&stack0x00000210,&stack0x00000360,0x140);
          FUN_100a8bca0(plVar21,&stack0x00000210);
          if ((((auVar32._8_4_ & 1) == 0) &&
              ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
               0x7fffffffffffffff) != 0)) && (uVar11 = FUN_107c05e34(), (uVar11 & 1) == 0)) {
            *(undefined1 *)(plVar21 + 1) = 1;
          }
          if (*plVar21 == 1) {
            *plVar21 = in_xzr;
          }
          else {
            __ZN3std3sys4sync6rwlock5queue6RwLock16unlock_contended17h5028e77bc6335836E(plVar21);
          }
          uVar11 = unaff_x23[10];
          while ((uVar11 & 3) != 2) {
            uVar9 = uVar11 >> 2;
            if (((uVar11 & 3) == 1) && ((uVar9 & 0x1ffffffffffff) == 1)) {
              uVar17 = uVar11 & 0xfff8000000000000;
              uVar9 = unaff_x23[10];
              bVar2 = uVar9 == uVar11;
              uVar11 = uVar9;
              if (bVar2) {
                unaff_x23[10] = uVar17 | 3;
                FUN_10074fd94(lVar10,puVar24);
                return in_stack_00000058;
              }
            }
            else {
              uVar18 = uVar11 & 0xfff8000000000003;
              uVar17 = unaff_x23[10];
              bVar2 = uVar17 == uVar11;
              uVar11 = uVar17;
              if (bVar2) {
                unaff_x23[10] = (uVar9 & 0xc001ffffffffffff) * 4 - 4 | uVar18;
                return in_stack_00000058;
              }
            }
          }
          goto LAB_1006b8fa4;
        }
        goto LAB_1006b933c;
      }
    }
LAB_1006b93b0:
    FUN_107c05cac(&UNK_108caab68,0x1d,&UNK_10b21f170);
    goto LAB_1006b8fa4;
  }
  in_stack_000001d8 = *unaff_x21;
  *(undefined **)(unaff_x29 + -0x98) = &UNK_10b212cf0;
  *(undefined8 *)(unaff_x29 + -0x90) = 1;
  uVar30 = *(undefined8 *)(in_stack_000001d8 + 0x40);
  *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(in_stack_000001d8 + 0x48);
  *(undefined8 *)(unaff_x29 + -0x88) = uVar30;
  in_stack_00000218 = *(long *)(unaff_x29 + -0x90);
  in_stack_00000210 = *(ulong **)(unaff_x29 + -0x98);
  in_stack_00000220 = *(ulong **)(unaff_x29 + -0x88);
  *(undefined1 **)(unaff_x29 + -0x78) = &stack0x00000210;
  *(undefined **)(unaff_x29 + -0x70) = &UNK_10b21f3a8;
  *(undefined **)(unaff_x29 + -0x68) = &UNK_10b216f28;
  in_stack_00000090 = (ulong *)(unaff_x29 + -0x78);
  in_stack_00000088 = 0;
  in_stack_000000a0 = (ulong *)(unaff_x29 + -0x98);
  in_stack_00000098 = 1;
  in_stack_000001d0 = &stack0x00000088;
  in_stack_000001c0 = (ulong *)0x2;
  in_stack_000001c8 = in_stack_00000058;
  if ((((in_stack_00000018 & 0x100000000) == 0) &&
      ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
       0x7fffffffffffffff) != 0)) && (uVar11 = FUN_107c05e34(), (uVar11 & 1) == 0)) {
    *(undefined1 *)(unaff_x27 + 1) = 1;
  }
  if (*unaff_x27 == 1) {
    *unaff_x27 = in_xzr;
  }
  else {
    __ZN3std3sys4sync6rwlock5queue6RwLock16unlock_contended17h5028e77bc6335836E();
  }
  uVar11 = unaff_x21[10] & 3;
  if (uVar11 != 2) {
    uVar9 = unaff_x21[10];
    do {
      if ((uVar11 == 1) && ((uVar9 >> 2 & 0x1ffffffffffff) == 1)) {
        uVar17 = unaff_x21[10];
        if (uVar17 == uVar9) {
          unaff_x21[10] = uVar9 & 0xfff8000000000000 | 3;
          FUN_10074fd94(in_stack_00000008,in_stack_00000010);
LAB_1006b7870:
          *(ulong ***)(unaff_x29 + -0xb8) = &stack0x000001c0;
          in_stack_000000b0 = &stack0x00000078;
          in_stack_000000c0 = in_stack_00000050;
          in_stack_000000b8 = (undefined *)(unaff_x29 + -0xb8);
          in_stack_00000078 = in_stack_00000028 + 0xad8;
          FUN_100c3a24c(&stack0x000000b0);
          uVar9 = *(ulong *)(in_stack_00000048 + 0x10);
          uVar17 = *(ulong *)(in_stack_00000028 + 0x3d8);
          uVar11 = uVar17 & uVar9;
          goto joined_r0x0001006b7630;
        }
      }
      else {
        uVar17 = unaff_x21[10];
        if (uVar17 == uVar9) {
          unaff_x21[10] = (uVar9 >> 2 & 0xc001ffffffffffff) * 4 - 4 | uVar9 & 0xfff8000000000003;
          goto LAB_1006b7870;
        }
      }
      uVar11 = uVar17 & 3;
      uVar9 = uVar17;
    } while (uVar11 != 2);
  }
LAB_1006b8fcc:
  *(undefined8 *)(unaff_x29 + -0xb8) = 2;
  in_stack_000000b0 = (undefined8 *)(unaff_x29 + -0xb8);
  in_stack_000000b8 =
       &
       __ZN4core3fmt3num53__LT_impl_u20_core__fmt__Binary_u20_for_u20_usize_GT_3fmt17hb54e0e9a7f0c0768E
  ;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cd640b,&stack0x000000b0,&UNK_10b24e120);
LAB_1006b8ffc:
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cd640b,&stack0x00000210,&UNK_10b24e120);
LAB_1006b97f4:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1006b97f8);
  (*pcVar6)();
LAB_1006b8f98:
  in_stack_000000b0 = (undefined8 *)0x2;
LAB_1006b8fa4:
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cd640b,&stack0x00000210,&UNK_10b24e120);
  goto LAB_1006b8fcc;
  while( true ) {
    uVar17 = uVar11 & 0xfff8000000000000;
    uVar9 = puVar34[10];
    bVar2 = uVar9 == uVar11;
    uVar11 = uVar9;
    if (bVar2) break;
joined_r0x0001006b85e8:
    if ((uVar11 & 3) == 2) goto LAB_1006b86a4;
    uVar9 = uVar11 >> 2;
    if (((uVar11 & 3) != 1) || ((uVar9 & 0x1ffffffffffff) != 1)) {
      uVar18 = uVar11 & 0xfff8000000000003;
      uVar17 = puVar34[10];
      bVar2 = uVar17 == uVar11;
      uVar11 = uVar17;
      if (bVar2) {
        puVar34[10] = (uVar9 & 0xc001ffffffffffff) * 4 - 4 | uVar18;
        goto LAB_1006b8738;
      }
      goto joined_r0x0001006b85e8;
    }
  }
  puVar34[10] = uVar17 | 3;
  FUN_10074fd94(lVar8,puVar27);
  goto LAB_1006b8738;
LAB_1006b86a4:
  in_stack_000000b0 = (undefined8 *)0x2;
  puVar13 = (undefined8 *)&stack0x00000360;
LAB_1006b9060:
  puVar13[1] = &
               __ZN4core3fmt3num53__LT_impl_u20_core__fmt__Binary_u20_for_u20_usize_GT_3fmt17hb54e0e9a7f0c0768E
  ;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cd640b,puVar13,&UNK_10b24e120);
  goto LAB_1006b97f4;
}

