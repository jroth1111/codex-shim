
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd1840(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char *pcVar1;
  ulong *puVar2;
  byte bVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 *puVar9;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined *puVar10;
  char cVar11;
  undefined1 uVar12;
  long *plVar13;
  char cVar14;
  char cVar15;
  long *plVar16;
  long lVar17;
  ulong in_xzr;
  undefined1 auVar18 [16];
  long *plStack_eb8;
  undefined *puStack_eb0;
  long *plStack_ea8;
  undefined1 auStack_ea0 [496];
  ulong uStack_cb0;
  undefined1 auStack_ca8 [504];
  char cStack_a4a;
  char cStack_a49;
  long lStack_a48;
  long lStack_a40;
  long lStack_a38;
  long lStack_a30;
  long lStack_a28;
  long lStack_a20;
  long lStack_a18;
  long lStack_a10;
  long lStack_a08;
  long lStack_a00;
  long lStack_9f8;
  long lStack_9f0;
  long lStack_9e8;
  long lStack_9e0;
  long lStack_9d8;
  long lStack_9d0;
  long lStack_9c8;
  long lStack_9c0;
  long lStack_9b8;
  long lStack_9b0;
  long lStack_9a8;
  long lStack_9a0;
  long lStack_998;
  long lStack_990;
  long lStack_988;
  long lStack_980;
  long lStack_978;
  long lStack_970;
  long lStack_968;
  long lStack_960;
  long lStack_958;
  long lStack_950;
  long lStack_948;
  long lStack_940;
  char cStack_8c2;
  char cStack_8c1;
  long alStack_8c0 [65];
  undefined1 auStack_6b8 [520];
  char cStack_452;
  char cStack_451;
  long alStack_450 [63];
  undefined1 auStack_258 [504];
  
  bVar3 = *(byte *)(param_2 + 2);
  if (bVar3 < 2) {
    if (bVar3 != 0) {
      func_0x000108a07af4(&UNK_10b23a760);
LAB_100fd1b50:
      func_0x000108a07b10(&UNK_10b23a760);
      *(undefined1 *)(param_2 + 2) = 2;
      uVar8 = __Unwind_Resume();
      FUN_100e2cdf0(auStack_258);
      __ZN77__LT_tokio__task__coop__RestoreOnPending_u20_as_u20_core__ops__drop__Drop_GT_4drop17h13c7af1e56643a68E
                (&cStack_452);
      *(undefined1 *)(param_2 + 2) = 2;
      __Unwind_Resume(uVar8);
      auVar18 = func_0x000108a07bc4();
      puVar9 = auVar18._8_8_;
      plVar13 = auVar18._0_8_;
      bVar3 = *(byte *)(puVar9 + 2);
      if (bVar3 < 2) {
        if (bVar3 != 0) {
          func_0x000108a07af4(&UNK_10b23a760);
LAB_100fd1e8c:
          func_0x000108a07b10(&UNK_10b23a760);
          *(undefined1 *)(puVar9 + 2) = 2;
          uVar8 = __Unwind_Resume();
          FUN_100e618cc(auStack_6b8);
          __ZN77__LT_tokio__task__coop__RestoreOnPending_u20_as_u20_core__ops__drop__Drop_GT_4drop17h13c7af1e56643a68E
                    (&cStack_8c2);
          *(undefined1 *)(puVar9 + 2) = 2;
          __Unwind_Resume(uVar8);
          auVar18 = func_0x000108a07bc4();
          puVar9 = auVar18._8_8_;
          plVar13 = auVar18._0_8_;
          bVar3 = *(byte *)(puVar9 + 2);
          if (bVar3 < 2) {
            if (bVar3 != 0) {
              func_0x000108a07af4(&UNK_10b23a760);
LAB_100fd2294:
              func_0x000108a07b10(&UNK_10b23a760);
              *(undefined1 *)(puVar9 + 2) = 2;
              uVar8 = __Unwind_Resume();
              FUN_100e08810(&lStack_9c0);
              __ZN77__LT_tokio__task__coop__RestoreOnPending_u20_as_u20_core__ops__drop__Drop_GT_4drop17h13c7af1e56643a68E
                        (&cStack_a4a);
              *(undefined1 *)(puVar9 + 2) = 2;
              __Unwind_Resume(uVar8);
              auVar18 = func_0x000108a07bc4();
              puVar9 = auVar18._0_8_;
              lVar17 = *auVar18._8_8_;
              lVar7 = *(long *)(lVar17 + 0x88);
              func_0x000100fc7504(&uStack_cb0,lVar17 + 0x1a0,lVar17 + 0x80);
              uVar6 = uStack_cb0;
              uVar4 = uStack_cb0;
              if (uStack_cb0 == 0x8000000000000044) {
                lVar7 = 2;
LAB_100fd23f0:
                uStack_cb0 = uVar4;
                if (lVar7 != 2) {
                  puVar2 = (ulong *)(lVar17 + 0x110);
                  LOAcquire();
                  uVar6 = *puVar2;
                  *puVar2 = uVar6 | 2;
                  LORelease();
                  if (uVar6 == 0) {
                    lVar7 = *(long *)(lVar17 + 0x100);
                    *(undefined8 *)(lVar17 + 0x100) = 0;
                    *puVar2 = in_xzr;
                    LORelease();
                    if (lVar7 != 0) {
                      (**(code **)(lVar7 + 8))(*(undefined8 *)(lVar17 + 0x108));
                    }
                  }
                  plVar13 = (long *)(*pcRam000000010b66cd58)();
                  plVar16 = plVar13;
                  if (((char)plVar13[1] == '\x01') ||
                     (plVar16 = (long *)FUN_108a8ace0(plVar13,0), plVar16 != (long *)0x0)) {
                    plVar16 = (long *)*plVar16;
                    lVar7 = *plVar16;
                    *plVar16 = lVar7 + 1;
                    if (lVar7 < 0) {
LAB_100fd2564:
                    /* WARNING: Does not return */
                      pcVar5 = (code *)SoftwareBreakpoint(1,0x100fd2568);
                      (*pcVar5)();
                    }
                    plStack_eb8 = plVar16 + 2;
                    puStack_eb0 = &UNK_10b4cd870;
                    plStack_ea8 = plStack_eb8;
                    while( true ) {
                      __ZN5tokio4sync4task12atomic_waker11AtomicWaker15register_by_ref17hcd4ebf00ca3cf4d6E
                                (lVar17 + 0x100,&puStack_eb0);
                      lVar7 = *(long *)(lVar17 + 0x88);
                      func_0x000100fc7504(&uStack_cb0,lVar17 + 0x1a0,lVar17 + 0x80);
                      uVar6 = uStack_cb0;
                      if (uStack_cb0 == 0x8000000000000044) break;
                      if (uStack_cb0 == 0x8000000000000045) {
                        uVar6 = 0x8000000000000044;
                        if (lVar7 != *(long *)(lVar17 + 0x1b0)) {
                          uVar6 = 0x8000000000000046;
                        }
                        lVar7 = 0;
                        if (0x8000000000000042 < uVar6) {
                          lVar7 = uVar6 + 0x7fffffffffffffbd;
                        }
                      }
                      else {
                        _memcpy(auStack_ea0,auStack_ca8,0x1f0);
                        lVar7 = 0;
                        if (0x8000000000000042 < uVar6) {
                          lVar7 = uVar6 + 0x7fffffffffffffbd;
                        }
                      }
                      if (lVar7 != 3) goto LAB_100fd25ac;
                      plVar16 = plVar13;
                      if (((char)plVar13[1] != '\x01') &&
                         (plVar16 = (long *)FUN_108a8ace0(plVar13,0), plVar16 == (long *)0x0)) {
                        func_0x000108a07a3c(&UNK_109beb33a,0x2b,&uStack_cb0,&UNK_10b4ccf28,
                                            &UNK_10b4cd858);
                        goto LAB_100fd2564;
                      }
                      FUN_1060ffb40(*plVar16 + 0x10);
                    }
                    uVar6 = 0x8000000000000045;
                    lVar7 = 2;
LAB_100fd25ac:
                    if (lVar7 == 2) {
LAB_100fd25c4:
                      *(undefined1 *)(puVar9 + 1) = 1;
                    }
                    else {
                      if (lVar7 != 1) {
                        uStack_cb0 = uVar6;
                        _memcpy(auStack_ca8,auStack_ea0,0x1f0);
                        plVar13 = (long *)(lVar17 + 0x1c0);
                        uVar8 = extraout_x1_06;
                        if (*(char *)plVar13 != '\0') goto LAB_100fd26a8;
                        *(char *)plVar13 = '\x01';
                        goto LAB_100fd260c;
                      }
                      if ((*(byte *)(lVar17 + 0x1b8) & 1) != 0) goto LAB_100fd25c4;
                      *(undefined1 *)(puVar9 + 1) = 0;
                    }
                    *puVar9 = 0x8000000000000044;
                  }
                  else {
                    func_0x000108a07a3c(&UNK_108cc408f,0x2b,&uStack_cb0,&UNK_10b234f00,
                                        &UNK_10b23a6e8);
                    uVar8 = extraout_x1_07;
LAB_100fd26a8:
                    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                              (plVar13,uVar8,1000000000);
LAB_100fd260c:
                    FUN_1060fa678(plVar13,1,plVar13);
                    _memcpy(puVar9,&uStack_cb0,0x1f8);
                  }
                  FUN_1060ff67c(plStack_eb8);
                  return;
                }
              }
              else {
                if (uStack_cb0 == 0x8000000000000045) {
                  uVar6 = 0x8000000000000044;
                  if (lVar7 != *(long *)(lVar17 + 0x1b0)) {
                    uVar6 = 0x8000000000000046;
                  }
                  lVar7 = 0;
                  if (0x8000000000000042 < uVar6) {
                    lVar7 = uVar6 + 0x7fffffffffffffbd;
                  }
                }
                else {
                  _memcpy(auStack_ea0,auStack_ca8,0x1f0);
                  lVar7 = 0;
                  uVar4 = uStack_cb0;
                  if (0x8000000000000042 < uVar6) {
                    lVar7 = uVar6 + 0x7fffffffffffffbd;
                  }
                }
                uStack_cb0 = uVar6;
                if (1 < lVar7) goto LAB_100fd23f0;
                if (lVar7 == 0) {
                  _memcpy(auStack_ca8,auStack_ea0,0x1f0);
                  pcVar1 = (char *)(lVar17 + 0x1c0);
                  if (*pcVar1 == '\0') {
                    *pcVar1 = '\x01';
                  }
                  else {
                    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                              (pcVar1,extraout_x1_05,1000000000);
                  }
                  FUN_1060fa678(pcVar1,1,pcVar1);
                  _memcpy(puVar9,&uStack_cb0,0x1f8);
                  return;
                }
                if ((*(byte *)(lVar17 + 0x1b8) & 1) == 0) {
                  *(undefined1 *)(puVar9 + 1) = 0;
                  goto LAB_100fd25d4;
                }
              }
              *(undefined1 *)(puVar9 + 1) = 1;
LAB_100fd25d4:
              *puVar9 = 0x8000000000000044;
              return;
            }
            plVar16 = (long *)*puVar9;
            puVar9[1] = plVar16;
          }
          else {
            if (bVar3 != 3) goto LAB_100fd2294;
            plVar16 = (long *)puVar9[1];
          }
          lVar7 = (*
                  ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                  )();
          if (*(char *)(lVar7 + 0x48) == '\x01') {
LAB_100fd1f88:
            cVar15 = *(char *)(lVar7 + 0x44);
            cVar14 = *(char *)(lVar7 + 0x45);
            cVar11 = cVar14;
            if (cVar15 == '\x01') {
              if (cVar14 == '\0') {
                FUN_10610bbb4(*param_3,param_3[1]);
                *plVar13 = -0x7ffffffffffffffa;
                uVar12 = 3;
                goto LAB_100fd2200;
              }
              cVar11 = cVar14 + -1;
            }
            *(char *)(lVar7 + 0x45) = cVar11;
          }
          else {
            if (*(char *)(lVar7 + 0x48) != '\x02') {
              __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                        (lVar7,&DAT_100c35d48);
              *(undefined1 *)(lVar7 + 0x48) = 1;
              goto LAB_100fd1f88;
            }
            cVar15 = '\0';
            cVar14 = '\0';
          }
          lVar17 = *plVar16;
          cStack_a4a = cVar15;
          cStack_a49 = cVar14;
          func_0x000100fc71c0(&lStack_a48,lVar17 + 0x1a0,lVar17 + 0x80);
          if (lStack_a48 == -0x7ffffffffffffffb) {
            if (*(ulong *)(lVar17 + 0x1e8) != *(ulong *)(lVar17 + 0x1e0) >> 1) {
              puVar10 = &UNK_10b23a6d0;
LAB_100fd2260:
              __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc99a2,0x30,puVar10);
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100fd2274);
              (*pcVar5)();
            }
LAB_100fd213c:
            *plVar13 = -0x7ffffffffffffffb;
          }
          else if (lStack_a48 == -0x7ffffffffffffffa) {
            __ZN5tokio4sync4task12atomic_waker11AtomicWaker15register_by_ref17hcd4ebf00ca3cf4d6E
                      (lVar17 + 0x100,param_3);
            func_0x000100fc71c0(&lStack_a48,lVar17 + 0x1a0,lVar17 + 0x80);
            if (lStack_a48 == -0x7ffffffffffffffb) {
              if (*(ulong *)(lVar17 + 0x1e8) != *(ulong *)(lVar17 + 0x1e0) >> 1) {
                puVar10 = &UNK_10b23a6b8;
                goto LAB_100fd2260;
              }
              goto LAB_100fd213c;
            }
            if (lStack_a48 != -0x7ffffffffffffffa) {
              lStack_968 = lStack_9f0;
              lStack_970 = lStack_9f8;
              lStack_958 = lStack_9e0;
              lStack_960 = lStack_9e8;
              lStack_948 = lStack_9d0;
              lStack_950 = lStack_9d8;
              lStack_9a8 = lStack_a30;
              lStack_9b0 = lStack_a38;
              lStack_998 = lStack_a20;
              lStack_9a0 = lStack_a28;
              lStack_988 = lStack_a10;
              lStack_990 = lStack_a18;
              lStack_978 = lStack_a00;
              lStack_980 = lStack_a08;
              lStack_940 = lStack_9c8;
              lStack_9b8 = lStack_a40;
              lStack_9c0 = lStack_a48;
              pcVar1 = (char *)(lVar17 + 0x1c0);
              if (*pcVar1 == '\0') {
                *pcVar1 = '\x01';
              }
              else {
                __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                          (pcVar1,extraout_x1_04,1000000000);
              }
              FUN_1060fa678(pcVar1,1,pcVar1);
              goto LAB_100fd21b4;
            }
            if ((*(char *)(lVar17 + 0x1b8) == '\x01') &&
               (*(ulong *)(lVar17 + 0x1e8) == *(ulong *)(lVar17 + 0x1e0) >> 1)) goto LAB_100fd213c;
            *plVar13 = -0x7ffffffffffffffa;
            if (cVar15 != '\0') {
              if (*(char *)(lVar7 + 0x48) != '\x01') {
                if (*(char *)(lVar7 + 0x48) == '\x02') goto LAB_100fd21ec;
                __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                          (lVar7,&DAT_1060edbcc);
                *(undefined1 *)(lVar7 + 0x48) = 1;
              }
              *(undefined1 *)(lVar7 + 0x44) = 1;
              *(char *)(lVar7 + 0x45) = cVar14;
            }
          }
          else {
            lStack_968 = lStack_9f0;
            lStack_970 = lStack_9f8;
            lStack_958 = lStack_9e0;
            lStack_960 = lStack_9e8;
            lStack_948 = lStack_9d0;
            lStack_950 = lStack_9d8;
            lStack_9a8 = lStack_a30;
            lStack_9b0 = lStack_a38;
            lStack_998 = lStack_a20;
            lStack_9a0 = lStack_a28;
            lStack_988 = lStack_a10;
            lStack_990 = lStack_a18;
            lStack_978 = lStack_a00;
            lStack_980 = lStack_a08;
            lStack_940 = lStack_9c8;
            lStack_9b8 = lStack_a40;
            lStack_9c0 = lStack_a48;
            pcVar1 = (char *)(lVar17 + 0x1c0);
            if (*pcVar1 == '\0') {
              *pcVar1 = '\x01';
            }
            else {
              __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                        (pcVar1,extraout_x1_03,1000000000);
            }
            FUN_1060fa678(pcVar1,1,pcVar1);
LAB_100fd21b4:
            plVar13[0xd] = lStack_9e0;
            plVar13[0xc] = lStack_9e8;
            plVar13[0xf] = lStack_9d0;
            plVar13[0xe] = lStack_9d8;
            plVar13[0x10] = lStack_9c8;
            plVar13[5] = lStack_a20;
            plVar13[4] = lStack_a28;
            plVar13[7] = lStack_a10;
            plVar13[6] = lStack_a18;
            plVar13[9] = lStack_a00;
            plVar13[8] = lStack_a08;
            plVar13[0xb] = lStack_9f0;
            plVar13[10] = lStack_9f8;
            plVar13[1] = lStack_a40;
            *plVar13 = lStack_a48;
            plVar13[3] = lStack_a30;
            plVar13[2] = lStack_a38;
          }
LAB_100fd21ec:
          uVar12 = 3;
          if (*plVar13 != -0x7ffffffffffffffa) {
            uVar12 = 1;
          }
LAB_100fd2200:
          *(undefined1 *)(puVar9 + 2) = uVar12;
          return;
        }
        plVar16 = (long *)*puVar9;
        puVar9[1] = plVar16;
      }
      else {
        if (bVar3 != 3) goto LAB_100fd1e8c;
        plVar16 = (long *)puVar9[1];
      }
      lVar7 = (*
              ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
              )();
      if (*(char *)(lVar7 + 0x48) == '\x01') {
LAB_100fd1c4c:
        cVar15 = *(char *)(lVar7 + 0x44);
        cVar14 = *(char *)(lVar7 + 0x45);
        cVar11 = cVar14;
        if (cVar15 == '\x01') {
          if (cVar14 == '\0') {
            FUN_10610bbb4(*param_3,param_3[1]);
            uVar12 = 3;
            *plVar13 = 3;
            goto LAB_100fd1e08;
          }
          cVar11 = cVar14 + -1;
        }
        *(char *)(lVar7 + 0x45) = cVar11;
      }
      else {
        if (*(char *)(lVar7 + 0x48) != '\x02') {
          __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                    (lVar7,&DAT_100c35d48);
          *(undefined1 *)(lVar7 + 0x48) = 1;
          goto LAB_100fd1c4c;
        }
        cVar15 = '\0';
        cVar14 = '\0';
      }
      lVar17 = *plVar16;
      cStack_8c2 = cVar15;
      cStack_8c1 = cVar14;
      func_0x000100fc9b2c(alStack_8c0,lVar17 + 0x1a0,lVar17 + 0x80);
      if (alStack_8c0[0] == 2) {
        if (*(ulong *)(lVar17 + 0x1e8) != *(ulong *)(lVar17 + 0x1e0) >> 1) {
          puVar10 = &UNK_10b23a6d0;
LAB_100fd1e58:
          __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc99a2,0x30,puVar10);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100fd1e6c);
          (*pcVar5)();
        }
LAB_100fd1da4:
        *plVar13 = 2;
      }
      else if (alStack_8c0[0] == 3) {
        __ZN5tokio4sync4task12atomic_waker11AtomicWaker15register_by_ref17hcd4ebf00ca3cf4d6E
                  (lVar17 + 0x100,param_3);
        func_0x000100fc9b2c(alStack_8c0,lVar17 + 0x1a0,lVar17 + 0x80);
        if (alStack_8c0[0] == 2) {
          if (*(ulong *)(lVar17 + 0x1e8) != *(ulong *)(lVar17 + 0x1e0) >> 1) {
            puVar10 = &UNK_10b23a6b8;
            goto LAB_100fd1e58;
          }
          goto LAB_100fd1da4;
        }
        if (alStack_8c0[0] != 3) {
          _memcpy(auStack_6b8,alStack_8c0,0x208);
          pcVar1 = (char *)(lVar17 + 0x1c0);
          if (*pcVar1 == '\0') {
            *pcVar1 = '\x01';
          }
          else {
            __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                      (pcVar1,extraout_x1_02,1000000000);
          }
          FUN_1060fa678(pcVar1,1,pcVar1);
          goto LAB_100fd1de8;
        }
        if ((*(char *)(lVar17 + 0x1b8) == '\x01') &&
           (*(ulong *)(lVar17 + 0x1e8) == *(ulong *)(lVar17 + 0x1e0) >> 1)) goto LAB_100fd1da4;
        *plVar13 = 3;
        if (cVar15 != '\0') {
          if (*(char *)(lVar7 + 0x48) != '\x01') {
            if (*(char *)(lVar7 + 0x48) == '\x02') goto LAB_100fd1df8;
            __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                      (lVar7,&DAT_1060edbcc);
            *(undefined1 *)(lVar7 + 0x48) = 1;
          }
          *(undefined1 *)(lVar7 + 0x44) = 1;
          *(char *)(lVar7 + 0x45) = cVar14;
        }
      }
      else {
        _memcpy(auStack_6b8,alStack_8c0,0x208);
        pcVar1 = (char *)(lVar17 + 0x1c0);
        if (*pcVar1 == '\0') {
          *pcVar1 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar1,extraout_x1_01,1000000000);
        }
        FUN_1060fa678(pcVar1,1,pcVar1);
LAB_100fd1de8:
        _memcpy(plVar13,alStack_8c0,0x208);
      }
LAB_100fd1df8:
      uVar12 = 3;
      if (*plVar13 != 3) {
        uVar12 = 1;
      }
LAB_100fd1e08:
      *(undefined1 *)(puVar9 + 2) = uVar12;
      return;
    }
    plVar13 = (long *)*param_2;
    param_2[1] = plVar13;
  }
  else {
    if (bVar3 != 3) goto LAB_100fd1b50;
    plVar13 = (long *)param_2[1];
  }
  lVar7 = (*
          ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
          )();
  if (*(char *)(lVar7 + 0x48) == '\x01') {
LAB_100fd18e0:
    cVar15 = *(char *)(lVar7 + 0x44);
    cVar14 = *(char *)(lVar7 + 0x45);
    cVar11 = cVar14;
    if (cVar15 == '\x01') {
      if (cVar14 == '\0') {
        FUN_10610bbb4(*param_3,param_3[1]);
        *param_1 = -0x7fffffffffffffbb;
        uVar12 = 3;
        goto LAB_100fd1abc;
      }
      cVar11 = cVar14 + -1;
    }
    *(char *)(lVar7 + 0x45) = cVar11;
  }
  else {
    if (*(char *)(lVar7 + 0x48) != '\x02') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (lVar7,&DAT_100c35d48);
      *(undefined1 *)(lVar7 + 0x48) = 1;
      goto LAB_100fd18e0;
    }
    cVar15 = '\0';
    cVar14 = '\0';
  }
  lVar17 = *plVar13;
  cStack_452 = cVar15;
  cStack_451 = cVar14;
  func_0x000100fc7504(alStack_450,lVar17 + 0x1a0,lVar17 + 0x80);
  if (alStack_450[0] == -0x7fffffffffffffbc) {
    if (*(ulong *)(lVar17 + 0x1e8) != *(ulong *)(lVar17 + 0x1e0) >> 1) {
      puVar10 = &UNK_10b23a6d0;
LAB_100fd1b1c:
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc99a2,0x30,puVar10);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100fd1b30);
      (*pcVar5)();
    }
LAB_100fd1a58:
    *param_1 = -0x7fffffffffffffbc;
  }
  else if (alStack_450[0] == -0x7fffffffffffffbb) {
    __ZN5tokio4sync4task12atomic_waker11AtomicWaker15register_by_ref17hcd4ebf00ca3cf4d6E
              (lVar17 + 0x100,param_3);
    func_0x000100fc7504(alStack_450,lVar17 + 0x1a0,lVar17 + 0x80);
    if (alStack_450[0] == -0x7fffffffffffffbc) {
      if (*(ulong *)(lVar17 + 0x1e8) != *(ulong *)(lVar17 + 0x1e0) >> 1) {
        puVar10 = &UNK_10b23a6b8;
        goto LAB_100fd1b1c;
      }
      goto LAB_100fd1a58;
    }
    if (alStack_450[0] != -0x7fffffffffffffbb) {
      _memcpy(auStack_258,alStack_450,0x1f8);
      pcVar1 = (char *)(lVar17 + 0x1c0);
      if (*pcVar1 == '\0') {
        *pcVar1 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (pcVar1,extraout_x1_00,1000000000);
      }
      FUN_1060fa678(pcVar1,1,pcVar1);
      goto LAB_100fd1a98;
    }
    if ((*(char *)(lVar17 + 0x1b8) == '\x01') &&
       (*(ulong *)(lVar17 + 0x1e8) == *(ulong *)(lVar17 + 0x1e0) >> 1)) goto LAB_100fd1a58;
    *param_1 = -0x7fffffffffffffbb;
    if (cVar15 != '\0') {
      if (*(char *)(lVar7 + 0x48) != '\x01') {
        if (*(char *)(lVar7 + 0x48) == '\x02') goto LAB_100fd1aa8;
        __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                  (lVar7,&DAT_1060edbcc);
        *(undefined1 *)(lVar7 + 0x48) = 1;
      }
      *(undefined1 *)(lVar7 + 0x44) = 1;
      *(char *)(lVar7 + 0x45) = cVar14;
    }
  }
  else {
    _memcpy(auStack_258,alStack_450,0x1f8);
    pcVar1 = (char *)(lVar17 + 0x1c0);
    if (*pcVar1 == '\0') {
      *pcVar1 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                (pcVar1,extraout_x1,1000000000);
    }
    FUN_1060fa678(pcVar1,1,pcVar1);
LAB_100fd1a98:
    _memcpy(param_1,alStack_450,0x1f8);
  }
LAB_100fd1aa8:
  uVar12 = 3;
  if (*param_1 != -0x7fffffffffffffbb) {
    uVar12 = 1;
  }
LAB_100fd1abc:
  *(undefined1 *)(param_2 + 2) = uVar12;
  return;
}

