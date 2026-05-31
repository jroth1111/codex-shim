
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101489724(long *param_1,long param_2,ulong param_3)

{
  byte bVar1;
  ulong uVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined4 uVar14;
  ulong *puVar15;
  long *plVar16;
  ulong uVar17;
  byte *pbVar18;
  undefined1 auVar19 [16];
  ulong uStack_520;
  long lStack_518;
  long lStack_510;
  long lStack_508;
  long lStack_500;
  long lStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  ulong uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  ulong uStack_488;
  ulong uStack_480;
  ulong uStack_478;
  ulong uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  long lStack_440;
  ulong uStack_438;
  long lStack_430;
  long lStack_428;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  undefined8 uStack_3f8;
  long lStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  ulong uStack_330;
  undefined8 uStack_2f0;
  long lStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_258;
  long lStack_250;
  long lStack_248;
  ulong uStack_240;
  long lStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  undefined1 (*pauStack_190) [16];
  undefined8 uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined1 (*pauStack_130) [16];
  undefined8 uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 (*pauStack_d0) [16];
  undefined8 uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 *puStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  
  if (*param_1 == -0x8000000000000000) {
    uStack_180 = 10;
    uVar17 = func_0x000108a4a0f8(&uStack_180,0,0);
    return uVar17;
  }
  uVar17 = param_3;
  puVar4 = (undefined4 *)_malloc(7);
  if (puVar4 != (undefined4 *)0x0) {
    *(undefined4 *)((long)puVar4 + 3) = 0x73656972;
    *puVar4 = 0x72746e65;
    if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
      _free(param_1[10]);
    }
    param_1[10] = (long)puVar4;
    param_1[0xb] = 7;
    param_1[9] = -0x8000000000000000;
    lStack_248 = param_1[0xb];
    lStack_250 = param_1[10];
    uStack_258 = 7;
    lVar13 = param_3 * 0x48;
    if (param_3 < 0x1c71c71c71c71c8) {
      if (lVar13 == 0) {
        uVar17 = 0;
        lVar6 = 8;
      }
      else {
        lVar6 = _malloc(lVar13);
        uVar17 = param_3;
        if (lVar6 == 0) {
          uVar5 = 8;
          goto LAB_1014897e8;
        }
      }
      uStack_230 = 0;
      uStack_240 = uVar17;
      lStack_238 = lVar6;
      pauVar7 = (undefined1 (*) [16])
                (*
                ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                )();
      pbVar18 = (byte *)(param_2 + 0x18);
      lVar13 = param_3 << 5;
      pauVar8 = pauVar7;
      do {
        if (lVar13 == 0) {
          uStack_1c8 = uStack_230;
          uStack_1d0 = lStack_238;
          uStack_1e0 = 0x8000000000000004;
          uStack_1d8 = uStack_240;
          FUN_101497a9c(&uStack_180,param_1,&uStack_258,&uStack_1e0);
          uStack_b8 = uStack_170;
          uStack_c0 = uStack_178;
          uStack_a8 = uStack_160;
          puStack_b0 = (undefined8 *)uStack_168;
          uStack_98 = uStack_150;
          uStack_a0 = uStack_158;
          uStack_88 = uStack_140;
          uStack_90 = uStack_148;
          uStack_80 = uStack_138;
          if (uStack_178 != 0x8000000000000005) {
            FUN_100de6690(&uStack_c0);
          }
          return 0;
        }
        if (pauVar7[1][0] == '\x01') {
          auVar19 = *pauVar7;
        }
        else {
          auVar19 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E(pauVar8);
          *(long *)(*pauVar7 + 8) = auVar19._8_8_;
          pauVar7[1][0] = 1;
        }
        *(long *)*pauVar7 = auVar19._0_8_ + 1;
        pauVar8 = (undefined1 (*) [16])FUN_105dc99f8(&uStack_180,2,auVar19._0_8_,auVar19._8_8_);
        uStack_138 = 0x8000000000000000;
        uVar17 = uStack_178;
        if (uStack_180 != 0x8000000000000001) {
          uStack_1a8 = uStack_148;
          uStack_1b0 = uStack_150;
          uStack_1a0 = uStack_140;
          uStack_198 = 0x8000000000000000;
          uStack_188 = uStack_128;
          pauStack_190 = pauStack_130;
          uStack_1c8 = uStack_168;
          uStack_1d0 = uStack_170;
          uStack_1b8 = uStack_158;
          uStack_1c0 = uStack_160;
          uStack_1e0 = uStack_180;
          uStack_1d8 = uStack_178;
          uVar17 = 0x8000000000000000;
          if (uStack_180 == 0x8000000000000000) {
LAB_10148985c:
            uStack_198 = uVar17;
            uStack_180 = 10;
            uVar10 = func_0x000108a4a0f8(&uStack_180,0,0);
          }
          else {
            bVar1 = *pbVar18;
            pauVar8 = (undefined1 (*) [16])_malloc(4);
            if (pauVar8 == (undefined1 (*) [16])0x0) {
              func_0x0001087c9084(1,4);
              goto LAB_101489d00;
            }
            *(undefined4 *)*pauVar8 = 0x646e696b;
            if ((uStack_198 != 0x8000000000000000) && (uStack_198 != 0)) {
              _free(pauStack_190);
            }
            uStack_188 = 4;
            uStack_198 = 0x8000000000000000;
            uStack_c8 = 4;
            uStack_d8 = 4;
            pauStack_190 = pauVar8;
            pauStack_d0 = pauVar8;
            if (1 < bVar1) {
              if (bVar1 == 2) {
                puVar9 = (undefined8 *)_malloc(8);
                uVar5 = 8;
                if (puVar9 != (undefined8 *)0x0) {
                  *puVar9 = 0x6b63616264656566;
                  uStack_b8 = 8;
                  goto LAB_101489a3c;
                }
              }
              else if (bVar1 == 3) {
                puVar9 = (undefined8 *)_malloc(7);
                uVar5 = 7;
                if (puVar9 != (undefined8 *)0x0) {
                  *(undefined4 *)((long)puVar9 + 3) = 0x74786574;
                  uVar14 = 0x746e6f63;
                  goto LAB_1014899b8;
                }
              }
              else {
                puVar9 = (undefined8 *)_malloc(5);
                uVar5 = 5;
                if (puVar9 != (undefined8 *)0x0) {
                  *(undefined1 *)((long)puVar9 + 4) = 0x72;
                  *(undefined4 *)puVar9 = 0x6f727265;
                  uStack_b8 = 5;
                  goto LAB_101489a3c;
                }
              }
LAB_101489ce8:
              func_0x0001087c9084(1,uVar5);
              goto LAB_101489d00;
            }
            if (bVar1 == 0) {
              puVar9 = (undefined8 *)_malloc(7);
              uVar5 = 7;
              if (puVar9 == (undefined8 *)0x0) goto LAB_101489ce8;
              *(undefined4 *)((long)puVar9 + 3) = 0x676e696e;
              uVar14 = 0x6e726177;
LAB_1014899b8:
              *(undefined4 *)puVar9 = uVar14;
              uStack_b8 = 7;
            }
            else {
              puVar9 = (undefined8 *)_malloc(4);
              uVar5 = 4;
              if (puVar9 == (undefined8 *)0x0) goto LAB_101489ce8;
              *(undefined4 *)puVar9 = 0x706f7473;
              uStack_b8 = 4;
            }
LAB_101489a3c:
            uStack_c0 = 0x8000000000000003;
            puStack_b0 = puVar9;
            uStack_a8 = uStack_b8;
            FUN_101497a9c(&uStack_180,&uStack_1e0,&uStack_d8,&uStack_c0);
            uStack_118 = uStack_170;
            uStack_120 = uStack_178;
            uStack_108 = uStack_160;
            uStack_110 = uStack_168;
            uStack_f8 = uStack_150;
            uStack_100 = uStack_158;
            uStack_e8 = uStack_140;
            uStack_f0 = uStack_148;
            uStack_e0 = uStack_138;
            if (uStack_178 != 0x8000000000000005) {
              FUN_100de6690(&uStack_120);
            }
            uVar17 = uStack_198;
            if (uStack_1e0 == 0x8000000000000000) goto LAB_10148985c;
            uVar10 = FUN_10063fe00(&uStack_1e0,&UNK_108c72520,4,*(undefined8 *)(pbVar18 + -0x10),
                                   *(undefined8 *)(pbVar18 + -8));
            uVar17 = uStack_1d8;
            uVar2 = uStack_1e0;
            if (uVar10 == 0) {
              if (uStack_1e0 == 0x8000000000000000) {
                if (uStack_1d8 == 0x8000000000000005) {
                  func_0x000108a079f0(&UNK_109b9f7c8,0x19,&UNK_10b46a510);
                  goto LAB_101489d00;
                }
                uStack_218 = uStack_1c8;
                uStack_220 = uStack_1d0;
                uStack_208 = uStack_1b8;
                uStack_210 = uStack_1c0;
                uStack_1f8 = uStack_1a8;
                uStack_200 = uStack_1b0;
                uStack_1f0 = uStack_1a0;
                uStack_1e8 = uStack_198;
                uStack_228 = uStack_1d8;
                pauVar8 = (undefined1 (*) [16])0x0;
              }
              else {
                uStack_228 = uStack_1e0;
                uStack_220 = uStack_1d8;
                uStack_210 = uStack_1c8;
                uStack_218 = uStack_1d0;
                uStack_200 = uStack_1b8;
                uStack_208 = uStack_1c0;
                uStack_1f0 = uStack_1a8;
                uStack_1f8 = uStack_1b0;
                uStack_1e8 = uStack_1a0;
                pauVar8 = pauStack_190;
                if ((uStack_198 & 0x7fffffffffffffff) != 0) {
                  pauVar8 = (undefined1 (*) [16])_free();
                }
                if (uVar2 == 0x8000000000000005) goto LAB_101489880;
              }
              uVar10 = uStack_230;
              if (uStack_230 == uStack_240) {
                pauVar8 = (undefined1 (*) [16])
                          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hd86cb4541401251eE
                                    (&uStack_240);
              }
              uVar17 = 0;
              puVar15 = (ulong *)(lStack_238 + uVar10 * 0x48);
              puVar15[8] = uStack_1e8;
              puVar15[1] = uStack_220;
              *puVar15 = uStack_228;
              puVar15[3] = uStack_210;
              puVar15[2] = uStack_218;
              puVar15[5] = uStack_200;
              puVar15[4] = uStack_208;
              puVar15[7] = uStack_1f0;
              puVar15[6] = uStack_1f8;
              uStack_230 = uVar10 + 1;
              goto LAB_101489880;
            }
          }
          uVar17 = uVar10;
          pauVar8 = (undefined1 (*) [16])FUN_100e040f0(&uStack_1e0);
        }
LAB_101489880:
        lVar6 = lStack_238;
        pbVar18 = pbVar18 + 0x20;
        lVar13 = lVar13 + -0x20;
        if (uVar17 != 0) {
          lVar13 = uStack_230 + 1;
          lVar11 = lStack_238;
          while (lVar13 = lVar13 + -1, lVar13 != 0) {
            FUN_100de6690(lVar11);
            lVar11 = lVar11 + 0x48;
          }
          if (uStack_240 != 0) {
            _free(lVar6);
          }
          _free(lStack_250);
          return uVar17;
        }
      } while( true );
    }
    uVar5 = 0;
LAB_1014897e8:
    func_0x0001087c9084(uVar5,lVar13);
LAB_101489d00:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101489d04);
    (*pcVar3)();
  }
  uVar5 = func_0x0001087c9084(1,7);
  FUN_100de6690(&uStack_228);
  FUN_100e238ac(&uStack_240);
  _free(lStack_250);
  auVar19 = __Unwind_Resume(uVar5);
  lVar13 = auVar19._8_8_;
  plVar12 = auVar19._0_8_;
  if (*plVar12 == -0x8000000000000000) {
    uStack_2f0 = 10;
    uVar17 = func_0x000108a4a0f8(&uStack_2f0,0,0);
    return uVar17;
  }
  puVar9 = (undefined8 *)_malloc(0xb);
  if (puVar9 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar9 + 7) = 0x73726576;
    *puVar9 = 0x767265735f70636d;
    if (plVar12[9] != -0x8000000000000000 && plVar12[9] != 0) {
      _free(plVar12[10]);
    }
    plVar12[10] = (long)puVar9;
    plVar12[0xb] = 0xb;
    plVar12[9] = -0x8000000000000000;
    lStack_340 = plVar12[0xb];
    lStack_348 = plVar12[10];
    uStack_350 = 0xb;
    func_0x000100644d9c(&lStack_338,lVar13,uVar17);
    if (lStack_338 == -0x7ffffffffffffffb) {
      _free(lStack_348);
      return uStack_330;
    }
    FUN_101497a9c(&uStack_2f0,plVar12,&uStack_350,&lStack_338);
    uStack_398 = uStack_2e0;
    lStack_3a0 = lStack_2e8;
    uStack_388 = uStack_2d0;
    uStack_390 = uStack_2d8;
    uStack_378 = uStack_2c0;
    uStack_380 = uStack_2c8;
    uStack_368 = uStack_2b0;
    uStack_370 = uStack_2b8;
    uStack_360 = uStack_2a8;
    if (lStack_2e8 != -0x7ffffffffffffffb) {
      FUN_100de6690(&lStack_3a0);
    }
    return 0;
  }
  uVar5 = func_0x0001087c9084(1,0xb);
  _free(lStack_348);
  auVar19 = __Unwind_Resume(uVar5);
  plVar16 = auVar19._8_8_;
  plVar12 = auVar19._0_8_;
  if (*plVar12 == -0x8000000000000000) {
    lStack_440 = 10;
    uVar17 = func_0x000108a4a0f8(&lStack_440,0,0);
    return uVar17;
  }
  puVar9 = (undefined8 *)_malloc(0x22);
  if (puVar9 != (undefined8 *)0x0) {
    *(undefined2 *)(puVar9 + 4) = 0x7374;
    puVar9[1] = 0x6b726f7774656e5f;
    *puVar9 = 0x6465736f706f7270;
    puVar9[3] = 0x6e656d646e656d61;
    puVar9[2] = 0x5f7963696c6f705f;
    uVar17 = 0x8000000000000000;
    if (plVar12[9] != -0x8000000000000000 && plVar12[9] != 0) {
      _free(plVar12[10]);
    }
    plVar12[10] = (long)puVar9;
    plVar12[0xb] = 0x22;
    plVar12[9] = -0x8000000000000000;
    lStack_4c8 = plVar12[0xb];
    lStack_4d0 = plVar12[10];
    uStack_4d8 = 0x22;
    if (*plVar16 == -0x8000000000000000) {
      uStack_488 = 0x8000000000000000;
      goto LAB_10148a12c;
    }
    uVar17 = plVar16[2];
    lVar13 = uVar17 * 0x48;
    if (0x1c71c71c71c71c7 < uVar17) {
      uVar5 = 0;
      goto LAB_10148a008;
    }
    lVar6 = plVar16[1];
    if (lVar13 == 0) {
      uStack_480 = 8;
      uStack_488 = 0;
    }
    else {
      uStack_480 = _malloc(lVar13);
      uStack_488 = uVar17;
      if (uStack_480 == 0) goto LAB_10148a1e4;
    }
    uStack_478 = 0;
    if (uVar17 != 0) {
      uStack_478 = 0;
      lVar13 = uVar17 << 5;
      do {
        FUN_1006484d0(&lStack_440,lVar6);
        uVar10 = uStack_478;
        uVar17 = uStack_480;
        if (lStack_440 == -0x7ffffffffffffffb) {
          lVar13 = uStack_478 + 1;
          uVar10 = uStack_480;
          while (lVar13 = lVar13 + -1, lVar13 != 0) {
            FUN_100de6690(uVar10);
            uVar10 = uVar10 + 0x48;
          }
          if (uStack_488 != 0) {
            _free(uVar17);
          }
          _free(lStack_4d0);
          return uStack_438;
        }
        if (uStack_478 == uStack_488) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hd86cb4541401251eE(&uStack_488);
        }
        lVar6 = lVar6 + 0x20;
        plVar16 = (long *)(uStack_480 + uVar10 * 0x48);
        plVar16[1] = uStack_438;
        *plVar16 = lStack_440;
        plVar16[3] = lStack_428;
        plVar16[2] = lStack_430;
        plVar16[5] = lStack_418;
        plVar16[4] = lStack_420;
        plVar16[7] = lStack_408;
        plVar16[6] = lStack_410;
        plVar16[8] = lStack_400;
        uStack_478 = uVar10 + 1;
        lVar13 = lVar13 + -0x20;
      } while (lVar13 != 0);
    }
    uStack_4b8 = uStack_478;
    lStack_4c0 = uStack_480;
    uVar17 = 0x8000000000000004;
LAB_10148a12c:
    uStack_470 = uStack_4b8;
    uStack_478 = lStack_4c0;
    uStack_460 = uStack_4a8;
    uStack_468 = uStack_4b0;
    uStack_450 = uStack_498;
    uStack_458 = uStack_4a0;
    uStack_448 = uStack_490;
    uStack_480 = uStack_488;
    uStack_488 = uVar17;
    FUN_101497a9c(&lStack_440,plVar12,&uStack_4d8,&uStack_488);
    lStack_518 = lStack_430;
    uStack_520 = uStack_438;
    lStack_508 = lStack_420;
    lStack_510 = lStack_428;
    lStack_4f8 = lStack_410;
    lStack_500 = lStack_418;
    lStack_4e8 = lStack_400;
    lStack_4f0 = lStack_408;
    uStack_4e0 = uStack_3f8;
    if (uStack_438 != 0x8000000000000005) {
      FUN_100de6690(&uStack_520);
    }
    return 0;
  }
  func_0x0001087c9084(1,0x22);
LAB_10148a1e4:
  uVar5 = 8;
LAB_10148a008:
  func_0x0001087c9084(uVar5,lVar13);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10148a010);
  (*pcVar3)();
}

