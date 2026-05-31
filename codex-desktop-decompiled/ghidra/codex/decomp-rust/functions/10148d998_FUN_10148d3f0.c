
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10148d3f0(long *param_1,int *param_2)

{
  ushort *puVar1;
  byte bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined1 (*pauVar5) [16];
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long unaff_x21;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  undefined1 auVar17 [16];
  long lStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined4 *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_290;
  long lStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined4 *puStack_1d8;
  undefined4 *puStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  long lStack_190;
  ulong uStack_188;
  long lStack_180;
  long lStack_178;
  undefined4 *puStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  long lStack_130;
  ulong uStack_128;
  long lStack_120;
  undefined4 *puStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined4 *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  if (*param_1 == -0x8000000000000000) {
    lStack_180 = 10;
    lVar14 = func_0x000108a4a0f8(&lStack_180,0,0);
    return lVar14;
  }
  puVar4 = (undefined8 *)_malloc(0xc);
  if (puVar4 == (undefined8 *)0x0) {
    uVar7 = func_0x0001087c9084(1,0xc);
    _free(lStack_1f0);
    uVar7 = __Unwind_Resume(uVar7);
    if (unaff_x21 != 0) {
      _free(lStack_d0);
    }
    FUN_100e040f0(&lStack_1e0);
    _free(lStack_1f0);
    __Unwind_Resume(uVar7);
    auVar17 = func_0x000108a07bc4();
    uVar11 = auVar17._8_8_;
    plVar9 = auVar17._0_8_;
    if (*plVar9 == -0x8000000000000000) {
      uStack_290 = 10;
      lVar14 = func_0x000108a4a0f8(&uStack_290,0,0);
    }
    else {
      puVar6 = (undefined4 *)_malloc(4);
      if (puVar6 == (undefined4 *)0x0) {
        func_0x0001087c9084(1,4);
LAB_10148db18:
        func_0x0001087c9084(1,uVar11);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10148db28);
        (*pcVar3)();
      }
      *puVar6 = 0x65646f6d;
      if (plVar9[9] != -0x8000000000000000 && plVar9[9] != 0) {
        _free(plVar9[10]);
      }
      plVar9[10] = (long)puVar6;
      plVar9[0xb] = 4;
      plVar9[9] = -0x8000000000000000;
      lStack_2e0 = plVar9[0xb];
      lStack_2e8 = plVar9[10];
      uStack_2f0 = 4;
      if ((uVar11 & 1) == 0) {
        uVar11 = 7;
        puStack_2c8 = (undefined4 *)_malloc(7);
        if (puStack_2c8 == (undefined4 *)0x0) goto LAB_10148db18;
        *(undefined4 *)((long)puStack_2c8 + 3) = 0x64657469;
        *puStack_2c8 = 0x696d696c;
        uStack_2d0 = 7;
      }
      else {
        uVar11 = 4;
        puStack_2c8 = (undefined4 *)_malloc(4);
        if (puStack_2c8 == (undefined4 *)0x0) goto LAB_10148db18;
        *puStack_2c8 = 0x6c6c7566;
        uStack_2d0 = 4;
      }
      uStack_2d8 = 0x8000000000000003;
      uStack_2c0 = uStack_2d0;
      FUN_101497a9c(&uStack_290,plVar9,&uStack_2f0,&uStack_2d8);
      uStack_338 = uStack_280;
      lStack_340 = lStack_288;
      uStack_328 = uStack_270;
      uStack_330 = uStack_278;
      uStack_318 = uStack_260;
      uStack_320 = uStack_268;
      uStack_308 = uStack_250;
      uStack_310 = uStack_258;
      uStack_300 = uStack_248;
      if (lStack_288 != -0x7ffffffffffffffb) {
        FUN_100de6690(&lStack_340);
      }
      lVar14 = 0;
    }
    return lVar14;
  }
  *(undefined4 *)(puVar4 + 1) = 0x7374656b;
  *puVar4 = 0x636f735f78696e75;
  if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
    _free(param_1[10]);
  }
  param_1[10] = (long)puVar4;
  param_1[0xb] = 0xc;
  param_1[9] = -0x8000000000000000;
  lStack_1e8 = param_1[0xb];
  lStack_1f0 = param_1[10];
  uStack_1f8 = 0xc;
  if (*param_2 == 1) {
    pauVar5 = (undefined1 (*) [16])
              (*
              ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
              )();
    if (pauVar5[1][0] == '\x01') {
      auVar17 = *pauVar5;
    }
    else {
      auVar17 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar5 + 8) = auVar17._8_8_;
      pauVar5[1][0] = 1;
    }
    *(long *)*pauVar5 = auVar17._0_8_ + 1;
    FUN_105dc99f8(&lStack_180,0,auVar17._0_8_,auVar17._8_8_);
    uStack_138 = 0x8000000000000000;
    puVar6 = (undefined4 *)lStack_178;
    if (lStack_180 != -0x7fffffffffffffff) {
      uStack_1a8 = uStack_148;
      uStack_1b0 = uStack_150;
      uStack_198 = 0x8000000000000000;
      uStack_1a0 = uStack_140;
      uStack_188 = uStack_128;
      lStack_190 = lStack_130;
      lStack_1c8 = lStack_168;
      puStack_1d0 = puStack_170;
      uStack_1b8 = uStack_158;
      uStack_1c0 = uStack_160;
      lStack_1e0 = lStack_180;
      puStack_1d8 = (undefined4 *)lStack_178;
      plVar9 = *(long **)(param_2 + 2);
      if ((plVar9 != (long *)0x0) && (lVar14 = *(long *)(param_2 + 6), lVar14 != 0)) {
        uVar11 = *(ulong *)(param_2 + 4);
        plVar10 = (long *)0x0;
        do {
          if (plVar10 == (long *)0x0) {
            for (; plVar10 = plVar9, uVar11 != 0; uVar11 = uVar11 - 1) {
              plVar9 = (long *)plVar10[0x24];
            }
            plVar9 = (long *)0x0;
            uVar11 = 0;
            plVar16 = plVar10;
            if (*(short *)((long)plVar10 + 0x112) == 0) goto LAB_10148d580;
          }
          else {
            plVar16 = plVar10;
            if (*(ushort *)((long)plVar10 + 0x112) <= uVar11) {
LAB_10148d580:
              do {
                plVar10 = (long *)*plVar16;
                if (plVar10 == (long *)0x0) {
                  func_0x000108a07a20(&UNK_10b2382c8);
                  goto LAB_10148d924;
                }
                plVar9 = (long *)((long)plVar9 + 1);
                puVar1 = (ushort *)(plVar16 + 0x22);
                uVar11 = (ulong)*puVar1;
                plVar16 = plVar10;
              } while (*(ushort *)((long)plVar10 + 0x112) <= *puVar1);
            }
          }
          uVar15 = uVar11 + 1;
          if (plVar9 == (long *)0x0) {
            plVar16 = plVar10;
            if (lStack_1e0 != -0x8000000000000000) goto LAB_10148d5e4;
LAB_10148d880:
            puVar8 = &UNK_10b24c5c0;
LAB_10148d894:
            __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,puVar8);
            goto LAB_10148d924;
          }
          plVar16 = plVar10 + uVar15;
          do {
            plVar16 = (long *)plVar16[0x24];
            plVar9 = (long *)((long)plVar9 + -1);
          } while (plVar9 != (long *)0x0);
          uVar15 = 0;
          if (lStack_1e0 == -0x8000000000000000) goto LAB_10148d880;
LAB_10148d5e4:
          bVar2 = *(byte *)((long)plVar10 + uVar11 + 0x114);
          uVar12 = plVar10[uVar11 * 3 + 3];
          if (uVar12 == 0) {
            puVar6 = (undefined4 *)0x1;
          }
          else {
            lVar13 = plVar10[uVar11 * 3 + 2];
            puVar6 = (undefined4 *)_malloc(uVar12);
            if (puVar6 == (undefined4 *)0x0) {
              func_0x0001087c9084(1,uVar12);
              goto LAB_10148d924;
            }
            _memcpy(puVar6,lVar13,uVar12);
            if (uVar12 == 0x8000000000000000) {
              FUN_100e040f0(&lStack_1e0);
              goto LAB_10148d854;
            }
          }
          if (((uStack_198 != 0x8000000000000000) && (uStack_198 != 0)) &&
             (_free(lStack_190), lStack_1e0 == -0x8000000000000000)) {
            puVar8 = &UNK_10b24c5f0;
            uStack_198 = uVar12;
            lStack_190 = (long)puVar6;
            uStack_188 = uVar12;
            goto LAB_10148d894;
          }
          uStack_198 = 0x8000000000000000;
          if (uVar12 == 0x8000000000000000) {
            lStack_190 = (long)puVar6;
            uStack_188 = uVar12;
            func_0x000108a079f0(&UNK_108cd2aad,0x2b,&UNK_10b24c5d8);
            goto LAB_10148d924;
          }
          uStack_d8 = uVar12;
          lStack_d0 = (long)puVar6;
          uStack_c8 = uVar12;
          if ((bVar2 & 1) == 0) {
            lStack_190 = (long)puVar6;
            uStack_188 = uVar12;
            puVar6 = (undefined4 *)_malloc(5);
            uVar7 = 5;
            if (puVar6 == (undefined4 *)0x0) goto LAB_10148d90c;
            *(undefined1 *)(puVar6 + 1) = 0x77;
            *puVar6 = 0x6f6c6c61;
            lStack_b8 = 5;
          }
          else {
            lStack_190 = (long)puVar6;
            uStack_188 = uVar12;
            puVar6 = (undefined4 *)_malloc(4);
            uVar7 = 4;
            if (puVar6 == (undefined4 *)0x0) {
LAB_10148d90c:
              func_0x0001087c9084(1,uVar7);
              goto LAB_10148d924;
            }
            *puVar6 = 0x656e6f6e;
            lStack_b8 = 4;
          }
          lStack_c0 = -0x7ffffffffffffffd;
          puStack_b0 = puVar6;
          lStack_a8 = lStack_b8;
          FUN_101497a9c(&lStack_180,&lStack_1e0,&uStack_d8,&lStack_c0);
          puStack_118 = puStack_170;
          lStack_120 = lStack_178;
          uStack_108 = uStack_160;
          lStack_110 = lStack_168;
          uStack_f8 = uStack_150;
          uStack_100 = uStack_158;
          uStack_e8 = uStack_140;
          uStack_f0 = uStack_148;
          uStack_e0 = uStack_138;
          if (lStack_178 != -0x7ffffffffffffffb) {
            FUN_100de6690(&lStack_120);
          }
          plVar9 = (long *)0x0;
          lVar14 = lVar14 + -1;
          uVar11 = uVar15;
          plVar10 = plVar16;
        } while (lVar14 != 0);
      }
      lStack_178 = (long)puStack_1d8;
      lStack_180 = lStack_1e0;
      uStack_148 = uStack_1a8;
      uStack_150 = uStack_1b0;
      uStack_138 = uStack_198;
      uStack_140 = uStack_1a0;
      uStack_128 = uStack_188;
      lStack_130 = lStack_190;
      lStack_168 = lStack_1c8;
      puStack_170 = puStack_1d0;
      uStack_158 = uStack_1b8;
      uStack_160 = uStack_1c0;
      if (lStack_1e0 == -0x8000000000000000) {
        __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109b9e649,0x28,&UNK_10b46a4e0);
LAB_10148d924:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10148d928);
        (*pcVar3)();
      }
      uStack_98 = uStack_1b8;
      uStack_a0 = uStack_1c0;
      uStack_88 = uStack_1a8;
      uStack_90 = uStack_1b0;
      uStack_80 = uStack_1a0;
      lStack_b8 = (long)puStack_1d8;
      lStack_c0 = lStack_1e0;
      lStack_a8 = lStack_1c8;
      puStack_b0 = puStack_1d0;
      puVar6 = puStack_1d8;
      if ((uStack_198 & 0x7fffffffffffffff) != 0) {
        _free(lStack_190);
        puVar6 = (undefined4 *)lStack_b8;
      }
      lStack_b8 = (long)puVar6;
      if (lStack_c0 != -0x7ffffffffffffffb) goto LAB_10148d744;
    }
LAB_10148d854:
    _free(lStack_1f0);
  }
  else {
    lStack_c0 = -0x8000000000000000;
LAB_10148d744:
    FUN_101497a9c(&lStack_180,param_1,&uStack_1f8,&lStack_c0);
    puStack_1d8 = puStack_170;
    lStack_1e0 = lStack_178;
    lStack_1c8 = uStack_160;
    puStack_1d0 = (undefined4 *)lStack_168;
    uStack_1b8 = uStack_150;
    uStack_1c0 = uStack_158;
    uStack_1a8 = uStack_140;
    uStack_1b0 = uStack_148;
    uStack_1a0 = uStack_138;
    if (lStack_178 != -0x7ffffffffffffffb) {
      FUN_100de6690(&lStack_1e0);
    }
    puVar6 = (undefined4 *)0x0;
  }
  return (long)puVar6;
}

