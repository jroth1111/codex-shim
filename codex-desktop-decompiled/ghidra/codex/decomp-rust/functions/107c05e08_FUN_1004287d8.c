
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004287d8(long param_1,long param_2,undefined8 *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  bool bVar3;
  char cVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte bVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong in_xzr;
  byte bVar16;
  undefined8 uVar17;
  undefined1 auStack_498 [8];
  undefined8 uStack_490;
  undefined8 uStack_488;
  ulong uStack_290;
  long lStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  ulong uStack_78;
  ulong uStack_68;
  ulong *puStack_60;
  byte bStack_58;
  
  puVar1 = (ulong *)(param_1 + 0x4b0);
  uVar13 = *(ulong *)(param_1 + 0x4b0);
  do {
    if (((0xffffffffffffffef < uVar13) || (uVar13 == 1)) || (((uint)uVar13 >> 1 & 1) != 0)) {
      FUN_107c05e00(puVar1,0);
      cVar4 = *(char *)(param_1 + 0x4b8);
      goto joined_r0x0001004288d4;
    }
    uVar11 = uVar13 | 1;
    bVar3 = *puVar1 != uVar13;
    uVar13 = *puVar1;
  } while (bVar3);
  *puVar1 = uVar11 + 0x10;
  cVar4 = *(char *)(param_1 + 0x4b8);
joined_r0x0001004288d4:
  if (cVar4 == '\0') {
    if (*(long *)(param_1 + 0x4d8) != 0) {
      lVar7 = *(long *)(*(long *)(param_2 + 0x10) + 0x40);
      uVar11 = FUN_100e8ee98(*(undefined8 *)(param_1 + 0x4e0),*(undefined8 *)(param_1 + 0x4e8),lVar7
                             ,*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x48));
      lVar8 = 0;
      uVar14 = *(ulong *)(param_1 + 0x4c8);
      lVar6 = *(long *)(param_1 + 0x4c0);
      bVar9 = (byte)(uVar11 >> 0x39);
      uVar11 = uVar11 & uVar14;
      uVar17 = *(undefined8 *)(lVar6 + uVar11);
      uVar13 = CONCAT17(-((byte)((ulong)uVar17 >> 0x38) == bVar9),
                        CONCAT16(-((byte)((ulong)uVar17 >> 0x30) == bVar9),
                                 CONCAT15(-((byte)((ulong)uVar17 >> 0x28) == bVar9),
                                          CONCAT14(-((byte)((ulong)uVar17 >> 0x20) == bVar9),
                                                   CONCAT13(-((byte)((ulong)uVar17 >> 0x18) == bVar9
                                                             ),CONCAT12(-((byte)((ulong)uVar17 >>
                                                                                0x10) == bVar9),
                                                                        CONCAT11(-((byte)((ulong)
                                                  uVar17 >> 8) == bVar9),-((byte)uVar17 == bVar9))))
                                                  )))) & 0x8080808080808080;
joined_r0x000100428938:
      while( true ) {
        if (uVar13 == 0) {
          bVar16 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar17 >> 0x38) == -1),
                                       CONCAT16(-((char)((ulong)uVar17 >> 0x30) == -1),
                                                CONCAT15(-((char)((ulong)uVar17 >> 0x28) == -1),
                                                         CONCAT14(-((char)((ulong)uVar17 >> 0x20) ==
                                                                   -1),CONCAT13(-((char)((ulong)
                                                  uVar17 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar17 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar17 >> 8) ==
                                                                     -1),-((char)uVar17 == -1)))))))
                                      ),1);
          if ((bVar16 & 1) == 0) goto code_r0x00010042897c;
          goto LAB_100428b6c;
        }
        uVar15 = (uVar13 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar13 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        uVar15 = uVar11 + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3) & uVar14;
        if (lVar7 == *(long *)(lVar6 + -0x1e8 + uVar15 * -0x1e8)) break;
        uVar13 = uVar13 - 1 & uVar13;
      }
      __ZN18tracing_subscriber6filter3env9directive69MatchSet_LT_tracing_subscriber__filter__env__field__CallsiteMatch_GT_13to_span_match17h960a20e504d16bd4E
                (auStack_498,lVar6 + uVar15 * -0x1e8 + -0x1d8,param_2);
      puVar2 = (ulong *)(param_1 + 0x470);
      LOAcquire();
      uVar13 = *puVar2;
      *puVar2 = uVar13 | 1;
      if ((uVar13 & 1) != 0) {
        FUN_107c05e00(puVar2,1);
      }
      if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
          0x7fffffffffffffff) == 0) {
        bVar9 = 0;
        cVar4 = *(char *)(param_1 + 0x478);
      }
      else {
        bVar9 = FUN_107c05e34();
        bVar9 = bVar9 ^ 1;
        cVar4 = *(char *)(param_1 + 0x478);
      }
      uStack_68 = (ulong)(cVar4 != '\0');
      puStack_60 = puVar2;
      bStack_58 = bVar9;
      if (cVar4 != '\0') {
        if (((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
             0x7fffffffffffffff) != 0) && (iVar10 = FUN_107c05e34(), iVar10 == 0)) {
          if ((((bVar9 & 1) == 0) &&
              ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
               0x7fffffffffffffff) != 0)) && (uVar13 = FUN_107c05e34(), (uVar13 & 1) == 0)) {
            *(undefined1 *)(param_1 + 0x478) = 1;
          }
          if (*puVar2 == 1) {
            *puVar2 = in_xzr;
          }
          else {
            __ZN3std3sys4sync6rwlock5queue6RwLock16unlock_contended17h5028e77bc6335836E(puVar2);
          }
          if (uStack_290 < 9) {
            FUN_100e4765c(&uStack_490);
          }
          else {
            FUN_100e4765c(uStack_488,uStack_490);
            _free(uStack_488);
          }
          uVar13 = *puVar1;
          while( true ) {
            while (((uint)uVar13 >> 1 & 1) == 0) {
              uVar11 = 0;
              if (uVar13 - 0x11 != 0) {
                uVar11 = uVar13 - 0x11 | 1;
              }
              bVar3 = *puVar1 == uVar13;
              uVar13 = *puVar1;
              if (bVar3) {
                *puVar1 = uVar11;
                return;
              }
            }
            if (((uint)uVar13 >> 3 & 1) == 0) break;
            uVar11 = uVar13 & 0xfffffffffffffff6;
            bVar3 = *puVar1 == uVar13;
            uVar13 = *puVar1;
            if (bVar3) {
              *puVar1 = uVar11;
              return;
            }
          }
          goto LAB_100428bd4;
        }
        __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cb6cb1,0xd,&UNK_10b22c788);
        goto LAB_100428c0c;
      }
      FUN_1016e51e8(&lStack_280,param_1 + 0x480,*param_3,auStack_498);
      if (lStack_280 != 2) {
        if (uStack_78 < 9) {
          FUN_100e4765c(&uStack_278);
        }
        else {
          FUN_100e4765c(uStack_270,uStack_278);
          _free(uStack_270);
        }
      }
      if ((((bVar9 & 1) == 0) &&
          ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
           0x7fffffffffffffff) != 0)) && (uVar13 = FUN_107c05e34(), (uVar13 & 1) == 0)) {
        *(undefined1 *)(param_1 + 0x478) = 1;
      }
      if (*puVar2 == 1) {
        *puVar2 = in_xzr;
      }
      else {
        __ZN3std3sys4sync6rwlock5queue6RwLock16unlock_contended17h5028e77bc6335836E(puVar2);
      }
    }
LAB_100428b6c:
    uVar13 = *puVar1;
    do {
      while (((uint)uVar13 >> 1 & 1) != 0) {
        if (((uint)uVar13 >> 3 & 1) == 0) goto LAB_100428bd4;
        uVar11 = uVar13 & 0xfffffffffffffff6;
        bVar3 = *puVar1 == uVar13;
        uVar13 = *puVar1;
        if (bVar3) {
          *puVar1 = uVar11;
          return;
        }
      }
      uVar11 = 0;
      if (uVar13 - 0x11 != 0) {
        uVar11 = uVar13 - 0x11 | 1;
      }
      bVar3 = *puVar1 != uVar13;
      uVar13 = *puVar1;
    } while (bVar3);
    *puVar1 = uVar11;
  }
  else {
    if (((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
         0x7fffffffffffffff) == 0) || (iVar10 = FUN_107c05e34(), iVar10 != 0)) {
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cb6cb1,0xd,&UNK_10b22c7a0);
LAB_100428c0c:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100428c10);
      (*pcVar5)();
    }
    uVar13 = *puVar1;
    do {
      while (((uint)uVar13 >> 1 & 1) != 0) {
        if (((uint)uVar13 >> 3 & 1) == 0) goto LAB_100428bd4;
        uVar11 = uVar13 & 0xfffffffffffffff6;
        bVar3 = *puVar1 == uVar13;
        uVar13 = *puVar1;
        if (bVar3) {
          *puVar1 = uVar11;
          return;
        }
      }
      uVar11 = 0;
      if (uVar13 - 0x11 != 0) {
        uVar11 = uVar13 - 0x11 | 1;
      }
      bVar3 = *puVar1 != uVar13;
      uVar13 = *puVar1;
    } while (bVar3);
    *puVar1 = uVar11;
  }
  return;
code_r0x00010042897c:
  lVar8 = lVar8 + 8;
  uVar11 = uVar11 + lVar8 & uVar14;
  uVar17 = *(undefined8 *)(lVar6 + uVar11);
  uVar13 = CONCAT17(-((byte)((ulong)uVar17 >> 0x38) == bVar9),
                    CONCAT16(-((byte)((ulong)uVar17 >> 0x30) == bVar9),
                             CONCAT15(-((byte)((ulong)uVar17 >> 0x28) == bVar9),
                                      CONCAT14(-((byte)((ulong)uVar17 >> 0x20) == bVar9),
                                               CONCAT13(-((byte)((ulong)uVar17 >> 0x18) == bVar9),
                                                        CONCAT12(-((byte)((ulong)uVar17 >> 0x10) ==
                                                                  bVar9),CONCAT11(-((byte)((ulong)
                                                  uVar17 >> 8) == bVar9),-((byte)uVar17 == bVar9))))
                                              )))) & 0x8080808080808080;
  goto joined_r0x000100428938;
LAB_106032ccc:
  lVar7 = *(long *)(lVar8 + 8);
  plVar12 = *(long **)(lVar8 + 0x18);
  if (plVar12 == (long *)0x0) goto LAB_106032d98;
  lVar6 = *plVar12;
  *plVar12 = lVar6 + 1;
  if (lVar6 < 0) goto LAB_106032da4;
  plVar12 = *(long **)(lVar8 + 0x18);
  *(undefined1 *)(lVar8 + 0x20) = 1;
  lVar8 = plVar12[6];
  *(char *)(plVar12 + 6) = '\x01';
  LORelease();
  if ((char)lVar8 == -1) {
    _dispatch_semaphore_signal(plVar12[5]);
    lVar8 = *plVar12;
    *plVar12 = lVar8 + -1;
    LORelease();
  }
  else {
    lVar8 = *plVar12;
    *plVar12 = lVar8 + -1;
    LORelease();
  }
  if (lVar8 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h52bc04ad50f5b4b2E(&stack0xffffffffffffffc8);
  }
  lVar8 = lVar7;
  if (lVar7 == 0) {
    return;
  }
  goto LAB_106032ccc;
LAB_100428bd4:
  uVar11 = uVar13 & 0xfffffffffffffff0;
  plVar12 = *(long **)(uVar11 + 0x10);
  puVar2 = (ulong *)uVar11;
  while (plVar12 == (long *)0x0) {
    uVar14 = *puVar2;
    *(ulong **)(uVar14 + 8) = puVar2;
    puVar2 = (ulong *)uVar14;
    plVar12 = *(long **)(uVar14 + 0x10);
  }
  *(long **)(uVar11 + 0x10) = plVar12;
  LOAcquire();
  lVar8 = *plVar12;
  *plVar12 = lVar8 + -0x10;
  LORelease();
  if (lVar8 != 0x10) {
    return;
  }
  do {
    while (uVar11 = uVar13 & 0xfffffffffffffffe, ((uint)uVar13 >> 2 & 1) != 0) {
      bVar3 = *puVar1 == uVar13;
      uVar13 = *puVar1;
      if (bVar3) {
        *puVar1 = uVar11;
        return;
      }
    }
    uVar11 = uVar11 + 4;
    bVar3 = *puVar1 != uVar13;
    uVar13 = *puVar1;
  } while (bVar3);
  *puVar1 = uVar11;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar13 = uVar11 & 0xfffffffffffffff0;
          lVar8 = *(long *)(uVar13 + 0x10);
          puVar2 = (ulong *)uVar13;
          while (lVar8 == 0) {
            uVar14 = *puVar2;
            *(ulong **)(uVar14 + 8) = puVar2;
            puVar2 = (ulong *)uVar14;
            lVar8 = *(long *)(uVar14 + 0x10);
          }
          *(long *)(uVar13 + 0x10) = lVar8;
          if ((uVar11 & 9) != 1) break;
          uVar13 = uVar11 & 0xfffffffffffffff3;
          bVar3 = *puVar1 == uVar11;
          uVar11 = *puVar1;
          if (bVar3) {
            *puVar1 = uVar13;
            return;
          }
        }
        if (((uint)uVar11 >> 3 & 1) == 0) break;
        bVar3 = *puVar1 == uVar11;
        uVar11 = *puVar1;
        if (bVar3) {
          *puVar1 = 0x11;
          goto LAB_106032ccc;
        }
      }
      if ((*(char *)(lVar8 + 0x21) == '\x01') && (*(long *)(lVar8 + 8) != 0)) break;
      bVar3 = *puVar1 == uVar11;
      uVar11 = *puVar1;
      if (bVar3) {
        *puVar1 = 0;
        goto LAB_106032ccc;
      }
    }
    *(long *)(uVar13 + 0x10) = *(long *)(lVar8 + 8);
    uVar14 = *puVar1;
    if (uVar14 == uVar11) break;
    *(long *)(uVar13 + 0x10) = lVar8;
    uVar11 = uVar14;
  }
  *puVar1 = uVar11 & 0xfffffffffffffff3;
  plVar12 = *(long **)(lVar8 + 0x18);
  if (plVar12 == (long *)0x0) {
LAB_106032d98:
    func_0x000108a07a20(&UNK_10b4addc8);
  }
  else {
    lVar7 = *plVar12;
    *plVar12 = lVar7 + 1;
    if (-1 < lVar7) {
      plVar12 = *(long **)(lVar8 + 0x18);
      *(undefined1 *)(lVar8 + 0x20) = 1;
      lVar8 = plVar12[6];
      *(char *)(plVar12 + 6) = '\x01';
      LORelease();
      if ((char)lVar8 == -1) {
        _dispatch_semaphore_signal(plVar12[5]);
      }
      lVar8 = *plVar12;
      *plVar12 = lVar8 + -1;
      LORelease();
      if (lVar8 != 1) {
        return;
      }
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h52bc04ad50f5b4b2E(&stack0xffffffffffffffc8);
      return;
    }
  }
LAB_106032da4:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x106032da8);
  (*pcVar5)();
}

