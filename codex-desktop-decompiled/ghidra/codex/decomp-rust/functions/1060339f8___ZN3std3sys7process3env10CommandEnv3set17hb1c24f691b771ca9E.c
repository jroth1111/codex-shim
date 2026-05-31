
/* WARNING: Possible PIC construction at 0x000106034394: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106034398) */
/* WARNING: Removing unreachable block (ram,0x0001060343c0) */
/* WARNING: Removing unreachable block (ram,0x000106034400) */
/* WARNING: Removing unreachable block (ram,0x00010603440c) */
/* WARNING: Removing unreachable block (ram,0x000106034430) */
/* WARNING: Removing unreachable block (ram,0x000106034438) */
/* WARNING: Removing unreachable block (ram,0x0001060344b4) */
/* WARNING: Removing unreachable block (ram,0x0001060344d4) */
/* WARNING: Removing unreachable block (ram,0x0001060344f4) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * __ZN3std3sys7process3env10CommandEnv3set17hb1c24f691b771ca9E
                 (long param_1,ulong param_2,ulong param_3,undefined8 param_4,long param_5)

{
  char cVar1;
  ushort *puVar2;
  ulong uVar3;
  undefined4 uVar4;
  ulong uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  ulong *puVar18;
  ulong *puVar19;
  undefined8 **ppuVar20;
  undefined8 uVar21;
  int *piVar22;
  uint *puVar23;
  char *pcVar24;
  undefined *puVar25;
  undefined *puVar26;
  ulong uVar27;
  undefined8 *puVar28;
  ulong uVar29;
  long lVar30;
  char *pcVar31;
  long lVar32;
  undefined1 *puVar33;
  uint uVar34;
  long *plVar35;
  long lVar36;
  ulong uVar37;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong uVar38;
  ulong unaff_x28;
  long lVar39;
  undefined1 auVar40 [16];
  long *plStack_330;
  undefined1 uStack_321;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_300;
  undefined8 uStack_2f8;
  code *pcStack_2f0;
  ulong uStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d8;
  undefined1 ***pppuStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2b8;
  undefined8 *puStack_2b0;
  long lStack_2a8;
  uint uStack_29c;
  int iStack_298;
  uint uStack_294;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_270;
  int iStack_268;
  uint uStack_264;
  undefined4 uStack_260;
  uint uStack_25c;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  ulong uStack_230;
  int iStack_228;
  undefined4 uStack_224;
  int aiStack_220 [4];
  undefined1 **ppuStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  char cStack_199;
  long lStack_198;
  undefined8 uStack_190;
  long lStack_188;
  ulong uStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long *plStack_150;
  ulong uStack_140;
  ulong uStack_130;
  int *piStack_128;
  ulong uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  int *piStack_80;
  ulong uStack_70;
  int *piStack_68;
  ulong uStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_3 == 0) {
    piStack_68 = (int *)0x1;
    if (param_5 != 0) goto LAB_1060335b4;
LAB_1060335e4:
    lVar15 = 1;
    uStack_70 = param_3;
    uStack_60 = param_3;
  }
  else {
    uVar29 = param_3;
    uVar21 = param_4;
    piVar14 = (int *)_malloc(param_3);
    if (piVar14 == (int *)0x0) {
      uVar17 = func_0x0001087c9084(1,param_3);
      if (param_3 != 0) {
        _free();
      }
      auVar40 = __Unwind_Resume(uVar17);
      puVar19 = auVar40._0_8_;
      uStack_98 = 0x106033684;
      puStack_a0 = &stack0xfffffffffffffff0;
      if (uVar29 == 0) {
        piVar14 = (int *)0x1;
        bVar7 = (byte)puVar19[3];
        puVar18 = puVar19;
      }
      else {
        uVar27 = uVar29;
        piVar14 = (int *)_malloc(uVar29);
        if (piVar14 == (int *)0x0) {
          uVar17 = func_0x0001087c9084(1,uVar29);
          if (uVar29 != 0) {
            _free(param_1);
          }
          auVar40 = __Unwind_Resume(uVar17);
          lVar15 = auVar40._8_8_;
          piVar14 = auVar40._0_8_;
          uStack_1b8 = 0x1060339f8;
          ppuStack_1c0 = &puStack_a0;
          plVar16 = (long *)FUN_106034a3c(&lStack_2b8);
          if ((*(byte *)(lVar15 + 0xc0) & 1) == 0) {
            plVar16 = (long *)FUN_1060359f0(&uStack_270,lVar15,uVar27,uVar21);
            lVar32 = lStack_2b8;
            if ((int)uStack_270 == 1) {
              puVar26 = (undefined *)CONCAT44(uStack_264,iStack_268);
              goto LAB_106033a68;
            }
            uStack_290 = CONCAT44(uStack_25c,uStack_260);
            uStack_288 = uStack_258;
            uStack_280 = uStack_250;
            uStack_29c = uStack_270._4_4_;
            iStack_298 = iStack_268;
            uStack_294 = uStack_264;
            if (*(int *)(lVar15 + 0x38) == 0 && *(int *)(lVar15 + 0x30) == 0) {
              if (((*(byte *)(lVar15 + 0x79) & 1) != 0) || ((*(byte *)(lVar15 + 0x78) & 1) != 0)) {
                pcVar24 = *(char **)(lVar15 + 0x80);
                lVar36 = *(long *)(lVar15 + 0x88);
                uVar29 = lVar36 - 1;
                if (uVar29 < 0x10) {
                  for (; uVar29 != 0; uVar29 = uVar29 - 1) {
                    if (*pcVar24 == '/') goto LAB_106033b44;
                    pcVar24 = pcVar24 + 1;
                  }
                  goto LAB_106033e50;
                }
                uVar27 = ((ulong)(pcVar24 + 7) & 0xfffffffffffffff8) - (long)pcVar24;
                if (uVar27 == 0) {
LAB_106033c1c:
                  do {
                    uVar37 = *(ulong *)(pcVar24 + uVar27);
                    uVar38 = *(ulong *)((long)(pcVar24 + uVar27) + 8) ^ 0x2f2f2f2f2f2f2f2f;
                    if ((((0x101010101010100 - (uVar37 ^ 0x2f2f2f2f2f2f2f2f) | uVar37) &
                          (0x101010101010100 - uVar38 | uVar38) ^ 0xffffffffffffffff) &
                        0x8080808080808080) != 0) break;
                    uVar27 = uVar27 + 0x10;
                  } while (uVar27 <= lVar36 - 0x11U);
                }
                else {
                  lVar30 = (long)pcVar24 - ((ulong)(pcVar24 + 7) & 0xfffffffffffffff8);
                  pcVar31 = pcVar24;
                  do {
                    if (*pcVar31 == '/') goto LAB_106033b44;
                    bVar10 = lVar30 != -1;
                    lVar30 = lVar30 + 1;
                    pcVar31 = pcVar31 + 1;
                  } while (bVar10);
                  if (uVar27 <= lVar36 - 0x11U) goto LAB_106033c1c;
                }
                lVar36 = uVar29 - uVar27;
                if (lVar36 != 0) {
                  pcVar24 = pcVar24 + uVar27;
                  do {
                    if (*pcVar24 == '/') goto LAB_106033b44;
                    lVar36 = lVar36 + -1;
                    pcVar24 = pcVar24 + 1;
                  } while (lVar36 != 0);
                }
                goto LAB_106033e50;
              }
LAB_106033b44:
              if ((*(long *)(lVar15 + 0x28) != 0 || *(long *)(lVar15 + 0xb0) != 0) ||
                  *(long *)(lVar15 + 0xa0) != 0) goto LAB_106033e50;
              lVar36 = *(long *)(lVar15 + 0x90);
              if (lVar36 == 0) {
                pcVar9 = (code *)0x0;
              }
              else if ((*(char *)(lVar15 + 0xc2) == '\x01') ||
                      (((pcRam000000010b63d150 == (code *)0x0 ||
                        ((pcVar9 = pcRam000000010b63d150, pcRam000000010b63d150 == (code *)0x1 &&
                         (pcVar9 = (code *)_dlsym(0xfffffffffffffffe,
                                                  "posix_spawn_file_actions_addchdir_np"),
                         pcRam000000010b63d150 = pcVar9, pcVar9 == (code *)0x0)))) &&
                       ((pcRam000000010b63d158 == (code *)0x0 ||
                        ((pcVar9 = pcRam000000010b63d158, pcRam000000010b63d158 == (code *)0x1 &&
                         (pcVar9 = (code *)_dlsym(0xfffffffffffffffe,
                                                  "posix_spawn_file_actions_addchdir"),
                         pcRam000000010b63d158 = pcVar9, pcVar9 == (code *)0x0))))))))
              goto LAB_106033e50;
              uVar34 = *(uint *)(lVar15 + 0x40);
              unaff_x28 = (ulong)uVar34;
              uVar4 = *(undefined4 *)(lVar15 + 0x44);
              uVar11 = _posix_spawnattr_init(&uStack_238);
              if (uVar11 != 0) {
LAB_106033c9c:
                pcVar9 = (code *)((ulong)uVar11 << 0x20 | 2);
                goto LAB_106033e64;
              }
              uVar11 = _posix_spawn_file_actions_init(&uStack_230);
              if (uVar11 != 0) {
                _posix_spawnattr_destroy(&uStack_238);
                goto LAB_106033c9c;
              }
              uVar11 = (uint)uStack_290;
              param_2 = uStack_290 & 0xffffffff;
              if ((uint)uStack_290 != 0) {
                uVar12 = _posix_spawn_file_actions_adddup2(&uStack_230,uStack_290._4_4_,0);
                if (uVar12 == 0) goto LAB_106033d10;
LAB_106033e38:
                pcVar9 = (code *)((ulong)uVar12 << 0x20 | 2);
                bVar10 = true;
LAB_106033e3c:
                _posix_spawn_file_actions_destroy(&uStack_230);
                _posix_spawnattr_destroy(&uStack_238);
                if (!bVar10) goto LAB_106033e50;
                goto LAB_106033e64;
              }
LAB_106033d10:
              uVar6 = (uint)uStack_288;
              unaff_x26 = uStack_288 & 0xffffffff;
              if ((uint)uStack_288 != 0) {
                uVar12 = _posix_spawn_file_actions_adddup2(&uStack_230,uStack_288._4_4_,1);
                if (uVar12 != 0) goto LAB_106033e38;
              }
              uVar8 = (uint)uStack_280;
              unaff_x27 = uStack_280 & 0xffffffff;
              if ((uint)uStack_280 != 0) {
                uVar12 = _posix_spawn_file_actions_adddup2(&uStack_230,uStack_280._4_4_,2);
                if (uVar12 != 0) goto LAB_106033e38;
              }
              if ((pcVar9 != (code *)0x0) && (uVar12 = (*pcVar9)(&uStack_230,lVar36), uVar12 != 0))
              goto LAB_106033e38;
              if ((uVar34 & 1) == 0) {
                uVar34 = 0;
              }
              else {
                uVar12 = _posix_spawnattr_setpgroup(&uStack_238,uVar4);
                if (uVar12 != 0) goto LAB_106033e38;
                uVar34 = 2;
              }
              if (cRam000000010b6fde69 == '\0') {
                iVar13 = _sigemptyset(&uStack_270);
                if ((iVar13 == -1) || (iVar13 = _sigaddset(&uStack_270,0xd), iVar13 == -1)) {
                  puVar23 = (uint *)___error();
                  uVar12 = *puVar23;
                }
                else {
                  uVar12 = _posix_spawnattr_setsigdefault(&uStack_238,&uStack_270);
                  if (uVar12 == 0) {
                    uVar34 = uVar34 | 4;
                    bVar7 = *(byte *)(lVar15 + 0xc1);
                    goto joined_r0x000106033dec;
                  }
                }
                goto LAB_106033e38;
              }
              bVar7 = *(byte *)(lVar15 + 0xc1);
joined_r0x000106033dec:
              if ((bVar7 & 1) != 0) {
                bVar10 = false;
                goto LAB_106033e3c;
              }
              uVar12 = _posix_spawnattr_setflags(&uStack_238,uVar34);
              if (uVar12 != 0) goto LAB_106033e38;
              FUN_10602fe90();
              uStack_270 = (ulong *)0x10b6fdea9;
              iStack_268 = 0xb6fdea0;
              uStack_264 = 1;
              if (lVar32 == -0x8000000000000000) {
                ppuVar20 = (undefined8 **)__NSGetEnviron();
              }
              else {
                ppuVar20 = &puStack_2b0;
              }
              aiStack_220[0] = 0;
              iStack_228 = 0;
              uVar12 = _posix_spawnp(aiStack_220,*(undefined8 *)(lVar15 + 0x80),&uStack_230,
                                     &uStack_238,*(undefined8 *)(lVar15 + 8),*ppuVar20);
              iVar13 = iStack_228;
              if (uVar12 != 0) {
                FUN_10603f748(&uStack_270);
                goto LAB_106033e38;
              }
              uVar21 = CONCAT44(aiStack_220[0],uStack_224);
              FUN_10603f748(&uStack_270);
              _posix_spawn_file_actions_destroy(&uStack_230);
              plVar16 = (long *)_posix_spawnattr_destroy(&uStack_238);
              if (iVar13 == 2) goto LAB_106033e50;
              *(ulong *)(piVar14 + 3) = CONCAT44(iStack_298,uStack_29c);
              piVar14[5] = uStack_294;
              *piVar14 = iVar13;
              *(undefined8 *)(piVar14 + 1) = uVar21;
              if (uVar11 < 2) {
                if (uVar6 < 2) goto LAB_106034280;
LAB_1060342d4:
                plVar16 = (long *)_close(uStack_288._4_4_);
                if (1 < uVar8) goto LAB_1060342e4;
                goto LAB_106033a74;
              }
              plVar16 = (long *)_close(uStack_290._4_4_);
              if (1 < uVar6) goto LAB_1060342d4;
LAB_106034280:
              if (uVar8 < 2) goto LAB_106033a74;
LAB_1060342e4:
              plVar16 = (long *)(uStack_280 >> 0x20);
LAB_1060341bc:
              plVar16 = (long *)_close(plVar16);
            }
            else {
LAB_106033e50:
              __ZN3std3sys3pal4unix4pipe9anon_pipe17h94761f21487d12e6E(&uStack_270);
              pcVar9 = (code *)CONCAT44(uStack_264,iStack_268);
              if (((ulong)uStack_270 & 1) == 0) {
                uVar29 = (ulong)uStack_270 >> 0x20;
                FUN_10602fe90();
                uVar21 = _fork();
                uVar27 = ___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE;
                iVar13 = (int)uVar21;
                if (iVar13 != -1) {
                  if (iVar13 != 0) {
                    if (((uint)uRam000000010b6fdea0 >> 1 & 1) == 0) {
                      uVar27 = uRam000000010b6fdea0 - 0x11;
                      uRam000000010b6fdea0 = 0;
                      if (uVar27 != 0) {
                        uRam000000010b6fdea0 = uVar27 | 1;
                      }
                    }
                    else if (((uint)uRam000000010b6fdea0 >> 3 & 1) == 0) {
                      func_0x000108a82590(0x10b6fdea0);
                    }
                    else {
                      uRam000000010b6fdea0 = uRam000000010b6fdea0 & 0xfffffffffffffff6;
                    }
                    _close(pcVar9);
                    iStack_228 = 0;
                    uStack_238 = 0;
                    aiStack_220[0] = iVar13;
                    do {
                      lVar15 = _read(uVar29,&uStack_238,8);
                      if (lVar15 != -1) {
                        if (lVar15 == 0) {
                          bVar10 = false;
                          uStack_270 = (ulong *)CONCAT44(uStack_224,iStack_228);
                          iStack_268 = aiStack_220[0];
                          uStack_264 = uStack_29c;
                          uStack_25c = uStack_294;
                          *(ulong *)(piVar14 + 2) = CONCAT44(uStack_29c,aiStack_220[0]);
                          *(ulong **)piVar14 = uStack_270;
                          *(ulong *)(piVar14 + 4) = CONCAT44(uStack_294,iStack_298);
                          plVar16 = (long *)_close(uVar29);
                          goto joined_r0x00010603410c;
                        }
                        if (lVar15 == 8) {
                          uStack_248 = (ulong)&uStack_238 | 4;
                          uStack_240 = 4;
                          if (uStack_238._4_4_ == 0x58454f4e) {
                            uVar34 = (uint)uStack_238;
                            uStack_230 = uStack_230 & 0xffffffff00000000;
                            goto LAB_106034074;
                          }
                          iStack_268 = 0x603fe04;
                          uStack_264 = 1;
                          uStack_270 = &uStack_238;
                          func_0x000108a85868(0,&UNK_109bd7834,&uStack_248,
                                              s__Validation_on_the_CLOEXEC_pipe_f_108b34a5c,
                                              &uStack_270,&UNK_10b4aded0);
                          goto LAB_106034360;
                        }
                        FUN_106034864(&uStack_270,&iStack_228);
                        if ((int)uStack_270 == 0) {
                          puVar26 = &UNK_10b4adf18;
                          uVar21 = 0x3d;
                          puVar25 = &UNK_109bd64cb;
                          goto LAB_10603435c;
                        }
                        FUN_10603e844(&iStack_268);
                        puVar26 = &UNK_10b4adf00;
                        goto LAB_106034350;
                      }
                      piVar22 = (int *)___error();
                    } while (*piVar22 == 4);
                    uStack_230 = (long)*piVar22 << 0x20 | 2;
                    FUN_106034864(&uStack_270,&iStack_228);
                    if ((int)uStack_270 == 0) {
                      uStack_270 = &uStack_230;
                      iStack_268 = 0x6048f80;
                      uStack_264 = 1;
                      puVar26 = &UNK_10b4adf48;
                      puVar28 = &uStack_270;
                      pcVar24 = s_the_CLOEXEC_pipe_failed__108b34a86;
                    }
                    else {
                      FUN_10603e844(&iStack_268);
                      puVar26 = &UNK_10b4adf30;
                      puVar28 = (undefined8 *)0x4f;
                      pcVar24 = &UNK_109bd64a4;
                    }
                    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(pcVar24,puVar28,puVar26);
                    goto LAB_106034360;
                  }
                  ___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE =
                       ___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE |
                       0x8000000000000000;
                  _close(uVar27,uVar29);
                  plVar16 = (long *)0x0;
                  if (lStack_2b8 != -0x8000000000000000) {
                    plVar16 = &lStack_2b8;
                  }
                  uStack_2d8 = 0x8000000000000000;
                  uStack_2c8 = 0x106034398;
                  uVar34 = (uint)uStack_290;
                  uStack_320 = unaff_x28;
                  uStack_318 = unaff_x27;
                  uStack_310 = unaff_x26;
                  uStack_300 = param_2;
                  uStack_2f8 = uVar21;
                  pcStack_2f0 = pcVar9;
                  uStack_2e8 = uVar29;
                  lStack_2e0 = lVar15;
                  pppuStack_2d0 = &ppuStack_1c0;
                  if ((uint)uStack_290 == 0) {
LAB_10603455c:
                    uVar11 = (uint)uStack_288;
                    if ((uint)uStack_288 == 0) {
LAB_106034590:
                      uVar12 = (uint)uStack_280;
                      if ((uint)uStack_280 == 0) {
LAB_1060345c4:
                        lVar32 = *(long *)(lVar15 + 0xb0);
                        if (lVar32 == 0) {
LAB_1060345e8:
                          if (*(int *)(lVar15 + 0x38) == 1) {
                            iVar13 = _setgid(*(undefined4 *)(lVar15 + 0x3c));
                            if (iVar13 == -1) goto LAB_106034708;
                          }
                          if (*(int *)(lVar15 + 0x30) == 1) {
                            uVar4 = *(undefined4 *)(lVar15 + 0x34);
                            if ((lVar32 == 0) && (iVar13 = _setgroups(0,0), iVar13 == -1)) {
                              puVar23 = (uint *)___error();
                              plVar35 = (long *)((ulong)*puVar23 << 0x20 | 2);
                              plStack_330 = plVar35;
                              if (*puVar23 != 1) goto LAB_106034718;
                              FUN_10603e844(&plStack_330);
                              lVar32 = 0x100000002;
                            }
                            iVar13 = _setuid(uVar4);
                            if (iVar13 == -1) goto LAB_106034708;
                          }
                          if (*(long *)(lVar15 + 0xa0) != 0) {
                            iVar13 = _chroot();
                            if (iVar13 == -1) goto LAB_106034708;
                          }
                          if (*(long *)(lVar15 + 0x90) != 0) {
                            iVar13 = _chdir();
                            if (iVar13 == -1) goto LAB_106034708;
                          }
                          if (*(int *)(lVar15 + 0x40) == 1) {
                            iVar13 = _setpgid(0,*(undefined4 *)(lVar15 + 0x44));
                            if (iVar13 == -1) goto LAB_106034708;
                          }
                          if (*(char *)(lVar15 + 0xc1) == '\x01') {
                            iVar13 = _setsid();
                            if (iVar13 == -1) goto LAB_106034708;
                          }
                          if (cRam000000010b6fde69 == '\0') {
                            lVar36 = _signal(0xd,0);
                            if (lVar36 == -1) goto LAB_106034708;
                          }
                          lVar36 = *(long *)(lVar15 + 0x28) << 4;
                          puVar28 = *(undefined8 **)(lVar15 + 0x20);
                          do {
                            if (lVar36 == 0) {
                              if (plVar16 != (long *)0x0) {
                                plVar35 = (long *)__NSGetEnviron();
                                lVar32 = *plVar35;
                                lVar36 = plVar16[1];
                                plVar35 = (long *)__NSGetEnviron();
                                *plVar35 = lVar36;
                              }
                              _execvp(*(undefined8 *)(lVar15 + 0x80),*(undefined8 *)(lVar15 + 8));
                              puVar23 = (uint *)___error();
                              uVar6 = *puVar23;
                              if (plVar16 != (long *)0x0) {
                                plVar16 = (long *)__NSGetEnviron();
                                *plVar16 = lVar32;
                              }
                              plVar35 = (long *)((ulong)uVar6 << 0x20 | 2);
                              if (1 < uVar34) {
                                _close(uStack_290._4_4_);
                              }
                              uVar29 = uStack_280;
                              if (1 < uVar11) {
                                uStack_288._4_4_ = (undefined4)(uStack_288 >> 0x20);
                                uVar4 = uStack_288._4_4_;
                                _close(uVar4);
                                uVar29 = uStack_280;
                              }
                              goto joined_r0x0001060347e8;
                            }
                            plVar35 = (long *)(**(code **)(puVar28[1] + 0x20))(*puVar28);
                            lVar36 = lVar36 + -0x10;
                            lVar32 = 0;
                            puVar28 = puVar28 + 2;
                          } while (plVar35 == (long *)0x0);
                          goto LAB_106034718;
                        }
                        if (*(ulong *)(lVar15 + 0xb8) >> 0x1f != 0) {
                          func_0x000108a07a3c(&UNK_109bd68f8,0x2b,&uStack_321,&UNK_10b4ae630,
                                              &UNK_10b4adf60);
                    /* WARNING: Does not return */
                          pcVar9 = (code *)SoftwareBreakpoint(1,0x10603483c);
                          (*pcVar9)();
                        }
                        iVar13 = _setgroups(*(ulong *)(lVar15 + 0xb8),lVar32);
                        if (iVar13 != -1) goto LAB_1060345e8;
LAB_106034708:
                        puVar23 = (uint *)___error();
                        uVar29 = (ulong)*puVar23;
                      }
                      else {
                        uVar4 = uStack_280._4_4_;
                        do {
                          iVar13 = _dup2(uVar4,2);
                          if (iVar13 != -1) goto LAB_1060345c4;
                          piVar14 = (int *)___error();
                          uVar29 = (ulong)*piVar14;
                        } while (*piVar14 == 4);
                      }
                    }
                    else {
                      uVar4 = uStack_288._4_4_;
                      do {
                        iVar13 = _dup2(uVar4,1);
                        if (iVar13 != -1) goto LAB_106034590;
                        piVar14 = (int *)___error();
                        uVar29 = (ulong)*piVar14;
                      } while (*piVar14 == 4);
                    }
                  }
                  else {
                    uVar4 = uStack_290._4_4_;
                    do {
                      iVar13 = _dup2(uVar4,0);
                      if (iVar13 != -1) goto LAB_10603455c;
                      piVar14 = (int *)___error();
                      uVar29 = (ulong)*piVar14;
                    } while (*piVar14 == 4);
                  }
                  plVar35 = (long *)(uVar29 << 0x20 | 2);
LAB_106034718:
                  if (uVar34 < 2) {
                    uVar29 = uStack_288;
                  }
                  else {
                    _close(uStack_290._4_4_);
                    uVar29 = uStack_288;
                  }
                  uStack_288 = uVar29;
                  if ((uint)uStack_288 < 2) {
                    uVar29 = uStack_280;
                    uVar12 = (uint)uStack_280;
                  }
                  else {
                    uStack_288._4_4_ = (undefined4)(uVar29 >> 0x20);
                    uVar4 = uStack_288._4_4_;
                    _close(uVar4);
                    uVar29 = uStack_280;
                    uVar12 = (uint)uStack_280;
                  }
joined_r0x0001060347e8:
                  if (1 < uVar12) {
                    uStack_280._4_4_ = (undefined4)(uVar29 >> 0x20);
                    uVar4 = uStack_280._4_4_;
                    uStack_280 = uVar29;
                    _close(uVar4);
                  }
                  return plVar35;
                }
                puVar23 = (uint *)___error();
                *(ulong *)(piVar14 + 2) = (ulong)*puVar23 << 0x20 | 2;
                *piVar14 = 2;
                if (((uint)uRam000000010b6fdea0 >> 1 & 1) == 0) {
                  uVar27 = uRam000000010b6fdea0 - 0x11;
                  uRam000000010b6fdea0 = 0;
                  if (uVar27 != 0) {
                    uRam000000010b6fdea0 = uVar27 | 1;
                  }
                }
                else if (((uint)uRam000000010b6fdea0 >> 3 & 1) == 0) {
                  func_0x000108a82590(0x10b6fdea0);
                }
                else {
                  uRam000000010b6fdea0 = uRam000000010b6fdea0 & 0xfffffffffffffff6;
                }
                _close(pcVar9);
LAB_10603415c:
                bVar10 = true;
                plVar16 = (long *)_close(uVar29);
joined_r0x00010603410c:
                if (1 < (uint)uStack_290) {
                  uStack_290._4_4_ = (undefined4)(uStack_290 >> 0x20);
                  plVar16 = (long *)_close(uStack_290._4_4_);
                  if (1 < (uint)uStack_288) goto LAB_106034124;
LAB_106034180:
                  if ((uint)uStack_280 < 2) goto LAB_10603418c;
LAB_106034138:
                  plVar16 = (long *)_close(uStack_280._4_4_);
                  if (!bVar10) goto LAB_106033a74;
                  goto LAB_106034190;
                }
                if ((uint)uStack_288 < 2) goto LAB_106034180;
LAB_106034124:
                plVar16 = (long *)_close(uStack_288._4_4_);
                if (1 < (uint)uStack_280) goto LAB_106034138;
LAB_10603418c:
                if (bVar10) goto LAB_106034190;
              }
              else {
LAB_106033e64:
                *(code **)(piVar14 + 2) = pcVar9;
                *piVar14 = 2;
                if ((uint)uStack_290 < 2) {
                  if ((uint)uStack_288 < 2) goto LAB_106033e88;
LAB_106033fa4:
                  _close(uStack_288._4_4_);
                  uVar29 = uStack_280;
                }
                else {
                  _close(uStack_290._4_4_);
                  if (1 < (uint)uStack_288) goto LAB_106033fa4;
LAB_106033e88:
                  uVar29 = uStack_280;
                }
                bVar10 = 1 < (uint)uStack_280;
                uStack_280 = uVar29;
                if (bVar10) {
                  uStack_280._4_4_ = (undefined4)(uVar29 >> 0x20);
                  uVar4 = uStack_280._4_4_;
                  _close(uVar4);
                }
LAB_106034190:
                if (uStack_29c != 0xffffffff) {
                  _close();
                }
                if (iStack_298 != -1) {
                  _close();
                }
                plVar16 = (long *)(ulong)uStack_294;
                if (uStack_294 != 0xffffffff) goto LAB_1060341bc;
              }
            }
          }
          else {
            puVar26 = &UNK_10b4adeb8;
LAB_106033a68:
            *(undefined **)(piVar14 + 2) = puVar26;
            *piVar14 = 2;
          }
LAB_106033a74:
          if (lStack_2b8 != -0x8000000000000000) {
            if (lStack_2a8 == 0) {
              __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                        (0,0xffffffffffffffff,0,&UNK_10b4ad618);
LAB_106034360:
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x106034364);
              (*pcVar9)();
            }
            if (lStack_2a8 + -1 != 0) {
              lVar15 = (lStack_2a8 + -1) * 8;
              puVar28 = puStack_2b0;
              do {
                puVar33 = (undefined1 *)*puVar28;
                plVar16 = (long *)_strlen(puVar33);
                *puVar33 = 0;
                if (plVar16 != (long *)0xffffffffffffffff) {
                  plVar16 = (long *)_free(puVar33);
                }
                puVar28 = puVar28 + 1;
                lVar15 = lVar15 + -8;
              } while (lVar15 != 0);
            }
            if (lStack_2b8 != 0) {
              plVar16 = (long *)_free(puStack_2b0);
            }
          }
          return plVar16;
        }
        puVar18 = (ulong *)_memcpy(piVar14,auVar40._8_8_,uVar29);
        if (((uVar29 == 4) && ((*(byte *)((long)puVar19 + 0x19) & 1) == 0)) &&
           (*piVar14 == 0x48544150)) {
          *(undefined1 *)((long)puVar19 + 0x19) = 1;
        }
        bVar7 = (byte)puVar19[3];
      }
      if ((bVar7 & 1) == 0) {
        uStack_180 = 0x8000000000000000;
        uStack_130 = uVar29;
        piStack_128 = piVar14;
        uStack_120 = uVar29;
        puVar19 = (ulong *)FUN_106049f78(&lStack_198,puVar19,&uStack_130,&uStack_180);
        if (-0x7fffffffffffffff < lStack_198 && lStack_198 != 0) {
          puVar19 = (ulong *)_free(uStack_190);
        }
        return (long *)puVar19;
      }
      uVar27 = *puVar19;
      uStack_1a8 = uVar27;
      if (uVar27 != 0) {
        uVar37 = puVar19[1];
        uStack_1b0 = uVar37;
LAB_10603371c:
        uVar38 = (ulong)*(ushort *)(uVar27 + 0x21a);
        lVar36 = uVar38 * 0x18;
        lVar15 = uVar27 + 8;
        lVar32 = 0x43;
        do {
          lVar30 = lVar32;
          if (lVar36 == 0) goto LAB_106033784;
          uVar5 = *(ulong *)(lVar15 + 0x10);
          uVar3 = uVar29;
          if (uVar5 <= uVar29) {
            uVar3 = uVar5;
          }
          puVar18 = (ulong *)_memcmp(piVar14,*(undefined8 *)(lVar15 + 8),uVar3);
          lVar32 = uVar29 - uVar5;
          if ((int)puVar18 != 0) {
            lVar32 = (long)(int)puVar18;
          }
          cVar1 = 0 < lVar32;
          if (lVar32 < 0) {
            cVar1 = -1;
          }
          lVar36 = lVar36 + -0x18;
          lVar15 = lVar15 + 0x18;
          lVar32 = lVar30 + 1;
        } while (cVar1 == '\x01');
        if (cVar1 == '\0') {
          cStack_199 = '\0';
          if (uVar37 == 0) {
            uStack_120 = lVar30 + -0x43;
            piStack_128 = (int *)0x0;
            uStack_130 = uVar27;
            puVar18 = (ulong *)FUN_10604c428(&uStack_180,&uStack_130,&cStack_199);
          }
          else {
            lStack_198 = *(long *)(uVar27 + (lVar30 + 1) * 8);
            while (uVar37 = uVar37 - 1, uVar37 != 0) {
              lStack_198 = *(long *)(lStack_198 + (ulong)*(ushort *)(lStack_198 + 0x21a) * 8 + 0x220
                                    );
            }
            lStack_188 = (ulong)*(ushort *)(lStack_198 + 0x21a) - 1;
            uStack_190 = 0;
            puVar18 = (ulong *)FUN_10604c428(&uStack_180,&lStack_198,&cStack_199);
            if (*(ushort *)((long)plStack_150 + 0x21a) <= uStack_140) {
              do {
                puVar2 = (ushort *)(plStack_150 + 0x43);
                uStack_140 = (ulong)*puVar2;
                plStack_150 = (long *)*plStack_150;
              } while (*(ushort *)((long)plStack_150 + 0x21a) <= *puVar2);
            }
            lVar32 = plStack_150[uStack_140 * 3 + 3];
            lVar36 = plStack_150[uStack_140 * 3 + 2];
            uVar27 = plStack_150[uStack_140 * 3 + 1];
            plStack_150[uStack_140 * 3 + 1] = uStack_180;
            plStack_150[uStack_140 * 3 + 2] = lStack_178;
            plStack_150[uStack_140 * 3 + 3] = lStack_170;
            lVar39 = plStack_150[uStack_140 * 3 + 0x23];
            lVar30 = plStack_150[uStack_140 * 3 + 0x22];
            lVar15 = plStack_150[uStack_140 * 3 + 0x24];
            plStack_150[uStack_140 * 3 + 0x22] = lStack_168;
            plStack_150[uStack_140 * 3 + 0x23] = lStack_160;
            plStack_150[uStack_140 * 3 + 0x24] = lStack_158;
            uStack_180 = uVar27;
            lStack_178 = lVar36;
            lStack_170 = lVar32;
            lStack_168 = lVar30;
            lStack_160 = lVar39;
            lStack_158 = lVar15;
          }
          piStack_128 = (int *)lStack_178;
          uStack_130 = uStack_180;
          lStack_118 = lStack_168;
          uStack_120 = lStack_170;
          lStack_108 = lStack_158;
          lStack_110 = lStack_160;
          puVar19[2] = puVar19[2] - 1;
          if (cStack_199 == '\x01') {
            if (uStack_1b0 == 0) {
              __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bd69c2,0x21,&UNK_10b4ae848);
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x1060339c4);
              (*pcVar9)();
            }
            puVar28 = *(undefined8 **)(uStack_1a8 + 0x220);
            *puVar19 = (ulong)puVar28;
            puVar19[1] = uStack_1b0 - 1;
            *puVar28 = 0;
            puVar18 = (ulong *)_free();
          }
          lVar32 = lStack_110;
          lVar15 = lStack_118;
          if (uStack_130 != 0x8000000000000000) {
            if (uStack_130 != 0) {
              puVar18 = (ulong *)_free(piStack_128);
            }
            if ((-0x7fffffffffffffff < lVar15) && (lVar15 != 0)) {
              puVar18 = (ulong *)_free(lVar32);
            }
          }
        }
        else {
          uVar38 = lVar30 - 0x43;
LAB_106033784:
          if (uVar37 != 0) goto code_r0x000106033788;
        }
      }
      piStack_80 = piVar14;
      if (uVar29 == 0) {
        return (long *)puVar18;
      }
      goto code_r0x000108aa97c4;
    }
    _memcpy(piVar14,param_2,param_3);
    if (((param_3 == 4) && ((*(byte *)(param_1 + 0x19) & 1) == 0)) && (*piVar14 == 0x48544150)) {
      *(undefined1 *)(param_1 + 0x19) = 1;
    }
    piStack_68 = piVar14;
    if (param_5 == 0) goto LAB_1060335e4;
LAB_1060335b4:
    uStack_70 = param_3;
    uStack_60 = param_3;
    lVar15 = _malloc(param_5);
    if (lVar15 == 0) {
      func_0x0001087c9084(1,param_5);
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1060335d4);
      (*pcVar9)();
    }
  }
  _memcpy(lVar15,param_4,param_5);
  lStack_58 = param_5;
  lStack_50 = lVar15;
  lStack_48 = param_5;
  plVar16 = (long *)FUN_106049f78(&lStack_88,param_1,&uStack_70,&lStack_58);
  if (lStack_88 < -0x7ffffffffffffffe || lStack_88 == 0) {
    return plVar16;
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar16 = (long *)(*(code *)PTR__free_10b61b0a8)(piStack_80);
  return plVar16;
  while( true ) {
    puVar23 = (uint *)___error();
    if (*puVar23 != 4) break;
LAB_106034074:
    iVar13 = _waitpid(uVar21,&uStack_230,0);
    if (iVar13 != -1) {
      uVar34 = (uVar34 & 0xff00ff00) >> 8 | (uVar34 & 0xff00ff) << 8;
      *(ulong *)(piVar14 + 2) = (ulong)(uVar34 >> 0x10 | uVar34 << 0x10) << 0x20 | 2;
      *piVar14 = 2;
      goto LAB_10603415c;
    }
  }
  iStack_268 = 2;
  uStack_270 = (ulong *)CONCAT44(uStack_270._4_4_,1);
  uStack_264 = *puVar23;
  FUN_10603e844(&iStack_268);
  puVar26 = &UNK_10b4adee8;
LAB_106034350:
  uVar21 = 0x4f;
  puVar25 = &UNK_109bd64a4;
LAB_10603435c:
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(puVar25,uVar21,puVar26);
  goto LAB_106034360;
code_r0x000106033788:
  uVar27 = *(ulong *)(uVar27 + uVar38 * 8 + 0x220);
  uVar37 = uVar37 - 1;
  goto LAB_10603371c;
}

