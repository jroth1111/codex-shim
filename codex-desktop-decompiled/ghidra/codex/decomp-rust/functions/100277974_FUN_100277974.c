
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100277974(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  char cVar4;
  code *pcVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x19;
  long *plVar15;
  bool bVar16;
  long unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar17;
  undefined8 uVar18;
  byte bVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  long *in_stack_00000128;
  long *in_stack_000001b0;
  long *in_stack_000001b8;
  long *in_stack_000001c0;
  long *plVar22;
  uint7 in_stack_00000521;
  
  *(char **)(unaff_x29 + -0xc0) = s__added_proxy_authentication_head_108ab9452;
  *(undefined1 **)(unaff_x29 + -0xb8) = &stack0x00000650;
  FUN_1002833b4(&stack0x00000320);
  FUN_1002c2004(&stack0x000001b0);
  __ZN10hyper_util6client6legacy7connect7capture17CaptureConnection3new17h2fb0c2ee0d741d53E
            (&stack0x000001b0);
  plVar1 = in_stack_000001c0;
  plVar22 = in_stack_000001b8;
  plVar15 = in_stack_000001b0;
  if (in_stack_00000128 == (long *)0x0) {
    plVar8 = (long *)_malloc(0x20);
    if (plVar8 == (long *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x20);
      goto LAB_100277c98;
    }
    plVar8[1] = 0;
    *plVar8 = (long)&UNK_108c56c70;
    plVar8[3] = 0;
    plVar8[2] = 0;
    in_stack_00000128 = plVar8;
  }
  plVar8 = in_stack_00000128;
  in_stack_000001b0 = plVar15;
  puVar9 = (undefined8 *)_malloc(8);
  if (puVar9 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
  }
  else {
    *puVar9 = plVar15;
    auVar21 = FUN_1002e3cd4(plVar8,&UNK_108c73d00,puVar9,&UNK_10b1f5520);
    if (auVar21._0_8_ != 0) {
      auVar21 = (**(code **)(auVar21._8_8_ + 0x38))();
      puVar12 = auVar21._8_8_;
      puVar10 = auVar21._0_8_;
      (*(code *)puVar12[3])(&stack0x000001b0);
      puVar9 = puVar10;
      if (in_stack_000001b0 != (long *)0xea34b107c7d0151b ||
          in_stack_000001b8 != (long *)0xc1e65a221768bfdf) {
        puVar9 = (undefined8 *)0x0;
        if ((code *)*puVar12 != (code *)0x0) {
          (*(code *)*puVar12)(puVar10);
        }
        if (puVar12[1] != 0) {
          _free(puVar10);
        }
      }
      if (puVar9 != (undefined8 *)0x0) {
        unaff_x19 = (long *)*puVar10;
        _free(puVar9);
        lVar6 = *unaff_x19;
        *unaff_x19 = lVar6 + -1;
        LORelease();
        in_stack_000001b0 = unaff_x19;
        if (lVar6 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hd248bcb6bb73e554E(&stack0x000001b0);
        }
      }
    }
    if ((in_stack_00000128 != (long *)0x0) && (in_stack_00000128[3] != 0)) {
      lVar6 = 0;
      lVar2 = *in_stack_00000128;
      uVar3 = in_stack_00000128[1];
      unaff_x19 = (long *)0xad7bc5d21d04b935;
      plVar15 = (long *)0x74232b3c8c118151;
      uVar13 = uVar3 & 0xad7bc5d21d04b935;
      uVar20 = *(undefined8 *)(lVar2 + uVar13);
      uVar11 = CONCAT17(-((char)((ulong)uVar20 >> 0x38) == 'V'),
                        CONCAT16(-((char)((ulong)uVar20 >> 0x30) == 'V'),
                                 CONCAT15(-((char)((ulong)uVar20 >> 0x28) == 'V'),
                                          CONCAT14(-((char)((ulong)uVar20 >> 0x20) == 'V'),
                                                   CONCAT13(-((char)((ulong)uVar20 >> 0x18) == 'V'),
                                                            CONCAT12(-((char)((ulong)uVar20 >> 0x10)
                                                                      == 'V'),CONCAT11(-((char)((
                                                  ulong)uVar20 >> 8) == 'V'),-((char)uVar20 == 'V'))
                                                  )))))) & 0x8080808080808080;
      while( true ) {
        for (; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
          uVar14 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
          uVar14 = uVar13 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3) & uVar3;
          plVar8 = (long *)(lVar2 + -0x20 + uVar14 * -0x20);
          if (plVar8[1] == -0x52843a2de2fb46cb && *plVar8 == 0x74232b3c8c118151) {
            lVar2 = lVar2 + uVar14 * -0x20;
            auVar21 = (**(code **)(*(long *)(lVar2 + -8) + 0x28))(*(undefined8 *)(lVar2 + -0x10));
            (**(code **)(auVar21._8_8_ + 0x18))(&stack0x000001b0);
            bVar16 = true;
            if ((auVar21._0_8_ == (undefined8 *)0x0) ||
               (in_stack_000001b8 != (long *)0xad7bc5d21d04b935 ||
                in_stack_000001b0 != (long *)0x74232b3c8c118151)) goto LAB_1002773c0;
            plVar15 = (long *)*auVar21._0_8_;
            in_stack_000001b8 = plVar1;
            in_stack_000001b0 = plVar22;
            puVar9 = (undefined8 *)_malloc(0x10);
            if (puVar9 == (undefined8 *)0x0) {
              __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x10);
              goto LAB_100277c98;
            }
            *puVar9 = plVar22;
            puVar9[1] = plVar1;
            plVar1 = plVar15 + 2;
            if (plVar15[2] == 0) {
              thunk_FUN_1087d4f48(plVar1);
            }
            iVar7 = _pthread_mutex_lock();
            if (iVar7 != 0) {
              thunk_FUN_108a81ad4();
              goto LAB_100277c98;
            }
            unaff_x19 = (long *)&
                                __ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE
            ;
            if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
                0x7fffffffffffffff) == 0) {
              bVar19 = 0;
              cVar4 = (char)plVar15[3];
            }
            else {
              bVar19 = FUN_107c05e34();
              bVar19 = bVar19 ^ 1;
              cVar4 = (char)plVar15[3];
            }
            if (cVar4 != '\0') {
              uVar11 = (ulong)in_stack_000001b8 >> 8;
              in_stack_000001b8 = (long *)CONCAT71((int7)uVar11,bVar19);
              in_stack_000001b0 = plVar1;
              FUN_107c05cb4(&UNK_108c7587c,0x2b,&stack0x000001b0,&UNK_10b1f5808,&UNK_10b1f47b0);
              goto LAB_100277c98;
            }
            lVar6 = plVar15[4];
            if (lVar6 != 0) {
              unaff_x26 = (undefined8 *)plVar15[5];
              if ((code *)*unaff_x26 != (code *)0x0) {
                (*(code *)*unaff_x26)(lVar6);
              }
              if (unaff_x26[1] != 0) {
                _free(lVar6);
              }
            }
            plVar15[4] = (long)puVar9;
            plVar15[5] = (long)&UNK_10b1f47c8;
            if ((((bVar19 & 1) == 0) &&
                ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
                 0x7fffffffffffffff) != 0)) && (uVar11 = FUN_107c05e34(), (uVar11 & 1) == 0)) {
              *(char *)(plVar15 + 3) = '\x01';
            }
            _pthread_mutex_unlock(*plVar1);
            bVar16 = false;
            goto LAB_1002773c0;
          }
        }
        bVar19 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar20 >> 0x38) == -1),
                                     CONCAT16(-((char)((ulong)uVar20 >> 0x30) == -1),
                                              CONCAT15(-((char)((ulong)uVar20 >> 0x28) == -1),
                                                       CONCAT14(-((char)((ulong)uVar20 >> 0x20) ==
                                                                 -1),CONCAT13(-((char)((ulong)uVar20
                                                                                      >> 0x18) == -1
                                                                               ),CONCAT12(-((char)((
                                                  ulong)uVar20 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar20 >> 8) == -1),
                                                           -((char)uVar20 == -1)))))))),1);
        if ((bVar19 & 1) != 0) break;
        lVar6 = lVar6 + 8;
        uVar13 = uVar13 + lVar6 & uVar3;
        uVar20 = *(undefined8 *)(lVar2 + uVar13);
        uVar11 = CONCAT17(-((char)((ulong)uVar20 >> 0x38) == 'V'),
                          CONCAT16(-((char)((ulong)uVar20 >> 0x30) == 'V'),
                                   CONCAT15(-((char)((ulong)uVar20 >> 0x28) == 'V'),
                                            CONCAT14(-((char)((ulong)uVar20 >> 0x20) == 'V'),
                                                     CONCAT13(-((char)((ulong)uVar20 >> 0x18) == 'V'
                                                               ),CONCAT12(-((char)((ulong)uVar20 >>
                                                                                  0x10) == 'V'),
                                                                          CONCAT11(-((char)((ulong)
                                                  uVar20 >> 8) == 'V'),-((char)uVar20 == 'V'))))))))
                 & 0x8080808080808080;
      }
    }
    bVar16 = true;
LAB_1002773c0:
    FUN_1002dfe98(&stack0x000004a0);
    iVar7 = *(int *)(unaff_x28 + 0x168);
    if (iVar7 != 1000000000) {
      unaff_x19 = *(long **)(unaff_x28 + 0x150);
      unaff_x26 = *(undefined8 **)(unaff_x28 + 0x158);
      lVar6 = *unaff_x19;
      *unaff_x19 = lVar6 + 1;
      if (lVar6 < 0) goto LAB_100277c98;
      plVar15 = *(long **)(unaff_x28 + 0x160);
    }
    _memcpy(&stack0x000001b0,&stack0x000004a0,0x150);
    _memcpy(&stack0x00000320,&stack0x00000058,0x158);
    if (iVar7 == 1000000000) {
      _memcpy(&stack0x000004a0,&stack0x00000058,0x158);
      FUN_10027be6c(&stack0x000001b0,&stack0x000004a0);
    }
    else {
      (*(code *)unaff_x26[4])
                ((char *)((long)unaff_x19 + (unaff_x26[2] - 1 & 0xfffffffffffffff0) + 0x10),plVar15,
                 iVar7);
      _memcpy(&stack0x000004a0,&stack0x00000320,0x158);
      FUN_10027be6c(&stack0x000001b0,&stack0x000004a0);
    }
    puVar9 = (undefined8 *)_malloc(0x88);
    if (puVar9 != (undefined8 *)0x0) {
      uVar20 = *(undefined8 *)(unaff_x25 + 0x1e0);
      uVar18 = *(undefined8 *)(unaff_x25 + 0x1f8);
      uVar17 = *(undefined8 *)(unaff_x25 + 0x1f0);
      puVar9[0xd] = *(undefined8 *)(unaff_x25 + 0x1e8);
      puVar9[0xc] = uVar20;
      puVar9[0xf] = uVar18;
      puVar9[0xe] = uVar17;
      puVar9[0x10] = (ulong)in_stack_00000521 << 8;
      uVar20 = *(undefined8 *)(unaff_x25 + 0x1a0);
      uVar18 = *(undefined8 *)(unaff_x25 + 0x1b8);
      uVar17 = *(undefined8 *)(unaff_x25 + 0x1b0);
      puVar9[5] = *(undefined8 *)(unaff_x25 + 0x1a8);
      puVar9[4] = uVar20;
      puVar9[7] = uVar18;
      puVar9[6] = uVar17;
      uVar18 = *(undefined8 *)(unaff_x25 + 0x1c0);
      uVar17 = *(undefined8 *)(unaff_x25 + 0x1d8);
      uVar20 = *(undefined8 *)(unaff_x25 + 0x1d0);
      puVar9[9] = *(undefined8 *)(unaff_x25 + 0x1c8);
      puVar9[8] = uVar18;
      puVar9[0xb] = uVar17;
      puVar9[10] = uVar20;
      uVar18 = *(undefined8 *)(unaff_x25 + 0x180);
      uVar17 = *(undefined8 *)(unaff_x25 + 0x198);
      uVar20 = *(undefined8 *)(unaff_x25 + 400);
      puVar9[1] = *(undefined8 *)(unaff_x25 + 0x188);
      *puVar9 = uVar18;
      puVar9[3] = uVar17;
      puVar9[2] = uVar20;
      *unaff_x27 = 5;
      unaff_x27[1] = puVar9;
      unaff_x27[2] = &UNK_10b1f3d08;
      FUN_1002bc2c8(&stack0x000001b0);
      uVar20 = extraout_x1;
      if (iVar7 != 1000000000) {
        lVar6 = *unaff_x19;
        *unaff_x19 = lVar6 + -1;
        LORelease();
        if (lVar6 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0b820b89976f4dd0E(&stack0x00000300);
          uVar20 = extraout_x1_00;
        }
      }
      if (bVar16) {
        lVar6 = plVar22[0x2c];
        plVar22[0x2c] = lVar6 + -1;
        if (lVar6 == 1) {
          plVar15 = plVar22 + 0x23;
          if ((char)*plVar15 == '\0') {
            *(char *)plVar15 = '\x01';
          }
          else {
            __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                      (plVar15,uVar20,1000000000);
          }
          in_stack_000001b0 = plVar22 + 0x22;
          in_stack_000001c0 = (long *)*in_stack_000001b0;
          in_stack_000001b8 = plVar15;
          __ZN5tokio4sync6notify11NotifyGuard14notify_waiters17hd8e3750d9b2bdaa3E(&stack0x000001b0);
        }
        lVar6 = *plVar22;
        *plVar22 = lVar6 + -1;
        LORelease();
        if (lVar6 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h80d8a07aa195f0f4E(&stack0x00000650);
        }
      }
      return;
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x88);
  }
LAB_100277c98:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100277c9c);
  (*pcVar5)();
}

