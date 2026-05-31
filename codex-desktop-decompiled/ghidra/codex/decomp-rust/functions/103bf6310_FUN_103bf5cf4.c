
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103bf5cf4(long *param_1,long param_2,char param_3,ulong param_4,undefined **param_5)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  byte bVar4;
  ushort uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  code *pcVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  uint uVar14;
  undefined *puVar15;
  undefined8 *extraout_x8;
  ulong *puVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  byte *pbVar22;
  ulong uVar23;
  long unaff_x21;
  undefined8 uVar24;
  undefined *puVar25;
  long *plVar26;
  undefined1 auVar27 [16];
  long *plStack_300;
  ulong uStack_2f8;
  long lStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long *plStack_2c8;
  ulong uStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined1 ***pppuStack_260;
  undefined8 uStack_258;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined1 **ppuStack_1b0;
  undefined8 uStack_1a8;
  byte bStack_191;
  byte *pbStack_190;
  undefined *puStack_188;
  undefined1 *puStack_180;
  undefined8 uStack_178;
  long *plStack_170;
  long lStack_168;
  char **ppcStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  char *pcStack_138;
  char ***pppcStack_130;
  undefined8 uStack_128;
  long lStack_120;
  char **ppcStack_118;
  char ****ppppcStack_110;
  undefined1 **ppuStack_108;
  undefined *puStack_100;
  char ***pppcStack_f8;
  undefined *puStack_f0;
  char *pcStack_e8;
  char ***pppcStack_e0;
  char ***pppcStack_d8;
  undefined *puStack_d0;
  undefined1 *puStack_c8;
  char ***pppcStack_c0;
  undefined *puStack_b8;
  char ***pppcStack_b0;
  undefined *puStack_a8;
  char ***pppcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char *pcStack_70;
  char ****ppppcStack_68;
  char **ppcStack_60;
  char ****ppppcStack_58;
  char ***pppcStack_50;
  undefined *puStack_48;
  
  ppcStack_118 = (char **)CONCAT71(ppcStack_118._1_7_,param_3);
  lVar19 = 0x17c0;
  puVar7 = (undefined8 *)&UNK_10b2eb018;
  do {
    puVar18 = puVar7;
    plStack_170 = param_1;
    lStack_168 = param_2;
    if (lVar19 == 0) {
      pppcStack_c0 = &ppcStack_118;
      puStack_b8 = &DAT_103bfb0ec;
      bStack_191 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                             (s_Binternal_error__entered_unreach_108afdc0d,&pppcStack_c0,
                              &UNK_10b2ec928);
      uStack_178 = 0x103bf607c;
      ppuStack_1b0 = &puStack_180;
      puVar16 = (ulong *)&UNK_10b2eb018;
      lVar19 = 0x17c0;
      while (lVar19 != 0) {
        pbVar22 = (byte *)((long)puVar16 + 0x61);
        puVar16 = puVar16 + 10;
        lVar19 = lVar19 + -0x50;
        if (*pbVar22 == bStack_191) {
          return (long *)*puVar16;
        }
      }
      pbStack_190 = &bStack_191;
      puStack_188 = &DAT_103bfb0ec;
      puVar15 = &UNK_10b2ec928;
      puStack_180 = &stack0xfffffffffffffff0;
      auVar27 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                          (s_Binternal_error__entered_unreach_108afdc0d,&pbStack_190);
      uStack_1a8 = 0x103bf60f0;
      lVar19 = 0;
      lVar17 = *auVar27._0_8_;
      lVar3 = auVar27._0_8_[1];
      do {
        uStack_248 = auVar27._8_8_;
        if (*(long *)(&UNK_10b2eb030 + lVar19) != 4) {
          bVar4 = (&UNK_10b2eb079)[lVar19];
          lVar10 = lVar3;
          lVar20 = lVar17;
          if (lVar17 != 0) {
            do {
              uVar21 = 0xffffffffffffffff;
              pbVar22 = (byte *)(lVar20 + 0xc);
              uVar23 = (ulong)*(ushort *)(lVar20 + 10);
              do {
                uVar6 = (ulong)*(ushort *)(lVar20 + 10);
                if (uVar23 == 0) goto joined_r0x000103bf61a0;
                cVar1 = *pbVar22 < bVar4;
                if (bVar4 < *pbVar22) {
                  cVar1 = -1;
                }
                uVar23 = uVar23 - 1;
                uVar21 = uVar21 + 1;
                pbVar22 = pbVar22 + 1;
              } while (cVar1 == '\x01');
              uVar6 = uVar21;
              if (cVar1 == '\0') {
                if (((&UNK_10b2eb078)[lVar19] & 1) == 0) goto LAB_103bf61c8;
                goto LAB_103bf612c;
              }
joined_r0x000103bf61a0:
              if (lVar10 == 0) break;
              lVar10 = lVar10 + -1;
              lVar20 = *(long *)(lVar20 + uVar6 * 8 + 0x18);
            } while( true );
          }
          if (((&UNK_10b2eb078)[lVar19] & 1) != 0) {
LAB_103bf61c8:
            lVar10 = lVar3;
            lVar20 = lVar17;
            if (lVar17 != 0) {
              do {
                uVar21 = 0xffffffffffffffff;
                pbVar22 = (byte *)(lVar20 + 0xc);
                uVar23 = (ulong)*(ushort *)(lVar20 + 10);
                do {
                  uVar6 = (ulong)*(ushort *)(lVar20 + 10);
                  if (uVar23 == 0) goto joined_r0x000103bf621c;
                  cVar1 = *pbVar22 < bVar4;
                  if (bVar4 < *pbVar22) {
                    cVar1 = -1;
                  }
                  uVar23 = uVar23 - 1;
                  uVar21 = uVar21 + 1;
                  pbVar22 = pbVar22 + 1;
                } while (cVar1 == '\x01');
                uVar6 = uVar21;
                if (cVar1 == '\0') {
                  puVar2 = &UNK_108c78dd0;
                  uVar24 = 4;
                  uVar11 = *(undefined8 *)(&UNK_10b2eb068 + lVar19);
                  uVar12 = *(undefined8 *)(&UNK_10b2eb070 + lVar19);
                  lVar10 = _malloc(4);
                  goto joined_r0x000103bf6248;
                }
joined_r0x000103bf621c:
                if (lVar10 == 0) break;
                lVar10 = lVar10 + -1;
                lVar20 = *(long *)(lVar20 + uVar6 * 8 + 0x18);
              } while( true );
            }
            puVar2 = &UNK_108da9a6d;
            uVar24 = 5;
            uVar11 = *(undefined8 *)(&UNK_10b2eb068 + lVar19);
            uVar12 = *(undefined8 *)(&UNK_10b2eb070 + lVar19);
            lVar10 = _malloc(5);
joined_r0x000103bf6248:
            if (lVar10 == 0) {
              uVar12 = func_0x0001087c9084(1,uVar24);
              _free(unaff_x21);
              auVar27 = __Unwind_Resume(uVar12);
              uStack_2b0 = 0x17c0;
              puStack_2a8 = &UNK_10b2eb030;
              uStack_258 = 0x103bf6310;
              plStack_2c8 = (long *)0x0;
              lStack_2b8 = 0;
              lVar10 = 0x17c0;
              puVar25 = &UNK_10b2eb079;
              lStack_2a0 = lVar3;
              lStack_298 = lVar17;
              lStack_290 = lVar19;
              puStack_288 = puVar2;
              uStack_280 = uVar24;
              lStack_278 = unaff_x21;
              uStack_270 = uVar11;
              uStack_268 = uVar12;
              pppuStack_260 = &ppuStack_1b0;
              do {
                if ((puVar25[-1] & 1) != 0) {
                  FUN_103bf8ea0(&plStack_2c8,*puVar25);
                }
                puVar25 = puVar25 + 0x50;
                lVar10 = lVar10 + -0x50;
              } while (lVar10 != 0);
              uStack_2f8 = uStack_2c0;
              plStack_300 = plStack_2c8;
              lStack_2f0 = lStack_2b8;
              uStack_2e8 = 0;
              uStack_2d8 = 0;
              if ((auVar27._8_4_ & 0xff) != 2) {
                if ((auVar27._8_8_ & 1) == 0) {
                  __ZN14codex_features8Features7disable17hbc9ade9b70c02f19E(&plStack_300,4);
                }
                else {
                  FUN_103bf8ea0(&plStack_300,4);
                }
                FUN_103bf5cf4(&UNK_108da8e99,0x22,4);
                __ZN14codex_features8Features25record_legacy_usage_force17h7438f830f85eb4baE
                          (&plStack_300,&UNK_108da8e99,0x22,4);
              }
              if (auVar27._0_8_ != 0) {
                __ZN14codex_features12FeaturesToml7entries17h6e451e38a75f8d8aE
                          (&plStack_2c8,auVar27._0_8_);
                __ZN14codex_features8Features9apply_map17h52be1dc5f2a59501E
                          (&plStack_300,&plStack_2c8);
                if (plStack_2c8 != (long *)0x0) {
                  plVar9 = plStack_2c8;
                  uVar21 = uStack_2c0;
                  if (lStack_2b8 == 0) {
                    for (; uVar21 != 0; uVar21 = uVar21 - 1) {
                      plVar9 = (long *)plVar9[0x24];
                    }
                  }
                  else {
                    plVar9 = (long *)0x0;
                    lVar19 = lStack_2b8;
                    plVar26 = plStack_2c8;
                    do {
                      if (plVar9 == (long *)0x0) {
                        for (; plVar9 = plVar26, uVar21 != 0; uVar21 = uVar21 - 1) {
                          plVar26 = (long *)plVar9[0x24];
                        }
                        plVar26 = (long *)0x0;
                        uVar21 = 0;
                        if (*(short *)((long)plVar9 + 0x112) == 0) goto LAB_103bf6478;
                      }
                      else if (*(ushort *)((long)plVar9 + 0x112) <= uVar21) {
LAB_103bf6478:
                        do {
                          plVar13 = (long *)*plVar9;
                          if (plVar13 == (long *)0x0) goto LAB_103bf6734;
                          plVar26 = (long *)((long)plVar26 + 1);
                          uVar5 = *(ushort *)(plVar9 + 0x22);
                          uVar21 = (ulong)uVar5;
                          _free();
                          plVar9 = plVar13;
                        } while (*(ushort *)((long)plVar13 + 0x112) <= uVar5);
                      }
                      if (plVar26 == (long *)0x0) {
                        plVar26 = plVar9 + uVar21 * 3 + 1;
                        lVar17 = *plVar26;
                        uVar21 = uVar21 + 1;
                      }
                      else {
                        plVar13 = plVar9 + uVar21 + 1;
                        do {
                          plVar13 = (long *)plVar13[0x24];
                          plVar26 = (long *)((long)plVar26 + -1);
                        } while (plVar26 != (long *)0x0);
                        plVar26 = plVar9 + uVar21 * 3 + 1;
                        lVar17 = *plVar26;
                        uVar21 = 0;
                        plVar9 = plVar13;
                      }
                      if (lVar17 != 0) {
                        _free(plVar26[1]);
                      }
                      plVar26 = (long *)0x0;
                      lVar19 = lVar19 + -1;
                    } while (lVar19 != 0);
                  }
                  plVar26 = (long *)*plVar9;
                  while (plVar13 = plVar26, plVar13 != (long *)0x0) {
                    _free(plVar9);
                    plVar9 = plVar13;
                    plVar26 = (long *)*plVar13;
                  }
                  _free(plVar9);
                }
              }
              if (((uint)param_4 & 0xff) != 2) {
                if ((param_4 & 1) == 0) {
                  __ZN14codex_features8Features7disable17hbc9ade9b70c02f19E(&plStack_300,4);
                }
                else {
                  FUN_103bf8ea0(&plStack_300,4);
                }
                FUN_103bf5cf4(&UNK_108da8e99,0x22,4);
                __ZN14codex_features8Features25record_legacy_usage_force17h7438f830f85eb4baE
                          (&plStack_300,&UNK_108da8e99,0x22,4);
              }
              if (puVar15 == (undefined *)0x0) goto LAB_103bf66d0;
              __ZN14codex_features12FeaturesToml7entries17h6e451e38a75f8d8aE(&plStack_2c8,puVar15);
              __ZN14codex_features8Features9apply_map17h52be1dc5f2a59501E(&plStack_300,&plStack_2c8)
              ;
              if (plStack_2c8 == (long *)0x0) goto LAB_103bf66d0;
              plVar9 = plStack_2c8;
              if (lStack_2b8 == 0) {
                for (; uStack_2c0 != 0; uStack_2c0 = uStack_2c0 - 1) {
                  plVar9 = (long *)plVar9[0x24];
                }
              }
              else {
                plVar9 = (long *)0x0;
                lVar19 = lStack_2b8;
                uVar21 = uStack_2c0;
                plVar26 = plStack_2c8;
                do {
                  if (plVar9 == (long *)0x0) {
                    for (; plVar9 = plVar26, uVar21 != 0; uVar21 = uVar21 - 1) {
                      plVar26 = (long *)plVar9[0x24];
                    }
                    plVar26 = (long *)0x0;
                    uVar21 = 0;
                    if (*(short *)((long)plVar9 + 0x112) == 0) goto LAB_103bf6614;
                  }
                  else if (*(ushort *)((long)plVar9 + 0x112) <= uVar21) {
LAB_103bf6614:
                    do {
                      plVar13 = (long *)*plVar9;
                      if (plVar13 == (long *)0x0) {
LAB_103bf6734:
                        _free();
                        func_0x000108a07a20(&UNK_10b2ecb78);
                    /* WARNING: Does not return */
                        pcVar8 = (code *)SoftwareBreakpoint(1,0x103bf6748);
                        (*pcVar8)();
                      }
                      plVar26 = (long *)((long)plVar26 + 1);
                      uVar5 = *(ushort *)(plVar9 + 0x22);
                      uVar21 = (ulong)uVar5;
                      _free();
                      plVar9 = plVar13;
                    } while (*(ushort *)((long)plVar13 + 0x112) <= uVar5);
                  }
                  if (plVar26 == (long *)0x0) {
                    plVar26 = plVar9 + uVar21 * 3 + 1;
                    lVar17 = *plVar26;
                    uVar21 = uVar21 + 1;
                  }
                  else {
                    plVar13 = plVar9 + uVar21 + 1;
                    do {
                      plVar13 = (long *)plVar13[0x24];
                      plVar26 = (long *)((long)plVar26 + -1);
                    } while (plVar26 != (long *)0x0);
                    plVar26 = plVar9 + uVar21 * 3 + 1;
                    lVar17 = *plVar26;
                    uVar21 = 0;
                    plVar9 = plVar13;
                  }
                  if (lVar17 != 0) {
                    _free(plVar26[1]);
                  }
                  plVar26 = (long *)0x0;
                  lVar19 = lVar19 + -1;
                } while (lVar19 != 0);
              }
              plVar26 = (long *)*plVar9;
              while (plVar13 = plVar26, plVar13 != (long *)0x0) {
                _free(plVar9);
                plVar9 = plVar13;
                plVar26 = (long *)*plVar13;
              }
              _free(plVar9);
LAB_103bf66d0:
              if (((uint)param_5 & 0xff) != 2) {
                if (((ulong)param_5 & 1) == 0) {
                  __ZN14codex_features8Features7disable17hbc9ade9b70c02f19E(&plStack_300,10);
                }
                else {
                  FUN_103bf8ea0(&plStack_300,10);
                }
              }
              uVar21 = __ZN14codex_features8Features22normalize_dependencies17h2fc1da50987f12b8E
                                 (&plStack_300);
              extraout_x8[1] = uStack_2f8;
              *extraout_x8 = plStack_300;
              extraout_x8[3] = uStack_2e8;
              extraout_x8[2] = lStack_2f0;
              extraout_x8[5] = uStack_2d8;
              extraout_x8[4] = uStack_2e0;
              return (long *)uVar21;
            }
            _memcpy(lVar10,puVar2,uVar24);
            puStack_240 = &UNK_108da9a66;
            uStack_238 = 7;
            puStack_220 = &UNK_108da9a72;
            uStack_218 = 5;
            param_5 = &puStack_240;
            puVar15 = (undefined *)0x13;
            param_4 = 1;
            uStack_230 = uVar11;
            uStack_228 = uVar12;
            lStack_210 = lVar10;
            uStack_208 = uVar24;
            __ZN10codex_otel6events17session_telemetry16SessionTelemetry7counter17h8b8d75a4ab2d4bd3E
                      (uStack_248,&UNK_108da9a77);
            uVar11 = _free(lVar10);
            auVar27._8_8_ = uStack_248;
            auVar27._0_8_ = uVar11;
            unaff_x21 = lVar10;
          }
        }
LAB_103bf612c:
        lVar19 = lVar19 + 0x50;
        if (lVar19 == 0x17c0) {
          return (long *)auVar27._0_8_;
        }
      } while( true );
    }
    lVar19 = lVar19 + -0x50;
    puVar7 = puVar18 + 10;
  } while (*(char *)((long)puVar18 + 0x61) != param_3);
  ppcStack_160 = (char **)puVar18[10];
  lStack_158 = puVar18[0xb];
  if ((param_2 == lStack_158) &&
     (param_1 = (long *)_memcmp(param_1,ppcStack_160,param_2), (int)param_1 == 0)) {
    return param_1;
  }
  if (2 < ___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E) goto LAB_103bf5eb4;
  uVar14 = (uint)bRam000000010b62c760;
  if (1 < bRam000000010b62c760 - 1) {
    if (bRam000000010b62c760 == 0) goto LAB_103bf5eb4;
    param_1 = (long *)__ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (0x10b62c750);
    uVar14 = (uint)param_1 & 0xff;
    if (((ulong)param_1 & 0xff) == 0) goto LAB_103bf5eb4;
  }
  param_1 = (long *)__ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (lRam000000010b62c750,uVar14);
  if ((int)param_1 != 0) {
    puStack_100 = (undefined *)(lRam000000010b62c750 + 0x30);
    pppcStack_a0 = &ppcStack_160;
    puStack_48 = &DAT_103bf88c4;
    ppppcStack_58 = &pppcStack_50;
    ppcStack_60 = (char **)s_3legacy_feature_toggle_detected__108afdbd5;
    pppcStack_c0 = &ppcStack_60;
    puStack_b8 = &UNK_10b2ec8c8;
    pppcStack_b0 = (char ***)&pppcStack_d8;
    puStack_a8 = &UNK_10b2ec8e8;
    puStack_98 = &UNK_10b2ec908;
    ppppcStack_110 = &pppcStack_c0;
    ppcStack_118 = (char **)0x1;
    ppuStack_108 = (undefined1 **)0x3;
    pppcStack_d8 = (char ***)&plStack_170;
    pppcStack_50 = pppcStack_a0;
    plVar9 = (long *)__ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                               (lRam000000010b62c750,&ppcStack_118);
    lVar19 = lRam000000010b62c750;
    if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE != '\0') {
      return plVar9;
    }
    if (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 3) {
      return plVar9;
    }
    pppcStack_130 = *(char ****)(lRam000000010b62c750 + 0x20);
    uStack_128 = *(undefined8 *)(lRam000000010b62c750 + 0x28);
    pcStack_138 = (char *)0x3;
    puVar15 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar15 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    plVar9 = (long *)(**(code **)(puVar15 + 0x18))(puVar2,&pcStack_138);
    if ((int)plVar9 == 0) {
      return plVar9;
    }
    plVar9 = (long *)__ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                               (lVar19,puVar2,puVar15,&pcStack_138,&ppcStack_118);
    return plVar9;
  }
LAB_103bf5eb4:
  lVar19 = lRam000000010b62c750;
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uStack_148 = *(undefined8 *)(lRam000000010b62c750 + 0x20);
    uStack_140 = *(undefined8 *)(lRam000000010b62c750 + 0x28);
    uStack_150 = 3;
    puVar15 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar15 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    param_1 = (long *)(**(code **)(puVar15 + 0x18))(puVar2,&uStack_150);
    if ((int)param_1 != 0) {
      lStack_120 = lRam000000010b62c750 + 0x30;
      pppcStack_f8 = &ppcStack_160;
      puStack_d0 = &DAT_103bf88c4;
      pppcStack_e0 = (char ***)&pppcStack_d8;
      pcStack_e8 = s_3legacy_feature_toggle_detected__108afdbd5;
      ppcStack_118 = &pcStack_e8;
      ppppcStack_110 = (char ****)&UNK_10b2ec8c8;
      ppuStack_108 = &puStack_c8;
      puStack_100 = &UNK_10b2ec8e8;
      puStack_f0 = &UNK_10b2ec908;
      pppcStack_130 = &ppcStack_118;
      pcStack_138 = (char *)0x1;
      uStack_128 = 3;
      pppcStack_a0 = *(char ****)(lVar19 + 0x60);
      puStack_98 = *(undefined **)(lVar19 + 0x68);
      puStack_b8 = *(undefined **)(lVar19 + 0x50);
      pppcStack_b0 = *(char ****)(lVar19 + 0x58);
      pppcStack_c0 = (char ***)0x1;
      if (puStack_b8 == (undefined *)0x0) {
        pppcStack_c0 = (char ***)0x2;
      }
      uStack_78 = *(undefined4 *)(lVar19 + 8);
      uStack_74 = *(undefined4 *)(lVar19 + 0xc);
      ppcStack_60 = &pcStack_138;
      ppppcStack_58 = (char ****)CONCAT71(ppppcStack_58._1_7_,1);
      pppcStack_50 = &ppcStack_60;
      puStack_48 = &DAT_1061c2098;
      puStack_a8 = (undefined *)0x1;
      if (pppcStack_a0 == (char ***)0x0) {
        puStack_a8 = (undefined *)0x2;
      }
      uStack_88 = uStack_148;
      uStack_90 = uStack_150;
      uStack_80 = uStack_140;
      ppppcStack_68 = &pppcStack_50;
      pcStack_70 = s__108b39f4f;
      pppcStack_d8 = pppcStack_f8;
      puStack_c8 = (undefined1 *)&plStack_170;
      param_1 = (long *)(**(code **)(puVar15 + 0x20))(puVar2,&pppcStack_c0);
    }
  }
  return param_1;
}

