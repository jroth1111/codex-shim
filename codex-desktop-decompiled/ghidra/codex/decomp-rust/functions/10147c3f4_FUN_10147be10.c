
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10147be10(long *param_1,long *param_2,long param_3,long *param_4,ulong param_5)

{
  undefined *puVar1;
  ulong uVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined1 (*pauVar6) [16];
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined1 auVar16 [16];
  long lStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  long lStack_560;
  long lStack_558;
  long lStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined4 *puStack_538;
  undefined8 uStack_530;
  undefined8 uStack_500;
  long lStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  long lStack_470;
  long *plStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  undefined8 uStack_408;
  long *plStack_400;
  long lStack_3f8;
  long *plStack_3f0;
  undefined8 uStack_3c0;
  long lStack_3b8;
  long *plStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  long lStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  undefined8 uStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (*param_1 == -0x8000000000000000) {
    uStack_c0 = 10;
    uVar7 = func_0x000108a4a0f8(&uStack_c0,0,0);
  }
  else {
    puVar5 = (undefined8 *)_malloc(0xb);
    if (puVar5 == (undefined8 *)0x0) {
      uVar8 = func_0x0001087c9084(1,0xb);
      FUN_100e040f0(&uStack_120);
      FUN_100e31868(&lStack_180);
      _free(lStack_1d8);
      auVar16 = __Unwind_Resume(uVar8);
      plVar9 = auVar16._0_8_;
      if (*plVar9 == -0x8000000000000000) {
        uStack_280 = 10;
        uVar7 = func_0x000108a4a0f8(&uStack_280,0,0);
      }
      else {
        lVar11 = param_3;
        plVar13 = param_4;
        lVar15 = _malloc(param_3);
        if (lVar15 == 0) {
          auVar16 = func_0x0001087c9084(1,param_3);
          plVar9 = auVar16._0_8_;
          if (*plVar9 == -0x8000000000000000) {
            uStack_3c0 = 10;
            uVar7 = func_0x000108a4a0f8(&uStack_3c0,0,0);
          }
          else {
            lVar15 = lVar11;
            plVar14 = plVar13;
            lVar10 = _malloc(lVar11);
            uVar12 = (uint)plVar14;
            if (lVar10 == 0) {
              uVar8 = func_0x0001087c9084(1,lVar11);
              _free(lStack_418);
              auVar16 = __Unwind_Resume(uVar8);
              plVar9 = auVar16._0_8_;
              if (*plVar9 == -0x8000000000000000) {
                uStack_500 = 10;
                uVar7 = func_0x000108a4a0f8(&uStack_500,0,0);
              }
              else {
                lVar11 = _malloc(lVar15);
                if (lVar11 == 0) {
                  func_0x0001087c9084(1,lVar15);
                  goto LAB_10147c994;
                }
                _memcpy(lVar11,auVar16._8_8_,lVar15);
                if (plVar9[9] != -0x8000000000000000 && plVar9[9] != 0) {
                  _free(plVar9[10]);
                }
                plVar9[10] = lVar11;
                plVar9[0xb] = lVar15;
                plVar9[9] = -0x8000000000000000;
                lStack_550 = plVar9[0xb];
                lStack_558 = plVar9[10];
                uVar12 = uVar12 & 0xff;
                lStack_560 = lVar15;
                if (uVar12 < 2) {
                  if (uVar12 == 0) {
                    puStack_538 = (undefined4 *)_malloc(4);
                    lVar15 = 4;
                    if (puStack_538 == (undefined4 *)0x0) {
LAB_10147c994:
                      func_0x0001087c9084(1,lVar15);
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x10147c9a4);
                      (*pcVar3)();
                    }
                    *puStack_538 = 0x6e616c70;
                    uStack_540 = 4;
                  }
                  else {
                    puStack_538 = (undefined4 *)_malloc(7);
                    lVar15 = 7;
                    if (puStack_538 == (undefined4 *)0x0) goto LAB_10147c994;
                    *(undefined4 *)((long)puStack_538 + 3) = 0x746c7561;
                    *puStack_538 = 0x61666564;
                    uStack_540 = 7;
                  }
                  uStack_548 = 0x8000000000000003;
                  uStack_530 = uStack_540;
                  FUN_101497a9c(&uStack_500,plVar9,&lStack_560,&uStack_548);
                  uStack_5a8 = uStack_4f0;
                  lStack_5b0 = lStack_4f8;
                  uStack_598 = uStack_4e0;
                  uStack_5a0 = uStack_4e8;
                  uStack_588 = uStack_4d0;
                  uStack_590 = uStack_4d8;
                  uStack_578 = uStack_4c0;
                  uStack_580 = uStack_4c8;
                  uStack_570 = uStack_4b8;
                  if (lStack_4f8 != -0x7ffffffffffffffb) {
                    FUN_100de6690(&lStack_5b0);
                  }
                  uVar7 = 0;
                }
                else {
                  puVar1 = &UNK_108cada80;
                  if (uVar12 != 2) {
                    puVar1 = &UNK_108cadabf;
                  }
                  uVar8 = 0x3f;
                  if (uVar12 != 2) {
                    uVar8 = 0x37;
                  }
                  uVar7 = FUN_1088564ec(puVar1,uVar8);
                  _free(lStack_558);
                }
              }
              return uVar7;
            }
            _memcpy(lVar10,auVar16._8_8_,lVar11);
            uStack_408 = 0x8000000000000000;
            if (plVar9[9] != -0x8000000000000000 && plVar9[9] != 0) {
              _free(plVar9[10]);
            }
            plVar9[10] = lVar10;
            plVar9[0xb] = lVar11;
            plVar9[9] = -0x8000000000000000;
            lStack_410 = plVar9[0xb];
            lStack_418 = plVar9[10];
            lStack_420 = lVar11;
            if (*plVar13 != -0x8000000000000000) {
              func_0x0001055bf348(&uStack_3c0,plVar13[1],plVar13[2]);
              plVar13 = plStack_3b0;
              lVar15 = lStack_3b8;
              if ((int)uStack_3c0 == 1) {
                uVar7 = FUN_1088564ec(&UNK_108ca7604,0x26);
                _free(lStack_418);
                return uVar7;
              }
              if (plStack_3b0 == (long *)0x0) {
                lVar11 = 1;
              }
              else {
                lVar11 = _malloc(plStack_3b0);
                if (lVar11 == 0) {
                  func_0x0001087c9084(1,plVar13);
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10147c690);
                  (*pcVar3)();
                }
              }
              _memcpy(lVar11,lVar15,plVar13);
              uStack_408 = 0x8000000000000003;
            }
            plStack_400 = plVar13;
            lStack_3f8 = lVar11;
            plStack_3f0 = plVar13;
            FUN_101497a9c(&uStack_3c0,plVar9,&lStack_420,&uStack_408);
            plStack_468 = plStack_3b0;
            lStack_470 = lStack_3b8;
            uStack_458 = uStack_3a0;
            uStack_460 = uStack_3a8;
            uStack_448 = uStack_390;
            uStack_450 = uStack_398;
            uStack_438 = uStack_380;
            uStack_440 = uStack_388;
            uStack_430 = uStack_378;
            if (lStack_3b8 != -0x7ffffffffffffffb) {
              FUN_100de6690(&lStack_470);
            }
            uVar7 = 0;
          }
          return uVar7;
        }
        _memcpy(lVar15,auVar16._8_8_,param_3);
        if (plVar9[9] != -0x8000000000000000 && plVar9[9] != 0) {
          _free(plVar9[10]);
        }
        plVar9[10] = lVar15;
        plVar9[0xb] = param_3;
        plVar9[9] = -0x8000000000000000;
        lStack_2d0 = plVar9[0xb];
        lStack_2d8 = plVar9[10];
        uStack_2c0 = param_5 >> 0x3f;
        uStack_2c8 = 0x8000000000000002;
        if (((ulong)param_4 & 1) == 0) {
          uStack_2c8 = 0x8000000000000000;
        }
        lStack_2e0 = param_3;
        uStack_2b8 = param_5;
        FUN_101497a9c(&uStack_280,plVar9,&lStack_2e0,&uStack_2c8);
        uStack_328 = uStack_270;
        lStack_330 = lStack_278;
        uStack_318 = uStack_260;
        uStack_320 = uStack_268;
        uStack_308 = uStack_250;
        uStack_310 = uStack_258;
        uStack_2f8 = uStack_240;
        uStack_300 = uStack_248;
        uStack_2f0 = uStack_238;
        if (lStack_278 != -0x7ffffffffffffffb) {
          FUN_100de6690(&lStack_330);
        }
        uVar7 = 0;
      }
      return uVar7;
    }
    *(undefined4 *)((long)puVar5 + 7) = 0x6d657473;
    *puVar5 = 0x7379735f656c6966;
    if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
      _free(param_1[10]);
    }
    param_1[10] = (long)puVar5;
    param_1[0xb] = 0xb;
    param_1[9] = -0x8000000000000000;
    lStack_1d0 = param_1[0xb];
    lStack_1d8 = param_1[10];
    uStack_1e0 = 0xb;
    if (*param_2 == -0x8000000000000000) {
      uStack_1c8 = 0x8000000000000000;
    }
    else {
      __ZN14codex_protocol6models21FileSystemPermissions21as_legacy_permissions17h85b188679c8cf6b0E
                (&lStack_180,param_2);
      lVar11 = lStack_168;
      uVar7 = 0x8000000000000005;
      if (lStack_180 == -0x7fffffffffffffff) {
        func_0x000101149e6c(&lStack_150,param_2[1],param_2[2]);
        lVar11 = lStack_140;
        lVar15 = param_2[3];
        cVar4 = lStack_140 != 0;
        if (lVar15 != 0) {
          cVar4 = cVar4 + '\x01';
        }
        lStack_138 = lVar15;
        pauVar6 = (undefined1 (*) [16])
                  (*
                  ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                  )();
        if (pauVar6[1][0] == '\x01') {
          auVar16 = *pauVar6;
        }
        else {
          auVar16 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
          *(long *)(*pauVar6 + 8) = auVar16._8_8_;
          pauVar6[1][0] = 1;
        }
        *(long *)*pauVar6 = auVar16._0_8_ + 1;
        FUN_105dc99f8(&uStack_c0,cVar4,auVar16._0_8_,auVar16._8_8_);
        uStack_78 = 0x8000000000000000;
        if (uStack_c0 == 0x8000000000000001) {
          uStack_1c8 = 0x8000000000000005;
          uStack_1c0 = uStack_b8;
        }
        else {
          uStack_e8 = uStack_88;
          uStack_f0 = uStack_90;
          uStack_d8 = 0x8000000000000000;
          uStack_e0 = uStack_80;
          uStack_c8 = uStack_68;
          uStack_d0 = uStack_70;
          uStack_108 = uStack_a8;
          uStack_110 = uStack_b0;
          uStack_f8 = uStack_98;
          uStack_100 = uStack_a0;
          uStack_120 = uStack_c0;
          uStack_118 = uStack_b8;
          if (((lVar11 == 0) ||
              (uStack_1c0 = FUN_1014745d0(&uStack_120,lStack_148,lVar11), uStack_1c0 == 0)) &&
             ((lVar15 == 0 ||
              (uStack_1c0 = FUN_10148ef24(&uStack_120,&UNK_108cac072,0x13,lVar15), uStack_1c0 == 0))
             )) {
            uVar7 = uStack_120;
            if (uStack_120 == 0x8000000000000000) {
              if (uStack_118 == 0x8000000000000005) {
                func_0x000108a079f0(&UNK_109b9f7c8,0x19,&UNK_10b46a510);
LAB_10147c370:
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10147c374);
                (*pcVar3)();
              }
              uStack_1b8 = uStack_108;
              uStack_1c0 = uStack_110;
              uStack_1a8 = uStack_f8;
              uStack_1b0 = uStack_100;
              uStack_198 = uStack_e8;
              uStack_1a0 = uStack_f0;
              uStack_190 = uStack_e0;
              uStack_188 = uStack_d8;
              uStack_1c8 = uStack_118;
              uVar7 = uStack_118;
            }
            else {
              uStack_1c8 = uStack_120;
              uStack_1c0 = uStack_118;
              uStack_1b0 = uStack_108;
              uStack_1b8 = uStack_110;
              uStack_1a0 = uStack_f8;
              uStack_1a8 = uStack_100;
              uStack_190 = uStack_e8;
              uStack_198 = uStack_f0;
              uStack_188 = uStack_e0;
              if ((uStack_d8 & 0x7fffffffffffffff) != 0) {
                _free(uStack_d0);
              }
            }
          }
          else {
            uStack_1c8 = 0x8000000000000005;
            FUN_100e040f0(&uStack_120);
          }
        }
        FUN_100e79780(&lStack_150);
        uVar2 = uStack_1c0;
      }
      else {
        lStack_148 = lStack_178;
        lStack_150 = lStack_180;
        lStack_138 = lStack_168;
        lStack_140 = lStack_170;
        lStack_128 = lStack_158;
        lStack_130 = lStack_160;
        cVar4 = lStack_168 != -0x8000000000000000;
        if (lStack_180 != -0x8000000000000000) {
          cVar4 = cVar4 + '\x01';
        }
        pauVar6 = (undefined1 (*) [16])
                  (*
                  ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                  )();
        if (pauVar6[1][0] == '\x01') {
          auVar16 = *pauVar6;
        }
        else {
          auVar16 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
          *(long *)(*pauVar6 + 8) = auVar16._8_8_;
          pauVar6[1][0] = 1;
        }
        *(long *)*pauVar6 = auVar16._0_8_ + 1;
        FUN_105dc99f8(&uStack_c0,cVar4,auVar16._0_8_,auVar16._8_8_);
        uStack_78 = 0x8000000000000000;
        if (uStack_c0 == 0x8000000000000001) {
          uStack_1c8 = 0x8000000000000005;
          uStack_1c0 = uStack_b8;
        }
        else {
          uStack_e8 = uStack_88;
          uStack_f0 = uStack_90;
          uStack_d8 = 0x8000000000000000;
          uStack_e0 = uStack_80;
          uStack_c8 = uStack_68;
          uStack_d0 = uStack_70;
          uStack_108 = uStack_a8;
          uStack_110 = uStack_b0;
          uStack_f8 = uStack_98;
          uStack_100 = uStack_a0;
          uStack_120 = uStack_c0;
          uStack_118 = uStack_b8;
          if (((lStack_180 == -0x8000000000000000) ||
              (uStack_1c0 = FUN_10147e394(&uStack_120,&UNK_108c60fec,4,&lStack_180), uStack_1c0 == 0
              )) && ((lVar11 == -0x8000000000000000 ||
                     (uStack_1c0 = FUN_10147e394(&uStack_120,&UNK_108cac025,5,&lStack_138),
                     uStack_1c0 == 0)))) {
            uVar7 = uStack_120;
            if (uStack_120 == 0x8000000000000000) {
              if (uStack_118 == 0x8000000000000005) {
                func_0x000108a079f0(&UNK_109b9f7c8,0x19,&UNK_10b46a510);
                goto LAB_10147c370;
              }
              uStack_1b8 = uStack_108;
              uStack_1c0 = uStack_110;
              uStack_1a8 = uStack_f8;
              uStack_1b0 = uStack_100;
              uStack_198 = uStack_e8;
              uStack_1a0 = uStack_f0;
              uStack_190 = uStack_e0;
              uStack_188 = uStack_d8;
              uStack_1c8 = uStack_118;
              uVar7 = uStack_118;
            }
            else {
              uStack_1c8 = uStack_120;
              uStack_1c0 = uStack_118;
              uStack_1b0 = uStack_108;
              uStack_1b8 = uStack_110;
              uStack_1a0 = uStack_f8;
              uStack_1a8 = uStack_100;
              uStack_190 = uStack_e8;
              uStack_198 = uStack_f0;
              uStack_188 = uStack_e0;
              if ((uStack_d8 & 0x7fffffffffffffff) != 0) {
                _free(uStack_d0);
              }
            }
          }
          else {
            uStack_1c8 = 0x8000000000000005;
            FUN_100e040f0(&uStack_120);
          }
        }
        if (lStack_180 != -0x8000000000000000) {
          if (lStack_170 != 0) {
            puVar5 = (undefined8 *)(lStack_178 + 8);
            lVar11 = lStack_170;
            do {
              if (puVar5[-1] != 0) {
                _free(*puVar5);
              }
              puVar5 = puVar5 + 3;
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
          }
          if (lStack_180 != 0) {
            _free(lStack_178);
          }
        }
        uVar2 = uStack_1c0;
        if (lStack_168 != -0x8000000000000000) {
          if (lStack_158 != 0) {
            puVar5 = (undefined8 *)(lStack_160 + 8);
            lVar11 = lStack_158;
            do {
              if (puVar5[-1] != 0) {
                _free(*puVar5);
              }
              puVar5 = puVar5 + 3;
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
          }
          uVar2 = uStack_1c0;
          if (lStack_168 != 0) {
            _free(lStack_160);
            uVar2 = uStack_1c0;
          }
        }
      }
      uStack_1c0 = uVar2;
      if (uVar7 == 0x8000000000000005) {
        _free(lStack_1d8);
        return uVar2;
      }
    }
    FUN_101497a9c(&uStack_c0,param_1,&uStack_1e0,&uStack_1c8);
    uStack_118 = uStack_b0;
    uStack_120 = uStack_b8;
    uStack_108 = uStack_a0;
    uStack_110 = uStack_a8;
    uStack_f8 = uStack_90;
    uStack_100 = uStack_98;
    uStack_e8 = uStack_80;
    uStack_f0 = uStack_88;
    uStack_e0 = uStack_78;
    if (uStack_b8 != 0x8000000000000005) {
      FUN_100de6690(&uStack_120);
    }
    uVar7 = 0;
  }
  return uVar7;
}

