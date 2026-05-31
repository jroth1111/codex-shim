
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100753190(void)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  undefined1 uVar4;
  char cVar5;
  ulong ***pppuVar6;
  ulong *****pppppuVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  ulong ******in_x3;
  ulong in_x4;
  ulong *******pppppppuVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong *****pppppuVar14;
  ulong ****ppppuVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  ulong ******ppppppuVar20;
  ulong unaff_x21;
  long *unaff_x22;
  ulong ****ppppuVar21;
  long unaff_x23;
  ulong uVar22;
  long *unaff_x24;
  ulong ***pppuVar23;
  ulong ***pppuVar24;
  long *unaff_x27;
  ulong *******pppppppuVar25;
  ulong *******unaff_x28;
  long unaff_x29;
  long in_xzr;
  ulong *****pppppuVar26;
  ulong ******ppppppuVar27;
  byte bVar28;
  byte bVar29;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [12];
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined *in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_00000090;
  undefined *in_stack_00000098;
  undefined *in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 *in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 *in_stack_000000c0;
  long in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 *in_stack_000000d8;
  long in_stack_000000e0;
  undefined *puStack_1c8;
  ulong *****pppppuStack_1c0;
  ulong ******ppppppuStack_178;
  ulong ******ppppppuStack_170;
  ulong *******pppppppuStack_168;
  undefined *puStack_160;
  ulong *****pppppuStack_158;
  ulong uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  ulong *****pppppuStack_138;
  ulong ******ppppppuStack_130;
  ulong *******pppppppuStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  ulong ****ppppuStack_110;
  ulong *******pppppppuStack_108;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  ulong *******pppppppuStack_f0;
  undefined *puStack_e8;
  ulong *****pppppuStack_e0;
  ulong ******ppppppuStack_d8;
  ulong *****pppppuStack_d0;
  ulong *******pppppppuStack_c8;
  ulong *******pppppppuStack_c0;
  ulong ******ppppppuStack_b8;
  ulong uStack_b0;
  ulong *******pppppppuStack_a8;
  ulong *******pppppppuStack_a0;
  ulong ***pppuStack_98;
  ulong *****pppppuStack_90;
  ulong ******ppppppuStack_88;
  ulong ***pppuStack_80;
  
  __ZN3std2io5stdio7_eprint17heb74b67280cb307dE
            (s_E_tracing_subscriber__Unable_to_f_108ac52c2,unaff_x29 + -0x90);
  if (in_stack_000000c8 != 0) {
    _free(in_stack_000000d0);
  }
  bVar28 = *(byte *)(unaff_x23 + 0x70c);
  if ((*(char *)(unaff_x23 + 0x70b) == '\x01') && ((bVar28 >> 3 & 1) != 0)) {
    if (unaff_x22[5] != 0) {
      lVar13 = 0;
      lVar12 = unaff_x22[2];
      uVar11 = unaff_x22[3];
      uVar16 = uVar11 & 0x91f949a1459174a4;
      uVar30 = *(undefined8 *)(lVar12 + uVar16);
      uVar22 = CONCAT17(-((char)((ulong)uVar30 >> 0x38) == 'H'),
                        CONCAT16(-((char)((ulong)uVar30 >> 0x30) == 'H'),
                                 CONCAT15(-((char)((ulong)uVar30 >> 0x28) == 'H'),
                                          CONCAT14(-((char)((ulong)uVar30 >> 0x20) == 'H'),
                                                   CONCAT13(-((char)((ulong)uVar30 >> 0x18) == 'H'),
                                                            CONCAT12(-((char)((ulong)uVar30 >> 0x10)
                                                                      == 'H'),CONCAT11(-((char)((
                                                  ulong)uVar30 >> 8) == 'H'),-((char)uVar30 == 'H'))
                                                  )))))) & 0x8080808080808080;
      while( true ) {
        while (uVar22 == 0) {
          bVar29 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar30 >> 0x38) == -1),
                                       CONCAT16(-((char)((ulong)uVar30 >> 0x30) == -1),
                                                CONCAT15(-((char)((ulong)uVar30 >> 0x28) == -1),
                                                         CONCAT14(-((char)((ulong)uVar30 >> 0x20) ==
                                                                   -1),CONCAT13(-((char)((ulong)
                                                  uVar30 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar30 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar30 >> 8) ==
                                                                     -1),-((char)uVar30 == -1)))))))
                                      ),1);
          if ((bVar29 & 1) != 0) goto LAB_1007532c4;
          lVar13 = lVar13 + 8;
          uVar16 = uVar16 + lVar13 & uVar11;
          uVar30 = *(undefined8 *)(lVar12 + uVar16);
          uVar22 = CONCAT17(-((char)((ulong)uVar30 >> 0x38) == 'H'),
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
        uVar18 = (uVar22 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar22 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
        uVar18 = uVar16 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) & uVar11;
        plVar19 = (long *)(lVar12 + -0x20 + uVar18 * -0x20);
        if (plVar19[1] == -0x6e06b65eba6e8b5c && *plVar19 == 0x4ae42cf8481b71fa) break;
        uVar22 = uVar22 - 1 & uVar22;
      }
      lVar12 = lVar12 + uVar18 * -0x20;
      (**(code **)(*(long *)(lVar12 + -8) + 0x18))
                (unaff_x29 + -0x90,*(undefined8 *)(lVar12 + -0x10));
      if (*(long *)(unaff_x29 + -0x88) == -0x6e06b65eba6e8b5c &&
          *(long *)(unaff_x29 + -0x90) == 0x4ae42cf8481b71fa) goto LAB_1007532e4;
    }
LAB_1007532c4:
    auVar32 = func_0x000106032954(8);
    *(undefined8 *)(unaff_x29 + -0x90) = 0;
    *(undefined8 *)(unaff_x29 + -0x88) = 0;
    *(int *)(unaff_x29 + -0x70) = auVar32._8_4_;
    *(undefined8 *)(unaff_x29 + -0x80) = 0;
    *(long *)(unaff_x29 + -0x78) = auVar32._0_8_;
    FUN_100a8b728();
  }
LAB_1007532e4:
  if ((bVar28 & 1) == 0) {
    if ((((unaff_x21 & 1) == 0) &&
        ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
         0x7fffffffffffffff) != 0)) && (uVar22 = FUN_107c05e34(), (uVar22 & 1) == 0)) {
      *(undefined1 *)(unaff_x22 + 1) = 1;
    }
    if (*unaff_x22 == 1) {
      *unaff_x22 = in_xzr;
      goto LAB_100753310;
    }
  }
  else {
    in_stack_000000e0 = *unaff_x27;
    in_stack_00000070 = &UNK_10b212cf0;
    in_stack_00000078 = 1;
    in_stack_00000088 = *(undefined8 *)(in_stack_000000e0 + 0x48);
    in_stack_00000080 = *(undefined8 *)(in_stack_000000e0 + 0x40);
    *(undefined8 *)(unaff_x29 + -0x88) = 1;
    *(undefined **)(unaff_x29 + -0x90) = &UNK_10b212cf0;
    *(undefined8 *)(unaff_x29 + -0x78) = in_stack_00000088;
    *(undefined8 *)(unaff_x29 + -0x80) = in_stack_00000080;
    *(undefined8 *)(unaff_x29 + -0x70) = 0;
    in_stack_00000090 = unaff_x29 + -0x90;
    in_stack_00000098 = &UNK_10b21f3a8;
    in_stack_000000a0 = &UNK_10b216f28;
    in_stack_000000a8 = 0;
    in_stack_000000b0 = &stack0x00000090;
    in_stack_000000b8 = 1;
    in_stack_000000c0 = &stack0x00000070;
    in_stack_000000d8 = &stack0x000000a8;
    in_stack_000000c8 = 2;
    in_stack_000000d0 = in_stack_00000018;
    if ((((unaff_x21 & 1) == 0) &&
        ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
         0x7fffffffffffffff) != 0)) && (uVar22 = FUN_107c05e34(), (uVar22 & 1) == 0)) {
      *(undefined1 *)(unaff_x22 + 1) = 1;
    }
    if (*unaff_x22 == 1) {
      *unaff_x22 = in_xzr;
    }
    else {
      __ZN3std3sys4sync6rwlock5queue6RwLock16unlock_contended17h5028e77bc6335836E();
    }
    uVar22 = unaff_x27[10] & 3;
    if (uVar22 != 2) {
      uVar11 = unaff_x27[10];
      do {
        if ((uVar22 == 1) && ((uVar11 >> 2 & 0x1ffffffffffff) == 1)) {
          uVar16 = unaff_x27[10];
          if (uVar16 == uVar11) {
            unaff_x27[10] = uVar11 & 0xfff8000000000000 | 3;
            FUN_10074fd94(in_stack_00000008,in_stack_00000010);
LAB_1007534ac:
            *(long **)(unaff_x29 + -0x98) = &stack0x000000c8;
            *(undefined8 *)(unaff_x29 + -0xb0) = in_stack_00000020;
            *(undefined8 *)(unaff_x29 + -0xa8) = in_stack_00000000;
            *(long *)(unaff_x29 + -200) = unaff_x23 + 0x700;
            *(long *)(unaff_x29 + -0xc0) = unaff_x29 + -200;
            *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0x98;
            FUN_100c3a7cc(unaff_x29 + -0xc0);
            return;
          }
        }
        else {
          uVar16 = unaff_x27[10];
          if (uVar16 == uVar11) {
            unaff_x27[10] = (uVar11 >> 2 & 0xc001ffffffffffff) * 4 - 4 | uVar11 & 0xfff8000000000003
            ;
            goto LAB_1007534ac;
          }
        }
        uVar22 = uVar16 & 3;
        uVar11 = uVar16;
      } while (uVar22 != 2);
    }
    *(undefined8 *)(unaff_x29 + -0x98) = 2;
    *(long *)(unaff_x29 + -0xc0) = unaff_x29 + -0x98;
    *(undefined **)(unaff_x29 + -0xb8) =
         &
         __ZN4core3fmt3num53__LT_impl_u20_core__fmt__Binary_u20_for_u20_usize_GT_3fmt17hb54e0e9a7f0c0768E
    ;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (&UNK_108cd640b,unaff_x29 + -0xc0,&UNK_10b24e120);
  }
  __ZN3std3sys4sync6rwlock5queue6RwLock16unlock_contended17h5028e77bc6335836E();
LAB_100753310:
  uVar22 = unaff_x27[10];
  while ((uVar22 & 3) != 2) {
    uVar11 = uVar22 >> 2;
    if (((uVar22 & 3) == 1) && ((uVar11 & 0x1ffffffffffff) == 1)) {
      uVar16 = uVar22 & 0xfff8000000000000;
      uVar11 = unaff_x27[10];
      bVar2 = uVar11 == uVar22;
      uVar22 = uVar11;
      if (bVar2) {
        unaff_x27[10] = uVar16 | 3;
        FUN_10074fd94(in_stack_00000008,in_stack_00000010);
        return;
      }
    }
    else {
      uVar18 = uVar22 & 0xfff8000000000003;
      uVar16 = unaff_x27[10];
      bVar2 = uVar16 == uVar22;
      uVar22 = uVar16;
      if (bVar2) {
        unaff_x27[10] = (uVar11 & 0xc001ffffffffffff) * 4 - 4 | uVar18;
        return;
      }
    }
  }
  *(undefined8 *)(unaff_x29 + -0xc0) = 2;
  *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0xc0;
  *(undefined **)(unaff_x29 + -0x88) =
       &
       __ZN4core3fmt3num53__LT_impl_u20_core__fmt__Binary_u20_for_u20_usize_GT_3fmt17hb54e0e9a7f0c0768E
  ;
  puVar8 = (undefined8 *)&UNK_10b24e120;
  uVar30 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cd640b,unaff_x29 + -0x90);
  FUN_100cbb828(&stack0x00000048);
  __Unwind_Resume(uVar30);
  FUN_107c05ccc();
  lVar13 = FUN_107c05ccc();
  auVar31 = (*
            ___ZN18tracing_subscriber6filter13layer_filters9FILTERING29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17hd91e4eb2b0529f99E
            )();
  ppppppuStack_178 = auVar31._8_8_;
  uVar22 = *(ulong *)(lVar13 + 0x6f8);
  uVar11 = *(ulong *)(auVar31._0_8_ + 0x10);
  if ((uVar11 & uVar22) != 0) {
    uVar16 = 0xffffffffffffffff;
    if (uVar22 != 0xffffffffffffffff) {
      uVar16 = ~uVar22;
    }
    *(ulong *)(auVar31._0_8_ + 0x10) = uVar16 & uVar11;
    return;
  }
  uVar11 = 0;
  if (in_x4 != 0xffffffffffffffff) {
    uVar11 = in_x4;
  }
  FUN_1004287d8(lVar13);
  puVar9 = (undefined *)*puVar8;
  uVar22 = uVar22 | uVar11;
  if ((in_x3 != (ulong ******)0x0) &&
     (FUN_1061db950(&pppppppuStack_a0,in_x3), pppppuVar7 = pppppuStack_90, pppuVar6 = pppuStack_98,
     pppppppuVar25 = pppppppuStack_a0, unaff_x28 = pppppppuStack_a0,
     pppppppuStack_a0 != (ulong *******)0x0)) {
    if (((ulong)pppppppuStack_a0[1] & uVar22) == 0) {
      pppppppuStack_168 = pppppppuStack_a0;
      puStack_1c8 = (undefined *)pppuStack_98;
      pppppuStack_1c0 = pppppuStack_90;
      puStack_160 = (undefined *)pppuStack_98;
      pppppuStack_158 = pppppuStack_90;
      ppppppuStack_170 = in_x3;
      uStack_150 = uVar22;
      auVar32 = __ZN102__LT_tracing_subscriber__registry__sharded__Data_u20_as_u20_tracing_subscriber__registry__SpanData_GT_14extensions_mut17h126407c2e34cc2fdE
                          (&pppppppuStack_168);
      unaff_x24 = auVar32._0_8_;
      uVar1 = auVar32._8_4_ & 1;
      if (unaff_x24[5] != 0) {
        lVar12 = 0;
        lVar3 = unaff_x24[2];
        uVar16 = unaff_x24[3];
        uVar18 = uVar16 & 0x716edfddde06e5b1;
        uVar30 = *(undefined8 *)(lVar3 + uVar18);
        uVar11 = CONCAT17(-((char)((ulong)uVar30 >> 0x38) == '8'),
                          CONCAT16(-((char)((ulong)uVar30 >> 0x30) == '8'),
                                   CONCAT15(-((char)((ulong)uVar30 >> 0x28) == '8'),
                                            CONCAT14(-((char)((ulong)uVar30 >> 0x20) == '8'),
                                                     CONCAT13(-((char)((ulong)uVar30 >> 0x18) == '8'
                                                               ),CONCAT12(-((char)((ulong)uVar30 >>
                                                                                  0x10) == '8'),
                                                                          CONCAT11(-((char)((ulong)
                                                  uVar30 >> 8) == '8'),-((char)uVar30 == '8'))))))))
                 & 0x8080808080808080;
        while( true ) {
          while (uVar11 == 0) {
            bVar28 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar30 >> 0x38) == -1),
                                         CONCAT16(-((char)((ulong)uVar30 >> 0x30) == -1),
                                                  CONCAT15(-((char)((ulong)uVar30 >> 0x28) == -1),
                                                           CONCAT14(-((char)((ulong)uVar30 >> 0x20)
                                                                     == -1),CONCAT13(-((char)((ulong
                                                  )uVar30 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar30 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar30 >> 8) ==
                                                                     -1),-((char)uVar30 == -1)))))))
                                        ),1);
            if ((bVar28 & 1) != 0) goto LAB_100711c84;
            lVar12 = lVar12 + 8;
            uVar18 = uVar18 + lVar12 & uVar16;
            uVar30 = *(undefined8 *)(lVar3 + uVar18);
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
          }
          uVar17 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
          uVar17 = uVar18 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) & uVar16;
          plVar19 = (long *)(lVar3 + -0x20 + uVar17 * -0x20);
          if (plVar19[1] == 0x716edfddde06e5b1 && *plVar19 == -0x3760dee2c25b4f34) break;
          uVar11 = uVar11 - 1 & uVar11;
        }
        lVar3 = lVar3 + uVar17 * -0x20;
        (**(code **)(*(long *)(lVar3 + -8) + 0x18))
                  (&pppppppuStack_a0,*(undefined8 *)(lVar3 + -0x10));
        if (pppuStack_98 == (ulong ***)0x716edfddde06e5b1 &&
            pppppppuStack_a0 == (ulong *******)0xc89f211d3da4b0cc) goto LAB_100711de8;
      }
LAB_100711c84:
      ppppppuStack_d8 = (ulong ******)((ulong)ppppppuStack_d8 & 0xffffffffffffff00);
      pppppppuStack_f0 = (ulong *******)0x0;
      puStack_e8 = (undefined *)0x1;
      pppppuStack_e0 = (ulong *****)0x0;
      uVar4 = *(undefined1 *)(lVar13 + 0x70a);
      pppppppuStack_c8 = (ulong *******)&pppppppuStack_f0;
      pppppppuStack_c0 = (ulong *******)&UNK_10b209290;
      ppppppuStack_b8 = (ulong ******)CONCAT71(ppppppuStack_b8._1_7_,uVar4);
      uStack_b0 = CONCAT62(uStack_b0._2_6_,1);
      pppppuVar14 = ppppppuStack_178[3];
      ppppuVar21 = pppppuVar14[2];
      ppppuVar15 = pppppuVar14[3];
      if (*(int *)pppppuVar14 == 1) {
        pppuVar23 = ppppuVar15[1];
        if (pppuVar23 != (ulong ***)0x0) {
          pppuVar24 = (ulong ***)0x0;
          ppppppuVar20 = (ulong ******)*ppppuVar15;
          ppppppuVar27 = (ulong ******)ppppuVar15[3];
          pppppuVar26 = (ulong *****)ppppuVar15[2];
          ppppuVar15 = pppppuVar14[1] + 1;
          lVar12 = (long)ppppuVar21 << 4;
          do {
            if (lVar12 == 0) break;
            pppppuStack_90 = pppppuVar26;
            ppppppuStack_88 = ppppppuVar27;
            pppuStack_80 = pppuVar24;
            if (ppppuVar15[-1] != (ulong ***)0x0) {
              pppppppuStack_a0 = (ulong *******)ppppppuVar20;
              pppuStack_98 = pppuVar23;
              (*(code *)(*ppppuVar15)[3])
                        (ppppuVar15[-1],&pppppppuStack_a0,&pppppppuStack_c8,&UNK_10b244550);
            }
            pppuVar24 = (ulong ***)((long)pppuVar24 + 1);
            ppppuVar15 = ppppuVar15 + 2;
            lVar12 = lVar12 + -0x10;
          } while (pppuVar23 != pppuVar24);
        }
      }
      else if (ppppuVar21 != (ulong ****)0x0) {
        pppuVar23 = ppppuVar15[2];
        lVar12 = (long)ppppuVar21 * 0x18;
        ppppuVar21 = pppppuVar14[1] + 2;
        do {
          if (((ulong ***)ppppuVar21[-2][2] == pppuVar23) && (ppppuVar21[-1] != (ulong ***)0x0)) {
            (*(code *)(*ppppuVar21)[3])
                      (ppppuVar21[-1],ppppuVar21[-2],&pppppppuStack_c8,&UNK_10b244550);
          }
          ppppuVar21 = ppppuVar21 + 3;
          lVar12 = lVar12 + -0x18;
        } while (lVar12 != 0);
      }
      if ((uStack_b0 & 0x100) == 0) {
        ppppppuStack_d8 = (ulong ******)CONCAT71(ppppppuStack_d8._1_7_,uVar4);
        pppuStack_98 = (ulong ***)puStack_e8;
        pppppppuStack_a0 = pppppppuStack_f0;
        ppppppuStack_88 = ppppppuStack_d8;
        pppppuStack_90 = pppppuStack_e0;
        FUN_100a8b5bc(unaff_x24,&pppppppuStack_a0);
        cVar5 = *(char *)(lVar13 + 0x708);
        bVar28 = *(byte *)(lVar13 + 0x709);
      }
      else {
        pppppppuStack_a0 = &ppppppuStack_178;
        pppuStack_98 = (ulong ***)&DAT_100c3f7dc;
        __ZN3std2io5stdio7_eprint17heb74b67280cb307dE
                  (s_E_tracing_subscriber__Unable_to_f_108ac52c2,&pppppppuStack_a0);
        if (pppppppuStack_f0 != (ulong *******)0x0) {
          _free(puStack_e8);
        }
LAB_100711de8:
        cVar5 = *(char *)(lVar13 + 0x708);
        bVar28 = *(byte *)(lVar13 + 0x709);
      }
      if ((cVar5 == '\x01') && ((bVar28 >> 3 & 1) != 0)) {
        if (unaff_x24[5] != 0) {
          lVar12 = 0;
          lVar3 = unaff_x24[2];
          uVar16 = unaff_x24[3];
          uVar18 = uVar16 & 0x91f949a1459174a4;
          uVar30 = *(undefined8 *)(lVar3 + uVar18);
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
          while( true ) {
            while (uVar11 == 0) {
              bVar29 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar30 >> 0x38) == -1),
                                           CONCAT16(-((char)((ulong)uVar30 >> 0x30) == -1),
                                                    CONCAT15(-((char)((ulong)uVar30 >> 0x28) == -1),
                                                             CONCAT14(-((char)((ulong)uVar30 >> 0x20
                                                                              ) == -1),
                                                                      CONCAT13(-((char)((ulong)
                                                  uVar30 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar30 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar30 >> 8) ==
                                                                     -1),-((char)uVar30 == -1)))))))
                                          ),1);
              if ((bVar29 & 1) != 0) goto LAB_100711f10;
              lVar12 = lVar12 + 8;
              uVar18 = uVar18 + lVar12 & uVar16;
              uVar30 = *(undefined8 *)(lVar3 + uVar18);
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
            }
            uVar17 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
            uVar17 = uVar18 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) & uVar16;
            plVar19 = (long *)(lVar3 + -0x20 + uVar17 * -0x20);
            if (plVar19[1] == -0x6e06b65eba6e8b5c && *plVar19 == 0x4ae42cf8481b71fa) break;
            uVar11 = uVar11 - 1 & uVar11;
          }
          lVar3 = lVar3 + uVar17 * -0x20;
          (**(code **)(*(long *)(lVar3 + -8) + 0x18))
                    (&pppppppuStack_a0,*(undefined8 *)(lVar3 + -0x10));
          if (pppuStack_98 == (ulong ***)0x91f949a1459174a4 &&
              pppppppuStack_a0 == (ulong *******)0x4ae42cf8481b71fa) goto LAB_100711f30;
        }
LAB_100711f10:
        auVar32 = func_0x000106032954(8);
        ppppppuStack_88 = auVar32._0_8_;
        pppppppuStack_a0 = (ulong *******)0x0;
        pppuStack_98 = (ulong ***)0x0;
        pppuStack_80 = (ulong ***)CONCAT44(pppuStack_80._4_4_,auVar32._8_4_);
        pppppuStack_90 = (ulong *****)0x0;
        FUN_100a8b728(unaff_x24,&pppppppuStack_a0);
      }
LAB_100711f30:
      if ((bVar28 & 1) == 0) {
        if (((uVar1 == 0) &&
            ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
             0x7fffffffffffffff) != 0)) && (uVar22 = FUN_107c05e34(), (uVar22 & 1) == 0)) {
          *(undefined1 *)(unaff_x24 + 1) = 1;
        }
        if (*unaff_x24 != 1) goto LAB_10071218c;
        *unaff_x24 = in_xzr;
        goto LAB_100711f5c;
      }
      ppppppuStack_d8 = *pppppppuVar25;
      puStack_148 = &UNK_10b212cf0;
      uStack_140 = 1;
      ppppppuStack_130 = (ulong ******)ppppppuStack_d8[9];
      pppppuStack_138 = ppppppuStack_d8[8];
      pppuStack_98 = (ulong ***)0x1;
      pppppppuStack_a0 = (ulong *******)&UNK_10b212cf0;
      pppuStack_80 = (ulong ***)0x0;
      pppppppuStack_128 = (ulong *******)&pppppppuStack_a0;
      puStack_120 = &UNK_10b21f3a8;
      puStack_118 = &UNK_10b216f28;
      ppppuStack_110 = (ulong ****)0x0;
      pppppppuStack_108 = (ulong *******)&pppppppuStack_128;
      uStack_100 = 1;
      ppuStack_f8 = &puStack_148;
      pppppuStack_e0 = &ppppuStack_110;
      pppppppuStack_f0 = (ulong *******)0x2;
      puStack_e8 = puVar9;
      pppppuStack_90 = pppppuStack_138;
      ppppppuStack_88 = ppppppuStack_130;
      if (((uVar1 == 0) &&
          ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
           0x7fffffffffffffff) != 0)) && (uVar11 = FUN_107c05e34(), (uVar11 & 1) == 0)) {
        *(undefined1 *)(unaff_x24 + 1) = 1;
      }
      if (*unaff_x24 == 1) {
        *unaff_x24 = in_xzr;
      }
      else {
        __ZN3std3sys4sync6rwlock5queue6RwLock16unlock_contended17h5028e77bc6335836E(unaff_x24);
      }
      ppppppuVar20 = pppppppuVar25[10];
      do {
        while( true ) {
          if (((ulong)ppppppuVar20 & 3) == 2) goto LAB_10071215c;
          uVar11 = (ulong)ppppppuVar20 >> 2;
          if ((((ulong)ppppppuVar20 & 3) == 1) && ((uVar11 & 0x1ffffffffffff) == 1)) break;
          uVar16 = (ulong)ppppppuVar20 & 0xfff8000000000003;
          ppppppuVar27 = pppppppuVar25[10];
          bVar2 = ppppppuVar27 == ppppppuVar20;
          ppppppuVar20 = ppppppuVar27;
          if (bVar2) {
            pppppppuVar25[10] = (ulong ******)((uVar11 & 0xc001ffffffffffff) * 4 - 4 | uVar16);
LAB_1007120ec:
            pppppppuStack_a8 = (ulong *******)&pppppppuStack_f0;
            pppppppuStack_c8 = (ulong *******)&pppppuStack_d0;
            pppppppuStack_c0 = (ulong *******)&pppppppuStack_a8;
            pppppuStack_d0 = (ulong *****)(lVar13 + 0x700);
            ppppppuStack_b8 = in_x3;
            uStack_b0 = uVar22;
            FUN_100c39e04(&pppppppuStack_c8);
            return;
          }
        }
        uVar11 = (ulong)ppppppuVar20 & 0xfff8000000000000;
        ppppppuVar27 = pppppppuVar25[10];
        bVar2 = ppppppuVar27 != ppppppuVar20;
        ppppppuVar20 = ppppppuVar27;
      } while (bVar2);
      pppppppuVar25[10] = (ulong ******)(uVar11 | 3);
      FUN_10074fd94(pppuVar6,pppppuVar7);
      goto LAB_1007120ec;
    }
    ppppppuVar20 = pppppppuStack_a0[10];
    do {
      while( true ) {
        if (((ulong)ppppppuVar20 & 3) == 2) goto LAB_100712258;
        uVar22 = (ulong)ppppppuVar20 >> 2;
        if ((((ulong)ppppppuVar20 & 3) == 1) && ((uVar22 & 0x1ffffffffffff) == 1)) break;
        uVar11 = (ulong)ppppppuVar20 & 0xfff8000000000003;
        ppppppuVar27 = pppppppuStack_a0[10];
        bVar2 = ppppppuVar27 == ppppppuVar20;
        ppppppuVar20 = ppppppuVar27;
        if (bVar2) {
          pppppppuStack_a0[10] = (ulong ******)((uVar22 & 0xc001ffffffffffff) * 4 - 4 | uVar11);
          goto LAB_100712240;
        }
      }
      uVar22 = (ulong)ppppppuVar20 & 0xfff8000000000000;
      ppppppuVar27 = pppppppuStack_a0[10];
      bVar2 = ppppppuVar27 != ppppppuVar20;
      ppppppuVar20 = ppppppuVar27;
    } while (bVar2);
    pppppppuStack_a0[10] = (ulong ******)(uVar22 | 3);
    FUN_10074fd94();
  }
LAB_100712240:
  FUN_107c05cac(&UNK_108caab68,0x1d,&UNK_10b21f390);
  pppppppuStack_a0 = unaff_x28;
LAB_100712258:
  ppppppuStack_170 = (ulong ******)0x2;
  pppppppuVar10 = &ppppppuStack_170;
  pppppppuVar25 = pppppppuStack_a0;
  do {
    pppuStack_98 = (ulong ***)
                   &
                   __ZN4core3fmt3num53__LT_impl_u20_core__fmt__Binary_u20_for_u20_usize_GT_3fmt17hb54e0e9a7f0c0768E
    ;
    pppppppuStack_a0 = pppppppuVar10;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (&UNK_108cd640b,&pppppppuStack_a0,&UNK_10b24e120);
LAB_10071215c:
    pppppppuStack_a8 = (ulong *******)0x2;
    pppppppuStack_c8 = (ulong *******)&pppppppuStack_a8;
    pppppppuStack_c0 =
         (ulong *******)
         &
         __ZN4core3fmt3num53__LT_impl_u20_core__fmt__Binary_u20_for_u20_usize_GT_3fmt17hb54e0e9a7f0c0768E
    ;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (&UNK_108cd640b,&pppppppuStack_c8,&UNK_10b24e120);
LAB_10071218c:
    __ZN3std3sys4sync6rwlock5queue6RwLock16unlock_contended17h5028e77bc6335836E(unaff_x24);
LAB_100711f5c:
    ppppppuVar20 = pppppppuVar25[10];
    while (((ulong)ppppppuVar20 & 3) != 2) {
      uVar22 = (ulong)ppppppuVar20 >> 2;
      if ((((ulong)ppppppuVar20 & 3) == 1) && ((uVar22 & 0x1ffffffffffff) == 1)) {
        uVar22 = (ulong)ppppppuVar20 & 0xfff8000000000000;
        ppppppuVar27 = pppppppuVar25[10];
        bVar2 = ppppppuVar27 == ppppppuVar20;
        ppppppuVar20 = ppppppuVar27;
        if (bVar2) {
          pppppppuVar25[10] = (ulong ******)(uVar22 | 3);
          FUN_10074fd94(puStack_1c8,pppppuStack_1c0);
          return;
        }
      }
      else {
        uVar11 = (ulong)ppppppuVar20 & 0xfff8000000000003;
        ppppppuVar27 = pppppppuVar25[10];
        bVar2 = ppppppuVar27 == ppppppuVar20;
        ppppppuVar20 = ppppppuVar27;
        if (bVar2) {
          pppppppuVar25[10] = (ulong ******)((uVar22 & 0xc001ffffffffffff) * 4 - 4 | uVar11);
          return;
        }
      }
    }
    pppppppuStack_c8 = (ulong *******)0x2;
    pppppppuVar10 = (ulong *******)&pppppppuStack_c8;
  } while( true );
}

