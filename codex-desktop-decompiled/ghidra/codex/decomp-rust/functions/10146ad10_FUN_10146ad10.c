
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10146ad10(long *param_1,int *param_2)

{
  ushort *puVar1;
  uint uVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined1 (*pauVar7) [16];
  long lVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long unaff_x21;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  long lStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 *puStack_2d0;
  ulong uStack_2c8;
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
    lVar17 = func_0x000108a4a0f8(&lStack_180,0,0);
    return lVar17;
  }
  puVar6 = (undefined8 *)_malloc(0xc);
  if (puVar6 == (undefined8 *)0x0) {
    uVar10 = func_0x0001087c9084(1,0xc);
    _free(lStack_1f0);
    uVar10 = __Unwind_Resume(uVar10);
    if (unaff_x21 != 0) {
      _free(lStack_d0);
    }
    FUN_100e040f0(&lStack_1e0);
    _free(lStack_1f0);
    __Unwind_Resume(uVar10);
    auVar20 = func_0x000108a07bc4();
    uVar13 = auVar20._8_8_;
    plVar16 = auVar20._0_8_;
    if (*plVar16 == -0x8000000000000000) {
      uStack_290 = 10;
      lVar17 = func_0x000108a4a0f8(&uStack_290,0,0);
    }
    else {
      puVar6 = (undefined8 *)_malloc(0x17);
      if (puVar6 == (undefined8 *)0x0) {
        func_0x0001087c9084(1,0x17);
        goto LAB_10146b558;
      }
      puVar6[1] = 0x68636165725f7469;
      *puVar6 = 0x6d696c5f65746172;
      *(undefined8 *)((long)puVar6 + 0xf) = 0x657079745f646568;
      if (plVar16[9] != -0x8000000000000000 && plVar16[9] != 0) {
        _free(plVar16[10]);
      }
      plVar16[10] = (long)puVar6;
      plVar16[0xb] = 0x17;
      plVar16[9] = -0x8000000000000000;
      lStack_2e8 = plVar16[0xb];
      lStack_2f0 = plVar16[10];
      uStack_2f8 = 0x17;
      uVar2 = auVar20._8_4_ & 0xff;
      uStack_2c8 = (ulong)uVar2;
      if (uVar2 < 3) {
        if ((uVar13 & 0xff) == 0) {
          uVar13 = 0x12;
          puVar6 = (undefined8 *)_malloc(0x12);
          if (puVar6 == (undefined8 *)0x0) goto LAB_10146b558;
          *(undefined2 *)(puVar6 + 2) = 0x6465;
          puVar6[1] = 0x68636165725f7469;
          *puVar6 = 0x6d696c5f65746172;
          uStack_2d8 = 0x12;
          uStack_2e0 = 0x8000000000000003;
          uStack_2c8 = 0x12;
        }
        else if (uVar2 == 1) {
          uVar13 = 0x20;
          puVar6 = (undefined8 *)_malloc(0x20);
          if (puVar6 == (undefined8 *)0x0) {
LAB_10146b558:
            func_0x0001087c9084(1,uVar13);
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10146b568);
            (*pcVar4)();
          }
          puVar6[1] = 0x5f72656e776f5f65;
          *puVar6 = 0x636170736b726f77;
          puVar6[3] = 0x646574656c706564;
          puVar6[2] = 0x5f73746964657263;
          uStack_2d8 = 0x20;
          uStack_2e0 = 0x8000000000000003;
          uStack_2c8 = 0x20;
        }
        else {
          uVar13 = 0x21;
          puVar6 = (undefined8 *)_malloc(0x21);
          if (puVar6 == (undefined8 *)0x0) goto LAB_10146b558;
          *(undefined1 *)(puVar6 + 4) = 100;
          puVar6[1] = 0x7265626d656d5f65;
          *puVar6 = 0x636170736b726f77;
          puVar6[3] = 0x6574656c7065645f;
          puVar6[2] = 0x737469646572635f;
          uStack_2d8 = 0x21;
          uStack_2e0 = 0x8000000000000003;
          uStack_2c8 = 0x21;
        }
      }
      else if (uVar2 == 3) {
        uVar13 = 0x23;
        puVar6 = (undefined8 *)_malloc(0x23);
        if (puVar6 == (undefined8 *)0x0) goto LAB_10146b558;
        *(undefined4 *)((long)puVar6 + 0x1f) = 0x64656863;
        puVar6[1] = 0x5f72656e776f5f65;
        *puVar6 = 0x636170736b726f77;
        puVar6[3] = 0x636165725f74696d;
        puVar6[2] = 0x696c5f6567617375;
        uStack_2d8 = 0x23;
        uStack_2e0 = 0x8000000000000003;
        uStack_2c8 = 0x23;
      }
      else if (uVar2 == 4) {
        uVar13 = 0x24;
        puVar6 = (undefined8 *)_malloc(0x24);
        if (puVar6 == (undefined8 *)0x0) goto LAB_10146b558;
        *(undefined4 *)(puVar6 + 4) = 0x64656863;
        puVar6[1] = 0x7265626d656d5f65;
        *puVar6 = 0x636170736b726f77;
        puVar6[3] = 0x6165725f74696d69;
        puVar6[2] = 0x6c5f65676173755f;
        uStack_2d8 = 0x24;
        uStack_2e0 = 0x8000000000000003;
        uStack_2c8 = 0x24;
      }
      else {
        uStack_2e0 = 0x8000000000000000;
        uStack_2d8 = 0x8000000000000000;
      }
      puStack_2d0 = puVar6;
      FUN_101497a9c(&uStack_290,plVar16,&uStack_2f8,&uStack_2e0);
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
      lVar17 = 0;
    }
    return lVar17;
  }
  *(undefined4 *)(puVar6 + 1) = 0x7374656b;
  *puVar6 = 0x636f735f78696e75;
  if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
    _free(param_1[10]);
  }
  param_1[10] = (long)puVar6;
  param_1[0xb] = 0xc;
  param_1[9] = -0x8000000000000000;
  lStack_1e8 = param_1[0xb];
  lStack_1f0 = param_1[10];
  uStack_1f8 = 0xc;
  if (*param_2 == 1) {
    plVar16 = *(long **)(param_2 + 2);
    uVar13 = *(ulong *)(param_2 + 4);
    lVar18 = *(long *)(param_2 + 6);
    bVar5 = plVar16 != (long *)0x0;
    lVar17 = lVar18;
    if (!bVar5) {
      lVar17 = 0;
    }
    pauVar7 = (undefined1 (*) [16])
              (*
              ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
              )();
    if (pauVar7[1][0] == '\x01') {
      auVar20 = *pauVar7;
    }
    else {
      auVar20 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar7 + 8) = auVar20._8_8_;
      pauVar7[1][0] = 1;
    }
    *(long *)*pauVar7 = auVar20._0_8_ + 1;
    FUN_105dc99f8(&lStack_180,lVar17,auVar20._0_8_,auVar20._8_8_);
    uStack_138 = 0x8000000000000000;
    lVar8 = lStack_178;
    if (lStack_180 != -0x7fffffffffffffff) {
      uStack_1b8 = uStack_158;
      uStack_1c0 = uStack_160;
      uStack_1a8 = uStack_148;
      uStack_1b0 = uStack_150;
      uStack_198 = 0x8000000000000000;
      uStack_1a0 = uStack_140;
      uStack_188 = uStack_128;
      lStack_190 = lStack_130;
      puStack_1d8 = (undefined4 *)lStack_178;
      lStack_1e0 = lStack_180;
      lStack_1c8 = lStack_168;
      puStack_1d0 = puStack_170;
      if (lVar17 != 0) {
        plVar12 = (long *)0x0;
        do {
          if (!bVar5) {
            func_0x000108a07a20(&UNK_10b212c38);
            goto LAB_10146b268;
          }
          if (plVar12 == (long *)0x0) {
            for (; plVar12 = plVar16, uVar13 != 0; uVar13 = uVar13 - 1) {
              plVar16 = (long *)plVar12[0x24];
            }
            plVar16 = (long *)0x0;
            uVar13 = 0;
            plVar14 = plVar12;
            if (*(short *)((long)plVar12 + 0x112) == 0) goto LAB_10146af14;
          }
          else {
            plVar14 = plVar12;
            if (*(ushort *)((long)plVar12 + 0x112) <= uVar13) {
LAB_10146af14:
              do {
                plVar12 = (long *)*plVar14;
                if (plVar12 == (long *)0x0) {
                  func_0x000108a07a20(&UNK_10b2382c8);
                  goto LAB_10146b268;
                }
                plVar16 = (long *)((long)plVar16 + 1);
                puVar1 = (ushort *)(plVar14 + 0x22);
                uVar13 = (ulong)*puVar1;
                plVar14 = plVar12;
              } while (*(ushort *)((long)plVar12 + 0x112) <= *puVar1);
            }
          }
          uVar19 = uVar13 + 1;
          if (plVar16 == (long *)0x0) {
            plVar14 = plVar12;
            if (lStack_1e0 != -0x8000000000000000) goto LAB_10146af78;
LAB_10146b1b4:
            puVar11 = &UNK_10b24c5c0;
LAB_10146b1c8:
            __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,puVar11);
            goto LAB_10146b268;
          }
          plVar14 = plVar12 + uVar19;
          do {
            plVar14 = (long *)plVar14[0x24];
            plVar16 = (long *)((long)plVar16 + -1);
          } while (plVar16 != (long *)0x0);
          uVar19 = 0;
          if (lStack_1e0 == -0x8000000000000000) goto LAB_10146b1b4;
LAB_10146af78:
          bVar3 = *(byte *)((long)plVar12 + uVar13 + 0x114);
          uVar15 = plVar12[uVar13 * 3 + 3];
          if (uVar15 == 0) {
            lVar8 = 1;
          }
          else {
            lVar17 = plVar12[uVar13 * 3 + 2];
            lVar8 = _malloc(uVar15);
            if (lVar8 == 0) {
              func_0x0001087c9084(1,uVar15);
              goto LAB_10146b268;
            }
            _memcpy(lVar8,lVar17,uVar15);
            if (uVar15 == 0x8000000000000000) {
              FUN_100e040f0(&lStack_1e0);
              goto LAB_10146b188;
            }
          }
          if (((uStack_198 != 0x8000000000000000) && (uStack_198 != 0)) &&
             (_free(lStack_190), lStack_1e0 == -0x8000000000000000)) {
            puVar11 = &UNK_10b24c5f0;
            uStack_198 = uVar15;
            lStack_190 = lVar8;
            uStack_188 = uVar15;
            goto LAB_10146b1c8;
          }
          uStack_198 = 0x8000000000000000;
          if (uVar15 == 0x8000000000000000) {
            lStack_190 = lVar8;
            uStack_188 = uVar15;
            func_0x000108a079f0(&UNK_108cd2aad,0x2b,&UNK_10b24c5d8);
            goto LAB_10146b268;
          }
          uStack_d8 = uVar15;
          lStack_d0 = lVar8;
          uStack_c8 = uVar15;
          if ((bVar3 & 1) == 0) {
            lStack_190 = lVar8;
            uStack_188 = uVar15;
            puVar9 = (undefined4 *)_malloc(5);
            uVar10 = 5;
            if (puVar9 == (undefined4 *)0x0) goto LAB_10146b250;
            *(undefined1 *)(puVar9 + 1) = 0x77;
            *puVar9 = 0x6f6c6c61;
            lStack_b8 = 5;
          }
          else {
            lStack_190 = lVar8;
            uStack_188 = uVar15;
            puVar9 = (undefined4 *)_malloc(4);
            uVar10 = 4;
            if (puVar9 == (undefined4 *)0x0) {
LAB_10146b250:
              func_0x0001087c9084(1,uVar10);
              goto LAB_10146b268;
            }
            *puVar9 = 0x656e6f6e;
            lStack_b8 = 4;
          }
          lStack_c0 = -0x7ffffffffffffffd;
          puStack_b0 = puVar9;
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
          plVar16 = (long *)0x0;
          bVar5 = true;
          lVar18 = lVar18 + -1;
          plVar12 = plVar14;
          uVar13 = uVar19;
        } while (lVar18 != 0);
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
LAB_10146b268:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10146b26c);
        (*pcVar4)();
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
      if ((uStack_198 & 0x7fffffffffffffff) != 0) {
        _free(lStack_190);
      }
      lVar8 = lStack_b8;
      if (lStack_c0 != -0x7ffffffffffffffb) goto LAB_10146ae34;
    }
LAB_10146b188:
    _free(lStack_1f0);
  }
  else {
    lStack_c0 = -0x8000000000000000;
LAB_10146ae34:
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
    lVar8 = 0;
  }
  return lVar8;
}

