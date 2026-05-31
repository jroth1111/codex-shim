
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1006b36b4(void)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  long *plVar6;
  ulong *puVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  ulong *unaff_x19;
  long unaff_x20;
  char cVar20;
  undefined *puVar21;
  long lVar22;
  long *plVar23;
  ulong uVar24;
  ulong *puVar25;
  int *piVar26;
  long unaff_x29;
  long in_xzr;
  byte bVar27;
  byte bVar28;
  undefined8 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [12];
  undefined1 auVar32 [12];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  long *in_stack_00000020;
  ulong in_stack_00000028;
  long *in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000068;
  long *in_stack_00000070;
  long in_stack_00000078;
  ulong *in_stack_00000080;
  long *in_stack_00000088;
  ulong *in_stack_00000090;
  long *in_stack_00000098;
  undefined8 *in_stack_000000a0;
  undefined *in_stack_000000a8;
  ulong in_stack_000000b0;
  ulong in_stack_00000148;
  long in_stack_00000150;
  ulong in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined1 in_stack_000001a8;
  long in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 *in_stack_000001c0;
  ulong in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  ulong *in_stack_00000200;
  long *in_stack_00000208;
  ulong *in_stack_00000210;
  ulong *puVar33;
  undefined8 *in_stack_00000228;
  long lVar34;
  long in_stack_000002b0;
  ulong in_stack_000002b8;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002e0;
  undefined8 in_stack_000002e8;
  undefined8 in_stack_000002f8;
  undefined8 in_stack_00000300;
  long in_stack_00000350;
  ulong *in_stack_00000358;
  long *in_stack_00000360;
  ulong *in_stack_00000368;
  
  __ZN3std2io5stdio7_eprint17heb74b67280cb307dE
            (s_E_tracing_subscriber__Unable_to_f_108ac52c2,&stack0x00000200);
  if (in_stack_000001b0 != 0) {
    _free(in_stack_000001b8);
  }
  bVar28 = *(byte *)(unaff_x20 + 0x3d1);
  if ((*(char *)(unaff_x20 + 0x3d0) == '\x01') && ((bVar28 >> 3 & 1) != 0)) {
    if (in_stack_00000020[5] != 0) {
      lVar13 = 0;
      lVar34 = in_stack_00000020[2];
      uVar9 = in_stack_00000020[3];
      uVar16 = uVar9 & 0x91f949a1459174a4;
      uVar29 = *(undefined8 *)(lVar34 + uVar16);
      uVar24 = CONCAT17(-((char)((ulong)uVar29 >> 0x38) == 'H'),
                        CONCAT16(-((char)((ulong)uVar29 >> 0x30) == 'H'),
                                 CONCAT15(-((char)((ulong)uVar29 >> 0x28) == 'H'),
                                          CONCAT14(-((char)((ulong)uVar29 >> 0x20) == 'H'),
                                                   CONCAT13(-((char)((ulong)uVar29 >> 0x18) == 'H'),
                                                            CONCAT12(-((char)((ulong)uVar29 >> 0x10)
                                                                      == 'H'),CONCAT11(-((char)((
                                                  ulong)uVar29 >> 8) == 'H'),-((char)uVar29 == 'H'))
                                                  )))))) & 0x8080808080808080;
      while( true ) {
        while (uVar24 == 0) {
          bVar27 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar29 >> 0x38) == -1),
                                       CONCAT16(-((char)((ulong)uVar29 >> 0x30) == -1),
                                                CONCAT15(-((char)((ulong)uVar29 >> 0x28) == -1),
                                                         CONCAT14(-((char)((ulong)uVar29 >> 0x20) ==
                                                                   -1),CONCAT13(-((char)((ulong)
                                                  uVar29 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar29 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar29 >> 8) ==
                                                                     -1),-((char)uVar29 == -1)))))))
                                      ),1);
          if ((bVar27 & 1) != 0) goto LAB_1006b395c;
          lVar13 = lVar13 + 8;
          uVar16 = uVar16 + lVar13 & uVar9;
          uVar29 = *(undefined8 *)(lVar34 + uVar16);
          uVar24 = CONCAT17(-((char)((ulong)uVar29 >> 0x38) == 'H'),
                            CONCAT16(-((char)((ulong)uVar29 >> 0x30) == 'H'),
                                     CONCAT15(-((char)((ulong)uVar29 >> 0x28) == 'H'),
                                              CONCAT14(-((char)((ulong)uVar29 >> 0x20) == 'H'),
                                                       CONCAT13(-((char)((ulong)uVar29 >> 0x18) ==
                                                                 'H'),CONCAT12(-((char)((ulong)
                                                  uVar29 >> 0x10) == 'H'),
                                                  CONCAT11(-((char)((ulong)uVar29 >> 8) == 'H'),
                                                           -((char)uVar29 == 'H')))))))) &
                   0x8080808080808080;
        }
        uVar17 = (uVar24 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar24 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
        uVar17 = uVar16 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) & uVar9;
        plVar18 = (long *)(lVar34 + -0x20 + uVar17 * -0x20);
        if (plVar18[1] == -0x6e06b65eba6e8b5c && *plVar18 == 0x4ae42cf8481b71fa) break;
        uVar24 = uVar24 - 1 & uVar24;
      }
      lVar34 = lVar34 + uVar17 * -0x20;
      (**(code **)(*(long *)(lVar34 + -8) + 0x18))(&stack0x00000200,*(undefined8 *)(lVar34 + -0x10))
      ;
      if (in_stack_00000208 == (long *)0x91f949a1459174a4 &&
          in_stack_00000200 == (ulong *)0x4ae42cf8481b71fa) goto LAB_1006b3984;
    }
LAB_1006b395c:
    func_0x000106032954(8);
    in_stack_00000208 = (long *)0x0;
    in_stack_00000200 = (ulong *)0x0;
    in_stack_00000210 = (ulong *)0x0;
    FUN_100a8b728(in_stack_00000020,&stack0x00000200);
  }
LAB_1006b3984:
  if ((bVar28 & 1) != 0) {
    in_stack_000001c8 = *unaff_x19;
    *(undefined **)(unaff_x29 + -0x98) = &UNK_10b212cf0;
    *(undefined8 *)(unaff_x29 + -0x90) = 1;
    uVar29 = *(undefined8 *)(in_stack_000001c8 + 0x40);
    *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(in_stack_000001c8 + 0x48);
    *(undefined8 *)(unaff_x29 + -0x88) = uVar29;
    in_stack_00000208 = *(long **)(unaff_x29 + -0x90);
    in_stack_00000200 = *(ulong **)(unaff_x29 + -0x98);
    in_stack_00000210 = *(ulong **)(unaff_x29 + -0x88);
    *(undefined1 **)(unaff_x29 + -0x78) = &stack0x00000200;
    *(undefined **)(unaff_x29 + -0x70) = &UNK_10b21f3a8;
    *(undefined **)(unaff_x29 + -0x68) = &UNK_10b216f28;
    in_stack_00000080 = (ulong *)(unaff_x29 + -0x78);
    in_stack_00000078 = 0;
    in_stack_00000090 = (ulong *)(unaff_x29 + -0x98);
    in_stack_00000088 = (long *)0x1;
    in_stack_000001c0 = &stack0x00000078;
    in_stack_000001b0 = 2;
    in_stack_000001b8 = in_stack_00000040;
    if ((((in_stack_00000018 & 0x100000000) == 0) &&
        ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
         0x7fffffffffffffff) != 0)) && (uVar24 = FUN_107c05e34(), (uVar24 & 1) == 0)) {
      *(undefined1 *)(in_stack_00000020 + 1) = 1;
    }
    if (*in_stack_00000020 == 1) {
      *in_stack_00000020 = in_xzr;
    }
    else {
      __ZN3std3sys4sync6rwlock5queue6RwLock16unlock_contended17h5028e77bc6335836E(in_stack_00000020)
      ;
    }
    uVar24 = unaff_x19[10] & 3;
    if (uVar24 != 2) {
      uVar9 = unaff_x19[10];
      do {
        if ((uVar24 == 1) && ((uVar9 >> 2 & 0x1ffffffffffff) == 1)) {
          uVar16 = unaff_x19[10];
          if (uVar16 == uVar9) {
            unaff_x19[10] = uVar9 & 0xfff8000000000000 | 3;
            FUN_10074fd94(in_stack_00000008,in_stack_00000010);
LAB_1006b3b60:
            *(long **)(unaff_x29 + -0xb0) = &stack0x000001b0;
            in_stack_000000a0 = &stack0x00000068;
            in_stack_000000b0 = in_stack_00000028;
            in_stack_000000a8 = (undefined *)(unaff_x29 + -0xb0);
            in_stack_00000068 = unaff_x20 + 0x3c0;
            FUN_100c36414(&stack0x000000a0);
            uVar9 = *(ulong *)(in_stack_00000038 + 0x10);
            uVar16 = *(ulong *)(unaff_x20 + 0x1e0);
            uVar24 = uVar16 & uVar9;
            goto joined_r0x0001006b3b90;
          }
        }
        else {
          uVar16 = unaff_x19[10];
          if (uVar16 == uVar9) {
            unaff_x19[10] = (uVar9 >> 2 & 0xc001ffffffffffff) * 4 - 4 | uVar9 & 0xfff8000000000003;
            goto LAB_1006b3b60;
          }
        }
        uVar24 = uVar16 & 3;
        uVar9 = uVar16;
      } while (uVar24 != 2);
    }
    *(undefined8 *)(unaff_x29 + -0xb0) = 2;
    in_stack_000000a0 = (undefined8 *)(unaff_x29 + -0xb0);
    in_stack_000000a8 =
         &
         __ZN4core3fmt3num53__LT_impl_u20_core__fmt__Binary_u20_for_u20_usize_GT_3fmt17hb54e0e9a7f0c0768E
    ;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (&UNK_108cd640b,&stack0x000000a0,&UNK_10b24e120);
LAB_1006b4f5c:
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (&UNK_108cd640b,&stack0x00000200,&UNK_10b24e120);
    goto LAB_1006b5664;
  }
  if ((((in_stack_00000018 & 0x100000000) == 0) &&
      ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
       0x7fffffffffffffff) != 0)) && (uVar24 = FUN_107c05e34(), (uVar24 & 1) == 0)) {
    *(undefined1 *)(in_stack_00000020 + 1) = 1;
  }
  if (*in_stack_00000020 == 1) {
    *in_stack_00000020 = in_xzr;
  }
  else {
    __ZN3std3sys4sync6rwlock5queue6RwLock16unlock_contended17h5028e77bc6335836E(in_stack_00000020);
  }
  uVar24 = unaff_x19[10];
  do {
    while( true ) {
      if ((uVar24 & 3) == 2) goto LAB_1006b3dbc;
      uVar9 = uVar24 >> 2;
      if (((uVar24 & 3) != 1) || ((uVar9 & 0x1ffffffffffff) != 1)) break;
      uVar16 = uVar24 & 0xfff8000000000000;
      uVar9 = unaff_x19[10];
      bVar1 = uVar9 == uVar24;
      uVar24 = uVar9;
      if (bVar1) {
        unaff_x19[10] = uVar16 | 3;
        FUN_10074fd94(in_stack_00000008,in_stack_00000010);
        goto LAB_1006b3a2c;
      }
    }
    uVar17 = uVar24 & 0xfff8000000000003;
    uVar16 = unaff_x19[10];
    bVar1 = uVar16 != uVar24;
    uVar24 = uVar16;
  } while (bVar1);
  unaff_x19[10] = (uVar9 & 0xc001ffffffffffff) * 4 - 4 | uVar17;
LAB_1006b3a2c:
  uVar9 = *(ulong *)(in_stack_00000038 + 0x10);
  uVar16 = *(ulong *)(unaff_x20 + 0x1e0);
  uVar24 = uVar16 & uVar9;
joined_r0x0001006b3b90:
  if (uVar24 != 0) {
    uVar24 = 0xffffffffffffffff;
    if (uVar16 != 0xffffffffffffffff) {
      uVar24 = ~uVar16;
    }
    uVar9 = uVar24 & uVar9;
    *(ulong *)(in_stack_00000038 + 0x10) = uVar9;
  }
  plVar18 = in_stack_00000208;
  puVar25 = in_stack_00000210;
  if (*(long *)(unaff_x20 + 0x628) != 2) {
    uVar24 = *(ulong *)(unaff_x20 + 0x820);
    if ((uVar24 & uVar9) == 0) {
      in_stack_00000078 = -0x8000000000000000;
      piVar26 = (int *)in_stack_00000030[3];
      lVar13 = *(long *)(piVar26 + 4);
      puVar11 = *(undefined8 **)(piVar26 + 6);
      unaff_x19 = in_stack_00000200;
      if (*piVar26 == 1) {
        plVar18 = (long *)puVar11[1];
        if (plVar18 != (long *)0x0) {
          plVar8 = (long *)0x0;
          puVar25 = (ulong *)*puVar11;
          puVar7 = (ulong *)puVar11[2];
          plVar23 = (long *)(*(long *)(piVar26 + 2) + 8);
          lVar13 = lVar13 << 4;
          do {
            unaff_x19 = in_stack_00000200;
            if (lVar13 == 0) break;
            if (plVar23[-1] != 0) {
              (**(code **)(*plVar23 + 0x18))
                        (plVar23[-1],&stack0x00000200,&stack0x00000078,&UNK_10b24e1e8);
            }
            plVar8 = (long *)((long)plVar8 + 1);
            plVar23 = plVar23 + 2;
            lVar13 = lVar13 + -0x10;
            unaff_x19 = puVar25;
            in_stack_00000200 = puVar25;
            in_stack_00000208 = plVar18;
            in_stack_00000210 = puVar7;
          } while (plVar18 != plVar8);
        }
      }
      else if (lVar13 != 0) {
        lVar34 = puVar11[2];
        lVar13 = lVar13 * 0x18;
        plVar18 = (long *)(*(long *)(piVar26 + 2) + 0x10);
        do {
          if ((*(long *)(plVar18[-2] + 0x10) == lVar34) && (plVar18[-1] != 0)) {
            (**(code **)(*plVar18 + 0x18))(plVar18[-1],plVar18[-2],&stack0x00000078,&UNK_10b24e1e8);
          }
          plVar18 = plVar18 + 3;
          lVar13 = lVar13 + -0x18;
        } while (lVar13 != 0);
      }
      FUN_1061db950(&stack0x00000200,in_stack_00000028,in_stack_00000040);
      if (unaff_x19 != (ulong *)0x0) {
        if ((unaff_x19[1] & uVar24) == 0) {
          auVar31 = __ZN102__LT_tracing_subscriber__registry__sharded__Data_u20_as_u20_tracing_subscriber__registry__SpanData_GT_14extensions_mut17h126407c2e34cc2fdE
                              (&stack0x00000358);
          in_stack_00000020 = auVar31._0_8_;
          uVar29 = *(undefined8 *)(*unaff_x19 + 0x10);
          in_stack_00000200 = *(ulong **)(*unaff_x19 + 0x18);
          if (in_stack_00000200 == (ulong *)0x0) {
            plVar18 = (long *)0x1;
          }
          else {
            plVar18 = (long *)_malloc(in_stack_00000200);
            if (plVar18 == (long *)0x0) {
              FUN_107c03c64(1,in_stack_00000200);
              goto LAB_1006b5664;
            }
          }
          _memcpy(plVar18,uVar29,in_stack_00000200);
          in_stack_000001c8 = in_stack_000001c8 & 0xffffffffffffff00;
          in_stack_000001b0 = 0;
          in_stack_000001b8 = 1;
          in_stack_000001c0 = (undefined8 *)0x0;
          in_stack_000000a0 = &stack0x000001b0;
          in_stack_000000a8 = &UNK_10b209290;
          in_stack_000000b0 = in_stack_000000b0 & 0xffffffffffffff00;
          lVar13 = *(long *)(piVar26 + 4);
          if (*piVar26 == 1) {
            lVar34 = *(long *)(*(long *)(piVar26 + 6) + 8);
            if (lVar34 != 0) {
              lVar22 = 0;
              plVar23 = (long *)(*(long *)(piVar26 + 2) + 8);
              lVar13 = lVar13 << 4;
              do {
                if (lVar13 == 0) break;
                if (plVar23[-1] != 0) {
                  (**(code **)(*plVar23 + 0x18))
                            (plVar23[-1],&stack0x00000200,&stack0x000000a0,&UNK_10b244550);
                }
                lVar22 = lVar22 + 1;
                plVar23 = plVar23 + 2;
                lVar13 = lVar13 + -0x10;
              } while (lVar34 != lVar22);
            }
          }
          else if (lVar13 != 0) {
            lVar34 = *(long *)(*(long *)(piVar26 + 6) + 0x10);
            lVar13 = lVar13 * 0x18;
            plVar23 = (long *)(*(long *)(piVar26 + 2) + 0x10);
            do {
              if ((*(long *)(plVar23[-2] + 0x10) == lVar34) && (plVar23[-1] != 0)) {
                (**(code **)(*plVar23 + 0x18))
                          (plVar23[-1],plVar23[-2],&stack0x000000a0,&UNK_10b244550);
              }
              plVar23 = plVar23 + 3;
              lVar13 = lVar13 + -0x18;
            } while (lVar13 != 0);
          }
          in_stack_00000228 = in_stack_000001c0;
          FUN_100a8bb24(in_stack_00000020,&stack0x00000200);
          if ((((auVar31._8_4_ & 1) == 0) &&
              ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
               0x7fffffffffffffff) != 0)) && (uVar24 = FUN_107c05e34(), (uVar24 & 1) == 0)) {
            *(undefined1 *)(in_stack_00000020 + 1) = 1;
          }
          if (*in_stack_00000020 == 1) {
            *in_stack_00000020 = in_xzr;
          }
          else {
            __ZN3std3sys4sync6rwlock5queue6RwLock16unlock_contended17h5028e77bc6335836E
                      (in_stack_00000020);
          }
          uVar24 = unaff_x19[10];
          do {
            while( true ) {
              if ((uVar24 & 3) == 2) goto LAB_1006b3dbc;
              uVar9 = uVar24 >> 2;
              puVar25 = in_stack_00000200;
              in_stack_00000350 = unaff_x20;
              in_stack_00000358 = unaff_x19;
              in_stack_00000360 = in_stack_00000208;
              in_stack_00000368 = in_stack_00000210;
              if (((uVar24 & 3) != 1) || ((uVar9 & 0x1ffffffffffff) != 1)) break;
              uVar16 = uVar24 & 0xfff8000000000000;
              uVar9 = unaff_x19[10];
              bVar1 = uVar9 == uVar24;
              uVar24 = uVar9;
              if (bVar1) {
                unaff_x19[10] = uVar16 | 3;
                FUN_10074fd94(in_stack_00000208,in_stack_00000210);
                goto LAB_1006b3e3c;
              }
            }
            uVar17 = uVar24 & 0xfff8000000000003;
            uVar16 = unaff_x19[10];
            bVar1 = uVar16 != uVar24;
            uVar24 = uVar16;
          } while (bVar1);
          unaff_x19[10] = (uVar9 & 0xc001ffffffffffff) * 4 - 4 | uVar17;
          goto LAB_1006b3e3c;
        }
        uVar24 = unaff_x19[10];
        do {
          while( true ) {
            if ((uVar24 & 3) == 2) goto LAB_1006b4f5c;
            uVar9 = uVar24 >> 2;
            if (((uVar24 & 3) != 1) || ((uVar9 & 0x1ffffffffffff) != 1)) break;
            uVar16 = uVar24 & 0xfff8000000000000;
            uVar9 = unaff_x19[10];
            bVar1 = uVar9 == uVar24;
            uVar24 = uVar9;
            if (bVar1) {
              unaff_x19[10] = uVar16 | 3;
              FUN_10074fd94();
              goto LAB_1006b3904;
            }
          }
          uVar17 = uVar24 & 0xfff8000000000003;
          uVar16 = unaff_x19[10];
          bVar1 = uVar16 != uVar24;
          uVar24 = uVar16;
        } while (bVar1);
        unaff_x19[10] = (uVar9 & 0xc001ffffffffffff) * 4 - 4 | uVar17;
      }
LAB_1006b3904:
      in_stack_00000200 = unaff_x19;
      plVar18 = in_stack_00000208;
      puVar25 = in_stack_00000210;
      if (in_stack_00000078 != -0x8000000000000000 && in_stack_00000078 != 0) {
        _free(in_stack_00000080);
      }
    }
    else {
      uVar16 = 0xffffffffffffffff;
      if (uVar24 != 0xffffffffffffffff) {
        uVar16 = ~uVar24;
      }
      *(ulong *)(in_stack_00000038 + 0x10) = uVar16 & uVar9;
    }
  }
LAB_1006b3e3c:
  if (*(long *)(unaff_x20 + 0x830) != 7) {
    uVar24 = *(ulong *)(unaff_x20 + 0x8a0);
    if ((*(ulong *)(in_stack_00000038 + 0x10) & uVar24) != 0) {
      uVar9 = 0xffffffffffffffff;
      if (uVar24 != 0xffffffffffffffff) {
        uVar9 = ~uVar24;
      }
      *(ulong *)(in_stack_00000038 + 0x10) = *(ulong *)(in_stack_00000038 + 0x10) & uVar9;
    }
  }
  if (*(long *)(unaff_x20 + 0x8b0) == 7) {
    return in_stack_00000040;
  }
  plVar23 = *(long **)(unaff_x20 + 0x948);
  if ((*(ulong *)(in_stack_00000038 + 0x10) & (ulong)plVar23) != 0) {
    uVar24 = 0xffffffffffffffff;
    if (plVar23 != (long *)0xffffffffffffffff) {
      uVar24 = ~(ulong)plVar23;
    }
    *(ulong *)(in_stack_00000038 + 0x10) = uVar24 & *(ulong *)(in_stack_00000038 + 0x10);
    return in_stack_00000040;
  }
  in_stack_00000068 = unaff_x20;
  in_stack_00000070 = plVar23;
  FUN_1061db950(&stack0x00000200,in_stack_00000028,in_stack_00000040);
  if (in_stack_00000200 == (ulong *)0x0) {
LAB_1006b5244:
    FUN_107c05cac(&UNK_108caab68,0x1d,&UNK_10b21f170);
    goto LAB_1006b5268;
  }
  if ((in_stack_00000200[1] & (ulong)plVar23) != 0) {
    uVar24 = in_stack_00000200[10];
    do {
      while( true ) {
        if ((uVar24 & 3) == 2) goto LAB_1006b5268;
        uVar9 = uVar24 >> 2;
        if (((uVar24 & 3) != 1) || ((uVar9 & 0x1ffffffffffff) != 1)) break;
        uVar16 = uVar24 & 0xfff8000000000000;
        uVar9 = in_stack_00000200[10];
        bVar1 = uVar9 == uVar24;
        uVar24 = uVar9;
        if (bVar1) {
          in_stack_00000200[10] = uVar16 | 3;
          FUN_10074fd94();
          goto LAB_1006b5244;
        }
      }
      uVar17 = uVar24 & 0xfff8000000000003;
      uVar16 = in_stack_00000200[10];
      bVar1 = uVar16 != uVar24;
      uVar24 = uVar16;
    } while (bVar1);
    in_stack_00000200[10] = (uVar9 & 0xc001ffffffffffff) * 4 - 4 | uVar17;
    goto LAB_1006b5244;
  }
  in_stack_00000078 = unaff_x20;
  in_stack_00000080 = in_stack_00000200;
  in_stack_00000088 = plVar18;
  in_stack_00000090 = puVar25;
  in_stack_00000098 = plVar23;
  auVar31 = __ZN102__LT_tracing_subscriber__registry__sharded__Data_u20_as_u20_tracing_subscriber__registry__SpanData_GT_14extensions_mut17h126407c2e34cc2fdE
                      (&stack0x00000080);
  plVar6 = auVar31._0_8_;
  puVar7 = in_stack_00000200;
  plVar8 = plVar18;
  puVar33 = puVar25;
  if ((*(byte *)(unaff_x20 + 0x93d) & 1) != 0) {
    if (plVar6[5] != 0) {
      lVar13 = 0;
      lVar34 = plVar6[2];
      uVar9 = plVar6[3];
      unaff_x19 = (ulong *)0x50c73df803020621;
      uVar16 = uVar9 & 0x50c73df803020621;
      uVar29 = *(undefined8 *)(lVar34 + uVar16);
      uVar24 = CONCAT17(-((char)((ulong)uVar29 >> 0x38) == '('),
                        CONCAT16(-((char)((ulong)uVar29 >> 0x30) == '('),
                                 CONCAT15(-((char)((ulong)uVar29 >> 0x28) == '('),
                                          CONCAT14(-((char)((ulong)uVar29 >> 0x20) == '('),
                                                   CONCAT13(-((char)((ulong)uVar29 >> 0x18) == '('),
                                                            CONCAT12(-((char)((ulong)uVar29 >> 0x10)
                                                                      == '('),CONCAT11(-((char)((
                                                  ulong)uVar29 >> 8) == '('),-((char)uVar29 == '('))
                                                  )))))) & 0x8080808080808080;
      while( true ) {
        while (uVar24 == 0) {
          bVar28 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar29 >> 0x38) == -1),
                                       CONCAT16(-((char)((ulong)uVar29 >> 0x30) == -1),
                                                CONCAT15(-((char)((ulong)uVar29 >> 0x28) == -1),
                                                         CONCAT14(-((char)((ulong)uVar29 >> 0x20) ==
                                                                   -1),CONCAT13(-((char)((ulong)
                                                  uVar29 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar29 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar29 >> 8) ==
                                                                     -1),-((char)uVar29 == -1)))))))
                                      ),1);
          if ((bVar28 & 1) != 0) goto LAB_1006b400c;
          lVar13 = lVar13 + 8;
          uVar16 = uVar16 + lVar13 & uVar9;
          uVar29 = *(undefined8 *)(lVar34 + uVar16);
          uVar24 = CONCAT17(-((char)((ulong)uVar29 >> 0x38) == '('),
                            CONCAT16(-((char)((ulong)uVar29 >> 0x30) == '('),
                                     CONCAT15(-((char)((ulong)uVar29 >> 0x28) == '('),
                                              CONCAT14(-((char)((ulong)uVar29 >> 0x20) == '('),
                                                       CONCAT13(-((char)((ulong)uVar29 >> 0x18) ==
                                                                 '('),CONCAT12(-((char)((ulong)
                                                  uVar29 >> 0x10) == '('),
                                                  CONCAT11(-((char)((ulong)uVar29 >> 8) == '('),
                                                           -((char)uVar29 == '(')))))))) &
                   0x8080808080808080;
        }
        uVar17 = (uVar24 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar24 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
        uVar17 = uVar16 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) & uVar9;
        plVar19 = (long *)(lVar34 + -0x20 + uVar17 * -0x20);
        if (plVar19[1] == 0x50c73df803020621 && *plVar19 == 0x58a7d326c36cc3ff) break;
        uVar24 = uVar24 - 1 & uVar24;
      }
      lVar34 = lVar34 + uVar17 * -0x20;
      (**(code **)(*(long *)(lVar34 + -8) + 0x18))(&stack0x00000200,*(undefined8 *)(lVar34 + -0x10))
      ;
      if (plVar18 == (long *)0x50c73df803020621 && in_stack_00000200 == (ulong *)0x58a7d326c36cc3ff)
      goto LAB_1006b4034;
    }
LAB_1006b400c:
    func_0x000106032954(8);
    FUN_100a8b9dc(plVar6,&stack0x00000200);
    puVar7 = (ulong *)0x0;
    plVar8 = (long *)0x0;
    puVar33 = (ulong *)0x0;
  }
LAB_1006b4034:
  if (*in_stack_00000030 == 1) {
    if (((*(byte *)(unaff_x20 + 0x941) & 1) == 0) &&
       (FUN_100a894a8(&stack0x00000350,&stack0x00000068), in_stack_00000350 != 0)) {
      auVar30 = __ZN102__LT_tracing_subscriber__registry__sharded__Data_u20_as_u20_tracing_subscriber__registry__SpanData_GT_14extensions_mut17h126407c2e34cc2fdE
                          ((ulong)&stack0x00000200 | 8);
      plVar8 = auVar30._0_8_;
      if (plVar8[5] != 0) {
        lVar13 = 0;
        unaff_x19 = (ulong *)0x41a0f318cb23d86b;
        lVar34 = plVar8[2];
        uVar9 = plVar8[3];
        plVar23 = (long *)0xe766182d3ecb9236;
        uVar16 = uVar9 & 0x41a0f318cb23d86b;
        uVar29 = *(undefined8 *)(lVar34 + uVar16);
        uVar24 = CONCAT17(-((char)((ulong)uVar29 >> 0x38) == ' '),
                          CONCAT16(-((char)((ulong)uVar29 >> 0x30) == ' '),
                                   CONCAT15(-((char)((ulong)uVar29 >> 0x28) == ' '),
                                            CONCAT14(-((char)((ulong)uVar29 >> 0x20) == ' '),
                                                     CONCAT13(-((char)((ulong)uVar29 >> 0x18) == ' '
                                                               ),CONCAT12(-((char)((ulong)uVar29 >>
                                                                                  0x10) == ' '),
                                                                          CONCAT11(-((char)((ulong)
                                                  uVar29 >> 8) == ' '),-((char)uVar29 == ' '))))))))
                 & 0x8080808080808080;
        while( true ) {
          while (uVar24 == 0) {
            bVar28 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar29 >> 0x38) == -1),
                                         CONCAT16(-((char)((ulong)uVar29 >> 0x30) == -1),
                                                  CONCAT15(-((char)((ulong)uVar29 >> 0x28) == -1),
                                                           CONCAT14(-((char)((ulong)uVar29 >> 0x20)
                                                                     == -1),CONCAT13(-((char)((ulong
                                                  )uVar29 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar29 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar29 >> 8) ==
                                                                     -1),-((char)uVar29 == -1)))))))
                                        ),1);
            if ((bVar28 & 1) != 0) goto LAB_1006b4364;
            lVar13 = lVar13 + 8;
            uVar16 = uVar16 + lVar13 & uVar9;
            uVar29 = *(undefined8 *)(lVar34 + uVar16);
            uVar24 = CONCAT17(-((char)((ulong)uVar29 >> 0x38) == ' '),
                              CONCAT16(-((char)((ulong)uVar29 >> 0x30) == ' '),
                                       CONCAT15(-((char)((ulong)uVar29 >> 0x28) == ' '),
                                                CONCAT14(-((char)((ulong)uVar29 >> 0x20) == ' '),
                                                         CONCAT13(-((char)((ulong)uVar29 >> 0x18) ==
                                                                   ' '),CONCAT12(-((char)((ulong)
                                                  uVar29 >> 0x10) == ' '),
                                                  CONCAT11(-((char)((ulong)uVar29 >> 8) == ' '),
                                                           -((char)uVar29 == ' ')))))))) &
                     0x8080808080808080;
          }
          uVar17 = (uVar24 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar24 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
          uVar17 = uVar16 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) & uVar9;
          plVar19 = (long *)(lVar34 + -0x20 + uVar17 * -0x20);
          if (plVar19[1] == 0x41a0f318cb23d86b && *plVar19 == -0x1899e7d2c1346dca) break;
          uVar24 = uVar24 - 1 & uVar24;
        }
        lVar34 = lVar34 + uVar17 * -0x20;
        plVar19 = *(long **)(lVar34 + -0x10);
        (**(code **)(*(long *)(lVar34 + -8) + 0x18))(&stack0x000000a0,plVar19);
        if (in_stack_000000a8 == (undefined *)0x41a0f318cb23d86b &&
            in_stack_000000a0 == (undefined8 *)0xe766182d3ecb9236) {
          FUN_100b4fac8(unaff_x20 + 0x8b8,plVar19);
          if (*plVar19 != 2 || plVar19[1] != 0) {
            __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cbb9fa,0x87,&UNK_10b22f1d0);
            goto LAB_1006b5664;
          }
          unaff_x19 = (ulong *)plVar19[2];
          if (((unaff_x19 != (ulong *)0x0) &&
              (uVar24 = *unaff_x19, *unaff_x19 = uVar24 + 1, (long)uVar24 < 0)) ||
             ((plVar23 = (long *)plVar19[3], plVar23 != (long *)0x0 &&
              (lVar13 = *plVar23, *plVar23 = lVar13 + 1, lVar13 < 0)))) goto LAB_1006b5664;
          cVar20 = (char)plVar19[4];
          goto LAB_1006b4368;
        }
      }
LAB_1006b4364:
      cVar20 = '\x02';
LAB_1006b4368:
      if ((((auVar30._8_8_ & 1) == 0) &&
          ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
           0x7fffffffffffffff) != 0)) && (uVar24 = FUN_107c05e34(), (uVar24 & 1) == 0)) {
        *(undefined1 *)(plVar8 + 1) = 1;
      }
      if (*plVar8 == 1) {
        *plVar8 = in_xzr;
      }
      else {
        __ZN3std3sys4sync6rwlock5queue6RwLock16unlock_contended17h5028e77bc6335836E(plVar8);
      }
      uVar24 = in_stack_00000358[10];
      do {
        while( true ) {
          if ((uVar24 & 3) == 2) {
            in_stack_000001b0 = 2;
            in_stack_000000a0 = &stack0x000001b0;
            puVar11 = &stack0x000000a0;
            goto LAB_1006b4fc0;
          }
          uVar9 = uVar24 >> 2;
          if (((uVar24 & 3) != 1) || ((uVar9 & 0x1ffffffffffff) != 1)) break;
          uVar16 = uVar24 & 0xfff8000000000000;
          uVar9 = in_stack_00000358[10];
          bVar1 = uVar9 == uVar24;
          uVar24 = uVar9;
          if (bVar1) {
            in_stack_00000358[10] = uVar16 | 3;
            FUN_10074fd94(in_stack_00000360,in_stack_00000368);
            goto LAB_1006b4410;
          }
        }
        uVar17 = uVar24 & 0xfff8000000000003;
        uVar16 = in_stack_00000358[10];
        bVar1 = uVar16 != uVar24;
        uVar24 = uVar16;
      } while (bVar1);
      in_stack_00000358[10] = (uVar9 & 0xc001ffffffffffff) * 4 - 4 | uVar17;
LAB_1006b4410:
      if (cVar20 != '\x02') {
        *(ulong **)(unaff_x29 + -0x78) = unaff_x19;
        *(long **)(unaff_x29 + -0x70) = plVar23;
        *(char *)(unaff_x29 + -0x68) = cVar20;
        goto LAB_1006b46a8;
      }
    }
    puVar7 = (ulong *)(*
                      ___ZN13opentelemetry7context15CURRENT_CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17heb5908a1e17b5f1aE
                      )();
    if (((char)puVar7[7] != '\x01') &&
       (puVar7 = (ulong *)thunk_FUN_108a21f68(puVar7,0), puVar7 == (ulong *)0x0)) {
      FUN_107c05e20(&UNK_10b3d44b0);
      goto LAB_1006b5664;
    }
    if (0x7ffffffffffffffe < *puVar7) {
      FUN_107c05c9c(&UNK_10b3d4450);
      goto LAB_1006b5664;
    }
    *puVar7 = *puVar7 + 1;
    plVar23 = (long *)puVar7[4];
    if (((plVar23 != (long *)0x0) && (lVar13 = *plVar23, *plVar23 = lVar13 + 1, lVar13 < 0)) ||
       ((plVar8 = (long *)puVar7[5], plVar8 != (long *)0x0 &&
        (lVar13 = *plVar8, *plVar8 = lVar13 + 1, lVar13 < 0)))) goto LAB_1006b5664;
    uVar24 = puVar7[6];
    *puVar7 = *puVar7 - 1;
    *(long **)(unaff_x29 + -0x78) = plVar23;
    *(long **)(unaff_x29 + -0x70) = plVar8;
    *(char *)(unaff_x29 + -0x68) = (char)uVar24;
  }
  else {
    if ((*in_stack_00000030 == 2) &&
       (FUN_1061db950(&stack0x00000200,in_stack_00000028,in_stack_00000030[1]),
       puVar7 != (ulong *)0x0)) {
      if ((puVar7[1] & (ulong)plVar23) == 0) {
        auVar32 = __ZN102__LT_tracing_subscriber__registry__sharded__Data_u20_as_u20_tracing_subscriber__registry__SpanData_GT_14extensions_mut17h126407c2e34cc2fdE
                            (&stack0x00000208);
        plVar23 = auVar32._0_8_;
        in_stack_00000020 = plVar8;
        if (plVar23[5] != 0) {
          lVar13 = 0;
          lVar34 = plVar23[2];
          uVar9 = plVar23[3];
          uVar16 = uVar9 & 0x41a0f318cb23d86b;
          uVar29 = *(undefined8 *)(lVar34 + uVar16);
          uVar24 = CONCAT17(-((char)((ulong)uVar29 >> 0x38) == ' '),
                            CONCAT16(-((char)((ulong)uVar29 >> 0x30) == ' '),
                                     CONCAT15(-((char)((ulong)uVar29 >> 0x28) == ' '),
                                              CONCAT14(-((char)((ulong)uVar29 >> 0x20) == ' '),
                                                       CONCAT13(-((char)((ulong)uVar29 >> 0x18) ==
                                                                 ' '),CONCAT12(-((char)((ulong)
                                                  uVar29 >> 0x10) == ' '),
                                                  CONCAT11(-((char)((ulong)uVar29 >> 8) == ' '),
                                                           -((char)uVar29 == ' ')))))))) &
                   0x8080808080808080;
          while( true ) {
            while (uVar24 == 0) {
              bVar28 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar29 >> 0x38) == -1),
                                           CONCAT16(-((char)((ulong)uVar29 >> 0x30) == -1),
                                                    CONCAT15(-((char)((ulong)uVar29 >> 0x28) == -1),
                                                             CONCAT14(-((char)((ulong)uVar29 >> 0x20
                                                                              ) == -1),
                                                                      CONCAT13(-((char)((ulong)
                                                  uVar29 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar29 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar29 >> 8) ==
                                                                     -1),-((char)uVar29 == -1)))))))
                                          ),1);
              if ((bVar28 & 1) != 0) goto LAB_1006b45d8;
              lVar13 = lVar13 + 8;
              uVar16 = uVar16 + lVar13 & uVar9;
              uVar29 = *(undefined8 *)(lVar34 + uVar16);
              uVar24 = CONCAT17(-((char)((ulong)uVar29 >> 0x38) == ' '),
                                CONCAT16(-((char)((ulong)uVar29 >> 0x30) == ' '),
                                         CONCAT15(-((char)((ulong)uVar29 >> 0x28) == ' '),
                                                  CONCAT14(-((char)((ulong)uVar29 >> 0x20) == ' '),
                                                           CONCAT13(-((char)((ulong)uVar29 >> 0x18)
                                                                     == ' '),CONCAT12(-((char)((
                                                  ulong)uVar29 >> 0x10) == ' '),
                                                  CONCAT11(-((char)((ulong)uVar29 >> 8) == ' '),
                                                           -((char)uVar29 == ' ')))))))) &
                       0x8080808080808080;
            }
            uVar17 = (uVar24 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar24 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
            uVar17 = uVar16 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) & uVar9;
            plVar19 = (long *)(lVar34 + -0x20 + uVar17 * -0x20);
            if (plVar19[1] == 0x41a0f318cb23d86b && *plVar19 == -0x1899e7d2c1346dca) break;
            uVar24 = uVar24 - 1 & uVar24;
          }
          lVar34 = lVar34 + uVar17 * -0x20;
          plVar19 = *(long **)(lVar34 + -0x10);
          (**(code **)(*(long *)(lVar34 + -8) + 0x18))(&stack0x00000350,plVar19);
          if (in_stack_00000358 == (ulong *)0x41a0f318cb23d86b &&
              in_stack_00000350 == -0x1899e7d2c1346dca) {
            FUN_100b4fac8(unaff_x20 + 0x8b8,plVar19);
            if (*plVar19 != 2 || plVar19[1] != 0) {
              __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cbb9fa,0x87,&UNK_10b22f1d0);
              goto LAB_1006b5664;
            }
            plVar10 = (long *)plVar19[2];
            if (((plVar10 != (long *)0x0) && (lVar13 = *plVar10, *plVar10 = lVar13 + 1, lVar13 < 0))
               || ((plVar14 = (long *)plVar19[3], plVar14 != (long *)0x0 &&
                   (lVar13 = *plVar14, *plVar14 = lVar13 + 1, lVar13 < 0)))) goto LAB_1006b5664;
            lVar13 = plVar19[4];
            *(long **)(unaff_x29 + -0x78) = plVar10;
            *(long **)(unaff_x29 + -0x70) = plVar14;
            *(char *)(unaff_x29 + -0x68) = (char)lVar13;
            if ((((auVar32._8_4_ & 1) == 0) &&
                ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
                 0x7fffffffffffffff) != 0)) && (uVar24 = FUN_107c05e34(), (uVar24 & 1) == 0)) {
              *(undefined1 *)(plVar23 + 1) = 1;
            }
            if (*plVar23 == 1) {
              *plVar23 = in_xzr;
            }
            else {
              __ZN3std3sys4sync6rwlock5queue6RwLock16unlock_contended17h5028e77bc6335836E(plVar23);
            }
            uVar24 = puVar7[10];
            goto joined_r0x0001006b455c;
          }
        }
LAB_1006b45d8:
        if ((((auVar32._8_4_ & 1) == 0) &&
            ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
             0x7fffffffffffffff) != 0)) && (uVar24 = FUN_107c05e34(), (uVar24 & 1) == 0)) {
          *(undefined1 *)(plVar23 + 1) = 1;
        }
        if (*plVar23 == 1) {
          *plVar23 = in_xzr;
        }
        else {
          __ZN3std3sys4sync6rwlock5queue6RwLock16unlock_contended17h5028e77bc6335836E(plVar23);
        }
        uVar24 = puVar7[10];
        do {
          while( true ) {
            if ((uVar24 & 3) == 2) goto LAB_1006b4618;
            uVar9 = uVar24 >> 2;
            if (((uVar24 & 3) != 1) || ((uVar9 & 0x1ffffffffffff) != 1)) break;
            uVar16 = uVar24 & 0xfff8000000000000;
            uVar9 = puVar7[10];
            bVar1 = uVar9 == uVar24;
            uVar24 = uVar9;
            if (bVar1) {
              puVar7[10] = uVar16 | 3;
              FUN_10074fd94(plVar8,puVar33);
              goto LAB_1006b46a0;
            }
          }
          uVar17 = uVar24 & 0xfff8000000000003;
          uVar16 = puVar7[10];
          bVar1 = uVar16 != uVar24;
          uVar24 = uVar16;
        } while (bVar1);
        puVar7[10] = (uVar9 & 0xc001ffffffffffff) * 4 - 4 | uVar17;
      }
      else {
        uVar24 = puVar7[10];
        do {
          while( true ) {
            if ((uVar24 & 3) == 2) {
              puVar11 = (undefined8 *)&stack0x00000200;
              goto LAB_1006b4fc0;
            }
            uVar9 = uVar24 >> 2;
            if (((uVar24 & 3) != 1) || ((uVar9 & 0x1ffffffffffff) != 1)) break;
            uVar16 = uVar24 & 0xfff8000000000000;
            uVar9 = puVar7[10];
            bVar1 = uVar9 == uVar24;
            uVar24 = uVar9;
            if (bVar1) {
              puVar7[10] = uVar16 | 3;
              FUN_10074fd94(plVar8,puVar33);
              goto LAB_1006b46a0;
            }
          }
          uVar17 = uVar24 & 0xfff8000000000003;
          uVar16 = puVar7[10];
          bVar1 = uVar16 != uVar24;
          uVar24 = uVar16;
        } while (bVar1);
        puVar7[10] = (uVar9 & 0xc001ffffffffffff) * 4 - 4 | uVar17;
      }
    }
LAB_1006b46a0:
    *(undefined8 *)(unaff_x29 + -0x78) = 0;
    *(undefined8 *)(unaff_x29 + -0x70) = 0;
    *(undefined1 *)(unaff_x29 + -0x68) = 0;
  }
LAB_1006b46a8:
  plVar23 = (long *)in_stack_00000030[2];
  lVar34 = -0x8000000000000000;
  func_0x000106032954(0);
  uVar29 = 0;
  in_stack_000000a8 = (undefined *)0x0;
  in_stack_000001a8 = 5;
  in_stack_00000148 = 0x8000000000000000;
  in_stack_00000160 = 0x8000000000000000;
  in_stack_00000178 = 0x8000000000000000;
  in_stack_00000190 = 0x8000000000000001;
  bVar28 = *(byte *)(unaff_x20 + 0x93c);
  lVar13 = 3;
  if (bVar28 == 0) {
    lVar13 = 0;
  }
  bVar27 = *(byte *)(unaff_x20 + 0x93e);
  lVar22 = lVar13 + 2;
  if (bVar27 == 0) {
    lVar22 = lVar13;
  }
  bVar3 = *(byte *)(unaff_x20 + 0x93f);
  bVar4 = *(byte *)(unaff_x20 + 0x940);
  piVar26 = (int *)in_stack_00000030[3];
  uVar24 = *(long *)(*(long *)(piVar26 + 6) + 8) + (ulong)bVar3 + lVar22 + (ulong)bVar4;
  plVar8 = (long *)(uVar24 * 0x38);
  in_stack_000000a0 = (undefined8 *)0x0;
  in_stack_00000150 = in_stack_000002b0;
  in_stack_00000158 = in_stack_000002b8;
  in_stack_00000168 = in_stack_000002c8;
  in_stack_00000170 = in_stack_000002d0;
  in_stack_00000180 = in_stack_000002e0;
  in_stack_00000188 = in_stack_000002e8;
  in_stack_00000198 = in_stack_000002f8;
  in_stack_000001a0 = in_stack_00000300;
  if (uVar24 < 0x24924924924924a) {
    if (plVar8 == (long *)0x0) {
      uVar24 = 0;
      lVar13 = 8;
LAB_1006b4828:
      in_stack_00000158 = 0;
      in_stack_00000148 = uVar24;
      in_stack_00000150 = lVar13;
LAB_1006b4864:
      uVar24 = in_stack_00000158;
      if ((bVar28 & 1) != 0) {
        puVar11 = (undefined8 *)plVar23[0xc];
        if (puVar11 != (undefined8 *)0x0) {
          lVar34 = plVar23[0xd];
          if (in_stack_00000158 == in_stack_00000148) {
            __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h298ec3806960a43cE(&stack0x00000148);
          }
          puVar12 = (undefined8 *)(in_stack_00000150 + uVar24 * 0x38);
          puVar12[6] = lVar34;
          puVar12[3] = 7;
          puVar12[2] = 0xe;
          puVar12[5] = puVar11;
          puVar12[4] = 1;
          puVar12[1] = &UNK_108caab85;
          *puVar12 = 1;
          in_stack_00000158 = uVar24 + 1;
          in_stack_00000228 = puVar11;
        }
        uVar24 = in_stack_00000158;
        puVar11 = (undefined8 *)plVar23[10];
        if (puVar11 != (undefined8 *)0x0) {
          lVar34 = plVar23[0xb];
          if (in_stack_00000158 == in_stack_00000148) {
            __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h298ec3806960a43cE(&stack0x00000148);
          }
          puVar12 = (undefined8 *)(in_stack_00000150 + uVar24 * 0x38);
          puVar12[6] = lVar34;
          puVar12[3] = 7;
          puVar12[2] = 0x10;
          puVar12[5] = puVar11;
          puVar12[4] = 1;
          puVar12[1] = &UNK_108cdc970;
          *puVar12 = 1;
          in_stack_00000158 = uVar24 + 1;
          in_stack_00000228 = puVar11;
        }
        uVar24 = in_stack_00000158;
        if ((*(uint *)(plVar23 + 1) & 1) != 0) {
          uVar2 = *(uint *)((long)plVar23 + 0xc);
          if (in_stack_00000158 == in_stack_00000148) {
            __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h298ec3806960a43cE(&stack0x00000148);
          }
          puVar11 = (undefined8 *)(in_stack_00000150 + uVar24 * 0x38);
          puVar11[6] = lVar34;
          puVar11[3] = 5;
          puVar11[2] = 0x10;
          puVar11[5] = in_stack_00000228;
          puVar11[4] = (ulong)uVar2;
          puVar11[1] = &UNK_108cdc980;
          *puVar11 = 1;
          in_stack_00000158 = uVar24 + 1;
        }
      }
      if ((bVar27 & 1) != 0) {
        puVar11 = (undefined8 *)
                  (*
                  ___ZN21tracing_opentelemetry5layer9THREAD_ID29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h5faa9d0fe9225894E
                  )();
        if ((*(byte *)(puVar11 + 1) & 1) == 0) {
          puVar11 = (undefined8 *)thunk_FUN_108854080();
        }
        uVar24 = in_stack_00000158;
        uVar29 = *puVar11;
        if (in_stack_00000158 == in_stack_00000148) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h298ec3806960a43cE(&stack0x00000148);
        }
        puVar11 = (undefined8 *)(in_stack_00000150 + uVar24 * 0x38);
        puVar11[6] = lVar34;
        puVar11[3] = 5;
        puVar11[2] = 9;
        puVar11[5] = in_stack_00000228;
        puVar11[4] = uVar29;
        puVar11[1] = &UNK_108ca7411;
        *puVar11 = 1;
        in_stack_00000158 = uVar24 + 1;
        puVar7 = (ulong *)(*___ZN3std6thread7current7CURRENT17h98c70d55395456b6E)();
        if (*puVar7 < 3) {
          plVar8 = (long *)FUN_107c05e28();
        }
        else {
          plVar8 = (long *)(*puVar7 - 0x10);
          lVar13 = *plVar8;
          *plVar8 = lVar13 + 1;
          if (lVar13 < 0) goto LAB_1006b5664;
        }
        puVar21 = (undefined *)plVar8[3];
        if (puVar21 == (undefined *)0x0) {
          if ((lRam000000010b66fea8 != 0) && (lRam000000010b66fea8 == plVar8[2])) {
            puVar21 = &UNK_109bd66e6;
            lVar13 = 4;
            goto LAB_1006b4aec;
          }
        }
        else {
          lVar13 = plVar8[4] + -1;
          if (lVar13 == 0) {
            lVar34 = 1;
          }
          else {
LAB_1006b4aec:
            lVar34 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar13,1);
            if (lVar34 == 0) {
              FUN_107c03c64(1,lVar13);
              goto LAB_1006b5664;
            }
          }
          _memcpy(lVar34,puVar21,lVar13);
          uVar24 = in_stack_00000158;
          if (in_stack_00000158 == in_stack_00000148) {
            __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h298ec3806960a43cE(&stack0x00000148);
          }
          puVar11 = (undefined8 *)(in_stack_00000150 + uVar24 * 0x38);
          puVar11[6] = lVar13;
          puVar11[3] = 7;
          puVar11[2] = 0xb;
          puVar11[5] = lVar34;
          puVar11[4] = 0;
          puVar11[1] = &UNK_108caab93;
          *puVar11 = 1;
          in_stack_00000158 = uVar24 + 1;
        }
        lVar13 = *plVar8;
        *plVar8 = lVar13 + -1;
        LORelease();
        if (lVar13 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h52bc04ad50f5b4b2E(&stack0x00000350);
        }
      }
      uVar24 = in_stack_00000158;
      if ((bVar3 & 1) != 0) {
        uVar15 = *(undefined8 *)(&UNK_10b253220 + *plVar23 * 8);
        uVar29 = *(undefined8 *)(&UNK_108cd9aa8 + *plVar23 * 8);
        if (in_stack_00000158 == in_stack_00000148) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h298ec3806960a43cE(&stack0x00000148);
        }
        puVar11 = (undefined8 *)(in_stack_00000150 + uVar24 * 0x38);
        puVar11[6] = uVar29;
        puVar11[3] = 7;
        puVar11[2] = 5;
        puVar11[5] = uVar15;
        puVar11[4] = 1;
        puVar11[1] = &UNK_108ca13ad;
        *puVar11 = 1;
        in_stack_00000158 = uVar24 + 1;
      }
      uVar24 = in_stack_00000158;
      if ((bVar4 & 1) != 0) {
        lVar13 = plVar23[4];
        lVar34 = plVar23[5];
        if (in_stack_00000158 == in_stack_00000148) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h298ec3806960a43cE(&stack0x00000148);
        }
        puVar11 = (undefined8 *)(in_stack_00000150 + uVar24 * 0x38);
        puVar11[6] = lVar34;
        puVar11[3] = 7;
        puVar11[2] = 6;
        puVar11[5] = lVar13;
        puVar11[4] = 1;
        puVar11[1] = &UNK_108caabad;
        *puVar11 = 1;
        in_stack_00000158 = uVar24 + 1;
      }
      in_stack_000001e0 = 0x8000000000000004;
      in_stack_000001c8 = 0x8000000000000001;
      in_stack_000001b0 = -0x8000000000000000;
      lVar13 = *(long *)(piVar26 + 4);
      if (*piVar26 == 1) {
        lVar34 = *(long *)(*(long *)(piVar26 + 6) + 8);
        if (lVar34 != 0) {
          lVar22 = 0;
          plVar23 = (long *)(*(long *)(piVar26 + 2) + 8);
          lVar13 = lVar13 << 4;
          do {
            if (lVar13 == 0) break;
            if (plVar23[-1] != 0) {
              (**(code **)(*plVar23 + 0x18))
                        (plVar23[-1],&stack0x00000200,&stack0x00000350,&UNK_10b21f188);
            }
            lVar22 = lVar22 + 1;
            plVar23 = plVar23 + 2;
            lVar13 = lVar13 + -0x10;
          } while (lVar34 != lVar22);
        }
      }
      else if (lVar13 != 0) {
        lVar34 = *(long *)(*(long *)(piVar26 + 6) + 0x10);
        lVar13 = lVar13 * 0x18;
        plVar23 = (long *)(*(long *)(piVar26 + 2) + 0x10);
        do {
          if ((*(long *)(plVar23[-2] + 0x10) == lVar34) && (plVar23[-1] != 0)) {
            (**(code **)(*plVar23 + 0x18))(plVar23[-1],plVar23[-2],&stack0x00000350,&UNK_10b21f188);
          }
          plVar23 = plVar23 + 3;
          lVar13 = lVar13 + -0x18;
        } while (lVar13 != 0);
      }
      *(undefined8 *)(unaff_x29 + -0x98) = 0x8000000000000001;
      __ZN21tracing_opentelemetry5layer18SpanBuilderUpdates6update17h94b57d7f7f8564caE
                (&stack0x00000200,&stack0x000000a0,unaff_x29 + -0x98);
      _memcpy(&stack0x00000350,&stack0x000000a0,0x110);
      _memcpy(&stack0x00000200,&stack0x00000350,0x140);
      FUN_100a8bca0(plVar6,&stack0x00000200);
      if ((((auVar31._8_4_ & 1) == 0) &&
          ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
           0x7fffffffffffffff) != 0)) && (uVar24 = FUN_107c05e34(), (uVar24 & 1) == 0)) {
        *(undefined1 *)(plVar6 + 1) = 1;
      }
      if (*plVar6 == 1) {
        *plVar6 = in_xzr;
      }
      else {
        __ZN3std3sys4sync6rwlock5queue6RwLock16unlock_contended17h5028e77bc6335836E(plVar6);
      }
      uVar24 = in_stack_00000200[10];
      while ((uVar24 & 3) != 2) {
        uVar9 = uVar24 >> 2;
        if (((uVar24 & 3) == 1) && ((uVar9 & 0x1ffffffffffff) == 1)) {
          uVar16 = uVar24 & 0xfff8000000000000;
          uVar9 = in_stack_00000200[10];
          bVar1 = uVar9 == uVar24;
          uVar24 = uVar9;
          if (bVar1) {
            in_stack_00000200[10] = uVar16 | 3;
            FUN_10074fd94(plVar18,puVar25);
            return in_stack_00000040;
          }
        }
        else {
          uVar17 = uVar24 & 0xfff8000000000003;
          uVar16 = in_stack_00000200[10];
          bVar1 = uVar16 == uVar24;
          uVar24 = uVar16;
          if (bVar1) {
            in_stack_00000200[10] = (uVar9 & 0xc001ffffffffffff) * 4 - 4 | uVar17;
            return in_stack_00000040;
          }
        }
      }
      goto LAB_1006b5268;
    }
    lVar13 = _malloc(plVar8);
    in_stack_00000020 = plVar8;
    if (lVar13 != 0) {
      if (in_stack_00000148 == 0x8000000000000000) goto LAB_1006b4828;
      FUN_100e11948(lVar13,0);
      if (uVar24 != 0) {
        _free(lVar13);
      }
      goto LAB_1006b4864;
    }
    goto LAB_1006b5290;
  }
LAB_1006b47f4:
  FUN_107c03c64(uVar29,plVar8);
LAB_1006b5664:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1006b5668);
  (*pcVar5)();
LAB_1006b3dbc:
  in_stack_000000a0 = (undefined8 *)0x2;
LAB_1006b5268:
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cd640b,&stack0x00000200,&UNK_10b24e120);
LAB_1006b5290:
  uVar29 = 8;
  plVar8 = in_stack_00000020;
  goto LAB_1006b47f4;
  while( true ) {
    uVar16 = uVar24 & 0xfff8000000000000;
    uVar9 = puVar7[10];
    bVar1 = uVar9 == uVar24;
    uVar24 = uVar9;
    if (bVar1) break;
joined_r0x0001006b455c:
    if ((uVar24 & 3) == 2) goto LAB_1006b4618;
    uVar9 = uVar24 >> 2;
    if (((uVar24 & 3) != 1) || ((uVar9 & 0x1ffffffffffff) != 1)) {
      uVar17 = uVar24 & 0xfff8000000000003;
      uVar16 = puVar7[10];
      bVar1 = uVar16 == uVar24;
      uVar24 = uVar16;
      if (bVar1) {
        puVar7[10] = (uVar9 & 0xc001ffffffffffff) * 4 - 4 | uVar17;
        goto LAB_1006b46a8;
      }
      goto joined_r0x0001006b455c;
    }
  }
  puVar7[10] = uVar16 | 3;
  FUN_10074fd94(plVar8,puVar33);
  goto LAB_1006b46a8;
LAB_1006b4618:
  in_stack_000000a0 = (undefined8 *)0x2;
  puVar11 = (undefined8 *)&stack0x00000350;
LAB_1006b4fc0:
  puVar11[1] = &
               __ZN4core3fmt3num53__LT_impl_u20_core__fmt__Binary_u20_for_u20_usize_GT_3fmt17hb54e0e9a7f0c0768E
  ;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cd640b,puVar11,&UNK_10b24e120);
  goto LAB_1006b5664;
}

