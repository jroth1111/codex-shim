
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100644d9c(undefined8 *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  undefined1 (*pauVar4) [16];
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  double dVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  
  lVar15 = *param_2;
  pauVar4 = (undefined1 (*) [16])
            (*
            ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
            )();
  if (pauVar4[1][0] == '\x01') {
    auVar16 = *pauVar4;
  }
  else {
    auVar16 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar4 + 8) = auVar16._8_8_;
    pauVar4[1][0] = 1;
  }
  *(long *)*pauVar4 = auVar16._0_8_ + 1;
  FUN_105dc99f8(&puStack_180,param_3,auVar16._0_8_,auVar16._8_8_);
  puStack_138 = (undefined8 *)0x8000000000000000;
  if (puStack_180 == (undefined8 *)0x8000000000000001) {
    *param_1 = 0x8000000000000005;
    param_1[1] = puStack_178;
  }
  else {
    uVar9 = CONCAT17(-(-1 < lVar15),
                     CONCAT16(-(-1 < (char)((ulong)lVar15 >> 0x30)),
                              CONCAT15(-(-1 < (char)((ulong)lVar15 >> 0x28)),
                                       CONCAT14(-(-1 < (char)((ulong)lVar15 >> 0x20)),
                                                CONCAT13(-(-1 < (char)((ulong)lVar15 >> 0x18)),
                                                         CONCAT12(-(-1 < (char)((ulong)lVar15 >>
                                                                               0x10)),
                                                                  CONCAT11(-(-1 < (char)((ulong)
                                                  lVar15 >> 8)),-(-1 < (char)lVar15)))))))) &
            0x8080808080808080;
    plVar13 = param_2 + 1;
    puStack_278 = puStack_158;
    puStack_280 = puStack_160;
    puStack_268 = puStack_148;
    puStack_270 = puStack_150;
    puStack_258 = (undefined8 *)0x8000000000000000;
    puStack_260 = puStack_140;
    puStack_248 = puStack_128;
    puStack_250 = puStack_130;
    puStack_298 = puStack_178;
    puStack_2a0 = puStack_180;
    puStack_288 = puStack_168;
    puStack_290 = puStack_170;
    do {
      if (param_3 == 0) {
        puStack_158 = puStack_278;
        puStack_160 = puStack_280;
        puStack_148 = puStack_268;
        puStack_150 = puStack_270;
        puStack_138 = puStack_258;
        puStack_140 = puStack_260;
        puStack_128 = puStack_248;
        puStack_130 = puStack_250;
        puStack_178 = puStack_298;
        puStack_180 = puStack_2a0;
        puStack_168 = puStack_288;
        puStack_170 = puStack_290;
        if (puStack_2a0 != (undefined8 *)0x8000000000000000) {
          param_1[5] = puStack_278;
          param_1[4] = puStack_280;
          param_1[7] = puStack_268;
          param_1[6] = puStack_270;
          param_1[8] = puStack_260;
          param_1[1] = puStack_298;
          *param_1 = puStack_2a0;
          param_1[3] = puStack_288;
          param_1[2] = puStack_290;
          if (((ulong)puStack_258 & 0x7fffffffffffffff) == 0) {
            return;
          }
          _free(puStack_250);
          return;
        }
        __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109b9e649,0x28,&UNK_10b46a4e0);
        goto LAB_1006459a8;
      }
      while (uVar9 == 0) {
        lVar15 = *plVar13;
        param_2 = param_2 + -0x1c8;
        plVar13 = plVar13 + 1;
        uVar9 = CONCAT17(-(-1 < lVar15),
                         CONCAT16(-(-1 < (char)((ulong)lVar15 >> 0x30)),
                                  CONCAT15(-(-1 < (char)((ulong)lVar15 >> 0x28)),
                                           CONCAT14(-(-1 < (char)((ulong)lVar15 >> 0x20)),
                                                    CONCAT13(-(-1 < (char)((ulong)lVar15 >> 0x18)),
                                                             CONCAT12(-(-1 < (char)((ulong)lVar15 >>
                                                                                   0x10)),
                                                                      CONCAT11(-(-1 < (char)((ulong)
                                                  lVar15 >> 8)),-(-1 < (char)lVar15)))))))) &
                0x8080808080808080;
      }
      if (puStack_2a0 == (undefined8 *)0x8000000000000000) {
        puVar7 = &UNK_10b24c5c0;
LAB_1006458e0:
        __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,puVar7);
LAB_1006459a8:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1006459ac);
        (*pcVar3)();
      }
      uVar1 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      iVar2 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
      puVar12 = (undefined8 *)param_2[(long)-iVar2 * 0x39 + -0x37];
      if (puVar12 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)0x1;
      }
      else {
        lVar15 = param_2[(long)-iVar2 * 0x39 + -0x38];
        puVar5 = (undefined8 *)_malloc(puVar12);
        if (puVar5 == (undefined8 *)0x0) {
          FUN_107c03c64(1,puVar12);
          goto LAB_1006459a8;
        }
        _memcpy(puVar5,lVar15,puVar12);
        if (puVar12 == (undefined8 *)0x8000000000000000) break;
      }
      if (((puStack_258 != (undefined8 *)0x8000000000000000) && (puStack_258 != (undefined8 *)0x0))
         && (_free(puStack_250), puStack_2a0 == (undefined8 *)0x8000000000000000)) {
        puVar7 = &UNK_10b24c5f0;
        puStack_258 = puVar12;
        puStack_250 = puVar5;
        puStack_248 = puVar12;
        goto LAB_1006458e0;
      }
      puStack_258 = (undefined8 *)0x8000000000000000;
      if (puVar12 == (undefined8 *)0x8000000000000000) {
        puStack_250 = puVar5;
        puStack_248 = puVar12;
        FUN_107c05cac(&UNK_108cd2aad,0x2b,&UNK_10b24c5d8);
        goto LAB_1006459a8;
      }
      puStack_240 = puVar12;
      puStack_238 = puVar5;
      puStack_230 = puVar12;
      if (pauVar4[1][0] == '\x01') {
        auVar16 = *pauVar4;
        puStack_250 = puVar5;
        puStack_248 = puVar12;
      }
      else {
        puStack_250 = puVar5;
        puStack_248 = puVar12;
        auVar16 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        *(long *)(*pauVar4 + 8) = auVar16._8_8_;
        pauVar4[1][0] = 1;
      }
      *(long *)*pauVar4 = auVar16._0_8_ + 1;
      FUN_105dc99f8(&puStack_180,0,auVar16._0_8_,auVar16._8_8_);
      puStack_138 = (undefined8 *)0x8000000000000000;
      puVar5 = puStack_178;
      if (puStack_180 == (undefined8 *)0x8000000000000001) {
LAB_1006452e8:
        if (puVar12 != (undefined8 *)0x0) {
LAB_1006452ec:
          _free(puStack_238);
        }
      }
      else {
        puStack_1a8 = puStack_148;
        puStack_1b0 = puStack_150;
        puStack_198 = (undefined8 *)0x8000000000000000;
        puStack_1a0 = puStack_140;
        puStack_188 = puStack_128;
        puStack_190 = puStack_130;
        puStack_1c8 = puStack_168;
        puStack_1d0 = puStack_170;
        puStack_1b8 = puStack_158;
        puStack_1c0 = puStack_160;
        puStack_1e0 = puStack_180;
        puStack_1d8 = puStack_178;
        plVar8 = param_2 + (long)-iVar2 * 0x39 + -0x2f;
        if ((int)param_2[(long)-iVar2 * 0x39 + -0x36] == 1) {
          lVar15 = param_2[(long)-iVar2 * 0x39 + -0x29];
          lVar11 = param_2[(long)-iVar2 * 0x39 + -0x35];
          lVar10 = *plVar8;
          puVar5 = (undefined8 *)
                   FUN_10063fe00(&puStack_1e0,&UNK_108cac8dc,3,param_2[(long)-iVar2 * 0x39 + -0x25],
                                 param_2[(long)-iVar2 * 0x39 + -0x24]);
          if ((puVar5 == (undefined8 *)0x0) &&
             ((lVar15 == -0x8000000000000000 ||
              (puVar5 = (undefined8 *)
                        func_0x000100643448(&puStack_1e0,&UNK_108cac8df,0x14,
                                            param_2 + (long)-iVar2 * 0x39 + -0x29),
              puVar5 == (undefined8 *)0x0)))) {
            if (lVar11 == 0) {
              if (lVar10 != 0) goto LAB_1006451f8;
              goto LAB_100645288;
            }
            puVar5 = (undefined8 *)
                     func_0x00010063e2e4(&puStack_1e0,&UNK_108cac8f3,0xc,lVar11,
                                         param_2[(long)-iVar2 * 0x39 + -0x32]);
            if (lVar10 != 0 && puVar5 == (undefined8 *)0x0) {
LAB_1006451f8:
              puVar5 = (undefined8 *)
                       func_0x00010063e2e4(&puStack_1e0,&UNK_108cdcad0,0x10,lVar10,
                                           param_2[(long)-iVar2 * 0x39 + -0x2c]);
              goto LAB_10064521c;
            }
            if (puVar5 == (undefined8 *)0x0) goto LAB_100645288;
          }
LAB_1006452dc:
          FUN_100e040f0(&puStack_1e0);
          goto LAB_1006452e8;
        }
        lVar11 = param_2[(long)-iVar2 * 0x39 + -0x35];
        lVar10 = param_2[(long)-iVar2 * 0x39 + -0x24];
        lVar15 = *plVar8;
        puVar5 = (undefined8 *)
                 FUN_10063fe00(&puStack_1e0,&UNK_108ca281e,7,param_2[(long)-iVar2 * 0x39 + -0x2b],
                               param_2[(long)-iVar2 * 0x39 + -0x2a]);
        if (((puVar5 != (undefined8 *)0x0) ||
            (puVar5 = (undefined8 *)
                      func_0x000100638604(&puStack_1e0,&UNK_108cde3c4,4,
                                          param_2[(long)-iVar2 * 0x39 + -0x28],
                                          param_2[(long)-iVar2 * 0x39 + -0x27]),
            puVar5 != (undefined8 *)0x0)) ||
           ((lVar11 != 0 &&
            (puVar5 = (undefined8 *)
                      func_0x00010063e2e4(&puStack_1e0,&UNK_108ca2873,3,lVar11,
                                          param_2[(long)-iVar2 * 0x39 + -0x32]),
            puVar5 != (undefined8 *)0x0)))) goto LAB_1006452dc;
        if (lVar10 != 0) {
          if (puStack_1e0 == (undefined8 *)0x8000000000000000) {
            __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24c5c0);
            goto LAB_1006459a8;
          }
          puVar5 = (undefined8 *)_malloc(8);
          if (puVar5 == (undefined8 *)0x0) {
            FUN_107c03c64(1,8);
            goto LAB_1006459a8;
          }
          *puVar5 = 0x737261765f766e65;
          if ((puStack_198 != (undefined8 *)0x8000000000000000) &&
             (puStack_198 != (undefined8 *)0x0)) {
            _free(puStack_190);
          }
          puStack_188 = (undefined8 *)0x8;
          puStack_198 = (undefined8 *)0x8000000000000000;
          uStack_c8 = 8;
          uStack_d8 = 8;
          puStack_190 = puVar5;
          puStack_d0 = puVar5;
          FUN_1006487f0(&lStack_c0,param_2[(long)-iVar2 * 0x39 + -0x25],
                        param_2[(long)-iVar2 * 0x39 + -0x24]);
          puVar5 = puStack_b8;
          if (lStack_c0 == -0x7ffffffffffffffb) {
            _free(puStack_d0);
            goto LAB_1006452dc;
          }
          FUN_101497a9c(&puStack_180,&puStack_1e0,&uStack_d8,&lStack_c0);
          puStack_118 = puStack_170;
          puStack_120 = puStack_178;
          puStack_108 = puStack_160;
          puStack_110 = puStack_168;
          puStack_f8 = puStack_150;
          puStack_100 = puStack_158;
          puStack_e8 = puStack_140;
          puStack_f0 = puStack_148;
          puStack_e0 = puStack_138;
          if (puStack_178 != (undefined8 *)0x8000000000000005) {
            FUN_100de6690(&puStack_120);
          }
        }
        if (lVar15 == -0x8000000000000000) goto LAB_100645288;
        puVar5 = (undefined8 *)func_0x00010063bbfc(&puStack_1e0,&UNK_108ca1f1d,3,plVar8);
LAB_10064521c:
        if (puVar5 != (undefined8 *)0x0) goto LAB_1006452dc;
LAB_100645288:
        if (((((param_2[(long)-iVar2 * 0x39 + -0x23] != -0x8000000000000000) &&
              (puVar5 = (undefined8 *)func_0x000100643448(&puStack_1e0,&UNK_108cac8ff,0x18),
              puVar5 != (undefined8 *)0x0)) ||
             (puVar5 = (undefined8 *)
                       func_0x00010063bfa0(&puStack_1e0,&UNK_108ca2209,7,
                                           (char)param_2[(long)-iVar2 * 0x39 + -1]),
             puVar5 != (undefined8 *)0x0)) ||
            ((*(char *)((long)param_2 + (long)-iVar2 * 0x1c8 + -7) == '\x01' &&
             (puVar5 = (undefined8 *)func_0x00010063bfa0(&puStack_1e0,&UNK_108c78a68,8,1),
             puVar5 != (undefined8 *)0x0)))) ||
           (((*(byte *)((long)param_2 + (long)-iVar2 * 0x1c8 + -6) & 1) != 0 &&
            (puVar5 = (undefined8 *)func_0x00010063bfa0(&puStack_1e0,&UNK_108cac917,0x1c,1),
            puVar5 != (undefined8 *)0x0)))) goto LAB_1006452dc;
        if ((int)param_2[(long)-iVar2 * 0x39 + -10] != 1000000000) {
          if (puStack_1e0 != (undefined8 *)0x8000000000000000) {
            puVar5 = (undefined8 *)_malloc(0x13);
            uVar6 = 0x13;
            if (puVar5 != (undefined8 *)0x0) {
              *(undefined4 *)((long)puVar5 + 0xf) = 0x6365735f;
              puVar5[1] = 0x5f74756f656d6974;
              *puVar5 = 0x5f70757472617473;
              if ((puStack_198 != (undefined8 *)0x8000000000000000) &&
                 (puStack_198 != (undefined8 *)0x0)) {
                _free(puStack_190,0x13);
              }
              puStack_188 = (undefined8 *)0x13;
              puStack_198 = (undefined8 *)0x8000000000000000;
              uStack_c8 = 0x13;
              uStack_d8 = 0x13;
              puStack_190 = puVar5;
              puStack_d0 = puVar5;
              if (*(uint *)(param_2 + (long)-iVar2 * 0x39 + -10) == 1000000000) {
                lStack_c0 = -0x8000000000000000;
              }
              else {
                dVar14 = (double)NEON_ucvtf(param_2[(long)-iVar2 * 0x39 + -0xb]);
                puStack_b0 = (undefined8 *)
                             ((double)*(uint *)(param_2 + (long)-iVar2 * 0x39 + -10) / 1000000000.0
                             + dVar14);
                puStack_180 = (undefined8 *)0x8000000000000000;
                if (((double)puStack_b0 == INFINITY) || (NAN((double)puStack_b0))) {
                  puStack_b8 = puStack_178;
                  lStack_c0 = -0x8000000000000000;
                  puStack_a8 = puStack_168;
                  puStack_b0 = puStack_170;
                  puStack_98 = puStack_158;
                  puStack_a0 = puStack_160;
                  puStack_88 = puStack_148;
                  puStack_90 = puStack_150;
                  puStack_80 = puStack_140;
                }
                else {
                  puStack_b8 = (undefined8 *)0x2;
                  lStack_c0 = -0x7ffffffffffffffe;
                  FUN_105dc6c20(&puStack_180);
                }
              }
              FUN_101497a9c(&puStack_180,&puStack_1e0,&uStack_d8,&lStack_c0);
              puStack_118 = puStack_170;
              puStack_120 = puStack_178;
              puStack_108 = puStack_160;
              puStack_110 = puStack_168;
              puStack_f8 = puStack_150;
              puStack_100 = puStack_158;
              puStack_e8 = puStack_140;
              puStack_f0 = puStack_148;
              puStack_e0 = puStack_138;
              if (puStack_178 != (undefined8 *)0x8000000000000005) {
                FUN_100de6690(&puStack_120);
              }
              goto LAB_100645514;
            }
LAB_1006459a0:
            FUN_107c03c64(1,uVar6);
            goto LAB_1006459a8;
          }
LAB_100645964:
          __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24c5c0);
          goto LAB_1006459a8;
        }
LAB_100645514:
        if (puStack_1e0 == (undefined8 *)0x8000000000000000) goto LAB_100645964;
        puVar5 = (undefined8 *)_malloc(0x10);
        uVar6 = 0x10;
        if (puVar5 == (undefined8 *)0x0) goto LAB_1006459a0;
        puVar5[1] = 0x6365735f74756f65;
        *puVar5 = 0x6d69745f6c6f6f74;
        if ((puStack_198 != (undefined8 *)0x8000000000000000) && (puStack_198 != (undefined8 *)0x0))
        {
          _free(puStack_190);
        }
        puStack_188 = (undefined8 *)0x10;
        puStack_198 = (undefined8 *)0x8000000000000000;
        uStack_c8 = 0x10;
        uStack_d8 = 0x10;
        puStack_190 = puVar5;
        puStack_d0 = puVar5;
        if (*(uint *)(param_2 + (long)-iVar2 * 0x39 + -8) == 1000000000) {
          lStack_c0 = -0x8000000000000000;
        }
        else {
          dVar14 = (double)NEON_ucvtf(param_2[(long)-iVar2 * 0x39 + -9]);
          puStack_b0 = (undefined8 *)
                       ((double)*(uint *)(param_2 + (long)-iVar2 * 0x39 + -8) / 1000000000.0 +
                       dVar14);
          puStack_180 = (undefined8 *)0x8000000000000000;
          if (((double)puStack_b0 == INFINITY) || (NAN((double)puStack_b0))) {
            puStack_b8 = puStack_178;
            lStack_c0 = -0x8000000000000000;
            puStack_a8 = puStack_168;
            puStack_b0 = puStack_170;
            puStack_98 = puStack_158;
            puStack_a0 = puStack_160;
            puStack_88 = puStack_148;
            puStack_90 = puStack_150;
            puStack_80 = puStack_140;
          }
          else {
            puStack_b8 = (undefined8 *)0x2;
            lStack_c0 = -0x7ffffffffffffffe;
            FUN_105dc6c20(&puStack_180);
          }
        }
        FUN_101497a9c(&puStack_180,&puStack_1e0,&uStack_d8,&lStack_c0);
        puStack_118 = puStack_170;
        puStack_120 = puStack_178;
        puStack_108 = puStack_160;
        puStack_110 = puStack_168;
        puStack_f8 = puStack_150;
        puStack_100 = puStack_158;
        puStack_e8 = puStack_140;
        puStack_f0 = puStack_148;
        puStack_e0 = puStack_138;
        if (puStack_178 != (undefined8 *)0x8000000000000005) {
          FUN_100de6690(&puStack_120);
        }
        if (((((*(char *)((long)param_2 + (long)-iVar2 * 0x1c8 + -5) != '\x03') &&
              (puVar5 = (undefined8 *)FUN_10063f624(&puStack_1e0,&UNK_108cac280,0x1b),
              puVar5 != (undefined8 *)0x0)) ||
             ((param_2[(long)-iVar2 * 0x39 + -0x20] != -0x8000000000000000 &&
              (puVar5 = (undefined8 *)FUN_10063b4bc(&puStack_1e0,&UNK_108cac29b,0xd),
              puVar5 != (undefined8 *)0x0)))) ||
            ((param_2[(long)-iVar2 * 0x39 + -0x1d] != -0x8000000000000000 &&
             (puVar5 = (undefined8 *)FUN_10063b4bc(&puStack_1e0,&UNK_108cac2a8,0xe),
             puVar5 != (undefined8 *)0x0)))) ||
           (((param_2[(long)-iVar2 * 0x39 + -0x1a] != -0x8000000000000000 &&
             (puVar5 = (undefined8 *)FUN_10063b4bc(&puStack_1e0,&UNK_108cac946,6),
             puVar5 != (undefined8 *)0x0)) ||
            ((((param_2[(long)-iVar2 * 0x39 + -0x14] != -0x7fffffffffffffff &&
               (puVar5 = (undefined8 *)func_0x000100639314(&puStack_1e0),
               puVar5 != (undefined8 *)0x0)) ||
              ((param_2[(long)-iVar2 * 0x39 + -0x17] != -0x8000000000000000 &&
               (puVar5 = (undefined8 *)func_0x000100643448(&puStack_1e0,&UNK_108cac951,0xe),
               puVar5 != (undefined8 *)0x0)))) ||
             ((param_2[(long)-iVar2 * 0x39 + -4] != 0 &&
              (puVar5 = (undefined8 *)
                        func_0x000100634d50(&puStack_1e0,param_2[(long)-iVar2 * 0x39 + -7]),
              puVar5 != (undefined8 *)0x0)))))))) goto LAB_1006452dc;
        puStack_158 = puStack_1b8;
        puStack_160 = puStack_1c0;
        puStack_148 = puStack_1a8;
        puStack_150 = puStack_1b0;
        puStack_138 = puStack_198;
        puStack_140 = puStack_1a0;
        puStack_128 = puStack_188;
        puStack_130 = puStack_190;
        puStack_178 = puStack_1d8;
        puStack_180 = puStack_1e0;
        puStack_168 = puStack_1c8;
        puStack_170 = puStack_1d0;
        __ZN86__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeMap_GT_3end17h34ae74b1de8dd2f6E
                  (&lStack_228,&puStack_180);
        if (lStack_228 == -0x7ffffffffffffffb) {
          puVar5 = puStack_220;
          if (puVar12 == (undefined8 *)0x0) goto LAB_100644e78;
          goto LAB_1006452ec;
        }
        FUN_101497a9c(&puStack_180,&puStack_2a0,&puStack_240,&lStack_228);
        puStack_1d8 = puStack_170;
        puStack_1e0 = puStack_178;
        puStack_1c8 = puStack_160;
        puStack_1d0 = puStack_168;
        puStack_1b8 = puStack_150;
        puStack_1c0 = puStack_158;
        puStack_1a8 = puStack_140;
        puStack_1b0 = puStack_148;
        puStack_1a0 = puStack_138;
        if (puStack_178 != (undefined8 *)0x8000000000000005) {
          FUN_100de6690(&puStack_1e0);
        }
        puVar5 = (undefined8 *)0x0;
      }
LAB_100644e78:
      uVar9 = uVar9 - 1 & uVar9;
      param_3 = param_3 + -1;
    } while (puVar5 == (undefined8 *)0x0);
    *param_1 = 0x8000000000000005;
    param_1[1] = puVar5;
    FUN_100e040f0(&puStack_2a0);
  }
  return;
}

