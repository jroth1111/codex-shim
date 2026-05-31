
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100711dc0(void)

{
  bool bVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long unaff_x19;
  long *unaff_x24;
  long *unaff_x28;
  long unaff_x29;
  long in_xzr;
  byte bVar10;
  undefined8 uVar11;
  undefined1 auVar12 [12];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  ulong in_stack_00000038;
  undefined *in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  long in_stack_000000a8;
  undefined *in_stack_000000b0;
  undefined *in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 *in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 *in_stack_000000d8;
  long in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 *in_stack_000000f0;
  long in_stack_000000f8;
  
  __ZN3std2io5stdio7_eprint17heb74b67280cb307dE
            (s_E_tracing_subscriber__Unable_to_f_108ac52c2,unaff_x29 + -0x90);
  if (in_stack_000000e0 != 0) {
    _free(in_stack_000000e8);
  }
  bVar3 = *(byte *)(in_stack_00000030 + 9);
  if ((*(char *)(in_stack_00000030 + 8) == '\x01') && ((bVar3 >> 3 & 1) != 0)) {
    if (unaff_x24[5] != 0) {
      lVar6 = 0;
      lVar2 = unaff_x24[2];
      uVar4 = unaff_x24[3];
      uVar8 = uVar4 & 0x91f949a1459174a4;
      uVar11 = *(undefined8 *)(lVar2 + uVar8);
      uVar5 = CONCAT17(-((char)((ulong)uVar11 >> 0x38) == 'H'),
                       CONCAT16(-((char)((ulong)uVar11 >> 0x30) == 'H'),
                                CONCAT15(-((char)((ulong)uVar11 >> 0x28) == 'H'),
                                         CONCAT14(-((char)((ulong)uVar11 >> 0x20) == 'H'),
                                                  CONCAT13(-((char)((ulong)uVar11 >> 0x18) == 'H'),
                                                           CONCAT12(-((char)((ulong)uVar11 >> 0x10)
                                                                     == 'H'),CONCAT11(-((char)((
                                                  ulong)uVar11 >> 8) == 'H'),-((char)uVar11 == 'H'))
                                                  )))))) & 0x8080808080808080;
      while( true ) {
        while (uVar5 == 0) {
          bVar10 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar11 >> 0x38) == -1),
                                       CONCAT16(-((char)((ulong)uVar11 >> 0x30) == -1),
                                                CONCAT15(-((char)((ulong)uVar11 >> 0x28) == -1),
                                                         CONCAT14(-((char)((ulong)uVar11 >> 0x20) ==
                                                                   -1),CONCAT13(-((char)((ulong)
                                                  uVar11 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar11 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar11 >> 8) ==
                                                                     -1),-((char)uVar11 == -1)))))))
                                      ),1);
          if ((bVar10 & 1) != 0) goto LAB_100711f10;
          lVar6 = lVar6 + 8;
          uVar8 = uVar8 + lVar6 & uVar4;
          uVar11 = *(undefined8 *)(lVar2 + uVar8);
          uVar5 = CONCAT17(-((char)((ulong)uVar11 >> 0x38) == 'H'),
                           CONCAT16(-((char)((ulong)uVar11 >> 0x30) == 'H'),
                                    CONCAT15(-((char)((ulong)uVar11 >> 0x28) == 'H'),
                                             CONCAT14(-((char)((ulong)uVar11 >> 0x20) == 'H'),
                                                      CONCAT13(-((char)((ulong)uVar11 >> 0x18) ==
                                                                'H'),CONCAT12(-((char)((ulong)uVar11
                                                                                      >> 0x10) ==
                                                                               'H'),CONCAT11(-((char
                                                  )((ulong)uVar11 >> 8) == 'H'),
                                                  -((char)uVar11 == 'H')))))))) & 0x8080808080808080
          ;
        }
        uVar7 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar8 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar4;
        plVar9 = (long *)(lVar2 + -0x20 + uVar7 * -0x20);
        if (plVar9[1] == -0x6e06b65eba6e8b5c && *plVar9 == 0x4ae42cf8481b71fa) break;
        uVar5 = uVar5 - 1 & uVar5;
      }
      lVar2 = lVar2 + uVar7 * -0x20;
      (**(code **)(*(long *)(lVar2 + -8) + 0x18))(unaff_x29 + -0x90,*(undefined8 *)(lVar2 + -0x10));
      if (*(long *)(unaff_x29 + -0x88) == -0x6e06b65eba6e8b5c &&
          *(long *)(unaff_x29 + -0x90) == 0x4ae42cf8481b71fa) goto LAB_100711f30;
    }
LAB_100711f10:
    auVar12 = func_0x000106032954(8);
    *(undefined8 *)(unaff_x29 + -0x90) = 0;
    *(undefined8 *)(unaff_x29 + -0x88) = 0;
    *(int *)(unaff_x29 + -0x70) = auVar12._8_4_;
    *(undefined8 *)(unaff_x29 + -0x80) = 0;
    *(long *)(unaff_x29 + -0x78) = auVar12._0_8_;
    FUN_100a8b728();
  }
LAB_100711f30:
  if ((bVar3 & 1) == 0) {
    if ((((in_stack_00000038 & 0x100000000) == 0) &&
        ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
         0x7fffffffffffffff) != 0)) && (uVar5 = FUN_107c05e34(), (uVar5 & 1) == 0)) {
      *(undefined1 *)(unaff_x24 + 1) = 1;
    }
    if (*unaff_x24 != 1) goto LAB_10071218c;
    *unaff_x24 = in_xzr;
    goto LAB_100711f5c;
  }
  in_stack_000000f8 = *unaff_x28;
  in_stack_00000088 = &UNK_10b212cf0;
  in_stack_00000090 = 1;
  in_stack_000000a0 = *(undefined8 *)(in_stack_000000f8 + 0x48);
  in_stack_00000098 = *(undefined8 *)(in_stack_000000f8 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x58) = 1;
  *(undefined **)(unaff_x19 + 0x50) = &UNK_10b212cf0;
  *(undefined8 *)(unaff_x19 + 0x68) = in_stack_000000a0;
  *(undefined8 *)(unaff_x19 + 0x60) = in_stack_00000098;
  *(undefined8 *)(unaff_x29 + -0x70) = 0;
  in_stack_000000a8 = unaff_x29 + -0x90;
  in_stack_000000b0 = &UNK_10b21f3a8;
  in_stack_000000b8 = &UNK_10b216f28;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = &stack0x000000a8;
  in_stack_000000d0 = 1;
  in_stack_000000d8 = &stack0x00000088;
  in_stack_000000f0 = &stack0x000000c0;
  in_stack_000000e0 = 2;
  in_stack_000000e8 = in_stack_00000018;
  if ((((in_stack_00000038 & 0x100000000) == 0) &&
      ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
       0x7fffffffffffffff) != 0)) && (uVar5 = FUN_107c05e34(), (uVar5 & 1) == 0)) {
    *(undefined1 *)(unaff_x24 + 1) = 1;
  }
  if (*unaff_x24 == 1) {
    *unaff_x24 = in_xzr;
  }
  else {
    __ZN3std3sys4sync6rwlock5queue6RwLock16unlock_contended17h5028e77bc6335836E();
  }
  uVar5 = unaff_x28[10];
  do {
    while( true ) {
      if ((uVar5 & 3) == 2) {
        do {
          *(undefined8 *)(unaff_x29 + -0x98) = 2;
          *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0x98;
          *(undefined **)(unaff_x29 + -0xb0) =
               &
               __ZN4core3fmt3num53__LT_impl_u20_core__fmt__Binary_u20_for_u20_usize_GT_3fmt17hb54e0e9a7f0c0768E
          ;
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                    (&UNK_108cd640b,unaff_x29 + -0xb8,&UNK_10b24e120);
LAB_10071218c:
          __ZN3std3sys4sync6rwlock5queue6RwLock16unlock_contended17h5028e77bc6335836E();
LAB_100711f5c:
          uVar5 = unaff_x28[10];
          while ((uVar5 & 3) != 2) {
            uVar4 = uVar5 >> 2;
            if (((uVar5 & 3) == 1) && ((uVar4 & 0x1ffffffffffff) == 1)) {
              uVar8 = uVar5 & 0xfff8000000000000;
              uVar4 = unaff_x28[10];
              bVar1 = uVar4 == uVar5;
              uVar5 = uVar4;
              if (bVar1) {
                unaff_x28[10] = uVar8 | 3;
                FUN_10074fd94(in_stack_00000008,in_stack_00000010);
                return;
              }
            }
            else {
              uVar7 = uVar5 & 0xfff8000000000003;
              uVar8 = unaff_x28[10];
              bVar1 = uVar8 == uVar5;
              uVar5 = uVar8;
              if (bVar1) {
                unaff_x28[10] = (uVar4 & 0xc001ffffffffffff) * 4 - 4 | uVar7;
                return;
              }
            }
          }
          *(undefined8 *)(unaff_x29 + -0xb8) = 2;
          *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0xb8;
          *(undefined **)(unaff_x29 + -0x88) =
               &
               __ZN4core3fmt3num53__LT_impl_u20_core__fmt__Binary_u20_for_u20_usize_GT_3fmt17hb54e0e9a7f0c0768E
          ;
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                    (&UNK_108cd640b,unaff_x29 + -0x90,&UNK_10b24e120);
        } while( true );
      }
      uVar4 = uVar5 >> 2;
      if (((uVar5 & 3) == 1) && ((uVar4 & 0x1ffffffffffff) == 1)) break;
      uVar7 = uVar5 & 0xfff8000000000003;
      uVar8 = unaff_x28[10];
      bVar1 = uVar8 == uVar5;
      uVar5 = uVar8;
      if (bVar1) {
        unaff_x28[10] = (uVar4 & 0xc001ffffffffffff) * 4 - 4 | uVar7;
LAB_1007120ec:
        *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_00000028;
        *(long **)(unaff_x29 + -0x98) = &stack0x000000e0;
        *(long *)(unaff_x29 + -0xc0) = in_stack_00000030;
        *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0xc0;
        *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0x98;
        *(undefined8 *)(unaff_x29 + -0xa8) = in_stack_00000020;
        FUN_100c39e04(unaff_x29 + -0xb8);
        return;
      }
    }
    uVar8 = uVar5 & 0xfff8000000000000;
    uVar4 = unaff_x28[10];
    bVar1 = uVar4 != uVar5;
    uVar5 = uVar4;
  } while (bVar1);
  unaff_x28[10] = uVar8 | 3;
  FUN_10074fd94(in_stack_00000008,in_stack_00000010);
  goto LAB_1007120ec;
}

