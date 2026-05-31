
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10148db3c(long *param_1,undefined8 param_2,ulong param_3,int *param_4)

{
  ushort *puVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined1 (*pauVar5) [16];
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 (*pauVar9) [16];
  undefined *puVar10;
  ulong *puVar11;
  long lVar12;
  long unaff_x22;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 auVar21 [16];
  undefined8 uStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  ulong uStack_398;
  long lStack_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  undefined1 (*pauStack_2e0) [16];
  undefined8 uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  undefined8 uStack_288;
  undefined1 (*pauStack_280) [16];
  undefined8 uStack_278;
  ulong uStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  if (*param_1 == -0x8000000000000000) {
    uStack_180 = 10;
    uVar19 = func_0x000108a4a0f8(&uStack_180,0,0);
    return uVar19;
  }
  uVar19 = param_3;
  lVar4 = _malloc(param_3);
  if (lVar4 == 0) {
    uVar7 = func_0x0001087c9084(1,param_3);
    _free(lStack_1f0);
    uVar7 = __Unwind_Resume(uVar7);
    if (unaff_x22 != 0) {
      _free(uStack_d0);
    }
    FUN_100e040f0(&uStack_1e0);
    _free(lStack_1f0);
    __Unwind_Resume(uVar7);
    auVar21 = func_0x000108a07bc4();
    plVar13 = auVar21._8_8_;
    plVar16 = auVar21._0_8_;
    if (*plVar16 == -0x8000000000000000) {
      uStack_2d0 = 10;
      uVar19 = func_0x000108a4a0f8(&uStack_2d0,0,0);
      return uVar19;
    }
    puVar8 = (undefined8 *)_malloc(0xf);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0001087c9084(1,0xf);
    }
    else {
      *puVar8 = 0x7265766965636572;
      *(undefined8 *)((long)puVar8 + 7) = 0x73746e6567615f72;
      if (plVar16[9] != -0x8000000000000000 && plVar16[9] != 0) {
        _free(plVar16[10]);
      }
      plVar16[10] = (long)puVar8;
      plVar16[0xb] = 0xf;
      plVar16[9] = -0x8000000000000000;
      lStack_3a0 = plVar16[0xb];
      lStack_3a8 = plVar16[10];
      uStack_3b0 = 0xf;
      param_3 = uVar19 * 0x48;
      if (0x1c71c71c71c71c7 < uVar19) {
        uVar7 = 0;
        goto LAB_10148e16c;
      }
      lVar4 = _malloc(param_3);
      if (lVar4 != 0) {
        uStack_388 = 0;
        uStack_398 = uVar19;
        lStack_390 = lVar4;
        pauVar9 = (undefined1 (*) [16])
                  (*
                  ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                  )();
        lVar4 = uVar19 << 6;
        pauVar5 = pauVar9;
        do {
          if (lVar4 == 0) {
            uStack_318 = uStack_388;
            uStack_320 = lStack_390;
            uStack_330 = 0x8000000000000004;
            uStack_328 = uStack_398;
            FUN_101497a9c(&uStack_2d0,plVar16,&uStack_3b0,&uStack_330);
            uStack_378 = uStack_2c0;
            uStack_380 = uStack_2c8;
            uStack_368 = uStack_2b0;
            uStack_370 = uStack_2b8;
            uStack_358 = uStack_2a0;
            uStack_360 = uStack_2a8;
            uStack_348 = uStack_290;
            uStack_350 = uStack_298;
            uStack_340 = uStack_288;
            if (uStack_2c8 != 0x8000000000000005) {
              FUN_100de6690(&uStack_380);
            }
            return 0;
          }
          lVar12 = *plVar13;
          lVar17 = 1;
          if (lVar12 != -0x8000000000000000) {
            lVar17 = 2;
          }
          lVar15 = plVar13[3];
          if (lVar15 != -0x8000000000000000) {
            lVar17 = lVar17 + 1;
          }
          if (pauVar9[1][0] == '\x01') {
            auVar21 = *pauVar9;
          }
          else {
            auVar21 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E(pauVar5);
            *(long *)(*pauVar9 + 8) = auVar21._8_8_;
            pauVar9[1][0] = 1;
          }
          *(long *)*pauVar9 = auVar21._0_8_ + 1;
          pauVar5 = (undefined1 (*) [16])
                    FUN_105dc99f8(&uStack_2d0,lVar17,auVar21._0_8_,auVar21._8_8_);
          uStack_288 = 0x8000000000000000;
          uVar19 = uStack_2c8;
          if (uStack_2d0 != 0x8000000000000001) {
            uStack_2f8 = uStack_298;
            uStack_300 = uStack_2a0;
            uStack_2f0 = uStack_290;
            uStack_2e8 = 0x8000000000000000;
            uStack_2d8 = uStack_278;
            pauStack_2e0 = pauStack_280;
            uStack_318 = uStack_2b8;
            uStack_320 = uStack_2c0;
            uStack_308 = uStack_2a8;
            uStack_310 = uStack_2b0;
            uStack_330 = uStack_2d0;
            uStack_328 = uStack_2c8;
            uVar19 = 0x8000000000000000;
            if (uStack_2d0 == 0x8000000000000000) {
LAB_10148e1b8:
              uStack_2e8 = uVar19;
              uStack_2d0 = 10;
              uVar19 = func_0x000108a4a0f8(&uStack_2d0,0,0);
            }
            else {
              uVar19 = func_0x000100635ac4(&uStack_330,&UNK_108ca2143,9,plVar13 + 6);
              if (uVar19 == 0) {
                if (lVar12 != -0x8000000000000000) {
                  uVar19 = uStack_2e8;
                  if (uStack_330 == 0x8000000000000000) goto LAB_10148e1b8;
                  uVar19 = func_0x000100643448(&uStack_330,&UNK_108caec8c,0xe,plVar13);
                  if (uVar19 != 0) goto LAB_10148e1d4;
                }
                if (lVar15 != -0x8000000000000000) {
                  uVar19 = uStack_2e8;
                  if (uStack_330 == 0x8000000000000000) goto LAB_10148e1b8;
                  uVar19 = func_0x000100643448(&uStack_330,&UNK_108caec9a,10,plVar13 + 3);
                  if (uVar19 != 0) goto LAB_10148e1d4;
                }
                uVar19 = uStack_328;
                uVar6 = uStack_330;
                pauVar5 = (undefined1 (*) [16])0x0;
                if (uStack_330 == 0x8000000000000000) {
                  if (uStack_328 == 0x8000000000000005) {
                    func_0x000108a079f0(&UNK_109b9f7c8,0x19,&UNK_10b46a510);
                    goto LAB_10148e508;
                  }
                  uStack_370 = uStack_318;
                  uStack_378 = uStack_320;
                  uStack_360 = uStack_308;
                  uStack_368 = uStack_310;
                  uStack_350 = uStack_2f8;
                  uStack_358 = uStack_300;
                  uStack_348 = uStack_2f0;
                  uStack_340 = uStack_2e8;
                  uStack_380 = uStack_328;
                }
                else {
                  uStack_380 = uStack_330;
                  uStack_378 = uStack_328;
                  uStack_368 = uStack_318;
                  uStack_370 = uStack_320;
                  uStack_358 = uStack_308;
                  uStack_360 = uStack_310;
                  uStack_348 = uStack_2f8;
                  uStack_350 = uStack_300;
                  uStack_340 = uStack_2f0;
                  pauVar5 = pauStack_2e0;
                  if ((uStack_2e8 & 0x7fffffffffffffff) != 0) {
                    pauVar5 = (undefined1 (*) [16])_free();
                  }
                  if (uVar6 == 0x8000000000000005) goto LAB_10148e1dc;
                }
                uVar6 = uStack_388;
                if (uStack_388 == uStack_398) {
                  pauVar5 = (undefined1 (*) [16])
                            __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hd86cb4541401251eE
                                      (&uStack_398);
                }
                uVar19 = 0;
                puVar11 = (ulong *)(lStack_390 + uVar6 * 0x48);
                puVar11[8] = uStack_340;
                puVar11[1] = uStack_378;
                *puVar11 = uStack_380;
                puVar11[3] = uStack_368;
                puVar11[2] = uStack_370;
                puVar11[5] = uStack_358;
                puVar11[4] = uStack_360;
                puVar11[7] = uStack_348;
                puVar11[6] = uStack_350;
                uStack_388 = uVar6 + 1;
                goto LAB_10148e1dc;
              }
            }
LAB_10148e1d4:
            pauVar5 = (undefined1 (*) [16])FUN_100e040f0(&uStack_330);
          }
LAB_10148e1dc:
          lVar17 = lStack_390;
          plVar13 = plVar13 + 8;
          lVar4 = lVar4 + -0x40;
          if (uVar19 != 0) {
            lVar4 = uStack_388 + 1;
            lVar12 = lStack_390;
            while (lVar4 = lVar4 + -1, lVar4 != 0) {
              FUN_100de6690(lVar12);
              lVar12 = lVar12 + 0x48;
            }
            if (uStack_398 != 0) {
              _free(lVar17);
            }
            _free(lStack_3a8);
            return uVar19;
          }
        } while( true );
      }
    }
    uVar7 = 8;
LAB_10148e16c:
    func_0x0001087c9084(uVar7,param_3);
LAB_10148e508:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10148e50c);
    (*pcVar2)();
  }
  _memcpy(lVar4,param_2,param_3);
  if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
    _free(param_1[10]);
  }
  param_1[10] = lVar4;
  param_1[0xb] = param_3;
  param_1[9] = -0x8000000000000000;
  lStack_1e8 = param_1[0xb];
  lStack_1f0 = param_1[10];
  uStack_1f8 = param_3;
  if (*param_4 == 1) {
    plVar13 = *(long **)(param_4 + 2);
    uVar19 = *(ulong *)(param_4 + 4);
    lVar17 = *(long *)(param_4 + 6);
    bVar3 = plVar13 != (long *)0x0;
    lVar4 = lVar17;
    if (!bVar3) {
      lVar4 = 0;
    }
    pauVar5 = (undefined1 (*) [16])
              (*
              ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
              )();
    if (pauVar5[1][0] == '\x01') {
      auVar21 = *pauVar5;
    }
    else {
      auVar21 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar5 + 8) = auVar21._8_8_;
      pauVar5[1][0] = 1;
    }
    *(long *)*pauVar5 = auVar21._0_8_ + 1;
    FUN_105dc99f8(&uStack_180,lVar4,auVar21._0_8_,auVar21._8_8_);
    uStack_138 = 0x8000000000000000;
    uVar6 = uStack_178;
    if (uStack_180 != 0x8000000000000001) {
      uStack_1b8 = uStack_158;
      uStack_1c0 = uStack_160;
      uStack_1a8 = uStack_148;
      uStack_1b0 = uStack_150;
      uStack_198 = 0x8000000000000000;
      uStack_1a0 = uStack_140;
      uStack_188 = uStack_128;
      uStack_190 = uStack_130;
      uStack_1d8 = uStack_178;
      uStack_1e0 = uStack_180;
      uStack_1c8 = uStack_168;
      uStack_1d0 = uStack_170;
      if (lVar4 != 0) {
        plVar16 = (long *)0x0;
        do {
          if (!bVar3) {
            func_0x000108a07a20(&UNK_10b212c38);
            goto LAB_10148e034;
          }
          if (plVar16 == (long *)0x0) {
            for (; plVar16 = plVar13, uVar19 != 0; uVar19 = uVar19 - 1) {
              plVar13 = (long *)plVar16[0x86];
            }
            plVar13 = (long *)0x0;
            uVar19 = 0;
            plVar18 = plVar16;
            if (*(short *)((long)plVar16 + 0x42a) == 0) goto LAB_10148dd2c;
          }
          else {
            plVar18 = plVar16;
            if (*(ushort *)((long)plVar16 + 0x42a) <= uVar19) {
LAB_10148dd2c:
              do {
                plVar16 = (long *)*plVar18;
                if (plVar16 == (long *)0x0) {
                  func_0x000108a07a20(&UNK_10b2382c8);
                  goto LAB_10148e034;
                }
                plVar13 = (long *)((long)plVar13 + 1);
                puVar1 = (ushort *)(plVar18 + 0x85);
                uVar19 = (ulong)*puVar1;
                plVar18 = plVar16;
              } while (*(ushort *)((long)plVar16 + 0x42a) <= *puVar1);
            }
          }
          uVar20 = uVar19 + 1;
          if (plVar13 != (long *)0x0) {
            plVar18 = plVar16 + uVar20;
            do {
              plVar18 = (long *)plVar18[0x86];
              plVar13 = (long *)((long)plVar13 + -1);
            } while (plVar13 != (long *)0x0);
            uVar20 = 0;
            if (uStack_1e0 != 0x8000000000000000) goto LAB_10148dd90;
LAB_10148df8c:
            puVar10 = &UNK_10b24c5c0;
LAB_10148dfa0:
            __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,puVar10);
            goto LAB_10148e034;
          }
          plVar18 = plVar16;
          if (uStack_1e0 == 0x8000000000000000) goto LAB_10148df8c;
LAB_10148dd90:
          uVar14 = plVar16[uVar19 * 3 + 3];
          if (uVar14 != 0) {
            lVar4 = plVar16[uVar19 * 3 + 2];
            uVar6 = _malloc(uVar14);
            if (uVar6 == 0) {
              func_0x0001087c9084(1,uVar14);
              goto LAB_10148e034;
            }
            _memcpy(uVar6,lVar4,uVar14);
            if (uVar14 != 0x8000000000000000) goto joined_r0x00010148ddd0;
LAB_10148df3c:
            FUN_100e040f0(&uStack_1e0);
            goto LAB_10148df60;
          }
          uVar6 = 1;
joined_r0x00010148ddd0:
          if (((uStack_198 != 0x8000000000000000) && (uStack_198 != 0)) &&
             (_free(uStack_190), uStack_1e0 == 0x8000000000000000)) {
            puVar10 = &UNK_10b24c5f0;
            uStack_198 = uVar14;
            uStack_190 = uVar6;
            uStack_188 = uVar14;
            goto LAB_10148dfa0;
          }
          uStack_198 = 0x8000000000000000;
          if (uVar14 == 0x8000000000000000) {
            uStack_190 = uVar6;
            uStack_188 = uVar14;
            func_0x000108a079f0(&UNK_108cd2aad,0x2b,&UNK_10b24c5d8);
            goto LAB_10148e034;
          }
          uStack_190 = uVar6;
          uStack_188 = uVar14;
          uStack_d8 = uVar14;
          uStack_d0 = uVar6;
          uStack_c8 = uVar14;
          FUN_10070fe2c(&uStack_c0,plVar16 + uVar19 * 9 + 0x22);
          uVar6 = uStack_b8;
          if (uStack_c0 == 0x8000000000000005) {
            if (uVar14 != 0) {
              _free(uStack_d0);
            }
            goto LAB_10148df3c;
          }
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
          plVar13 = (long *)0x0;
          bVar3 = true;
          lVar17 = lVar17 + -1;
          plVar16 = plVar18;
          uVar19 = uVar20;
        } while (lVar17 != 0);
      }
      uStack_178 = uStack_1d8;
      uStack_180 = uStack_1e0;
      uStack_148 = uStack_1a8;
      uStack_150 = uStack_1b0;
      uStack_138 = uStack_198;
      uStack_140 = uStack_1a0;
      uStack_128 = uStack_188;
      uStack_130 = uStack_190;
      uStack_168 = uStack_1c8;
      uStack_170 = uStack_1d0;
      uStack_158 = uStack_1b8;
      uStack_160 = uStack_1c0;
      if (uStack_1e0 == 0x8000000000000000) {
        __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109b9e649,0x28,&UNK_10b46a4e0);
LAB_10148e034:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10148e038);
        (*pcVar2)();
      }
      uStack_98 = uStack_1b8;
      uStack_a0 = uStack_1c0;
      uStack_88 = uStack_1a8;
      uStack_90 = uStack_1b0;
      uStack_80 = uStack_1a0;
      uStack_b8 = uStack_1d8;
      uStack_c0 = uStack_1e0;
      uStack_a8 = uStack_1c8;
      uStack_b0 = uStack_1d0;
      if ((uStack_198 & 0x7fffffffffffffff) != 0) {
        _free(uStack_190);
      }
      uVar6 = uStack_b8;
      if (uStack_c0 != 0x8000000000000005) goto LAB_10148dc4c;
    }
LAB_10148df60:
    _free(lStack_1f0);
  }
  else {
    uStack_c0 = 0x8000000000000000;
LAB_10148dc4c:
    FUN_101497a9c(&uStack_180,param_1,&uStack_1f8,&uStack_c0);
    uStack_1d8 = uStack_170;
    uStack_1e0 = uStack_178;
    uStack_1c8 = uStack_160;
    uStack_1d0 = uStack_168;
    uStack_1b8 = uStack_150;
    uStack_1c0 = uStack_158;
    uStack_1a8 = uStack_140;
    uStack_1b0 = uStack_148;
    uStack_1a0 = uStack_138;
    if (uStack_178 != 0x8000000000000005) {
      FUN_100de6690(&uStack_1e0);
    }
    uVar6 = 0;
  }
  return uVar6;
}

