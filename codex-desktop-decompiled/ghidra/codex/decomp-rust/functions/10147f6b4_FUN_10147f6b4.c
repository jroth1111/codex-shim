
/* WARNING: Possible PIC construction at 0x000100638f58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100638f5c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10147f6b4(long *param_1,undefined8 param_2,ulong *param_3,ulong *param_4,ulong *param_5)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  ulong **ppuVar4;
  long lVar5;
  ulong *puVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined2 *puVar9;
  undefined1 (*pauVar10) [16];
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  long extraout_x1;
  ulong *puVar14;
  bool bVar15;
  byte bVar16;
  long *plVar17;
  ulong *puVar18;
  ulong *puVar19;
  long *plVar20;
  ulong *puVar21;
  ulong *unaff_x21;
  ulong *puVar22;
  ulong *unaff_x22;
  ulong *unaff_x23;
  ulong uVar23;
  long lVar24;
  ulong *unaff_x24;
  ulong *puVar25;
  ulong *puVar26;
  ulong uVar27;
  ulong *puVar28;
  ulong *puVar29;
  undefined8 *******pppppppuVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  ulong *puStack_490;
  long lStack_488;
  long lStack_480;
  undefined2 uStack_478;
  ulong *puStack_470;
  ulong *puStack_468;
  ulong *puStack_460;
  undefined8 *******pppppppuStack_400;
  undefined8 uStack_3f8;
  long lStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  ulong *puStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  undefined8 *puStack_380;
  undefined1 auStack_340 [8];
  long lStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 ******ppppppuStack_2b0;
  code *pcStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  undefined8 *puStack_230;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *****pppppuStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
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
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*param_1 == -0x8000000000000000) {
    puStack_a0 = (undefined8 *)0xa;
    puVar11 = (undefined8 *)func_0x000108a4a0f8(&puStack_a0,0,0);
    return puVar11;
  }
  puVar9 = (undefined2 *)_malloc(3);
  if (puVar9 != (undefined2 *)0x0) {
    *(undefined1 *)(puVar9 + 1) = 0x69;
    *puVar9 = 0x7574;
    if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
      _free(param_1[10]);
    }
    param_1[10] = (long)puVar9;
    param_1[0xb] = 3;
    param_1[9] = -0x8000000000000000;
    lStack_150 = param_1[0xb];
    lStack_158 = param_1[10];
    uStack_160 = 3;
    if (((uint)param_2 & 0xff) == 3) {
      puStack_148 = (undefined8 *)0x8000000000000000;
      goto LAB_10147f754;
    }
    pauVar10 = (undefined1 (*) [16])
               (*
               ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
               )();
    if (pauVar10[1][0] == '\x01') {
      auVar33 = *pauVar10;
    }
    else {
      auVar33 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar10 + 8) = auVar33._8_8_;
      pauVar10[1][0] = 1;
    }
    *(long *)*pauVar10 = auVar33._0_8_ + 1;
    FUN_105dc99f8(&puStack_a0,1,auVar33._0_8_,auVar33._8_8_);
    uStack_58 = 0x8000000000000000;
    puVar11 = puStack_98;
    if (puStack_a0 != (undefined8 *)0x8000000000000001) {
      puStack_c8 = puStack_68;
      puStack_d0 = puStack_70;
      puStack_b8 = (undefined8 *)0x8000000000000000;
      puStack_c0 = puStack_60;
      uStack_a8 = uStack_48;
      uStack_b0 = uStack_50;
      puStack_e8 = puStack_88;
      puStack_f0 = puStack_90;
      puStack_d8 = puStack_78;
      puStack_e0 = puStack_80;
      puStack_100 = puStack_a0;
      puStack_f8 = puStack_98;
      if (puStack_a0 != (undefined8 *)0x8000000000000000) {
        FUN_10063ec04(&puStack_100,param_2);
        puVar11 = puStack_f8;
        puVar2 = puStack_100;
        puStack_148 = puStack_f8;
        puStack_108 = puStack_b8;
        if (puStack_100 == (undefined8 *)0x8000000000000000) {
          if (puStack_f8 == (undefined8 *)0x8000000000000005) {
            func_0x000108a079f0(&UNK_109b9f7c8,0x19,&UNK_10b46a510);
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10147f954);
            (*pcVar3)();
          }
          puStack_138 = puStack_e8;
          puStack_140 = puStack_f0;
          puStack_128 = puStack_d8;
          puStack_130 = puStack_e0;
          puStack_118 = puStack_c8;
          puStack_120 = puStack_d0;
          puStack_110 = puStack_c0;
        }
        else {
          puStack_148 = puStack_100;
          puStack_140 = puStack_f8;
          puStack_130 = puStack_e8;
          puStack_138 = puStack_f0;
          puStack_120 = puStack_d8;
          puStack_128 = puStack_e0;
          puStack_110 = puStack_c8;
          puStack_118 = puStack_d0;
          puStack_108 = puStack_c0;
          if (((ulong)puStack_b8 & 0x7fffffffffffffff) != 0) {
            _free(uStack_b0);
          }
          if (puVar2 == (undefined8 *)0x8000000000000005) goto LAB_10147f8d8;
        }
LAB_10147f754:
        FUN_101497a9c(&puStack_a0,param_1,&uStack_160,&puStack_148);
        puStack_f8 = puStack_90;
        puStack_100 = puStack_98;
        puStack_e8 = puStack_80;
        puStack_f0 = puStack_88;
        puStack_d8 = puStack_70;
        puStack_e0 = puStack_78;
        puStack_c8 = puStack_60;
        puStack_d0 = puStack_68;
        puStack_c0 = (undefined8 *)uStack_58;
        if (puStack_98 != (undefined8 *)0x8000000000000005) {
          FUN_100de6690(&puStack_100);
        }
        return (undefined8 *)0x0;
      }
      puStack_a0 = (undefined8 *)0xa;
      puVar11 = (undefined8 *)func_0x000108a4a0f8(&puStack_a0,0,0);
      FUN_100e040f0(&puStack_100);
    }
LAB_10147f8d8:
    _free(lStack_158);
    return puVar11;
  }
  uVar12 = func_0x0001087c9084(1,3);
  FUN_100e040f0(&puStack_100);
  _free(lStack_158);
  auVar33 = __Unwind_Resume(uVar12);
  puVar19 = auVar33._8_8_;
  plVar17 = auVar33._0_8_;
  pcStack_168 = FUN_10147f988;
  pppppuStack_170 = (undefined8 *****)&stack0xfffffffffffffff0;
  if (*plVar17 == -0x8000000000000000) {
    uStack_1f0 = 10;
    puVar11 = (undefined8 *)func_0x000108a4a0f8(&uStack_1f0,0,0);
    return puVar11;
  }
  puVar13 = (undefined4 *)_malloc(6);
  if (puVar13 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar13 + 1) = 0x6e6f;
    *puVar13 = 0x69746361;
    if (plVar17[9] != -0x8000000000000000 && plVar17[9] != 0) {
      _free(plVar17[10]);
    }
    plVar17[10] = (long)puVar13;
    plVar17[0xb] = 6;
    plVar17[9] = -0x8000000000000000;
    lStack_240 = plVar17[0xb];
    lStack_248 = plVar17[10];
    uStack_250 = 6;
    FUN_1007a1b4c(&lStack_238,puVar19);
    if (lStack_238 != -0x7ffffffffffffffb) {
      FUN_101497a9c(&uStack_1f0,plVar17,&uStack_250,&lStack_238);
      uStack_298 = uStack_1e0;
      lStack_2a0 = lStack_1e8;
      uStack_288 = uStack_1d0;
      uStack_290 = uStack_1d8;
      uStack_278 = uStack_1c0;
      uStack_280 = uStack_1c8;
      uStack_268 = uStack_1b0;
      uStack_270 = uStack_1b8;
      uStack_260 = uStack_1a8;
      if (lStack_1e8 != -0x7ffffffffffffffb) {
        FUN_100de6690(&lStack_2a0);
      }
      return (undefined8 *)0x0;
    }
    _free(lStack_248);
    return puStack_230;
  }
  uVar12 = func_0x0001087c9084(1,6);
  _free(lStack_248);
  auVar33 = __Unwind_Resume(uVar12);
  plVar17 = auVar33._0_8_;
  ppppppuStack_2b0 = &pppppuStack_170;
  if (*plVar17 == -0x8000000000000000) {
    pcStack_2a8 = FUN_10147faf4;
    puVar11 = (undefined8 *)func_0x000108a4a0f8(&stack0xfffffffffffffd38,0,0);
    return puVar11;
  }
  pcStack_2a8 = FUN_10147faf4;
  if (*plVar17 == -0x8000000000000000) {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24c5c0);
    puVar22 = param_4;
    puVar14 = param_5;
  }
  else {
    puVar22 = param_4;
    puVar14 = param_5;
    lVar5 = _malloc(param_3);
    puVar19 = param_5;
    unaff_x21 = param_4;
    unaff_x22 = param_3;
    unaff_x24 = auVar33._8_8_;
    if (lVar5 != 0) {
      _memcpy(lVar5,auVar33._8_8_,param_3);
      if (plVar17[9] != -0x8000000000000000 && plVar17[9] != 0) {
        _free(plVar17[10]);
      }
      plVar17[10] = lVar5;
      plVar17[0xb] = (long)param_3;
      plVar17[9] = -0x8000000000000000;
      lStack_390 = plVar17[0xb];
      lStack_398 = plVar17[10];
      puStack_3a0 = param_3;
      func_0x000100633f00(&lStack_388,param_4,param_5);
      if (lStack_388 == -0x7ffffffffffffffb) {
        _free(lStack_398);
      }
      else {
        FUN_101497a9c(auStack_340,plVar17,&puStack_3a0,&lStack_388);
        uStack_3e8 = uStack_330;
        lStack_3f0 = lStack_338;
        uStack_3d8 = uStack_320;
        uStack_3e0 = uStack_328;
        uStack_3c8 = uStack_310;
        uStack_3d0 = uStack_318;
        uStack_3b8 = uStack_300;
        uStack_3c0 = uStack_308;
        uStack_3b0 = uStack_2f8;
        if (lStack_338 != -0x7ffffffffffffffb) {
          FUN_100de6690(&lStack_3f0);
        }
        puStack_380 = (undefined8 *)0x0;
      }
      return puStack_380;
    }
  }
  puVar6 = (ulong *)FUN_107c03c64(1,unaff_x22);
  _free(lStack_398);
  auVar33 = __Unwind_Resume(puVar6);
  plVar17 = auVar33._8_8_;
  pcVar7 = auVar33._0_8_;
  ppuVar4 = &puStack_490;
  uStack_3f8 = 0x10063876c;
  pppppppuVar30 = &pppppppuStack_400;
  pppppppuStack_400 = &ppppppuStack_2b0;
  puVar11 = (undefined8 *)FUN_1013fde34(pcVar7,&UNK_108cb1c3d,5);
  if (puVar11 != (undefined8 *)0x0) {
    return puVar11;
  }
  if (*pcVar7 == '\x01') {
LAB_100639098:
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24d400);
LAB_1006390b0:
    puStack_468 = unaff_x24;
    puStack_460 = unaff_x22;
    __ZN5bytes13panic_advance17h894eeb3b0f978370E(&puStack_468);
LAB_1006390bc:
    puStack_468 = unaff_x21;
    puStack_460 = unaff_x23;
    __ZN5bytes13panic_advance17h894eeb3b0f978370E(&puStack_468);
LAB_1006390c8:
    puStack_460 = auVar33._8_8_;
    puVar21 = auVar33._0_8_;
    puStack_468 = unaff_x24;
    __ZN5bytes13panic_advance17h894eeb3b0f978370E(&puStack_468);
LAB_1006390d4:
    puStack_468 = puVar21;
    puStack_460 = unaff_x22;
    __ZN5bytes13panic_advance17h894eeb3b0f978370E(&puStack_468);
  }
  else {
    puVar28 = *(ulong **)(pcVar7 + 8);
    plVar20 = (long *)*puVar28;
    auVar33._8_8_ = plVar17;
    auVar33._0_8_ = plVar20;
    unaff_x22 = (ulong *)plVar20[1];
    unaff_x21 = (ulong *)(ulong)(unaff_x22 != (ulong *)0x7fffffffffffffff);
    unaff_x23 = (ulong *)(plVar20[2] - (long)unaff_x22);
    unaff_x24 = unaff_x22;
    if (unaff_x23 < unaff_x21) {
      __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(plVar20,unaff_x21,1);
      unaff_x23 = (ulong *)(plVar20[2] - plVar20[1]);
      unaff_x24 = (ulong *)plVar20[1];
    }
    _memset(*plVar20 + (long)unaff_x24,0x3a,unaff_x21);
    if (unaff_x23 < unaff_x21) goto LAB_1006390bc;
    plVar20[1] = (long)unaff_x24 + (long)unaff_x21;
    if (unaff_x22 == (ulong *)0x7fffffffffffffff) goto LAB_100639014;
    if (*plVar17 == -0x8000000000000000) {
      plVar17 = (long *)*puVar28;
      lVar5 = plVar17[2];
      puVar8 = &UNK_108c78dd4;
      puVar22 = (ulong *)0x4;
      uVar23 = plVar17[1];
      while( true ) {
        unaff_x21 = puVar22;
        if ((ulong *)(uVar23 ^ 0x7fffffffffffffff) <= puVar22) {
          unaff_x21 = (ulong *)(uVar23 ^ 0x7fffffffffffffff);
        }
        puVar28 = (ulong *)(lVar5 - uVar23);
        uVar27 = uVar23;
        if (puVar28 < unaff_x21) {
          __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(plVar17,unaff_x21,1);
          uVar27 = plVar17[1];
          lVar5 = plVar17[2];
          puVar28 = (ulong *)(lVar5 - uVar27);
        }
        _memcpy(*plVar17 + uVar27,puVar8,unaff_x21);
        if (puVar28 < unaff_x21) break;
        plVar17[1] = uVar27 + (long)unaff_x21;
        if (uVar23 == 0x7fffffffffffffff) goto LAB_100639014;
        puVar8 = puVar8 + (long)unaff_x21;
        puVar22 = (ulong *)((long)puVar22 - (long)unaff_x21);
        uVar23 = uVar27 + (long)unaff_x21;
        if (puVar22 == (ulong *)0x0) {
          return (undefined8 *)0x0;
        }
      }
LAB_10063904c:
      puStack_468 = unaff_x21;
      puStack_460 = puVar28;
      __ZN5bytes13panic_advance17h894eeb3b0f978370E(&puStack_468);
LAB_100639058:
      puStack_468 = (ulong *)0xa;
      puVar11 = (undefined8 *)FUN_107c05dbc(&puStack_468,0,0);
      return puVar11;
    }
    lVar5 = plVar17[1];
    unaff_x21 = (ulong *)plVar17[2];
    plVar17 = (long *)*puVar28;
    lVar1 = plVar17[1];
    puVar21 = (ulong *)(ulong)(lVar1 != 0x7fffffffffffffff);
    unaff_x22 = (ulong *)(plVar17[2] - lVar1);
    lVar24 = lVar1;
    if (unaff_x22 < puVar21) {
      __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(plVar17,puVar21,1);
      unaff_x22 = (ulong *)(plVar17[2] - plVar17[1]);
      lVar24 = plVar17[1];
    }
    _memset(*plVar17 + lVar24,0x5b,puVar21);
    if (unaff_x22 < puVar21) goto LAB_1006390d4;
    unaff_x22 = (ulong *)(lVar24 + (long)puVar21);
    plVar17[1] = (long)unaff_x22;
    if (lVar1 == 0x7fffffffffffffff) goto LAB_100639014;
    if (unaff_x21 != (ulong *)0x0) {
      lStack_488 = lVar5 + (long)unaff_x21 * 0x48;
      bVar15 = true;
      unaff_x21 = (ulong *)0x7fffffffffffffff;
      puStack_490 = puVar28;
LAB_100638968:
      unaff_x23 = (ulong *)*puVar28;
      if (!bVar15) {
        puVar18 = (ulong *)unaff_x23[1];
        unaff_x24 = (ulong *)(ulong)(puVar18 != (ulong *)0x7fffffffffffffff);
        puVar21 = (ulong *)(unaff_x23[2] - (long)puVar18);
        unaff_x22 = puVar18;
        if (puVar21 < unaff_x24) {
          __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x23,unaff_x24,1);
          puVar21 = (ulong *)(unaff_x23[2] - (long)unaff_x23[1]);
          unaff_x22 = (ulong *)unaff_x23[1];
        }
        _memset(*unaff_x23 + (long)unaff_x22,0x2c,unaff_x24);
        if (unaff_x24 <= puVar21) {
          unaff_x23[1] = (long)unaff_x22 + (long)unaff_x24;
          if (puVar18 != (ulong *)0x7fffffffffffffff) {
            unaff_x23 = (ulong *)*puVar28;
            goto LAB_1006389d8;
          }
          goto LAB_100639014;
        }
LAB_10063908c:
        auVar33._8_8_ = puVar18;
        auVar33._0_8_ = puVar21;
        puStack_468 = unaff_x24;
        puStack_460 = puVar21;
        __ZN5bytes13panic_advance17h894eeb3b0f978370E(&puStack_468);
        goto LAB_100639098;
      }
LAB_1006389d8:
      unaff_x24 = (ulong *)(lVar5 + 0x18);
      puVar21 = (ulong *)*unaff_x24;
      puVar18 = *(ulong **)(lVar5 + 0x30);
      auVar33._8_8_ = puVar18;
      auVar33._0_8_ = puVar21;
      unaff_x22 = (ulong *)unaff_x23[1];
      puVar25 = (ulong *)(ulong)(unaff_x22 != (ulong *)0x7fffffffffffffff);
      puVar26 = (ulong *)(unaff_x23[2] - (long)unaff_x22);
      puVar29 = unaff_x22;
      lStack_480 = lVar5;
      if (puVar26 < puVar25) {
        __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x23,puVar25,1);
        puVar26 = (ulong *)(unaff_x23[2] - (long)unaff_x23[1]);
        puVar29 = (ulong *)unaff_x23[1];
      }
      _memset(*unaff_x23 + (long)puVar29,0x7b,puVar25);
      lVar5 = lStack_480;
      if (puVar26 < puVar25) {
LAB_100639080:
        puStack_468 = puVar25;
        puStack_460 = puVar26;
        __ZN5bytes13panic_advance17h894eeb3b0f978370E(&puStack_468);
        goto LAB_10063908c;
      }
      unaff_x23[1] = (long)puVar29 + (long)puVar25;
      if (unaff_x22 == (ulong *)0x7fffffffffffffff) goto LAB_100638f50;
      uStack_478 = 0x100;
      puVar22 = *(ulong **)(lStack_480 + 8);
      puVar14 = *(ulong **)(lStack_480 + 0x10);
      puStack_470 = puVar28;
      puVar11 = (undefined8 *)func_0x0001006435cc(&uStack_478,&UNK_108cb16c3,3,puVar22,puVar14);
      if (puVar11 != (undefined8 *)0x0) {
        return puVar11;
      }
      if (puVar21 != (ulong *)0x8000000000000000) {
        if ((byte)uStack_478 == '\x01') goto LAB_100639058;
        puVar22 = unaff_x24;
        puVar11 = (undefined8 *)FUN_10064099c(&uStack_478,&UNK_108c98350,8,unaff_x24);
        if (puVar11 != (undefined8 *)0x0) {
          return puVar11;
        }
      }
      bVar16 = (byte)uStack_478;
      if (puVar18 == (ulong *)0x8000000000000000) {
LAB_100638ed8:
        if (((bVar16 & 1) == 0) && (uStack_478._1_1_ != '\0')) {
          unaff_x23 = (ulong *)*puStack_470;
          puVar18 = (ulong *)unaff_x23[1];
          unaff_x24 = (ulong *)(ulong)(puVar18 != (ulong *)0x7fffffffffffffff);
          puVar21 = (ulong *)(unaff_x23[2] - (long)puVar18);
          unaff_x22 = puVar18;
          if (puVar21 < unaff_x24) {
            __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x23,unaff_x24,1);
            puVar21 = (ulong *)(unaff_x23[2] - (long)unaff_x23[1]);
            unaff_x22 = (ulong *)unaff_x23[1];
          }
          _memset(*unaff_x23 + (long)unaff_x22,0x7d,unaff_x24);
          if (puVar21 < unaff_x24) goto LAB_10063908c;
          unaff_x23[1] = (long)unaff_x22 + (long)unaff_x24;
          if (puVar18 == (ulong *)0x7fffffffffffffff) goto LAB_100638f50;
        }
        bVar15 = false;
        lVar5 = lVar5 + 0x48;
        if (lVar5 == lStack_488) goto LAB_100638fec;
        goto LAB_100638968;
      }
      if ((uStack_478 & 1) != 0) goto LAB_100639058;
      puVar11 = (undefined8 *)FUN_1013fde34(&uStack_478,&UNK_108cb16c6,5);
      puVar18 = puStack_470;
      if (puVar11 != (undefined8 *)0x0) {
        return puVar11;
      }
      if ((byte)uStack_478 == '\x01') goto LAB_100639098;
      unaff_x23 = (ulong *)*puStack_470;
      puVar21 = (ulong *)unaff_x23[1];
      auVar33._8_8_ = puStack_470;
      auVar33._0_8_ = puVar21;
      unaff_x24 = (ulong *)(ulong)(puVar21 != (ulong *)0x7fffffffffffffff);
      unaff_x22 = (ulong *)(unaff_x23[2] - (long)puVar21);
      puVar25 = puVar21;
      if (unaff_x22 < unaff_x24) {
        __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x23,unaff_x24,1);
        unaff_x22 = (ulong *)(unaff_x23[2] - (long)unaff_x23[1]);
        puVar25 = (ulong *)unaff_x23[1];
      }
      _memset(*unaff_x23 + (long)puVar25,0x3a,unaff_x24);
      if (unaff_x22 < unaff_x24) goto LAB_1006390b0;
      unaff_x23[1] = (long)puVar25 + (long)unaff_x24;
      if (puVar21 != (ulong *)0x7fffffffffffffff) {
        unaff_x23 = (ulong *)*puVar18;
        puVar18 = *(ulong **)(lVar5 + 0x38);
        puVar21 = *(ulong **)(lVar5 + 0x40);
        auVar33._8_8_ = puVar18;
        auVar33._0_8_ = puVar21;
        uVar23 = unaff_x23[1];
        unaff_x24 = (ulong *)(ulong)(uVar23 != 0x7fffffffffffffff);
        unaff_x22 = (ulong *)(unaff_x23[2] - uVar23);
        uVar27 = uVar23;
        if (unaff_x22 < unaff_x24) {
          __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x23,unaff_x24,1);
          unaff_x22 = (ulong *)(unaff_x23[2] - unaff_x23[1]);
          uVar27 = unaff_x23[1];
        }
        _memset(*unaff_x23 + uVar27,0x5b,unaff_x24);
        if (unaff_x22 < unaff_x24) goto LAB_1006390b0;
        unaff_x22 = (ulong *)(uVar27 + (long)unaff_x24);
        unaff_x23[1] = (ulong)unaff_x22;
        if (uVar23 == 0x7fffffffffffffff) goto LAB_100638f50;
        if (puVar21 == (ulong *)0x0) {
          unaff_x24 = (ulong *)(ulong)(unaff_x22 != (ulong *)0x7fffffffffffffff);
          puVar18 = (ulong *)(unaff_x23[2] - (long)unaff_x22);
          puVar21 = unaff_x22;
          if (puVar18 < unaff_x24) {
            __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x23,unaff_x24,1);
            puVar21 = (ulong *)unaff_x23[1];
            puVar18 = (ulong *)(unaff_x23[2] - (long)puVar21);
          }
          auVar33._8_8_ = puVar18;
          auVar33._0_8_ = puVar21;
          _memset(*unaff_x23 + (long)puVar21,0x5d,unaff_x24);
          if (unaff_x24 <= puVar18) {
            unaff_x23[1] = (long)puVar21 + (long)unaff_x24;
            if (unaff_x22 != (ulong *)0x7fffffffffffffff) {
              bVar16 = 0;
              lVar5 = lStack_480;
              goto LAB_100638ed8;
            }
            goto LAB_100638f50;
          }
          goto LAB_1006390c8;
        }
        uVar23 = puVar18[1];
        uVar27 = puVar18[2];
        puVar28 = (ulong *)(ulong)(unaff_x22 != (ulong *)0x7fffffffffffffff);
        puVar29 = (ulong *)(unaff_x23[2] - (long)unaff_x22);
        puVar25 = unaff_x22;
        if (puVar29 < puVar28) {
          __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x23,puVar28,1);
          puVar25 = (ulong *)unaff_x23[1];
          puVar29 = (ulong *)(unaff_x23[2] - (long)puVar25);
        }
        _memset(*unaff_x23 + (long)puVar25,0x22,puVar28);
        if (puVar29 < puVar28) {
LAB_10063903c:
          puStack_468 = (ulong *)0x1;
          puStack_460 = (ulong *)0x0;
          __ZN5bytes13panic_advance17h894eeb3b0f978370E(&puStack_468);
          goto LAB_10063904c;
        }
        unaff_x23[1] = (long)puVar25 + (long)puVar28;
        if (unaff_x22 == (ulong *)0x7fffffffffffffff) goto LAB_100638f50;
        puVar8 = (undefined *)FUN_1006572d8(unaff_x23,uVar23,uVar27);
        if (puVar8 != (undefined *)0x0) goto LAB_100638f58;
        puVar25 = (ulong *)unaff_x23[1];
        puVar29 = (ulong *)(ulong)(puVar25 != (ulong *)0x7fffffffffffffff);
        unaff_x22 = (ulong *)(unaff_x23[2] - (long)puVar25);
        puVar28 = puVar25;
        if (unaff_x22 < puVar29) {
          __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x23,puVar29,1);
          unaff_x22 = (ulong *)(unaff_x23[2] - (long)unaff_x23[1]);
          puVar28 = (ulong *)unaff_x23[1];
        }
        _memset(*unaff_x23 + (long)puVar28,0x22,puVar29);
        if (unaff_x22 < puVar29) goto LAB_10063903c;
        puVar28 = (ulong *)((long)puVar28 + (long)puVar29);
        unaff_x23[1] = (ulong)puVar28;
        if (puVar25 == (ulong *)0x7fffffffffffffff) goto LAB_100638f50;
        if (puVar21 != (ulong *)0x1) {
          lVar5 = (long)puVar21 * 0x18;
          puVar21 = puVar18 + 5;
          puVar18 = (ulong *)(lVar5 - 0x18);
          do {
            unaff_x24 = (ulong *)puVar21[-1];
            puVar25 = (ulong *)*puVar21;
            puVar26 = (ulong *)(ulong)(puVar28 != (ulong *)0x7fffffffffffffff);
            puVar29 = (ulong *)(unaff_x23[2] - (long)puVar28);
            unaff_x22 = puVar28;
            if (puVar29 < puVar26) {
              __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x23,puVar26,1);
              unaff_x22 = (ulong *)unaff_x23[1];
              puVar29 = (ulong *)(unaff_x23[2] - (long)unaff_x22);
            }
            _memset(*unaff_x23 + (long)unaff_x22,0x2c,puVar26);
            if (puVar29 < puVar26) {
              puStack_468 = puVar26;
              puStack_460 = puVar29;
              __ZN5bytes13panic_advance17h894eeb3b0f978370E(&puStack_468);
              goto LAB_100639080;
            }
            uVar23 = (long)unaff_x22 + (long)puVar26;
            unaff_x23[1] = uVar23;
            if (puVar28 == (ulong *)0x7fffffffffffffff) goto LAB_100638f50;
            puVar28 = (ulong *)(ulong)(uVar23 != 0x7fffffffffffffff);
            puVar29 = (ulong *)(unaff_x23[2] - uVar23);
            uVar27 = uVar23;
            if (puVar29 < puVar28) {
              __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x23,puVar28,1);
              puVar29 = (ulong *)(unaff_x23[2] - unaff_x23[1]);
              uVar27 = unaff_x23[1];
            }
            _memset(*unaff_x23 + uVar27,0x22,puVar28);
            if (puVar29 < puVar28) goto LAB_10063903c;
            unaff_x23[1] = uVar27 + (long)puVar28;
            if (uVar23 == 0x7fffffffffffffff) goto LAB_100638f50;
            puVar8 = (undefined *)FUN_1006572d8(unaff_x23,unaff_x24,puVar25);
            if (puVar8 != (undefined *)0x0) goto LAB_100638f58;
            puVar25 = (ulong *)unaff_x23[1];
            puVar29 = (ulong *)(ulong)(puVar25 != (ulong *)0x7fffffffffffffff);
            unaff_x22 = (ulong *)(unaff_x23[2] - (long)puVar25);
            puVar28 = puVar25;
            if (unaff_x22 < puVar29) {
              __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x23,puVar29,1);
              unaff_x22 = (ulong *)(unaff_x23[2] - (long)unaff_x23[1]);
              puVar28 = (ulong *)unaff_x23[1];
            }
            _memset(*unaff_x23 + (long)puVar28,0x22,puVar29);
            if (unaff_x22 < puVar29) goto LAB_10063903c;
            puVar28 = (ulong *)((long)puVar28 + (long)puVar29);
            unaff_x23[1] = (ulong)puVar28;
            if (puVar25 == (ulong *)0x7fffffffffffffff) goto LAB_100638f50;
            puVar21 = puVar21 + 3;
            puVar18 = puVar18 + -3;
          } while (puVar18 != (ulong *)0x0);
        }
        unaff_x24 = (ulong *)(ulong)(puVar28 != (ulong *)0x7fffffffffffffff);
        puVar18 = (ulong *)(unaff_x23[2] - (long)puVar28);
        puVar21 = puVar28;
        if (puVar18 < unaff_x24) {
          __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x23,unaff_x24,1);
          puVar21 = (ulong *)unaff_x23[1];
          puVar18 = (ulong *)(unaff_x23[2] - (long)puVar21);
        }
        auVar33._8_8_ = puVar18;
        auVar33._0_8_ = puVar21;
        _memset(*unaff_x23 + (long)puVar21,0x5d,unaff_x24);
        if (puVar18 < unaff_x24) goto LAB_1006390c8;
        unaff_x23[1] = (long)puVar21 + (long)unaff_x24;
        if (puVar28 != (ulong *)0x7fffffffffffffff) {
          bVar16 = 0;
          lVar5 = lStack_480;
          puVar28 = puStack_490;
          goto LAB_100638ed8;
        }
      }
LAB_100638f50:
      puVar8 = &UNK_10b233fc8;
LAB_100638f58:
      uVar12 = 0x100638f5c;
      goto SUB_107c05db8;
    }
    puVar21 = (ulong *)(ulong)(unaff_x22 != (ulong *)0x7fffffffffffffff);
    unaff_x21 = (ulong *)(plVar17[2] - (long)unaff_x22);
    puVar28 = unaff_x22;
    if (unaff_x21 < puVar21) {
      __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(plVar17,puVar21,1);
      unaff_x21 = (ulong *)(plVar17[2] - plVar17[1]);
      puVar28 = (ulong *)plVar17[1];
    }
    _memset(*plVar17 + (long)puVar28,0x5d,puVar21);
    if (puVar21 <= unaff_x21) {
      plVar17[1] = (long)puVar28 + (long)puVar21;
      goto joined_r0x000100638fc4;
    }
  }
  puStack_468 = puVar21;
  puStack_460 = unaff_x21;
  plVar17 = (long *)__ZN5bytes13panic_advance17h894eeb3b0f978370E(&puStack_468);
  FUN_1013fe3ec();
  if ((char)*plVar17 == '\x01') {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24d400);
    lVar5 = extraout_x1;
  }
  else {
    unaff_x22 = (ulong *)plVar17[1];
    plVar17 = (long *)*unaff_x22;
    lVar5 = plVar17[2];
    if (*plVar17 != lVar5) goto LAB_100639130;
  }
  thunk_FUN_108855060(plVar17,lVar5,1,1,1);
  lVar5 = plVar17[2];
LAB_100639130:
  *(undefined1 *)(plVar17[1] + lVar5) = 0x3a;
  plVar17[2] = lVar5 + 1;
  plVar17 = (long *)*unaff_x22;
  lVar5 = plVar17[2];
  if (*plVar17 == lVar5) {
    thunk_FUN_108855060(plVar17,lVar5,1,1,1);
    lVar5 = plVar17[2];
  }
  *(undefined1 *)(plVar17[1] + lVar5) = 0x22;
  plVar17[2] = lVar5 + 1;
  puVar11 = (undefined8 *)FUN_100657654(plVar17,puVar22,puVar14);
  lVar5 = plVar17[2];
  if (*plVar17 == lVar5) {
    puVar11 = (undefined8 *)thunk_FUN_108855060(plVar17,lVar5,1,1,1);
    lVar5 = plVar17[2];
  }
  *(undefined1 *)(plVar17[1] + lVar5) = 0x22;
  plVar17[2] = lVar5 + 1;
  return puVar11;
LAB_100638fec:
  unaff_x22 = *(ulong **)(*puVar28 + 8);
  __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
            (*puVar28,&UNK_108ca7637,unaff_x22 != (ulong *)0x7fffffffffffffff);
joined_r0x000100638fc4:
  if (unaff_x22 != (ulong *)0x7fffffffffffffff) {
    return (undefined8 *)0x0;
  }
LAB_100639014:
  puVar8 = &UNK_10b233fc8;
  ppuVar4 = (ulong **)&lStack_3f0;
  puVar18 = puVar6;
  puVar21 = puVar19;
  pppppppuVar30 = pppppppuStack_400;
  uVar12 = uStack_3f8;
SUB_107c05db8:
  *(ulong **)((long)ppuVar4 + -0x20) = puVar21;
  *(ulong **)((long)ppuVar4 + -0x18) = puVar18;
  *(undefined8 ********)((long)ppuVar4 + -0x10) = pppppppuVar30;
  *(undefined8 *)((long)ppuVar4 + -8) = uVar12;
  *(undefined8 *)((long)ppuVar4 + -0x48) = 1;
  *(undefined **)((long)ppuVar4 + -0x40) = puVar8;
  *(undefined8 *)((long)ppuVar4 + -0x30) = 0;
  *(undefined8 *)((long)ppuVar4 + -0x28) = 0;
  puVar11 = (undefined8 *)_malloc(0x28);
  if (puVar11 == (undefined8 *)0x0) {
    func_0x0001087c906c(8,0x28);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x108a4a0e0);
    (*pcVar3)();
  }
  uVar12 = *(undefined8 *)((long)ppuVar4 + -0x48);
  uVar32 = *(undefined8 *)((long)ppuVar4 + -0x30);
  uVar31 = *(undefined8 *)((long)ppuVar4 + -0x38);
  puVar11[1] = *(undefined8 *)((long)ppuVar4 + -0x40);
  *puVar11 = uVar12;
  puVar11[3] = uVar32;
  puVar11[2] = uVar31;
  puVar11[4] = *(undefined8 *)((long)ppuVar4 + -0x28);
  return puVar11;
}

