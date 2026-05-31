
/* WARNING: Possible PIC construction at 0x000100638f58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100638f5c) */
/* WARNING: Type propagation algorithm not settling */

undefined8 *
FUN_10147f988(long *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5)

{
  long lVar1;
  code *pcVar2;
  ulong **ppuVar3;
  long lVar4;
  ulong *puVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  long extraout_x1;
  ulong *puVar11;
  bool bVar12;
  byte bVar13;
  long *plVar14;
  ulong *puVar15;
  long *plVar16;
  ulong *puVar17;
  ulong *unaff_x21;
  ulong *puVar18;
  ulong *unaff_x22;
  ulong *unaff_x23;
  ulong uVar19;
  long lVar20;
  ulong *unaff_x24;
  ulong *puVar21;
  ulong *puVar22;
  ulong uVar23;
  ulong *puVar24;
  ulong *puVar25;
  undefined8 *******pppppppuVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  ulong *puStack_330;
  long lStack_328;
  long lStack_320;
  undefined2 uStack_318;
  ulong *puStack_310;
  ulong *puStack_308;
  ulong *puStack_300;
  undefined8 *******pppppppuStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  ulong *puStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  undefined8 *puStack_220;
  undefined1 auStack_1e0 [8];
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 ******ppppppuStack_150;
  code *pcStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*param_1 == -0x8000000000000000) {
    uStack_90 = 10;
    puVar7 = (undefined8 *)func_0x000108a4a0f8(&uStack_90,0,0);
    return puVar7;
  }
  puVar9 = (undefined4 *)_malloc(6);
  if (puVar9 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar9 + 1) = 0x6e6f;
    *puVar9 = 0x69746361;
    if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
      _free(param_1[10]);
    }
    param_1[10] = (long)puVar9;
    param_1[0xb] = 6;
    param_1[9] = -0x8000000000000000;
    lStack_e0 = param_1[0xb];
    lStack_e8 = param_1[10];
    uStack_f0 = 6;
    func_0x0001007a1b4c(&lStack_d8,param_2);
    if (lStack_d8 != -0x7ffffffffffffffb) {
      FUN_101497a9c(&uStack_90,param_1,&uStack_f0,&lStack_d8);
      uStack_138 = uStack_80;
      lStack_140 = lStack_88;
      uStack_128 = uStack_70;
      uStack_130 = uStack_78;
      uStack_118 = uStack_60;
      uStack_120 = uStack_68;
      uStack_108 = uStack_50;
      uStack_110 = uStack_58;
      uStack_100 = uStack_48;
      if (lStack_88 != -0x7ffffffffffffffb) {
        FUN_100de6690(&lStack_140);
      }
      return (undefined8 *)0x0;
    }
    _free(lStack_e8);
    return puStack_d0;
  }
  uVar10 = func_0x0001087c9084(1,6);
  _free(lStack_e8);
  auVar29 = __Unwind_Resume(uVar10);
  plVar14 = auVar29._0_8_;
  ppppppuStack_150 = (undefined8 ******)&stack0xfffffffffffffff0;
  if (*plVar14 == -0x8000000000000000) {
    pcStack_148 = FUN_10147faf4;
    puVar7 = (undefined8 *)func_0x000108a4a0f8(&stack0xfffffffffffffe98,0,0);
    return puVar7;
  }
  pcStack_148 = FUN_10147faf4;
  if (*plVar14 == -0x8000000000000000) {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24c5c0);
    puVar18 = param_4;
    puVar11 = param_5;
  }
  else {
    puVar18 = param_4;
    puVar11 = param_5;
    lVar4 = _malloc(param_3);
    param_2 = param_5;
    unaff_x21 = param_4;
    unaff_x22 = param_3;
    unaff_x24 = auVar29._8_8_;
    if (lVar4 != 0) {
      _memcpy(lVar4,auVar29._8_8_,param_3);
      if (plVar14[9] != -0x8000000000000000 && plVar14[9] != 0) {
        _free(plVar14[10]);
      }
      plVar14[10] = lVar4;
      plVar14[0xb] = (long)param_3;
      plVar14[9] = -0x8000000000000000;
      lStack_230 = plVar14[0xb];
      lStack_238 = plVar14[10];
      puStack_240 = param_3;
      func_0x000100633f00(&lStack_228,param_4,param_5);
      if (lStack_228 == -0x7ffffffffffffffb) {
        _free(lStack_238);
      }
      else {
        FUN_101497a9c(auStack_1e0,plVar14,&puStack_240,&lStack_228);
        uStack_288 = uStack_1d0;
        lStack_290 = lStack_1d8;
        uStack_278 = uStack_1c0;
        uStack_280 = uStack_1c8;
        uStack_268 = uStack_1b0;
        uStack_270 = uStack_1b8;
        uStack_258 = uStack_1a0;
        uStack_260 = uStack_1a8;
        uStack_250 = uStack_198;
        if (lStack_1d8 != -0x7ffffffffffffffb) {
          FUN_100de6690(&lStack_290);
        }
        puStack_220 = (undefined8 *)0x0;
      }
      return puStack_220;
    }
  }
  puVar5 = (ulong *)FUN_107c03c64(1,unaff_x22);
  _free(lStack_238);
  auVar29 = __Unwind_Resume(puVar5);
  plVar14 = auVar29._8_8_;
  pcVar6 = auVar29._0_8_;
  ppuVar3 = &puStack_330;
  uStack_298 = 0x10063876c;
  pppppppuVar26 = &pppppppuStack_2a0;
  pppppppuStack_2a0 = &ppppppuStack_150;
  puVar7 = (undefined8 *)FUN_1013fde34(pcVar6,&UNK_108cb1c3d,5);
  if (puVar7 != (undefined8 *)0x0) {
    return puVar7;
  }
  if (*pcVar6 == '\x01') {
LAB_100639098:
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24d400);
LAB_1006390b0:
    puStack_308 = unaff_x24;
    puStack_300 = unaff_x22;
    __ZN5bytes13panic_advance17h894eeb3b0f978370E(&puStack_308);
LAB_1006390bc:
    puStack_308 = unaff_x21;
    puStack_300 = unaff_x23;
    __ZN5bytes13panic_advance17h894eeb3b0f978370E(&puStack_308);
LAB_1006390c8:
    puStack_300 = auVar29._8_8_;
    puVar17 = auVar29._0_8_;
    puStack_308 = unaff_x24;
    __ZN5bytes13panic_advance17h894eeb3b0f978370E(&puStack_308);
LAB_1006390d4:
    puStack_308 = puVar17;
    puStack_300 = unaff_x22;
    __ZN5bytes13panic_advance17h894eeb3b0f978370E(&puStack_308);
  }
  else {
    puVar24 = *(ulong **)(pcVar6 + 8);
    plVar16 = (long *)*puVar24;
    auVar29._8_8_ = plVar14;
    auVar29._0_8_ = plVar16;
    unaff_x22 = (ulong *)plVar16[1];
    unaff_x21 = (ulong *)(ulong)(unaff_x22 != (ulong *)0x7fffffffffffffff);
    unaff_x23 = (ulong *)(plVar16[2] - (long)unaff_x22);
    unaff_x24 = unaff_x22;
    if (unaff_x23 < unaff_x21) {
      __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(plVar16,unaff_x21,1);
      unaff_x23 = (ulong *)(plVar16[2] - plVar16[1]);
      unaff_x24 = (ulong *)plVar16[1];
    }
    _memset(*plVar16 + (long)unaff_x24,0x3a,unaff_x21);
    if (unaff_x23 < unaff_x21) goto LAB_1006390bc;
    plVar16[1] = (long)unaff_x24 + (long)unaff_x21;
    if (unaff_x22 == (ulong *)0x7fffffffffffffff) goto LAB_100639014;
    if (*plVar14 == -0x8000000000000000) {
      plVar14 = (long *)*puVar24;
      lVar4 = plVar14[2];
      puVar8 = &UNK_108c78dd4;
      puVar18 = (ulong *)0x4;
      uVar19 = plVar14[1];
      while( true ) {
        unaff_x21 = puVar18;
        if ((ulong *)(uVar19 ^ 0x7fffffffffffffff) <= puVar18) {
          unaff_x21 = (ulong *)(uVar19 ^ 0x7fffffffffffffff);
        }
        puVar24 = (ulong *)(lVar4 - uVar19);
        uVar23 = uVar19;
        if (puVar24 < unaff_x21) {
          __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(plVar14,unaff_x21,1);
          uVar23 = plVar14[1];
          lVar4 = plVar14[2];
          puVar24 = (ulong *)(lVar4 - uVar23);
        }
        _memcpy(*plVar14 + uVar23,puVar8,unaff_x21);
        if (puVar24 < unaff_x21) break;
        plVar14[1] = uVar23 + (long)unaff_x21;
        if (uVar19 == 0x7fffffffffffffff) goto LAB_100639014;
        puVar8 = puVar8 + (long)unaff_x21;
        puVar18 = (ulong *)((long)puVar18 - (long)unaff_x21);
        uVar19 = uVar23 + (long)unaff_x21;
        if (puVar18 == (ulong *)0x0) {
          return (undefined8 *)0x0;
        }
      }
LAB_10063904c:
      puStack_308 = unaff_x21;
      puStack_300 = puVar24;
      __ZN5bytes13panic_advance17h894eeb3b0f978370E(&puStack_308);
LAB_100639058:
      puStack_308 = (ulong *)0xa;
      puVar7 = (undefined8 *)FUN_107c05dbc(&puStack_308,0,0);
      return puVar7;
    }
    lVar4 = plVar14[1];
    unaff_x21 = (ulong *)plVar14[2];
    plVar14 = (long *)*puVar24;
    lVar1 = plVar14[1];
    puVar17 = (ulong *)(ulong)(lVar1 != 0x7fffffffffffffff);
    unaff_x22 = (ulong *)(plVar14[2] - lVar1);
    lVar20 = lVar1;
    if (unaff_x22 < puVar17) {
      __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(plVar14,puVar17,1);
      unaff_x22 = (ulong *)(plVar14[2] - plVar14[1]);
      lVar20 = plVar14[1];
    }
    _memset(*plVar14 + lVar20,0x5b,puVar17);
    if (unaff_x22 < puVar17) goto LAB_1006390d4;
    unaff_x22 = (ulong *)(lVar20 + (long)puVar17);
    plVar14[1] = (long)unaff_x22;
    if (lVar1 == 0x7fffffffffffffff) goto LAB_100639014;
    if (unaff_x21 != (ulong *)0x0) {
      lStack_328 = lVar4 + (long)unaff_x21 * 0x48;
      bVar12 = true;
      unaff_x21 = (ulong *)0x7fffffffffffffff;
      puStack_330 = puVar24;
LAB_100638968:
      unaff_x23 = (ulong *)*puVar24;
      if (!bVar12) {
        puVar15 = (ulong *)unaff_x23[1];
        unaff_x24 = (ulong *)(ulong)(puVar15 != (ulong *)0x7fffffffffffffff);
        puVar17 = (ulong *)(unaff_x23[2] - (long)puVar15);
        unaff_x22 = puVar15;
        if (puVar17 < unaff_x24) {
          __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x23,unaff_x24,1);
          puVar17 = (ulong *)(unaff_x23[2] - (long)unaff_x23[1]);
          unaff_x22 = (ulong *)unaff_x23[1];
        }
        _memset(*unaff_x23 + (long)unaff_x22,0x2c,unaff_x24);
        if (unaff_x24 <= puVar17) {
          unaff_x23[1] = (long)unaff_x22 + (long)unaff_x24;
          if (puVar15 != (ulong *)0x7fffffffffffffff) {
            unaff_x23 = (ulong *)*puVar24;
            goto LAB_1006389d8;
          }
          goto LAB_100639014;
        }
LAB_10063908c:
        auVar29._8_8_ = puVar15;
        auVar29._0_8_ = puVar17;
        puStack_308 = unaff_x24;
        puStack_300 = puVar17;
        __ZN5bytes13panic_advance17h894eeb3b0f978370E(&puStack_308);
        goto LAB_100639098;
      }
LAB_1006389d8:
      unaff_x24 = (ulong *)(lVar4 + 0x18);
      puVar17 = (ulong *)*unaff_x24;
      puVar15 = *(ulong **)(lVar4 + 0x30);
      auVar29._8_8_ = puVar15;
      auVar29._0_8_ = puVar17;
      unaff_x22 = (ulong *)unaff_x23[1];
      puVar21 = (ulong *)(ulong)(unaff_x22 != (ulong *)0x7fffffffffffffff);
      puVar22 = (ulong *)(unaff_x23[2] - (long)unaff_x22);
      puVar25 = unaff_x22;
      lStack_320 = lVar4;
      if (puVar22 < puVar21) {
        __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x23,puVar21,1);
        puVar22 = (ulong *)(unaff_x23[2] - (long)unaff_x23[1]);
        puVar25 = (ulong *)unaff_x23[1];
      }
      _memset(*unaff_x23 + (long)puVar25,0x7b,puVar21);
      lVar4 = lStack_320;
      if (puVar22 < puVar21) {
LAB_100639080:
        puStack_308 = puVar21;
        puStack_300 = puVar22;
        __ZN5bytes13panic_advance17h894eeb3b0f978370E(&puStack_308);
        goto LAB_10063908c;
      }
      unaff_x23[1] = (long)puVar25 + (long)puVar21;
      if (unaff_x22 == (ulong *)0x7fffffffffffffff) goto LAB_100638f50;
      uStack_318 = 0x100;
      puVar18 = *(ulong **)(lStack_320 + 8);
      puVar11 = *(ulong **)(lStack_320 + 0x10);
      puStack_310 = puVar24;
      puVar7 = (undefined8 *)func_0x0001006435cc(&uStack_318,&UNK_108cb16c3,3,puVar18,puVar11);
      if (puVar7 != (undefined8 *)0x0) {
        return puVar7;
      }
      if (puVar17 != (ulong *)0x8000000000000000) {
        if ((byte)uStack_318 == '\x01') goto LAB_100639058;
        puVar18 = unaff_x24;
        puVar7 = (undefined8 *)FUN_10064099c(&uStack_318,&UNK_108c98350,8,unaff_x24);
        if (puVar7 != (undefined8 *)0x0) {
          return puVar7;
        }
      }
      bVar13 = (byte)uStack_318;
      if (puVar15 == (ulong *)0x8000000000000000) {
LAB_100638ed8:
        if (((bVar13 & 1) == 0) && (uStack_318._1_1_ != '\0')) {
          unaff_x23 = (ulong *)*puStack_310;
          puVar15 = (ulong *)unaff_x23[1];
          unaff_x24 = (ulong *)(ulong)(puVar15 != (ulong *)0x7fffffffffffffff);
          puVar17 = (ulong *)(unaff_x23[2] - (long)puVar15);
          unaff_x22 = puVar15;
          if (puVar17 < unaff_x24) {
            __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x23,unaff_x24,1);
            puVar17 = (ulong *)(unaff_x23[2] - (long)unaff_x23[1]);
            unaff_x22 = (ulong *)unaff_x23[1];
          }
          _memset(*unaff_x23 + (long)unaff_x22,0x7d,unaff_x24);
          if (puVar17 < unaff_x24) goto LAB_10063908c;
          unaff_x23[1] = (long)unaff_x22 + (long)unaff_x24;
          if (puVar15 == (ulong *)0x7fffffffffffffff) goto LAB_100638f50;
        }
        bVar12 = false;
        lVar4 = lVar4 + 0x48;
        if (lVar4 == lStack_328) goto LAB_100638fec;
        goto LAB_100638968;
      }
      if ((uStack_318 & 1) != 0) goto LAB_100639058;
      puVar7 = (undefined8 *)FUN_1013fde34(&uStack_318,&UNK_108cb16c6,5);
      puVar15 = puStack_310;
      if (puVar7 != (undefined8 *)0x0) {
        return puVar7;
      }
      if ((byte)uStack_318 == '\x01') goto LAB_100639098;
      unaff_x23 = (ulong *)*puStack_310;
      puVar17 = (ulong *)unaff_x23[1];
      auVar29._8_8_ = puStack_310;
      auVar29._0_8_ = puVar17;
      unaff_x24 = (ulong *)(ulong)(puVar17 != (ulong *)0x7fffffffffffffff);
      unaff_x22 = (ulong *)(unaff_x23[2] - (long)puVar17);
      puVar21 = puVar17;
      if (unaff_x22 < unaff_x24) {
        __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x23,unaff_x24,1);
        unaff_x22 = (ulong *)(unaff_x23[2] - (long)unaff_x23[1]);
        puVar21 = (ulong *)unaff_x23[1];
      }
      _memset(*unaff_x23 + (long)puVar21,0x3a,unaff_x24);
      if (unaff_x22 < unaff_x24) goto LAB_1006390b0;
      unaff_x23[1] = (long)puVar21 + (long)unaff_x24;
      if (puVar17 != (ulong *)0x7fffffffffffffff) {
        unaff_x23 = (ulong *)*puVar15;
        puVar15 = *(ulong **)(lVar4 + 0x38);
        puVar17 = *(ulong **)(lVar4 + 0x40);
        auVar29._8_8_ = puVar15;
        auVar29._0_8_ = puVar17;
        uVar19 = unaff_x23[1];
        unaff_x24 = (ulong *)(ulong)(uVar19 != 0x7fffffffffffffff);
        unaff_x22 = (ulong *)(unaff_x23[2] - uVar19);
        uVar23 = uVar19;
        if (unaff_x22 < unaff_x24) {
          __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x23,unaff_x24,1);
          unaff_x22 = (ulong *)(unaff_x23[2] - unaff_x23[1]);
          uVar23 = unaff_x23[1];
        }
        _memset(*unaff_x23 + uVar23,0x5b,unaff_x24);
        if (unaff_x22 < unaff_x24) goto LAB_1006390b0;
        unaff_x22 = (ulong *)(uVar23 + (long)unaff_x24);
        unaff_x23[1] = (ulong)unaff_x22;
        if (uVar19 == 0x7fffffffffffffff) goto LAB_100638f50;
        if (puVar17 == (ulong *)0x0) {
          unaff_x24 = (ulong *)(ulong)(unaff_x22 != (ulong *)0x7fffffffffffffff);
          puVar15 = (ulong *)(unaff_x23[2] - (long)unaff_x22);
          puVar17 = unaff_x22;
          if (puVar15 < unaff_x24) {
            __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x23,unaff_x24,1);
            puVar17 = (ulong *)unaff_x23[1];
            puVar15 = (ulong *)(unaff_x23[2] - (long)puVar17);
          }
          auVar29._8_8_ = puVar15;
          auVar29._0_8_ = puVar17;
          _memset(*unaff_x23 + (long)puVar17,0x5d,unaff_x24);
          if (unaff_x24 <= puVar15) {
            unaff_x23[1] = (long)puVar17 + (long)unaff_x24;
            if (unaff_x22 != (ulong *)0x7fffffffffffffff) {
              bVar13 = 0;
              lVar4 = lStack_320;
              goto LAB_100638ed8;
            }
            goto LAB_100638f50;
          }
          goto LAB_1006390c8;
        }
        uVar19 = puVar15[1];
        uVar23 = puVar15[2];
        puVar24 = (ulong *)(ulong)(unaff_x22 != (ulong *)0x7fffffffffffffff);
        puVar25 = (ulong *)(unaff_x23[2] - (long)unaff_x22);
        puVar21 = unaff_x22;
        if (puVar25 < puVar24) {
          __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x23,puVar24,1);
          puVar21 = (ulong *)unaff_x23[1];
          puVar25 = (ulong *)(unaff_x23[2] - (long)puVar21);
        }
        _memset(*unaff_x23 + (long)puVar21,0x22,puVar24);
        if (puVar25 < puVar24) {
LAB_10063903c:
          puStack_308 = (ulong *)0x1;
          puStack_300 = (ulong *)0x0;
          __ZN5bytes13panic_advance17h894eeb3b0f978370E(&puStack_308);
          goto LAB_10063904c;
        }
        unaff_x23[1] = (long)puVar21 + (long)puVar24;
        if (unaff_x22 == (ulong *)0x7fffffffffffffff) goto LAB_100638f50;
        puVar8 = (undefined *)FUN_1006572d8(unaff_x23,uVar19,uVar23);
        if (puVar8 != (undefined *)0x0) goto LAB_100638f58;
        puVar21 = (ulong *)unaff_x23[1];
        puVar25 = (ulong *)(ulong)(puVar21 != (ulong *)0x7fffffffffffffff);
        unaff_x22 = (ulong *)(unaff_x23[2] - (long)puVar21);
        puVar24 = puVar21;
        if (unaff_x22 < puVar25) {
          __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x23,puVar25,1);
          unaff_x22 = (ulong *)(unaff_x23[2] - (long)unaff_x23[1]);
          puVar24 = (ulong *)unaff_x23[1];
        }
        _memset(*unaff_x23 + (long)puVar24,0x22,puVar25);
        if (unaff_x22 < puVar25) goto LAB_10063903c;
        puVar24 = (ulong *)((long)puVar24 + (long)puVar25);
        unaff_x23[1] = (ulong)puVar24;
        if (puVar21 == (ulong *)0x7fffffffffffffff) goto LAB_100638f50;
        if (puVar17 != (ulong *)0x1) {
          lVar4 = (long)puVar17 * 0x18;
          puVar17 = puVar15 + 5;
          puVar15 = (ulong *)(lVar4 - 0x18);
          do {
            unaff_x24 = (ulong *)puVar17[-1];
            puVar21 = (ulong *)*puVar17;
            puVar22 = (ulong *)(ulong)(puVar24 != (ulong *)0x7fffffffffffffff);
            puVar25 = (ulong *)(unaff_x23[2] - (long)puVar24);
            unaff_x22 = puVar24;
            if (puVar25 < puVar22) {
              __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x23,puVar22,1);
              unaff_x22 = (ulong *)unaff_x23[1];
              puVar25 = (ulong *)(unaff_x23[2] - (long)unaff_x22);
            }
            _memset(*unaff_x23 + (long)unaff_x22,0x2c,puVar22);
            if (puVar25 < puVar22) {
              puStack_308 = puVar22;
              puStack_300 = puVar25;
              __ZN5bytes13panic_advance17h894eeb3b0f978370E(&puStack_308);
              goto LAB_100639080;
            }
            uVar19 = (long)unaff_x22 + (long)puVar22;
            unaff_x23[1] = uVar19;
            if (puVar24 == (ulong *)0x7fffffffffffffff) goto LAB_100638f50;
            puVar24 = (ulong *)(ulong)(uVar19 != 0x7fffffffffffffff);
            puVar25 = (ulong *)(unaff_x23[2] - uVar19);
            uVar23 = uVar19;
            if (puVar25 < puVar24) {
              __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x23,puVar24,1);
              puVar25 = (ulong *)(unaff_x23[2] - unaff_x23[1]);
              uVar23 = unaff_x23[1];
            }
            _memset(*unaff_x23 + uVar23,0x22,puVar24);
            if (puVar25 < puVar24) goto LAB_10063903c;
            unaff_x23[1] = uVar23 + (long)puVar24;
            if (uVar19 == 0x7fffffffffffffff) goto LAB_100638f50;
            puVar8 = (undefined *)FUN_1006572d8(unaff_x23,unaff_x24,puVar21);
            if (puVar8 != (undefined *)0x0) goto LAB_100638f58;
            puVar21 = (ulong *)unaff_x23[1];
            puVar25 = (ulong *)(ulong)(puVar21 != (ulong *)0x7fffffffffffffff);
            unaff_x22 = (ulong *)(unaff_x23[2] - (long)puVar21);
            puVar24 = puVar21;
            if (unaff_x22 < puVar25) {
              __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x23,puVar25,1);
              unaff_x22 = (ulong *)(unaff_x23[2] - (long)unaff_x23[1]);
              puVar24 = (ulong *)unaff_x23[1];
            }
            _memset(*unaff_x23 + (long)puVar24,0x22,puVar25);
            if (unaff_x22 < puVar25) goto LAB_10063903c;
            puVar24 = (ulong *)((long)puVar24 + (long)puVar25);
            unaff_x23[1] = (ulong)puVar24;
            if (puVar21 == (ulong *)0x7fffffffffffffff) goto LAB_100638f50;
            puVar17 = puVar17 + 3;
            puVar15 = puVar15 + -3;
          } while (puVar15 != (ulong *)0x0);
        }
        unaff_x24 = (ulong *)(ulong)(puVar24 != (ulong *)0x7fffffffffffffff);
        puVar15 = (ulong *)(unaff_x23[2] - (long)puVar24);
        puVar17 = puVar24;
        if (puVar15 < unaff_x24) {
          __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x23,unaff_x24,1);
          puVar17 = (ulong *)unaff_x23[1];
          puVar15 = (ulong *)(unaff_x23[2] - (long)puVar17);
        }
        auVar29._8_8_ = puVar15;
        auVar29._0_8_ = puVar17;
        _memset(*unaff_x23 + (long)puVar17,0x5d,unaff_x24);
        if (puVar15 < unaff_x24) goto LAB_1006390c8;
        unaff_x23[1] = (long)puVar17 + (long)unaff_x24;
        if (puVar24 != (ulong *)0x7fffffffffffffff) {
          bVar13 = 0;
          lVar4 = lStack_320;
          puVar24 = puStack_330;
          goto LAB_100638ed8;
        }
      }
LAB_100638f50:
      puVar8 = &UNK_10b233fc8;
LAB_100638f58:
      uVar10 = 0x100638f5c;
      goto SUB_107c05db8;
    }
    puVar17 = (ulong *)(ulong)(unaff_x22 != (ulong *)0x7fffffffffffffff);
    unaff_x21 = (ulong *)(plVar14[2] - (long)unaff_x22);
    puVar24 = unaff_x22;
    if (unaff_x21 < puVar17) {
      __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(plVar14,puVar17,1);
      unaff_x21 = (ulong *)(plVar14[2] - plVar14[1]);
      puVar24 = (ulong *)plVar14[1];
    }
    _memset(*plVar14 + (long)puVar24,0x5d,puVar17);
    if (puVar17 <= unaff_x21) {
      plVar14[1] = (long)puVar24 + (long)puVar17;
      goto joined_r0x000100638fc4;
    }
  }
  puStack_308 = puVar17;
  puStack_300 = unaff_x21;
  plVar14 = (long *)__ZN5bytes13panic_advance17h894eeb3b0f978370E(&puStack_308);
  FUN_1013fe3ec();
  if ((char)*plVar14 == '\x01') {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24d400);
    lVar4 = extraout_x1;
  }
  else {
    unaff_x22 = (ulong *)plVar14[1];
    plVar14 = (long *)*unaff_x22;
    lVar4 = plVar14[2];
    if (*plVar14 != lVar4) goto LAB_100639130;
  }
  thunk_FUN_108855060(plVar14,lVar4,1,1,1);
  lVar4 = plVar14[2];
LAB_100639130:
  *(undefined1 *)(plVar14[1] + lVar4) = 0x3a;
  plVar14[2] = lVar4 + 1;
  plVar14 = (long *)*unaff_x22;
  lVar4 = plVar14[2];
  if (*plVar14 == lVar4) {
    thunk_FUN_108855060(plVar14,lVar4,1,1,1);
    lVar4 = plVar14[2];
  }
  *(undefined1 *)(plVar14[1] + lVar4) = 0x22;
  plVar14[2] = lVar4 + 1;
  puVar7 = (undefined8 *)FUN_100657654(plVar14,puVar18,puVar11);
  lVar4 = plVar14[2];
  if (*plVar14 == lVar4) {
    puVar7 = (undefined8 *)thunk_FUN_108855060(plVar14,lVar4,1,1,1);
    lVar4 = plVar14[2];
  }
  *(undefined1 *)(plVar14[1] + lVar4) = 0x22;
  plVar14[2] = lVar4 + 1;
  return puVar7;
LAB_100638fec:
  unaff_x22 = *(ulong **)(*puVar24 + 8);
  __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
            (*puVar24,&UNK_108ca7637,unaff_x22 != (ulong *)0x7fffffffffffffff);
joined_r0x000100638fc4:
  if (unaff_x22 != (ulong *)0x7fffffffffffffff) {
    return (undefined8 *)0x0;
  }
LAB_100639014:
  puVar8 = &UNK_10b233fc8;
  ppuVar3 = (ulong **)&lStack_290;
  puVar15 = puVar5;
  puVar17 = param_2;
  pppppppuVar26 = pppppppuStack_2a0;
  uVar10 = uStack_298;
SUB_107c05db8:
  *(ulong **)((long)ppuVar3 + -0x20) = puVar17;
  *(ulong **)((long)ppuVar3 + -0x18) = puVar15;
  *(undefined8 ********)((long)ppuVar3 + -0x10) = pppppppuVar26;
  *(undefined8 *)((long)ppuVar3 + -8) = uVar10;
  *(undefined8 *)((long)ppuVar3 + -0x48) = 1;
  *(undefined **)((long)ppuVar3 + -0x40) = puVar8;
  *(undefined8 *)((long)ppuVar3 + -0x30) = 0;
  *(undefined8 *)((long)ppuVar3 + -0x28) = 0;
  puVar7 = (undefined8 *)_malloc(0x28);
  if (puVar7 == (undefined8 *)0x0) {
    func_0x0001087c906c(8,0x28);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x108a4a0e0);
    (*pcVar2)();
  }
  uVar10 = *(undefined8 *)((long)ppuVar3 + -0x48);
  uVar28 = *(undefined8 *)((long)ppuVar3 + -0x30);
  uVar27 = *(undefined8 *)((long)ppuVar3 + -0x38);
  puVar7[1] = *(undefined8 *)((long)ppuVar3 + -0x40);
  *puVar7 = uVar10;
  puVar7[3] = uVar28;
  puVar7[2] = uVar27;
  puVar7[4] = *(undefined8 *)((long)ppuVar3 + -0x28);
  return puVar7;
}

