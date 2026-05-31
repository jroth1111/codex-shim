
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_101483e28(long *param_1,long *param_2,long *param_3,undefined8 *param_4,long *param_5)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  code *pcVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined1 (*pauVar12) [16];
  long lVar13;
  long *plVar14;
  long *plVar15;
  long extraout_x1;
  long *plVar16;
  long *unaff_x21;
  undefined8 *puVar17;
  undefined8 *unaff_x22;
  undefined8 *puVar18;
  undefined8 *unaff_x23;
  long *plVar19;
  long *unaff_x24;
  undefined8 *puVar20;
  long *unaff_x25;
  ulong uVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  long lStack_5a0;
  long lStack_598;
  long lStack_590;
  undefined1 *puStack_588;
  long *plStack_580;
  long lStack_578;
  undefined8 *puStack_570;
  undefined8 *puStack_568;
  undefined8 uStack_560;
  long *plStack_558;
  undefined1 **ppuStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  long *plStack_538;
  undefined8 *puStack_530;
  undefined8 *puStack_528;
  long *plStack_520;
  long lStack_518;
  undefined *puStack_510;
  long *plStack_508;
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  undefined1 auStack_4f0 [16];
  long *plStack_4e0;
  undefined8 *puStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  long *plStack_4c0;
  undefined8 *puStack_4b8;
  undefined *puStack_4b0;
  undefined1 auStack_4a8 [8];
  undefined *puStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 *puStack_470;
  long *plStack_468;
  long lStack_460;
  undefined *puStack_458;
  long *plStack_450;
  undefined8 *puStack_448;
  undefined8 *puStack_440;
  undefined1 auStack_438 [16];
  long *plStack_428;
  undefined1 ***pppuStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  long *plStack_400;
  undefined8 *puStack_3f8;
  undefined8 *puStack_3f0;
  undefined1 auStack_3e8 [16];
  long *plStack_3d8;
  undefined1 auStack_3d0 [16];
  long *plStack_3c0;
  ulong uStack_3b8;
  long *plStack_3b0;
  undefined8 uStack_3a8;
  long *plStack_3a0;
  undefined8 uStack_398;
  long *plStack_370;
  undefined8 *puStack_368;
  long *plStack_360;
  long *plStack_358;
  long *plStack_350;
  long *plStack_348;
  undefined1 *puStack_340;
  undefined8 uStack_338;
  long *plStack_330;
  long *plStack_328;
  undefined1 **ppuStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long *plStack_240;
  long lStack_238;
  long lStack_230;
  undefined8 uStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long *plStack_190;
  undefined1 *puStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long *plStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long *plStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  long lStack_d8;
  long *plStack_d0;
  undefined1 auStack_a0 [8];
  long lStack_98;
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  if (*param_1 == -0x8000000000000000) {
    if ((param_3 == (long *)0x1e) &&
       (((*param_2 == 0x6a5f656472657324 && param_2[1] == 0x6972703a3a6e6f73) &&
        param_2[2] == 0x61523a3a65746176) && *(long *)((long)param_2 + 0x16) == 0x65756c6156776152))
    {
      func_0x000105dc3cf8(&lStack_98,&stack0xffffffffffffffb0);
      if (lStack_98 != -0x7ffffffffffffffb) {
        plVar15 = param_1 + 1;
        if (*plVar15 != -0x7ffffffffffffffb) {
          FUN_100de6690(plVar15);
        }
        param_1[6] = lStack_70;
        param_1[5] = lStack_78;
        param_1[8] = lStack_60;
        param_1[7] = lStack_68;
        param_1[9] = lStack_58;
        param_1[2] = (long)plStack_90;
        *plVar15 = lStack_98;
        param_1[4] = lStack_80;
        param_1[3] = lStack_88;
        plStack_90 = (long *)0x0;
      }
    }
    else {
      lStack_98 = 10;
      plStack_90 = (long *)func_0x000108a4a0f8(&lStack_98,0,0);
    }
    return plStack_90;
  }
  if (*param_1 == -0x8000000000000000) {
    plVar15 = (long *)&UNK_10b24c5c0;
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28);
    puVar11 = param_4;
    plVar14 = param_5;
LAB_100635aa0:
    uVar8 = FUN_107c03c64(1,unaff_x21);
    if (unaff_x21 != (long *)0x0) {
      _free(lStack_f8);
    }
    auVar23 = __Unwind_Resume(uVar8);
    plVar6 = auVar23._0_8_;
    uStack_158 = 0x100635ac4;
    plStack_190 = unaff_x24;
    puStack_160 = &stack0xfffffffffffffff0;
    if (*plVar6 == -0x8000000000000000) {
      plVar19 = (long *)&UNK_10b24c5c0;
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28);
      puVar17 = puVar11;
    }
    else {
      plVar19 = plVar15;
      puVar17 = puVar11;
      lVar7 = _malloc(plVar15);
      unaff_x21 = plVar15;
      unaff_x23 = auVar23._8_8_;
      if (lVar7 != 0) {
        _memcpy(lVar7,auVar23._8_8_,plVar15);
        if (plVar6[9] != -0x8000000000000000 && plVar6[9] != 0) {
          _free(plVar6[10]);
        }
        plVar6[10] = lVar7;
        plVar6[0xb] = (long)plVar15;
        plVar6[9] = -0x8000000000000000;
        lStack_230 = plVar6[0xb];
        lStack_238 = plVar6[10];
        lStack_290 = 0;
        lStack_288 = 1;
        lStack_280 = 0;
        plStack_240 = plVar15;
        FUN_10624142c(&uStack_1e0,puVar11,0);
        thunk_FUN_108855060(&lStack_290,0,0x24,1,1);
        puVar11 = (undefined8 *)(lStack_288 + lStack_280);
        *(undefined4 *)(puVar11 + 4) = uStack_1c0;
        puVar11[1] = lStack_1d8;
        *puVar11 = uStack_1e0;
        puVar11[3] = uStack_1c8;
        puVar11[2] = uStack_1d0;
        lStack_280 = lStack_280 + 0x24;
        lStack_218 = lStack_288;
        uStack_228 = 0x8000000000000003;
        lStack_220 = lStack_290;
        lStack_210 = lStack_280;
        FUN_101497a9c(&uStack_1e0,plVar6,&plStack_240,&uStack_228);
        lStack_288 = uStack_1d0;
        lStack_290 = lStack_1d8;
        lStack_280 = uStack_1c8;
        uStack_268 = uStack_1b0;
        uStack_270 = uStack_1b8;
        uStack_258 = uStack_1a0;
        uStack_260 = uStack_1a8;
        uStack_250 = uStack_198;
        if (lStack_1d8 != -0x7ffffffffffffffb) {
          FUN_100de6690(&lStack_290);
        }
        return (long *)0x0;
      }
    }
    uVar8 = FUN_107c03c64(1,unaff_x21);
    if (lStack_290 != 0) {
      _free(lStack_288);
    }
    _free(lStack_238);
    auVar23 = __Unwind_Resume(uVar8);
    lVar13 = auVar23._8_8_;
    plVar6 = auVar23._0_8_;
    uStack_298 = 0x100635c6c;
    puVar11 = puVar17;
    plVar15 = plVar14;
    ppuStack_2a0 = &puStack_160;
    lVar7 = _malloc(puVar17);
    if (lVar7 != 0) {
      _memcpy(lVar7,plVar19,puVar17);
      if (*(long *)(lVar13 + 0x50) != -0x8000000000000000 && *(long *)(lVar13 + 0x50) != 0) {
        _free(*(undefined8 *)(lVar13 + 0x58));
      }
      *(undefined8 **)(lVar13 + 0x50) = puVar17;
      *(long *)(lVar13 + 0x58) = lVar7;
      *(undefined8 **)(lVar13 + 0x60) = puVar17;
      *plVar6 = -0x7ffffffffffffffc;
      plVar15 = *(long **)(lVar13 + 0x50);
      uVar8 = *(undefined8 *)(lVar13 + 0x58);
      uVar22 = *(undefined8 *)(lVar13 + 0x60);
      *(undefined8 *)(lVar13 + 0x50) = 0x8000000000000000;
      if (plVar15 == (long *)0x8000000000000000) {
        uVar21 = 0;
        plVar14 = (long *)func_0x000108a079f0(&UNK_108cd2aad,0x2b);
        _free(uVar8);
        auVar23 = __Unwind_Resume(plVar14);
        lVar7 = auVar23._8_8_;
        plVar6 = auVar23._0_8_;
        lStack_418 = 0x1011b9a68;
        plVar15 = *(long **)(lVar7 + 0x50);
        uVar22 = *(undefined8 *)(lVar7 + 0x58);
        puStack_4b0 = *(undefined **)(lVar7 + 0x60);
        *(undefined8 *)(lVar7 + 0x50) = 0x8000000000000000;
        plStack_450 = unaff_x24;
        puStack_448 = unaff_x23;
        puStack_440 = unaff_x22;
        auStack_438._0_8_ = unaff_x21;
        auStack_438._8_8_ = uVar8;
        plStack_428 = plVar14;
        pppuStack_420 = &ppuStack_2a0;
        if (plVar15 == (long *)0x8000000000000000) {
          func_0x000108a079f0(&UNK_108cd2aad,0x2b,&UNK_10b24a320);
LAB_1011b9bac:
          func_0x0001087c9084(1,0x17);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1011b9bbc);
          (*pcVar4)();
        }
        if ((uVar21 & 1) == 0) {
          *plVar6 = -0x7ffffffffffffffc;
          plVar14 = plVar6;
        }
        else {
          if (-1 < (long)puVar11) {
            uStack_560 = 0x8000000000000001;
            plStack_558 = puVar11;
            plStack_4c0 = plVar15;
            puStack_4b8 = (undefined8 *)uVar22;
            plVar15 = (long *)FUN_101497734(auStack_4a8,lVar7,&plStack_4c0,&uStack_560);
            plStack_508 = (long *)uStack_498;
            puStack_510 = puStack_4a0;
            puStack_4f8 = (undefined8 *)uStack_488;
            puStack_500 = (undefined8 *)uStack_490;
            auStack_4f0._8_8_ = uStack_478;
            auStack_4f0._0_8_ = uStack_480;
            puStack_4d8 = plStack_468;
            plStack_4e0 = puStack_470;
            lStack_4c8 = (long)puStack_458;
            lStack_4d0 = lStack_460;
            if (puStack_4a0 != (undefined *)0x8000000000000006) {
              plVar15 = (long *)FUN_100ddb5bc(&puStack_510);
            }
            *plVar6 = -0x7ffffffffffffffc;
            return plVar15;
          }
          plVar14 = (long *)_malloc(0x17);
          if (plVar14 == (long *)0x0) goto LAB_1011b9bac;
          plVar14[1] = 0x6f74207361772065;
          *plVar14 = 0x756c617620343675;
          *(undefined8 *)((long)plVar14 + 0xf) = 0x656772616c206f6f;
          plStack_558 = (long *)0x17;
          uStack_548 = 0x17;
          plVar6[2] = 0x17;
          plVar6[1] = (long)plVar14;
          *plVar6 = 0x17;
          ppuStack_550 = (undefined1 **)plVar14;
        }
        if (plVar15 == (long *)0x0) {
          return plVar14;
        }
      }
      else {
        if (*plVar14 != -0x8000000000000000) {
          lVar7 = plVar14[1];
          lVar1 = plVar14[2];
          if (lVar1 == 0) {
            plVar14 = (long *)0x1;
          }
          else {
            plVar14 = (long *)_malloc(lVar1);
            if (plVar14 == (long *)0x0) {
              func_0x0001087c9084(1,lVar1);
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1011b9994);
              (*pcVar4)();
            }
          }
          _memcpy(plVar14,lVar7,lVar1);
          lStack_410 = -0x8000000000000000;
          lStack_408 = lVar1;
          plStack_400 = plVar14;
          puStack_3f8 = (undefined8 *)lVar1;
          plStack_370 = plVar15;
          puStack_368 = (undefined8 *)uVar8;
          plStack_360 = (long *)uVar22;
          plVar15 = (long *)FUN_101497734(&plStack_358,lVar13,&plStack_370,&lStack_410);
          uStack_3b8 = (ulong)plStack_348;
          plStack_3c0 = plStack_350;
          uStack_3a8 = uStack_338;
          plStack_3b0 = (long *)puStack_340;
          uStack_398 = plStack_328;
          plStack_3a0 = plStack_330;
          if (plStack_350 != (long *)0x8000000000000006) {
            plVar15 = (long *)FUN_100ddb5bc(&plStack_3c0);
          }
          *plVar6 = -0x7ffffffffffffffc;
          return plVar15;
        }
        *plVar6 = -0x7ffffffffffffffc;
        uVar22 = uVar8;
        if (plVar15 == (long *)0x0) {
          return plVar6;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar15 = (long *)(*(code *)PTR__free_10b61b0a8)(uVar22);
      return plVar15;
    }
    plVar14 = (long *)FUN_107c03c64(1,puVar17);
    puVar17 = puVar11;
    plVar9 = (long *)FUN_1013fde34();
    if (plVar9 != (long *)0x0) {
      return plVar9;
    }
    if ((char)*plVar14 == '\x01') {
      plVar9 = (long *)&UNK_10b24d400;
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28);
      puVar18 = unaff_x23;
LAB_100635f04:
      plStack_330 = plVar6;
      plStack_328 = unaff_x25;
      __ZN5bytes13panic_advance17h894eeb3b0f978370E(&plStack_330);
LAB_100635f10:
      plStack_330 = plVar6;
      plStack_328 = plVar19;
      __ZN5bytes13panic_advance17h894eeb3b0f978370E(&plStack_330);
    }
    else {
      puVar18 = (undefined8 *)plVar14[1];
      plVar14 = (long *)*puVar18;
      plVar19 = (long *)plVar14[1];
      plVar6 = (long *)(ulong)(plVar19 != (long *)0x7fffffffffffffff);
      unaff_x25 = (long *)(plVar14[2] - (long)plVar19);
      plVar16 = plVar19;
      if (unaff_x25 < plVar6) {
        __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(plVar14,plVar6,1);
        unaff_x25 = (long *)(plVar14[2] - plVar14[1]);
        plVar16 = (long *)plVar14[1];
      }
      plVar9 = plVar6;
      _memset((undefined *)(*plVar14 + (long)plVar16),0x3a);
      if (unaff_x25 < plVar6) goto LAB_100635f04;
      plVar14[1] = (long)((long)plVar16 + (long)plVar6);
      if (plVar19 == (long *)0x7fffffffffffffff) {
LAB_100635ec8:
        puVar10 = &UNK_10b233fc8;
LAB_100635ed0:
        plVar15 = (long *)_malloc(0x28);
        if (plVar15 != (long *)0x0) {
          plVar15[1] = (long)puVar10;
          *plVar15 = 1;
          plVar15[3] = 0;
          plVar15[2] = (long)unaff_x23;
          plVar15[4] = 0;
          return plVar15;
        }
        func_0x0001087c906c(8,0x28);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x108a4a0e0);
        (*pcVar4)();
      }
      plVar14 = (long *)*puVar18;
      puVar18 = (undefined8 *)plVar14[1];
      plVar6 = (long *)(ulong)(puVar18 != (undefined8 *)0x7fffffffffffffff);
      plVar19 = (long *)(plVar14[2] - (long)puVar18);
      puVar20 = puVar18;
      if (plVar19 < plVar6) {
        __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(plVar14,plVar6,1);
        plVar19 = (long *)(plVar14[2] - plVar14[1]);
        puVar20 = (undefined8 *)plVar14[1];
      }
      plVar9 = plVar6;
      _memset(*plVar14 + (long)puVar20,0x22);
      if (plVar19 < plVar6) goto LAB_100635f10;
      plVar14[1] = (long)((long)puVar20 + (long)plVar6);
      if (puVar18 == (undefined8 *)0x7fffffffffffffff) goto LAB_100635ec8;
      puVar10 = (undefined *)FUN_1006572d8(plVar14,puVar11,plVar15);
      if (puVar10 != (undefined *)0x0) goto LAB_100635ed0;
      puVar11 = (undefined8 *)plVar14[1];
      plVar15 = (long *)(ulong)(puVar11 != (undefined8 *)0x7fffffffffffffff);
      plVar6 = (long *)(plVar14[2] - (long)puVar11);
      puVar18 = puVar11;
      if (plVar6 < plVar15) {
        __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(plVar14,plVar15,1);
        plVar6 = (long *)(plVar14[2] - plVar14[1]);
        puVar18 = (undefined8 *)plVar14[1];
      }
      plVar9 = plVar15;
      _memset(*plVar14 + (long)puVar18,0x22);
      if (plVar15 <= plVar6) {
        plVar14[1] = (long)((long)puVar18 + (long)plVar15);
        if (puVar11 != (undefined8 *)0x7fffffffffffffff) {
          return (long *)0x0;
        }
        goto LAB_100635ec8;
      }
    }
    plStack_330 = plVar15;
    plStack_328 = plVar6;
    auVar23 = __ZN5bytes13panic_advance17h894eeb3b0f978370E(&plStack_330);
    lVar7 = auVar23._8_8_;
    uStack_338 = 0x100635f28;
    plVar16 = plVar9;
    plStack_370 = plVar19;
    puStack_368 = puVar18;
    plStack_360 = plVar6;
    plStack_358 = plVar14;
    plStack_350 = puVar11;
    plStack_348 = plVar15;
    puStack_340 = &stack0xfffffffffffffd20;
    puVar11 = (undefined8 *)_malloc(0x16);
    if (puVar11 != (undefined8 *)0x0) {
      puVar11[1] = 0x696c6962616c6961;
      *puVar11 = 0x76615f6c65646f6d;
      *(undefined8 *)((long)puVar11 + 0xe) = 0x78756e5f7974696c;
      if (*(long *)(lVar7 + 0x50) != -0x8000000000000000 && *(long *)(lVar7 + 0x50) != 0) {
        _free(*(undefined8 *)(lVar7 + 0x58));
      }
      *(undefined8 **)(lVar7 + 0x58) = puVar11;
      *(undefined8 *)(lVar7 + 0x60) = 0x16;
      *auVar23._0_8_ = 0x8000000000000004;
      *(undefined8 *)(lVar7 + 0x50) = 0x8000000000000000;
      pauVar12 = (undefined1 (*) [16])
                 (*
                 ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                 )();
      if (pauVar12[1][0] == '\x01') {
        auStack_4f0 = *pauVar12;
      }
      else {
        auStack_4f0 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        *(long *)(*pauVar12 + 8) = auStack_4f0._8_8_;
        pauVar12[1][0] = 1;
      }
      *(long *)*pauVar12 = auStack_4f0._0_8_ + 1;
      puStack_500 = (undefined8 *)0x0;
      plStack_508 = (long *)0x0;
      puStack_4f8 = (undefined8 *)0x0;
      plStack_4e0 = (long *)((ulong)plStack_4e0 & 0xffffffffff000000);
      puStack_4d8 = (undefined8 *)0x8000000000000000;
      lStack_518 = 0;
      puStack_510 = &UNK_109beca68;
      puStack_528 = (undefined8 *)0x0;
      plStack_520 = (long *)0x8;
      if (puVar17 == (undefined8 *)0x0) {
        lStack_460 = 0;
        plStack_468 = (long *)0x8;
        puStack_448 = (undefined8 *)0x0;
        plStack_450 = (long *)0x0;
        puStack_440 = (undefined8 *)0x0;
        puStack_458 = &UNK_109beca68;
        puStack_470 = (undefined8 *)0x0;
        plStack_428 = plStack_4e0;
        auStack_438 = auStack_4f0;
LAB_100636238:
        plStack_4c0 = (long *)0x16;
        puStack_4b0 = (undefined *)0x16;
        puStack_4b8 = puVar11;
        plVar15 = (long *)FUN_101497734(&puStack_528,auVar23._8_8_,&plStack_4c0,&puStack_470);
        puStack_3f8 = (undefined8 *)lStack_518;
        plStack_400 = plStack_520;
        auStack_3e8._0_8_ = plStack_508;
        puStack_3f0 = (undefined8 *)puStack_510;
        plStack_3d8 = puStack_4f8;
        auStack_3e8._8_8_ = puStack_500;
        uStack_3b8 = (ulong)puStack_4d8;
        plStack_3c0 = plStack_4e0;
        if (plStack_520 != (long *)0x8000000000000006) {
          auStack_3d0 = auStack_4f0;
          plVar15 = (long *)FUN_100ddb5bc(&plStack_400);
        }
        *auVar23._0_8_ = 0x8000000000000004;
      }
      else {
        plVar15 = plVar9 + 1;
        lVar7 = *plVar9;
        uVar21 = CONCAT17(-(-1 < lVar7),
                          CONCAT16(-(-1 < (char)((ulong)lVar7 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar7 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar7 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar7 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar7 >>
                                                                                    0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar7 >> 8)),-(-1 < (char)lVar7)))))))) &
                 0x8080808080808080;
        puStack_530 = puVar11;
        do {
          while( true ) {
            uStack_540 = auVar23._8_8_;
            plStack_538 = auVar23._0_8_;
            if (uVar21 != 0) break;
            lVar7 = *plVar15;
            plVar9 = plVar9 + -0x20;
            uVar21 = CONCAT17(-(-1 < lVar7),
                              CONCAT16(-(-1 < (char)((ulong)lVar7 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar7 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar7 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar7 >> 0x18
                                                                               )),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar7 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar7 >> 8)),
                                                           -(-1 < (char)lVar7)))))))) &
                     0x8080808080808080;
            plVar15 = plVar15 + 1;
          }
          uVar3 = (uVar21 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar21 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
          uVar3 = LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) & 0x78;
          uVar8 = *(undefined8 *)((long)plVar9 + uVar3 * -4 + -0x18);
          lVar7 = *(long *)((long)plVar9 + uVar3 * -4 + -0x10);
          uVar2 = *(uint *)((long)plVar9 + uVar3 * -4 + -8);
          if (lVar7 == 0) {
            lVar13 = 1;
          }
          else {
            lVar13 = _malloc(lVar7);
            auVar23._8_8_ = uStack_540;
            auVar23._0_8_ = plStack_538;
            if (lVar13 == 0) {
              FUN_107c03c64(1,lVar7);
              goto LAB_100636318;
            }
          }
          uStack_540 = auVar23._8_8_;
          plStack_538 = auVar23._0_8_;
          _memcpy(lVar13,uVar8,lVar7);
          if (puStack_4d8 != (undefined8 *)0x8000000000000000 && puStack_4d8 != (undefined8 *)0x0) {
            _free(lStack_4d0);
          }
          lStack_4d0 = lVar13;
          lStack_4c8 = lVar7;
          if (lVar7 == -0x8000000000000000) {
            puStack_4d8 = (undefined8 *)0x8000000000000000;
            FUN_107c05cac(&UNK_108cd2aad,0x2b,&UNK_10b24a320);
LAB_100636318:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10063631c);
            (*pcVar4)();
          }
          puStack_4d8 = (undefined8 *)0x8000000000000000;
          plStack_4c0 = (long *)0x8000000000000001;
          puStack_4b8 = (undefined8 *)(ulong)uVar2;
          lStack_418 = lVar7;
          lStack_410 = lVar13;
          lStack_408 = lVar7;
          FUN_101497734(&plStack_400,&puStack_528,&lStack_418,&plStack_4c0);
          plStack_468 = puStack_3f0;
          puStack_470 = puStack_3f8;
          puStack_458 = (undefined *)auStack_3e8._8_8_;
          lStack_460 = auStack_3e8._0_8_;
          puStack_448 = (undefined8 *)auStack_3d0._0_8_;
          plStack_450 = plStack_3d8;
          auStack_438._0_8_ = plStack_3c0;
          puStack_440 = (undefined8 *)auStack_3d0._8_8_;
          plStack_428 = plStack_3b0;
          auStack_438._8_8_ = uStack_3b8;
          if (puStack_3f8 != (undefined8 *)0x8000000000000006) {
            FUN_100ddb5bc(&puStack_470);
          }
          puVar18 = puStack_528;
          auVar23._8_8_ = uStack_540;
          auVar23._0_8_ = plStack_538;
          uVar21 = uVar21 - 1 & uVar21;
          puVar17 = (undefined8 *)((long)puVar17 + -1);
        } while (puVar17 != (undefined8 *)0x0);
        puStack_4b8 = (undefined8 *)lStack_518;
        plStack_4c0 = plStack_520;
        puStack_4b0 = puStack_510;
        puStack_3f8 = puStack_500;
        plStack_400 = plStack_508;
        puStack_3f0 = puStack_4f8;
        plStack_3d8 = plStack_4e0;
        auStack_3e8 = auStack_4f0;
        if (((ulong)puStack_4d8 & 0x7fffffffffffffff) != 0) {
          _free(lStack_4d0);
        }
        auVar23._8_8_ = uStack_540;
        auVar23._0_8_ = plStack_538;
        lStack_460 = (long)puStack_4b8;
        plStack_468 = plStack_4c0;
        puStack_458 = puStack_4b0;
        if (puVar18 != (undefined8 *)0x8000000000000000) {
          puStack_448 = puStack_3f8;
          plStack_450 = plStack_400;
          puStack_440 = puStack_3f0;
          plStack_428 = plStack_3d8;
          puStack_470 = puVar18;
          puVar11 = puStack_530;
          auStack_438 = auStack_3e8;
          if (puVar18 != (undefined8 *)0x8000000000000006) goto LAB_100636238;
        }
        if (plStack_4c0 == (long *)0x8000000000000001) {
          *plStack_538 = -0x7ffffffffffffffc;
        }
        else {
          plStack_538[1] = (long)puStack_4b8;
          *plStack_538 = (long)plStack_4c0;
          plStack_538[2] = (long)puStack_4b0;
        }
        plVar15 = (long *)_free(puStack_530);
      }
      return plVar15;
    }
    uVar8 = FUN_107c03c64(1,0x16);
    _free(plVar14);
    uVar8 = __Unwind_Resume(uVar8);
    FUN_100df4830(&puStack_528);
    _free(puStack_530);
    __Unwind_Resume(uVar8);
    auVar23 = FUN_107c05ccc();
    plVar6 = auVar23._8_8_;
    plVar15 = auVar23._0_8_;
    puStack_568 = puStack_530;
    uStack_548 = 0x100636368;
    puStack_570 = puVar17;
    uStack_560 = uVar8;
    plStack_558 = plVar9;
    ppuStack_550 = &puStack_340;
    plVar14 = (long *)FUN_10160d630(plVar15,plVar6,&UNK_108cdca90,0x10);
    if (*plVar15 != -0x7ffffffffffffffc) {
      return plVar14;
    }
    lVar7 = plVar6[8];
    plVar6[8] = -0x8000000000000000;
    if (lVar7 == -0x8000000000000000) {
      FUN_107c05cac(&UNK_108cd581e,0x23,&UNK_10b24f4d8);
      lVar7 = extraout_x1;
LAB_10063654c:
      thunk_FUN_108855060(plVar6,lVar7,1,1,1);
      lVar7 = plVar6[2];
    }
    else {
      lStack_590 = plVar6[10];
      lStack_598 = plVar6[9];
      plStack_580 = (long *)&DAT_10112965c;
      lStack_5a0 = lVar7;
      puStack_588 = (undefined1 *)&lStack_5a0;
      iVar5 = __ZN4core3fmt5write17h64810b21425781ecE
                        (plVar6,&UNK_10b209290,s__108b1bd74,&puStack_588);
      if (iVar5 != 0) {
        plVar14 = (long *)_malloc(0x26);
        if (plVar14 == (long *)0x0) {
          FUN_107c03c64(1,0x26);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1006365cc);
          (*pcVar4)();
        }
        plVar14[1] = 0x6572727563636f20;
        *plVar14 = 0x726f727265206e61;
        plVar14[3] = 0x6120676e69746972;
        plVar14[2] = 0x77206e6568772064;
        *(undefined8 *)((long)plVar14 + 0x1e) = 0x65756c6176206120;
        *plVar15 = 0x26;
        plVar15[1] = (long)plVar14;
        plVar15[2] = 0x26;
        goto joined_r0x0001006364fc;
      }
      lVar7 = plVar6[2];
      if (*plVar6 == lVar7) goto LAB_10063654c;
    }
    *(undefined1 *)(plVar6[1] + lVar7) = 0x20;
    lVar7 = lVar7 + 1;
    plVar6[2] = lVar7;
    if (*plVar6 == lVar7) {
      thunk_FUN_108855060(plVar6,lVar7,1,1,1);
      lVar7 = plVar6[2];
    }
    *(undefined1 *)(plVar6[1] + lVar7) = 0x3d;
    lVar7 = lVar7 + 1;
    plVar6[2] = lVar7;
    if (*plVar6 == lVar7) {
      thunk_FUN_108855060(plVar6,lVar7,1,1,1);
      lVar7 = plVar6[2];
    }
    *(undefined1 *)(plVar6[1] + lVar7) = 0x20;
    plVar6[2] = lVar7 + 1;
    lVar13 = ((ulong)plVar16 & 0xff) * 8;
    plVar14 = (long *)__ZN81__LT_toml__ser__value__ValueSerializer_u20_as_u20_serde_core__ser__Serializer_GT_13serialize_str17hdebb71f02f8851d9E
                                (&puStack_588,plVar6,lVar7,*(undefined8 *)(&UNK_10b253208 + lVar13),
                                 *(undefined8 *)(&UNK_108cdb1b0 + lVar13));
    plVar6 = plStack_580;
    if (puStack_588 == (undefined1 *)0x8000000000000004) {
      lVar7 = plStack_580[2];
      if (*plStack_580 == lVar7) {
        plVar14 = (long *)thunk_FUN_108855060(plStack_580,lVar7,1,1,1);
        lVar7 = plVar6[2];
      }
      *(undefined1 *)(plVar6[1] + lVar7) = 10;
      plVar6[2] = lVar7 + 1;
      *plVar15 = -0x7ffffffffffffffc;
    }
    else {
      *plVar15 = (long)puStack_588;
      plVar15[1] = (long)plStack_580;
      plVar15[2] = lStack_578;
    }
joined_r0x0001006364fc:
    if (lStack_5a0 != 0) {
      plVar14 = (long *)_free(lStack_598);
    }
    return plVar14;
  }
  if (param_3 == (long *)0x0) {
    plVar6 = (long *)0x1;
    if (param_1[9] == -0x8000000000000000 || param_1[9] == 0) goto LAB_100635960;
LAB_1006359bc:
    _free(param_1[10]);
    param_1[10] = (long)plVar6;
    param_1[0xb] = (long)param_3;
    param_1[9] = -0x8000000000000000;
    if (param_3 == (long *)0x8000000000000000) goto LAB_1006359d8;
LAB_100635974:
    lStack_f0 = param_1[0xb];
    lStack_f8 = param_1[10];
    plStack_100 = param_3;
    if (param_5 != (long *)0x0) {
      lVar7 = _malloc(param_5);
      if (lVar7 == 0) {
        FUN_107c03c64(1,param_5);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1006359a4);
        (*pcVar4)();
      }
      goto LAB_1006359f4;
    }
  }
  else {
    plVar15 = param_3;
    puVar11 = param_4;
    plVar14 = param_5;
    plVar6 = (long *)_malloc(param_3);
    unaff_x21 = param_3;
    unaff_x22 = param_4;
    unaff_x24 = param_2;
    if (plVar6 == (long *)0x0) goto LAB_100635aa0;
    _memcpy(plVar6,param_2,param_3);
    if (param_3 == (long *)0x8000000000000000) {
      return plVar6;
    }
    if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) goto LAB_1006359bc;
LAB_100635960:
    param_1[10] = (long)plVar6;
    param_1[0xb] = (long)param_3;
    param_1[9] = -0x8000000000000000;
    if (param_3 != (long *)0x8000000000000000) goto LAB_100635974;
LAB_1006359d8:
    FUN_107c05cac(&UNK_108cd2aad,0x2b,&UNK_10b24c5d8);
  }
  lVar7 = 1;
LAB_1006359f4:
  _memcpy(lVar7,param_4,param_5);
  uStack_e8 = 0x8000000000000003;
  plStack_e0 = param_5;
  lStack_d8 = lVar7;
  plStack_d0 = param_5;
  FUN_101497a9c(auStack_a0,param_1,&plStack_100,&uStack_e8);
  plStack_148 = plStack_90;
  lStack_150 = lStack_98;
  lStack_138 = lStack_80;
  lStack_140 = lStack_88;
  lStack_128 = lStack_70;
  lStack_130 = lStack_78;
  lStack_118 = lStack_60;
  lStack_120 = lStack_68;
  lStack_110 = lStack_58;
  if (lStack_98 != -0x7ffffffffffffffb) {
    FUN_100de6690(&lStack_150);
  }
  return (long *)0x0;
}

